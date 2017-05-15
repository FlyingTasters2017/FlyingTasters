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

package body obsw is
    type States is (running, wait);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
        h : aliased asn1SccMyReal;
        f : aliased asn1SccMyReal;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 5;
    procedure runTransition(Id: Integer);
    procedure Pulse is
        begin
            case ctxt.state is
                when running =>
                    runTransition(1);
                when wait =>
                    runTransition(3);
                when others =>
                    runTransition(CS_Only);
            end case;
        end Pulse;
        

    procedure Start_work(Int_F: access asn1SccMyReal) is
        begin
            case ctxt.state is
                when running =>
                    ctxt.f := Int_F.all;
                    runTransition(2);
                when wait =>
                    ctxt.f := Int_F.all;
                    runTransition(4);
                when others =>
                    runTransition(CS_Only);
            end case;
        end Start_work;
        

    procedure runTransition(Id: Integer) is
        trId : Integer := Id;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- writeln('SDL startup') (11,13)
                        Put("SDL startup");
                        New_Line;
                        -- NEXT_STATE Wait (13,18) at 457, 153
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 1 =>
                        -- Compute_Thrust(F,h) (19,17)
                        RIÜCompute_Thrust(ctxt.F'Access, ctxt.h'Access);
                        -- Thrust_Update(h) (21,19)
                        RIÜThrust_Update(ctxt.h'Access);
                        -- NEXT_STATE Running (23,22) at 707, 303
                        trId := -1;
                        ctxt.state := Running;
                        goto next_transition;
                    when 2 =>
                        -- NEXT_STATE Wait (27,22) at 864, 197
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 3 =>
                        -- NEXT_STATE Wait (37,22) at 399, 263
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 4 =>
                        -- NEXT_STATE Running (41,22) at 547, 265
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
end obsw;