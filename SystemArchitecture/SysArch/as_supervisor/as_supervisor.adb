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

package body as_supervisor is
    type States is (running, wait);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
        proc_asd_data : aliased asn1SccMyInteger;
        raw_asd_data : aliased asn1SccMyInteger;
        user_input : aliased asn1SccMyInteger;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 4;
    procedure runTransition(Id: Integer);
    procedure put_raw_ASD(raw_ASD: access asn1SccMyInteger) is
        begin
            case ctxt.state is
                when running =>
                    ctxt.raw_asd_data := raw_ASD.all;
                    runTransition(2);
                when wait =>
                    runTransition(CS_Only);
                when others =>
                    runTransition(CS_Only);
            end case;
        end put_raw_ASD;
        

    procedure talk_with_ASSV(sysSV_to_ASSV_events: access asn1SccMyInteger) is
        begin
            case ctxt.state is
                when running =>
                    ctxt.user_input := sysSV_to_ASSV_events.all;
                    runTransition(1);
                when wait =>
                    ctxt.user_input := sysSV_to_ASSV_events.all;
                    runTransition(3);
                when others =>
                    runTransition(CS_Only);
            end case;
        end talk_with_ASSV;
        

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
                        -- DECISION user_input (-1,-1)
                        -- ANSWER /=1 (21,17)
                        if (ctxt.user_input) /= 1 then
                            -- NEXT_STATE wait (23,30) at 475, 288
                            trId := -1;
                            ctxt.state := wait;
                            goto next_transition;
                            -- ANSWER =1 (25,17)
                        elsif (ctxt.user_input) = 1 then
                            -- NEXT_STATE running (27,30) at 565, 288
                            trId := -1;
                            ctxt.state := running;
                            goto next_transition;
                        end if;
                    when 2 =>
                        -- process_ASD(raw_ASD_data,proc_ASD_data) (32,17)
                        RIÜprocess_ASD(ctxt.raw_ASD_data'Access, ctxt.proc_ASD_data'Access);
                        -- store_ASD(proc_ASD_data) (34,17)
                        RIÜstore_ASD(ctxt.proc_ASD_data'Access);
                        -- NEXT_STATE running (36,22) at 770, 280
                        trId := -1;
                        ctxt.state := running;
                        goto next_transition;
                    when 3 =>
                        -- DECISION user_input (-1,-1)
                        -- ANSWER /=1 (45,17)
                        if (ctxt.user_input) /= 1 then
                            -- NEXT_STATE wait (47,30) at 275, 283
                            trId := -1;
                            ctxt.state := wait;
                            goto next_transition;
                            -- ANSWER =1 (49,17)
                        elsif (ctxt.user_input) = 1 then
                            -- NEXT_STATE running (51,30) at 365, 283
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
end as_supervisor;