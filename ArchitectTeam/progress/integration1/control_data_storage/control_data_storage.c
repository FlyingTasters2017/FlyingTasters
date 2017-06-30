/* User code: This file will not be overwritten by TASTE. */

#include "control_data_storage.h"
#include <stdio.h>

asn1SccDroneControllerInput latest_control_input;

void control_data_storage_startup()
{
    (latest_control_input).yawrateRef    =   0.0;
    (latest_control_input).pitchRef      =   0.0;
    (latest_control_input).rollRef       =   0.0;
    (latest_control_input).thrustRef     =   0.0;
    
}

void control_data_storage_PI_get_control_data(asn1SccDroneControllerInput *OUT_control_data)
{
    //*OUT_control_data    =   latest_control_input;
    (*OUT_control_data).thrustRef = latest_control_input.thrustRef;
    
    
    printf("GET calculated thrust = %.1f \t %.1f \n",latest_control_input.thrustRef,(*OUT_control_data).thrustRef);
}

void control_data_storage_PI_calculate_control_input(const asn1SccTrajectory *IN_control_error,  const asn1SccWorldData *IN_world_data)
{
    control_data_storage_RI_calc_control(IN_control_error,IN_world_data,&latest_control_input);
    
    printf("latest_control_input calculated thrust = %.1f \n",latest_control_input.thrustRef);
}
