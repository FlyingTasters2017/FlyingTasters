/* User code: This file will not be overwritten by TASTE. */

#include "world_model.h"
#include "../../Configuration.h"

asn1SccMultiAgents latest_asd_estimate;
asn1SccMultiAgents latest_msd_estimate;
asn1SccMultiDroneControllerInput latest_control_input;
asn1SccWorldData OUT_processed_world_data;

void world_model_startup()
{   
    for (int i=0;i<NR_OF_DRONES;i++)
    {
        latest_asd_estimate.agents.arr[i].currentPosition.x         =   0.0;
        latest_asd_estimate.agents.arr[i].currentPosition.y         =   0.0;
        latest_asd_estimate.agents.arr[i].currentPosition.z         =   0.0;
        latest_asd_estimate.agents.arr[i].currentOrientation.roll   =   0.0;
        latest_asd_estimate.agents.arr[i].currentOrientation.pitch  =   0.0;
        latest_asd_estimate.agents.arr[i].currentOrientation.yaw    =   0.0;
        latest_asd_estimate.agents.arr[i].currentVelocity.vX        =   0.0;
        latest_asd_estimate.agents.arr[i].currentVelocity.vY        =   0.0;
        latest_asd_estimate.agents.arr[i].currentVelocity.vZ        =   0.0;
        latest_asd_estimate.agents.arr[i].currentVelocity.vRoll     =   0.0;
        latest_asd_estimate.agents.arr[i].currentVelocity.vPitch    =   0.0;
        latest_asd_estimate.agents.arr[i].currentVelocity.vYaw      =   0.0;
        
        latest_msd_estimate.agents.arr[i].currentPosition.x         =   0.0;
        latest_msd_estimate.agents.arr[i].currentPosition.y         =   0.0;
        latest_msd_estimate.agents.arr[i].currentPosition.z         =   0.0;
        latest_msd_estimate.agents.arr[i].currentOrientation.roll   =   0.0;
        latest_msd_estimate.agents.arr[i].currentOrientation.pitch  =   0.0;
        latest_msd_estimate.agents.arr[i].currentOrientation.yaw    =   0.0;
        latest_msd_estimate.agents.arr[i].currentVelocity.vX        =   0.0;
        latest_msd_estimate.agents.arr[i].currentVelocity.vY        =   0.0;
        latest_msd_estimate.agents.arr[i].currentVelocity.vZ        =   0.0;
        latest_msd_estimate.agents.arr[i].currentVelocity.vRoll     =   0.0;
        latest_msd_estimate.agents.arr[i].currentVelocity.vPitch    =   0.0;
        latest_msd_estimate.agents.arr[i].currentVelocity.vYaw      =   0.0;
        
        latest_control_input.controllerInput.arr[i].yawrateRef    =   0.0;
        latest_control_input.controllerInput.arr[i].pitchRef      =   0.0;
        latest_control_input.controllerInput.arr[i].rollRef       =   0.0;
        latest_control_input.controllerInput.arr[i].heightRef     =   0.0;   
        latest_control_input.controllerInput.arr[i].thrustRef     =   0.0;   
        
        OUT_processed_world_data.agents.arr[i].currentPosition.x        =   0.0;
        OUT_processed_world_data.agents.arr[i].currentPosition.y        =   0.0;
        OUT_processed_world_data.agents.arr[i].currentPosition.z        =   0.0;
        OUT_processed_world_data.agents.arr[i].currentOrientation.roll  =   0.0;
        OUT_processed_world_data.agents.arr[i].currentOrientation.pitch =   0.0;
        OUT_processed_world_data.agents.arr[i].currentOrientation.yaw   =   0.0;
        OUT_processed_world_data.agents.arr[i].currentVelocity.vX       =   0.0;
        OUT_processed_world_data.agents.arr[i].currentVelocity.vY       =   0.0;
        OUT_processed_world_data.agents.arr[i].currentVelocity.vZ       =   0.0;
        OUT_processed_world_data.agents.arr[i].currentVelocity.vRoll    =   0.0;
        OUT_processed_world_data.agents.arr[i].currentVelocity.vPitch   =   0.0;
        OUT_processed_world_data.agents.arr[i].currentVelocity.vYaw     =   0.0;
        
    }

}


void world_model_PI_store_MSD(const asn1SccMultiAgents *IN_processed_msd)
{
    //update the latest msd values
    latest_msd_estimate     =   *IN_processed_msd;
    
    for (int i=0;i<NR_OF_DRONES;i++)
    {
    OUT_processed_world_data.agents.arr[i].currentPosition       =   latest_msd_estimate.agents.arr[i].currentPosition ;
    OUT_processed_world_data.agents.arr[i].currentVelocity       =   latest_asd_estimate.agents.arr[i].currentVelocity;
    OUT_processed_world_data.agents.arr[i].currentAcceleration   =   latest_asd_estimate.agents.arr[i].currentAcceleration;
    OUT_processed_world_data.agents.arr[i].currentOrientation    =   latest_asd_estimate.agents.arr[i].currentOrientation;
    }
    
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



