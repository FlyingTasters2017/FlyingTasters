#!/usr/bin/env python
import sys
import os
import socket
import signal
import time
import re
import threading
import errno
import getopt
import cPickle

g_ipaddress = ""
g_strMscFilename = ""
g_messages = {}
g_messages2 = {}
g_clientSocket = None
g_abort = False
g_threads = []
g_completeLog = {}
g_lockMSC = None
g_mscDumped = False
g_messagesDecl = {}
# global variables used to keep track of the message ordering
g_timestamp = 0
g_order = 0

def panic(x, exitCode=1):
    if not x.endswith("\n"):
        x += "\n"
    sys.stderr.write(x)
    sys.exit(exitCode)


def abortFunction():
    global g_mscDumped
    g_lockMSC.acquire()
    print 'Closing tasted'
    #try:
    if not g_mscDumped and g_strMscFilename != "":
        f = open(g_strMscFilename, "w")
        f.write('mscdocument automade;\n'
                '    language ASN.1;\n'
                '    data dataview-uniq.asn;\n')
        for k in g_completeLog.viewkeys():
            # Declare all instances (corresponding to FV)
            if not k.endswith('_timer_manager'):
                f.write('    inst {};\n'.format(k))
        f.write('\n')

        # Declare all messages and type of their parameter(s)
        for msg, paramList in g_messagesDecl.viewitems():
            params = ','.join(paramList)
            f.write('    msg {name} : ({params});\n'.format
                    (name=msg, params=params.replace('_', '-')))
        f.write('\n')

        f.write('    msc recorded;\n')
        # k is the instance name
        for k in g_completeLog.viewkeys():
            if k.endswith('_timer_manager'):
                continue
            f.write('        {}: instance;\n'.format(k))
            # v is the list of message from/to this instance
            for v in g_completeLog[k]:
                timestamp, kind, _, message, receiver, messageParams, order = v
                if type(messageParams) == list:
                    messageParams = ''.join(messageParams)
                messageParams = re.sub(r'^\w+\s*', '', messageParams)
                first = "in" if kind == 'TM' else 'out'
                second = "from" if kind == 'TM' else 'to'
                # message format is PIName:PARAM. remove PARAM
                message_id = message.split(':')[0]
                # timer SET or RESET: use the proper MSC construct
                if(message_id.startswith(('SET', 'RESET')) and
                  receiver.endswith('_timer_manager')):
                    if message_id.startswith('SET'):
                        action, timername = 'starttimer', message_id[4:]
                    else:
                        action, timername = 'stoptimer', message_id[6:]
                    f.write('            {action} {name}{val};\n'.format(
                            action=action,
                            name=timername,
                            val='_' + messageParams + 'ms' if messageParams
                            else ''))
                elif kind == 'TM' and receiver.endswith('timer_manager'):
                    timername = message_id[len(k)+1:]
                    f.write('            timeout {};\n'.format(timername))
                else:
                    f.write('            {first} {mid},{nb}'
                            '({param}) {sec} {to};\n'
                            .format(first=first,
                                    mid=message_id,
                                    nb=order,
                                    param=messageParams,
                                    sec=second,
                                    to=receiver))
            f.write('        endinstance;\n\n')
        f.write('    endmsc;\n')
        f.write('endmscdocument;\n')
        f.close()
    g_mscDumped = True
    #except:
    #    print "Exception happened while saving output (%s)" % g_strMscFilename
    g_lockMSC.release()

    global g_abort
    g_abort = True
    print "Ctrl-C pressed, waiting for threads to finish..."
    for t in g_threads:
        print "Thread dying..."
        t.join()
    print "Clean shutdown"
    sys.exit(0)


def mysend(s, firstTS=[]):
    ''' Send to Pragmadev MSC Tracer '''
    msgWithFixedTS = ""
    while True:
        m = re.search('^(.*?)-t([0-9]+)\|(.*)$', s, re.DOTALL)
        if m:
            currTS = long(float(m.group(2))/1e6)
            if not firstTS:
                firstTS.append(currTS)
            #print "Replacing", m.group(2), "with", str(currTS - firstTS[0])
            msgWithFixedTS += m.group(1) + "-t" + str(currTS - firstTS[0]) + '|'
            s = m.group(3)
        else:
            msgWithFixedTS += s
            break
    #print "FINAL:", "\nFINAL: ".join(msgWithFixedTS.split('\n')), "\n"
    g_clientSocket.send(msgWithFixedTS)
    g_clientSocket.send('wa|\n')
    while True:
        try:
            g_clientSocket.setblocking(False)
            a = g_clientSocket.recv(4096)
            g_clientSocket.setblocking(True)
            if a == "ack":
                return
        except KeyboardInterrupt:
            abortFunction()
        except socket.error, (err, msg):
            if err == errno.EAGAIN:
                try:
                    time.sleep(0.1)
                except KeyboardInterrupt:
                    abortFunction()
            elif err == errno.EINTR:
                abortFunction()
            else:
                print "Socket error:", msg
                abortFunction()


class GUIThread(threading.Thread):
    # def __init__(self, conn, addr, lockSocket):
    def __init__(self, conn, _, lockSocket):
        threading.Thread.__init__(self)
        self._conn = conn
        self._conn.settimeout(1.0)
        self._lock = lockSocket
        #print '###Connection from', addr, 'thread spawned'
        print '[tracerd] Control thread connected'

    def run(self):
        while not g_abort:
            try:
                data = self._conn.recv(2048)
                if not data:
                    raise Exception()
                #print '### Received', data.strip()
                if data[-1] != '\n':
                    print '### Fragmentation... message lost\n'
                    panic('### Lost data was:' + str(data))
                if 'taskCreated' in data:
                    self._lock.acquire()
                    g_messages[(time.time(), 0, data)] = 1
                    self._lock.release()
                    #print "### Added it...:\n", str(g_messages)
                else:
                    m = re.search('-t([0-9]+)', data)
                    if m:
                        self._lock.acquire()
                        g_messages[(time.time(), int(m.group(1)), data)] = 1
                        self._lock.release()
                        #print "### Added it...:\n", str(g_messages)
                    else:
                        print '### Unknown data received:', data
            except:
                try:
                    time.sleep(0.1)
                except KeyboardInterrupt:
                    abortFunction()
                continue
        self._conn.close()


class MsgThread(threading.Thread):
    # def __init__(self, conn, addr, lockSocket):
    def __init__(self, conn, addr, lockSocket):
        threading.Thread.__init__(self)
        _ = addr
        self._conn = conn
        self._conn.settimeout(1.0)
        self._lock = lockSocket
        print '[tracerd] Data thread connected'

    def run(self):
        collection = ""
        while not g_abort:
            try:
                data = self._conn.recv(8192)
                if not data:
                    raise Exception()
            except KeyboardInterrupt:
                abortFunction()
            except:
                try:
                    time.sleep(0.1)
                except KeyboardInterrupt:
                    abortFunction()
                continue
            collection += data
            #print collection
            lines = collection.split('!@#$')
            #print "LINES:", lines, len(lines)
            while len(lines) >= 3:
                if lines[0] != "PICKLED" or lines[2] != "END":
                    panic("Protocol error, data=" + str(collection))
                (kind,         # TM or TC
                 timestamp,
                 sender,       # Hex format
                 message,
                 messageData,
                 receiver,     # Hex format
                 _) = lines[1].split('###')
                # Decode list of message parameters and value
                # (List of tuples (ASN.1 type, FieldName Value)
                messageData = cPickle.loads(messageData)
                asn1Params = [tup[1] for tup in messageData]
                lines = lines[3:]
                self._lock.acquire()
                global g_timestamp
                global g_order
                if timestamp != g_timestamp:
                    g_order += 1
                    g_timestamp = timestamp
                g_messages2[(time.time(),
                             timestamp,
                             kind,
                             sender,
                             message,
                             receiver,
                             g_order)] = asn1Params
                # Update global set containing all encountered messages
                # in order to declare them in the MSC file at the end
                paramTypes = [tup[0] for tup in messageData]
                g_messagesDecl[message.split(':')[0]] = paramTypes
                self._lock.release()
            collection = "\n".join(lines)
        self._conn.close()


def usage():
    panic("TASTE MSC daemon, revision: $Rev: 2351 $\n"
        "Usage: " + os.path.basename(sys.argv[0]) + " <options>\nWhere <options> are:\n\n"
        "-f, --forward <ipAddress:port>\n\tConnect to PragmaDev MSC tracer.\n\n"
        "-s, --store <filename.msc>\n\tStore message exchanges to MSC file.\n\n"
        "-h, --help\n\tThis help\n\n")


def main():
    try:
        args = sys.argv[1:]
        optlist, args = getopt.gnu_getopt(
                args, "hf:s:", ['help', 'forward=', 'store='])
    except:
        usage()

    global g_ipaddress, g_strMscFilename
    g_ipaddress = g_strMscFilename = ""
    for opt, arg in optlist:
        if opt in ("-h", "--help"):
            usage()
        elif opt in ("-s", "--store"):
            g_strMscFilename = arg
        elif opt in ("-f", "--forward"):
            try:
                g_ipaddress, port = arg.split(":")
            except:
                usage()

    if g_strMscFilename == "" and g_ipaddress == "":
        usage()

    if g_ipaddress != "":
        try:
            port = int(port)
            global g_clientSocket
            g_clientSocket = socket.socket(
                                    socket.AF_INET, socket.SOCK_STREAM)
            g_clientSocket.connect((g_ipaddress, port))
        except:
            panic("Could not connect to MSC tracer...")

    lockSocket = threading.Lock()
    global g_lockMSC
    g_lockMSC = threading.Lock()

    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    s.settimeout(0.1)
    s.bind(('', 27182))
    s.listen(16)  # Up to 16 GUIs

    s2 = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s2.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    s2.settimeout(0.1)
    s2.bind(('', 27183))
    s2.listen(16)  # Up to 16 GUIs

    global g_abort
    g_abort = False
    while not g_abort:
        toSort = []
        toSort2 = []
        lockSocket.acquire()
        currentTime = time.time()
        for x in g_messages.keys():
            if x[0]+1.0<currentTime:
                toSort.append((x[1], x[0], x[2]))
                del g_messages[x]
        currentTime = time.time()
        for x, value in g_messages2.items():
            (time_ref, timestamp, kind, sender, msg, receiver, order) = x
            if time_ref+1.0<currentTime:
                toSort2.append(
                        (timestamp,
                         time_ref,
                         kind,
                         sender,
                         msg,
                         receiver,
                         value,
                         order))
                del g_messages2[x]
        lockSocket.release()
        if toSort:
            toSort.sort()
            for d in toSort:
                # Are we in repeater mode - i.e. forwarding to PragmaDev
                # MSC Tracer?
                #print "###### Sending", d[2]
                if g_ipaddress != "":
                    #print "### Sending", d[2]
                    mysend(d[2])
        if toSort2:
            toSort2.sort()
            for d in toSort2:
                # Are we in recording mode?
                if g_strMscFilename != "":
                    (timestamp,
                    _,
                    kind,
                    sender,
                    message,
                    receiver,
                    messageParams,
                    order) = d
                    g_completeLog.setdefault(sender, []).append(
                         (timestamp,
                         kind,
                         sender,
                         message,
                         receiver,
                         messageParams,
                         order))

        def PollSocketNonBlock(sock, threadClass):
            try:
                conn, addr = sock.accept()
                g_threads.append(threadClass(conn, addr, lockSocket))
                g_threads[-1].start()
            except KeyboardInterrupt:
                abortFunction()
            except socket.timeout:
                try:
                    time.sleep(0.1)
                except KeyboardInterrupt:
                    abortFunction()
            except socket.error, e:
                if e.args[0] == errno.EINTR:
                    abortFunction()
                else:
                    print "Socket error:", sock
                    abortFunction()
            except:
                raise
        PollSocketNonBlock(s, GUIThread)
        PollSocketNonBlock(s2, MsgThread)

if __name__ == "__main__":
    signal.signal(signal.SIGINT, lambda x,y: abortFunction)
    main()
