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

functions['ms_communication'] = {
    'name_with_case' : 'MS_Communication',
    'runtime_nature': passive,
    'language': C,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['ms_communication']['interfaces']['get_raw_MSD'] = {
    'port_name': 'get_raw_MSD',
    'parent_fv': 'ms_communication',
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

functions['ms_communication']['interfaces']['get_raw_MSD']['paramsInOrdered'] = []

functions['ms_communication']['interfaces']['get_raw_MSD']['paramsOutOrdered'] = []

functions['ms_communication']['interfaces']['process_MSD'] = {
    'port_name': 'process_MSD',
    'parent_fv': 'ms_communication',
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
    'distant_fv': 'msd_processing',
    'calling_threads': {},
    'distant_name': 'process_MSD',
    'queue_size': 1
}

functions['ms_communication']['interfaces']['process_MSD']['paramsInOrdered'] = ['x', 'y', 'sig']

functions['ms_communication']['interfaces']['process_MSD']['paramsOutOrdered'] = []

functions['ms_communication']['interfaces']['process_MSD']['in']['x'] = {
    'type': 'T_UInt32',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'process_MSD',
    'param_direction': param_in
}

functions['ms_communication']['interfaces']['process_MSD']['in']['y'] = {
    'type': 'T_UInt32',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'process_MSD',
    'param_direction': param_in
}

functions['ms_communication']['interfaces']['process_MSD']['in']['sig'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'process_MSD',
    'param_direction': param_in
}

functions['ms_supervisor'] = {
    'name_with_case' : 'MS_Supervisor',
    'runtime_nature': thread,
    'language': OG,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['ms_supervisor']['interfaces']['pulse'] = {
    'port_name': 'pulse',
    'parent_fv': 'ms_supervisor',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': cyclic,
    'period': 20,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 0,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['ms_supervisor']['interfaces']['pulse']['paramsInOrdered'] = []

functions['ms_supervisor']['interfaces']['pulse']['paramsOutOrdered'] = []

functions['ms_supervisor']['interfaces']['talk_with_MSSV'] = {
    'port_name': 'talk_with_MSSV',
    'parent_fv': 'ms_supervisor',
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

functions['ms_supervisor']['interfaces']['talk_with_MSSV']['paramsInOrdered'] = ['a']

functions['ms_supervisor']['interfaces']['talk_with_MSSV']['paramsOutOrdered'] = []

functions['ms_supervisor']['interfaces']['talk_with_MSSV']['in']['a'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'talk_with_MSSV',
    'param_direction': param_in
}

functions['ms_supervisor']['interfaces']['get_raw_MSD'] = {
    'port_name': 'get_raw_MSD',
    'parent_fv': 'ms_supervisor',
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
    'distant_fv': 'ms_communication',
    'calling_threads': {},
    'distant_name': 'get_raw_MSD',
    'queue_size': 1
}

functions['ms_supervisor']['interfaces']['get_raw_MSD']['paramsInOrdered'] = []

functions['ms_supervisor']['interfaces']['get_raw_MSD']['paramsOutOrdered'] = []

functions['msd_processing'] = {
    'name_with_case' : 'MSD_Processing',
    'runtime_nature': passive,
    'language': C,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['msd_processing']['interfaces']['process_MSD'] = {
    'port_name': 'process_MSD',
    'parent_fv': 'msd_processing',
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

functions['msd_processing']['interfaces']['process_MSD']['paramsInOrdered'] = ['x', 'y', 'sig']

functions['msd_processing']['interfaces']['process_MSD']['paramsOutOrdered'] = []

functions['msd_processing']['interfaces']['process_MSD']['in']['x'] = {
    'type': 'T_UInt32',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'process_MSD',
    'param_direction': param_in
}

functions['msd_processing']['interfaces']['process_MSD']['in']['y'] = {
    'type': 'T_UInt32',
    'asn1_module': 'TASTE_BasicTypes',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'process_MSD',
    'param_direction': param_in
}

functions['msd_processing']['interfaces']['process_MSD']['in']['sig'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'process_MSD',
    'param_direction': param_in
}

functions['msd_processing']['interfaces']['display'] = {
    'port_name': 'display',
    'parent_fv': 'msd_processing',
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
    'distant_fv': 'visualizer',
    'calling_threads': {},
    'distant_name': 'display',
    'queue_size': 1
}

functions['msd_processing']['interfaces']['display']['paramsInOrdered'] = ['x']

functions['msd_processing']['interfaces']['display']['paramsOutOrdered'] = []

functions['msd_processing']['interfaces']['display']['in']['x'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'display',
    'param_direction': param_in
}

functions['visualizer'] = {
    'name_with_case' : 'Visualizer',
    'runtime_nature': thread,
    'language': GUI,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['visualizer']['interfaces']['display'] = {
    'port_name': 'display',
    'parent_fv': 'visualizer',
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

functions['visualizer']['interfaces']['display']['paramsInOrdered'] = ['x']

functions['visualizer']['interfaces']['display']['paramsOutOrdered'] = []

functions['visualizer']['interfaces']['display']['in']['x'] = {
    'type': 'MyReal',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': real,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'display',
    'param_direction': param_in
}

functions['visualizer']['interfaces']['talk_with_MSSV'] = {
    'port_name': 'talk_with_MSSV',
    'parent_fv': 'visualizer',
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
    'distant_fv': 'ms_supervisor',
    'calling_threads': {},
    'distant_name': 'talk_with_MSSV',
    'queue_size': 1
}

functions['visualizer']['interfaces']['talk_with_MSSV']['paramsInOrdered'] = ['a']

functions['visualizer']['interfaces']['talk_with_MSSV']['paramsOutOrdered'] = []

functions['visualizer']['interfaces']['talk_with_MSSV']['in']['a'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'talk_with_MSSV',
    'param_direction': param_in
}
