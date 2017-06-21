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
    'name_with_case' : 'Supervisor',
    'runtime_nature': thread,
    'language': OG,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['supervisor']['interfaces']['pulse1'] = {
    'port_name': 'pulse1',
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

functions['supervisor']['interfaces']['pulse1']['paramsInOrdered'] = []

functions['supervisor']['interfaces']['pulse1']['paramsOutOrdered'] = []

functions['supervisor']['interfaces']['pulse2'] = {
    'port_name': 'pulse2',
    'parent_fv': 'supervisor',
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

functions['supervisor']['interfaces']['pulse2']['paramsInOrdered'] = []

functions['supervisor']['interfaces']['pulse2']['paramsOutOrdered'] = []

functions['supervisor']['interfaces']['talk_with_ASSV'] = {
    'port_name': 'talk_with_ASSV',
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
    'distant_fv': 'as_supervisor',
    'calling_threads': {},
    'distant_name': 'talk_with_ASSV',
    'queue_size': 1
}

functions['supervisor']['interfaces']['talk_with_ASSV']['paramsInOrdered'] = []

functions['supervisor']['interfaces']['talk_with_ASSV']['paramsOutOrdered'] = []

functions['supervisor']['interfaces']['talk_with_MSSV'] = {
    'port_name': 'talk_with_MSSV',
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
    'distant_fv': 'ms_supervisor',
    'calling_threads': {},
    'distant_name': 'talk_with_MSSV',
    'queue_size': 1
}

functions['supervisor']['interfaces']['talk_with_MSSV']['paramsInOrdered'] = []

functions['supervisor']['interfaces']['talk_with_MSSV']['paramsOutOrdered'] = []

functions['as_supervisor'] = {
    'name_with_case' : 'AS_Supervisor',
    'runtime_nature': thread,
    'language': OG,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['as_supervisor']['interfaces']['talk_with_ASSV'] = {
    'port_name': 'talk_with_ASSV',
    'parent_fv': 'as_supervisor',
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

functions['as_supervisor']['interfaces']['talk_with_ASSV']['paramsInOrdered'] = []

functions['as_supervisor']['interfaces']['talk_with_ASSV']['paramsOutOrdered'] = []

functions['as_supervisor']['interfaces']['takeoff'] = {
    'port_name': 'takeoff',
    'parent_fv': 'as_supervisor',
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
    'distant_fv': 'cclient',
    'calling_threads': {},
    'distant_name': 'takeoff',
    'queue_size': 1
}

functions['as_supervisor']['interfaces']['takeoff']['paramsInOrdered'] = []

functions['as_supervisor']['interfaces']['takeoff']['paramsOutOrdered'] = ['droneData']

functions['as_supervisor']['interfaces']['takeoff']['out']['droneData'] = {
    'type': 'MyDroneData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'takeoff',
    'param_direction': param_out
}

functions['as_supervisor']['interfaces']['readStabilizerSendThrust'] = {
    'port_name': 'readStabilizerSendThrust',
    'parent_fv': 'as_supervisor',
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

functions['as_supervisor']['interfaces']['readStabilizerSendThrust']['paramsInOrdered'] = ['droneData']

functions['as_supervisor']['interfaces']['readStabilizerSendThrust']['paramsOutOrdered'] = ['sensorData']

functions['as_supervisor']['interfaces']['readStabilizerSendThrust']['in']['droneData'] = {
    'type': 'MyDroneData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'readStabilizerSendThrust',
    'param_direction': param_in
}

functions['as_supervisor']['interfaces']['readStabilizerSendThrust']['out']['sensorData'] = {
    'type': 'MySensorData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'readStabilizerSendThrust',
    'param_direction': param_out
}

functions['ms_supervisor'] = {
    'name_with_case' : 'MS_Supervisor',
    'runtime_nature': thread,
    'language': OG,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['ms_supervisor']['interfaces']['talk_with_MSSV'] = {
    'port_name': 'talk_with_MSSV',
    'parent_fv': 'ms_supervisor',
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

functions['ms_supervisor']['interfaces']['talk_with_MSSV']['paramsInOrdered'] = []

functions['ms_supervisor']['interfaces']['talk_with_MSSV']['paramsOutOrdered'] = []

functions['ms_supervisor']['interfaces']['get_raw_MSD'] = {
    'port_name': 'get_raw_MSD',
    'parent_fv': 'ms_supervisor',
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
    'distant_fv': 'ms_communication',
    'calling_threads': {},
    'distant_name': 'get_raw_MSD',
    'queue_size': 1
}

functions['ms_supervisor']['interfaces']['get_raw_MSD']['paramsInOrdered'] = []

functions['ms_supervisor']['interfaces']['get_raw_MSD']['paramsOutOrdered'] = []

functions['ms_communication'] = {
    'name_with_case' : 'MS_Communication',
    'runtime_nature': thread,
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

functions['ms_communication']['interfaces']['process_MSD']['paramsInOrdered'] = ['x', 'y']

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

functions['msd_processing']['interfaces']['process_MSD']['paramsInOrdered'] = ['x', 'y']

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
