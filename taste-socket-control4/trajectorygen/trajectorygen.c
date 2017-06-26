/* User code: This file will not be overwritten by TASTE. */

#include "trajectorygen.h"
#include <stdio.h>
#include <math.h>
#include <time.h>



#define PI 3.14159265
 
long            ms_0; // Milliseconds
long            ms;
struct timespec spec;
double Path_x[5] = {0, 0.5, 0.5, -0.5, -0.5};
double Path_y[5] = {0, 0.5, -0.5, -0.5, 0.5};
int i =0;
double r = 0.5;
double omega = 2*PI/10;

double xref, yref;

void trajectorygen_startup()
{
    clock_gettime(CLOCK_MONOTONIC_RAW, &spec);
 
    ms_0 = spec.tv_sec;
    
    xref = 0.0;
    yref = 0.0;
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void trajectorygen_PI_getReference(const asn1SccMyPositionData *IN_currentPos,
                                   asn1SccMyPositionData *OUT_refPos)
{
    clock_gettime(CLOCK_MONOTONIC_RAW, &spec);
 
      ms = spec.tv_sec; 
      printf("ms= %d\n ", ms);
      printf("ms_0= %d\n ", ms_0);
      printf("i = %d\n",i);
      
       if ((fabs(xref - IN_currentPos->xAct)<0.07)&&(fabs(yref - IN_currentPos->yAct)<0.07)&&(i!=4))
      {
          OUT_refPos->xAct = Path_x[i+1];
          OUT_refPos->yAct = Path_y[i+1];
//           OUT_refPos->xAct = 0.3;
//           OUT_refPos->yAct = 0.3;
          i = i+1;
          ms_0= ms;
      }
      else if ((fabs(xref - IN_currentPos->xAct)<0.07)&&(fabs(yref - IN_currentPos->yAct)<0.07)&&(i==4))
      {
          OUT_refPos->xAct = Path_x[i+1];
          OUT_refPos->yAct = Path_y[i+1];
//           OUT_refPos->xAct = 0.3;
//           OUT_refPos->yAct = 0.3;
          i = 1;
          ms_0= ms;
      }
      else
      {
          OUT_refPos->xAct = Path_x[i];
          OUT_refPos->yAct = Path_y[i];
//           OUT_refPos->xAct = 0.3;
//           OUT_refPos->yAct = 0.3;
      }
      
      
      
//       xref = r*cos(omega*(ms-ms_0));
//       yref = r*sin(omega*(ms-ms_0));
//       
      xref = OUT_refPos->xAct;
      yref = OUT_refPos->yAct;
       
    /* Write your code here! */
    
}

