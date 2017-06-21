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

package body houston is
    type States is (running, wait);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
        user_input : aliased asn1SccMyInteger;
        control_input : aliased asn1SccDroneControllerInput;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 5;
    procedure runTransition(Id: Integer);
    procedure comm_clock is
        begin
            case ctxt.state is
                when running =>
                    runTransition(2);
                when wait =>
                    runTransition(3);
                when others =>
                    runTransition(CS_Only);
            end case;
        end comm_clock;
        

    procedure talk_with_Houston(sysSV_to_Houston_events: access asn1SccMyInteger) is
        begin
            case ctxt.state is
                when running =>
                    ctxt.user_input := sysSV_to_Houston_events.all;
                    runTransition(1);
                when wait =>
                    ctxt.user_input := sysSV_to_Houston_events.all;
                    runTransition(4);
                when others =>
                    runTransition(CS_Only);
            end case;
        end talk_with_Houston;
        

    procedure runTransition(Id: Integer) is
        trId : Integer := Id;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- NEXT_STATE Wait (13,18) at 221, 60
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 1 =>
                        -- DECISION user_input (-1,-1)
                        -- ANSWER /=1 (21,17)
                        if (ctxt.user_input) /= 1 then
                            -- NEXT_STATE wait (23,30) at 438, 276
                            trId := -1;
                            ctxt.state := wait;
                            goto next_transition;
                            -- ANSWER =1 (25,17)
                        elsif (ctxt.user_input) = 1 then
                            -- NEXT_STATE running (27,30) at 526, 276
                            trId := -1;
                            ctxt.state := running;
                            goto next_transition;
                        end if;
                    when 2 =>
                        -- get_control_data(control_input) (32,17)
                        RIÜget_control_data(ctxt.control_input'Access);
                        -- send_control_data(control_input) (34,19)
                        RIÜsend_control_data(ctxt.control_input'Access);
                        -- store_control_data(control_input) (36,17)
                        RIÜstore_control_data(ctxt.control_input'Access);
                        -- NEXT_STATE running (38,22) at 727, 323
                        trId := -1;
                        ctxt.state := running;
                        goto next_transition;
                    when 3 =>
                        -- NEXT_STATE wait (45,22) at 102, 170
                        trId := -1;
                        ctxt.state := wait;
                        goto next_transition;
                    when 4 =>
                        -- DECISION user_input (-1,-1)
                        -- ANSWER /=1 (51,17)
                        if (ctxt.user_input) /= 1 then
                            -- NEXT_STATE wait (53,30) at 221, 283
                            trId := -1;
                            ctxt.state := wait;
                            goto next_transition;
                            -- ANSWER =1 (55,17)
                        elsif (ctxt.user_input) = 1 then
                            -- NEXT_STATE running (57,30) at 311, 283
                            trId := -1;
                            ctxt.state := running;
                            goto next_transition;
                        end if;
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
end houston;