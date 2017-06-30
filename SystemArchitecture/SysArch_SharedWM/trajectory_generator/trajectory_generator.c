/* User code: This file will not be overwritten by TASTE. */

#include "trajectory_generator.h"

void trajectory_generator_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void trajectory_generator_PI_choose_trajectory(const asn1SccMyInteger *IN_processed_world_data,
                                               const asn1SccMyInteger *IN_world_safety_events,
                                               asn1SccMyInteger *OUT_control_error)
{
    if (*IN_world_safety_events == 1){
        *OUT_control_error = 0;
    }else{
        *OUT_control_error = 30;
    }
    
}

