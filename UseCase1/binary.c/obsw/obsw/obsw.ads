-- This file was generated automatically: DO NOT MODIFY IT !

-- Declaration of the provided and required interfaces

pragma style_checks (off);
pragma warnings (off);
with taste_basictypes;
use taste_basictypes;

with adaasn1rtl;
use adaasn1rtl;

with TASTE_Dataview;
use TASTE_Dataview;

package obsw is

	---------------------------------------------------------
	-- Provided interface "Pulse"
	---------------------------------------------------------
	procedure Pulse;
	pragma export(C, Pulse, "obsw_PI_Pulse");

	---------------------------------------------------------
	-- Provided interface "Takeoff"
	---------------------------------------------------------
	procedure Takeoff(ReferenceHeight: access asn1sccMyReal);
	pragma export(C, Takeoff, "obsw_PI_Takeoff");

	---------------------------------------------------------
	-- Required interface "GetHeight"
	---------------------------------------------------------
	procedure GetHeight(Height: access asn1sccMyReal);
	pragma import(C, GetHeight, "obsw_RI_GetHeight");
	procedure RIÜGetHeight(Height: access asn1sccMyReal) renames GetHeight;

	---------------------------------------------------------
	-- Required interface "Compute_Force"
	---------------------------------------------------------
	procedure Compute_Force(ReferenceHeight: access asn1sccMyReal; HeightVelocity: access asn1sccMyReal; Height: access asn1sccMyReal; Force: access asn1sccMyReal);
	pragma import(C, Compute_Force, "obsw_RI_Compute_Force");
	procedure RIÜCompute_Force(ReferenceHeight: access asn1sccMyReal; HeightVelocity: access asn1sccMyReal; Height: access asn1sccMyReal; Force: access asn1sccMyReal) renames Compute_Force;

	---------------------------------------------------------
	-- Required interface "Response"
	---------------------------------------------------------
	procedure Response(Force: access asn1sccMyReal; HeightVelocity: access asn1sccMyReal; Height: access asn1sccMyReal);
	pragma import(C, Response, "obsw_RI_Response");
	procedure RIÜResponse(Force: access asn1sccMyReal; HeightVelocity: access asn1sccMyReal; Height: access asn1sccMyReal) renames Response;

	-- TASTE API to check if the input queue is empty
	procedure check_queue(res: access asn1SccT_Boolean);
	pragma import(C, check_queue, "obsw_RI_check_queue");

end obsw;
