/* User code: This file will not be overwritten by TASTE. */

#include "asd_processing.h"

void asd_processing_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void asd_processing_PI_process_ASD(const asn1SccMultiDroneSensorData *IN_raw_ASD,
                                   asn1SccMultiAgents *OUT_processed_ASD)
{
    (*OUT_processed_ASD).agents.arr[0].currentAcceleration.aX     =   (*IN_raw_ASD).data.arr[0].accxAct;
    (*OUT_processed_ASD).agents.arr[0].currentAcceleration.aY     =   (*IN_raw_ASD).data.arr[0].accyAct;
    (*OUT_processed_ASD).agents.arr[0].currentAcceleration.aZ     =   (*IN_raw_ASD).data.arr[0].acczAct;
    (*OUT_processed_ASD).agents.arr[0].currentOrientation.roll    =   (*IN_raw_ASD).data.arr[0].rollAct;
    (*OUT_processed_ASD).agents.arr[0].currentOrientation.pitch   =   (*IN_raw_ASD).data.arr[0].pitchAct;
    (*OUT_processed_ASD).agents.arr[0].currentOrientation.yaw     =   (*IN_raw_ASD).data.arr[0].yawAct;

}


