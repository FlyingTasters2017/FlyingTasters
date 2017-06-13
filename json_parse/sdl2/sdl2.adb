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

package body sdl2 is
    type States is (running, wait);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
        y : aliased asn1SccMyReal;
        x : aliased asn1SccMyReal;
        a : aliased asn1SccMyInteger;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 5;
    procedure runTransition(Id: Integer);
    procedure test(a: access asn1SccMyInteger) is
        begin
            case ctxt.state is
                when running =>
                    ctxt.a := a.all;
                    runTransition(2);
                when wait =>
                    ctxt.a := a.all;
                    runTransition(4);
                when others =>
                    runTransition(CS_Only);
            end case;
        end test;
        

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
        

    procedure runTransition(Id: Integer) is
        trId : Integer := Id;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- NEXT_STATE Wait (12,18) at 320, 60
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 1 =>
                        -- getPixyData(x,y) (18,17)
                        RIÜgetPixyData(ctxt.x'Access, ctxt.y'Access);
                        -- sendY(y) (20,19)
                        RIÜsendY(ctxt.y'Access);
                        -- sendX(x) (22,19)
                        RIÜsendX(ctxt.x'Access);
                        -- NEXT_STATE Running (24,22) at 479, 294
                        trId := -1;
                        ctxt.state := Running;
                        goto next_transition;
                    when 2 =>
                        -- NEXT_STATE Wait (28,22) at 586, 134
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 3 =>
                        -- NEXT_STATE Wait (35,22) at 275, 170
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 4 =>
                        -- NEXT_STATE Running (39,22) at 365, 170
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
end sdl2;