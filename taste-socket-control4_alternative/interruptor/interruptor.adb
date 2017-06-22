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

package body interruptor is
    type States is (wait);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
        onoffvalue : aliased asn1SccMyInteger;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 2;
    procedure runTransition(Id: Integer);
    procedure onOff(onoffvalue: access asn1SccMyInteger) is
        begin
            case ctxt.state is
                when wait =>
                    ctxt.onoffvalue := onoffvalue.all;
                    runTransition(1);
                when others =>
                    runTransition(CS_Only);
            end case;
        end onOff;
        

    procedure runTransition(Id: Integer) is
        trId : Integer := Id;
        tmp1 : aliased asn1SccMyInteger;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- NEXT_STATE Wait (11,18) at 320, 60
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 1 =>
                        -- startStop(0) (20,17)
                        tmp1 := Asn1Int(0);
                        RIÜstartStop(tmp1'Access);
                        -- NEXT_STATE wait (22,22) at 320, 220
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
end interruptor;