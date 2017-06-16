-- User implementation of the drone function
-- This file will never be overwritten once edited and modified
-- Only the interface of functions is regenerated (in the .ads file)

pragma style_checks (off);
pragma warnings (off);

with Ada.Real_Time;
use Ada.Real_Time;

with Config;
use Config;

with Crazyflie_System;
use Crazyflie_System;
with Commander;
use Commander;
with Types;
use Types;
with Stabilizer; use Stabilizer;
with STM32.Board; use STM32.Board;
with Motors;
use Motors;


package body drone is

	---------------------------------------------------------
	-- Provided interface "System_startup"
	---------------------------------------------------------
--	procedure System_startup is
--	pragma suppress (all_checks);
--	begin
--
--		-- System initialization
--		null;
--
--    end System_startup;

    ---------------------------------------------------------
	-- Provided interface "Take_Off"
	---------------------------------------------------------
	procedure Take_Off(Thrust: access asn1sccT_UInt32) is
        pragma suppress (all_checks);

        ------------------------------
        -- CRTP_Append_T_Degrees_Data --
        ------------------------------

        -------------------------------
        -- CRTP_Append_T_Uint32_Data --
        -------------------------------

        -- Define packet handler
        --Packet_Handler : CRTP_Packet_Handler;

        -- Define packet
        --Packet : CRTP_Packet;

        type General_Pointer  is access all asn1sccT_UInt32;

        -- Boolean control value
        Has_Succeed : boolean := false;

        -- Define positions and thrust to send
        Roll   : T_Degrees := 0.0;
        Pitch  : T_Degrees := 0.0;
      Yaw    : T_Degrees := 0.0;
      Thrust1   : T_Uint16 := 1000;
        --Tmp: aliased asn1sccT_UInt32 := 1000;
        --Thrust_Pointer : General_Pointer := Tmp'Access;
        -- Thrust := 1000.0;



	begin
        Motor_Set_Power (MOTOR_M1, T_Uint16(Thrust.all));
           Motor_Set_Power (MOTOR_M2, T_Uint16(Thrust.all));
           Motor_Set_Power (MOTOR_M3, T_Uint16(Thrust.all));
           Motor_Set_Power (MOTOR_M4, T_Uint16(Thrust.all));
        -- Create the packet handler
        --Packet_Handler := CRTP_Create_Packet(CRTP_PORT_COMMANDER, 0);

        -- Append data to the paquet
        --CRTP_Append_T_Degrees_Data(Packet_Handler, Roll, Has_Succeed);
        --CRTP_Append_T_Degrees_Data(Packet_Handler, Pitch, Has_Succeed);
        --CRTP_Append_T_Degrees_Data(Packet_Handler, Yaw, Has_Succeed);
        --CRTP_Append_T_Uint32_Data(Packet_Handler, Thrust.all, Has_Succeed);

        -- Get Packet from Handler
        --Packet := CRTP_Get_Packet_From_Handler(Packet_Handler);

        -- Then call the commander callback (hack) and see if the thrust is set
        --Commander_CRTP_Handler(Packet);

    end Take_Off;

    ---------------------------------------------------------
	-- Provided interface "Land"
	---------------------------------------------------------
	procedure Land is
        pragma suppress (all_checks);

        -- Define Taste type access
        type General_Pointer  is access all asn1sccT_UInt32;

        -- Set thrust to zero
        Thrust: aliased asn1sccT_UInt32 := 0;

        -- Define thrust pointer
        Thrust_Pointer : General_Pointer := Thrust'Access; -- Read & write

	begin

        -- Landing is like taking-off, only a matter of thrust (= 0)
        Take_Off(Thrust_Pointer);

    end Land;

    Self_Test_Passed : Boolean;

    count : T_Uint32 := 0;


    ---------------------------------------------------------
	-- Provided interface "System_Loop"
	---------------------------------------------------------
    procedure System_Loop is

        --Attitude_Update_Counter : T_Uint16 := 0;
      Alt_Hold_Update_Counter : T_Uint32 := 0;
      Thrust: aliased asn1sccT_UInt32 := 10000;
      type General_Pointer  is access all asn1sccT_UInt32;

        -- Define thrust pointer
        Thrust_Pointer : General_Pointer := Thrust'Access; -- Read & write

    begin


        --Stabilizer control called every 2 ms
      if count > 0 then
         Thrust := 10000;

            --All_leds_on;
      end if;
      Take_Off(Thrust_Pointer);

	--if count = 500 then
            --All_leds_off;
            --count := 0;
        --end if;

        count := count + 1;

    end System_Loop;

begin

    --  System initialization
    System_Init;
    System_Loop;
   ---Take_Off(100);
    --  See if we pass the self test
 --   Self_Test_Passed := System_Self_Test;

    --  Start the main loop if the self test passed
    --System_Loop;

end drone;
