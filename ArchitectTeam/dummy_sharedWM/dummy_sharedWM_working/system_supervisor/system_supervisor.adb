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

package body system_supervisor is
    type States is (running, wait);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
        user_input : aliased asn1SccMyInteger;
        control_input : aliased asn1SccMyInteger;
        world_safety_events : aliased asn1SccMyInteger;
        control_error : aliased asn1SccMyInteger;
        proc_world_data : aliased asn1SccMyInteger;
        raw_world_data : aliased asn1SccMyInteger;
        msd_storage : aliased asn1SccMyInteger;
        asd_storage : aliased asn1SccMyInteger;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 5;
    procedure runTransition(Id: Integer);
    procedure update_clock is
        begin
            case ctxt.state is
                when running =>
                    runTransition(2);
                when wait =>
                    runTransition(3);
                when others =>
                    runTransition(CS_Only);
            end case;
        end update_clock;
        

    procedure set_user_input(user_input: access asn1SccMyInteger) is
        begin
            case ctxt.state is
                when running =>
                    ctxt.user_input := user_input.all;
                    runTransition(1);
                when wait =>
                    ctxt.user_input := user_input.all;
                    runTransition(4);
                when others =>
                    runTransition(CS_Only);
            end case;
        end set_user_input;
        

    procedure runTransition(Id: Integer) is
        trId : Integer := Id;
        tmp33 : aliased asn1SccMyInteger;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- NEXT_STATE Wait (18,18) at 215, 60
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 1 =>
                        -- DECISION user_input (-1,-1)
                        -- ANSWER /=1 (26,17)
                        if (ctxt.user_input) /= 1 then
                            -- talk_with_Houston(user_input) (28,27)
                            RIÜtalk_with_Houston(ctxt.user_input'Access);
                            -- talk_with_MSSV(user_input) (30,27)
                            RIÜtalk_with_MSSV(ctxt.user_input'Access);
                            -- talk_with_ASSV(user_input) (32,27)
                            RIÜtalk_with_ASSV(ctxt.user_input'Access);
                            -- NEXT_STATE wait (34,30) at 554, 414
                            trId := -1;
                            ctxt.state := wait;
                            goto next_transition;
                            -- ANSWER =1 (36,17)
                        elsif (ctxt.user_input) = 1 then
                            -- NEXT_STATE running (38,30) at 693, 259
                            trId := -1;
                            ctxt.state := running;
                            goto next_transition;
                        end if;
                    when 2 =>
                        -- update_world_data(proc_world_data) (43,17)
                        RIÜupdate_world_data(ctxt.proc_world_data'Access);
                        -- check_mission_safety(proc_world_data,world_safety_events) (45,17)
                        RIÜcheck_mission_safety(ctxt.proc_world_data'Access, ctxt.world_safety_events'Access);
                        -- writeln('choose trajectory') (47,17)
                        Put("choose trajectory");
                        New_Line;
                        -- choose_trajectory(proc_world_data,world_safety_events,control_error) (49,17)
                        RIÜchoose_trajectory(ctxt.proc_world_data'Access, ctxt.world_safety_events'Access, ctxt.control_error'Access);
                        -- writeln('calc control_input') (51,17)
                        Put("calc control_input");
                        New_Line;
                        -- calculate_control_input(control_error) (53,17)
                        RIÜcalculate_control_input(ctxt.control_error'Access);
                        -- writeln('updata GU') (55,17)
                        Put("updata GU");
                        New_Line;
                        -- update_GUI(msd_storage+asd_storage) (57,19)
                        tmp33 := Asn1Int((ctxt.msd_storage + ctxt.asd_storage));
                        RIÜupdate_GUI(tmp33'Access);
                        -- writeln('end sysSV') (59,17)
                        Put("end sysSV");
                        New_Line;
                        -- NEXT_STATE running (61,22) at 969, 617
                        trId := -1;
                        ctxt.state := running;
                        goto next_transition;
                    when 3 =>
                        -- NEXT_STATE wait (68,22) at 109, 170
                        trId := -1;
                        ctxt.state := wait;
                        goto next_transition;
                    when 4 =>
                        -- DECISION user_input (-1,-1)
                        -- ANSWER /=1 (74,17)
                        if (ctxt.user_input) /= 1 then
                            -- NEXT_STATE wait (76,30) at 207, 289
                            trId := -1;
                            ctxt.state := wait;
                            goto next_transition;
                            -- ANSWER =1 (78,17)
                        elsif (ctxt.user_input) = 1 then
                            -- talk_with_Houston(user_input) (80,27)
                            RIÜtalk_with_Houston(ctxt.user_input'Access);
                            -- talk_with_MSSV(user_input) (82,27)
                            RIÜtalk_with_MSSV(ctxt.user_input'Access);
                            -- talk_with_ASSV(user_input) (84,27)
                            RIÜtalk_with_ASSV(ctxt.user_input'Access);
                            -- NEXT_STATE running (86,30) at 350, 445
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
end system_supervisor;