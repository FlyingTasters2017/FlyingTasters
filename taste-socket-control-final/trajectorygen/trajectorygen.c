/* User code: This file will not be overwritten by TASTE. */

#include "trajectorygen.h"
#include <stdio.h>
#include <math.h>
#include <time.h>



#define PI 3.14159265
 
long            ms_0; // Milliseconds
long            ms;
struct timespec spec;
double Path_x[5] = {0.5, 0.5, -0.5, -0.5};
double Path_y[5] = {0.5, -0.5, -0.5, 0.5};
int i =0, j=1, k=2;
double r = 0.7;
double omega = 2*PI/10;

double xref, yref;

void trajectorygen_startup()
{
    clock_gettime(CLOCK_MONOTONIC_RAW, &spec);
 
    ms_0 = spec.tv_sec;
    
    xref = 0.5;
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
      
       if (((ms-ms_0) > 7) && (i != 3))
      {
          OUT_refPos->x0Act = Path_x[i+1];
          OUT_refPos->y0Act = Path_y[i+1];
          OUT_refPos->x1Act = Path_x[j+1];
          OUT_refPos->y1Act = Path_y[j+1];
          OUT_refPos->x2Act = Path_x[k+1];
          OUT_refPos->y2Act = Path_y[k+1];
//           OUT_refPos->xAct = 0.3;
//           OUT_refPos->yAct = 0.3;
          i = i+1;
          j = j+1;
          k = k+1;
          ms_0= ms;
      }
      else if (((ms-ms_0) > 7) && (i == 3))
      {
          OUT_refPos->x0Act = Path_x[i+1];
          OUT_refPos->y0Act = Path_y[i+1];
          OUT_refPos->x1Act = Path_x[i+1];
          OUT_refPos->y1Act = Path_y[i+1];
          OUT_refPos->x2Act = Path_x[i+1];
          OUT_refPos->y2Act = Path_y[i+1];
//           OUT_refPos->xAct = 0.3;
//           OUT_refPos->yAct = 0.3;
          i = 0;
          j =1;
          k =2;
          ms_0= ms;
      }
      else
      {
          OUT_refPos->x0Act = Path_x[i];
          OUT_refPos->y0Act = Path_y[i];
          OUT_refPos->x1Act = Path_x[i];
          OUT_refPos->y1Act = Path_y[i];
          OUT_refPos->x2Act = Path_x[i];
          OUT_refPos->y2Act = Path_y[i];
//           OUT_refPos->xAct = 0.3;
//           OUT_refPos->yAct = 0.3;
      }
      
      
      
;
      
//       xref = OUT_refPos->x0Act;
//       yref = OUT_refPos->y0Act;
      
      
//       xref = r*cos(omega*(ms-ms_0));
//       yref = r*sin(omega*(ms-ms_0));
// 
//       OUT_refPos->x0Act =xref;
//       OUT_refPos->y0Act =yref;
//       OUT_refPos->x1Act =xref;
//       OUT_refPos->y1Act =yref;
//       OUT_refPos->x2Act =xref;
//       OUT_refPos->y2Act =yref;
       
    /* Write your code here! */
    
}

