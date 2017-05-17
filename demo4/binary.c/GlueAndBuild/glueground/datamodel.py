#!/usr/bin/python

import DV

FVname = "ground"

tc = {}
tm = {}
errCodes = {}

tm["Thrust_Update"] = {'nodeTypename': 'MyReal', 'type': 'REAL', 'id': 'Thrust_Update', 'minR': 0, 'maxR': 1000}
tc["Start_work"] = {'nodeTypename': 'MyReal', 'type': 'REAL', 'id': 'Start_work', 'minR': 0, 'maxR': 1000}
tm["dHeight"] = {'nodeTypename': 'MyReal', 'type': 'REAL', 'id': 'dHeight', 'minR': 0, 'maxR': 1000}
