/* User code: This file will not be overwritten by TASTE. */

#include "drone_control.h"

void drone_control_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void drone_control_PI_calculate_and_store_control_input(const asn1SccTrajectory *IN_control_error,
                                                        const asn1SccWorldData *IN_processed_world_data,
                                                        asn1SccDroneControllerInput *OUT_control_data)
{
    OUT_control_data->yawrateRef = 0;
    OUT_control_data->pitchRef = 0;
    OUT_control_data->rollRef = 0;
    OUT_control_data->thrustRef = 1000;
}

