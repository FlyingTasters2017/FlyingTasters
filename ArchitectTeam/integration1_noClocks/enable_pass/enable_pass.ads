-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_Dataview;
use TASTE_Dataview;
with TASTE_BasicTypes;
use TASTE_BasicTypes;
with adaasn1rtl;
use adaasn1rtl;



package enable_pass is
    --  Provided interface "enable_pixycam"
    procedure enable_pixycam(user_input: access asn1SccMyInteger);
    pragma Export(C, enable_pixycam, "enable_pass_enable_pixycam");
    --  Sync required interface "enable_pixycam_pass"
    procedure RIÜenable_pixycam_pass(user_input: access asn1SccMyInteger);
    pragma import(C, RIÜenable_pixycam_pass, "enable_pass_RI_enable_pixycam_pass");
end enable_pass;