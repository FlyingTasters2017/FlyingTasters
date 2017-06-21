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

functions['system_supervisor']['interfaces']['update_clock'] = {
    'port_name': 'update_clock',
    'parent_fv': 'system_supervisor',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': cyclic,
    'period': 2000,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 0,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['system_supervisor']['interfaces']['update_clock']['paramsInOrdered'] = []

functions['system_supervisor']['interfaces']['update_clock']['paramsOutOrdered'] = []

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
    'type': 'WorldData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'update_GUI',
    'param_direction': param_in
}

functions['system_supervisor']['interfaces']['talk_with_MSSV'] = {
    'port_name': 'talk_with_MSSV',
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
    'distant_fv': 'ms_supervisor',
    'calling_threads': {},
    'distant_name': 'talk_with_MSSV',
    'queue_size': 1
}

functions['system_supervisor']['interfaces']['talk_with_MSSV']['paramsInOrdered'] = ['sysSV_to_MSSV_events']

functions['system_supervisor']['interfaces']['talk_with_MSSV']['paramsOutOrdered'] = []

functions['system_supervisor']['interfaces']['talk_with_MSSV']['in']['sysSV_to_MSSV_events'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'talk_with_MSSV',
    'param_direction': param_in
}

functions['system_supervisor']['interfaces']['talk_with_ASSV'] = {
    'port_name': 'talk_with_ASSV',
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
    'distant_fv': 'as_supervisor',
    'calling_threads': {},
    'distant_name': 'talk_with_ASSV',
    'queue_size': 1
}

functions['system_supervisor']['interfaces']['talk_with_ASSV']['paramsInOrdered'] = ['sysSV_to_ASSV_events']

functions['system_supervisor']['interfaces']['talk_with_ASSV']['paramsOutOrdered'] = []

functions['system_supervisor']['interfaces']['talk_with_ASSV']['in']['sysSV_to_ASSV_events'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'talk_with_ASSV',
    'param_direction': param_in
}

functions['system_supervisor']['interfaces']['check_mission_safety'] = {
    'port_name': 'check_mission_safety',
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
    'distant_fv': 'mission_safety',
    'calling_threads': {},
    'distant_name': 'check_mission_safety',
    'queue_size': 1
}

functions['system_supervisor']['interfaces']['check_mission_safety']['paramsInOrdered'] = ['processed_world_data']

functions['system_supervisor']['interfaces']['check_mission_safety']['paramsOutOrdered'] = ['world_safety_events']

functions['system_supervisor']['interfaces']['check_mission_safety']['in']['processed_world_data'] = {
    'type': 'WorldData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'check_mission_safety',
    'param_direction': param_in
}

functions['system_supervisor']['interfaces']['check_mission_safety']['out']['world_safety_events'] = {
    'type': 'SafetyEvent',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': enumerated,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'check_mission_safety',
    'param_direction': param_out
}

functions['system_supervisor']['interfaces']['choose_trajectory'] = {
    'port_name': 'choose_trajectory',
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
    'distant_fv': 'trajectory_generator',
    'calling_threads': {},
    'distant_name': 'choose_trajectory',
    'queue_size': 1
}

functions['system_supervisor']['interfaces']['choose_trajectory']['paramsInOrdered'] = ['processed_world_data', 'world_safety_events']

functions['system_supervisor']['interfaces']['choose_trajectory']['paramsOutOrdered'] = ['control_error']

functions['system_supervisor']['interfaces']['choose_trajectory']['in']['processed_world_data'] = {
    'type': 'WorldData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'choose_trajectory',
    'param_direction': param_in
}

functions['system_supervisor']['interfaces']['choose_trajectory']['in']['world_safety_events'] = {
    'type': 'SafetyEvent',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': enumerated,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'choose_trajectory',
    'param_direction': param_in
}

functions['system_supervisor']['interfaces']['choose_trajectory']['out']['control_error'] = {
    'type': 'Trajectory',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'choose_trajectory',
    'param_direction': param_out
}

functions['system_supervisor']['interfaces']['calculate_control_input'] = {
    'port_name': 'calculate_control_input',
    'parent_fv': 'system_supervisor',
    'direction': RI,
    'in': {},
    'out': {},
    'synchronism': synch,
    'rcm': protected,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': '',
    'wcet_high': 0,
    'wcet_high_unit': '',
    'distant_fv': 'control_data_storage',
    'calling_threads': {},
    'distant_name': 'calculate_control_input',
    'queue_size': 1
}

functions['system_supervisor']['interfaces']['calculate_control_input']['paramsInOrdered'] = ['control_error', 'processed_world_data']

functions['system_supervisor']['interfaces']['calculate_control_input']['paramsOutOrdered'] = []

functions['system_supervisor']['interfaces']['calculate_control_input']['in']['control_error'] = {
    'type': 'Trajectory',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'calculate_control_input',
    'param_direction': param_in
}

functions['system_supervisor']['interfaces']['calculate_control_input']['in']['processed_world_data'] = {
    'type': 'WorldData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'calculate_control_input',
    'param_direction': param_in
}

functions['system_supervisor']['interfaces']['update_world_data'] = {
    'port_name': 'update_world_data',
    'parent_fv': 'system_supervisor',
    'direction': RI,
    'in': {},
    'out': {},
    'synchronism': synch,
    'rcm': protected,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': '',
    'wcet_high': 0,
    'wcet_high_unit': '',
    'distant_fv': 'world_model',
    'calling_threads': {},
    'distant_name': 'update_world_data',
    'queue_size': 1
}

functions['system_supervisor']['interfaces']['update_world_data']['paramsInOrdered'] = []

functions['system_supervisor']['interfaces']['update_world_data']['paramsOutOrdered'] = ['processed_world_data']

functions['system_supervisor']['interfaces']['update_world_data']['out']['processed_world_data'] = {
    'type': 'WorldData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'update_world_data',
    'param_direction': param_out
}

functions['system_supervisor']['interfaces']['talk_with_Houston'] = {
    'port_name': 'talk_with_Houston',
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
    'distant_fv': 'houston',
    'calling_threads': {},
    'distant_name': 'talk_with_Houston',
    'queue_size': 1
}

functions['system_supervisor']['interfaces']['talk_with_Houston']['paramsInOrdered'] = ['sysSV_to_Houston_events']

functions['system_supervisor']['interfaces']['talk_with_Houston']['paramsOutOrdered'] = []

functions['system_supervisor']['interfaces']['talk_with_Houston']['in']['sysSV_to_Houston_events'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'talk_with_Houston',
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
    'type': 'WorldData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
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

functions['ms_communication'] = {
    'name_with_case' : 'MS_Communication',
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
    'period': 5000,
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

functions['as_supervisor']['interfaces']['talk_with_ASSV']['paramsInOrdered'] = ['sysSV_to_ASSV_events']

functions['as_supervisor']['interfaces']['talk_with_ASSV']['paramsOutOrdered'] = []

functions['as_supervisor']['interfaces']['talk_with_ASSV']['in']['sysSV_to_ASSV_events'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'talk_with_ASSV',
    'param_direction': param_in
}

functions['as_supervisor']['interfaces']['put_raw_asd'] = {
    'port_name': 'put_raw_asd',
    'parent_fv': 'as_supervisor',
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

functions['as_supervisor']['interfaces']['put_raw_asd']['paramsInOrdered'] = ['raw_asd']

functions['as_supervisor']['interfaces']['put_raw_asd']['paramsOutOrdered'] = []

functions['as_supervisor']['interfaces']['put_raw_asd']['in']['raw_asd'] = {
    'type': 'DroneSensorData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'put_raw_asd',
    'param_direction': param_in
}

functions['as_supervisor']['interfaces']['store_ASD'] = {
    'port_name': 'store_ASD',
    'parent_fv': 'as_supervisor',
    'direction': RI,
    'in': {},
    'out': {},
    'synchronism': synch,
    'rcm': protected,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': '',
    'wcet_high': 0,
    'wcet_high_unit': '',
    'distant_fv': 'world_model',
    'calling_threads': {},
    'distant_name': 'store_ASD',
    'queue_size': 1
}

functions['as_supervisor']['interfaces']['store_ASD']['paramsInOrdered'] = ['processed_asd']

functions['as_supervisor']['interfaces']['store_ASD']['paramsOutOrdered'] = []

functions['as_supervisor']['interfaces']['store_ASD']['in']['processed_asd'] = {
    'type': 'DroneSensorData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'store_ASD',
    'param_direction': param_in
}

functions['as_supervisor']['interfaces']['process_ASD'] = {
    'port_name': 'process_ASD',
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
    'distant_fv': 'asd_processing',
    'calling_threads': {},
    'distant_name': 'process_ASD',
    'queue_size': 1
}

functions['as_supervisor']['interfaces']['process_ASD']['paramsInOrdered'] = ['raw_ASD']

functions['as_supervisor']['interfaces']['process_ASD']['paramsOutOrdered'] = ['processed_ASD']

functions['as_supervisor']['interfaces']['process_ASD']['in']['raw_ASD'] = {
    'type': 'DroneSensorData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'process_ASD',
    'param_direction': param_in
}

functions['as_supervisor']['interfaces']['process_ASD']['out']['processed_ASD'] = {
    'type': 'DroneSensorData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'process_ASD',
    'param_direction': param_out
}

functions['houston'] = {
    'name_with_case' : 'Houston',
    'runtime_nature': thread,
    'language': OG,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['houston']['interfaces']['comm_clock'] = {
    'port_name': 'comm_clock',
    'parent_fv': 'houston',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': cyclic,
    'period': 3000,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 0,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['houston']['interfaces']['comm_clock']['paramsInOrdered'] = []

functions['houston']['interfaces']['comm_clock']['paramsOutOrdered'] = []

functions['houston']['interfaces']['talk_with_Houston'] = {
    'port_name': 'talk_with_Houston',
    'parent_fv': 'houston',
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

functions['houston']['interfaces']['talk_with_Houston']['paramsInOrdered'] = ['sysSV_to_Houston_events']

functions['houston']['interfaces']['talk_with_Houston']['paramsOutOrdered'] = []

functions['houston']['interfaces']['talk_with_Houston']['in']['sysSV_to_Houston_events'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'talk_with_Houston',
    'param_direction': param_in
}

functions['houston']['interfaces']['get_control_data'] = {
    'port_name': 'get_control_data',
    'parent_fv': 'houston',
    'direction': RI,
    'in': {},
    'out': {},
    'synchronism': synch,
    'rcm': protected,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': '',
    'wcet_high': 0,
    'wcet_high_unit': '',
    'distant_fv': 'control_data_storage',
    'calling_threads': {},
    'distant_name': 'get_control_data',
    'queue_size': 1
}

functions['houston']['interfaces']['get_control_data']['paramsInOrdered'] = []

functions['houston']['interfaces']['get_control_data']['paramsOutOrdered'] = ['control_data']

functions['houston']['interfaces']['get_control_data']['out']['control_data'] = {
    'type': 'DroneControllerInput',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'get_control_data',
    'param_direction': param_out
}

functions['houston']['interfaces']['store_control_data'] = {
    'port_name': 'store_control_data',
    'parent_fv': 'houston',
    'direction': RI,
    'in': {},
    'out': {},
    'synchronism': synch,
    'rcm': protected,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': '',
    'wcet_high': 0,
    'wcet_high_unit': '',
    'distant_fv': 'world_model',
    'calling_threads': {},
    'distant_name': 'store_control_data',
    'queue_size': 1
}

functions['houston']['interfaces']['store_control_data']['paramsInOrdered'] = ['control_input']

functions['houston']['interfaces']['store_control_data']['paramsOutOrdered'] = []

functions['houston']['interfaces']['store_control_data']['in']['control_input'] = {
    'type': 'DroneControllerInput',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'store_control_data',
    'param_direction': param_in
}

functions['houston']['interfaces']['send_control_data'] = {
    'port_name': 'send_control_data',
    'parent_fv': 'houston',
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
    'distant_fv': 'socket_client',
    'calling_threads': {},
    'distant_name': 'send_control_data',
    'queue_size': 1
}

functions['houston']['interfaces']['send_control_data']['paramsInOrdered'] = ['control_input']

functions['houston']['interfaces']['send_control_data']['paramsOutOrdered'] = []

functions['houston']['interfaces']['send_control_data']['in']['control_input'] = {
    'type': 'DroneControllerInput',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'send_control_data',
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

functions['msd_processing']['interfaces']['process_MSD']['paramsInOrdered'] = ['raw_MSD']

functions['msd_processing']['interfaces']['process_MSD']['paramsOutOrdered'] = ['processed_MSD']

functions['msd_processing']['interfaces']['process_MSD']['in']['raw_MSD'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'process_MSD',
    'param_direction': param_in
}

functions['msd_processing']['interfaces']['process_MSD']['out']['processed_MSD'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'process_MSD',
    'param_direction': param_out
}

functions['asd_processing'] = {
    'name_with_case' : 'ASD_Processing',
    'runtime_nature': passive,
    'language': C,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['asd_processing']['interfaces']['process_ASD'] = {
    'port_name': 'process_ASD',
    'parent_fv': 'asd_processing',
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

functions['asd_processing']['interfaces']['process_ASD']['paramsInOrdered'] = ['raw_ASD']

functions['asd_processing']['interfaces']['process_ASD']['paramsOutOrdered'] = ['processed_ASD']

functions['asd_processing']['interfaces']['process_ASD']['in']['raw_ASD'] = {
    'type': 'DroneSensorData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'process_ASD',
    'param_direction': param_in
}

functions['asd_processing']['interfaces']['process_ASD']['out']['processed_ASD'] = {
    'type': 'DroneSensorData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'process_ASD',
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

functions['ms_supervisor']['interfaces']['talk_with_MSSV']['paramsInOrdered'] = ['sysSV_to_MSSV_events']

functions['ms_supervisor']['interfaces']['talk_with_MSSV']['paramsOutOrdered'] = []

functions['ms_supervisor']['interfaces']['talk_with_MSSV']['in']['sysSV_to_MSSV_events'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'talk_with_MSSV',
    'param_direction': param_in
}

functions['ms_supervisor']['interfaces']['store_MSD'] = {
    'port_name': 'store_MSD',
    'parent_fv': 'ms_supervisor',
    'direction': RI,
    'in': {},
    'out': {},
    'synchronism': synch,
    'rcm': protected,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': '',
    'wcet_high': 0,
    'wcet_high_unit': '',
    'distant_fv': 'world_model',
    'calling_threads': {},
    'distant_name': 'store_MSD',
    'queue_size': 1
}

functions['ms_supervisor']['interfaces']['store_MSD']['paramsInOrdered'] = ['processed_msd']

functions['ms_supervisor']['interfaces']['store_MSD']['paramsOutOrdered'] = []

functions['ms_supervisor']['interfaces']['store_MSD']['in']['processed_msd'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'store_MSD',
    'param_direction': param_in
}

functions['ms_supervisor']['interfaces']['process_MSD'] = {
    'port_name': 'process_MSD',
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
    'distant_fv': 'msd_processing',
    'calling_threads': {},
    'distant_name': 'process_MSD',
    'queue_size': 1
}

functions['ms_supervisor']['interfaces']['process_MSD']['paramsInOrdered'] = ['raw_MSD']

functions['ms_supervisor']['interfaces']['process_MSD']['paramsOutOrdered'] = ['processed_MSD']

functions['ms_supervisor']['interfaces']['process_MSD']['in']['raw_MSD'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'process_MSD',
    'param_direction': param_in
}

functions['ms_supervisor']['interfaces']['process_MSD']['out']['processed_MSD'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'process_MSD',
    'param_direction': param_out
}

functions['world_model'] = {
    'name_with_case' : 'World_Model',
    'runtime_nature': passive,
    'language': C,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['world_model']['interfaces']['update_world_data'] = {
    'port_name': 'update_world_data',
    'parent_fv': 'world_model',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': synch,
    'rcm': protected,
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

functions['world_model']['interfaces']['update_world_data']['paramsInOrdered'] = []

functions['world_model']['interfaces']['update_world_data']['paramsOutOrdered'] = ['processed_world_data']

functions['world_model']['interfaces']['update_world_data']['out']['processed_world_data'] = {
    'type': 'WorldData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'update_world_data',
    'param_direction': param_out
}

functions['world_model']['interfaces']['store_MSD'] = {
    'port_name': 'store_MSD',
    'parent_fv': 'world_model',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': synch,
    'rcm': protected,
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

functions['world_model']['interfaces']['store_MSD']['paramsInOrdered'] = ['processed_msd']

functions['world_model']['interfaces']['store_MSD']['paramsOutOrdered'] = []

functions['world_model']['interfaces']['store_MSD']['in']['processed_msd'] = {
    'type': 'MyInteger',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': integer,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'store_MSD',
    'param_direction': param_in
}

functions['world_model']['interfaces']['store_ASD'] = {
    'port_name': 'store_ASD',
    'parent_fv': 'world_model',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': synch,
    'rcm': protected,
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

functions['world_model']['interfaces']['store_ASD']['paramsInOrdered'] = ['processed_asd']

functions['world_model']['interfaces']['store_ASD']['paramsOutOrdered'] = []

functions['world_model']['interfaces']['store_ASD']['in']['processed_asd'] = {
    'type': 'DroneSensorData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'store_ASD',
    'param_direction': param_in
}

functions['world_model']['interfaces']['store_control_data'] = {
    'port_name': 'store_control_data',
    'parent_fv': 'world_model',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': synch,
    'rcm': protected,
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

functions['world_model']['interfaces']['store_control_data']['paramsInOrdered'] = ['control_input']

functions['world_model']['interfaces']['store_control_data']['paramsOutOrdered'] = []

functions['world_model']['interfaces']['store_control_data']['in']['control_input'] = {
    'type': 'DroneControllerInput',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'store_control_data',
    'param_direction': param_in
}

functions['mission_safety'] = {
    'name_with_case' : 'Mission_Safety',
    'runtime_nature': passive,
    'language': C,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['mission_safety']['interfaces']['check_mission_safety'] = {
    'port_name': 'check_mission_safety',
    'parent_fv': 'mission_safety',
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

functions['mission_safety']['interfaces']['check_mission_safety']['paramsInOrdered'] = ['processed_world_data']

functions['mission_safety']['interfaces']['check_mission_safety']['paramsOutOrdered'] = ['world_safety_events']

functions['mission_safety']['interfaces']['check_mission_safety']['in']['processed_world_data'] = {
    'type': 'WorldData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'check_mission_safety',
    'param_direction': param_in
}

functions['mission_safety']['interfaces']['check_mission_safety']['out']['world_safety_events'] = {
    'type': 'SafetyEvent',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': enumerated,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': NATIVE,
    'interface': 'check_mission_safety',
    'param_direction': param_out
}

functions['trajectory_generator'] = {
    'name_with_case' : 'Trajectory_Generator',
    'runtime_nature': passive,
    'language': C,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['trajectory_generator']['interfaces']['choose_trajectory'] = {
    'port_name': 'choose_trajectory',
    'parent_fv': 'trajectory_generator',
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

functions['trajectory_generator']['interfaces']['choose_trajectory']['paramsInOrdered'] = ['processed_world_data', 'world_safety_events']

functions['trajectory_generator']['interfaces']['choose_trajectory']['paramsOutOrdered'] = ['control_error']

functions['trajectory_generator']['interfaces']['choose_trajectory']['in']['processed_world_data'] = {
    'type': 'WorldData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'choose_trajectory',
    'param_direction': param_in
}

functions['trajectory_generator']['interfaces']['choose_trajectory']['in']['world_safety_events'] = {
    'type': 'SafetyEvent',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': enumerated,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'choose_trajectory',
    'param_direction': param_in
}

functions['trajectory_generator']['interfaces']['choose_trajectory']['out']['control_error'] = {
    'type': 'Trajectory',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'choose_trajectory',
    'param_direction': param_out
}

functions['drone_control'] = {
    'name_with_case' : 'Drone_Control',
    'runtime_nature': passive,
    'language': C,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['drone_control']['interfaces']['calculate_and_store_control_input'] = {
    'port_name': 'calculate_and_store_control_input',
    'parent_fv': 'drone_control',
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

functions['drone_control']['interfaces']['calculate_and_store_control_input']['paramsInOrdered'] = ['control_error', 'processed_world_data']

functions['drone_control']['interfaces']['calculate_and_store_control_input']['paramsOutOrdered'] = ['control_data']

functions['drone_control']['interfaces']['calculate_and_store_control_input']['in']['control_error'] = {
    'type': 'Trajectory',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'calculate_and_store_control_input',
    'param_direction': param_in
}

functions['drone_control']['interfaces']['calculate_and_store_control_input']['in']['processed_world_data'] = {
    'type': 'WorldData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'calculate_and_store_control_input',
    'param_direction': param_in
}

functions['drone_control']['interfaces']['calculate_and_store_control_input']['out']['control_data'] = {
    'type': 'DroneControllerInput',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'calculate_and_store_control_input',
    'param_direction': param_out
}

functions['control_data_storage'] = {
    'name_with_case' : 'Control_Data_Storage',
    'runtime_nature': passive,
    'language': C,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['control_data_storage']['interfaces']['get_control_data'] = {
    'port_name': 'get_control_data',
    'parent_fv': 'control_data_storage',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': synch,
    'rcm': protected,
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

functions['control_data_storage']['interfaces']['get_control_data']['paramsInOrdered'] = []

functions['control_data_storage']['interfaces']['get_control_data']['paramsOutOrdered'] = ['control_data']

functions['control_data_storage']['interfaces']['get_control_data']['out']['control_data'] = {
    'type': 'DroneControllerInput',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'get_control_data',
    'param_direction': param_out
}

functions['control_data_storage']['interfaces']['calculate_control_input'] = {
    'port_name': 'calculate_control_input',
    'parent_fv': 'control_data_storage',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': synch,
    'rcm': protected,
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

functions['control_data_storage']['interfaces']['calculate_control_input']['paramsInOrdered'] = ['control_error', 'processed_world_data']

functions['control_data_storage']['interfaces']['calculate_control_input']['paramsOutOrdered'] = []

functions['control_data_storage']['interfaces']['calculate_control_input']['in']['control_error'] = {
    'type': 'Trajectory',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'calculate_control_input',
    'param_direction': param_in
}

functions['control_data_storage']['interfaces']['calculate_control_input']['in']['processed_world_data'] = {
    'type': 'WorldData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'calculate_control_input',
    'param_direction': param_in
}

functions['control_data_storage']['interfaces']['calculate_and_store_control_input'] = {
    'port_name': 'calculate_and_store_control_input',
    'parent_fv': 'control_data_storage',
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
    'distant_fv': 'drone_control',
    'calling_threads': {},
    'distant_name': 'calculate_and_store_control_input',
    'queue_size': 1
}

functions['control_data_storage']['interfaces']['calculate_and_store_control_input']['paramsInOrdered'] = ['control_error', 'processed_world_data']

functions['control_data_storage']['interfaces']['calculate_and_store_control_input']['paramsOutOrdered'] = ['control_data']

functions['control_data_storage']['interfaces']['calculate_and_store_control_input']['in']['control_error'] = {
    'type': 'Trajectory',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'calculate_and_store_control_input',
    'param_direction': param_in
}

functions['control_data_storage']['interfaces']['calculate_and_store_control_input']['in']['processed_world_data'] = {
    'type': 'WorldData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'calculate_and_store_control_input',
    'param_direction': param_in
}

functions['control_data_storage']['interfaces']['calculate_and_store_control_input']['out']['control_data'] = {
    'type': 'DroneControllerInput',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'calculate_and_store_control_input',
    'param_direction': param_out
}

functions['socket_client'] = {
    'name_with_case' : 'Socket_Client',
    'runtime_nature': passive,
    'language': C,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['socket_client']['interfaces']['send_control_data'] = {
    'port_name': 'send_control_data',
    'parent_fv': 'socket_client',
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

functions['socket_client']['interfaces']['send_control_data']['paramsInOrdered'] = ['control_input']

functions['socket_client']['interfaces']['send_control_data']['paramsOutOrdered'] = []

functions['socket_client']['interfaces']['send_control_data']['in']['control_input'] = {
    'type': 'DroneControllerInput',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'send_control_data',
    'param_direction': param_in
}

functions['socket_client']['interfaces']['put_raw_asd'] = {
    'port_name': 'put_raw_asd',
    'parent_fv': 'socket_client',
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
    'distant_name': 'put_raw_asd',
    'queue_size': 1
}

functions['socket_client']['interfaces']['put_raw_asd']['paramsInOrdered'] = ['raw_asd']

functions['socket_client']['interfaces']['put_raw_asd']['paramsOutOrdered'] = []

functions['socket_client']['interfaces']['put_raw_asd']['in']['raw_asd'] = {
    'type': 'DroneSensorData',
    'asn1_module': 'TASTE_Dataview',
    'basic_type': sequence,
    'asn1_filename': './dataview-uniq.asn',
    'encoding': UPER,
    'interface': 'put_raw_asd',
    'param_direction': param_in
}
