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
    procedure RI�update_GUI(world_data: access asn1SccMyInteger);
    pragma import(C, RI�update_GUI, "system_supervisor_RI_update_GUI");
    --  Required interface "talk_with_MSSV"
    procedure RI�talk_with_MSSV(sysSV_to_MSSV_events: access asn1SccMyInteger);
    pragma import(C, RI�talk_with_MSSV, "system_supervisor_RI_talk_with_MSSV");
    --  Required interface "talk_with_ASSV"
    procedure RI�talk_with_ASSV(sysSV_to_ASSV_events: access asn1SccMyInteger);
    pragma import(C, RI�talk_with_ASSV, "system_supervisor_RI_talk_with_ASSV");
    --  Sync required interface "get_MSD_storage"
    procedure RI�get_MSD_storage(msd_storage_data: access asn1SccMyInteger);
    pragma import(C, RI�get_MSD_storage, "system_supervisor_RI_get_MSD_storage");
    --  Sync required interface "get_ASD_storage"
    procedure RI�get_ASD_storage(asd_storage_data: access asn1SccMyInteger);
    pragma import(C, RI�get_ASD_storage, "system_supervisor_RI_get_ASD_storage");
    --  Sync required interface "control_agents"
    procedure RI�control_agents(control_input: access asn1SccMyInteger);
    pragma import(C, RI�control_agents, "system_supervisor_RI_control_agents");
    --  Sync required interface "process_world_data"
    procedure RI�process_world_data(raw_world_data: access asn1SccMyInteger; processed_world_data: access asn1SccMyInteger);
    pragma import(C, RI�process_world_data, "system_supervisor_RI_process_world_data");
    --  Sync required interface "check_mission_safety"
    procedure RI�check_mission_safety(processed_world_data: access asn1SccMyInteger; world_safety_events: access asn1SccMyInteger);
    pragma import(C, RI�check_mission_safety, "system_supervisor_RI_check_mission_safety");
    --  Sync required interface "choose_trajectory"
    procedure RI�choose_trajectory(processed_world_data: access asn1SccMyInteger; world_safety_events: access asn1SccMyInteger; control_error: access asn1SccMyInteger);
    pragma import(C, RI�choose_trajectory, "system_supervisor_RI_choose_trajectory");
    --  Sync required interface "calculate_control_input"
    procedure RI�calculate_control_input(control_error: access asn1SccMyInteger; control_input: access asn1SccMyInteger);
    pragma import(C, RI�calculate_control_input, "system_supervisor_RI_calculate_control_input");
end system_supervisor;