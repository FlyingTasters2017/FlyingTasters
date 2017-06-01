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
        dronedata : aliased asn1SccMyDroneData;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 5;
    procedure runTransition(Id: Integer);
    procedure pulse is
        begin
            case ctxt.state is
                when running =>
                    runTransition(3);
                when wait =>
                    runTransition(1);
                when others =>
                    runTransition(CS_Only);
            end case;
        end pulse;
        

    procedure takeoff(droneData: access asn1SccMyDroneData) is
        begin
            case ctxt.state is
                when running =>
                    ctxt.dronedata := droneData.all;
                    runTransition(4);
                when wait =>
                    ctxt.dronedata := droneData.all;
                    runTransition(2);
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
                        -- writeln('SDL Startup') (12,13)
                        Put("SDL Startup");
                        New_Line;
                        -- NEXT_STATE Wait (14,18) at 479, 172
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 1 =>
                        -- NEXT_STATE Wait (23,22) at 408, 282
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 2 =>
                        -- NEXT_STATE Running (27,22) at 524, 282
                        trId := -1;
                        ctxt.state := Running;
                        goto next_transition;
                    when 3 =>
                        -- readStabilizerSendThrust(droneData,sensorData) (34,17)
                        RIÜreadStabilizerSendThrust(ctxt.droneData'Access, ctxt.sensorData'Access);
                        -- displaySensor(sensorData) (36,17)
                        RIÜdisplaySensor(ctxt.sensorData'Access);
                        -- NEXT_STATE Running (38,22) at 763, 327
                        trId := -1;
                        ctxt.state := Running;
                        goto next_transition;
                    when 4 =>
                        -- NEXT_STATE Wait (42,22) at 1005, 217
                        trId := -1;
                        ctxt.state := Wait;
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