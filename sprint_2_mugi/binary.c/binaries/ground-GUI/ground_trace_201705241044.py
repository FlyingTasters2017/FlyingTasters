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

# Generated due to "ground_trace_201705241044.msc"
# From the section: MSCDOCUMENT automade


@Scenario
def Exercise_ground(queue):
    '''ground processing'''
    queue.sendMsg('Takeoff', '{x 0.0, y 0.0, z 2.0, yaw 0.0}', lineNo=11)
    queue.sendMsg('Takeoff', '{x 0.0, y 0.0, z 2.0, yaw 0.0}', lineNo=12)
    queue.sendMsg('Takeoff', '{x 0.0, y 0.0, z 2.0, yaw 0.0}', lineNo=13)
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
