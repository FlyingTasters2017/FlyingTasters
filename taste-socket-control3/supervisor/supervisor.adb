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
        n : aliased asn1SccMyInteger;
        dronedata : aliased asn1SccMyDroneData;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 4;
    procedure runTransition(Id: Integer);
    procedure pulse is
        begin
            case ctxt.state is
                when running =>
                    runTransition(2);
                when wait =>
                    runTransition(1);
                when others =>
                    runTransition(CS_Only);
            end case;
        end pulse;
        

    procedure pixyPulse is
        begin
            case ctxt.state is
                when running =>
                    runTransition(3);
                when wait =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end pixyPulse;
        

    procedure runTransition(Id: Integer) is
        trId : Integer := Id;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- writeln('SDL Startup') (13,13)
                        Put("SDL Startup");
                        New_Line;
                        -- NEXT_STATE Wait (15,18) at 349, 182
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 1 =>
                        -- writeln('Stuck Here_ Tag1 ') (21,17)
                        Put("Stuck Here_ Tag1 ");
                        New_Line;
                        -- n:=0 (23,17)
                        ctxt.n := Asn1Int(0);
                        -- NEXT_STATE Running (25,22) at 91, 397
                        trId := -1;
                        ctxt.state := Running;
                        goto next_transition;
                    when 2 =>
                        -- n :=n+1 (32,17)
                        ctxt.n := Asn1Int((ctxt.n + 1));
                        -- write('n=',n) (34,17)
                        Put("n=");
                        Put(Asn1Int'Image(ctxt.n));
                        -- takeoff(droneData) (36,17)
                        RIÜtakeoff(ctxt.droneData'Access);
                        -- readStabilizerSendThrust(droneData,sensorData) (38,17)
                        RIÜreadStabilizerSendThrust(ctxt.droneData'Access, ctxt.sensorData'Access);
                        -- writeln('read done') (40,17)
                        Put("read done");
                        New_Line;
                        -- displaySensor(sensorData) (42,17)
                        RIÜdisplaySensor(ctxt.sensorData'Access);
                        -- writeln('display done') (44,17)
                        Put("display done");
                        New_Line;
                        -- NEXT_STATE Running (46,22) at 654, 594
                        trId := -1;
                        ctxt.state := Running;
                        goto next_transition;
                    when 3 =>
                        -- rawdata (50,17)
                        RIÜrawdata;
                        -- NEXT_STATE Running (52,22) at 1018, 272
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