/* User code: This file will not be overwritten by TASTE. */

#include "drone_control.h"

void drone_control_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void drone_control_PI_compute_control_input(const asn1SccMyInteger *IN_control_error,
                                            asn1SccMyInteger *OUT_control_input)
{
    *OUT_control_input = *IN_control_error * 5;
}

