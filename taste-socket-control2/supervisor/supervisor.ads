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
    --  Provided interface "takeoff"
    procedure takeoff(Ref: access asn1SccMyDroneData);
    pragma Export(C, takeoff, "supervisor_takeoff");
    --  Required interface "displaySensor"
    procedure RI�displaySensor(sensorData: access asn1SccMySensorData);
    pragma import(C, RI�displaySensor, "supervisor_RI_displaySensor");
    --  Sync required interface "readStabilizerSendThrust"
    procedure RI�readStabilizerSendThrust(droneData: access asn1SccMyDroneData; sensorData: access asn1SccMySensorData);
    pragma import(C, RI�readStabilizerSendThrust, "supervisor_RI_readStabilizerSendThrust");
    --  Sync required interface "control_Act"
    procedure RI�control_Act(sensorData: access asn1SccMySensorData; Ref: access asn1SccMyDroneData; droneData: access asn1SccMyDroneData);
    pragma import(C, RI�control_Act, "supervisor_RI_control_Act");
    --  Sync required interface "DataOperation"
    procedure RI�DataOperation(Sensordata_in: access asn1SccMySensorData; Sensordata_out: access asn1SccMySensorData);
    pragma import(C, RI�DataOperation, "supervisor_RI_DataOperation");
end supervisor;