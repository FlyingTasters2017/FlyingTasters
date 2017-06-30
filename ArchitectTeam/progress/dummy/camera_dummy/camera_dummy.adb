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

package body camera_dummy is
    type States is (running);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
        camera_data : aliased asn1SccMyInteger;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 2;
    procedure runTransition(Id: Integer);
    procedure cam_clock is
        begin
            case ctxt.state is
                when running =>
                    runTransition(1);
                when others =>
                    runTransition(CS_Only);
            end case;
        end cam_clock;
        

    procedure runTransition(Id: Integer) is
        trId : Integer := Id;
        tmp3 : aliased asn1SccMyInteger;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- NEXT_STATE running (11,18) at 320, 60
                        trId := -1;
                        ctxt.state := running;
                        goto next_transition;
                    when 1 =>
                        -- writeln('cam clock') (17,17)
                        Put("cam clock");
                        New_Line;
                        -- put_camera_data(1) (19,19)
                        tmp3 := Asn1Int(1);
                        RIÜput_camera_data(tmp3'Access);
                        -- NEXT_STATE running (21,22) at 319, 275
                        trId := -1;
                        ctxt.state := running;
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
end camera_dummy;