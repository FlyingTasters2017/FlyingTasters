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
errCodes = {1001: {'name': 'MyReal', 'constraint': '(0.00000000000000000000E+000..1.00000000000000000000E+003)'}, 1002: {'name': 'MyEnum', 'constraint': ''}, 1003: {'name': 'MyEnum_unknown_enumeration_value', 'constraint': ''}, 1004: {'name': 'MySeqOf', 'constraint': '(SIZE(2))'}, 1005: {'name': 'MyOctStr', 'constraint': '(SIZE(3))'}, 1006: {'name': 'MySeq_validity', 'constraint': ''}, 1007: {'name': 'MySeq_validity_unknown_enumeration_value', 'constraint': ''}, 1008: {'name': 'T_Int32', 'constraint': '(-2147483648..2147483647)'}, 1009: {'name': 'T_UInt32', 'constraint': '(0..4294967295)'}, 1010: {'name': 'T_Int8', 'constraint': '(-128..127)'}, 1011: {'name': 'T_UInt8', 'constraint': '(0..255)'}, 1012: {'name': 'MyChoice_unknown_choice_index', 'constraint': ''}}
