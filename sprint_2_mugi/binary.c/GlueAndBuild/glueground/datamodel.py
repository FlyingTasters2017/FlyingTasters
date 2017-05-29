#!/usr/bin/python

import DV

FVname = "ground"

tc = {}
tm = {}
errCodes = {}

tm["GetHeight"] = {'nodeTypename': 'MyReal', 'type': 'REAL', 'id': 'GetHeight', 'minR': 0, 'maxR': 1000}
tc["Takeoff"] = {'nodeTypename': 'MyTrajectory', 'type': 'SEQUENCE', 'id': 'Takeoff', "children":[{'nodeTypename': '', 'type': 'REAL', 'id': 'x', 'minR': 0, 'maxR': 1000},
{'nodeTypename': '', 'type': 'REAL', 'id': 'y', 'minR': 0, 'maxR': 1000},
{'nodeTypename': '', 'type': 'REAL', 'id': 'z', 'minR': 0, 'maxR': 1000},
{'nodeTypename': '', 'type': 'REAL', 'id': 'yaw', 'minR': 0, 'maxR': 1000}]}
