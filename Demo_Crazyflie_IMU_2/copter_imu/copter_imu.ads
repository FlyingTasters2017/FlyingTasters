-- This file was generated automatically: DO NOT MODIFY IT !

-- Declaration of the provided and required interfaces

pragma style_checks (off);
pragma warnings (off);
with adaasn1rtl;
use adaasn1rtl;

with TASTE_Dataview;
use TASTE_Dataview;

package copter_imu is

   --  ----------------------------------------------------  --
   --  Provided interface "Pulse"
   --  ----------------------------------------------------  --
   procedure Pulse;
   pragma Export(C, Pulse, "copter_imu_PI_Pulse");

   --  --------------------------------------------------- --
   --  Required interface "Get_IMU_Data"
   --  --------------------------------------------------- --
   procedure Get_IMU_Data(gyro_X: access asn1sccMyGyroVal; gyro_Y: access asn1sccMyGyroVal; gyro_Z: access asn1sccMyGyroVal; acc_X: access asn1sccMyAccVal; acc_Y: access asn1sccMyAccVal; acc_Z: access asn1sccMyAccVal);
   pragma Import(C, Get_IMU_Data, "copter_imu_RI_Get_IMU_Data");
   procedure RIÜGet_IMU_Data(gyro_X: access asn1sccMyGyroVal; gyro_Y: access asn1sccMyGyroVal; gyro_Z: access asn1sccMyGyroVal; acc_X: access asn1sccMyAccVal; acc_Y: access asn1sccMyAccVal; acc_Z: access asn1sccMyAccVal) renames Get_IMU_Data;


end copter_imu;
