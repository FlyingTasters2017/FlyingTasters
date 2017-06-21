-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_Dataview;
use TASTE_Dataview;
with TASTE_BasicTypes;
use TASTE_BasicTypes;
with adaasn1rtl;
use adaasn1rtl;



package system_supervisor is
    --  Provided interface "update_clock"
    procedure update_clock;
    pragma Export(C, update_clock, "system_supervisor_update_clock");
    --  Provided interface "set_user_input"
    procedure set_user_input(user_input: access asn1SccMyInteger);
    pragma Export(C, set_user_input, "system_supervisor_set_user_input");
    --  Required interface "update_GUI"
    procedure RI�update_GUI(world_data: access asn1SccWorldData);
    pragma import(C, RI�update_GUI, "system_supervisor_RI_update_GUI");
    --  Required interface "talk_with_MSSV"
    procedure RI�talk_with_MSSV(sysSV_to_MSSV_events: access asn1SccMyInteger);
    pragma import(C, RI�talk_with_MSSV, "system_supervisor_RI_talk_with_MSSV");
    --  Required interface "talk_with_ASSV"
    procedure RI�talk_with_ASSV(sysSV_to_ASSV_events: access asn1SccMyInteger);
    pragma import(C, RI�talk_with_ASSV, "system_supervisor_RI_talk_with_ASSV");
    --  Required interface "talk_with_Houston"
    procedure RI�talk_with_Houston(sysSV_to_Houston_events: access asn1SccMyInteger);
    pragma import(C, RI�talk_with_Houston, "system_supervisor_RI_talk_with_Houston");
    --  Sync required interface "check_mission_safety"
    procedure RI�check_mission_safety(processed_world_data: access asn1SccWorldData; world_safety_events: access asn1SccSafetyEvent);
    pragma import(C, RI�check_mission_safety, "system_supervisor_RI_check_mission_safety");
    --  Sync required interface "choose_trajectory"
    procedure RI�choose_trajectory(processed_world_data: access asn1SccWorldData; world_safety_events: access asn1SccSafetyEvent; control_error: access asn1SccTrajectory);
    pragma import(C, RI�choose_trajectory, "system_supervisor_RI_choose_trajectory");
    --  Sync required interface "calculate_control_input"
    procedure RI�calculate_control_input(control_error: access asn1SccTrajectory; processed_world_data: access asn1SccWorldData);
    pragma import(C, RI�calculate_control_input, "system_supervisor_RI_calculate_control_input");
    --  Sync required interface "update_world_data"
    procedure RI�update_world_data(processed_world_data: access asn1SccWorldData);
    pragma import(C, RI�update_world_data, "system_supervisor_RI_update_world_data");
end system_supervisor;