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

functions['supervisor']['interfaces']['pulse']['paramsInOrdered'] = []

functions['supervisor']['interfaces']['pulse']['paramsOutOrdered'] = []

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

functions['supervisor']['interfaces']['takeoff']['paramsInOrdered'] = ['Ref']

functions['supervisor']['interfaces']['takeoff']['paramsOutOrdered'] = []

functions['supervisor']['interfaces']['takeoff']['in']['Ref'] = {
    'type': 'MyDroneData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'takeoff',
    'param_direction': param_in
}

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

functions['supervisor']['interfaces']['readStabilizerSendThrust']['paramsInOrdered'] = ['droneData']

functions['supervisor']['interfaces']['readStabilizerSendThrust']['paramsOutOrdered'] = ['sensorData']

functions['supervisor']['interfaces']['readStabilizerSendThrust']['in']['droneData'] = {
    'type': 'MyDroneData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'readStabilizerSendThrust',
    'param_direction': param_in
}

functions['supervisor']['interfaces']['readStabilizerSendThrust']['out']['sensorData'] = {
    'type': 'MySensorData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'readStabilizerSendThrust',
    'param_direction': param_out
}

functions['supervisor']['interfaces']['displaySensor'] = {
    'port_name': 'displaySensor',
    'parent_fv': 'supervisor',
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
    'distant_fv': 'gcs',
    'calling_threads': {},
    'distant_name': 'displaySensor',
    'queue_size': 1
}

functions['supervisor']['interfaces']['displaySensor']['paramsInOrdered'] = ['sensorData']

functions['supervisor']['interfaces']['displaySensor']['paramsOutOrdered'] = []

functions['supervisor']['interfaces']['displaySensor']['in']['sensorData'] = {
    'type': 'MySensorData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'displaySensor',
    'param_direction': param_in
}

functions['supervisor']['interfaces']['control_Act'] = {
    'port_name': 'control_Act',
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
    'distant_fv': 'control',
    'calling_threads': {},
    'distant_name': 'control_Act',
    'queue_size': 1
}

functions['supervisor']['interfaces']['control_Act']['paramsInOrdered'] = ['sensorData', 'Ref']

functions['supervisor']['interfaces']['control_Act']['paramsOutOrdered'] = ['droneData']

functions['supervisor']['interfaces']['control_Act']['in']['sensorData'] = {
    'type': 'MySensorData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'control_Act',
    'param_direction': param_in
}

functions['supervisor']['interfaces']['control_Act']['in']['Ref'] = {
    'type': 'MyDroneData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'control_Act',
    'param_direction': param_in
}

functions['supervisor']['interfaces']['control_Act']['out']['droneData'] = {
    'type': 'MyDroneData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'control_Act',
    'param_direction': param_out
}

functions['supervisor']['interfaces']['DataOperation'] = {
    'port_name': 'DataOperation',
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
    'distant_fv': 'operation',
    'calling_threads': {},
    'distant_name': 'DataOperation',
    'queue_size': 1
}

functions['supervisor']['interfaces']['DataOperation']['paramsInOrdered'] = ['Sensordata_in']

functions['supervisor']['interfaces']['DataOperation']['paramsOutOrdered'] = ['Sensordata_out']

functions['supervisor']['interfaces']['DataOperation']['in']['Sensordata_in'] = {
    'type': 'MySensorData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'DataOperation',
    'param_direction': param_in
}

functions['supervisor']['interfaces']['DataOperation']['out']['Sensordata_out'] = {
    'type': 'MySensorData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'DataOperation',
    'param_direction': param_out
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
    'runtime_nature': thread,
    'language': GUI,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['gcs']['interfaces']['displaySensor'] = {
    'port_name': 'displaySensor',
    'parent_fv': 'gcs',
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

functions['gcs']['interfaces']['displaySensor']['paramsInOrdered'] = ['sensorData']

functions['gcs']['interfaces']['displaySensor']['paramsOutOrdered'] = []

functions['gcs']['interfaces']['displaySensor']['in']['sensorData'] = {
    'type': 'MySensorData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'displaySensor',
    'param_direction': param_in
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

functions['gcs']['interfaces']['takeoff']['paramsInOrdered'] = ['Ref']

functions['gcs']['interfaces']['takeoff']['paramsOutOrdered'] = []

functions['gcs']['interfaces']['takeoff']['in']['Ref'] = {
    'type': 'MyDroneData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'takeoff',
    'param_direction': param_in
}

functions['control'] = {
    'name_with_case' : 'control',
    'runtime_nature': passive,
    'language': SIMULINK,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['control']['interfaces']['control_Act'] = {
    'port_name': 'control_Act',
    'parent_fv': 'control',
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

functions['control']['interfaces']['control_Act']['paramsInOrdered'] = ['sensorData', 'Ref']

functions['control']['interfaces']['control_Act']['paramsOutOrdered'] = ['droneData']

functions['control']['interfaces']['control_Act']['in']['sensorData'] = {
    'type': 'MySensorData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'control_Act',
    'param_direction': param_in
}

functions['control']['interfaces']['control_Act']['in']['Ref'] = {
    'type': 'MyDroneData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'control_Act',
    'param_direction': param_in
}

functions['control']['interfaces']['control_Act']['out']['droneData'] = {
    'type': 'MyDroneData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'control_Act',
    'param_direction': param_out
}

functions['operation'] = {
    'name_with_case' : 'Operation',
    'runtime_nature': passive,
    'language': SIMULINK,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['operation']['interfaces']['DataOperation'] = {
    'port_name': 'DataOperation',
    'parent_fv': 'operation',
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

functions['operation']['interfaces']['DataOperation']['paramsInOrdered'] = ['Sensordata_in']

functions['operation']['interfaces']['DataOperation']['paramsOutOrdered'] = ['Sensordata_out']

functions['operation']['interfaces']['DataOperation']['in']['Sensordata_in'] = {
    'type': 'MySensorData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'DataOperation',
    'param_direction': param_in
}

functions['operation']['interfaces']['DataOperation']['out']['Sensordata_out'] = {
    'type': 'MySensorData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'DataOperation',
    'param_direction': param_out
}
