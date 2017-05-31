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
        self._lg_stab = LogConfig(name='Stabilizer', period_in_ms=1000)
        self._lg_stab.add_variable('stabilizer.roll', 'float')
        self._lg_stab.add_variable('stabilizer.pitch', 'float')
        self._lg_stab.add_variable('stabilizer.yaw', 'float')

        # Adding the configuration cannot be done until a Crazyflie is
        # connected, since we need to check that the variables we
        # would like to log are in the TOC.
        try:
            self._cf.log.add_config(self._lg_stab)
            # This callback will receive the data
            self._lg_stab.data_received_cb.add_callback(self._stab_log_data)
            # This callback will be called on errors
            self._lg_stab.error_cb.add_callback(self._stab_log_error)
            # Start the logging
            self._lg_stab.start()
        except KeyError as e:
            print('Could not start log configuration,'
                  '{} not found in TOC'.format(str(e)))
        except AttributeError:
            print('Could not add Stabilizer log config, bad configuration.')
        # Data that we want to send via socket
        self.sensorsData = {}


    def unlock_thrust_protection(self):
        # Unlock startup thrust protection
        self._cf.commander.send_setpoint(0, 0, 0, 0)

    def ramp_motors(self, thrust=0):
        pitch = 0
        roll = 0
        yawrate = 0
        self._cf.commander.send_setpoint(roll, pitch, yawrate, thrust)


    def _stab_log_error(self, logconf, msg):
        """Callback from the log API when an error occurs"""
        print('Error when logging %s: %s' % (logconf.name, msg))

    def _stab_log_data(self, timestamp, data, logconf):
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
    le = LoggingExample("radio://0/81/250K",socket= mySocket)
    #time.sleep(10)
    #Init default thrust
    thrust = 0
    while not mySocket._closed:
        # Wait for 1 client connection
        print('mySocket.listen(1)')
        mySocket.listen(1)
        print('conn, addr = mySocket.accept()')
        conn, addr = mySocket.accept()
        print('if conn:')
        # If client connected to the server
        if conn:
            print('Connected by', addr)
            data = str(le.sensorsData).encode()
            conn.sendall(data)
            # Receive up to buffersize = 1024 bytes from the socket and convert it to int
            thrust = conn.recv(1024)
            thrust = int.from_bytes(thrust, byteorder='big')
            # Send commands to crazyflie
        if thrust > 0:
            le.unlock_thrust_protection()
            le.ramp_motors(thrust)
        conn.close()
    sys.exit(2)
    print('Im here in the end')