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

package body obsw is
    type States is (runing, wait);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
        h : aliased asn1SccMyReal;
        ref_h : aliased asn1SccMyReal;
        dh : aliased asn1SccMyReal;
        f : aliased asn1SccMyReal;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 5;
    procedure runTransition(Id: Integer);
    procedure Pulse is
        begin
            case ctxt.state is
                when wait =>
                    runTransition(3);
                when runing =>
                    runTransition(1);
                when others =>
                    runTransition(CS_Only);
            end case;
        end Pulse;
        

    procedure Takeoff(Ref_h: access asn1SccMyReal) is
        begin
            case ctxt.state is
                when wait =>
                    ctxt.ref_h := Ref_h.all;
                    runTransition(4);
                when runing =>
                    ctxt.ref_h := Ref_h.all;
                    runTransition(2);
                when others =>
                    runTransition(CS_Only);
            end case;
        end Takeoff;
        

    procedure runTransition(Id: Integer) is
        trId : Integer := Id;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- writeln('SDL startup') (11,13)
                        Put("SDL startup");
                        New_Line;
                        -- NEXT_STATE Wait (13,18) at 680, 171
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 1 =>
                        -- Compute_Input(Ref_h,h,dh,F) (22,17)
                        RIÜCompute_Input(ctxt.Ref_h'Access, ctxt.h'Access, ctxt.dh'Access, ctxt.F'Access);
                        -- Response(F,h,dh) (24,17)
                        RIÜResponse(ctxt.F'Access, ctxt.h'Access, ctxt.dh'Access);
                        -- Height(h) (26,19)
                        RIÜHeight(ctxt.h'Access);
                        -- NEXT_STATE Runing (28,22) at 909, 333
                        trId := -1;
                        ctxt.state := Runing;
                        goto next_transition;
                    when 2 =>
                        -- NEXT_STATE Wait (32,22) at 1075, 178
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 3 =>
                        -- NEXT_STATE Wait (39,22) at 624, 343
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 4 =>
                        -- dh :=0.0 (43,17)
                        ctxt.dh := 0.0;
                        -- h :=0.0 (45,17)
                        ctxt.h := 0.0;
                        -- F :=0.0 (47,17)
                        ctxt.F := 0.0;
                        -- NEXT_STATE Runing (49,22) at 725, 444
                        trId := -1;
                        ctxt.state := Runing;
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
end obsw;