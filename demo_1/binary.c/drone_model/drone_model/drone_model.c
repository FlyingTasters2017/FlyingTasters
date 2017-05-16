/* User code: This file will not be overwritten by TASTE. */

#include "drone_model.h"

void drone_model_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void drone_model_PI_Response(const asn1SccMyReal *IN_F,
                             asn1SccMyReal *OUT_dh,
                             asn1SccMyReal *OUT_h)
{
  double Acc;
  double m= 0.027;
  
  Acc = *IN_F/m;
  
  double dt = 0.1;
  *OUT_dh = *OUT_dh + Acc*dt;
  
  *OUT_h = *OUT_h + *OUT_dh*dt;
    /* Write your code here! */
}

