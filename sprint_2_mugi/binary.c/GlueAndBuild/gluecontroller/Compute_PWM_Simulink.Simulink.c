#ifdef __unix__
#include <stdio.h>
#include <string.h>

#include <assert.h>

#endif
#include "Compute_PWM_Simulink.Simulink.h"
#include "dataview-uniq.h" // Space certified compiler generated
#include "Compute_PWM.h"

#include "Compute_PWM_types.h"

int Convert_From_native_To_MyTrajectory_In_Compute_PWM_Simulink_Trajectory(void *pBuffer, size_t iBufferSize)
{
    STATIC asn1SccMyTrajectory var_MyTrajectory;
    var_MyTrajectory = *(asn1SccMyTrajectory *) pBuffer;
    {
        Compute_PWM_U.Trajectory.x = var_MyTrajectory.x;
        Compute_PWM_U.Trajectory.y = var_MyTrajectory.y;
        Compute_PWM_U.Trajectory.z = var_MyTrajectory.z;
        Compute_PWM_U.Trajectory.yaw = var_MyTrajectory.yaw;
        return 0;
    }
}

int Convert_From_native_To_MyStates_In_Compute_PWM_Simulink_States(void *pBuffer, size_t iBufferSize)
{
    STATIC asn1SccMyStates var_MyStates;
    var_MyStates = *(asn1SccMyStates *) pBuffer;
    {
        Compute_PWM_U.States.x = var_MyStates.x;
        Compute_PWM_U.States.y = var_MyStates.y;
        Compute_PWM_U.States.z = var_MyStates.z;
        Compute_PWM_U.States.yaw = var_MyStates.yaw;
        Compute_PWM_U.States.pitch = var_MyStates.pitch;
        Compute_PWM_U.States.roll = var_MyStates.roll;
        Compute_PWM_U.States.dx = var_MyStates.dx;
        Compute_PWM_U.States.dy = var_MyStates.dy;
        Compute_PWM_U.States.dz = var_MyStates.dz;
        Compute_PWM_U.States.dyaw = var_MyStates.dyaw;
        Compute_PWM_U.States.dpitch = var_MyStates.dpitch;
        Compute_PWM_U.States.droll = var_MyStates.droll;
        return 0;
    }
}

int Convert_From_MyPWM_To_native_In_Compute_PWM_Simulink_PWM(void *pBuffer, size_t iMaxBufferSize)
{
    STATIC asn1SccMyPWM var_MyPWM;
    var_MyPWM.pwm1 = (double) Compute_PWM_Y.PWM.pwm1;
    var_MyPWM.pwm2 = (double) Compute_PWM_Y.PWM.pwm2;
    var_MyPWM.pwm3 = (double) Compute_PWM_Y.PWM.pwm3;
    var_MyPWM.pwm4 = (double) Compute_PWM_Y.PWM.pwm4;
    memcpy(pBuffer, &var_MyPWM, sizeof(asn1SccMyPWM) );
    return sizeof(asn1SccMyPWM);
}

void Execute_Compute_PWM_Simulink()
{
#ifndef rtmGetStopRequested
    Compute_PWM_step();
#else
    if (!rtmGetStopRequested(Compute_PWM_M)) {
        Compute_PWM_step();
        if (rtmGetStopRequested(Compute_PWM_M)) { Compute_PWM_terminate(); }
    }
#endif
}

void init_controller()
{
    static int initialized = 0;
    if (!initialized) {
        initialized = 1;
        Compute_PWM_initialize();
    }
}

void controller_Compute_PWM(void *pTrajectory, size_t size_Trajectory, void *pStates, size_t size_States, void *pPWM, size_t *pSize_PWM)
{
    Convert_From_native_To_MyTrajectory_In_Compute_PWM_Simulink_Trajectory(pTrajectory, size_Trajectory);
    Convert_From_native_To_MyStates_In_Compute_PWM_Simulink_States(pStates, size_States);
    Execute_Compute_PWM_Simulink();
    *pSize_PWM = Convert_From_MyPWM_To_native_In_Compute_PWM_Simulink_PWM(pPWM, 56);
}

