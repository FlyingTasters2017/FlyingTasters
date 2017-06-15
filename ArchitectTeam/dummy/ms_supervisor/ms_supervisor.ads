-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_BasicTypes;
use TASTE_BasicTypes;
with TASTE_Dataview;
use TASTE_Dataview;
with adaasn1rtl;
use adaasn1rtl;



package ms_supervisor is
    --  Provided interface "put_raw_MSD"
    procedure put_raw_MSD(raw_MSD: access asn1SccMyInteger);
    pragma Export(C, put_raw_MSD, "ms_supervisor_put_raw_MSD");
    --  Sync required interface "store_MSD"
    procedure RIÜstore_MSD(raw_MSD: access asn1SccMyInteger);
    pragma import(C, RIÜstore_MSD, "ms_supervisor_RI_store_MSD");
end ms_supervisor;