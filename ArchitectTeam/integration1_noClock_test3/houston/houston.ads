-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_Dataview;
use TASTE_Dataview;
with TASTE_BasicTypes;
use TASTE_BasicTypes;
with adaasn1rtl;
use adaasn1rtl;



package houston is
    --  Provided interface "talk_with_Houston"
    procedure talk_with_Houston(sysSV_to_Houston_events: access asn1SccMyInteger);
    pragma Export(C, talk_with_Houston, "houston_talk_with_Houston");
    --  Provided interface "put_control_data"
    procedure put_control_data(control_data: access asn1SccDroneControllerInput);
    pragma Export(C, put_control_data, "houston_put_control_data");
    --  Sync required interface "store_control_data"
    procedure RI�store_control_data(control_input: access asn1SccDroneControllerInput);
    pragma import(C, RI�store_control_data, "houston_RI_store_control_data");
    --  Sync required interface "send_control_data"
    procedure RI�send_control_data(control_input: access asn1SccDroneControllerInput);
    pragma import(C, RI�send_control_data, "houston_RI_send_control_data");
end houston;