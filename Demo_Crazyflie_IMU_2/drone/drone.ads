-- This file was generated automatically: DO NOT MODIFY IT !

-- Declaration of the provided and required interfaces

pragma style_checks (off);
pragma warnings (off);
with adaasn1rtl;
use adaasn1rtl;

with TASTE_BasicTypes;
use TASTE_BasicTypes;

package drone is

   --  ----------------------------------------------------  --
   --  Provided interface "Take_Off"
   --  ----------------------------------------------------  --
   procedure Take_Off(Thrust: access asn1sccT_UInt32);
   pragma Export(C, Take_Off, "drone_PI_Take_Off");

   --  ----------------------------------------------------  --
   --  Provided interface "System_Loop"
   --  ----------------------------------------------------  --
   procedure System_Loop;
   pragma Export(C, System_Loop, "drone_PI_System_Loop");

   --  ----------------------------------------------------  --
   --  Provided interface "Land"
   --  ----------------------------------------------------  --
   procedure Land;
   pragma Export(C, Land, "drone_PI_Land");


end drone;
