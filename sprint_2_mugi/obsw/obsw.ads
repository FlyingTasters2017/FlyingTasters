-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_Dataview;
use TASTE_Dataview;
with TASTE_BasicTypes;
use TASTE_BasicTypes;
with adaasn1rtl;
use adaasn1rtl;



package obsw is
    --  Provided interface "Takeoff"
    procedure Takeoff(Trajectory: access asn1SccMyTrajectory);
    pragma Export(C, Takeoff, "obsw_Takeoff");
    --  Provided interface "Pulse"
    procedure Pulse;
    pragma Export(C, Pulse, "obsw_Pulse");
    --  Required interface "GetHeight"
    procedure RI�GetHeight(Height: access asn1SccMyReal);
    pragma import(C, RI�GetHeight, "obsw_RI_GetHeight");
    --  Sync required interface "Compute_PWM"
    procedure RI�Compute_PWM(Trajectory: access asn1SccMyTrajectory; States: access asn1SccMyStates; PWM: access asn1SccMyPWM);
    pragma import(C, RI�Compute_PWM, "obsw_RI_Compute_PWM");
    --  Sync required interface "Respond_state"
    procedure RI�Respond_state(PWM: access asn1SccMyPWM; States: access asn1SccMyStates);
    pragma import(C, RI�Respond_state, "obsw_RI_Respond_state");
end obsw;