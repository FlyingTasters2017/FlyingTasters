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
    'language': Ada,
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

functions['obsw']['interfaces']['Takeoff']['paramsInOrdered'] = ['Ref_H']

functions['obsw']['interfaces']['Takeoff']['paramsOutOrdered'] = []

functions['obsw']['interfaces']['Takeoff']['in']['Ref_H'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhomeassertFlyingTastersdemo_1InterfaceView.aadl/dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'Takeoff',
    'param_direction': param_in
}

functions['obsw']['interfaces']['Height'] = {
    'port_name': 'Height',
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
    'distant_name': 'Height',
    'queue_size': 1
}

functions['obsw']['interfaces']['Height']['paramsInOrdered'] = ['H']

functions['obsw']['interfaces']['Height']['paramsOutOrdered'] = []

functions['obsw']['interfaces']['Height']['in']['H'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhomeassertFlyingTastersdemo_1InterfaceView.aadl/dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'Height',
    'param_direction': param_in
}

functions['obsw']['interfaces']['Compute_Input'] = {
    'port_name': 'Compute_Input',
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
    'distant_name': 'Compute_Input',
    'queue_size': 1
}

functions['obsw']['interfaces']['Compute_Input']['paramsInOrdered'] = ['Ref_h', 'dh', 'h']

functions['obsw']['interfaces']['Compute_Input']['paramsOutOrdered'] = ['F']

functions['obsw']['interfaces']['Compute_Input']['in']['Ref_h'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhomeassertFlyingTastersdemo_1InterfaceView.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Compute_Input',
    'param_direction': param_in
}

functions['obsw']['interfaces']['Compute_Input']['in']['dh'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhomeassertFlyingTastersdemo_1InterfaceView.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Compute_Input',
    'param_direction': param_in
}

functions['obsw']['interfaces']['Compute_Input']['in']['h'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhomeassertFlyingTastersdemo_1InterfaceView.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Compute_Input',
    'param_direction': param_in
}

functions['obsw']['interfaces']['Compute_Input']['out']['F'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhomeassertFlyingTastersdemo_1InterfaceView.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Compute_Input',
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

functions['obsw']['interfaces']['Response']['paramsInOrdered'] = ['F']

functions['obsw']['interfaces']['Response']['paramsOutOrdered'] = ['dh', 'h']

functions['obsw']['interfaces']['Response']['in']['F'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhomeassertFlyingTastersdemo_1InterfaceView.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Response',
    'param_direction': param_in
}

functions['obsw']['interfaces']['Response']['out']['dh'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhomeassertFlyingTastersdemo_1InterfaceView.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Response',
    'param_direction': param_out
}

functions['obsw']['interfaces']['Response']['out']['h'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhomeassertFlyingTastersdemo_1InterfaceView.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Response',
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

functions['ground']['interfaces']['Height'] = {
    'port_name': 'Height',
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

functions['ground']['interfaces']['Height']['paramsInOrdered'] = ['H']

functions['ground']['interfaces']['Height']['paramsOutOrdered'] = []

functions['ground']['interfaces']['Height']['in']['H'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhomeassertFlyingTastersdemo_1InterfaceView.aadl/dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'Height',
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

functions['ground']['interfaces']['Takeoff']['paramsInOrdered'] = ['Ref_H']

functions['ground']['interfaces']['Takeoff']['paramsOutOrdered'] = []

functions['ground']['interfaces']['Takeoff']['in']['Ref_H'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhomeassertFlyingTastersdemo_1InterfaceView.aadl/dataview-uniq.asn',
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

functions['drone_model']['interfaces']['Response']['paramsInOrdered'] = ['F']

functions['drone_model']['interfaces']['Response']['paramsOutOrdered'] = ['dh', 'h']

functions['drone_model']['interfaces']['Response']['in']['F'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhomeassertFlyingTastersdemo_1InterfaceView.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Response',
    'param_direction': param_in
}

functions['drone_model']['interfaces']['Response']['out']['dh'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhomeassertFlyingTastersdemo_1InterfaceView.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Response',
    'param_direction': param_out
}

functions['drone_model']['interfaces']['Response']['out']['h'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhomeassertFlyingTastersdemo_1InterfaceView.aadl/dataview-uniq.asn',
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

functions['controller']['interfaces']['Compute_Input'] = {
    'port_name': 'Compute_Input',
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

functions['controller']['interfaces']['Compute_Input']['paramsInOrdered'] = ['Ref_h', 'dh', 'h']

functions['controller']['interfaces']['Compute_Input']['paramsOutOrdered'] = ['F']

functions['controller']['interfaces']['Compute_Input']['in']['Ref_h'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhomeassertFlyingTastersdemo_1InterfaceView.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Compute_Input',
    'param_direction': param_in
}

functions['controller']['interfaces']['Compute_Input']['in']['dh'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhomeassertFlyingTastersdemo_1InterfaceView.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Compute_Input',
    'param_direction': param_in
}

functions['controller']['interfaces']['Compute_Input']['in']['h'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhomeassertFlyingTastersdemo_1InterfaceView.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Compute_Input',
    'param_direction': param_in
}

functions['controller']['interfaces']['Compute_Input']['out']['F'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhomeassertFlyingTastersdemo_1InterfaceView.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Compute_Input',
    'param_direction': param_out
}
