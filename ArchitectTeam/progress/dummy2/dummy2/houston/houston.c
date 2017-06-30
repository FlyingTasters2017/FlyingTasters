/* User code: This file will not be overwritten by TASTE. */

#include "houston.h"

void houston_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void houston_PI_put_drone_data(const asn1SccMyInteger *IN_drone_data)
{
    houston_RI_put_raw_ASD(IN_drone_data);
}


void houston_PI_control_agents(const asn1SccMyInteger *OUT_control_data)
{
    houston_RI_send_control_data(OUT_control_data);
}

