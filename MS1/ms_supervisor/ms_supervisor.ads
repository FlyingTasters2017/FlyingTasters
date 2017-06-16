-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_Dataview;
use TASTE_Dataview;
with TASTE_BasicTypes;
use TASTE_BasicTypes;
with adaasn1rtl;
use adaasn1rtl;



package ms_supervisor is
    --  Provided interface "pulse"
    procedure pulse;
    pragma Export(C, pulse, "ms_supervisor_pulse");
    --  Provided interface "talk_with_MSSV"
    procedure talk_with_MSSV(a: access asn1SccMyInteger);
    pragma Export(C, talk_with_MSSV, "ms_supervisor_talk_with_MSSV");
    --  Sync required interface "get_raw_MSD"
    procedure RIÜget_raw_MSD;
    pragma import(C, RIÜget_raw_MSD, "ms_supervisor_RI_get_raw_MSD");
end ms_supervisor;