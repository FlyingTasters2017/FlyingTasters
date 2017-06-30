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

package body system_supervisor is
    type States is (running, wait);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
        msd_storage : aliased asn1SccMyInteger;
        user_input : aliased asn1SccMyInteger;
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
        tmp7 : aliased asn1SccMyInteger;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- NEXT_STATE Wait (13,18) at 320, 60
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 1 =>
                        -- NEXT_STATE wait (19,22) at 568, 164
                        trId := -1;
                        ctxt.state := wait;
                        goto next_transition;
                    when 2 =>
                        -- get_MSD_storage(msd_storage) (23,17)
                        RIÜget_MSD_storage(ctxt.msd_storage'Access);
                        -- get_ASD_storage(asd_storage) (25,17)
                        RIÜget_ASD_storage(ctxt.asd_storage'Access);
                        -- update_GUI(msd_storage+asd_storage) (27,19)
                        tmp7 := Asn1Int((ctxt.msd_storage + ctxt.asd_storage));
                        RIÜupdate_GUI(tmp7'Access);
                        -- NEXT_STATE running (29,22) at 801, 324
                        trId := -1;
                        ctxt.state := running;
                        goto next_transition;
                    when 3 =>
                        -- NEXT_STATE wait (36,22) at 248, 170
                        trId := -1;
                        ctxt.state := wait;
                        goto next_transition;
                    when 4 =>
                        -- NEXT_STATE running (40,22) at 384, 171
                        trId := -1;
                        ctxt.state := running;
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
end system_supervisor;