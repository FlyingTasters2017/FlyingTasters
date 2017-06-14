-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_BasicTypes;
use TASTE_BasicTypes;
with TASTE_Dataview;
use TASTE_Dataview;
with adaasn1rtl;
use adaasn1rtl;



package drone_dummy is
    --  Provided interface "drone_clock"
    procedure drone_clock;
    pragma Export(C, drone_clock, "drone_dummy_drone_clock");
    --  Required interface "put_drone_data"
    procedure RIÜput_drone_data(drone_data: access asn1SccMyInteger);
    pragma import(C, RIÜput_drone_data, "drone_dummy_RI_put_drone_data");
end drone_dummy;