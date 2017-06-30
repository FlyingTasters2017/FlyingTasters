-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_Dataview;
use TASTE_Dataview;
with TASTE_BasicTypes;
use TASTE_BasicTypes;
with adaasn1rtl;
use adaasn1rtl;



package houston is
    --  Provided interface "comm_clock"
    procedure comm_clock;
    pragma Export(C, comm_clock, "houston_comm_clock");
    --  Provided interface "talk_with_Houston"
    procedure talk_with_Houston(sysSV_to_Houston_events: access asn1SccMyInteger);
    pragma Export(C, talk_with_Houston, "houston_talk_with_Houston");
    --  Required interface "send_control_data"
    procedure RIÜsend_control_data(control_input: access asn1SccMyInteger);
    pragma import(C, RIÜsend_control_data, "houston_RI_send_control_data");
    --  Sync required interface "get_control_data"
    procedure RIÜget_control_data(control_input: access asn1SccMyInteger);
    pragma import(C, RIÜget_control_data, "houston_RI_get_control_data");
    --  Sync required interface "store_control_data"
    procedure RIÜstore_control_data(control_input: access asn1SccMyInteger);
    pragma import(C, RIÜstore_control_data, "houston_RI_store_control_data");
end houston;