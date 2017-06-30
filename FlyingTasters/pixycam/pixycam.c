/* User code: This file will not be overwritten by TASTE. */

#include "pixycam.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pixy.h"
#include <stdbool.h>

#include <inttypes.h>
#include <math.h>
#include <time.h>
#include <unistd.h> // delete later

#define _POSIX_C_SOURCE 200809L

#define BLOCK_BUFFER_SIZE    25
int pixy_init_status;
int skip = 1;

struct timespec spec;

long            s_0;
long            ms_0; /// Milliseconds
long            s;
long            ms;
long systemrate;

asn1SccT_UInt32 x[3];
asn1SccT_UInt32 y[3];

asn1SccT_UInt32 x_proc[3];
asn1SccT_UInt32 y_proc[3];

asn1SccMyPositionControlData procpositionDataRed, procpositionDataBlue, procpositionDataGreen;
asn1SccMyPositionControlData positionDataRed, positionDataBlue, positionDataGreen;

void pixycam_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
    pixy_taste_init();
    
    clock_gettime(CLOCK_MONOTONIC_RAW, &spec);
 
    s_0 = spec.tv_sec; 
    ms_0 = spec.tv_nsec;
    
}

void printTime() {
    long            ms; // Milliseconds
    time_t          s;  // Seconds
    struct timespec spec;

    clock_gettime(CLOCK_MONOTONIC_RAW, &spec);

    s  = spec.tv_sec;
    ms = round(spec.tv_nsec / 1.0e6); // Convert nanoseconds to milliseconds

    printf( " Current time: % " PRIdMAX ".%03ld seconds since the Epoch\n ",
           (intmax_t)s, ms);
}

void pixy_taste_init()
{
    // Connect to Pixy //
    pixy_close();
    {
        pixy_init_status = pixy_init();
        printf("pixy_init(): ");
        pixy_error(pixy_init_status);
    }
    
    // Request Pixy firmware version //
    {
        uint16_t major;
        uint16_t minor;
        uint16_t build;
        int      return_value;

        return_value = pixy_get_firmware_version(&major, &minor, &build);

        if (return_value) {
            // Error //
            printf("Failed to retrieve Pixy firmware version. ");
            pixy_error(return_value);

            //return return_value;
            } 
        else {
            // Success //
            printf(" Pixy Firmware Version: %d.%d.%d\n", major, minor, build);
        }
    }
}
void pixycam_PI_pulse()
{
    printf("Start pixycam_PI_pulse()\n");
    printTime();    
    // Pixy Block buffer // 
        struct Block blocks[BLOCK_BUFFER_SIZE];
        static bool run_flag = true;
        int      index;
        int      blocks_copied;
        char     buf[128];
//         asn1SccMyDroneData droneData;
//         asn1SccMySensorData sensorData;
//         asn1SccMyPositionData positionData;

//         asn1SccMyPositionData procpositionData;

        // Catch CTRL+C (SIGINT) signals //
        //signal(SIGINT, handle_SIGINT);
        //printf("Hello Pixy:\n libpixyusb Version: %s\n", __LIBPIXY_VERSION__);

        // Was there an error initializing pixy? //
        if(!pixy_init_status == 0)
        {
            // Error initializing Pixy //
            printf("pixy_init(): ");
            pixy_error(pixy_init_status);

            //return pixy_init_status;
        }
        
        printf("Detecting blocks...\n");
//         pixycam_RI_takeoff(&droneData);
        
        
        
        while(run_flag)

        {
            clock_gettime(CLOCK_MONOTONIC_RAW, &spec);
            s  = spec.tv_sec;
            ms = spec.tv_nsec;
        
            systemrate = (s*1000 +ms/1e6 - s_0*1000 -ms_0/1e6);
//             printf("system rate time : %d \n", systemrate);
//             if(systemrate>=50.0){
            printf("system rate time : %d \n", systemrate);
            ms_0 =ms;
            s_0 = s;
            printf("\n");
            printf("\n");
            printf("Start a new cycle\n");
            printf("\n");
            printf("\n");
            printTime();
            // Wait for new blocks to be available //
            
            while(!pixy_blocks_are_new() /*&& run_flag*/); 
            // Get blocks from Pixy //
            blocks_copied = pixy_get_blocks(BLOCK_BUFFER_SIZE, &blocks[0]);
            if(blocks_copied < 0) {
                // Error: pixy_get_blocks //
                printf("pixy_get_blocks(): ");
                pixy_error(blocks_copied);
            }

            // Display received blocks //
            printf("Number of detections: %d\n", blocks_copied);
            int trueMarkerRed =0, maxAreaRed =0, areaRed =0;
            int trueMarkerGreen = 0, maxAreaGreen =0, areaGreen =0;
            int trueMarkerBlue = 0, maxAreaBlue =0, areaBlue =0;
            if(skip%3==0)
            {
            for(index = 0; index != blocks_copied; ++index) 
            {    
                sprintf(buf, "CC block! (%d decimal) x: %d y: %d width: %d height: %d angle %d", blocks[index].signature, blocks[index].x, blocks[index].y, blocks[index].width, blocks[index].height, blocks[index].angle);
                printf("  %s\n", buf);
                
                if(blocks[index].signature==1)
                {
                    areaRed = blocks[index].height*blocks[index].width;
                    if(areaRed>maxAreaRed)
                    {
                        trueMarkerRed=index;
                        maxAreaRed = areaRed;
                        x[0]=blocks[trueMarkerRed].x;
                        y[0]=blocks[trueMarkerRed].y;
                    }
                    
                }
                if(blocks[index].signature==2)
                {
                    areaBlue = blocks[index].height*blocks[index].width;
                    if(areaBlue>maxAreaBlue)
                    {
                        trueMarkerBlue=index;
                        maxAreaBlue = areaBlue;
                        x[1]=blocks[trueMarkerBlue].x;
                        y[1]=blocks[trueMarkerBlue].y;
                    }                    
                }
                if(blocks[index].signature==3)
                {
                    areaGreen = blocks[index].height*blocks[index].width;
                    if(areaGreen>maxAreaGreen)
                    {
                        trueMarkerGreen=index;
                        maxAreaGreen = areaGreen;
                        x[2]=blocks[trueMarkerGreen].x;
                        y[2]=blocks[trueMarkerGreen].y;
                        
                    }                    
                }
            }
            
                         
            positionDataRed.xAct = x[0];
            positionDataRed.yAct = y[0];

            
            positionDataBlue.xAct = x[1];
            positionDataBlue.yAct = y[1];
            
            positionDataGreen.xAct = x[2];
            positionDataGreen.yAct = y[2];

            
            
            printf("starting drone comm:\n");
            printTime();
            pixycam_RI_readStabilizerSendThrust(&positionDataRed,&positionDataBlue,&positionDataGreen);
            }
            skip++;
            
            
            
            
            
//             }
            
        }
        printf("end of pixycam_PI_rawdata()\n");
        printTime();
}
