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
    'runtime_nature': thread,
    'language': C,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['function1']['interfaces']['TM_from_CF'] = {
    'port_name': 'TM_from_CF',
    'parent_fv': 'function1',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': sporadic,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 999,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['function1']['interfaces']['TM_from_CF']['paramsInOrdered'] = ['tm_data']

functions['function1']['interfaces']['TM_from_CF']['paramsOutOrdered'] = []

functions['function1']['interfaces']['TM_from_CF']['in']['tm_data'] = {
    'type': 'TM_T',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'TM_from_CF',
    'param_direction': param_in
}

functions['function1']['interfaces']['TC_from_TASTE'] = {
    'port_name': 'TC_from_TASTE',
    'parent_fv': 'function1',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': synch,
    'rcm': unprotected,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 999,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['function1']['interfaces']['TC_from_TASTE']['paramsInOrdered'] = ['tc_data']

functions['function1']['interfaces']['TC_from_TASTE']['paramsOutOrdered'] = []

functions['function1']['interfaces']['TC_from_TASTE']['in']['tc_data'] = {
    'type': 'TC_T',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'TC_from_TASTE',
    'param_direction': param_in
}

functions['function1']['interfaces']['TC_from_TASTE'] = {
    'port_name': 'TC_from_TASTE',
    'parent_fv': 'function1',
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
    'distant_fv': 'function2',
    'calling_threads': {},
    'distant_name': 'TC_from_TASTE',
    'queue_size': 1
}

functions['function1']['interfaces']['TC_from_TASTE']['paramsInOrdered'] = ['tc_data']

functions['function1']['interfaces']['TC_from_TASTE']['paramsOutOrdered'] = []

functions['function1']['interfaces']['TC_from_TASTE']['in']['tc_data'] = {
    'type': 'TC_T',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'TC_from_TASTE',
    'param_direction': param_in
}

functions['function1']['interfaces']['TM_from_CF'] = {
    'port_name': 'TM_from_CF',
    'parent_fv': 'function1',
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
    'distant_fv': 'mainsupervisor',
    'calling_threads': {},
    'distant_name': 'TM_from_CF',
    'queue_size': 1
}

functions['function1']['interfaces']['TM_from_CF']['paramsInOrdered'] = ['tm_data']

functions['function1']['interfaces']['TM_from_CF']['paramsOutOrdered'] = []

functions['function1']['interfaces']['TM_from_CF']['in']['tm_data'] = {
    'type': 'TM_T',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'TM_from_CF',
    'param_direction': param_in
}

functions['function2'] = {
    'name_with_case' : 'Function2',
    'runtime_nature': thread,
    'language': GUI,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['function2']['interfaces']['TC_from_TASTE'] = {
    'port_name': 'TC_from_TASTE',
    'parent_fv': 'function2',
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

functions['function2']['interfaces']['TC_from_TASTE']['paramsInOrdered'] = ['tc_data']

functions['function2']['interfaces']['TC_from_TASTE']['paramsOutOrdered'] = []

functions['function2']['interfaces']['TC_from_TASTE']['in']['tc_data'] = {
    'type': 'TC_T',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'TC_from_TASTE',
    'param_direction': param_in
}

functions['function2']['interfaces']['TM_from_CF'] = {
    'port_name': 'TM_from_CF',
    'parent_fv': 'function2',
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
    'distant_name': 'TM_from_CF',
    'queue_size': 1
}

functions['function2']['interfaces']['TM_from_CF']['paramsInOrdered'] = ['tm_data']

functions['function2']['interfaces']['TM_from_CF']['paramsOutOrdered'] = []

functions['function2']['interfaces']['TM_from_CF']['in']['tm_data'] = {
    'type': 'TM_T',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'TM_from_CF',
    'param_direction': param_in
}

functions['mainsupervisor'] = {
    'name_with_case' : 'MainSupervisor',
    'runtime_nature': thread,
    'language': OG,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['mainsupervisor']['interfaces']['pulse'] = {
    'port_name': 'pulse',
    'parent_fv': 'mainsupervisor',
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

functions['mainsupervisor']['interfaces']['pulse']['paramsInOrdered'] = []

functions['mainsupervisor']['interfaces']['pulse']['paramsOutOrdered'] = []

functions['mainsupervisor']['interfaces']['takeoff'] = {
    'port_name': 'takeoff',
    'parent_fv': 'mainsupervisor',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': variator,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 999,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['mainsupervisor']['interfaces']['takeoff']['paramsInOrdered'] = ['tc_data']

functions['mainsupervisor']['interfaces']['takeoff']['paramsOutOrdered'] = []

functions['mainsupervisor']['interfaces']['takeoff']['in']['tc_data'] = {
    'type': 'TC_T',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'takeoff',
    'param_direction': param_in
}

functions['mainsupervisor']['interfaces']['TM_from_CF'] = {
    'port_name': 'TM_from_CF',
    'parent_fv': 'mainsupervisor',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': variator,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 99,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['mainsupervisor']['interfaces']['TM_from_CF']['paramsInOrdered'] = ['tm_data']

functions['mainsupervisor']['interfaces']['TM_from_CF']['paramsOutOrdered'] = []

functions['mainsupervisor']['interfaces']['TM_from_CF']['in']['tm_data'] = {
    'type': 'TM_T',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'TM_from_CF',
    'param_direction': param_in
}

functions['mainsupervisor']['interfaces']['displayData'] = {
    'port_name': 'displayData',
    'parent_fv': 'mainsupervisor',
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
    'distant_fv': 'main_gcs',
    'calling_threads': {},
    'distant_name': 'displayData',
    'queue_size': 1
}

functions['mainsupervisor']['interfaces']['displayData']['paramsInOrdered'] = ['tm_data']

functions['mainsupervisor']['interfaces']['displayData']['paramsOutOrdered'] = []

functions['mainsupervisor']['interfaces']['displayData']['in']['tm_data'] = {
    'type': 'TM_T',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'displayData',
    'param_direction': param_in
}

functions['mainsupervisor']['interfaces']['TC_from_TASTE'] = {
    'port_name': 'TC_from_TASTE',
    'parent_fv': 'mainsupervisor',
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
    'distant_name': 'TC_from_TASTE',
    'queue_size': 1
}

functions['mainsupervisor']['interfaces']['TC_from_TASTE']['paramsInOrdered'] = ['tc_data']

functions['mainsupervisor']['interfaces']['TC_from_TASTE']['paramsOutOrdered'] = []

functions['mainsupervisor']['interfaces']['TC_from_TASTE']['in']['tc_data'] = {
    'type': 'TC_T',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'TC_from_TASTE',
    'param_direction': param_in
}

functions['main_gcs'] = {
    'name_with_case' : 'Main_gcs',
    'runtime_nature': thread,
    'language': GUI,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['main_gcs']['interfaces']['displayData'] = {
    'port_name': 'displayData',
    'parent_fv': 'main_gcs',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': sporadic,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 999,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['main_gcs']['interfaces']['displayData']['paramsInOrdered'] = ['tm_data']

functions['main_gcs']['interfaces']['displayData']['paramsOutOrdered'] = []

functions['main_gcs']['interfaces']['displayData']['in']['tm_data'] = {
    'type': 'TM_T',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'displayData',
    'param_direction': param_in
}

functions['main_gcs']['interfaces']['takeoff'] = {
    'port_name': 'takeoff',
    'parent_fv': 'main_gcs',
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
    'distant_fv': 'mainsupervisor',
    'calling_threads': {},
    'distant_name': 'takeoff',
    'queue_size': 1
}

functions['main_gcs']['interfaces']['takeoff']['paramsInOrdered'] = ['tc_data']

functions['main_gcs']['interfaces']['takeoff']['paramsOutOrdered'] = []

functions['main_gcs']['interfaces']['takeoff']['in']['tc_data'] = {
    'type': 'TC_T',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'takeoff',
    'param_direction': param_in
}
