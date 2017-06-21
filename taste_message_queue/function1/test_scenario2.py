#!/usr/bin/env python
#
# Automatically generated Python sequence chart (MSC) implementation

import errno
import socket
import struct

import os
import sys
import signal
import Queue
import time

taste_inst = os.popen('taste-config --prefix').readlines()[0].strip()
sys.path.append(taste_inst+'/share/asn1-editor')

from asn1_value_editor.Scenario import Scenario, PollerThread
from PySide.QtCore import QCoreApplication, Qt
from asn1_value_editor.udpcontroller import tasteUDP

# Generated due to "function2_trace_201706091424.msc"
# From the section: MSCDOCUMENT automade

import TC_from_TASTE_backend as TC
import TM_from_CF_backend as TM


# create an INET, STREAMing socket
serversocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    
# Packet receiving
def recv_packet(sock):
    
    try:
        # Read message length (unsigned int = 4 bytes)
        raw_msglen = recv_length(sock, 4)

        if not raw_msglen:
            return None

    except socket.error as msg:
        if msg.args[0] == errno.EWOULDBLOCK: 
            time.sleep(0.01)
            return None           # short delay, no tight loops
        else:
            print(msg)
            sys.exit(1)

    # And unpack it into an integer
    msglen = struct.unpack('>I', raw_msglen)[0]

    # Then read the message data
    return recv_data(sock, msglen)
  
# Get length
def recv_length(sock, n):
    # Helper function to receive n bytes or return None if EOF is hit
    data = b""
    while len(data) < n:
        
        packet = sock.recv(n - len(data))
            
        if not packet:
            return None
            
        data += packet
            
    # Return bytes
    return data

# Get bytes
def recv_data(sock, n):
    # Helper function to receive n bytes or return None if EOF is hit
    data = b""
    while len(data) < n:
        
        try:
            # Read message length (unsigned int = 4 bytes)
            packet = sock.recv(n - len(data))
            
            if not packet:
                return None
            
            data += packet
            
        except socket.error as msg:
            if msg.args[0] == errno.EWOULDBLOCK: 
                time.sleep(0.01) # short delay, no tight loops
            else:
                print(msg)
                sys.exit(1)
    
    # Return bytes
    return data

@Scenario
def Exercise_function2(queue):
    '''function2 processing'''
    while True:
        try:
            (msgId, val) = queue.getNextMsg(timeout = 10)
            if msgId == "TC_from_TASTE":
                acn = TC.encode_ACN (val)
                         
                # Get commands from TASTE
                roll = val.roll.Get()
                pitch = val.pitch.Get()
                yawrate = val.yaw.Get()
                thrust = val.thrust.Get()
                
                # Serialize packet data
                serialiazed_packet = struct.pack('<fffH', roll, pitch, yawrate, thrust)
                
                # Simple protocol : packet length followed by the data bytes
                serversocket.sendall(struct.pack('>I', len(serialiazed_packet)))

                # Then send data
                serversocket.sendall(serialiazed_packet)
                
            else:
                print("Unexpected message")
        except IOError as err:
            print(str(err))
            return 1

    return 0

@Scenario
def Sending_Scenario(queue):
    '''function2 processing'''
    while True:
                
        # Receiving packets
        packet = recv_packet(serversocket)
        if packet:
            deserialized_packet = struct.unpack('>7f', packet)
            
            tm_data = "{gyro {"
            tm_data += "x " + str(deserialized_packet[0]) 
            tm_data += ", y " + str(deserialized_packet[1]) 
            tm_data += ", z " + str(deserialized_packet[2]) 

            tm_data += "}, acc {" 
            tm_data += "x " + str(deserialized_packet[3]) 
            tm_data += ", y " + str(deserialized_packet[4]) 
            tm_data += ", z " + str(deserialized_packet[5]) 
            
            tm_data += "}, z " + str(int(deserialized_packet[6])) + "}" 
            
            #print tm_data

            queue.sendMsg("TM_from_CF", tm_data)
        time.sleep(0.01)

def runScenario(pipe_in=None, pipe_out=None, udpController=None):
    # Queue for getting scenario status
    log = Queue.Queue()
    
    if udpController:
        function2 = Exercise_function2(log, name='Scenario')
        udpController.slots.append(function2.msq_q)
        function2.wait()
        udpController.slots.remove(function2.msg_q)
        return 0 # function2.status
    else:
    # Use old-style message queue
        poller = PollerThread()
        function2 = Exercise_function2(log, name='Scenario')
        other = Sending_Scenario(log, name="sending")

        poller.slots.append(function2.msg_q)
        poller.slots.append(other.msg_q)
        poller.start()
        other.start()
        function2.start()
        # Wait and log messages from both scenarii
        while True:
            time.sleep(0.01)
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
                        function2.stop()
                        other.stop()
                        poller.stop()
                        return
                try:
                    if pipe_out.poll():
                        cmd = pipe_out.recv()
                        if cmd == 'STOP':
                            function2.stop()
                            other.stop()
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
            
    # connection to hostname on the port.
    try:
        serversocket.connect((socket.gethostname(), 50008))
    except socket.error as msg:
        print("Could not connect with the socket-server: %s\n terminating program" % msg)
        sys.exit(1)
    
    # Non blocking socket
    #serversocket.setblocking(0)
    
    # runScenario
    sys.exit(runScenario(udpController))
