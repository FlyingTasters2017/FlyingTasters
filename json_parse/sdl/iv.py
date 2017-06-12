#! /usr/bin/python

Ada, C, GUI, SIMULINK, VHDL, OG, RTDS, SYSTEM_C, SCADE6, VDM, CPP = range(11)
thread, passive, unknown = range(3)
PI, RI = range(2)
synch, asynch = range(2)
param_in, param_out = range(2)
UPER, NATIVE, ACN = range(3)
cyclic, sporadic, variator, protected, unprotected = range(5)
enumerated, sequenceof, sequence, set, setof, integer, boolean, real, choice, octetstring, string = range(11)
functions = {}

functions['function1'] = {
    'name_with_case' : 'Function1',
    'runtime_nature': passive,
    'language': C,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['function1']['interfaces']['getPixyData'] = {
    'port_name': 'getPixyData',
    'parent_fv': 'function1',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': synch,
    'rcm': unprotected,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 0,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['function1']['interfaces']['getPixyData']['paramsInOrdered'] = []

functions['function1']['interfaces']['getPixyData']['paramsOutOrdered'] = ['x', 'y']

functions['function1']['interfaces']['getPixyData']['out']['x'] = {
    'type': 'T_UInt32',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'getPixyData',
    'param_direction': param_out
}

functions['function1']['interfaces']['getPixyData']['out']['y'] = {
    'type': 'T_UInt32',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'getPixyData',
    'param_direction': param_out
}

functions['gui'] = {
    'name_with_case' : 'GUI',
    'runtime_nature': thread,
    'language': GUI,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['gui']['interfaces']['sendX'] = {
    'port_name': 'sendX',
    'parent_fv': 'gui',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': sporadic,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 0,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['gui']['interfaces']['sendX']['paramsInOrdered'] = ['x']

functions['gui']['interfaces']['sendX']['paramsOutOrdered'] = []

functions['gui']['interfaces']['sendX']['in']['x'] = {
    'type': 'T_UInt32',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'sendX',
    'param_direction': param_in
}

functions['sdl'] = {
    'name_with_case' : 'SDL',
    'runtime_nature': thread,
    'language': OG,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['sdl']['interfaces']['pulse'] = {
    'port_name': 'pulse',
    'parent_fv': 'sdl',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': cyclic,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 0,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['sdl']['interfaces']['pulse']['paramsInOrdered'] = []

functions['sdl']['interfaces']['pulse']['paramsOutOrdered'] = []

functions['sdl']['interfaces']['getPixyData'] = {
    'port_name': 'getPixyData',
    'parent_fv': 'sdl',
    'direction': RI,
    'in': {},
    'out': {},
    'synchronism': synch,
    'rcm': unprotected,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': '',
    'wcet_high': 0,
    'wcet_high_unit': '',
    'distant_fv': 'function1',
    'calling_threads': {},
    'distant_name': 'getPixyData',
    'queue_size': 1
}

functions['sdl']['interfaces']['getPixyData']['paramsInOrdered'] = []

functions['sdl']['interfaces']['getPixyData']['paramsOutOrdered'] = ['x', 'y']

functions['sdl']['interfaces']['getPixyData']['out']['x'] = {
    'type': 'T_UInt32',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'getPixyData',
    'param_direction': param_out
}

functions['sdl']['interfaces']['getPixyData']['out']['y'] = {
    'type': 'T_UInt32',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'getPixyData',
    'param_direction': param_out
}

functions['sdl']['interfaces']['sendX'] = {
    'port_name': 'sendX',
    'parent_fv': 'sdl',
    'direction': RI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': sporadic,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': '',
    'wcet_high': 0,
    'wcet_high_unit': '',
    'distant_fv': 'gui',
    'calling_threads': {},
    'distant_name': 'sendX',
    'queue_size': 1
}

functions['sdl']['interfaces']['sendX']['paramsInOrdered'] = ['x']

functions['sdl']['interfaces']['sendX']['paramsOutOrdered'] = []

functions['sdl']['interfaces']['sendX']['in']['x'] = {
    'type': 'T_UInt32',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'sendX',
    'param_direction': param_in
}
