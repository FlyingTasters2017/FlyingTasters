-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_BasicTypes;
use TASTE_BasicTypes;
with TASTE_Dataview;
use TASTE_Dataview;
with adaasn1rtl;
use adaasn1rtl;



package interruptor is
    --  Provided interface "onOff"
    procedure onOff(onoffvalue: access asn1SccMyInteger);
    pragma Export(C, onOff, "interruptor_onOff");
    --  Sync required interface "startStop"
    procedure RIÜstartStop(ssvalue: access asn1SccMyInteger);
    pragma import(C, RIÜstartStop, "interruptor_RI_startStop");
end interruptor;