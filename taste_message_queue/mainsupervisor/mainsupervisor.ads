-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_Dataview;
use TASTE_Dataview;
with TASTE_BasicTypes;
use TASTE_BasicTypes;
with adaasn1rtl;
use adaasn1rtl;



package mainsupervisor is
    --  Provided interface "pulse"
    procedure pulse;
    pragma Export(C, pulse, "mainsupervisor_pulse");
    --  Provided interface "takeoff"
    procedure takeoff(tc_data: access asn1SccTC_T);
    pragma Export(C, takeoff, "mainsupervisor_takeoff");
    --  Provided interface "TM_from_CF"
    procedure TM_from_CF(tm_data: access asn1SccTM_T);
    pragma Export(C, TM_from_CF, "mainsupervisor_TM_from_CF");
    --  Required interface "displayData"
    procedure RIÜdisplayData(tm_data: access asn1SccTM_T);
    pragma import(C, RIÜdisplayData, "mainsupervisor_RI_displayData");
    --  Sync required interface "TC_from_TASTE"
    procedure RIÜTC_from_TASTE(tc_data: access asn1SccTC_T);
    pragma import(C, RIÜTC_from_TASTE, "mainsupervisor_RI_TC_from_TASTE");
end mainsupervisor;