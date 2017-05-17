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
	procedure Takeoff(Ref_H: access asn1sccMyReal);
	pragma export(C, Takeoff, "obsw_PI_Takeoff");

	---------------------------------------------------------
	-- Required interface "Height"
	---------------------------------------------------------
	procedure Height(H: access asn1sccMyReal);
	pragma import(C, Height, "obsw_RI_Height");
	procedure RIÜHeight(H: access asn1sccMyReal) renames Height;

	---------------------------------------------------------
	-- Required interface "Compute_Input"
	---------------------------------------------------------
	procedure Compute_Input(Ref_h: access asn1sccMyReal; dh: access asn1sccMyReal; h: access asn1sccMyReal; F: access asn1sccMyReal);
	pragma import(C, Compute_Input, "obsw_RI_Compute_Input");
	procedure RIÜCompute_Input(Ref_h: access asn1sccMyReal; dh: access asn1sccMyReal; h: access asn1sccMyReal; F: access asn1sccMyReal) renames Compute_Input;

	---------------------------------------------------------
	-- Required interface "Response"
	---------------------------------------------------------
	procedure Response(F: access asn1sccMyReal; dh: access asn1sccMyReal; h: access asn1sccMyReal);
	pragma import(C, Response, "obsw_RI_Response");
	procedure RIÜResponse(F: access asn1sccMyReal; dh: access asn1sccMyReal; h: access asn1sccMyReal) renames Response;

	-- TASTE API to check if the input queue is empty
	procedure check_queue(res: access asn1SccT_Boolean);
	pragma import(C, check_queue, "obsw_RI_check_queue");

end obsw;
