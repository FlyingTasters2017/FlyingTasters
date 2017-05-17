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
    procedure RI�Thrust_Update(H: access asn1SccMyReal);
    pragma import(C, RI�Thrust_Update, "obsw_RI_Thrust_Update");
    --  Required interface "dHeight"
    procedure RI�dHeight(dH: access asn1SccMyReal);
    pragma import(C, RI�dHeight, "obsw_RI_dHeight");
    --  Sync required interface "Compute_Thrust"
    procedure RI�Compute_Thrust(F: access asn1SccMyReal; h: access asn1SccMyReal; dh: access asn1SccMyReal);
    pragma import(C, RI�Compute_Thrust, "obsw_RI_Compute_Thrust");
end obsw;