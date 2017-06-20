-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_BasicTypes;
use TASTE_BasicTypes;
with TASTE_Dataview;
use TASTE_Dataview;
with adaasn1rtl;
use adaasn1rtl;



package as_supervisor is
    --  Provided interface "talk_with_ASSV"
    procedure talk_with_ASSV;
    pragma Export(C, talk_with_ASSV, "as_supervisor_talk_with_ASSV");
    --  Sync required interface "takeoff"
    procedure RIÜtakeoff(droneData: access asn1SccMyDroneData);
    pragma import(C, RIÜtakeoff, "as_supervisor_RI_takeoff");
    --  Sync required interface "readStabilizerSendThrust"
    procedure RIÜreadStabilizerSendThrust(droneData: access asn1SccMyDroneData; sensorData: access asn1SccMySensorData);
    pragma import(C, RIÜreadStabilizerSendThrust, "as_supervisor_RI_readStabilizerSendThrust");
end as_supervisor;