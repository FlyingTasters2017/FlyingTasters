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

functions['gcs'] = {
    'name_with_case' : 'gcs',
    'runtime_nature': passive,
    'language': GUI,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['gcs']['interfaces']['startSupervisor'] = {
    'port_name': 'startSupervisor',
    'parent_fv': 'gcs',
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
    'distant_fv': 'csupervisor',
    'calling_threads': {},
    'distant_name': 'startSupervisor',
    'queue_size': 1
}

functions['gcs']['interfaces']['startSupervisor']['paramsInOrdered'] = ['start']

functions['gcs']['interfaces']['startSupervisor']['paramsOutOrdered'] = []

functions['gcs']['interfaces']['startSupervisor']['in']['start'] = {
    'type': 'MyBool',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': boolean,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'startSupervisor',
    'param_direction': param_in
}

functions['pixycam'] = {
    'name_with_case' : 'Pixycam',
    'runtime_nature': passive,
    'language': C,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['pixycam']['interfaces']['rawdata'] = {
    'port_name': 'rawdata',
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

functions['pixycam']['interfaces']['rawdata']['paramsInOrdered'] = []

functions['pixycam']['interfaces']['rawdata']['paramsOutOrdered'] = []

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

functions['supervisor'] = {
    'name_with_case' : 'supervisor',
    'runtime_nature': thread,
    'language': OG,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['supervisor']['interfaces']['pulse'] = {
    'port_name': 'pulse',
    'parent_fv': 'supervisor',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': cyclic,
    'period': 100,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 0,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['supervisor']['interfaces']['pulse']['paramsInOrdered'] = []

functions['supervisor']['interfaces']['pulse']['paramsOutOrdered'] = []

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

functions['camsupervisor'] = {
    'name_with_case' : 'camSupervisor',
    'runtime_nature': thread,
    'language': OG,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['camsupervisor']['interfaces']['campulse'] = {
    'port_name': 'campulse',
    'parent_fv': 'camsupervisor',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': cyclic,
    'period': 1000,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 0,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['camsupervisor']['interfaces']['campulse']['paramsInOrdered'] = []

functions['camsupervisor']['interfaces']['campulse']['paramsOutOrdered'] = []

functions['camsupervisor']['interfaces']['rawdata'] = {
    'port_name': 'rawdata',
    'parent_fv': 'camsupervisor',
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
    'distant_name': 'rawdata',
    'queue_size': 1
}

functions['camsupervisor']['interfaces']['rawdata']['paramsInOrdered'] = []

functions['camsupervisor']['interfaces']['rawdata']['paramsOutOrdered'] = []

functions['csupervisor'] = {
    'name_with_case' : 'CSupervisor',
    'runtime_nature': thread,
    'language': C,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['csupervisor']['interfaces']['startSupervisor'] = {
    'port_name': 'startSupervisor',
    'parent_fv': 'csupervisor',
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

functions['csupervisor']['interfaces']['startSupervisor']['paramsInOrdered'] = ['start']

functions['csupervisor']['interfaces']['startSupervisor']['paramsOutOrdered'] = []

functions['csupervisor']['interfaces']['startSupervisor']['in']['start'] = {
    'type': 'MyBool',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': boolean,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'startSupervisor',
    'param_direction': param_in
}
