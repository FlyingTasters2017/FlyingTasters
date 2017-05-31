#!/usr/bin/python

import DV

FVname = "gcs"

tc = {}
tm = {}
errCodes = {}

tm["SensorData"] = {'nodeTypename': 'MyReal', 'type': 'REAL', 'id': 'SensorData', 'minR': -1000, 'maxR': 1000}
tc["takeoff"] = {'nodeTypename': 'MyReal', 'type': 'REAL', 'id': 'takeoff', 'minR': -1000, 'maxR': 1000}
