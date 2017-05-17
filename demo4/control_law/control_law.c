/* User code: This file will not be overwritten by TASTE. */

#include "control_law.h"

void control_law_startup()
{
  printf("control_law_startup");
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void control_law_PI_Compute_Thrust(const asn1SccMyReal *IN_F,
                                   asn1SccMyReal *OUT_h,asn1SccMyReal *OUT_dh)
{  
    double a=*IN_F/0.027;
    
    
    *OUT_dh = *OUT_dh + a;
    
    *OUT_h = *OUT_h + *OUT_dh;
   
}

