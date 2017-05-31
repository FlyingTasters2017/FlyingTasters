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

package supervisor is

	---------------------------------------------------------
	-- Provided interface "pulse"
	---------------------------------------------------------
	procedure pulse;
	pragma export(C, pulse, "supervisor_PI_pulse");

	---------------------------------------------------------
	-- Provided interface "takeoff"
	---------------------------------------------------------
	procedure takeoff(ref_thrust: access asn1sccMyReal);
	pragma export(C, takeoff, "supervisor_PI_takeoff");

	---------------------------------------------------------
	-- Required interface "readStabilizerSendThrust"
	---------------------------------------------------------
	procedure readStabilizerSendThrust(ref_thrust: access asn1sccMyReal; updated_thrust: access asn1sccMyReal);
	pragma import(C, readStabilizerSendThrust, "supervisor_RI_readStabilizerSendThrust");
	procedure RIÜreadStabilizerSendThrust(ref_thrust: access asn1sccMyReal; updated_thrust: access asn1sccMyReal) renames readStabilizerSendThrust;

	---------------------------------------------------------
	-- Required interface "SensorData"
	---------------------------------------------------------
	procedure SensorData(updated_thrust: access asn1sccMyReal);
	pragma import(C, SensorData, "supervisor_RI_SensorData");
	procedure RIÜSensorData(updated_thrust: access asn1sccMyReal) renames SensorData;

	-- TASTE API to check if the input queue is empty
	procedure check_queue(res: access asn1SccT_Boolean);
	pragma import(C, check_queue, "supervisor_RI_check_queue");

end supervisor;
