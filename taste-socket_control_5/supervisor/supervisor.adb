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
    type States is (wait);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 3;
    procedure runTransition(Id: Integer);
    procedure pulse1 is
        begin
            case ctxt.state is
                when wait =>
                    runTransition(1);
                when others =>
                    runTransition(CS_Only);
            end case;
        end pulse1;
        

    procedure pulse2 is
        begin
            case ctxt.state is
                when wait =>
                    runTransition(2);
                when others =>
                    runTransition(CS_Only);
            end case;
        end pulse2;
        

    procedure runTransition(Id: Integer) is
        trId : Integer := Id;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- NEXT_STATE Wait (6,18) at 320, 60
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 1 =>
                        -- talk_with_MSSV (12,19)
                        RIÜtalk_with_MSSV;
                        -- NEXT_STATE - (14,22) at 206, 225
                        trId := -1;
                        goto next_transition;
                    when 2 =>
                        -- talk_with_ASSV (18,19)
                        RIÜtalk_with_ASSV;
                        -- NEXT_STATE - (20,22) at 334, 225
                        trId := -1;
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