-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_Dataview;
use TASTE_Dataview;
with TASTE_BasicTypes;
use TASTE_BasicTypes;
with adaasn1rtl;
use adaasn1rtl;



package socket_client is
    --  Provided interface "send_control_data"
    procedure send_control_data(control_input: access asn1SccMyInteger);
    pragma Export(C, send_control_data, "socket_client_send_control_data");
    --  Required interface "put_raw_asd"
    procedure RI�put_raw_asd(raw_asd: access asn1SccMyInteger);
    pragma import(C, RI�put_raw_asd, "socket_client_RI_put_raw_asd");
    --  Sync required interface "talk_with_drone"
    procedure RI�talk_with_drone(control_data: access asn1SccMyInteger; raw_asd: access asn1SccMyInteger);
    pragma import(C, RI�talk_with_drone, "socket_client_RI_talk_with_drone");
end socket_client;