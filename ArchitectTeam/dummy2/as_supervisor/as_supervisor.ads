-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_BasicTypes;
use TASTE_BasicTypes;
with TASTE_Dataview;
use TASTE_Dataview;
with adaasn1rtl;
use adaasn1rtl;



package as_supervisor is
    --  Provided interface "put_raw_ASD"
    procedure put_raw_ASD(raw_ASD: access asn1SccMyInteger);
    pragma Export(C, put_raw_ASD, "as_supervisor_put_raw_ASD");
    --  Provided interface "talk_with_ASSV"
    procedure talk_with_ASSV(sysSV_to_ASSV_events: access asn1SccMyInteger);
    pragma Export(C, talk_with_ASSV, "as_supervisor_talk_with_ASSV");
    --  Sync required interface "store_ASD"
    procedure RI�store_ASD(raw_ASD: access asn1SccMyInteger);
    pragma import(C, RI�store_ASD, "as_supervisor_RI_store_ASD");
    --  Sync required interface "process_ASD"
    procedure RI�process_ASD(raw_ASD: access asn1SccMyInteger; processed_ASD: access asn1SccMyInteger);
    pragma import(C, RI�process_ASD, "as_supervisor_RI_process_ASD");
end as_supervisor;