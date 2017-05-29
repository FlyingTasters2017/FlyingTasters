with Interfaces.C.Extensions;
use Interfaces.C.Extensions;

package Respond_state_Simulink is

procedure Ada_Convert_From_native_To_MyPWM_In_Respond_state_Simulink_PWM(pBuffer : Interfaces.C.char_array; iBufferSize : Integer);
procedure Ada_Convert_From_MyStates_To_native_In_Respond_state_Simulink_States(pBuffer : in Interfaces.C.char_array; iMaxBufferSize : in Integer; bytesWritten : out Integer);
procedure Ada_Execute_Respond_state_Simulink;

end Respond_state_Simulink;
