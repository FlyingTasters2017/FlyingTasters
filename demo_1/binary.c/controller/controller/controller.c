/* User code: This file will not be overwritten by TASTE. */

#include "controller.h"

void controller_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void controller_PI_Compute_Input(const asn1SccMyReal *IN_Ref_h,
                                 const asn1SccMyReal *IN_dh,
                                 const asn1SccMyReal *IN_h,
                                 asn1SccMyReal *OUT_F)
{
    double k =0.2;
    double d =0.08;
    *OUT_F = (*IN_Ref_h - *IN_h)*k - *IN_dh*d;
    /* Write your code here! */
}

