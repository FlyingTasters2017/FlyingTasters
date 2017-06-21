/* User code: This file will not be overwritten by TASTE. */

#include "control_data_storage.h"

asn1SccDroneControllerInput *latest_control_input;

void control_data_storage_startup()
{
    (*latest_control_input).yawrateRef    =   0.0;
    (*latest_control_input).pitchRef      =   0.0;
    (*latest_control_input).rollRef       =   0.0;
    (*latest_control_input).thrustRef     =   0.0;
    
}

void control_data_storage_PI_get_control_data(asn1SccDroneControllerInput *OUT_control_data)
{
    OUT_control_data    =   latest_control_input;
}

void control_data_storage_PI_calculate_control_input(const asn1SccTrajectory *IN_control_error,  const asn1SccWorldData *IN_world_data)
{
    control_data_storage_RI_calculate_and_store_control_input(IN_control_error,IN_world_data,latest_control_input);
}
