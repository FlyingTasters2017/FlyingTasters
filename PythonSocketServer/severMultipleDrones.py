#!/usr/bin/python3
# -*- coding: utf-8 -*-

import threading
import logging
import socket
import cflib
import time
import json
from cflib.crazyflie import Crazyflie
from cflib.crazyflie.log import LogConfig



class ESA_Server(threading.Thread):
    """
    Simple logging example class that logs the Stabilizer, Zrange, and sends commands for the supplied link uri.
    """

    def __init__(self, link_uri):
        """ Initialize and run the example with the specified link_uri """
        super(ESA_Server, self).__init__()
        self.daemon = True
        self.link_uri = link_uri
        self.sensorsData = []

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
        self.is_ready = False
        self.stop_print = False
        logging.log(logging.INFO, ('Initialized the %s' % self.link_uri))


    def run(self):
        logging.log(logging.INFO, "Starting " + self.link_uri)
        logging.log(logging.INFO, "Thread name : " + threading.current_thread().name + " is starting with drone URI: "+  self.link_uri)

        while self.is_connected:
            continue

    def cancel(self):
        """End this thread"""
        self.is_connected = False

    def _connected(self, link_uri):
        """ This callback is called form the Crazyflie API when a Crazyflie
        has been connected and the TOCs have been downloaded."""
        print('Connected to %s' % link_uri)
        self.is_connected = True

        self._lg_sensorData = LogConfig(name='Stabilizer', period_in_ms=60)
        self._lg_sensorData.add_variable('stabilizer.roll', 'float')
        self._lg_sensorData.add_variable('stabilizer.pitch', 'float')
        self._lg_sensorData.add_variable('stabilizer.yaw', 'float')
        self._lg_sensorData.add_variable('range.zrange', 'float')


        try:
            self._cf.log.add_config(self._lg_sensorData)                                    # This callback will receive the data
            self._lg_sensorData.data_received_cb.add_callback(self._sensorData_log_data)    # This callback will be called on errors
            self._lg_sensorData.error_cb.add_callback(self._sensorData_log_error)           # Start the logging
            self._lg_sensorData.start()

        except KeyError as e:
            print('Could not start log configuration,{} not found in TOC'.format(str(e)))
        except AttributeError:
            print('Could not add Stabilizer log config, bad configuration.')


    def unlock_thrust_protection(self):
        # Unlock startup thrust protection
        self._cf.commander.send_setpoint(0, 0, 0, 0)

    def send_zrange_setpoint(self, roll=0, pitch=0, yawrate=0, zdistance=0):
        self._cf.commander.send_zdistance_setpoint(roll, pitch, yawrate, zdistance)

    def send_setpoint(self, roll=0, pitch=0, yawrate=0, thrust=0):
        self._cf.commander.send_setpoint(roll, pitch, yawrate, thrust)

    def send_hover_setpoint(self, vx =0, vy= 0, yawrate=0, zdistance=0):
        self._cf.commander.send_hover_setpoint(vx, vy, yawrate, zdistance)


    def _sensorData_log_error(self, logconf, msg):
        """Callback from the log API when an error occurs"""
        print('Error when logging %s: %s' % (logconf.name, msg))

    def _sensorData_log_data(self, timestamp, data, logconf):
        """Callback froma the log API when data arrives"""
        logging.log(logging.INFO, '[%d][%s]: %s' % (timestamp, self.link_uri, data))
        data['uri'] = self.link_uri
        drone = {}
        drone['drone'] = data
        self.sensorsData = drone
        if not self.stop_print:
            print('[%d][%s]: %s' % (timestamp, logconf.name, self.sensorsData))
        self.is_ready = True
        self.stop_print = True

    def _connection_failed(self, link_uri, msg):
        """Callback when connection initial connection fails (i.e no Crazyflie
        at the speficied address)"""
        print('Connection to %s failed: %s' % (link_uri, msg))
        self.is_connected = False


    def _connection_lost(self, link_uri, msg):
        """Callback when disconnected after a connection has been made (i.e
        Crazyflie moves out of range)"""
        print('Connection to %s lost: %s' % (link_uri, msg))

    def _disconnected(self, link_uri):
        """Callback when the Crazyflie is disconnected (called in all cases)"""
        print('Disconnected from %s' % link_uri)
        self.is_connected = False


    def altHold(self):
        '''
        stays at the current height
        :return:
        '''
        self._cf.param.set_value("flightmode.althold","1")


# Only output errors from the logging framework
logging.basicConfig(level=logging.ERROR)

if __name__ == '__main__':
    """

    Create socket server, example https://docs.python.org/3.4/library/socket.html#socket-objects 
    """
    HOST = ''  # Symbolic name meaning all available interfaces
    PORT = 50012  # Arbitrary non-privileged port
    mySocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM) #Create socket object
    mySocket.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1) #re-use same port
    mySocket.bind((HOST, PORT))
    # Initialize the low-level drivers (don't list the debug drivers)
    logging.log(logging.INFO, "Initialize the low-level drivers (don't list the debug drivers)")
    cflib.crtp.init_drivers(enable_debug_driver=False)
    logging.log(logging.INFO, 'Scanning interfaces for Crazyflies...')
    scanned_drones = cflib.crtp.scan_interfaces()
    time.sleep(0.1)

    active_drones = []
    for index in scanned_drones:
        logging.log(logging.INFO, "Waiting the connection to the drone %s to be set", index[0])
        #Put correct address of the drones
        if index[0] == 'radio://0/85/2M' or index[0] == 'radio://0/82/2M' or index[0] == 'radio://0/83/2M':
            each_d = ESA_Server(index[0])
            time.sleep(1) # waiting the drones to be started
            active_drones.append(each_d)
            each_d.start()


    logging.log(logging.INFO, "Socket listening, mySocket.listen(1)")
    mySocket.listen(1)
    logging.log(logging.INFO, "Socket waiting for a client, conn, addr = mySocket.accept()")
    conn, addr = mySocket.accept()

    try:
        thrust = 0
        unlock_drones = True
        while not mySocket._closed:

            lst_sensorData = []
            if conn:
                logging.log(logging.INFO, "Connected by", addr)
                for each_connected_drone in active_drones:
                    if each_connected_drone.is_ready:
                        lst_sensorData.append(each_connected_drone.sensorsData)

                if(len(lst_sensorData) == len((active_drones))):
                    # all the drones initialized properly.
                    lst_sensorData = json.dumps(lst_sensorData)
                    logging.log(logging.INFO, 'Sensor data before sent: ' + lst_sensorData)
                    conn.sendall(lst_sensorData.encode())

                    raw_data = conn.recv(1024)
                    raw_data = raw_data.decode()
                    if raw_data:
                        raw_data, garbage = raw_data.split("ESA")
                        raw_data = raw_data.replace("'", '"')
                        json_data = json.loads(raw_data)
                        logging.log(logging.INFO, "Json data received ==:>", json_data)
                        for each_drone_json in json_data:
                            logging.log(logging.INFO,"JSON received from TASTE for %s:\n%s",each_drone_json['uri'],each_drone_json)
                            for index, item in enumerate(active_drones):
                                logging.log(logging.INFO, 'Drone with URI : ' + item.link_uri + ' has a status: ' + str(item.is_connected))
                                if each_drone_json['uri'] == item.link_uri:
                                    if not item.stop_print:
                                        logging.log(logging.INFO, "URI:", item.link_uri, " log is OFF")
                                        item.stop_print = True

                                    # unlock the motors for first time use only
                                    if unlock_drones:
                                        for le in active_drones:
                                            le.send_setpoint(0, 0, 0, 0)
                                        unlock_drones = False

                                    thrust = float(each_drone_json['thrust'])/1000
                                    yaw = float(each_drone_json['yaw'])/1000
                                    pitch = float(each_drone_json['pitch'])/1000
                                    roll = float(each_drone_json['roll'])/1000
                                    item.send_zrange_setpoint(roll,pitch,yaw,thrust)

                else:
                    for each_connected_drone in active_drones:
                        # each_connected_drone.altHold()
                        each_connected_drone.unlock_thrust_protection()
                        each_connected_drone.cancel()

    except KeyboardInterrupt:
        conn.close()
        for each_connected_drone in active_drones:
            each_connected_drone.unlock_thrust_protection()
            each_connected_drone.cancel()
        logging.log(logging.INFO, "Socket server stopped")
