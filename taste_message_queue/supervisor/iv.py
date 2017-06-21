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

functions['function1']['interfaces']['tick'] = {
    'port_name': 'tick',
    'parent_fv': 'function1',
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

functions['function1']['interfaces']['tick']['paramsInOrdered'] = []

functions['function1']['interfaces']['tick']['paramsOutOrdered'] = []

functions['function1']['interfaces']['TM_from_CF'] = {
    'port_name': 'TM_from_CF',
    'parent_fv': 'function1',
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

functions['supervisor'] = {
    'name_with_case' : 'supervisor',
    'runtime_nature': thread,
    'language': OG,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['supervisor']['interfaces']['PI1'] = {
    'port_name': 'PI1',
    'parent_fv': 'supervisor',
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

functions['supervisor']['interfaces']['PI1']['paramsInOrdered'] = []

functions['supervisor']['interfaces']['PI1']['paramsOutOrdered'] = []
