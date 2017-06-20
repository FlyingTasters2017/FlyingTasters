/* User code: This file will not be overwritten by TASTE. */

#include "mission_safety.h"

void mission_safety_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void mission_safety_PI_check_mission_safety(const asn1SccMyInteger *IN_processed_world_data,
                                            asn1SccMyInteger *OUT_world_safety_events)
{
    if (*IN_processed_world_data <= 5){
        *OUT_world_safety_events = 0;
    }else{
        *OUT_world_safety_events = 1;
    }
        
}

