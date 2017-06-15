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
                        -- NEXT_STATE Wait (15,18) at 426, 172
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 1 =>
                        -- writeln('I am Pixycam') (21,17)
                        Put("I am Pixycam");
                        New_Line;
                        -- rawdata (23,17)
                        RIÜrawdata;
                        -- n :=n+1 (25,17)
                        ctxt.n := Asn1Int((ctxt.n + 1));
                        -- write('n=',n) (27,17)
                        Put("n=");
                        Put(Asn1Int'Image(ctxt.n));
                        -- readStabilizerSendThrust(droneData,sensorData) (29,17)
                        RIÜreadStabilizerSendThrust(ctxt.droneData'Access, ctxt.sensorData'Access);
                        -- writeln('read done') (31,17)
                        Put("read done");
                        New_Line;
                        -- displaySensor(sensorData) (33,17)
                        RIÜdisplaySensor(ctxt.sensorData'Access);
                        -- writeln('display done') (35,17)
                        Put("display done");
                        New_Line;
                        -- NEXT_STATE Running (37,22) at 699, 644
                        trId := -1;
                        ctxt.state := Running;
                        goto next_transition;
                    when 2 =>
                        -- NEXT_STATE Wait (41,22) at 942, 219
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 3 =>
                        -- writeln('Stuck Here_ Tag1 ') (48,17)
                        Put("Stuck Here_ Tag1 ");
                        New_Line;
                        -- NEXT_STATE Wait (50,22) at 267, 332
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 4 =>
                        -- writeln('I have sent sth') (54,17)
                        Put("I have sent sth");
                        New_Line;
                        -- n:=0 (56,17)
                        ctxt.n := Asn1Int(0);
                        -- NEXT_STATE Running (58,22) at 467, 386
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