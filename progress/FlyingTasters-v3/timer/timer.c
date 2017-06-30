/* User code: This file will not be overwritten by TASTE. */

#include "timer.h"


#include <inttypes.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

#define _POSIX_C_SOURCE 200809L

void timer_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void timer_PI_printTime()
{
    /* Write your code here! */
    
    long            ms; // Milliseconds
    time_t          s;  // Seconds
    struct timespec spec;

    clock_gettime(CLOCK_REALTIME, &spec);

    s  = spec.tv_sec;
    ms = round(spec.tv_nsec / 1.0e6); // Convert nanoseconds to milliseconds

    printf( " Current time: % " PRIdMAX ".%03ld seconds since the Epoch\n ",
           (intmax_t)s, ms);

    
}



