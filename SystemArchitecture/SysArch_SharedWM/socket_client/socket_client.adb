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

package body socket_client is
    type States is (wait);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
        raw_asd : aliased asn1SccMyInteger;
        control_data : aliased asn1SccMyInteger;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 2;
    procedure runTransition(Id: Integer);
    procedure send_control_data(control_input: access asn1SccMyInteger) is
        begin
            case ctxt.state is
                when wait =>
                    ctxt.control_data := control_input.all;
                    runTransition(1);
                when others =>
                    runTransition(CS_Only);
            end case;
        end send_control_data;
        

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
                        -- talk_with_drone(control_data,raw_asd) (18,17)
                        RIÜtalk_with_drone(ctxt.control_data'Access, ctxt.raw_asd'Access);
                        -- put_raw_asd(raw_asd) (20,19)
                        RIÜput_raw_asd(ctxt.raw_asd'Access);
                        -- NEXT_STATE wait (22,22) at 320, 280
                        trId := -1;
                        ctxt.state := wait;
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
end socket_client;