# -*- coding: utf-8 -*-
#
#     ||          ____  _ __
#  +------+      / __ )(_) /_______________ _____  ___
#  | 0xBC |     / __  / / __/ ___/ ___/ __ `/_  / / _ \
#  +------+    / /_/ / / /_/ /__/ /  / /_/ / / /_/  __/
#   ||  ||    /_____/_/\__/\___/_/   \__,_/ /___/\___/
#
#  Copyright (C) 2014 Bitcraze AB
#
#  Crazyflie Nano Quadcopter Client
#
#  This program is free software; you can redistribute it and/or
#  modify it under the terms of the GNU General Public License
#  as published by the Free Software Foundation; either version 2
#  of the License, or (at your option) any later version.
#
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#  You should have received a copy of the GNU General Public License
#  along with this program; if not, write to the Free Software
#  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
#  MA  02110-1301, USA.
"""
Simple example that connects to the first Crazyflie found, logs the Stabilizer
and prints it to the console. After 10s the application disconnects and exits.
"""
import json
import socket
import logging
import sys
import time

import cflib.crtp  # noqa
from cflib.crazyflie import Crazyflie
from cflib.crazyflie.log import LogConfig
import ctypes
# Only output errors from the logging framework
logging.basicConfig(level=logging.ERROR)


class LoggingExample:
    """
    Simple logging example class that logs the Stabilizer from a supplied
    link uri and disconnects after 5s.
    """

    def __init__(self, link_uri, socket):
        """ Initialize and run the example with the specified link_uri """

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
        self._socket = socket


    def _connected(self, link_uri):
        """ This callback is called form the Crazyflie API when a Crazyflie
        has been connected and the TOCs have been downloaded."""
        print('Connected to %s' % link_uri)
        self.is_connected = True
        print("socket", self._socket)
        # The definition of the logconfig can be made before connecting
<<<<<<< HEAD
        self._lg_stab = LogConfig(name='Stabilizer', period_in_ms=100)
        self._lg_stab.add_variable('stabilizer.roll', 'float')
        self._lg_stab.add_variable('stabilizer.pitch', 'float')
        self._lg_stab.add_variable('stabilizer.yaw', 'float')
        self._lg_stab.add_variable('range.zrange', 'float')

        self._lg_acc = LogConfig(name='Accelerometer', period_in_ms=100)
        self._lg_acc.add_variable('acc.x', 'float')
        self._lg_acc.add_variable('acc.y', 'float')
        self._lg_acc.add_variable('acc.z', 'float')
=======
        self._lg_sensorData = LogConfig(name='Stabilizer', period_in_ms=20)
        self._lg_sensorData.add_variable('stabilizer.roll', 'float')
        self._lg_sensorData.add_variable('stabilizer.pitch', 'float')
        self._lg_sensorData.add_variable('stabilizer.yaw', 'float')
        self._lg_sensorData.add_variable('range.zrange', 'float')
        #
        # self._lg_acc = LogConfig(name='Accelerometer', period_in_ms=20)
        # self._lg_acc.add_variable('acc.x', 'float')
        # self._lg_acc.add_variable('acc.y', 'float')
        # self._lg_acc.add_variable('acc.z', 'float')

>>>>>>> 3cf3119afea2e65b27afbe928b8490804e16e90c

        # Adding the configuration cannot be done until a Crazyflie is
        # connected, since we need to check that the variables we
        # would like to log are in the TOC.
        try:
            self._cf.log.add_config(self._lg_sensorData)
            # This callback will receive the data
            self._lg_sensorData.data_received_cb.add_callback(self._sensorData_log_data)
            # This callback will be called on errors
            self._lg_sensorData.error_cb.add_callback(self._sensorData_log_error)
            # Start the logging
            self._lg_sensorData.start()

        except KeyError as e:
            print('Could not start log configuration,'
                  '{} not found in TOC'.format(str(e)))
        except AttributeError:
            print('Could not add Stabilizer log config, bad configuration.')
        # Data that we want to send via socket
        # self.sensorsData = {}

    def unlock_thrust_protection(self):
        # Unlock startup thrust protection
        self._cf.commander.send_setpoint(0, 0, 0, 0)

    def send_zrange_setpoint(self, roll=0, pitch=0, yawrate=0, zdistance=0):
        # pitch = 0
        # roll = 0
        # yawrate = 0
        self._cf.commander.send_zdistance_setpoint(0, 0, 0, 1)

<<<<<<< HEAD
    def send_zrange_setpoint(self, roll=0, pitch=0, yawrate=0, zdistance=0):
        # pitch = 0
        # roll = 0
        # yawrate = 0
        self._cf.commander.send_zdistance_setpoint(roll, pitch, yawrate, zdistance)

=======
    def send_setpoint(self, roll=0, pitch=0, yawrate=0, thrust=0):
        # pitch = 0
        # roll = 0
        # yawrate = 0
        self._cf.commander.send_setpoint(roll, pitch, yawrate, thrust)
>>>>>>> 3cf3119afea2e65b27afbe928b8490804e16e90c


    def _sensorData_log_error(self, logconf, msg):
        """Callback from the log API when an error occurs"""
        print('Error when logging %s: %s' % (logconf.name, msg))

    def _sensorData_log_data(self, timestamp, data, logconf):
        """Callback froma the log API when data arrives"""
        print('[%d][%s]: %s' % (timestamp, logconf.name, data))
        self.sensorsData = json.dumps(data)

    def _connection_failed(self, link_uri, msg):
        """Callback when connection initial connection fails (i.e no Crazyflie
        at the speficied address)"""
        print('Connection to %s failed: %s' % (link_uri, msg))
        print('disconnected 1')
        self.is_connected = False
        self._socket.close()
        print("socket", self._socket)
        #sys.exit(10)


    def _connection_lost(self, link_uri, msg):
        """Callback when disconnected after a connection has been made (i.e
        Crazyflie moves out of range)"""
        print('Connection to %s lost: %s' % (link_uri, msg))
        print('disconnected 2')
        self._socket.close()
        print("socket", self._socket)
        #sys.exit(2)

    def _disconnected(self, link_uri):
        """Callback when the Crazyflie is disconnected (called in all cases)"""
        print('Disconnected from %s' % link_uri)
        print('disconnected 3')
        self.is_connected = False
        self._socket.close()
        print("socket", self._socket)
        #sys.exit(3)

    def altHold(self):
        self._cf.param.set_value("flightmode.althold","1")


if __name__ == '__main__':
    """
    Create socket server, example https://docs.python.org/3.4/library/socket.html#socket-objects 
    """
    HOST = ''  # Symbolic name meaning all available interfaces
    PORT = 50007  # Arbitrary non-privileged port
    mySocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM) #Create socket object
    mySocket.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1) #re-use same port
    mySocket.bind((HOST, PORT))
    # Initialize the low-level drivers (don't list the debug drivers)
    cflib.crtp.init_drivers(enable_debug_driver=False)
    #Insert correct Crazyflie URI
<<<<<<< HEAD
    le = LoggingExample("radio://0/84/2M",socket= mySocket)
    #time.sleep(10)
    #Init default thrust
    thurst =0

=======
    le1 = LoggingExample("radio://0/81/2M",socket= mySocket)
    #le2 = LoggingExample("radio://0/85/2M",socket = mySocket)
    list = [le1] #, le2] #,le3]
    #time.sleep(10)
    #Init default thrust

    # le.send_zrange_setpoint(0, 0, 0, 1)
    # le.altHold()
    # time.sleep(10)
    print('mySocket.listen(1)')
    mySocket.listen(1)
    print('conn, addr = mySocket.accept()')
    conn, addr = mySocket.accept()
    print('if conn:')
# le.unlock_thrust_protection()

    thrust = 0
>>>>>>> 3cf3119afea2e65b27afbe928b8490804e16e90c
    while not mySocket._closed:
        # Wait for 1 client connection

        # If client connected to the server
        # file = open("log_actuation.txt", "w")

        if conn:
            print('Connected by', addr)
            for le in list:
                data = str(le.sensorsData).encode()
                conn.sendall(data)
            # Receive up to buffersize = 1024 bytes from the socket and convert it to int
            thrust = conn.recv(256)
            print(type(thrust))
            # print(socket_data)
            # socket_data2 = socket_data.encode()
            # print(socket_data2)
            print(thrust)

            sample_d = thrust.decode()

            #sample_d = int.from_bytes(thrust, byteorder='big')
            # # socket_data3 = socket_data.decode()
            # # print(socket_data3)
            print(sample_d)

            # print("raw data", socket_data)
            yawrate, pitch, roll, thrust, garbage = sample_d.split(' ')
            yawrate = socket.ntohl(int(yawrate) & 0xffffffff)
            pitch = socket.ntohl(int(pitch) & 0xffffffff)
            roll = socket.ntohl(int(roll) & 0xffffffff)
            thrust = socket.ntohl(int(thrust) & 0xffffffff)
            #
            print("yawrate data", yawrate)
            print("pitch data", pitch)
            print("roll data", roll)
            print("thrust data", thrust)
            height = 0.2

<<<<<<< HEAD

            with open("log_actuation.txt", "a") as myfile:
                # myfile.write("appended text")
                myfile.writelines("yawrate:" + str(yawrate) + "; pitch:" + str(pitch) + "; roll:" + str(roll) + "; thrust:" + str(thrust) + "\n")

            #Send commands to crazyflie
            if thrust > 0:
                le.unlock_thrust_protection()
                le.send_zrange_setpoint(roll, pitch, yawrate, height)

        conn.close()
        #file.close()
=======
            #Send commands to all crazyflies
            if thrust > 0:
                for le in list:
                    le.send_setpoint(roll, pitch, yawrate, thrust)
    conn.close()
        # file.close()
>>>>>>> 3cf3119afea2e65b27afbe928b8490804e16e90c
    sys.exit(2)
    print('Im here in the end')
