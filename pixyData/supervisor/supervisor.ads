-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_Dataview;
use TASTE_Dataview;
with TASTE_BasicTypes;
use TASTE_BasicTypes;
with adaasn1rtl;
use adaasn1rtl;



package supervisor is
    --  Provided interface "test"
    procedure test(a: access asn1SccMyInteger);
    pragma Export(C, test, "supervisor_test");
    --  Provided interface "pulse"
    procedure pulse;
    pragma Export(C, pulse, "supervisor_pulse");
    --  Required interface "sendX"
    procedure RI�sendX(x: access asn1SccT_UInt32);
    pragma import(C, RI�sendX, "supervisor_RI_sendX");
    --  Sync required interface "getPixyData"
    procedure RI�getPixyData(x: access asn1SccT_UInt32; y: access asn1SccT_UInt32);
    pragma import(C, RI�getPixyData, "supervisor_RI_getPixyData");
end supervisor;