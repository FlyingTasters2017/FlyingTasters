/* User code: This file will not be overwritten by TASTE. */

#include "model_1dof.h"

void model_1dof_startup()
{
  printf("model_1dof_startup")
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void model_1dof_PI_Compute_Thrust(const asn1SccMyReal *IN_F,
                                  asn1SccMyReal *OUT_h,
                                  asn1SccMyReal *OUT_dh)
{
    double a; 
    a = *IN_F/0.027;
    
    *OUT_dh = *OUT_dh + a;
    *OUT_h = *OUT_h + *OUT_dh;
    /* Write your code here! */
}

