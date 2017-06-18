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
    --  Required interface "put_raw_ASD"
    procedure RIÜput_raw_ASD(raw_ASD: access asn1SccMyInteger);
    pragma import(C, RIÜput_raw_ASD, "houston_RI_put_raw_ASD");
    --  Sync required interface "get_control_data"
    procedure RIÜget_control_data(control_input: access asn1SccMyInteger);
    pragma import(C, RIÜget_control_data, "houston_RI_get_control_data");
    --  Sync required interface "store_control_data"
    procedure RIÜstore_control_data(control_input: access asn1SccMyInteger);
    pragma import(C, RIÜstore_control_data, "houston_RI_store_control_data");
    --  Sync required interface "talk_to_socket"
    procedure RIÜtalk_to_socket(control_input: access asn1SccMyInteger; asd_data: access asn1SccMyInteger);
    pragma import(C, RIÜtalk_to_socket, "houston_RI_talk_to_socket");
end houston;