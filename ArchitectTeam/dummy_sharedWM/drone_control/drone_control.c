/* User code: This file will not be overwritten by TASTE. */

#include "drone_control.h"

asn1SccMyInteger control_input;

void drone_control_startup()
{
    control_input   =   0;
}

void drone_control_PI_calculate_control_input(const asn1SccMyInteger *IN_control_error)
{
    control_input   =   *IN_control_error*2;
}

void drone_control_PI_get_control_data(asn1SccMyInteger *OUT_control_input)
{
    *OUT_control_input = control_input;
}

