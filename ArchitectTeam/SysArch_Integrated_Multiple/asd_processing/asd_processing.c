/* User code: This file will not be overwritten by TASTE. */

#include "asd_processing.h"
#include "../../Configuration.h"

void asd_processing_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void asd_processing_PI_process_ASD(const asn1SccMultiDroneSensorData *IN_raw_ASD,
                                   asn1SccMultiAgents *OUT_processed_ASD)
{
    for (int i=0;i<NR_OF_DRONES;i++)
    {
        (*OUT_processed_ASD).agents.arr[i].currentAcceleration.aX     =   (*IN_raw_ASD).data.arr[i].accxAct;
        (*OUT_processed_ASD).agents.arr[i].currentAcceleration.aY     =   (*IN_raw_ASD).data.arr[i].accyAct;
        (*OUT_processed_ASD).agents.arr[i].currentAcceleration.aZ     =   (*IN_raw_ASD).data.arr[i].acczAct;
        (*OUT_processed_ASD).agents.arr[i].currentOrientation.roll    =   (*IN_raw_ASD).data.arr[i].rollAct;
        (*OUT_processed_ASD).agents.arr[i].currentOrientation.pitch   =   (*IN_raw_ASD).data.arr[i].pitchAct;
        (*OUT_processed_ASD).agents.arr[i].currentOrientation.yaw     =   (*IN_raw_ASD).data.arr[i].yawAct;
    }

}


