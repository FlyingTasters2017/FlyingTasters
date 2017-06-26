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

functions['socketclient'] = {
    'name_with_case' : 'socketClient',
    'runtime_nature': passive,
    'language': C,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['socketclient']['interfaces']['readStabilizerSendThrust'] = {
    'port_name': 'readStabilizerSendThrust',
    'parent_fv': 'socketclient',
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

functions['socketclient']['interfaces']['readStabilizerSendThrust']['paramsInOrdered'] = ['droneData']

functions['socketclient']['interfaces']['readStabilizerSendThrust']['paramsOutOrdered'] = ['sensorData']

functions['socketclient']['interfaces']['readStabilizerSendThrust']['in']['droneData'] = {
    'type': 'MyDroneData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'readStabilizerSendThrust',
    'param_direction': param_in
}

functions['socketclient']['interfaces']['readStabilizerSendThrust']['out']['sensorData'] = {
    'type': 'MySensorData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'readStabilizerSendThrust',
    'param_direction': param_out
}

functions['socketclient']['interfaces']['controlAction'] = {
    'port_name': 'controlAction',
    'parent_fv': 'socketclient',
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
    'distant_fv': 'controller',
    'calling_threads': {},
    'distant_name': 'controlAction',
    'queue_size': 1
}

functions['socketclient']['interfaces']['controlAction']['paramsInOrdered'] = ['posData', 'sensorData']

functions['socketclient']['interfaces']['controlAction']['paramsOutOrdered'] = ['droneData']

functions['socketclient']['interfaces']['controlAction']['in']['posData'] = {
    'type': 'MyPositionData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'controlAction',
    'param_direction': param_in
}

functions['socketclient']['interfaces']['controlAction']['in']['sensorData'] = {
    'type': 'MySensorData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'controlAction',
    'param_direction': param_in
}

functions['socketclient']['interfaces']['controlAction']['out']['droneData'] = {
    'type': 'MyDroneData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'controlAction',
    'param_direction': param_out
}

functions['socketclient']['interfaces']['getPosition'] = {
    'port_name': 'getPosition',
    'parent_fv': 'socketclient',
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
    'distant_fv': 'pixyprocess',
    'calling_threads': {},
    'distant_name': 'getPosition',
    'queue_size': 1
}

functions['socketclient']['interfaces']['getPosition']['paramsInOrdered'] = ['currentHeight']

functions['socketclient']['interfaces']['getPosition']['paramsOutOrdered'] = ['currentPosition']

functions['socketclient']['interfaces']['getPosition']['in']['currentHeight'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'getPosition',
    'param_direction': param_in
}

functions['socketclient']['interfaces']['getPosition']['out']['currentPosition'] = {
    'type': 'MyPositionData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'getPosition',
    'param_direction': param_out
}

functions['pixyprocess'] = {
    'name_with_case' : 'PixyProcess',
    'runtime_nature': passive,
    'language': C,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['pixyprocess']['interfaces']['processData'] = {
    'port_name': 'processData',
    'parent_fv': 'pixyprocess',
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

functions['pixyprocess']['interfaces']['processData']['paramsInOrdered'] = ['x', 'y']

functions['pixyprocess']['interfaces']['processData']['paramsOutOrdered'] = []

functions['pixyprocess']['interfaces']['processData']['in']['x'] = {
    'type': 'T_UInt32',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'processData',
    'param_direction': param_in
}

functions['pixyprocess']['interfaces']['processData']['in']['y'] = {
    'type': 'T_UInt32',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'processData',
    'param_direction': param_in
}

functions['pixyprocess']['interfaces']['getPosition'] = {
    'port_name': 'getPosition',
    'parent_fv': 'pixyprocess',
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

functions['pixyprocess']['interfaces']['getPosition']['paramsInOrdered'] = ['currentHeight']

functions['pixyprocess']['interfaces']['getPosition']['paramsOutOrdered'] = ['currentPosition']

functions['pixyprocess']['interfaces']['getPosition']['in']['currentHeight'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'getPosition',
    'param_direction': param_in
}

functions['pixyprocess']['interfaces']['getPosition']['out']['currentPosition'] = {
    'type': 'MyPositionData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'getPosition',
    'param_direction': param_out
}

functions['cclient'] = {
    'name_with_case' : 'cClient',
    'runtime_nature': passive,
    'language': C,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['cclient']['interfaces']['takeoff'] = {
    'port_name': 'takeoff',
    'parent_fv': 'cclient',
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

functions['cclient']['interfaces']['takeoff']['paramsInOrdered'] = []

functions['cclient']['interfaces']['takeoff']['paramsOutOrdered'] = ['droneData']

functions['cclient']['interfaces']['takeoff']['out']['droneData'] = {
    'type': 'MyDroneData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'takeoff',
    'param_direction': param_out
}

functions['timer'] = {
    'name_with_case' : 'Timer',
    'runtime_nature': passive,
    'language': C,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['timer']['interfaces']['printTime'] = {
    'port_name': 'printTime',
    'parent_fv': 'timer',
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

functions['timer']['interfaces']['printTime']['paramsInOrdered'] = []

functions['timer']['interfaces']['printTime']['paramsOutOrdered'] = []

functions['pixycam'] = {
    'name_with_case' : 'Pixycam',
    'runtime_nature': thread,
    'language': C,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['pixycam']['interfaces']['pulse'] = {
    'port_name': 'pulse',
    'parent_fv': 'pixycam',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': sporadic,
    'period': 60000,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 0,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['pixycam']['interfaces']['pulse']['paramsInOrdered'] = ['startvalue']

functions['pixycam']['interfaces']['pulse']['paramsOutOrdered'] = []

functions['pixycam']['interfaces']['pulse']['in']['startvalue'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'pulse',
    'param_direction': param_in
}

functions['pixycam']['interfaces']['readStabilizerSendThrust'] = {
    'port_name': 'readStabilizerSendThrust',
    'parent_fv': 'pixycam',
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
    'distant_fv': 'socketclient',
    'calling_threads': {},
    'distant_name': 'readStabilizerSendThrust',
    'queue_size': 1
}

functions['pixycam']['interfaces']['readStabilizerSendThrust']['paramsInOrdered'] = ['droneData']

functions['pixycam']['interfaces']['readStabilizerSendThrust']['paramsOutOrdered'] = ['sensorData']

functions['pixycam']['interfaces']['readStabilizerSendThrust']['in']['droneData'] = {
    'type': 'MyDroneData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'readStabilizerSendThrust',
    'param_direction': param_in
}

functions['pixycam']['interfaces']['readStabilizerSendThrust']['out']['sensorData'] = {
    'type': 'MySensorData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'readStabilizerSendThrust',
    'param_direction': param_out
}

functions['pixycam']['interfaces']['takeoff'] = {
    'port_name': 'takeoff',
    'parent_fv': 'pixycam',
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
    'distant_fv': 'cclient',
    'calling_threads': {},
    'distant_name': 'takeoff',
    'queue_size': 1
}

functions['pixycam']['interfaces']['takeoff']['paramsInOrdered'] = []

functions['pixycam']['interfaces']['takeoff']['paramsOutOrdered'] = ['droneData']

functions['pixycam']['interfaces']['takeoff']['out']['droneData'] = {
    'type': 'MyDroneData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'takeoff',
    'param_direction': param_out
}

functions['pixycam']['interfaces']['printTime'] = {
    'port_name': 'printTime',
    'parent_fv': 'pixycam',
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
    'distant_fv': 'timer',
    'calling_threads': {},
    'distant_name': 'printTime',
    'queue_size': 1
}

functions['pixycam']['interfaces']['printTime']['paramsInOrdered'] = []

functions['pixycam']['interfaces']['printTime']['paramsOutOrdered'] = []

functions['pixycam']['interfaces']['processData'] = {
    'port_name': 'processData',
    'parent_fv': 'pixycam',
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
    'distant_fv': 'pixyprocess',
    'calling_threads': {},
    'distant_name': 'processData',
    'queue_size': 1
}

functions['pixycam']['interfaces']['processData']['paramsInOrdered'] = ['x', 'y']

functions['pixycam']['interfaces']['processData']['paramsOutOrdered'] = []

functions['pixycam']['interfaces']['processData']['in']['x'] = {
    'type': 'T_UInt32',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'processData',
    'param_direction': param_in
}

functions['pixycam']['interfaces']['processData']['in']['y'] = {
    'type': 'T_UInt32',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'processData',
    'param_direction': param_in
}

functions['pixycam']['interfaces']['startStop'] = {
    'port_name': 'startStop',
    'parent_fv': 'pixycam',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': synch,
    'rcm': protected,
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

functions['pixycam']['interfaces']['startStop']['paramsInOrdered'] = []

functions['pixycam']['interfaces']['startStop']['paramsOutOrdered'] = []

functions['controller'] = {
    'name_with_case' : 'controller',
    'runtime_nature': passive,
    'language': SIMULINK,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['controller']['interfaces']['controlAction'] = {
    'port_name': 'controlAction',
    'parent_fv': 'controller',
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

functions['controller']['interfaces']['controlAction']['paramsInOrdered'] = ['posData', 'sensorData']

functions['controller']['interfaces']['controlAction']['paramsOutOrdered'] = ['droneData']

functions['controller']['interfaces']['controlAction']['in']['posData'] = {
    'type': 'MyPositionData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'controlAction',
    'param_direction': param_in
}

functions['controller']['interfaces']['controlAction']['in']['sensorData'] = {
    'type': 'MySensorData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'controlAction',
    'param_direction': param_in
}

functions['controller']['interfaces']['controlAction']['out']['droneData'] = {
    'type': 'MyDroneData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'controlAction',
    'param_direction': param_out
}

functions['gui'] = {
    'name_with_case' : 'GUI',
    'runtime_nature': passive,
    'language': GUI,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['gui']['interfaces']['pulse'] = {
    'port_name': 'pulse',
    'parent_fv': 'gui',
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
    'distant_fv': 'pixycam',
    'calling_threads': {},
    'distant_name': 'pulse',
    'queue_size': 1
}

functions['gui']['interfaces']['pulse']['paramsInOrdered'] = ['startvalue']

functions['gui']['interfaces']['pulse']['paramsOutOrdered'] = []

functions['gui']['interfaces']['pulse']['in']['startvalue'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'pulse',
    'param_direction': param_in
}

functions['gui']['interfaces']['onOff'] = {
    'port_name': 'onOff',
    'parent_fv': 'gui',
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
    'distant_fv': 'function1',
    'calling_threads': {},
    'distant_name': 'onOff',
    'queue_size': 1
}

functions['gui']['interfaces']['onOff']['paramsInOrdered'] = ['onoffvalue']

functions['gui']['interfaces']['onOff']['paramsOutOrdered'] = []

functions['gui']['interfaces']['onOff']['in']['onoffvalue'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'onOff',
    'param_direction': param_in
}

functions['function1'] = {
    'name_with_case' : 'Function1',
    'runtime_nature': thread,
    'language': OG,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['function1']['interfaces']['startStop'] = {
    'port_name': 'startStop',
    'parent_fv': 'function1',
    'direction': RI,
    'in': {},
    'out': {},
    'synchronism': synch,
    'rcm': protected,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': '',
    'wcet_high': 0,
    'wcet_high_unit': '',
    'distant_fv': 'pixycam',
    'calling_threads': {},
    'distant_name': 'startStop',
    'queue_size': 1
}

functions['function1']['interfaces']['startStop']['paramsInOrdered'] = []

functions['function1']['interfaces']['startStop']['paramsOutOrdered'] = []

functions['function1']['interfaces']['onOff'] = {
    'port_name': 'onOff',
    'parent_fv': 'function1',
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

functions['function1']['interfaces']['onOff']['paramsInOrdered'] = ['onoffvalue']

functions['function1']['interfaces']['onOff']['paramsOutOrdered'] = []

functions['function1']['interfaces']['onOff']['in']['onoffvalue'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'onOff',
    'param_direction': param_in
}
