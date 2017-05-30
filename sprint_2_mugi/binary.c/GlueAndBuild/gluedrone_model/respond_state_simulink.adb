with Interfaces.C.Extensions;
use Interfaces.C.Extensions;

package body Respond_state_Simulink is

procedure Ada_Convert_From_native_To_MyPWM_In_Respond_state_Simulink_PWM(pBuffer : Interfaces.C.char_array; iBufferSize : Integer) is
    procedure C_Convert_From_native_To_MyPWM_In_Respond_state_Simulink_PWM(pBuffer : Interfaces.C.char_array; iBufferSize : Integer);
    pragma Import(C, C_Convert_From_native_To_MyPWM_In_Respond_state_Simulink_PWM, "Convert_From_native_To_MyPWM_In_Respond_state_Simulink_PWM");
begin
    C_Convert_From_native_To_MyPWM_In_Respond_state_Simulink_PWM(pBuffer, iBufferSize);
end Ada_Convert_From_native_To_MyPWM_In_Respond_state_Simulink_PWM;

procedure Ada_Convert_From_MyStates_To_native_In_Respond_state_Simulink_States(pBuffer : in Interfaces.C.char_array; iMaxBufferSize : in Integer; bytesWritten : out Integer) is
    function C_Convert_From_MyStates_To_native_In_Respond_state_Simulink_States(pBuffer : Interfaces.C.char_array; iMaxBufferSize : Integer) return Integer;
    pragma Import(C, C_Convert_From_MyStates_To_native_In_Respond_state_Simulink_States, "Convert_From_MyStates_To_native_In_Respond_state_Simulink_States");
begin
    bytesWritten := C_Convert_From_MyStates_To_native_In_Respond_state_Simulink_States(pBuffer, iMaxBufferSize);
end Ada_Convert_From_MyStates_To_native_In_Respond_state_Simulink_States;

procedure Ada_Execute_Respond_state_Simulink is
    procedure C_Execute_Respond_state_Simulink;
    pragma Import(C, C_Execute_Respond_state_Simulink, "Execute_Respond_state_Simulink");
begin
    C_Execute_Respond_state_Simulink;
end Ada_Execute_Respond_state_Simulink;


end Respond_state_Simulink;
