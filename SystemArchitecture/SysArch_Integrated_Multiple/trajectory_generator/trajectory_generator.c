/* User code: This file will not be overwritten by TASTE. */

#include "trajectory_generator.h"
#include <stdio.h>
#include <math.h>
#include <time.h>
#include "../../Configuration.h"

#define PI 3.14159265
 
long            ms_0; // Milliseconds
long            ms;
struct timespec spec;
double Path_x[4] = {0.4, 0.4, -0.4, -0.4};
double Path_y[4] = {0.4, -0.4, -0.4, 0.4};
double r = 0.7;
double omega = 2*PI/10;

// asn1SccReferencePath myFlightPlan;

void trajectory_generator_startup()
{
    clock_gettime(CLOCK_MONOTONIC_RAW, &spec);
 
    ms_0 = spec.tv_sec;

}


/*
void trajectory_generator_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */

/*
    myFlightPlan.locations.arr[0].x=0.1;
    myFlightPlan.locations.arr[0].y=0.1;
    myFlightPlan.locations.arr[0].z=0.1;
    myFlightPlan.actions.arr[0].yaw_rate=30;
    myFlightPlan.actions.arr[0].duration=50;
    
    
    myFlightPlan.locations.arr[1].x=0.2;
    myFlightPlan.locations.arr[1].y=0.2;
    myFlightPlan.locations.arr[1].z=0.1;
    myFlightPlan.actions.arr[1].yaw_rate=30;
    myFlightPlan.actions.arr[1].duration=50;    
    
    clock_gettime(CLOCK_MONOTONIC_RAW, &spec);
  
    s_0 = spec.tv_sec;

    ms_0 = round(spec.tv_nsec/1e6);
}
*/
    
void trajectory_generator_PI_choose_trajectory(const asn1SccWorldData *IN_processed_world_data,
                                               const asn1SccSafetyInterupt *IN_world_safety_events,
                                               asn1SccMultiControlError *OUT_control_error)
{
    /*
      printf("i = %d\n",i);
      clock_gettime(CLOCK_MONOTONIC_RAW, &spec);
      s = spec.tv_sec;
      ms = round(spec.tv_nsec/1e6);
      
      double ref_x = myFlightPlan.locations.arr[i].x;
      double ref_y = myFlightPlan.locations.arr[i].y;
      
      double x = (*IN_processed_world_data).agents.arr[0].currentPosition.x;
      double y = (*IN_processed_world_data).agents.arr[0].currentPosition.y;
      
      double threshold_pos = 0.05;// unit: m
      double threshold_time = 100;// unit: Milliseconds
      
      
      if (fabs(ref_x -x)<threshold_pos && fabs(ref_y - y)<threshold_pos && (s*1000 + ms - s_0*1000 -ms_0)>threshold_time)
      {
          
          i = i+1;
          ms_0= ms;
          s_0 =s;
          
          if (i>1)
          {
              i=0;
          }
      }
     */
      
    clock_gettime(CLOCK_MONOTONIC_RAW, &spec);
    ms = spec.tv_sec; 
    
    double xRef_i,yRef_i,xOut_i,yOut_i,xError_i,yError_i,psi_i;
    if ((ms-ms_0) > 7)
    {
        for (int i=0;i<NR_OF_DRONES;i++)
        {
            xRef_i  =   Path_x[i];
            yRef_i  =   Path_y[i];
            
            xOut_i  = (*IN_processed_world_data).agents.arr[i].currentPosition.x;
            yOut_i  = (*IN_processed_world_data).agents.arr[i].currentPosition.y;
            
            xError_i= xRef_i-xOut_i;
            yError_i= yRef_i-yOut_i;
            
            psi_i = (*IN_processed_world_data).agents.arr[i].currentOrientation.yaw;
      
            (*OUT_control_error).bodyFrameError.arr[i].x = xError_i*cos(psi_i) + yError_i*sin(psi_i);
            (*OUT_control_error).bodyFrameError.arr[i].y = yError_i*cos(psi_i) - xError_i*sin(psi_i);
            (*OUT_control_error).bodyFrameError.arr[i].z = 0.3;               //this is actually not an error, but a reference height!!!
            (*OUT_control_error).bodyFrameError.arr[i].yaw = 0.0-psi_i;
            
            
            
        }
        ms_0= ms;
    }
}

