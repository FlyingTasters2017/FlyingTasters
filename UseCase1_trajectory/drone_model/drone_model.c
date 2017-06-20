/* User code: This file will not be overwritten by TASTE. */

#include "drone_model.h"
double Height = 0;
double HeightVelocity = 0;
double Force =0;
void drone_model_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void drone_model_PI_Response(const asn1SccMyReal *IN_Force,
                             asn1SccMyReal *OUT_HeightVelocity,
                             asn1SccMyReal *OUT_Height)
{
  double Acceleration;
  double Mass= 0.027;
  
  Acceleration = Force/Mass;
 
  double SamplingTime = 0.1;
  
  *OUT_HeightVelocity = HeightVelocity + Acceleration*SamplingTime;

  *OUT_Height = Height + *OUT_HeightVelocity*SamplingTime;
  
   Force = *IN_Force;
   HeightVelocity =  *OUT_HeightVelocity;
   Height = *OUT_Height;
    /* Write your code here! */
}

