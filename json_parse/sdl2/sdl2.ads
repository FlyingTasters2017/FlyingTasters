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
    procedure RIÜsendX(x: access asn1SccMyReal);
    pragma import(C, RIÜsendX, "sdl2_RI_sendX");
    --  Required interface "sendY"
    procedure RIÜsendY(y: access asn1SccMyReal);
    pragma import(C, RIÜsendY, "sdl2_RI_sendY");
    --  Sync required interface "getPixyData"
    procedure RIÜgetPixyData(x: access asn1SccMyReal; y: access asn1SccMyReal);
    pragma import(C, RIÜgetPixyData, "sdl2_RI_getPixyData");
end sdl2;