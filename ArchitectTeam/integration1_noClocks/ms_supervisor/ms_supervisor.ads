-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_Dataview;
use TASTE_Dataview;
with TASTE_BasicTypes;
use TASTE_BasicTypes;
with adaasn1rtl;
use adaasn1rtl;



package ms_supervisor is
    --  Provided interface "put_raw_MSD"
    procedure put_raw_MSD(raw_MSD: access asn1SccPixyData);
    pragma Export(C, put_raw_MSD, "ms_supervisor_put_raw_MSD");
    --  Provided interface "talk_with_MSSV"
    procedure talk_with_MSSV(sysSV_to_MSSV_events: access asn1SccMyInteger);
    pragma Export(C, talk_with_MSSV, "ms_supervisor_talk_with_MSSV");
    --  Sync required interface "store_MSD"
    procedure RI�store_MSD(processed_msd: access asn1SccAgent);
    pragma import(C, RI�store_MSD, "ms_supervisor_RI_store_MSD");
    --  Sync required interface "process_MSD"
    procedure RI�process_MSD(raw_MSD: access asn1SccPixyData; processed_MSD: access asn1SccAgent);
    pragma import(C, RI�process_MSD, "ms_supervisor_RI_process_MSD");
    --  Sync required interface "enable_pixycam"
    procedure RI�enable_pixycam(user_input: access asn1SccMyInteger);
    pragma import(C, RI�enable_pixycam, "ms_supervisor_RI_enable_pixycam");
end ms_supervisor;