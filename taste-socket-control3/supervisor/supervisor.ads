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
    procedure RI�displaySensor(sensorData: access asn1SccMySensorData);
    pragma import(C, RI�displaySensor, "supervisor_RI_displaySensor");
    --  Sync required interface "readStabilizerSendThrust"
    procedure RI�readStabilizerSendThrust(droneData: access asn1SccMyDroneData; sensorData: access asn1SccMySensorData);
    pragma import(C, RI�readStabilizerSendThrust, "supervisor_RI_readStabilizerSendThrust");
    --  Sync required interface "rawdata"
    procedure RI�rawdata;
    pragma import(C, RI�rawdata, "supervisor_RI_rawdata");
end supervisor;