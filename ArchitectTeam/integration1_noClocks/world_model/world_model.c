/* User code: This file will not be overwritten by TASTE. */

#include "world_model.h"


asn1SccMultiAgents latest_asd_estimate;
asn1SccMultiAgents latest_msd_estimate;
asn1SccMultiDroneControllerInput latest_control_input;
asn1SccWorldData OUT_processed_world_data;

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


void world_model_PI_store_MSD(const asn1SccMultiAgents *IN_processed_msd)
{
    //update the latest msd values
    latest_msd_estimate     =   *IN_processed_msd;
    
    OUT_processed_world_data.agents.arr[0].currentPosition       =   latest_msd_estimate.agents.arr[0].currentPosition ;
    OUT_processed_world_data.agents.arr[0].currentVelocity       =   latest_asd_estimate.agents.arr[0].currentVelocity;
    OUT_processed_world_data.agents.arr[0].currentAcceleration   =   latest_asd_estimate.agents.arr[0].currentAcceleration;
    OUT_processed_world_data.agents.arr[0].currentOrientation    =   latest_asd_estimate.agents.arr[0].currentOrientation;
    
    world_model_RI_update_world_data(&OUT_processed_world_data);
}

void world_model_PI_store_ASD(const asn1SccMultiAgents *IN_processed_asd)
{
    //update the latest asd values
    latest_asd_estimate     =   *IN_processed_asd;
}

void world_model_PI_store_control_data(const asn1SccMultiDroneControllerInput *IN_control_input)
{
    //update the latest input that is send to the drone
    latest_control_input    =   *IN_control_input;
}



