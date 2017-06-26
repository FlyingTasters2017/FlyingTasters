-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_Dataview;
use TASTE_Dataview;
with TASTE_BasicTypes;
use TASTE_BasicTypes;
with adaasn1rtl;
use adaasn1rtl;



package interruptor is
    --  Provided interface "onOff"
    procedure onOff(onoffvalue: access asn1SccMyInteger);
    pragma Export(C, onOff, "interruptor_onOff");
    --  Provided interface "dopulse"
    procedure dopulse(dopulsevalue: access asn1SccMyInteger);
    pragma Export(C, dopulse, "interruptor_dopulse");
    --  Sync required interface "startStop"
    procedure RIÜstartStop(ssvalue: access asn1SccMyInteger);
    pragma import(C, RIÜstartStop, "interruptor_RI_startStop");
    --  Sync required interface "pulse"
    procedure RIÜpulse(startvalue: access asn1SccMyInteger);
    pragma import(C, RIÜpulse, "interruptor_RI_pulse");
end interruptor;