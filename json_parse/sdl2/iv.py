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
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'getPixyData',
    'param_direction': param_out
}

functions['function1']['interfaces']['getPixyData']['out']['y'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'getPixyData',
    'param_direction': param_out
}

functions['visuallizer'] = {
    'name_with_case' : 'visuallizer',
    'runtime_nature': thread,
    'language': GUI,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['visuallizer']['interfaces']['sendX'] = {
    'port_name': 'sendX',
    'parent_fv': 'visuallizer',
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

functions['visuallizer']['interfaces']['sendX']['paramsInOrdered'] = ['x']

functions['visuallizer']['interfaces']['sendX']['paramsOutOrdered'] = []

functions['visuallizer']['interfaces']['sendX']['in']['x'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'sendX',
    'param_direction': param_in
}

functions['visuallizer']['interfaces']['test'] = {
    'port_name': 'test',
    'parent_fv': 'visuallizer',
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
    'distant_fv': 'sdl2',
    'calling_threads': {},
    'distant_name': 'test',
    'queue_size': 1
}

functions['visuallizer']['interfaces']['test']['paramsInOrdered'] = ['a']

functions['visuallizer']['interfaces']['test']['paramsOutOrdered'] = []

functions['visuallizer']['interfaces']['test']['in']['a'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'test',
    'param_direction': param_in
}

functions['visuallizer']['interfaces']['sendY'] = {
    'port_name': 'sendY',
    'parent_fv': 'visuallizer',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': variator,
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

functions['visuallizer']['interfaces']['sendY']['paramsInOrdered'] = ['y']

functions['visuallizer']['interfaces']['sendY']['paramsOutOrdered'] = []

functions['visuallizer']['interfaces']['sendY']['in']['y'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'sendY',
    'param_direction': param_in
}

functions['sdl2'] = {
    'name_with_case' : 'SDL2',
    'runtime_nature': thread,
    'language': OG,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['sdl2']['interfaces']['test'] = {
    'port_name': 'test',
    'parent_fv': 'sdl2',
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

functions['sdl2']['interfaces']['test']['paramsInOrdered'] = ['a']

functions['sdl2']['interfaces']['test']['paramsOutOrdered'] = []

functions['sdl2']['interfaces']['test']['in']['a'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'test',
    'param_direction': param_in
}

functions['sdl2']['interfaces']['pulse'] = {
    'port_name': 'pulse',
    'parent_fv': 'sdl2',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': cyclic,
    'period': 10,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 0,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['sdl2']['interfaces']['pulse']['paramsInOrdered'] = []

functions['sdl2']['interfaces']['pulse']['paramsOutOrdered'] = []

functions['sdl2']['interfaces']['getPixyData'] = {
    'port_name': 'getPixyData',
    'parent_fv': 'sdl2',
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

functions['sdl2']['interfaces']['getPixyData']['paramsInOrdered'] = []

functions['sdl2']['interfaces']['getPixyData']['paramsOutOrdered'] = ['x', 'y']

functions['sdl2']['interfaces']['getPixyData']['out']['x'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'getPixyData',
    'param_direction': param_out
}

functions['sdl2']['interfaces']['getPixyData']['out']['y'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'getPixyData',
    'param_direction': param_out
}

functions['sdl2']['interfaces']['sendX'] = {
    'port_name': 'sendX',
    'parent_fv': 'sdl2',
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
    'distant_fv': 'visuallizer',
    'calling_threads': {},
    'distant_name': 'sendX',
    'queue_size': 1
}

functions['sdl2']['interfaces']['sendX']['paramsInOrdered'] = ['x']

functions['sdl2']['interfaces']['sendX']['paramsOutOrdered'] = []

functions['sdl2']['interfaces']['sendX']['in']['x'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'sendX',
    'param_direction': param_in
}

functions['sdl2']['interfaces']['sendY'] = {
    'port_name': 'sendY',
    'parent_fv': 'sdl2',
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
    'distant_fv': 'visuallizer',
    'calling_threads': {},
    'distant_name': 'sendY',
    'queue_size': 1
}

functions['sdl2']['interfaces']['sendY']['paramsInOrdered'] = ['y']

functions['sdl2']['interfaces']['sendY']['paramsOutOrdered'] = []

functions['sdl2']['interfaces']['sendY']['in']['y'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'sendY',
    'param_direction': param_in
}
