/* User code: This file will not be overwritten by TASTE. */

#include <stdio.h>

#include "function1.h"
#include <time.h>
#include <inttypes.h>
#include <math.h>

#define _POSIX_C_SOURCE 200809L

void function1_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void printTime()
{    
    long            ms; // Milliseconds
    time_t          s;  // Seconds
    struct timespec spec;

    clock_gettime(CLOCK_REALTIME, &spec);
    s  = spec.tv_sec;
    ms = round(spec.tv_nsec / 1.0e6); // Convert nanoseconds to milliseconds

    printf( " Current time: % " PRIdMAX ".%03ld seconds since the Epoch\n ",
           (intmax_t)s, ms);
}

void function1_PI_tick()
{
    printTime();
    
    static int cnt = 0;
    
    asn1SccTC_T commands;
    
    commands.roll = 0.0;
    commands.pitch = 0.0;
    commands.yaw = 0.0;
    commands.thrust = 1000;
    
    /* Write your code here! */
    function1_RI_TC_from_TASTE(&commands);
}

void function1_PI_TM_from_CF(const asn1SccTM_T *IN_tm_data)
{
    /* Write your code here! */
    
    asn1SccTM_T tm_data = *IN_tm_data;
    
    printf("Gyro   : (%.6f | %.6f | %.6f)\n", tm_data.gyro.x, tm_data.gyro.y, tm_data.gyro.z);
    printf("Acc    : (%.6f | %.6f | %.6f)\n", tm_data.acc.x, tm_data.acc.y, tm_data.acc.z);
    printf("Height : (%d)\n\n", tm_data.z);

    //fflush(stdout);
}

