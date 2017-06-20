-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_BasicTypes;
use TASTE_BasicTypes;
with TASTE_Dataview;
use TASTE_Dataview;
with adaasn1rtl;
use adaasn1rtl;



package supervisor is
    --  Provided interface "pulse1"
    procedure pulse1;
    pragma Export(C, pulse1, "supervisor_pulse1");
    --  Provided interface "pulse2"
    procedure pulse2;
    pragma Export(C, pulse2, "supervisor_pulse2");
    --  Paramless required interface "talk_with_ASSV"
    procedure RIÜtalk_with_ASSV;
    pragma import(C, RIÜtalk_with_ASSV, "supervisor_RI_talk_with_ASSV");
    --  Paramless required interface "talk_with_MSSV"
    procedure RIÜtalk_with_MSSV;
    pragma import(C, RIÜtalk_with_MSSV, "supervisor_RI_talk_with_MSSV");
end supervisor;