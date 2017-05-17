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
	-- Provided interface "Start_work"
	---------------------------------------------------------
	procedure Start_work(Int_F: access asn1sccMyReal);
	pragma export(C, Start_work, "obsw_PI_Start_work");

	---------------------------------------------------------
	-- Required interface "Compute_Thrust"
	---------------------------------------------------------
	procedure Compute_Thrust(F: access asn1sccMyReal; h: access asn1sccMyReal; dh: access asn1sccMyReal);
	pragma import(C, Compute_Thrust, "obsw_RI_Compute_Thrust");
	procedure RIÜCompute_Thrust(F: access asn1sccMyReal; h: access asn1sccMyReal; dh: access asn1sccMyReal) renames Compute_Thrust;

	---------------------------------------------------------
	-- Required interface "Thrust_Update"
	---------------------------------------------------------
	procedure Thrust_Update(H: access asn1sccMyReal);
	pragma import(C, Thrust_Update, "obsw_RI_Thrust_Update");
	procedure RIÜThrust_Update(H: access asn1sccMyReal) renames Thrust_Update;

	---------------------------------------------------------
	-- Required interface "dHeight"
	---------------------------------------------------------
	procedure dHeight(dH: access asn1sccMyReal);
	pragma import(C, dHeight, "obsw_RI_dHeight");
	procedure RIÜdHeight(dH: access asn1sccMyReal) renames dHeight;

	-- TASTE API to check if the input queue is empty
	procedure check_queue(res: access asn1SccT_Boolean);
	pragma import(C, check_queue, "obsw_RI_check_queue");

end obsw;
