#!/usr/bin/env python
#
# Automatically generated Python sequence chart (MSC) implementation

import os
import sys
import signal
import Queue

taste_inst = os.popen('taste-config --prefix').readlines()[0].strip()
sys.path.append(taste_inst+'/share/asn1-editor')

from asn1_value_editor.Scenario import Scenario, PollerThread
from PySide.QtCore import QCoreApplication, Qt
from asn1_value_editor.udpcontroller import tasteUDP

# Generated due to "ground_trace_201705171457.msc"
# From the section: MSCDOCUMENT automade


@Scenario
def Exercise_ground(queue):
    '''ground processing'''
    queue.sendMsg('Takeoff', '2.0', lineNo=34)
    try:
        queue.expectMsg('Height', '0.0', lineNo=35, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('dHeight', '0.0', lineNo=36, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('Height', '1.48148148148', lineNo=37, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('dHeight', '0.148148148148', lineNo=38, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('dHeight', '0.444444444444', lineNo=39, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('Height', '2.96296296296', lineNo=40, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('dHeight', '0.82304526749', lineNo=41, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('Height', '3.78600823045', lineNo=42, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('dHeight', '1.20713305898', lineNo=43, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('Height', '3.84087791495', lineNo=44, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('dHeight', '1.53818015546', lineNo=45, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('Height', '3.31047096479', lineNo=46, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('dHeight', '1.78570339887', lineNo=47, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('Height', '2.47523243408', lineNo=48, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('Height', '1.59122085048', lineNo=49, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('dHeight', '1.94482548392', lineNo=50, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('dHeight', '2.02814611594', lineNo=51, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('Height', '0.833206320175', lineNo=52, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('Height', '0.284735276352', lineNo=53, ignoreOther=False)
    except TypeError as err:
        raise
    try:
        queue.expectMsg('dHeight', '2.05661964357', lineNo=54, ignoreOther=False)
    except TypeError as err:
        raise
    queue.sendMsg('Takeoff', '2.0', lineNo=55)
    queue.sendMsg('Takeoff', '2.0', lineNo=56)
    queue.sendMsg('Takeoff', '2.0', lineNo=57)
    return 0

def runScenario(pipe_in=None, pipe_out=None, udpController=None):
    # Queue for getting scenario status
    log = Queue.Queue()
    if udpController:
        ground = Exercise_ground(log, name='Scenario')
        udpController.slots.append(ground.msq_q)
        ground.wait()
        udpController.slots.remove(ground.msg_q)
        return 0 # ground.status
    else:
    # Use old-style message queue
        poller = PollerThread()
        ground = Exercise_ground(log, name='Scenario')
        poller.slots.append(ground.msg_q)
        poller.start()
        ground.start()
        # Wait and log messages from both scenarii
        while True:
            try:
                scenario, severity, msg = log.get(block=False)
            except Queue.Empty:
                pass
            else:
                log.task_done()
                try:
                    # If called from the GUI, send log through pipe
                    pipe_out.send((scenario, severity, msg))
                except AttributeError:
                    print('[{level}] {name} - {msg}'.format
                        (level=severity, name=scenario, msg=msg))
                if severity == 'ERROR' or msg == 'END':
                    # Stop execution on first error or completed scenario
                    try:
                        pipe_out.send(('All', 'COMMAND', 'END'))
                    except AttributeError:
                        ground.stop()
                        poller.stop()
                        return
                try:
                    if pipe_out.poll():
                        cmd = pipe_out.recv()
                        if cmd == 'STOP':
                            ground.stop()
                            poller.stop()
                            return
                except AttributeError:
                    pass


if __name__ == "__main__":
    signal.signal(signal.SIGINT, signal.SIG_DFL)
    udpController = None
    if '--udp' in sys.argv:
        # Create UDP Controller with default IP/Port values (127.0.0.1:7755:7756)
        udpController = tasteUDP()
    QCoreApplication(sys.argv)
    sys.exit(runScenario(udpController))
