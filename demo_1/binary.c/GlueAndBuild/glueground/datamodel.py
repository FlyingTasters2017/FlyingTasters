#!/usr/bin/python

import DV

FVname = "ground"

tc = {}
tm = {}
errCodes = {}

tm["Height"] = {'nodeTypename': 'MyReal', 'type': 'REAL', 'id': 'Height', 'minR': 0, 'maxR': 1000}
tc["Takeoff"] = {'nodeTypename': 'MyReal', 'type': 'REAL', 'id': 'Takeoff', 'minR': 0, 'maxR': 1000}
