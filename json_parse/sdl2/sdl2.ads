-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_BasicTypes;
use TASTE_BasicTypes;
with TASTE_Dataview;
use TASTE_Dataview;
with adaasn1rtl;
use adaasn1rtl;



package sdl2 is
    --  Provided interface "test"
    procedure test(a: access asn1SccMyInteger);
    pragma Export(C, test, "sdl2_test");
    --  Provided interface "pulse"
    procedure pulse;
    pragma Export(C, pulse, "sdl2_pulse");
    --  Required interface "sendX"
    procedure RI�sendX(x: access asn1SccT_UInt32);
    pragma import(C, RI�sendX, "sdl2_RI_sendX");
    --  Sync required interface "getPixyData"
    procedure RI�getPixyData(x: access asn1SccT_UInt32; y: access asn1SccT_UInt32);
    pragma import(C, RI�getPixyData, "sdl2_RI_getPixyData");
end sdl2;