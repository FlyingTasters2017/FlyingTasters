-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_BasicTypes;
use TASTE_BasicTypes;
with TASTE_Dataview;
use TASTE_Dataview;
with adaasn1rtl;
use adaasn1rtl;



package supervisor is
    --  Provided interface "pulse"
    procedure pulse;
    pragma Export(C, pulse, "supervisor_pulse");
    --  Provided interface "takeoff"
    procedure takeoff(ref_thrust: access asn1SccMyReal);
    pragma Export(C, takeoff, "supervisor_takeoff");
    --  Required interface "SensorData"
    procedure RIÜSensorData(updated_thrust: access asn1SccMyReal);
    pragma import(C, RIÜSensorData, "supervisor_RI_SensorData");
    --  Sync required interface "readStabilizerSendThrust"
    procedure RIÜreadStabilizerSendThrust(ref_thrust: access asn1SccMyReal; updated_thrust: access asn1SccMyReal);
    pragma import(C, RIÜreadStabilizerSendThrust, "supervisor_RI_readStabilizerSendThrust");
end supervisor;