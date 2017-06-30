/* User code: This file will not be overwritten by TASTE. */

#include "asd_processing.h"

void asd_processing_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void asd_processing_PI_process_ASD(const asn1SccDroneSensorData *IN_raw_ASD,
                                   asn1SccAgent *OUT_processed_ASD)
{
    (*OUT_processed_ASD).currentAcceleration.aX     =   (*IN_raw_ASD).accxAct;
    (*OUT_processed_ASD).currentAcceleration.aY     =   (*IN_raw_ASD).accyAct;
    (*OUT_processed_ASD).currentAcceleration.aZ     =   (*IN_raw_ASD).acczAct;
    (*OUT_processed_ASD).currentOrientation.roll    =   (*IN_raw_ASD).rollAct;
    (*OUT_processed_ASD).currentOrientation.pitch   =   (*IN_raw_ASD).pitchAct;
    (*OUT_processed_ASD).currentOrientation.yaw     =   (*IN_raw_ASD).yawAct;

}


