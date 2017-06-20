#!/usr/bin/python

import DV

FVname = "function2"

tc = {}
tm = {}
errCodes = {}

tm["TC_from_TASTE"] = {'nodeTypename': 'TC-T', 'type': 'SEQUENCE', 'id': 'TC_from_TASTE', "children":[{'nodeTypename': '', 'type': 'REAL', 'id': 'roll', 'minR': -360, 'maxR': 360},
{'nodeTypename': '', 'type': 'REAL', 'id': 'pitch', 'minR': -360, 'maxR': 360},
{'nodeTypename': '', 'type': 'REAL', 'id': 'yaw', 'minR': -100000, 'maxR': 100000},
{'nodeTypename': '', 'type': 'INTEGER', 'id': 'thrust', 'minR': 0, 'maxR': 65535}]}
tc["TM_from_CF"] = {'nodeTypename': 'TM-T', 'type': 'SEQUENCE', 'id': 'TM_from_CF', "children":[{'nodeTypename': '', 'type': 'SEQUENCE', 'id': 'gyro', "children":[{'nodeTypename': '', 'type': 'REAL', 'id': 'x', 'minR': -100000, 'maxR': 100000},
{'nodeTypename': '', 'type': 'REAL', 'id': 'y', 'minR': -100000, 'maxR': 100000},
{'nodeTypename': '', 'type': 'REAL', 'id': 'z', 'minR': -100000, 'maxR': 100000}]},
{'nodeTypename': '', 'type': 'SEQUENCE', 'id': 'acc', "children":[{'nodeTypename': '', 'type': 'REAL', 'id': 'x', 'minR': -16, 'maxR': 16},
{'nodeTypename': '', 'type': 'REAL', 'id': 'y', 'minR': -16, 'maxR': 16},
{'nodeTypename': '', 'type': 'REAL', 'id': 'z', 'minR': -16, 'maxR': 16}]},
{'nodeTypename': '', 'type': 'INTEGER', 'id': 'z', 'minR': 0, 'maxR': 8191}]}
errCodes = {1001: {'name': 'MyReal', 'constraint': '(0.00000000000000000000E+000..1.00000000000000000000E+003)'}, 1002: {'name': 'MyEnum', 'constraint': ''}, 1003: {'name': 'MyEnum_unknown_enumeration_value', 'constraint': ''}, 1004: {'name': 'MySeqOf', 'constraint': '(SIZE(2))'}, 1005: {'name': 'MyOctStr', 'constraint': '(SIZE(3))'}, 1006: {'name': 'ANGLE', 'constraint': '(-3.60000000000000000000E+002..3.60000000000000000000E+002)'}, 1007: {'name': 'RATE', 'constraint': '(-1.00000000000000000000E+005..1.00000000000000000000E+005)'}, 1008: {'name': 'T_UInt16', 'constraint': '(0..65535)'}, 1009: {'name': 'GYROSCOPE', 'constraint': '(-1.00000000000000000000E+005..1.00000000000000000000E+005)'}, 1010: {'name': 'ACCELERATION', 'constraint': '(-1.60000000000000000000E+001..1.60000000000000000000E+001)'}, 1011: {'name': 'HEIGHT', 'constraint': '(0..8191)'}, 1012: {'name': 'MySeq_validity', 'constraint': ''}, 1013: {'name': 'MySeq_validity_unknown_enumeration_value', 'constraint': ''}, 1014: {'name': 'T_Int32', 'constraint': '(-2147483648..2147483647)'}, 1015: {'name': 'T_UInt32', 'constraint': '(0..4294967295)'}, 1016: {'name': 'T_Int8', 'constraint': '(-128..127)'}, 1017: {'name': 'T_UInt8', 'constraint': '(0..255)'}, 1018: {'name': 'MyChoice_unknown_choice_index', 'constraint': ''}}
