-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_Dataview;
use TASTE_Dataview;
with TASTE_BasicTypes;
use TASTE_BasicTypes;
with adaasn1rtl;
use adaasn1rtl;



package drone_dummy is
    --  Provided interface "send_control_data"
    procedure send_control_data(control_input: access asn1SccMyInteger);
    pragma Export(C, send_control_data, "drone_dummy_send_control_data");
    --  Required interface "put_raw_asd"
    procedure RIÜput_raw_asd(raw_asd: access asn1SccMyInteger);
    pragma import(C, RIÜput_raw_asd, "drone_dummy_RI_put_raw_asd");
end drone_dummy;