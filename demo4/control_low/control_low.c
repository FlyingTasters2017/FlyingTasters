/* User code: This file will not be overwritten by TASTE. */

#include "control_low.h"
#include<studio.h>

void control_low_startup()
{
  printf("control_low_startup")
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void control_low_PI_Compute_Thrust(const asn1SccMyInteger *IN_Inp,
                                   asn1SccMyInteger *OUT_Outp)
{
  *OUT_Outp = *IN_Inp + 1;
    /* Write your code here! */
}

