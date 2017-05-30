#!/usr/bin/python

import DV

FVname = "gcs"

tc = {}
tm = {}
errCodes = {}

tc["takeoff"] = {'nodeTypename': 'MyReal', 'type': 'REAL', 'id': 'takeoff', 'minR': 0, 'maxR': 1000}
