/* User code: This file will not be overwritten by TASTE. */

#include "controller.h"

 
void controller_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void controller_PI_Compute_Force(const asn1SccMyReal *IN_ReferenceHeight,
                                 const asn1SccMyReal *IN_HeightVelocity,
                                 const asn1SccMyReal *IN_Height,
                                 asn1SccMyReal *OUT_Force)
{
    double ProportionalGain =0.2;
    double DifferentialGain =0.1;
    
    
    *OUT_Force = (*IN_ReferenceHeight - *IN_Height)*ProportionalGain - *IN_HeightVelocity*DifferentialGain;
    /* Write your code here! */
}

   
