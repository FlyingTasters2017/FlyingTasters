-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_Dataview;
use TASTE_Dataview;
with TASTE_BasicTypes;
use TASTE_BasicTypes;
with adaasn1rtl;
use adaasn1rtl;



package supervisor is
    --  Provided interface "pulse"
    procedure pulse;
    pragma Export(C, pulse, "supervisor_pulse");
    --  Required interface "displaySensor"
    procedure RIÜdisplaySensor(sensorData: access asn1SccMySensorData);
    pragma import(C, RIÜdisplaySensor, "supervisor_RI_displaySensor");
    --  Sync required interface "readStabilizerSendThrust"
    procedure RIÜreadStabilizerSendThrust(droneData: access asn1SccMyDroneData; sensorData: access asn1SccMySensorData);
    pragma import(C, RIÜreadStabilizerSendThrust, "supervisor_RI_readStabilizerSendThrust");
    --  Sync required interface "takeoff"
    procedure RIÜtakeoff(droneData: access asn1SccMyDroneData);
    pragma import(C, RIÜtakeoff, "supervisor_RI_takeoff");
    --  Sync required interface "printTime"
    procedure RIÜprintTime;
    pragma import(C, RIÜprintTime, "supervisor_RI_printTime");
end supervisor;