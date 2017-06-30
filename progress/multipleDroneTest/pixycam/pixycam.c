/* User code: This file will not be overwritten by TASTE. */
#include "pixycam.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include <inttypes.h>
#include <math.h>
#include <time.h>

#define _POSIX_C_SOURCE 200809L

int pixy_init_status;
asn1SccMyDroneData droneData;
asn1SccMySensorData sensorData;


void pixycam_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
    //pixy_taste_init();
    
}

void printTime() {
    long            ms; // Milliseconds
    time_t          s;  // Seconds
    struct timespec spec;

    clock_gettime(CLOCK_REALTIME, &spec);

    s  = spec.tv_sec;
    ms = round(spec.tv_nsec / 1.0e6); // Convert nanoseconds to milliseconds

    printf( " Current time: % " PRIdMAX ".%03ld seconds since the Epoch\n ",
           (intmax_t)s, ms);
}

void pixy_taste_init()
{
  //
}
void pixycam_PI_pulse()
{
//
        
        static bool run_flag = true;
//
        
        
        while(run_flag)
        {
//          
            printTime();
            pixycam_RI_readStabilizerSendThrust(&droneData,&sensorData);
        }
}
