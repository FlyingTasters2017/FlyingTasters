-- This file was generated automatically: DO NOT MODIFY IT !

with System.IO;
use System.IO;

with Ada.Unchecked_Conversion;
with Ada.Numerics.Generic_Elementary_Functions;

with TASTE_Dataview;
use TASTE_Dataview;
with TASTE_BasicTypes;
use TASTE_BasicTypes;
with adaasn1rtl;
use adaasn1rtl;

with Interfaces;
use Interfaces;

package body supervisor is
    type States is (running, wait);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
        sensordata : aliased asn1SccMySensorData;
        ref : aliased asn1SccMyDroneData;
        dronedata : aliased asn1SccMyDroneData;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 5;
    procedure runTransition(Id: Integer);
    procedure pulse is
        begin
            case ctxt.state is
                when running =>
                    runTransition(1);
                when wait =>
                    runTransition(3);
                when others =>
                    runTransition(CS_Only);
            end case;
        end pulse;
        

    procedure takeoff(Ref: access asn1SccMyDroneData) is
        begin
            case ctxt.state is
                when running =>
                    ctxt.ref := Ref.all;
                    runTransition(2);
                when wait =>
                    ctxt.ref := Ref.all;
                    runTransition(4);
                when others =>
                    runTransition(CS_Only);
            end case;
        end takeoff;
        

    procedure runTransition(Id: Integer) is
        trId : Integer := Id;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- writeln('SDL Startup') (13,13)
                        Put("SDL Startup");
                        New_Line;
                        -- NEXT_STATE Wait (15,18) at 479, 172
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 1 =>
                        -- control_Act(sensordata,ref,dronedata) (21,17)
                        RIÜcontrol_Act(ctxt.sensordata'Access, ctxt.ref'Access, ctxt.dronedata'Access);
                        -- readStabilizerSendThrust(dronedata,sensorData) (23,17)
                        RIÜreadStabilizerSendThrust(ctxt.dronedata'Access, ctxt.sensorData'Access);
                        -- dataOperation(sensorData,sensorData) (25,17)
                        RIÜdataOperation(ctxt.sensorData'Access, ctxt.sensorData'Access);
                        -- displaySensor(sensorData) (27,19)
                        RIÜdisplaySensor(ctxt.sensorData'Access);
                        -- NEXT_STATE Running (29,22) at 760, 424
                        trId := -1;
                        ctxt.state := Running;
                        goto next_transition;
                    when 2 =>
                        -- NEXT_STATE Wait (33,22) at 1005, 217
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 3 =>
                        -- NEXT_STATE Wait (43,22) at 408, 282
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 4 =>
                        -- NEXT_STATE Running (47,22) at 521, 282
                        trId := -1;
                        ctxt.state := Running;
                        goto next_transition;
                    when CS_Only =>
                        trId := -1;
                        goto next_transition;
                    when others =>
                        null;
                end case;
                <<next_transition>>
                null;
            end loop;
        end runTransition;
        

    begin
        runTransition(0);
        ctxt.initDone := True;
end supervisor;