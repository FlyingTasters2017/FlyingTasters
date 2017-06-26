/* User code: This file will not be overwritten by TASTE. */

#include "world_model.h"

int NR_OF_DRONES = 3;

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
        latest_asd_estimate.agents.arr[i].currentVelocity.vx        =   0.0;
        latest_asd_estimate.agents.arr[i].currentVelocity.vy        =   0.0;
        latest_asd_estimate.agents.arr[i].currentVelocity.vz        =   0.0;
    
        latest_msd_estimate.agents.arr[i].currentPosition.x         =   0.0;
        latest_msd_estimate.agents.arr[i].currentPosition.y         =   0.0;
        latest_msd_estimate.agents.arr[i].currentPosition.z         =   0.0;
        latest_msd_estimate.agents.arr[i].currentOrientation.roll   =   0.0;
        latest_msd_estimate.agents.arr[i].currentOrientation.pitch  =   0.0;
        latest_msd_estimate.agents.arr[i].currentOrientation.yaw    =   0.0;
        latest_msd_estimate.agents.arr[i].currentVelocity.vx        =   0.0;
        latest_msd_estimate.agents.arr[i].currentVelocity.vy        =   0.0;
        latest_msd_estimate.agents.arr[i].currentVelocity.vz        =   0.0;
        
        latest_control_input.controllerInput .arr[i].yawrateRef    =   0.0;
        latest_control_input.controllerInput .arr[i].pitchRef      =   0.0;
        latest_control_input.controllerInput .arr[i].rollRef       =   0.0;
        latest_control_input.controllerInput .arr[i].thrustRef     =   0.0;   
        
        OUT_processed_world_data
    }

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



