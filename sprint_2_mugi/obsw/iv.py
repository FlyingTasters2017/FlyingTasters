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

functions['obsw']['interfaces']['Takeoff'] = {
    'port_name': 'Takeoff',
    'parent_fv': 'obsw',
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

functions['obsw']['interfaces']['Takeoff']['paramsInOrdered'] = ['Trajectory']

functions['obsw']['interfaces']['Takeoff']['paramsOutOrdered'] = []

functions['obsw']['interfaces']['Takeoff']['in']['Trajectory'] = {
    'type': 'MyTrajectory',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'Takeoff',
    'param_direction': param_in
}

functions['obsw']['interfaces']['Pulse'] = {
    'port_name': 'Pulse',
    'parent_fv': 'obsw',
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

functions['obsw']['interfaces']['Pulse']['paramsInOrdered'] = []

functions['obsw']['interfaces']['Pulse']['paramsOutOrdered'] = []

functions['obsw']['interfaces']['Compute_PWM'] = {
    'port_name': 'Compute_PWM',
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
    'distant_name': 'Compute_PWM',
    'queue_size': 1
}

functions['obsw']['interfaces']['Compute_PWM']['paramsInOrdered'] = ['Trajectory', 'States']

functions['obsw']['interfaces']['Compute_PWM']['paramsOutOrdered'] = ['PWM']

functions['obsw']['interfaces']['Compute_PWM']['in']['Trajectory'] = {
    'type': 'MyTrajectory',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Compute_PWM',
    'param_direction': param_in
}

functions['obsw']['interfaces']['Compute_PWM']['in']['States'] = {
    'type': 'MyStates',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Compute_PWM',
    'param_direction': param_in
}

functions['obsw']['interfaces']['Compute_PWM']['out']['PWM'] = {
    'type': 'MyPWM',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Compute_PWM',
    'param_direction': param_out
}

functions['obsw']['interfaces']['Respond_state'] = {
    'port_name': 'Respond_state',
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
    'distant_name': 'Respond_state',
    'queue_size': 1
}

functions['obsw']['interfaces']['Respond_state']['paramsInOrdered'] = ['PWM']

functions['obsw']['interfaces']['Respond_state']['paramsOutOrdered'] = ['States']

functions['obsw']['interfaces']['Respond_state']['in']['PWM'] = {
    'type': 'MyPWM',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Respond_state',
    'param_direction': param_in
}

functions['obsw']['interfaces']['Respond_state']['out']['States'] = {
    'type': 'MyStates',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Respond_state',
    'param_direction': param_out
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
    'encoding': NATIVE,
    'interface': 'GetHeight',
    'param_direction': param_in
}

functions['controller'] = {
    'name_with_case' : 'Controller',
    'runtime_nature': passive,
    'language': SIMULINK,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['controller']['interfaces']['Compute_PWM'] = {
    'port_name': 'Compute_PWM',
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

functions['controller']['interfaces']['Compute_PWM']['paramsInOrdered'] = ['Trajectory', 'States']

functions['controller']['interfaces']['Compute_PWM']['paramsOutOrdered'] = ['PWM']

functions['controller']['interfaces']['Compute_PWM']['in']['Trajectory'] = {
    'type': 'MyTrajectory',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Compute_PWM',
    'param_direction': param_in
}

functions['controller']['interfaces']['Compute_PWM']['in']['States'] = {
    'type': 'MyStates',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Compute_PWM',
    'param_direction': param_in
}

functions['controller']['interfaces']['Compute_PWM']['out']['PWM'] = {
    'type': 'MyPWM',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Compute_PWM',
    'param_direction': param_out
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
    'encoding': NATIVE,
    'interface': 'GetHeight',
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

functions['ground']['interfaces']['Takeoff']['paramsInOrdered'] = ['Trajectory']

functions['ground']['interfaces']['Takeoff']['paramsOutOrdered'] = []

functions['ground']['interfaces']['Takeoff']['in']['Trajectory'] = {
    'type': 'MyTrajectory',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'Takeoff',
    'param_direction': param_in
}

functions['drone_model'] = {
    'name_with_case' : 'Drone_model',
    'runtime_nature': passive,
    'language': SIMULINK,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['drone_model']['interfaces']['Respond_state'] = {
    'port_name': 'Respond_state',
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

functions['drone_model']['interfaces']['Respond_state']['paramsInOrdered'] = ['PWM']

functions['drone_model']['interfaces']['Respond_state']['paramsOutOrdered'] = ['States']

functions['drone_model']['interfaces']['Respond_state']['in']['PWM'] = {
    'type': 'MyPWM',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Respond_state',
    'param_direction': param_in
}

functions['drone_model']['interfaces']['Respond_state']['out']['States'] = {
    'type': 'MyStates',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Respond_state',
    'param_direction': param_out
}
