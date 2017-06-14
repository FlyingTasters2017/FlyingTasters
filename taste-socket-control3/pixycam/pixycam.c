/* User code: This file will not be overwritten by TASTE. */

#include "pixycam.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pixy.h"
#include <stdbool.h>


void pixycam_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void pixycam_PI_rawdata()
{

        #define BLOCK_BUFFER_SIZE    25



        // Pixy Block buffer // 

        
        struct Block blocks[BLOCK_BUFFER_SIZE];



        static bool run_flag = true;
        int i;
                
        int      index;
        int      blocks_copied;
        int      pixy_init_status;
        char     buf[128];

        // Catch CTRL+C (SIGINT) signals //
        //signal(SIGINT, handle_SIGINT);

        //printf("Hello Pixy:\n libpixyusb Version: %s\n", __LIBPIXY_VERSION__);

        // Connect to Pixy //
        pixy_init_status = pixy_init();
        printf("pixy_init(): ");

        // Was there an error initializing pixy? //
        if(!pixy_init_status == 0)
        {
            // Error initializing Pixy //
            printf("pixy_init(): ");
            pixy_error(pixy_init_status);

            //return pixy_init_status;
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
            } else {
            // Success //
            printf(" Pixy Firmware Version: %d.%d.%d\n", major, minor, build);
            }
        }
        printf("Detecting blocks...\n");
        
        asn1SccT_UInt32 x;
        asn1SccT_UInt32 y;
        
        while(run_flag)

        {

            // Wait for new blocks to be available //

            while(!pixy_blocks_are_new() && run_flag); 



            // Get blocks from Pixy //

            blocks_copied = pixy_get_blocks(BLOCK_BUFFER_SIZE, &blocks[0]);



            if(blocks_copied < 0) {

            // Error: pixy_get_blocks //

            printf("pixy_get_blocks(): ");

            pixy_error(blocks_copied);

            }



            // Display received blocks //

            printf("frame %d:\n", i);

            for(index = 0; index != blocks_copied; ++index) {    

            //blocks[index].print(buf);

                sprintf(buf, "CC block! (%d decimal) x: %d y: %d width: %d height: %d angle %d", blocks[index].signature, blocks[index].x, blocks[index].y, blocks[index].width, blocks[index].height, blocks[index].angle);
                printf("  %s\n", buf);
                x=blocks[index].x;
                y=blocks[index].y;
                pixycam_RI_processData(&x, &y);
            }
            i++;

        }

        pixy_close();
}
