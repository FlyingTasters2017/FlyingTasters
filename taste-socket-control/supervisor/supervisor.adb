-- This file was generated automatically: DO NOT MODIFY IT !

with System.IO;
use System.IO;

with Ada.Unchecked_Conversion;
with Ada.Numerics.Generic_Elementary_Functions;

with TASTE_BasicTypes;
use TASTE_BasicTypes;
with TASTE_Dataview;
use TASTE_Dataview;
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
        

    procedure takeoff(droneData: access asn1SccMyDroneData) is
        begin
            case ctxt.state is
                when running =>
                    ctxt.dronedata := droneData.all;
                    runTransition(2);
                when wait =>
                    ctxt.dronedata := droneData.all;
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
                        -- n :=n+1 (21,17)
                        ctxt.n := Asn1Int((ctxt.n + 1));
                        -- write('n=',n) (23,17)
                        Put("n=");
                        Put(Asn1Int'Image(ctxt.n));
                        -- readStabilizerSendThrust(droneData,sensorData) (25,17)
                        RIÜreadStabilizerSendThrust(ctxt.droneData'Access, ctxt.sensorData'Access);
                        -- writeln('read done') (27,17)
                        Put("read done");
                        New_Line;
                        -- displaySensor(sensorData) (29,17)
                        RIÜdisplaySensor(ctxt.sensorData'Access);
                        -- writeln('display done') (31,17)
                        Put("display done");
                        New_Line;
                        -- NEXT_STATE Running (33,22) at 758, 547
                        trId := -1;
                        ctxt.state := Running;
                        goto next_transition;
                    when 2 =>
                        -- NEXT_STATE Wait (37,22) at 1005, 217
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 3 =>
                        -- NEXT_STATE Wait (47,22) at 408, 282
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 4 =>
                        -- n:=0 (51,17)
                        ctxt.n := Asn1Int(0);
                        -- NEXT_STATE Running (53,22) at 524, 332
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