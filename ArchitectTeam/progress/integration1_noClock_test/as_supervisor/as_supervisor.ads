-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_BasicTypes;
use TASTE_BasicTypes;
with TASTE_Dataview;
use TASTE_Dataview;
with adaasn1rtl;
use adaasn1rtl;



package as_supervisor is
    --  Provided interface "talk_with_ASSV"
    procedure talk_with_ASSV(sysSV_to_ASSV_events: access asn1SccMyInteger);
    pragma Export(C, talk_with_ASSV, "as_supervisor_talk_with_ASSV");
    --  Provided interface "put_raw_asd"
    procedure put_raw_asd(raw_asd: access asn1SccDroneSensorData);
    pragma Export(C, put_raw_asd, "as_supervisor_put_raw_asd");
    --  Sync required interface "store_ASD"
    procedure RIÜstore_ASD(processed_asd: access asn1SccAgent);
    pragma import(C, RIÜstore_ASD, "as_supervisor_RI_store_ASD");
    --  Sync required interface "process_ASD"
    procedure RIÜprocess_ASD(raw_ASD: access asn1SccDroneSensorData; processed_ASD: access asn1SccAgent);
    pragma import(C, RIÜprocess_ASD, "as_supervisor_RI_process_ASD");
end as_supervisor;