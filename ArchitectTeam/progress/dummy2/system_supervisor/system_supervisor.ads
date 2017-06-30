-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_BasicTypes;
use TASTE_BasicTypes;
with TASTE_Dataview;
use TASTE_Dataview;
with adaasn1rtl;
use adaasn1rtl;



package system_supervisor is
    --  Provided interface "clock"
    procedure clock;
    pragma Export(C, clock, "system_supervisor_clock");
    --  Provided interface "set_user_input"
    procedure set_user_input(user_input: access asn1SccMyInteger);
    pragma Export(C, set_user_input, "system_supervisor_set_user_input");
    --  Required interface "update_GUI"
    procedure RIÜupdate_GUI(world_data: access asn1SccMyInteger);
    pragma import(C, RIÜupdate_GUI, "system_supervisor_RI_update_GUI");
    --  Required interface "talk_with_MSSV"
    procedure RIÜtalk_with_MSSV(sysSV_to_MSSV_events: access asn1SccMyInteger);
    pragma import(C, RIÜtalk_with_MSSV, "system_supervisor_RI_talk_with_MSSV");
    --  Required interface "talk_with_ASSV"
    procedure RIÜtalk_with_ASSV(sysSV_to_ASSV_events: access asn1SccMyInteger);
    pragma import(C, RIÜtalk_with_ASSV, "system_supervisor_RI_talk_with_ASSV");
    --  Sync required interface "get_MSD_storage"
    procedure RIÜget_MSD_storage(msd_storage_data: access asn1SccMyInteger);
    pragma import(C, RIÜget_MSD_storage, "system_supervisor_RI_get_MSD_storage");
    --  Sync required interface "get_ASD_storage"
    procedure RIÜget_ASD_storage(asd_storage_data: access asn1SccMyInteger);
    pragma import(C, RIÜget_ASD_storage, "system_supervisor_RI_get_ASD_storage");
    --  Sync required interface "control_agents"
    procedure RIÜcontrol_agents(control_input: access asn1SccMyInteger);
    pragma import(C, RIÜcontrol_agents, "system_supervisor_RI_control_agents");
    --  Sync required interface "process_world_data"
    procedure RIÜprocess_world_data(raw_world_data: access asn1SccMyInteger; processed_world_data: access asn1SccMyInteger);
    pragma import(C, RIÜprocess_world_data, "system_supervisor_RI_process_world_data");
    --  Sync required interface "check_mission_safety"
    procedure RIÜcheck_mission_safety(processed_world_data: access asn1SccMyInteger; world_safety_events: access asn1SccMyInteger);
    pragma import(C, RIÜcheck_mission_safety, "system_supervisor_RI_check_mission_safety");
    --  Sync required interface "choose_trajectory"
    procedure RIÜchoose_trajectory(processed_world_data: access asn1SccMyInteger; world_safety_events: access asn1SccMyInteger; control_error: access asn1SccMyInteger);
    pragma import(C, RIÜchoose_trajectory, "system_supervisor_RI_choose_trajectory");
    --  Sync required interface "calculate_control_input"
    procedure RIÜcalculate_control_input(control_error: access asn1SccMyInteger; control_input: access asn1SccMyInteger);
    pragma import(C, RIÜcalculate_control_input, "system_supervisor_RI_calculate_control_input");
end system_supervisor;