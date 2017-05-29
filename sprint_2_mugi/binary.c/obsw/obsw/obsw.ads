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
	-- Provided interface "Takeoff"
	---------------------------------------------------------
	procedure Takeoff(Trajectory: access asn1sccMyTrajectory);
	pragma export(C, Takeoff, "obsw_PI_Takeoff");

	---------------------------------------------------------
	-- Provided interface "Pulse"
	---------------------------------------------------------
	procedure Pulse;
	pragma export(C, Pulse, "obsw_PI_Pulse");

	---------------------------------------------------------
	-- Required interface "Compute_PWM"
	---------------------------------------------------------
	procedure Compute_PWM(Trajectory: access asn1sccMyTrajectory; States: access asn1sccMyStates; PWM: access asn1sccMyPWM);
	pragma import(C, Compute_PWM, "obsw_RI_Compute_PWM");
	procedure RIÜCompute_PWM(Trajectory: access asn1sccMyTrajectory; States: access asn1sccMyStates; PWM: access asn1sccMyPWM) renames Compute_PWM;

	---------------------------------------------------------
	-- Required interface "Respond_state"
	---------------------------------------------------------
	procedure Respond_state(PWM: access asn1sccMyPWM; States: access asn1sccMyStates);
	pragma import(C, Respond_state, "obsw_RI_Respond_state");
	procedure RIÜRespond_state(PWM: access asn1sccMyPWM; States: access asn1sccMyStates) renames Respond_state;

	---------------------------------------------------------
	-- Required interface "GetHeight"
	---------------------------------------------------------
	procedure GetHeight(Height: access asn1sccMyReal);
	pragma import(C, GetHeight, "obsw_RI_GetHeight");
	procedure RIÜGetHeight(Height: access asn1sccMyReal) renames GetHeight;

	-- TASTE API to check if the input queue is empty
	procedure check_queue(res: access asn1SccT_Boolean);
	pragma import(C, check_queue, "obsw_RI_check_queue");

end obsw;
