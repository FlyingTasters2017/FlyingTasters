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

package body ms_supervisor is
    type States is (running, wait);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
        user_input : aliased asn1SccMyInteger;
        proc_msd_data : aliased asn1SccAgent;
        raw_msd_data : aliased asn1SccPixyData;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 4;
    procedure runTransition(Id: Integer);
    procedure put_raw_MSD(raw_MSD: access asn1SccPixyData) is
        begin
            case ctxt.state is
                when running =>
                    ctxt.raw_msd_data := raw_MSD.all;
                    runTransition(2);
                when wait =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end put_raw_MSD;
        

    procedure talk_with_MSSV(sysSV_to_MSSV_events: access asn1SccMyInteger) is
        begin
            case ctxt.state is
                when running =>
                    ctxt.user_input := sysSV_to_MSSV_events.all;
                    runTransition(1);
                when wait =>
                    ctxt.user_input := sysSV_to_MSSV_events.all;
                    runTransition(3);
                when others =>
                    runTransition(CS_Only);
            end case;
        end talk_with_MSSV;
        

    procedure runTransition(Id: Integer) is
        trId : Integer := Id;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- NEXT_STATE Wait (13,18) at 320, 60
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 1 =>
                        -- enable_pixycam(user_input) (19,17)
                        RIÜenable_pixycam(ctxt.user_input'Access);
                        -- DECISION user_input (-1,-1)
                        -- ANSWER /=1 (23,17)
                        if (ctxt.user_input) /= 1 then
                            -- NEXT_STATE wait (25,30) at 552, 329
                            trId := -1;
                            ctxt.state := wait;
                            goto next_transition;
                            -- ANSWER 1 (27,17)
                        elsif (ctxt.user_input) = 1 then
                            -- NEXT_STATE running (29,30) at 693, 329
                            trId := -1;
                            ctxt.state := running;
                            goto next_transition;
                        end if;
                    when 2 =>
                        -- process_MSD(raw_msd_data,proc_msd_data) (34,17)
                        RIÜprocess_MSD(ctxt.raw_msd_data'Access, ctxt.proc_msd_data'Access);
                        -- store_MSD(proc_msd_data) (36,17)
                        RIÜstore_MSD(ctxt.proc_msd_data'Access);
                        -- NEXT_STATE running (38,22) at 887, 271
                        trId := -1;
                        ctxt.state := running;
                        goto next_transition;
                    when 3 =>
                        -- DECISION user_input (-1,-1)
                        -- ANSWER /=1 (47,17)
                        if (ctxt.user_input) /= 1 then
                            -- NEXT_STATE wait (49,30) at 275, 283
                            trId := -1;
                            ctxt.state := wait;
                            goto next_transition;
                            -- ANSWER 1 (51,17)
                        elsif (ctxt.user_input) = 1 then
                            -- NEXT_STATE running (53,30) at 367, 283
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
end ms_supervisor;