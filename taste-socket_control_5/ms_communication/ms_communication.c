/* User code: This file will not be overwritten by TASTE. */

#include "ms_communication.h"
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


void ms_communication_startup()
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

    printf( " Current time from pixycam function: % " PRIdMAX ".%03ld seconds since the Epoch\n ",
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

void ms_communication_PI_get_raw_MSD()
{
    /* Write your code here! */
    printf("starting pixycam_PI_rawdata()\n");
    printTime();    
    // Pixy Block buffer // 
        struct Block blocks[BLOCK_BUFFER_SIZE];


        static bool run_flag = true;
        
        //int      i;        
        int      index;
        int      blocks_copied;
        char     buf[128];

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
        
        asn1SccT_UInt32 x;
        asn1SccT_UInt32 y;
        
//         while(run_flag)

        //{

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

            printf("frame :\n");
            
            for(index = 0; index != blocks_copied; ++index) 
            {    
                //blocks[index].print(buf);

                sprintf(buf, "CC block! (%d decimal) x: %d y: %d width: %d height: %d angle %d", blocks[index].signature, blocks[index].x, blocks[index].y, blocks[index].width, blocks[index].height, blocks[index].angle);
                printf("  %s\n", buf);
                x=blocks[index].x;
                y=blocks[index].y;
                ms_communication_RI_process_MSD(&x , &y);
            }
            //i++;
            //run_flag = FALSE;
        //}
        
        printf("end of pixycam_PI_rawdata()\n");
        printTime();
}

