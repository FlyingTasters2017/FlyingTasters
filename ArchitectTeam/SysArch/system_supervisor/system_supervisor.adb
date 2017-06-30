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
    procedure clock is
        begin
            case ctxt.state is
                when running =>
                    runTransition(2);
                when wait =>
                    runTransition(3);
                when others =>
                    runTransition(CS_Only);
            end case;
        end clock;
        

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
        tmp16 : aliased asn1SccMyInteger;
        tmp37 : aliased asn1SccMyInteger;
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
                            -- talk_with_MSSV(user_input) (28,27)
                            RIÜtalk_with_MSSV(ctxt.user_input'Access);
                            -- talk_with_ASSV(user_input) (30,27)
                            RIÜtalk_with_ASSV(ctxt.user_input'Access);
                            -- NEXT_STATE wait (32,30) at 530, 364
                            trId := -1;
                            ctxt.state := wait;
                            goto next_transition;
                            -- ANSWER =1 (34,17)
                        elsif (ctxt.user_input) = 1 then
                            -- NEXT_STATE running (36,30) at 670, 259
                            trId := -1;
                            ctxt.state := running;
                            goto next_transition;
                        end if;
                    when 2 =>
                        -- get_MSD_storage(msd_storage) (41,17)
                        RIÜget_MSD_storage(ctxt.msd_storage'Access);
                        -- get_ASD_storage(asd_storage) (43,17)
                        RIÜget_ASD_storage(ctxt.asd_storage'Access);
                        -- process_world_data(msd_storage+asd_storage,proc_world_data) (45,17)
                        tmp16 := Asn1Int((ctxt.msd_storage + ctxt.asd_storage));
                        RIÜprocess_world_data(tmp16'Access, ctxt.proc_world_data'Access);
                        -- check_mission_safety(proc_world_data,world_safety_events) (47,17)
                        RIÜcheck_mission_safety(ctxt.proc_world_data'Access, ctxt.world_safety_events'Access);
                        -- choose_trajectory(proc_world_data,world_safety_events,control_error) (49,17)
                        RIÜchoose_trajectory(ctxt.proc_world_data'Access, ctxt.world_safety_events'Access, ctxt.control_error'Access);
                        -- calculate_control_input(control_error,control_input) (51,17)
                        RIÜcalculate_control_input(ctxt.control_error'Access, ctxt.control_input'Access);
                        -- control_agents(control_input) (53,17)
                        RIÜcontrol_agents(ctxt.control_input'Access);
                        -- update_GUI(msd_storage+asd_storage) (55,19)
                        tmp37 := Asn1Int((ctxt.msd_storage + ctxt.asd_storage));
                        RIÜupdate_GUI(tmp37'Access);
                        -- NEXT_STATE running (57,22) at 946, 576
                        trId := -1;
                        ctxt.state := running;
                        goto next_transition;
                    when 3 =>
                        -- NEXT_STATE wait (64,22) at 109, 170
                        trId := -1;
                        ctxt.state := wait;
                        goto next_transition;
                    when 4 =>
                        -- DECISION user_input (-1,-1)
                        -- ANSWER /=1 (70,17)
                        if (ctxt.user_input) /= 1 then
                            -- NEXT_STATE wait (72,30) at 184, 289
                            trId := -1;
                            ctxt.state := wait;
                            goto next_transition;
                            -- ANSWER =1 (74,17)
                        elsif (ctxt.user_input) = 1 then
                            -- talk_with_MSSV(user_input) (76,27)
                            RIÜtalk_with_MSSV(ctxt.user_input'Access);
                            -- talk_with_ASSV(user_input) (78,27)
                            RIÜtalk_with_ASSV(ctxt.user_input'Access);
                            -- NEXT_STATE running (80,30) at 327, 395
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