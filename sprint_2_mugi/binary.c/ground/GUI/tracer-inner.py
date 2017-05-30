#!/usr/bin/env python
import os
import sys
import subprocess
import socket
import re
import signal
import errno
import cPickle
from tracerCommon import RenderParameterFields

g_messageId = 512
g_clientSocket = None
g_clientSocket2 = None
g_bNoParams = False


def Message(senderID, receiverID, timestamp, message, messageData, sender,
            receiver):
    ''' Send a message to tracerd ; messageData is a list of tuples
        (ASN.1 Type, FieldName Value)
    '''
    if not g_bNoParams:
        message = RenderParameterFields(message, ",".join(
                                             [tup[1] for tup in messageData]))
    global g_messageId
    newId = '0x%02x' % g_messageId
    g_messageId += 1
    s = 'messageSent| -t%s| %s| %s| %s|\n' % \
        (timestamp, senderID, newId, message)
    g_clientSocket.send(s)
    #print s
    g_clientSocket2.send("PICKLED!@#$TC"
                         "###{timestamp}"
                         "###{sender_hex}"
                         "###{msg}"
                         "###{data}"
                         "###{receiver_hex}"
                         "###TC!@#$END!@#$".format(
                            timestamp=int(timestamp),
                            sender_hex=sender,
                            receiver_hex=receiver,
                            msg=message,
                            data=cPickle.dumps(messageData)))

    s = 'messageReceived| -t%s| %s| %s| %s|\n' % \
        (timestamp, receiverID, newId, message)
    #print s
    g_clientSocket.send(s)
    g_clientSocket2.send("PICKLED!@#$TM"
                         "###{timestamp}"
                         "###{receiver_hex}"
                         "###{msg}"
                         "###{data}"
                         "###{sender_hex}"
                         "###TC!@#$END!@#$".format(
                             timestamp=int(timestamp),
                             receiver_hex=receiver,
                             sender_hex=sender,
                             msg=message,
                             data=cPickle.dumps(messageData)))


def main():
    if "-noParams" in sys.argv:
        global g_bNoParams
        g_bNoParams = True
        sys.argv.remove("-noParams")
    if len(sys.argv) != 4:
        print "Usage:", sys.argv[0], "[-noParams] <application>"
        print "where ipaddress and port point to the tracerd port."
        sys.exit(1)
    try:
        #ipaddress, port = sys.argv[1:3]
        ipaddress, port = "127.0.0.1", 27182
        global g_clientSocket, g_clientSocket2
        g_clientSocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        g_clientSocket.connect((ipaddress, port))
        g_clientSocket2 = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        g_clientSocket2.connect((ipaddress, port+1))
    except:
        print "Could not connect to tracerd..."
        sys.exit(1)
    else:
        print 'Connected to tracerd'

    os.putenv("TASTE_INNER_MSC", "1")
    os.putenv("ASSERT_IGNORE_GUI_ERRORS", "1")

    p = None
    try:
        p = subprocess.Popen(sys.argv[3], stdout=subprocess.PIPE)
        messageData = {}
        tasks = {}
        for line in iter(p.stdout.readline, ''):
            lline = line.strip()
            #print "WORKING ON:", lline
            m = re.match('^INNERDATA: ([^:]*)::(.*)::(.*)$', lline)
            # group(1) = message name, (2) = param type (3) = 'fieldName value'
            if m:
                # Add type and value to the messageData
                # Type is used when storing the MSC to declare messages
                messageData.setdefault(m.group(1), []).append(
                                                (m.group(2), m.group(3)))
            elif lline.startswith('INNER: '):
                sender, receiver, ri, timestamp = lline[7:].split(',')
                #print sender, receiver, ri, timestamp
                if ri not in messageData.keys():
                    # no parameters
                    messageData[ri] = []
                for task in [sender, receiver]:
                    if task not in tasks:
                        newTaskId = '0x%02x' % (1+ len(tasks))
                        tasks[task] = newTaskId
                        g_clientSocket.send('taskCreated| -n%s| %s|\n' %
                                            (task, newTaskId))
                Message(tasks[sender], tasks[receiver],
                        timestamp, ri, messageData[ri], sender, receiver)
                messageData[ri] = []
            else:
                sys.stdout.write(line)
                sys.stdout.flush()
    except KeyboardInterrupt:
        if p:
            print "Sending SIGINT to", sys.argv[3]
            p.send_signal(signal.SIGINT)
    except socket.error, e:
        if e.args[0] == errno.EINTR:  # Ctrl-C interrupted socket system call
            if p:
                print "Sending SIGINT to", sys.argv[3]
                p.send_signal(signal.SIGINT)
        else:
            if p:
                print "Error while speaking to tracerd:", e.args[1]
                p.kill()
#   except:
#       print "Unexpected error:", sys.exc_info()[0]
#       if p:
#           print "Killing", sys.argv[3]
#           p.kill()
    if p:
        p.wait()
    print "Clean shutdown"

if __name__ == "__main__":
    main()
