#!/usr/bin/python
# -*- coding: utf-8 -*-

import threading
import logging
import socket
import cflib
import time
import json
from cflib.crazyflie import Crazyflie
from cflib.crazyflie.log import LogConfig

# Only output errors from the logging framework
logging.basicConfig(level=logging.ERROR)


class LoggingExample(threading.Thread):
    """
    Simple logging example class that logs the Stabilizer from a supplied
    link uri and disconnects after 5s.
    """

    def __init__(self, link_uri):
        """ Initialize and run the example with the specified link_uri """
        super(LoggingExample, self).__init__()
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
        logging.log(logging.INFO, ('Initialized the %s' % self.link_uri))


    def run(self):
        print("Starting " + self.link_uri)
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
        # print("socket", self._socket)
        # The definition of the logconfig can be made before connecting
        self._lg_sensorData = LogConfig(name='Stabilizer', period_in_ms=10)
        self._lg_sensorData.add_variable('stabilizer.roll', 'float')
        self._lg_sensorData.add_variable('stabilizer.pitch', 'float')
        self._lg_sensorData.add_variable('stabilizer.yaw', 'float')
        # self._lg_sensorData.add_variable('range.zrange', 'float')
        #
        # self._lg_acc = LogConfig(name='Accelerometer', period_in_ms=20)
        # self._lg_acc.add_variable('acc.x', 'float')
        # self._lg_acc.add_variable('acc.y', 'float')
        # self._lg_acc.add_variable('acc.z', 'float')


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
        self._cf.commander.send_zdistance_setpoint(roll, pitch, yawrate, zdistance)

    def send_setpoint(self, roll=0, pitch=0, yawrate=0, thrust=0):
        # pitch = 0
        # roll = 0
        # yawrate = 0
        self._cf.commander.send_setpoint(roll, pitch, yawrate, thrust)

    def send_hover_setpoint(self, vx =0, vy= 0, yawrate=0, zdistance=0):
        # pitch = 0
        # roll = 0
        # yawrate = 0
        self._cf.commander.send_hover_setpoint(vx, vy, yawrate, zdistance)


    def _sensorData_log_error(self, logconf, msg):
        """Callback from the log API when an error occurs"""
        print('Error when logging %s: %s' % (logconf.name, msg))

    def _sensorData_log_data(self, timestamp, data, logconf):
        """Callback froma the log API when data arrives"""

        data['uri'] = self.link_uri
        drone = {}
        drone['drone'] = data
        self.sensorsData = drone
        # print('[%d][%s]: %s' % (timestamp, logconf.name, data))
        print('[%d][%s]: %s' % (timestamp, logconf.name, self.sensorsData))
        self.is_ready = True

    def _connection_failed(self, link_uri, msg):
        """Callback when connection initial connection fails (i.e no Crazyflie
        at the speficied address)"""
        print('Connection to %s failed: %s' % (link_uri, msg))
        print('disconnected 1')
        self.is_connected = False


    def _connection_lost(self, link_uri, msg):
        """Callback when disconnected after a connection has been made (i.e
        Crazyflie moves out of range)"""
        print('Connection to %s lost: %s' % (link_uri, msg))
        print('disconnected 2')
        #sys.exit(2)

    def _disconnected(self, link_uri):
        """Callback when the Crazyflie is disconnected (called in all cases)"""
        print('Disconnected from %s' % link_uri)
        print('disconnected 3')
        self.is_connected = False
        #sys.exit(2)

    def altHold(self):
        self._cf.param.set_value("flightmode.althold","1")

def int32(x):
    if x>0xFFFFFFFF:
        #raise OverflowError
        return 0xFFFFFFFF
    if x>0x7FFFFFFF:
        x=int(0x100000000-x)
        if x<2147483648:
            return -x
        else:
            return -2147483648
    return x


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
    #Insert correct Crazyflie URI

    logging.log(logging.INFO, 'Scanning interfaces for Crazyflies...')
    scanned_drones = cflib.crtp.scan_interfaces()
    time.sleep(0.1)

    active_drones = []
    for index in scanned_drones:
        print(index[0])
        logging.log(logging.INFO, "Waiting the connection to the drone %s to be set", index[0])
        #Put correct address of the drones
        if index[0] == 'radio://0/84/2M' or index[0] == 'radio://0/82/2M' or index[0] == 'radio://0/83/2M':
            print("adding into the pool of active drones !!")
            each_d = LoggingExample(index[0])
            time.sleep(1) # waiting the drones to be started
            active_drones.append(each_d)
            each_d.start()
        print("active drone threads :", active_drones)

    # # Test start
    # data =''
    # while True:
    #     lst_sensorData = []
    #     for each_connected_drone in active_drones:
    #         if each_connected_drone.is_ready:
    #             lst_sensorData.append(each_connected_drone.sensorsData)
    #         print("JSON data: ", lst_sensorData)
    #         data = str(lst_sensorData).encode()
    #         print("Encoded data: ",data)
    # # test end

    # le1 = LoggingExample("radio://0/82/2M",socket= mySocket)
    #le2 = LoggingExample("radio://0/85/2M",socket = mySocket)
    # list = [le1] #, le2] #,le3]
    #time.sleep(10)
    #Init default thrust
    # le.send_zrange_setpoint(0, 0, 0, 1)
    # le.altHold()
    # time.sleep(10)
    #
    # # activate the threads(if not already activated)
    # for x in active_drones:
    #     print("active d")
    #     x.join()

    print('mySocket.listen(1)')
    mySocket.listen(1)
    print('conn, addr = mySocket.accept()')
    conn, addr = mySocket.accept()
    # print('if conn:')
    # le.unlock_thrust_protection()
    try:
        thrust = 0
        unlock_drones = True
        while not mySocket._closed:
            # Wait for 1 client connection
            lst_sensorData = []
            if conn:
                print('Connected by', addr)
                for each_connected_drone in active_drones:
                    if each_connected_drone.is_ready:
                            lst_sensorData.append(each_connected_drone.sensorsData)
                            # each_connected_drone.is_ready = False
                if(len(lst_sensorData) == len((active_drones))):
                    for each_connected_drone in active_drones:
                        each_connected_drone.is_ready = False

                    lst_sensorData = json.dumps(lst_sensorData)
                    print('Sensor data before sent: ' + lst_sensorData)
                    conn.sendall(lst_sensorData.encode())

                    # Receive up to buffersize = 1024 bytes from the socket client and convert it to int
                    raw_data = conn.recv(1024)

                    raw_data = raw_data.decode()
                    if raw_data:
                        raw_data, garbage = raw_data.split("ESA")
                        raw_data = raw_data.replace("'", '"')
                        raw_data = raw_data.replace("{{", '[{')
                        raw_data = raw_data.replace("}}", '}]')
                        json_data = json.loads(raw_data)
                        print("Json data received ==:> \n", json_data)
                        for each_drone_json in json_data:
                            for index, item in enumerate(active_drones):
                                print('Drone with URI : ' + item.link_uri + ' has a status: ' + str(item.is_connected))
                                if each_drone_json['uri'] == item.link_uri:
                                    #Unlock all the drones.
                                    if unlock_drones:
                                        for le in active_drones:
                                            le.send_setpoint(0, 0, 0, 0)
                                        unlock_drones = False

                                    thrust = float(int32(int(each_drone_json['thrust'])))/1000
                                    yaw = float(int32(int(each_drone_json['yaw'])))/1000
                                    pitch = float(int32(int(each_drone_json['pitch'])))/1000
                                    roll = float(int32(int(each_drone_json['roll'])))/1000
                                    item.send_zrange_setpoint(roll,pitch,yaw,thrust)#item.send_setpoint(0,0,0,thrust=int(each_drone_json['thrust']))
                                    # item.send_zrange_setpoint(0,0,0,0)
                                    print("Log of URI:", item.link_uri, " Thrust value is: ", thrust)
                                    print("\n\n\n\n\n")



                # thrust = conn.recv(256)
                # sample_d = thrust.decode()
                # yawrate, pitch, roll, thrust, garbage = sample_d.split(' ')
                # yawrate = socket.ntohl(int(yawrate) & 0xffffffff)
                # yawrate = int32(yawrate)
                # yawrate = float(yawrate)/1000
                #
                # pitch = socket.ntohl(int(pitch) & 0xffffffff)
                # pitch = int32(pitch)
                # pitch = float(pitch)/1000
                #
                # roll = socket.ntohl(int(roll) & 0xffffffff)
                # roll = int32(roll)
                # roll = float(roll)/1000
                #
                # thrust = socket.ntohl(int(thrust) & 0xffffffff)
                # thrust = float(thrust)/1000
                #
                # vx = 0.17*pitch
                # vy = 0.17*roll
                # zref = thrust
                # #
                # print("yawrate data", yawrate)
                # print("pitch data", pitch)
                # print("roll data", roll)
                # print("thrust data", thrust)
                #
                # #Unlock all the drones.
                # if unlock_drones:
                #     for le in active_drones:
                #         le.send_setpoint(0, 0, 0, 0)
                #     unlock_drones = False
                #
                # if thrust > 0:
                #     for le in list:
                #          # le.send_hover_setpoint(vx,vy,yawrate,zref)
                #         le.send_setpoint(roll,pitch,yawrate,thrust)
                else:
                    for each_connected_drone in active_drones:
                        each_connected_drone.altHold()

    except KeyboardInterrupt:
        conn.close()
        logging.log(logging.INFO, "Socket server stopped")
