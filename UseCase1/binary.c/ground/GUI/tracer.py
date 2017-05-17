#!/usr/bin/env python
import sys
import os
import subprocess
import socket
import re
import cPickle
import time
from tracerCommon import RenderParameterFields

g_messageId = 512
g_clientSocket = None
g_clientSocket2 = None
g_ThisGUI = ""
g_ThisGUI_ID = ""
g_bNoParams = False
g_bDebug = False


def CreateNewID():
    global g_messageId
    g_messageId += 1
    return '0x%02x' % g_messageId


def SendMessage(message, timestamp, messageData):
    PIRIname = message
    if not g_bNoParams:
        message = RenderParameterFields(message, messageData)
    newId = CreateNewID()
    s = 'messageSent| -t%d| %s| %s| %s|\n' % \
        (int(timestamp), g_ThisGUI_ID, newId, message)
    g_clientSocket.send(s)
    s = 'messageReceived| -t%d| 0x01| %s| %s|\n' % \
        (int(timestamp), g_messageId, message)
    g_clientSocket.send(s)
    g_clientSocket2.send("PICKLED!@#$TC###%d###%s###%s###%s###TC!@#$END!@#$" % \
        (int(timestamp), g_ThisGUI, PIRIname, cPickle.dumps(messageData)))


def ReceiveMessage(message, timestamp, messageData):
    PIRIname = message
    if not g_bNoParams:
        message = RenderParameterFields(message, messageData)
    newId = CreateNewID()
    s = 'messageSent| -t%d| 0x01| %s| %s|\n' % \
        (int(timestamp), newId, message)
    g_clientSocket.send(s)
    s = 'messageReceived| -t%d| %s| %s| %s|\n' % \
        (int(timestamp), g_ThisGUI_ID, newId, message)
    g_clientSocket.send(s)
    g_clientSocket2.send("PICKLED!@#$TM###%d###%s###%s###%s###TC!@#$END!@#$" % \
        (int(timestamp), g_ThisGUI, PIRIname, cPickle.dumps(messageData)))


def main():
    if "-debug" in sys.argv:
        global g_bDebug
        g_bDebug = True
        sys.argv.remove("-debug")
    if "-noParams" in sys.argv:
        global g_bNoParams
        g_bNoParams = True
        sys.argv.remove("-noParams")
    if len(sys.argv) != 2:
        print "Usage:", sys.argv[0], "[-noParams] <GUI_binary1>"
        #print "where ipaddress and port point to the tracerd port."
        sys.exit(1)
    try:
        # ipaddress, port = sys.argv[1:3]
        ipaddress, port = "127.0.0.1", "27182"
        port = int(port)
        global g_clientSocket, g_clientSocket2
        g_clientSocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        g_clientSocket.connect((ipaddress, port))
        g_clientSocket2 = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        g_clientSocket2.connect((ipaddress, port+1))
    except:
        print "Could not connect to tracerd..."
        sys.exit(1)
    else:
        print "Connected to tracerd"

    # MainSystem
    g_clientSocket.send('taskCreated| -nMainSystem| 0x01|\n')

    # Measure how many tracers are running (herding the GUIs)
    count = 0
    for line in os.popen("ps aux").readlines():
        if sys.argv[0] in line:
            count += 1

    global g_ThisGUI, g_ThisGUI_ID
    g_ThisGUI = os.path.basename(sys.argv[-1])
    g_ThisGUI_ID = '0x%02x' % (1 + count)
    g_clientSocket.send('taskCreated| -n%s| %s|\n' % (g_ThisGUI, g_ThisGUI_ID))

    p = None
    try:
        if not g_bDebug:
            p = subprocess.Popen(sys.argv[-1], stdout=subprocess.PIPE)
            source = iter(p.stdout.readline, '')
        else:
            source = open(sys.argv[-1]).readlines()
        messageData = {}
        for line in source:
            if g_bDebug:
                time.sleep(0.1)
            lline = line.strip()
            # Example data received:
            #
            # TCDATA: router_put_tc::tc {destination displayer, action display:'61626364'H}
            # TC router_put_tc at 34956722744490
            # TMDATA: gui_send_tm::tm '61626364'H
            # TM gui_send_tm at 34957928816184
            m = re.match('^T.DATA: ([^:]*)::(.*)$', lline)
            if m:
                # group(1) is the name of the PI
                # group(2) is the "paramName value"
                messageData.setdefault(m.group(1), []).append(m.group(2))
            else:
                for prefix in ['TM ', 'TC ']:
                    if lline.startswith(prefix):
                        fields = lline.split()
                        # fields[1] is the name of the PI ("message")
                        message, timestamp = fields[1], fields[3]
                        if message not in messageData.keys():
                            messageData[message] = []
                        callbacks = {'TM ': ReceiveMessage, 'TC ': SendMessage}
                        # Example data: router_put_tc, 701044505077, ['tc::destination 0', 'tc::action::display abc']
                        callbacks[prefix](message, timestamp, ",".join(messageData[message]))
                        messageData[message] = []
                        break
                else:
                    sys.stdout.write(line)
                    sys.stdout.flush()
    except:
        if p:
            p.kill()
    if p:
        p.wait()

if __name__ == "__main__":
    main()
