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
    --  Provided interface "Takeoff"
    procedure Takeoff(Ref_H: access asn1SccMyReal);
    pragma Export(C, Takeoff, "obsw_Takeoff");
    --  Required interface "Height"
    procedure RI�Height(H: access asn1SccMyReal);
    pragma import(C, RI�Height, "obsw_RI_Height");
    --  Sync required interface "Compute_Input"
    procedure RI�Compute_Input(Ref_h: access asn1SccMyReal; dh: access asn1SccMyReal; h: access asn1SccMyReal; F: access asn1SccMyReal);
    pragma import(C, RI�Compute_Input, "obsw_RI_Compute_Input");
    --  Sync required interface "Response"
    procedure RI�Response(F: access asn1SccMyReal; dh: access asn1SccMyReal; h: access asn1SccMyReal);
    pragma import(C, RI�Response, "obsw_RI_Response");
end obsw;