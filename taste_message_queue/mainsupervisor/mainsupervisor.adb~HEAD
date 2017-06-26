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

package body mainsupervisor is
    type States is (running, wait);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
        tm_data : aliased asn1SccTM_T;
        tc_data : aliased asn1SccTC_T;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 6;
    procedure runTransition(Id: Integer);
    procedure pulse is
        begin
            case ctxt.state is
                when running =>
                    runTransition(2);
                when wait =>
                    runTransition(4);
                when others =>
                    runTransition(CS_Only);
            end case;
        end pulse;
        

    procedure takeoff(tc_data: access asn1SccTC_T) is
        begin
            case ctxt.state is
                when running =>
                    ctxt.tc_data := tc_data.all;
                    runTransition(1);
                when wait =>
                    ctxt.tc_data := tc_data.all;
                    runTransition(5);
                when others =>
                    runTransition(CS_Only);
            end case;
        end takeoff;
        

    procedure TM_from_CF(tm_data: access asn1SccTM_T) is
        begin
            case ctxt.state is
                when running =>
                    ctxt.tm_data := tm_data.all;
                    runTransition(3);
                when wait =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end TM_from_CF;
        

    procedure runTransition(Id: Integer) is
        trId : Integer := Id;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- writeln('SDL started') (12,13)
                        Put("SDL started");
                        New_Line;
                        -- NEXT_STATE Wait (14,18) at 183, 161
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 1 =>
                        -- TC_from_TASTE(tc_data) (23,17)
                        RIÜTC_from_TASTE(ctxt.tc_data'Access);
                        -- NEXT_STATE Running (25,22) at 515, 274
                        trId := -1;
                        ctxt.state := Running;
                        goto next_transition;
                    when 2 =>
                        -- TC_from_TASTE(tc_data) (29,17)
                        RIÜTC_from_TASTE(ctxt.tc_data'Access);
                        -- NEXT_STATE Running (31,22) at 921, 277
                        trId := -1;
                        ctxt.state := Running;
                        goto next_transition;
                    when 3 =>
                        -- displayData(tm_data) (35,19)
                        RIÜdisplayData(ctxt.tm_data'Access);
                        -- NEXT_STATE Running (37,22) at 718, 274
                        trId := -1;
                        ctxt.state := Running;
                        goto next_transition;
                    when 4 =>
                        -- writeln('waithingg a signal') (44,17)
                        Put("waithingg a signal");
                        New_Line;
                        -- NEXT_STATE Wait (46,22) at 85, 314
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 5 =>
                        -- TC_from_TASTE(tc_data) (50,17)
                        RIÜTC_from_TASTE(ctxt.tc_data'Access);
                        -- writeln('Takeoff data send') (52,17)
                        Put("Takeoff data send");
                        New_Line;
                        -- NEXT_STATE Running (54,22) at 287, 364
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
end mainsupervisor;