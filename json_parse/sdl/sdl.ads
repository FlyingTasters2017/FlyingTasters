-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_Dataview;
use TASTE_Dataview;
with TASTE_BasicTypes;
use TASTE_BasicTypes;
with adaasn1rtl;
use adaasn1rtl;



package sdl is
    --  Provided interface "pulse"
    procedure pulse;
    pragma Export(C, pulse, "sdl_pulse");
    --  Required interface "sendX"
    procedure RI�sendX(x: access asn1SccT_UInt32);
    pragma import(C, RI�sendX, "sdl_RI_sendX");
    --  Sync required interface "getPixyData"
    procedure RI�getPixyData(x: access asn1SccT_UInt32; y: access asn1SccT_UInt32);
    pragma import(C, RI�getPixyData, "sdl_RI_getPixyData");
end sdl;