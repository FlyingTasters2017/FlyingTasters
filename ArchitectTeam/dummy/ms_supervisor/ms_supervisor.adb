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

package body ms_supervisor is
    type States is (wait);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
        raw_msd_value : aliased asn1SccMyInteger;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 2;
    procedure runTransition(Id: Integer);
    procedure put_raw_MSD(raw_MSD: access asn1SccMyInteger) is
        begin
            case ctxt.state is
                when wait =>
                    ctxt.raw_msd_value := raw_MSD.all;
                    runTransition(1);
                when others =>
                    runTransition(CS_Only);
            end case;
        end put_raw_MSD;
        

    procedure runTransition(Id: Integer) is
        trId : Integer := Id;
        tmp5 : aliased asn1SccMyInteger;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- NEXT_STATE Wait (11,18) at 320, 60
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 1 =>
                        -- writeln('put raw MSD') (17,17)
                        Put("put raw MSD");
                        New_Line;
                        -- store_MSD(raw_msd_value+1) (19,19)
                        tmp5 := Asn1Int((ctxt.raw_msd_value + 1));
                        RIÜstore_MSD(tmp5'Access);
                        -- NEXT_STATE wait (21,22) at 320, 280
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
end ms_supervisor;