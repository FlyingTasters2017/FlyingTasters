/* User code: This file will not be overwritten by TASTE. */

#include "drone_dummy.h"
#include <stdio.h>

void drone_dummy_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void drone_dummy_PI_talk_with_drone(const asn1SccMyInteger *IN_control_data,
                                    asn1SccMyInteger *OUT_raw_asd)
{
    printf("received control data");
    
    *OUT_raw_asd = 0;

    printf("sent raw_asd");
}


