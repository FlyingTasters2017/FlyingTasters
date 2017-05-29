with Interfaces.C.Extensions;
use Interfaces.C.Extensions;

package Compute_PWM_Simulink is

procedure Ada_Convert_From_native_To_MyTrajectory_In_Compute_PWM_Simulink_Trajectory(pBuffer : Interfaces.C.char_array; iBufferSize : Integer);
procedure Ada_Convert_From_native_To_MyStates_In_Compute_PWM_Simulink_States(pBuffer : Interfaces.C.char_array; iBufferSize : Integer);
procedure Ada_Convert_From_MyPWM_To_native_In_Compute_PWM_Simulink_PWM(pBuffer : in Interfaces.C.char_array; iMaxBufferSize : in Integer; bytesWritten : out Integer);
procedure Ada_Execute_Compute_PWM_Simulink;

end Compute_PWM_Simulink;
