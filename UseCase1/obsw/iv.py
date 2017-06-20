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

functions['obsw'] = {
    'name_with_case' : 'OBSW',
    'runtime_nature': thread,
    'language': OG,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['obsw']['interfaces']['Pulse'] = {
    'port_name': 'Pulse',
    'parent_fv': 'obsw',
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

functions['obsw']['interfaces']['Pulse']['paramsInOrdered'] = []

functions['obsw']['interfaces']['Pulse']['paramsOutOrdered'] = []

functions['obsw']['interfaces']['Takeoff'] = {
    'port_name': 'Takeoff',
    'parent_fv': 'obsw',
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

functions['obsw']['interfaces']['Takeoff']['paramsInOrdered'] = ['ReferenceHeight']

functions['obsw']['interfaces']['Takeoff']['paramsOutOrdered'] = []

functions['obsw']['interfaces']['Takeoff']['in']['ReferenceHeight'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'Takeoff',
    'param_direction': param_in
}

functions['obsw']['interfaces']['GetHeight'] = {
    'port_name': 'GetHeight',
    'parent_fv': 'obsw',
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
    'distant_fv': 'ground',
    'calling_threads': {},
    'distant_name': 'GetHeight',
    'queue_size': 1
}

functions['obsw']['interfaces']['GetHeight']['paramsInOrdered'] = ['Height']

functions['obsw']['interfaces']['GetHeight']['paramsOutOrdered'] = []

functions['obsw']['interfaces']['GetHeight']['in']['Height'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'GetHeight',
    'param_direction': param_in
}

functions['obsw']['interfaces']['Compute_Force'] = {
    'port_name': 'Compute_Force',
    'parent_fv': 'obsw',
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
    'distant_name': 'Compute_Force',
    'queue_size': 1
}

functions['obsw']['interfaces']['Compute_Force']['paramsInOrdered'] = ['ReferenceHeight', 'HeightVelocity', 'Height']

functions['obsw']['interfaces']['Compute_Force']['paramsOutOrdered'] = ['Force']

functions['obsw']['interfaces']['Compute_Force']['in']['ReferenceHeight'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Compute_Force',
    'param_direction': param_in
}

functions['obsw']['interfaces']['Compute_Force']['in']['HeightVelocity'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Compute_Force',
    'param_direction': param_in
}

functions['obsw']['interfaces']['Compute_Force']['in']['Height'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Compute_Force',
    'param_direction': param_in
}

functions['obsw']['interfaces']['Compute_Force']['out']['Force'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Compute_Force',
    'param_direction': param_out
}

functions['obsw']['interfaces']['Response'] = {
    'port_name': 'Response',
    'parent_fv': 'obsw',
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
    'distant_fv': 'drone_model',
    'calling_threads': {},
    'distant_name': 'Response',
    'queue_size': 1
}

functions['obsw']['interfaces']['Response']['paramsInOrdered'] = ['Force']

functions['obsw']['interfaces']['Response']['paramsOutOrdered'] = ['HeightVelocity', 'Height']

functions['obsw']['interfaces']['Response']['in']['Force'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Response',
    'param_direction': param_in
}

functions['obsw']['interfaces']['Response']['out']['HeightVelocity'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Response',
    'param_direction': param_out
}

functions['obsw']['interfaces']['Response']['out']['Height'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Response',
    'param_direction': param_out
}

functions['obsw']['interfaces']['GetTrajectory'] = {
    'port_name': 'GetTrajectory',
    'parent_fv': 'obsw',
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
    'distant_fv': 'trajectorygenerator',
    'calling_threads': {},
    'distant_name': 'GetTrajectory',
    'queue_size': 1
}

functions['obsw']['interfaces']['GetTrajectory']['paramsInOrdered'] = ['Num', 'Height']

functions['obsw']['interfaces']['GetTrajectory']['paramsOutOrdered'] = ['Ref']

functions['obsw']['interfaces']['GetTrajectory']['in']['Num'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'GetTrajectory',
    'param_direction': param_in
}

functions['obsw']['interfaces']['GetTrajectory']['in']['Height'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'GetTrajectory',
    'param_direction': param_in
}

functions['obsw']['interfaces']['GetTrajectory']['out']['Ref'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'GetTrajectory',
    'param_direction': param_out
}

functions['obsw']['interfaces']['GetRef'] = {
    'port_name': 'GetRef',
    'parent_fv': 'obsw',
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
    'distant_fv': 'ground',
    'calling_threads': {},
    'distant_name': 'GetRef',
    'queue_size': 1
}

functions['obsw']['interfaces']['GetRef']['paramsInOrdered'] = ['RefHeight']

functions['obsw']['interfaces']['GetRef']['paramsOutOrdered'] = []

functions['obsw']['interfaces']['GetRef']['in']['RefHeight'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'GetRef',
    'param_direction': param_in
}

functions['ground'] = {
    'name_with_case' : 'Ground',
    'runtime_nature': thread,
    'language': GUI,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['ground']['interfaces']['GetHeight'] = {
    'port_name': 'GetHeight',
    'parent_fv': 'ground',
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

functions['ground']['interfaces']['GetHeight']['paramsInOrdered'] = ['Height']

functions['ground']['interfaces']['GetHeight']['paramsOutOrdered'] = []

functions['ground']['interfaces']['GetHeight']['in']['Height'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'GetHeight',
    'param_direction': param_in
}

functions['ground']['interfaces']['GetRef'] = {
    'port_name': 'GetRef',
    'parent_fv': 'ground',
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

functions['ground']['interfaces']['GetRef']['paramsInOrdered'] = ['RefHeight']

functions['ground']['interfaces']['GetRef']['paramsOutOrdered'] = []

functions['ground']['interfaces']['GetRef']['in']['RefHeight'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'GetRef',
    'param_direction': param_in
}

functions['ground']['interfaces']['Takeoff'] = {
    'port_name': 'Takeoff',
    'parent_fv': 'ground',
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
    'distant_fv': 'obsw',
    'calling_threads': {},
    'distant_name': 'Takeoff',
    'queue_size': 1
}

functions['ground']['interfaces']['Takeoff']['paramsInOrdered'] = ['ReferenceHeight']

functions['ground']['interfaces']['Takeoff']['paramsOutOrdered'] = []

functions['ground']['interfaces']['Takeoff']['in']['ReferenceHeight'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'Takeoff',
    'param_direction': param_in
}

functions['drone_model'] = {
    'name_with_case' : 'Drone_Model',
    'runtime_nature': passive,
    'language': C,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['drone_model']['interfaces']['Response'] = {
    'port_name': 'Response',
    'parent_fv': 'drone_model',
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

functions['drone_model']['interfaces']['Response']['paramsInOrdered'] = ['Force']

functions['drone_model']['interfaces']['Response']['paramsOutOrdered'] = ['HeightVelocity', 'Height']

functions['drone_model']['interfaces']['Response']['in']['Force'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Response',
    'param_direction': param_in
}

functions['drone_model']['interfaces']['Response']['out']['HeightVelocity'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Response',
    'param_direction': param_out
}

functions['drone_model']['interfaces']['Response']['out']['Height'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Response',
    'param_direction': param_out
}

functions['controller'] = {
    'name_with_case' : 'Controller',
    'runtime_nature': passive,
    'language': C,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['controller']['interfaces']['Compute_Force'] = {
    'port_name': 'Compute_Force',
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

functions['controller']['interfaces']['Compute_Force']['paramsInOrdered'] = ['ReferenceHeight', 'HeightVelocity', 'Height']

functions['controller']['interfaces']['Compute_Force']['paramsOutOrdered'] = ['Force']

functions['controller']['interfaces']['Compute_Force']['in']['ReferenceHeight'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Compute_Force',
    'param_direction': param_in
}

functions['controller']['interfaces']['Compute_Force']['in']['HeightVelocity'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Compute_Force',
    'param_direction': param_in
}

functions['controller']['interfaces']['Compute_Force']['in']['Height'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Compute_Force',
    'param_direction': param_in
}

functions['controller']['interfaces']['Compute_Force']['out']['Force'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Compute_Force',
    'param_direction': param_out
}

functions['trajectorygenerator'] = {
    'name_with_case' : 'TrajectoryGenerator',
    'runtime_nature': passive,
    'language': C,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['trajectorygenerator']['interfaces']['GetTrajectory'] = {
    'port_name': 'GetTrajectory',
    'parent_fv': 'trajectorygenerator',
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

functions['trajectorygenerator']['interfaces']['GetTrajectory']['paramsInOrdered'] = ['Num', 'Height']

functions['trajectorygenerator']['interfaces']['GetTrajectory']['paramsOutOrdered'] = ['Ref']

functions['trajectorygenerator']['interfaces']['GetTrajectory']['in']['Num'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'GetTrajectory',
    'param_direction': param_in
}

functions['trajectorygenerator']['interfaces']['GetTrajectory']['in']['Height'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'GetTrajectory',
    'param_direction': param_in
}

functions['trajectorygenerator']['interfaces']['GetTrajectory']['out']['Ref'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'GetTrajectory',
    'param_direction': param_out
}
