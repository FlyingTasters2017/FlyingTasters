-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_Dataview;
use TASTE_Dataview;
with TASTE_BasicTypes;
use TASTE_BasicTypes;
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
    --  Sync required interface "get_MSD_storage"
    procedure RIÜget_MSD_storage(msd_storage_data: access asn1SccMyInteger);
    pragma import(C, RIÜget_MSD_storage, "system_supervisor_RI_get_MSD_storage");
end system_supervisor;