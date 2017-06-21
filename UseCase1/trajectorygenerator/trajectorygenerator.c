/* User code: This file will not be overwritten by TASTE. */

#include "trajectorygenerator.h"
#include <stdio.h>
#include <math.h>

#define PI 3.14159265

double Ref = 1;
double stay = 0;
void trajectorygenerator_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void trajectorygenerator_PI_GetTrajectory(const asn1SccMyInteger *IN_Num,
                                          const asn1SccMyReal *IN_Height,
                                          asn1SccMyReal *OUT_Ref)
{
    /*The trajectorygenerator 1 (circle mode)
    /*OUT_Ref = sin(*IN_Num*2*PI/100);
    
    /*The trajectorygenerator 2 (Square mode)*/
    if (abs(Ref-*IN_Height)<0.1 && stay>2) 
    {
        *OUT_Ref = Ref + 1;
        Ref = Ref +1;
        stay = 0;
    }
    else 
        {
            *OUT_Ref = Ref; 
            
        }
    stay = stay + 0.1;
}

