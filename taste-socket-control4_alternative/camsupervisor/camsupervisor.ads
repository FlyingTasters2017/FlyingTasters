-- This file was generated automatically: DO NOT MODIFY IT !

with TASTE_Dataview;
use TASTE_Dataview;
with TASTE_BasicTypes;
use TASTE_BasicTypes;
with adaasn1rtl;
use adaasn1rtl;



package camsupervisor is
    --  Provided interface "campulse"
    procedure campulse;
    pragma Export(C, campulse, "camsupervisor_campulse");
    --  Sync required interface "rawdata"
    procedure RI�rawdata;
    pragma import(C, RI�rawdata, "camsupervisor_RI_rawdata");
end camsupervisor;