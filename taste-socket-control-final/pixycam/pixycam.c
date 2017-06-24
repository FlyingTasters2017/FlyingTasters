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

#define _POSIX_C_SOURCE 200809L


#define BLOCK_BUFFER_SIZE    25
int pixy_init_status;

asn1SccT_UInt32 x[3];
asn1SccT_UInt32 y[3];

asn1SccT_UInt32 x_proc[3];
asn1SccT_UInt32 y_proc[3];

void pixycam_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
    pixy_taste_init();
    
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
    printf("Start pixycam_PI_rawdata()\n");
    printTime();    
    // Pixy Block buffer // 
        struct Block blocks[BLOCK_BUFFER_SIZE];


        static bool run_flag = true;
        
        //int      i;        
        int      index;
        int      blocks_copied;
        char     buf[128];
        asn1SccMyDroneData droneData;
        asn1SccMySensorData sensorData;
        asn1SccMyPositionData positionData;
        asn1SccMyPositionData procpositionData;

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
        
        
        pixycam_RI_takeoff(&droneData);
        
        while(run_flag)

        {
            printf("Start cycle\n");
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
            printf("Frame :\n");
            printf("Number of detections: %d\n", blocks_copied);
            int trueMarkerRed =0, maxAreaRed =0, areaRed =0;
            int trueMarkerYellow = 0, maxAreaYellow =0, areaYellow =0;
            int trueMarkerBlue = 0, maxAreaBlue =0, areaBlue =0;
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
                if(blocks[index].signature==4)
                {
                    areaYellow = blocks[index].height*blocks[index].width;
                    if(areaYellow>maxAreaYellow)
                    {
                        trueMarkerYellow=index;
                        maxAreaYellow = areaYellow;
                        x[2]=blocks[trueMarkerYellow].x;
                        y[2]=blocks[trueMarkerYellow].y;
                        
                    }                    
                }
            }
            
            printf("Red object : %d \n",trueMarkerRed);
            printf("Blue object : %d \n",trueMarkerBlue);
            printf("Yellow object : %d \n",trueMarkerYellow);
            
            
            
//             printf("Red object x : %d \n",x[0]);
//             printf("Red object y : %d \n",y[0]);
//             
//            
//             
//             printf("Blue object x : %d \n",x[1]);
//             printf("Blue object y : %d \n",y[1]);
//             
//             
//             
//             printf("Yellow object : %d \n",x[2]);
//             printf("Yellow object : %d \n",y[2]);
            
            positionData.x0Act = x[0];
            positionData.y0Act = y[0];
            printf("Red object x : %f \n", positionData.x0Act);
            printf("Red object y : %f \n", positionData.y0Act);
            
            positionData.x1Act = x[1];
            positionData.y1Act = y[1];
            printf("Red object x : %f \n", positionData.x1Act);
            printf("Red object y : %f \n", positionData.y1Act);;
            
            positionData.x2Act = x[2];
            positionData.y2Act = y[2];
            printf("Yellow object : %f \n",positionData.x2Act);
            printf("Yellow object : %f \n",positionData.y2Act);
            
            
            pixycam_RI_processData(&positionData, &procpositionData);
            
//             positionData[0].xAct = x_proc[0];
//             positionData[0].yAct = y_proc[0];
//             printf("Red object x : %f \n",x_proc[0]);
//             printf("Red object y : %f \n",y_proc[0]);
//             
//             positionData[1].xAct = x_proc[1];
//             positionData[1].yAct = y_proc[1];
//             printf("Blue object x : %f \n",x_proc[1]);
//             printf("Blue object y : %f \n",y_proc[1]);
//             
//             positionData[2].xAct = x_proc[2];
//             positionData[2].yAct = y_proc[2];
//             printf("Yellow object : %f \n",x_proc[2]);
//             printf("Yellow object : %f \n",y_proc[2]);
            
            
        
            printf("starting drone comm:\n");
            printTime();
            pixycam_RI_readStabilizerSendThrust(&droneData,&procpositionData,&sensorData);
        }
        printf("end of pixycam_PI_rawdata()\n");
        printTime();
}
