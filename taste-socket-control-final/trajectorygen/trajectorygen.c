/* User code: This file will not be overwritten by TASTE. */

#include "trajectorygen.h"
#include <stdio.h>
#include <math.h>
#include <time.h>



#define PI 3.14159265
 
double         ms_0; // Milliseconds
double         s_0; // Milliseconds
double            ms;
double            s; // Milliseconds
double dt;
struct timespec spec;

int i =0;

double R = 0.4;
double Omega = 2*PI/5;

double zAmp = 0.05;



void trajectorygen_startup()
{
    clock_gettime(CLOCK_MONOTONIC_RAW, &spec);
 
    s_0 = spec.tv_sec;
    ms_0 = spec.tv_nsec;
    
//     xref = 0.5;
//     yref = 0.0;
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void trajectorygen_PI_getReference(const asn1SccMyPositionControlData *IN_currentPosRed,
                                   const asn1SccMyPositionControlData *IN_currentPosBlue,
                                   const asn1SccMyPositionControlData *IN_currentPosGreen,
                                   asn1SccMyPositionControlData *OUT_refPosRed,
                                   asn1SccMyPositionControlData *OUT_refPosBlue,
                                   asn1SccMyPositionControlData *OUT_refPosGreen)
{
    clock_gettime(CLOCK_MONOTONIC_RAW, &spec);
 
    s = spec.tv_sec;
    ms = spec.tv_nsec;
      
    dt = s + ms/1e9 - s_0 - ms_0/1e9;
    
    
          OUT_refPosRed->xAct = R*cos(Omega*dt);
          OUT_refPosRed->yAct = R*sin(Omega*dt);
          OUT_refPosRed->zAct = 0.3;//;+.1*sin(Omega*dt);
          OUT_refPosBlue->xAct = R*cos(Omega*dt + PI*2/3);
          OUT_refPosBlue->yAct = R*sin(Omega*dt + PI*2/3);
          OUT_refPosBlue->zAct = 0.3;//+.1*sin(Omega*dt);
          OUT_refPosGreen->xAct = R*cos(Omega*dt + PI*4/3);
          OUT_refPosGreen->yAct = R*sin(Omega*dt + PI*4/3);
          OUT_refPosGreen->zAct = 0.3;//+0.1*sin(Omega*dt);
    
    
}
