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
    procedure RIÜsendX(x: access asn1SccT_UInt32);
    pragma import(C, RIÜsendX, "supervisor_RI_sendX");
    --  Sync required interface "getPixyData"
    procedure RIÜgetPixyData(x: access asn1SccT_UInt32; y: access asn1SccT_UInt32);
    pragma import(C, RIÜgetPixyData, "supervisor_RI_getPixyData");
end supervisor;