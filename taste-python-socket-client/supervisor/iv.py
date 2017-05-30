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

functions['supervisor']['interfaces']['pulse']['paramsInOrdered'] = []

functions['supervisor']['interfaces']['pulse']['paramsOutOrdered'] = []

functions['supervisor']['interfaces']['readStabilizerSendThrust'] = {
    'port_name': 'readStabilizerSendThrust',
    'parent_fv': 'supervisor',
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

functions['supervisor']['interfaces']['readStabilizerSendThrust']['paramsInOrdered'] = ['ref_thrust']

functions['supervisor']['interfaces']['readStabilizerSendThrust']['paramsOutOrdered'] = []

functions['supervisor']['interfaces']['readStabilizerSendThrust']['in']['ref_thrust'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'readStabilizerSendThrust',
    'param_direction': param_in
}

functions['supervisor']['interfaces']['takeoff'] = {
    'port_name': 'takeoff',
    'parent_fv': 'supervisor',
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

functions['supervisor']['interfaces']['takeoff']['paramsInOrdered'] = ['ref_thrust']

functions['supervisor']['interfaces']['takeoff']['paramsOutOrdered'] = []

functions['supervisor']['interfaces']['takeoff']['in']['ref_thrust'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'takeoff',
    'param_direction': param_in
}

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

functions['socketclient']['interfaces']['readStabilizerSendThrust']['paramsInOrdered'] = ['ref_thrust']

functions['socketclient']['interfaces']['readStabilizerSendThrust']['paramsOutOrdered'] = []

functions['socketclient']['interfaces']['readStabilizerSendThrust']['in']['ref_thrust'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'readStabilizerSendThrust',
    'param_direction': param_in
}

functions['gcs'] = {
    'name_with_case' : 'gcs',
    'runtime_nature': passive,
    'language': GUI,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['gcs']['interfaces']['takeoff'] = {
    'port_name': 'takeoff',
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
    'distant_fv': 'supervisor',
    'calling_threads': {},
    'distant_name': 'takeoff',
    'queue_size': 1
}

functions['gcs']['interfaces']['takeoff']['paramsInOrdered'] = ['ref_thrust']

functions['gcs']['interfaces']['takeoff']['paramsOutOrdered'] = []

functions['gcs']['interfaces']['takeoff']['in']['ref_thrust'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'takeoff',
    'param_direction': param_in
}