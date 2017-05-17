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

functions['obsw']['interfaces']['Start_work'] = {
    'port_name': 'Start_work',
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

functions['obsw']['interfaces']['Start_work']['paramsInOrdered'] = ['Int_F']

functions['obsw']['interfaces']['Start_work']['paramsOutOrdered'] = []

functions['obsw']['interfaces']['Start_work']['in']['Int_F'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhometasteFlyingTastersdemo4InterfaceView.aadl/dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'Start_work',
    'param_direction': param_in
}

functions['obsw']['interfaces']['Compute_Thrust'] = {
    'port_name': 'Compute_Thrust',
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
    'distant_fv': 'model_1dof',
    'calling_threads': {},
    'distant_name': 'Compute_Thrust',
    'queue_size': 1
}

functions['obsw']['interfaces']['Compute_Thrust']['paramsInOrdered'] = ['F']

functions['obsw']['interfaces']['Compute_Thrust']['paramsOutOrdered'] = ['h', 'dh']

functions['obsw']['interfaces']['Compute_Thrust']['in']['F'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhometasteFlyingTastersdemo4InterfaceView.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Compute_Thrust',
    'param_direction': param_in
}

functions['obsw']['interfaces']['Compute_Thrust']['out']['h'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhometasteFlyingTastersdemo4InterfaceView.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Compute_Thrust',
    'param_direction': param_out
}

functions['obsw']['interfaces']['Compute_Thrust']['out']['dh'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhometasteFlyingTastersdemo4InterfaceView.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Compute_Thrust',
    'param_direction': param_out
}

functions['obsw']['interfaces']['Thrust_Update'] = {
    'port_name': 'Thrust_Update',
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
    'distant_name': 'Thrust_Update',
    'queue_size': 1
}

functions['obsw']['interfaces']['Thrust_Update']['paramsInOrdered'] = ['H']

functions['obsw']['interfaces']['Thrust_Update']['paramsOutOrdered'] = []

functions['obsw']['interfaces']['Thrust_Update']['in']['H'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhometasteFlyingTastersdemo4InterfaceView.aadl/dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'Thrust_Update',
    'param_direction': param_in
}

functions['obsw']['interfaces']['dHeight'] = {
    'port_name': 'dHeight',
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
    'distant_name': 'dHeight',
    'queue_size': 1
}

functions['obsw']['interfaces']['dHeight']['paramsInOrdered'] = ['dH']

functions['obsw']['interfaces']['dHeight']['paramsOutOrdered'] = []

functions['obsw']['interfaces']['dHeight']['in']['dH'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhometasteFlyingTastersdemo4InterfaceView.aadl/dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'dHeight',
    'param_direction': param_in
}

functions['model_1dof'] = {
    'name_with_case' : 'Model_1DoF',
    'runtime_nature': passive,
    'language': C,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['model_1dof']['interfaces']['Compute_Thrust'] = {
    'port_name': 'Compute_Thrust',
    'parent_fv': 'model_1dof',
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

functions['model_1dof']['interfaces']['Compute_Thrust']['paramsInOrdered'] = ['F']

functions['model_1dof']['interfaces']['Compute_Thrust']['paramsOutOrdered'] = ['h', 'dh']

functions['model_1dof']['interfaces']['Compute_Thrust']['in']['F'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhometasteFlyingTastersdemo4InterfaceView.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Compute_Thrust',
    'param_direction': param_in
}

functions['model_1dof']['interfaces']['Compute_Thrust']['out']['h'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhometasteFlyingTastersdemo4InterfaceView.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Compute_Thrust',
    'param_direction': param_out
}

functions['model_1dof']['interfaces']['Compute_Thrust']['out']['dh'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhometasteFlyingTastersdemo4InterfaceView.aadl/dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'Compute_Thrust',
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

functions['ground']['interfaces']['Thrust_Update'] = {
    'port_name': 'Thrust_Update',
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

functions['ground']['interfaces']['Thrust_Update']['paramsInOrdered'] = ['H']

functions['ground']['interfaces']['Thrust_Update']['paramsOutOrdered'] = []

functions['ground']['interfaces']['Thrust_Update']['in']['H'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhometasteFlyingTastersdemo4InterfaceView.aadl/dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'Thrust_Update',
    'param_direction': param_in
}

functions['ground']['interfaces']['Start_work'] = {
    'port_name': 'Start_work',
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
    'distant_name': 'Start_work',
    'queue_size': 1
}

functions['ground']['interfaces']['Start_work']['paramsInOrdered'] = ['Int_F']

functions['ground']['interfaces']['Start_work']['paramsOutOrdered'] = []

functions['ground']['interfaces']['Start_work']['in']['Int_F'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhometasteFlyingTastersdemo4InterfaceView.aadl/dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'Start_work',
    'param_direction': param_in
}

functions['ground']['interfaces']['dHeight'] = {
    'port_name': 'dHeight',
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

functions['ground']['interfaces']['dHeight']['paramsInOrdered'] = ['dH']

functions['ground']['interfaces']['dHeight']['paramsOutOrdered'] = []

functions['ground']['interfaces']['dHeight']['in']['dH'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': '/tmp/uniqhometasteFlyingTastersdemo4InterfaceView.aadl/dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'dHeight',
    'param_direction': param_in
}
