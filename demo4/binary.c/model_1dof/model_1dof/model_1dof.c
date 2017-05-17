/* User code: This file will not be overwritten by TASTE. */

#include "model_1dof.h"

double h =0;
double dh =0;
double Acc =0;

void model_1dof_startup()
{
  printf("model_1dof_startup");
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void model_1dof_PI_Compute_Thrust(const asn1SccMyReal *IN_F,
                                  asn1SccMyReal *OUT_h,
                                  asn1SccMyReal *OUT_dh)
{ 
    double k = 0.2;
    double d = 0.08;
    double dt =0.1;
    
 
    
    *OUT_dh = dh + Acc*dt;
    dh = *OUT_dh;
    *OUT_h = h + *OUT_dh*dt;
    h = *OUT_h;
    Acc = ((*IN_F-h)*k - dh*d)/0.027;
    /* Write your code here! */
}

