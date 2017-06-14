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

functions['system_supervisor'] = {
    'name_with_case' : 'System_Supervisor',
    'runtime_nature': thread,
    'language': OG,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['system_supervisor']['interfaces']['clock'] = {
    'port_name': 'clock',
    'parent_fv': 'system_supervisor',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': cyclic,
    'period': 1000,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 0,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['system_supervisor']['interfaces']['clock']['paramsInOrdered'] = []

functions['system_supervisor']['interfaces']['clock']['paramsOutOrdered'] = []

functions['system_supervisor']['interfaces']['set_user_input'] = {
    'port_name': 'set_user_input',
    'parent_fv': 'system_supervisor',
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

functions['system_supervisor']['interfaces']['set_user_input']['paramsInOrdered'] = ['user_input']

functions['system_supervisor']['interfaces']['set_user_input']['paramsOutOrdered'] = []

functions['system_supervisor']['interfaces']['set_user_input']['in']['user_input'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'set_user_input',
    'param_direction': param_in
}

functions['system_supervisor']['interfaces']['update_GUI'] = {
    'port_name': 'update_GUI',
    'parent_fv': 'system_supervisor',
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
    'distant_fv': 'gui',
    'calling_threads': {},
    'distant_name': 'update_GUI',
    'queue_size': 1
}

functions['system_supervisor']['interfaces']['update_GUI']['paramsInOrdered'] = ['world_data']

functions['system_supervisor']['interfaces']['update_GUI']['paramsOutOrdered'] = []

functions['system_supervisor']['interfaces']['update_GUI']['in']['world_data'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'update_GUI',
    'param_direction': param_in
}

functions['system_supervisor']['interfaces']['get_MSD_storage'] = {
    'port_name': 'get_MSD_storage',
    'parent_fv': 'system_supervisor',
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
    'distant_fv': 'msd_storage',
    'calling_threads': {},
    'distant_name': 'get_MSD_storage',
    'queue_size': 1
}

functions['system_supervisor']['interfaces']['get_MSD_storage']['paramsInOrdered'] = []

functions['system_supervisor']['interfaces']['get_MSD_storage']['paramsOutOrdered'] = ['msd_storage_data']

functions['system_supervisor']['interfaces']['get_MSD_storage']['out']['msd_storage_data'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'get_MSD_storage',
    'param_direction': param_out
}

functions['system_supervisor']['interfaces']['get_ASD_storage'] = {
    'port_name': 'get_ASD_storage',
    'parent_fv': 'system_supervisor',
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
    'distant_fv': 'asd_storage',
    'calling_threads': {},
    'distant_name': 'get_ASD_storage',
    'queue_size': 1
}

functions['system_supervisor']['interfaces']['get_ASD_storage']['paramsInOrdered'] = ['asd_storage_data']

functions['system_supervisor']['interfaces']['get_ASD_storage']['paramsOutOrdered'] = []

functions['system_supervisor']['interfaces']['get_ASD_storage']['in']['asd_storage_data'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'get_ASD_storage',
    'param_direction': param_in
}

functions['gui'] = {
    'name_with_case' : 'GUI',
    'runtime_nature': thread,
    'language': GUI,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['gui']['interfaces']['update_GUI'] = {
    'port_name': 'update_GUI',
    'parent_fv': 'gui',
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

functions['gui']['interfaces']['update_GUI']['paramsInOrdered'] = ['world_data']

functions['gui']['interfaces']['update_GUI']['paramsOutOrdered'] = []

functions['gui']['interfaces']['update_GUI']['in']['world_data'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'update_GUI',
    'param_direction': param_in
}

functions['gui']['interfaces']['set_user_input'] = {
    'port_name': 'set_user_input',
    'parent_fv': 'gui',
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
    'distant_fv': 'system_supervisor',
    'calling_threads': {},
    'distant_name': 'set_user_input',
    'queue_size': 1
}

functions['gui']['interfaces']['set_user_input']['paramsInOrdered'] = ['user_input']

functions['gui']['interfaces']['set_user_input']['paramsOutOrdered'] = []

functions['gui']['interfaces']['set_user_input']['in']['user_input'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'set_user_input',
    'param_direction': param_in
}

functions['msd_storage'] = {
    'name_with_case' : 'MSD_Storage',
    'runtime_nature': passive,
    'language': C,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['msd_storage']['interfaces']['get_MSD_storage'] = {
    'port_name': 'get_MSD_storage',
    'parent_fv': 'msd_storage',
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

functions['msd_storage']['interfaces']['get_MSD_storage']['paramsInOrdered'] = []

functions['msd_storage']['interfaces']['get_MSD_storage']['paramsOutOrdered'] = ['msd_storage_data']

functions['msd_storage']['interfaces']['get_MSD_storage']['out']['msd_storage_data'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'get_MSD_storage',
    'param_direction': param_out
}

functions['msd_storage']['interfaces']['store_MSD'] = {
    'port_name': 'store_MSD',
    'parent_fv': 'msd_storage',
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

functions['msd_storage']['interfaces']['store_MSD']['paramsInOrdered'] = ['raw_MSD']

functions['msd_storage']['interfaces']['store_MSD']['paramsOutOrdered'] = []

functions['msd_storage']['interfaces']['store_MSD']['in']['raw_MSD'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'store_MSD',
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

functions['ms_supervisor']['interfaces']['put_raw_MSD'] = {
    'port_name': 'put_raw_MSD',
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

functions['ms_supervisor']['interfaces']['put_raw_MSD']['paramsInOrdered'] = ['raw_MSD']

functions['ms_supervisor']['interfaces']['put_raw_MSD']['paramsOutOrdered'] = []

functions['ms_supervisor']['interfaces']['put_raw_MSD']['in']['raw_MSD'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'put_raw_MSD',
    'param_direction': param_in
}

functions['ms_supervisor']['interfaces']['store_MSD'] = {
    'port_name': 'store_MSD',
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
    'distant_fv': 'msd_storage',
    'calling_threads': {},
    'distant_name': 'store_MSD',
    'queue_size': 1
}

functions['ms_supervisor']['interfaces']['store_MSD']['paramsInOrdered'] = ['raw_MSD']

functions['ms_supervisor']['interfaces']['store_MSD']['paramsOutOrdered'] = []

functions['ms_supervisor']['interfaces']['store_MSD']['in']['raw_MSD'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'store_MSD',
    'param_direction': param_in
}

functions['ms_communication'] = {
    'name_with_case' : 'MS_communication',
    'runtime_nature': thread,
    'language': C,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['ms_communication']['interfaces']['put_camera_data'] = {
    'port_name': 'put_camera_data',
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

functions['ms_communication']['interfaces']['put_camera_data']['paramsInOrdered'] = ['camera_data']

functions['ms_communication']['interfaces']['put_camera_data']['paramsOutOrdered'] = []

functions['ms_communication']['interfaces']['put_camera_data']['in']['camera_data'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'put_camera_data',
    'param_direction': param_in
}

functions['ms_communication']['interfaces']['put_raw_MSD'] = {
    'port_name': 'put_raw_MSD',
    'parent_fv': 'ms_communication',
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
    'distant_name': 'put_raw_MSD',
    'queue_size': 1
}

functions['ms_communication']['interfaces']['put_raw_MSD']['paramsInOrdered'] = ['raw_MSD']

functions['ms_communication']['interfaces']['put_raw_MSD']['paramsOutOrdered'] = []

functions['ms_communication']['interfaces']['put_raw_MSD']['in']['raw_MSD'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'put_raw_MSD',
    'param_direction': param_in
}

functions['camera_dummy'] = {
    'name_with_case' : 'Camera_Dummy',
    'runtime_nature': thread,
    'language': OG,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['camera_dummy']['interfaces']['cam_clock'] = {
    'port_name': 'cam_clock',
    'parent_fv': 'camera_dummy',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': cyclic,
    'period': 500,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 0,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['camera_dummy']['interfaces']['cam_clock']['paramsInOrdered'] = []

functions['camera_dummy']['interfaces']['cam_clock']['paramsOutOrdered'] = []

functions['camera_dummy']['interfaces']['put_camera_data'] = {
    'port_name': 'put_camera_data',
    'parent_fv': 'camera_dummy',
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
    'distant_name': 'put_camera_data',
    'queue_size': 1
}

functions['camera_dummy']['interfaces']['put_camera_data']['paramsInOrdered'] = ['camera_data']

functions['camera_dummy']['interfaces']['put_camera_data']['paramsOutOrdered'] = []

functions['camera_dummy']['interfaces']['put_camera_data']['in']['camera_data'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'put_camera_data',
    'param_direction': param_in
}

functions['asd_storage'] = {
    'name_with_case' : 'ASD_Storage',
    'runtime_nature': thread,
    'language': C,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['asd_storage']['interfaces']['store_ASD'] = {
    'port_name': 'store_ASD',
    'parent_fv': 'asd_storage',
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

functions['asd_storage']['interfaces']['store_ASD']['paramsInOrdered'] = ['raw_MSD']

functions['asd_storage']['interfaces']['store_ASD']['paramsOutOrdered'] = []

functions['asd_storage']['interfaces']['store_ASD']['in']['raw_MSD'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'store_ASD',
    'param_direction': param_in
}

functions['asd_storage']['interfaces']['get_ASD_storage'] = {
    'port_name': 'get_ASD_storage',
    'parent_fv': 'asd_storage',
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

functions['asd_storage']['interfaces']['get_ASD_storage']['paramsInOrdered'] = ['asd_storage_data']

functions['asd_storage']['interfaces']['get_ASD_storage']['paramsOutOrdered'] = []

functions['asd_storage']['interfaces']['get_ASD_storage']['in']['asd_storage_data'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'get_ASD_storage',
    'param_direction': param_in
}

functions['as_supervisor'] = {
    'name_with_case' : 'AS_Supervisor',
    'runtime_nature': thread,
    'language': OG,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['as_supervisor']['interfaces']['put_raw_ASD'] = {
    'port_name': 'put_raw_ASD',
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

functions['as_supervisor']['interfaces']['put_raw_ASD']['paramsInOrdered'] = ['raw_ASD']

functions['as_supervisor']['interfaces']['put_raw_ASD']['paramsOutOrdered'] = []

functions['as_supervisor']['interfaces']['put_raw_ASD']['in']['raw_ASD'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'put_raw_ASD',
    'param_direction': param_in
}

functions['as_supervisor']['interfaces']['store_ASD'] = {
    'port_name': 'store_ASD',
    'parent_fv': 'as_supervisor',
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
    'distant_fv': 'asd_storage',
    'calling_threads': {},
    'distant_name': 'store_ASD',
    'queue_size': 1
}

functions['as_supervisor']['interfaces']['store_ASD']['paramsInOrdered'] = ['raw_MSD']

functions['as_supervisor']['interfaces']['store_ASD']['paramsOutOrdered'] = []

functions['as_supervisor']['interfaces']['store_ASD']['in']['raw_MSD'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'store_ASD',
    'param_direction': param_in
}

functions['houston'] = {
    'name_with_case' : 'Houston',
    'runtime_nature': thread,
    'language': C,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['houston']['interfaces']['put_drone_data'] = {
    'port_name': 'put_drone_data',
    'parent_fv': 'houston',
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

functions['houston']['interfaces']['put_drone_data']['paramsInOrdered'] = ['drone_data']

functions['houston']['interfaces']['put_drone_data']['paramsOutOrdered'] = []

functions['houston']['interfaces']['put_drone_data']['in']['drone_data'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'put_drone_data',
    'param_direction': param_in
}

functions['houston']['interfaces']['put_raw_ASD'] = {
    'port_name': 'put_raw_ASD',
    'parent_fv': 'houston',
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
    'distant_name': 'put_raw_ASD',
    'queue_size': 1
}

functions['houston']['interfaces']['put_raw_ASD']['paramsInOrdered'] = ['raw_ASD']

functions['houston']['interfaces']['put_raw_ASD']['paramsOutOrdered'] = []

functions['houston']['interfaces']['put_raw_ASD']['in']['raw_ASD'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'put_raw_ASD',
    'param_direction': param_in
}

functions['drone_dummy'] = {
    'name_with_case' : 'Drone_Dummy',
    'runtime_nature': thread,
    'language': OG,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['drone_dummy']['interfaces']['drone_clock'] = {
    'port_name': 'drone_clock',
    'parent_fv': 'drone_dummy',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': cyclic,
    'period': 200,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 0,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['drone_dummy']['interfaces']['drone_clock']['paramsInOrdered'] = []

functions['drone_dummy']['interfaces']['drone_clock']['paramsOutOrdered'] = []

functions['drone_dummy']['interfaces']['put_drone_data'] = {
    'port_name': 'put_drone_data',
    'parent_fv': 'drone_dummy',
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
    'distant_fv': 'houston',
    'calling_threads': {},
    'distant_name': 'put_drone_data',
    'queue_size': 1
}

functions['drone_dummy']['interfaces']['put_drone_data']['paramsInOrdered'] = ['drone_data']

functions['drone_dummy']['interfaces']['put_drone_data']['paramsOutOrdered'] = []

functions['drone_dummy']['interfaces']['put_drone_data']['in']['drone_data'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'put_drone_data',
    'param_direction': param_in
}
