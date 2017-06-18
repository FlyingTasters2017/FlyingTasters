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
    CS_Only  : constant Integer := 3;
    procedure runTransition(Id: Integer);
    procedure pulse is
        begin
            case ctxt.state is
                when running =>
                    runTransition(1);
                when wait =>
                    runTransition(2);
                when others =>
                    runTransition(CS_Only);
            end case;
        end pulse;
        

    procedure runTransition(Id: Integer) is
        trId : Integer := Id;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- writeln('SDL Startup') (13,13)
                        Put("SDL Startup");
                        New_Line;
                        -- NEXT_STATE Wait (15,18) at 319, 177
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 1 =>
                        -- writeln('Starting cycle') (21,17)
                        Put("Starting cycle");
                        New_Line;
                        -- printTime (23,17)
                        RIÜprintTime;
                        -- n :=n+1 (25,17)
                        ctxt.n := Asn1Int((ctxt.n + 1));
                        -- write('Cycle number= ',n) (27,17)
                        Put("Cycle number= ");
                        Put(Asn1Int'Image(ctxt.n));
                        -- takeoff(droneData) (29,17)
                        RIÜtakeoff(ctxt.droneData'Access);
                        -- readStabilizerSendThrust(droneData,sensorData) (31,17)
                        RIÜreadStabilizerSendThrust(ctxt.droneData'Access, ctxt.sensorData'Access);
                        -- writeln('Drone data read/send done') (33,17)
                        Put("Drone data read/send done");
                        New_Line;
                        -- printTime (35,17)
                        RIÜprintTime;
                        -- writeln('Waiting for the next pulse') (37,17)
                        Put("Waiting for the next pulse");
                        New_Line;
                        -- NEXT_STATE Running (39,22) at 663, 708
                        trId := -1;
                        ctxt.state := Running;
                        goto next_transition;
                    when 2 =>
                        -- writeln('Stuck Here_ Tag1 ') (46,17)
                        Put("Stuck Here_ Tag1 ");
                        New_Line;
                        -- n:=0 (48,17)
                        ctxt.n := Asn1Int(0);
                        -- NEXT_STATE Running (50,22) at 61, 392
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