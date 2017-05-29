#ifdef __unix__
#include <stdio.h>
#include <string.h>

#include <assert.h>

#endif
#include "Respond_state_Simulink.Simulink.h"
#include "dataview-uniq.h" // Space certified compiler generated
#include "Respond_state.h"

#include "Respond_state_types.h"

int Convert_From_native_To_MyPWM_In_Respond_state_Simulink_PWM(void *pBuffer, size_t iBufferSize)
{
    STATIC asn1SccMyPWM var_MyPWM;
    var_MyPWM = *(asn1SccMyPWM *) pBuffer;
    {
        Respond_state_U.PWM.pwm1 = var_MyPWM.pwm1;
        Respond_state_U.PWM.pwm2 = var_MyPWM.pwm2;
        Respond_state_U.PWM.pwm3 = var_MyPWM.pwm3;
        Respond_state_U.PWM.pwm4 = var_MyPWM.pwm4;
        return 0;
    }
}

int Convert_From_MyStates_To_native_In_Respond_state_Simulink_States(void *pBuffer, size_t iMaxBufferSize)
{
    STATIC asn1SccMyStates var_MyStates;
    var_MyStates.x = (double) Respond_state_Y.States.x;
    var_MyStates.y = (double) Respond_state_Y.States.y;
    var_MyStates.z = (double) Respond_state_Y.States.z;
    var_MyStates.yaw = (double) Respond_state_Y.States.yaw;
    var_MyStates.pitch = (double) Respond_state_Y.States.pitch;
    var_MyStates.roll = (double) Respond_state_Y.States.roll;
    var_MyStates.dx = (double) Respond_state_Y.States.dx;
    var_MyStates.dy = (double) Respond_state_Y.States.dy;
    var_MyStates.dz = (double) Respond_state_Y.States.dz;
    var_MyStates.dyaw = (double) Respond_state_Y.States.dyaw;
    var_MyStates.dpitch = (double) Respond_state_Y.States.dpitch;
    var_MyStates.droll = (double) Respond_state_Y.States.droll;
    memcpy(pBuffer, &var_MyStates, sizeof(asn1SccMyStates) );
    return sizeof(asn1SccMyStates);
}

void Execute_Respond_state_Simulink()
{
#ifndef rtmGetStopRequested
    Respond_state_step();
#else
    if (!rtmGetStopRequested(Respond_state_M)) {
        Respond_state_step();
        if (rtmGetStopRequested(Respond_state_M)) { Respond_state_terminate(); }
    }
#endif
}

void init_drone_model()
{
    static int initialized = 0;
    if (!initialized) {
        initialized = 1;
        Respond_state_initialize();
    }
}

void drone_model_Respond_state(void *pPWM, size_t size_PWM, void *pStates, size_t *pSize_States)
{
    Convert_From_native_To_MyPWM_In_Respond_state_Simulink_PWM(pPWM, size_PWM);
    Execute_Respond_state_Simulink();
    *pSize_States = Convert_From_MyStates_To_native_In_Respond_state_Simulink_States(pStates, 160);
}

