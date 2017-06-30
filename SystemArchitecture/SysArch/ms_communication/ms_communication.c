/* User code: This file will not be overwritten by TASTE. */

#include "ms_communication.h"

void ms_communication_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void ms_communication_PI_put_camera_data(const asn1SccMyInteger *IN_camera_data)
{
    /* Write your code here! */
    ms_communication_RI_put_raw_MSD(IN_camera_data);
}

