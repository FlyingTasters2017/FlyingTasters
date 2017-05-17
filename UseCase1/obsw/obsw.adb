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

package body obsw is
    type States is (wait, runing);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
        referenceheight : aliased asn1SccMyReal;
        heightvelocity : aliased asn1SccMyReal;
        force : aliased asn1SccMyReal;
        height : aliased asn1SccMyReal;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 5;
    procedure runTransition(Id: Integer);
    procedure Pulse is
        begin
            case ctxt.state is
                when runing =>
                    runTransition(1);
                when wait =>
                    runTransition(3);
                when others =>
                    runTransition(CS_Only);
            end case;
        end Pulse;
        

    procedure Takeoff(ReferenceHeight: access asn1SccMyReal) is
        begin
            case ctxt.state is
                when runing =>
                    ctxt.referenceheight := ReferenceHeight.all;
                    runTransition(2);
                when wait =>
                    ctxt.referenceheight := ReferenceHeight.all;
                    runTransition(4);
                when others =>
                    runTransition(CS_Only);
            end case;
        end Takeoff;
        

    procedure runTransition(Id: Integer) is
        trId : Integer := Id;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- writeln('SDL startup') (11,13)
                        Put("SDL startup");
                        New_Line;
                        -- NEXT_STATE Wait (13,18) at 763, 171
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 1 =>
                        -- Compute_Force(ReferenceHeight,HeightVelocity,Height,Force) (19,17)
                        RIÜCompute_Force(ctxt.ReferenceHeight'Access, ctxt.HeightVelocity'Access, ctxt.Height'Access, ctxt.Force'Access);
                        -- Response(Force,HeightVelocity,Height) (21,17)
                        RIÜResponse(ctxt.Force'Access, ctxt.HeightVelocity'Access, ctxt.Height'Access);
                        -- GetHeight(Height) (23,19)
                        RIÜGetHeight(ctxt.Height'Access);
                        -- NEXT_STATE Runing (25,22) at 1121, 380
                        trId := -1;
                        ctxt.state := Runing;
                        goto next_transition;
                    when 2 =>
                        -- NEXT_STATE Wait (29,22) at 1433, 203
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 3 =>
                        -- NEXT_STATE Wait (39,22) at 668, 282
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 4 =>
                        -- NEXT_STATE Runing (43,22) at 807, 281
                        trId := -1;
                        ctxt.state := Runing;
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
end obsw;