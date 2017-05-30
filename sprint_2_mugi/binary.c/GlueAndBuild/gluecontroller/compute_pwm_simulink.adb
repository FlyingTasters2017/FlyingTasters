with Interfaces.C.Extensions;
use Interfaces.C.Extensions;

package body Compute_PWM_Simulink is

procedure Ada_Convert_From_native_To_MyTrajectory_In_Compute_PWM_Simulink_Trajectory(pBuffer : Interfaces.C.char_array; iBufferSize : Integer) is
    procedure C_Convert_From_native_To_MyTrajectory_In_Compute_PWM_Simulink_Trajectory(pBuffer : Interfaces.C.char_array; iBufferSize : Integer);
    pragma Import(C, C_Convert_From_native_To_MyTrajectory_In_Compute_PWM_Simulink_Trajectory, "Convert_From_native_To_MyTrajectory_In_Compute_PWM_Simulink_Trajectory");
begin
    C_Convert_From_native_To_MyTrajectory_In_Compute_PWM_Simulink_Trajectory(pBuffer, iBufferSize);
end Ada_Convert_From_native_To_MyTrajectory_In_Compute_PWM_Simulink_Trajectory;

procedure Ada_Convert_From_native_To_MyStates_In_Compute_PWM_Simulink_States(pBuffer : Interfaces.C.char_array; iBufferSize : Integer) is
    procedure C_Convert_From_native_To_MyStates_In_Compute_PWM_Simulink_States(pBuffer : Interfaces.C.char_array; iBufferSize : Integer);
    pragma Import(C, C_Convert_From_native_To_MyStates_In_Compute_PWM_Simulink_States, "Convert_From_native_To_MyStates_In_Compute_PWM_Simulink_States");
begin
    C_Convert_From_native_To_MyStates_In_Compute_PWM_Simulink_States(pBuffer, iBufferSize);
end Ada_Convert_From_native_To_MyStates_In_Compute_PWM_Simulink_States;

procedure Ada_Convert_From_MyPWM_To_native_In_Compute_PWM_Simulink_PWM(pBuffer : in Interfaces.C.char_array; iMaxBufferSize : in Integer; bytesWritten : out Integer) is
    function C_Convert_From_MyPWM_To_native_In_Compute_PWM_Simulink_PWM(pBuffer : Interfaces.C.char_array; iMaxBufferSize : Integer) return Integer;
    pragma Import(C, C_Convert_From_MyPWM_To_native_In_Compute_PWM_Simulink_PWM, "Convert_From_MyPWM_To_native_In_Compute_PWM_Simulink_PWM");
begin
    bytesWritten := C_Convert_From_MyPWM_To_native_In_Compute_PWM_Simulink_PWM(pBuffer, iMaxBufferSize);
end Ada_Convert_From_MyPWM_To_native_In_Compute_PWM_Simulink_PWM;

procedure Ada_Execute_Compute_PWM_Simulink is
    procedure C_Execute_Compute_PWM_Simulink;
    pragma Import(C, C_Execute_Compute_PWM_Simulink, "Execute_Compute_PWM_Simulink");
begin
    C_Execute_Compute_PWM_Simulink;
end Ada_Execute_Compute_PWM_Simulink;


end Compute_PWM_Simulink;
