/* User code: This file will not be overwritten by TASTE. */

#include "trajectory_generator.h"

void trajectory_generator_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void trajectory_generator_PI_choose_trajectory(const asn1SccWorldData *IN_processed_world_data,
                                               const asn1SccSafetyEvent *IN_world_safety_events,
                                               asn1SccTrajectory *OUT_control_error)
{
    /*
        (*OUT_control_error).x = 0;
        (*OUT_control_error).y = 0;
        (*OUT_control_error).z = 0.1;
        (*OUT_control_error).yaw = 0;        
    */
}
