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
    --  Required interface "store_ASD"
    procedure RIÜstore_ASD(raw_MSD: access asn1SccMyInteger);
    pragma import(C, RIÜstore_ASD, "as_supervisor_RI_store_ASD");
end as_supervisor;