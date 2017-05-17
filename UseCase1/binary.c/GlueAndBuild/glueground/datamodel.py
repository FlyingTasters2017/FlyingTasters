#!/usr/bin/python

import DV

FVname = "ground"

tc = {}
tm = {}
errCodes = {}

tm["GetHeight"] = {'nodeTypename': 'MyReal', 'type': 'REAL', 'id': 'GetHeight', 'minR': -1000, 'maxR': 1000}
tc["Takeoff"] = {'nodeTypename': 'MyReal', 'type': 'REAL', 'id': 'Takeoff', 'minR': -1000, 'maxR': 1000}
