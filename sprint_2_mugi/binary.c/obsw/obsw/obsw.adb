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
    type States is (running, wait);
    type ctxt_Ty is
        record
        state : States;
        initDone : Boolean := False;
        states : aliased asn1SccMyStates;
        trajectory : aliased asn1SccMyTrajectory;
        pwm : aliased asn1SccMyPWM;
    end record;
    ctxt: aliased ctxt_Ty;
    CS_Only  : constant Integer := 5;
    procedure runTransition(Id: Integer);
    procedure Takeoff(Trajectory: access asn1SccMyTrajectory) is
        begin
            case ctxt.state is
                when running =>
                    ctxt.trajectory := Trajectory.all;
                    runTransition(2);
                when wait =>
                    ctxt.trajectory := Trajectory.all;
                    runTransition(4);
                when others =>
                    runTransition(CS_Only);
            end case;
        end Takeoff;
        

    procedure Pulse is
        begin
            case ctxt.state is
                when running =>
                    runTransition(1);
                when wait =>
                    runTransition(3);
                when others =>
                    runTransition(CS_Only);
            end case;
        end Pulse;
        

    procedure runTransition(Id: Integer) is
        trId : Integer := Id;
        tmp14 : aliased asn1SccMyReal;
        begin
            while (trId /= -1) loop
                case trId is
                    when 0 =>
                        -- writeln('SDL startup') (11,13)
                        Put("SDL startup");
                        New_Line;
                        -- NEXT_STATE Wait (13,18) at 834, 180
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 1 =>
                        -- Compute_PWM(Trajectory, States, PWM) (19,17)
                        RIÜCompute_PWM(ctxt.Trajectory'Access, ctxt.States'Access, ctxt.PWM'Access);
                        -- Respond_state(PWM, States) (21,17)
                        RIÜRespond_state(ctxt.PWM'Access, ctxt.States'Access);
                        -- GetHeight(States.z) (23,19)
                        tmp14 := ctxt.States.z;
                        RIÜGetHeight(tmp14'Access);
                        -- NEXT_STATE Running (25,22) at 1091, 361
                        trId := -1;
                        ctxt.state := Running;
                        goto next_transition;
                    when 2 =>
                        -- NEXT_STATE wait (29,22) at 1304, 201
                        trId := -1;
                        ctxt.state := wait;
                        goto next_transition;
                    when 3 =>
                        -- NEXT_STATE Wait (36,22) at 764, 290
                        trId := -1;
                        ctxt.state := Wait;
                        goto next_transition;
                    when 4 =>
                        -- NEXT_STATE Running (40,22) at 878, 290
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
end obsw;