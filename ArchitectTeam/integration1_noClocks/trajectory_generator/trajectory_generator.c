/* User code: This file will not be overwritten by TASTE. */

#include "trajectory_generator.h"
#include <stdio.h>
#include <math.h>
#include <time.h>
#define PI 3.14159265

long            ms_0; // Milliseconds
time_t          s_0;
long            ms;
time_t          s;
struct timespec spec;

asn1SccTrajectory Ref;

int i =0;

asn1SccReferencePath myFlightPlan;

void trajectory_generator_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */

    
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

void trajectory_generator_PI_choose_trajectory(const asn1SccWorldData *IN_processed_world_data,
                                               const asn1SccSafetyInterupt *IN_world_safety_events,
                                               asn1SccMultiControlError *OUT_control_error)
{
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
     
      
      ref_x = myFlightPlan.locations.arr[i].x;
      ref_y = myFlightPlan.locations.arr[i].y;
      
      double error_x = ref_x - x;
      double error_y = ref_y - y;      
      double psi = (*IN_processed_world_data).agents.arr[0].currentOrientation.yaw;
      
      (*OUT_control_error).bodyFrameError.arr[0].x = error_x*cos(psi) + error_y*sin(psi);
      (*OUT_control_error).bodyFrameError.arr[0].y = error_y*cos(psi) - error_x*sin(psi);
      
}

