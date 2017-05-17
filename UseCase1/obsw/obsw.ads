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
    procedure Takeoff(ReferenceHeight: access asn1SccMyReal);
    pragma Export(C, Takeoff, "obsw_Takeoff");
    --  Required interface "GetHeight"
    procedure RIÜGetHeight(Height: access asn1SccMyReal);
    pragma import(C, RIÜGetHeight, "obsw_RI_GetHeight");
    --  Sync required interface "Compute_Force"
    procedure RIÜCompute_Force(ReferenceHeight: access asn1SccMyReal; HeightVelocity: access asn1SccMyReal; Height: access asn1SccMyReal; Force: access asn1SccMyReal);
    pragma import(C, RIÜCompute_Force, "obsw_RI_Compute_Force");
    --  Sync required interface "Response"
    procedure RIÜResponse(Force: access asn1SccMyReal; HeightVelocity: access asn1SccMyReal; Height: access asn1SccMyReal);
    pragma import(C, RIÜResponse, "obsw_RI_Response");
end obsw;