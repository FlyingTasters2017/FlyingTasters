#!/usr/bin/python

import DV

FVname = "ground"

tc = {}
tm = {}
errCodes = {}

tm["Height"] = {'nodeTypename': 'MyReal', 'type': 'REAL', 'id': 'Height', 'minR': 0, 'maxR': 1000}
tc["Takeoff"] = {'nodeTypename': 'MyReal', 'type': 'REAL', 'id': 'Takeoff', 'minR': 0, 'maxR': 1000}
errCodes = {1001: {'name': 'T_Int32', 'constraint': '(-2147483648..2147483647)'}, 1002: {'name': 'T_UInt32', 'constraint': '(0..4294967295)'}, 1003: {'name': 'T_Int8', 'constraint': '(-128..127)'}, 1004: {'name': 'T_UInt8', 'constraint': '(0..255)'}, 1005: {'name': 'MyReal', 'constraint': '(0.00000000000000000000E+000..1.00000000000000000000E+003)'}, 1006: {'name': 'MyEnum', 'constraint': ''}, 1007: {'name': 'MyEnum_unknown_enumeration_value', 'constraint': ''}, 1008: {'name': 'MySeqOf', 'constraint': '(SIZE(2))'}, 1009: {'name': 'MyOctStr', 'constraint': '(SIZE(3))'}, 1010: {'name': 'MySeq_validity', 'constraint': ''}, 1011: {'name': 'MySeq_validity_unknown_enumeration_value', 'constraint': ''}, 1012: {'name': 'MyChoice_unknown_choice_index', 'constraint': ''}}
