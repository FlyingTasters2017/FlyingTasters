-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_Dataview;
use TASTE_Dataview;
with TASTE_BasicTypes;
use TASTE_BasicTypes;
with adaasn1rtl;
use adaasn1rtl;



package obsw is
    --  Provided interface "Pulse"
    procedure Pulse;
    pragma Export(C, Pulse, "obsw_Pulse");
    --  Provided interface "Start_work"
    procedure Start_work(Int_F: access asn1SccMyReal);
    pragma Export(C, Start_work, "obsw_Start_work");
    --  Required interface "Thrust_Update"
    procedure RIÜThrust_Update(H: access asn1SccMyReal);
    pragma import(C, RIÜThrust_Update, "obsw_RI_Thrust_Update");
    --  Required interface "dHeight"
    procedure RIÜdHeight(dH: access asn1SccMyReal);
    pragma import(C, RIÜdHeight, "obsw_RI_dHeight");
    --  Sync required interface "Compute_Thrust"
    procedure RIÜCompute_Thrust(F: access asn1SccMyReal; h: access asn1SccMyReal; dh: access asn1SccMyReal);
    pragma import(C, RIÜCompute_Thrust, "obsw_RI_Compute_Thrust");
end obsw;