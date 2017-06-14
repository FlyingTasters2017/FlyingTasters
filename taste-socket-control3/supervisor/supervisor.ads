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
    procedure takeoff(droneData: access asn1SccMyDroneData);
    pragma Export(C, takeoff, "supervisor_takeoff");
    --  Required interface "displaySensor"
    procedure RIÜdisplaySensor(sensorData: access asn1SccMySensorData);
    pragma import(C, RIÜdisplaySensor, "supervisor_RI_displaySensor");
    --  Sync required interface "readStabilizerSendThrust"
    procedure RIÜreadStabilizerSendThrust(droneData: access asn1SccMyDroneData; sensorData: access asn1SccMySensorData);
    pragma import(C, RIÜreadStabilizerSendThrust, "supervisor_RI_readStabilizerSendThrust");
    --  Sync required interface "rawdata"
    procedure RIÜrawdata;
    pragma import(C, RIÜrawdata, "supervisor_RI_rawdata");
end supervisor;