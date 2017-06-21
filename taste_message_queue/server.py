#!/usr/bin/python3
# -*- coding: utf-8 -*-

import logging
import struct
import time
import datetime
import cflib.crtp  # noqa
from cflib.crazyflie import Crazyflie
from cflib.crazyflie.log import LogConfig
import socket
import json
import errno
import logging
import select
import socket
import struct
import sys
import time
import ctypes
from threading import Thread

# Only output errors from the logging framework
logging.basicConfig(level=logging.ERROR)


class Drone(Thread):
    """
    Simple logging example class that logs the Gyro, Acc and Height from a supplied link uri.
    """

    def __init__(self, link_uri, period=10):
        """ Initialize and run the example with the specified link_uri """
        Thread.__init__(self)
        self.setName(link_uri)
        self.daemon = True

        # Create a Crazyflie object without specifying any cache dirs
        self._cf = Crazyflie()
        # Connect some callbacks from the Crazyflie API
        self._cf.connected.add_callback(self._connected)
        self._cf.disconnected.add_callback(self._disconnected)
        self._cf.connection_failed.add_callback(self._connection_failed)
        self._cf.connection_lost.add_callback(self._connection_lost)
        print('Connecting to %s' % link_uri)
        # Try to connect to the Crazyflie
        self._cf.open_link(link_uri)
        self.is_connected = False
        self.period = period
        self.link_uri = link_uri

        # Data that we want to send via socket
        self.gyroData = []
        self.accData = []

    def run(self):
        while self.is_connected:
            continue

    def _connected(self, link_uri):
        """ This callback is called form the Crazyflie API when a Crazyflie
        has been connected and the TOCs have been downloaded."""
        print('Connected to %s' % link_uri)

        self.is_connected = True
        # Unlock startup thrust protection
        self.unlock_thrust_protection()

        # The definition of the logconfig can be made before connecting
        self._lg_gyro = LogConfig(name='Gyro', period_in_ms=self.period)
        self._lg_gyro.add_variable('gyro.x', 'float')
        self._lg_gyro.add_variable('gyro.y', 'float')
        self._lg_gyro.add_variable('gyro.z', 'float')
        
        # The definition of the logconfig can be made before connecting
        self._lg_acc = LogConfig(name='Acc', period_in_ms=self.period)
        self._lg_acc.add_variable('acc.x', 'float')
        self._lg_acc.add_variable('acc.y', 'float')
        self._lg_acc.add_variable('acc.z', 'float')
        self._lg_acc.add_variable('range.zrange', 'float')

        # Adding the configuration cannot be done until a Crazyflie is
        # connected, since we need to check that the variables we
        # would like to log are in the TOC.
        try:
            self._cf.log.add_config(self._lg_gyro)
            self._cf.log.add_config(self._lg_acc)
            # This callback will receive the data
            self._lg_gyro.data_received_cb.add_callback(self._gyro_log_data)
            self._lg_acc.data_received_cb.add_callback(self._acc_log_data)
            # This callback will be called on errors
            self._lg_gyro.error_cb.add_callback(self._sensorData_log_error)
            self._lg_acc.error_cb.add_callback(self._sensorData_log_error)
            # Start the logging
            self._lg_gyro.start()
            self._lg_acc.start()

        except KeyError as e:
            print('Could not start log configuration,{} not found in TOC'.format(str(e)))
        except AttributeError:
            print('Could not add Stabilizer log config, bad configuration.')
            
    def unlock_thrust_protection(self):
        self._cf.commander.send_setpoint(0, 0, 0, 0)

    def send_zrange_setpoint(self, roll=0, pitch=0, yawrate=0, zdistance=0):
        self._cf.commander.send_zdistance_setpoint(roll=roll, pitch=pitch, yawrate=yawrate, zdistance=zdistance)

    def send_setpoint(self, roll=0, pitch=0, yawrate=0, thrust=0):
        self._cf.commander.send_setpoint(roll, pitch, yawrate, thrust)
        logging.log(logging.INFO, 'The value for roll = %d , pitch = %d, yawrate = %d and thrust = %d was set.' % (roll, pitch, yawrate, thrust))

    def _sensorData_log_error(self, logconf, msg):
        """Callback from the log API when an error occurs"""
        logging.log(logging.ERROR, ('Error when logging %s: %s' % (logconf.name, msg)))

    def _gyro_log_data(self, timestamp, data, logconf):
        """Callback from the log API when data arrives"""
        self.gyroData.append(data)
        
    def _acc_log_data(self, timestamp, data, logconf):
        """Callback from the log API when data arrives"""
        # print('Data : %s' % (data))
        self.accData.append(data)

    def _connection_failed(self, link_uri, msg):
        """Callback when connection initial connection fails (i.e no Crazyflie
        at the speficied address)"""
        print('Connection to %s failed: %s' % (link_uri, msg))
        self.is_connected = False
        #sys.exit(10)

    def _connection_lost(self, link_uri, msg):
        """Callback when disconnected after a connection has been made (i.e
        Crazyflie moves out of range)"""
        print('Connection to %s lost: %s' % (link_uri, msg))
        # Unlock startup thrust protection
        self.unlock_thrust_protection()
        # Close socket
        self._socket.close()
        print('Connexion closed')
        #sys.exit(2)

    def _disconnected(self, link_uri):
        """Callback when the Crazyflie is disconnected (called in all cases)"""
        print('Disconnected from %s' % link_uri)
        self.is_connected = False
        # Unlock startup thrust protection
        self.unlock_thrust_protection()
        # Close socket
        self._socket.close()
        print('Connexion closed')
        #sys.exit(3)

    def altHold(self):
        self._cf.param.set_value("flightmode.althold","1")


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

if __name__ == '__main__':

    HOST = ''  # Symbolic name meaning all available interfaces
    PORT = 50007  # Arbitrary non-privileged port
    # Create socket object
    esa_Socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    esa_Socket.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    # Bind socket to local host and port
    try:
        esa_Socket.bind((HOST, PORT))
    except socket.error as msg:
        print('Bind failed. Error Code : ' + str(msg[0]) + ' Message ' + msg[1])
        sys.exit()
    print('Socket bind complete')
    
    # Initialize the low-level drivers (don't list the debug drivers)
    cflib.crtp.init_drivers(enable_debug_driver=False)
    # Initialize main class
    le = Drone("radio://0/83/2M",period=10)
    le.start()
    # Start listening on socket 
    esa_Socket.listen(5)
    print('Socket now listening')
    # Wait to accept a connection - blocking call
    connection, addr = esa_Socket.accept()
    print('Connected with ' + addr[0] + ':' + str(addr[1]))

    try:
        while not esa_Socket._closed:
            # Wait for 1 client connection
            if connection:
                if len(le.gyroData) > 0 and len(le.accData) > 0:
                    # Pop first packet and send it
                    packetGyro = le.gyroData.pop(0)
                    packetAcc = le.accData.pop(0)
                    print('Data gyro : %s' % (packetGyro))
                    print('Data acc  : %s' % (packetAcc))
                    # Serialize packet data
                    serialiazed_packet = struct.pack('>7f',
                                                     packetGyro['gyro.x'],
                                                     packetGyro['gyro.y'],
                                                     packetGyro['gyro.z'],
                                                     packetAcc['acc.x'],
                                                     packetAcc['acc.y'],
                                                     packetAcc['acc.z'],
                                                     packetAcc['range.zrange'])

                    # Simple protocol : packet length followed by the data bytes
                    connection.sendall(struct.pack('>I', len(serialiazed_packet)))
                    # Then send data
                    connection.sendall(serialiazed_packet)
                    # print('Data sent : %s' % (str(serialiazed_packet)))
                # Receiving packets
                packet = recv_packet(connection)
                if packet:
                    deserialized_packet = struct.unpack('<fffH', packet)
                    # Extract commands to send
                    roll = deserialized_packet[0]
                    pitch = deserialized_packet[1]
                    yawrate = deserialized_packet[2]
                    thrust = deserialized_packet[3]
                    print('Data received : %s' % (str(deserialized_packet)))
                    # Send commands to quadcopter
                    # if thrust > 0 and le.is_connected:
                    #    le.send_setpoint(roll, pitch, yawrate, thrust)
    except KeyboardInterrupt:
        connection.close()
        print("Socket server stopped")
        logging.log(logging.INFO, "Socket server stopped")
