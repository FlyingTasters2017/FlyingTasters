/* User code: This file will not be overwritten by TASTE. */

#include "world_model.h"

/*
asn1SccDroneSensorData latest_asd_estimate;
asn1SccMyInteger latest_msd_estimate;
asn1SccDroneControllerInput latest_control_input;
*/

void world_model_startup()
{/*
    latest_asd_estimate.yawAct      =   0.0;
    latest_asd_estimate.pitchAct    =   0.0;
    latest_asd_estimate.rollAct     =   0.0;
    latest_asd_estimate.baropAct    =   0.0;
    latest_asd_estimate.accxAct     =   0.0;
    latest_asd_estimate.accyAct     =   0.0;
    latest_asd_estimate.acczAct     =   0.0;
    latest_asd_estimate.accyAct     =   0.0;
    
    latest_msd_estimate     =   0;
    
    latest_control_input.yawrateRef    =   0.0;
    latest_control_input.pitchRef      =   0.0;
    latest_control_input.rollRef       =   0.0;
    latest_control_input.thrustRef     =   0.0;    
    */
}


void world_model_PI_store_MSD(const asn1SccMyInteger *IN_processed_msd)
{
    
    //latest_msd_estimate     =   *IN_processed_msd;
}

void world_model_PI_store_ASD(const asn1SccDroneSensorData *IN_processed_asd)
{
    //latest_asd_estimate     =   *IN_processed_asd;
}

void world_model_PI_store_control_data(const asn1SccDroneControllerInput *IN_control_input)
{
    //latest_control_input     =   *IN_control_input;
}

void world_model_PI_update_world_data(asn1SccWorldData *OUT_processed_world_data)
{
    //(*OUT_processed_world_data).rawASD     =   latest_asd_estimate;
}

