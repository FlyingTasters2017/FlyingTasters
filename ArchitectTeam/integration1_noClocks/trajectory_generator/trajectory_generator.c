/* User code: This file will not be overwritten by TASTE. */

#include "trajectory_generator.h"
#include "configurationDefinition.h"
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
    struct FormationConfig  myFormation;
    
    myFormation=get_configFile("../../Config");
    
    int locationNumber= myFormation.flightPlan.nlocations;
    char** loc;
    loc = str_split(myFormation.flightPlan.configLocations, ',');
    myFlightPlan.nlocations=locationNumber;
    if (loc)
    {
        int n=0; 
        int j=0;
        while(*(loc + n) && j<locationNumber)
        {
            myFlightPlan.locations.arr[j].x = atof(*(loc + n));
            myFlightPlan.locations.arr[j].y=atof(*(loc + n+1));
            myFlightPlan.locations.arr[j].z=atof(*(loc + n+2));
            myFlightPlan.actions.arr[j].yaw_rate=atof(*(loc + n+3));
            myFlightPlan.actions.arr[j].duration=atof(*(loc + n+4));
            j=j+1;
            n=n+5;
        }
          
    }
    
    clock_gettime(CLOCK_MONOTONIC_RAW, &spec);
  
    s_0 = spec.tv_sec;

    ms_0 = round(spec.tv_nsec/1e6);
}

void trajectory_generator_PI_choose_trajectory(const asn1SccWorldData *IN_processed_world_data,
                                              const asn1SccSafetyInterupt *IN_world_safety_events,
                                              asn1SccTrajectory *OUT_control_error)
{
      printf("i = %d\n",i);
      clock_gettime(CLOCK_MONOTONIC_RAW, &spec);
      s = spec.tv_sec;
      ms = round(spec.tv_nsec/1e6);
      
      double ref_x = myFlightPlan.locations.arr[i].x;
      double ref_y = myFlightPlan.locations.arr[i].y;
      
      double x = IN_processed_world_data->agentData.currentPosition.x;
      double y = IN_processed_world_data->agentData.currentPosition.y;
      
      double threshold_pos = 0.05;// unit: m
      double threshold_time = 100;// unit: Milliseconds
      
      
      if (fabs(ref_x -x)<threshold_pos && fabs(ref_y - y)<threshold_pos && (s*1000 + ms - s_0*1000 -ms_0)>threshold_time)
      {
          
          i = i+1;
          ms_0= ms;
          s_0 =s;
      }
     
      
      ref_x = myFlightPlan.locations.arr[i].x;
      ref_y = myFlightPlan.locations.arr[i].y;
      
      double error_x = ref_x - x;
      double error_y = ref_y - y;      
      double psi = IN_processed_world_data->agentData.currentOrientation.yaw;
      
      OUT_control_error->x = error_x*cos(psi) + error_y*sin(psi);
      OUT_control_error->y = error_y*cos(psi) - error_x*sin(psi);
      
}
