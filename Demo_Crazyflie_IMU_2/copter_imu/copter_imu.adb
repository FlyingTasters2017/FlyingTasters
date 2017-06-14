-- User implementation of the copter_imu function
-- This file will never be overwritten once edited and modified
-- Only the interface of functions is regenerated (in the .ads file)

pragma style_checks (off);
pragma warnings (off);
with adaasn1rtl;
use adaasn1rtl;

with TASTE_Dataview;
use TASTE_Dataview;

with Ada.Real_Time;
use Ada.Real_Time;

with Config;
use Config;
with Crazyflie_System;
use Crazyflie_System;
with IMU;
use IMU;
with Stabilizer; use Stabilizer;

package body copter_imu is

	 --  Initialize data
    Gyro : Gyroscope_Data := (0.0, 0.0, 0.0);
    Acc : Accelerometer_Data := (0.0, 0.0, 0.0);
    Mag : Magnetometer_Data := (0.0, 0.0, 0.0);
    
    Self_Test_Passed : Boolean := False;
    
    Is_Init : Boolean := False;

	---------------------------------------------------------
	-- Provided interface "Pulse"
	---------------------------------------------------------
	procedure Pulse is
	pragma suppress (all_checks);
	
	-- Define Taste type access
    type General_Gyro_Pointer  is access all asn1sccMyGyroVal;
    type General_Acc_Pointer  is access all asn1sccMyAccVal;

    -- Initialize gyro and acc to zero
    taste_Gyro_X: aliased asn1sccMyGyroVal := asn1sccMyGyroVal (0.0);
    taste_Gyro_Y: aliased asn1sccMyGyroVal := asn1sccMyGyroVal (0.0);
    taste_Gyro_Z: aliased asn1sccMyGyroVal := asn1sccMyGyroVal (0.0);

    taste_Acc_X: aliased asn1sccMyAccVal := 0.0;
    taste_Acc_Y: aliased asn1sccMyAccVal := 0.0;
    taste_Acc_Z: aliased asn1sccMyAccVal := 0.0;

    -- Define gyro and acc pointers
    Gyro_X_Ptr : General_Gyro_Pointer := taste_Gyro_X'Access; -- Read & write
    Gyro_Y_Ptr : General_Gyro_Pointer := taste_Gyro_Y'Access; -- Read & write
    Gyro_Z_Ptr : General_Gyro_Pointer := taste_Gyro_Z'Access; -- Read & write

    Acc_X_Ptr : General_Acc_Pointer := taste_Acc_X'Access; -- Read & write
    Acc_Y_Ptr : General_Acc_Pointer := taste_Acc_Y'Access; -- Read & write
    Acc_Z_Ptr : General_Acc_Pointer := taste_Acc_Z'Access; -- Read & write

	begin
	
	    if Is_Init then
	    
           --  Magnetometer not used for the moment
           IMU_9_Read (Gyro, Acc, Mag);
        
           Gyro_X_Ptr.all := asn1sccMyGyroVal (Gyro.X);
           Gyro_Y_Ptr.all := asn1sccMyGyroVal (Gyro.Y);
           Gyro_Z_Ptr.all := asn1sccMyGyroVal (Gyro.Z);

           Acc_X_Ptr.all := asn1sccMyAccVal (Acc.X);
           Acc_Y_Ptr.all := asn1sccMyAccVal (Acc.Y);
           Acc_Z_Ptr.all := asn1sccMyAccVal (Acc.Z);

           --  Then send IMU data to the ground
           Get_IMU_Data(Gyro_X_Ptr, Gyro_Y_Ptr, Gyro_Z_Ptr, 
                         Acc_X_Ptr, Acc_Y_Ptr, Acc_Z_Ptr);
        end if;

        
	end Pulse;

    --  Initialization
    begin

        --  System initialization
        System_Init;

        --  See if we pass the self test
        Self_Test_Passed := System_Self_Test;

        Is_Init := True;
        
        --  Start the main loop if the self test passed
        if Self_Test_Passed then
           Pulse;
        end if;

end copter_imu;
