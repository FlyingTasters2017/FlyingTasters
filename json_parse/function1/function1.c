/* User code: This file will not be overwritten by TASTE. */

#include "function1.h"
#include "jsmn.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pixy.h"
#include <stdbool.h>

static const char *JSON_STRING =
        "{\"row\": 25.363683654542, \"pitch\": 35.234324231231, \"yaw\": 2.56456425454}";


static int jsoneq(const char *json, jsmntok_t *tok, const char *s) {
        if (tok->type == JSMN_STRING && (int) strlen(s) == tok->end - tok->start &&
                        strncmp(json + tok->start, s, tok->end - tok->start) == 0) {
                return 0;
        }
        return -1;
}

void function1_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void function1_PI_getPixyData(asn1SccMyReal *OUT_x, asn1SccMyReal *OUT_y)
{
        int i;
        int r;
        jsmn_parser p;
        jsmntok_t t[128]; /* We expect no more than 128 tokens */

        jsmn_init(&p);
        r = jsmn_parse(&p, JSON_STRING, strlen(JSON_STRING), t, sizeof(t)/sizeof(t[0]));
        if (r < 0) {
                printf("Failed to parse JSON: %d\n", r);
        }

        /* Assume the top-level element is an object */
        if (r < 1 || t[0].type != JSMN_OBJECT) {
                printf("Object expected\n");
        }

        /* Loop over all keys of the root object */
        for (i = 1; i < r; i++) {
                if (jsoneq(JSON_STRING, &t[i], "row") == 0) {
                        /* We may use strndup() to fetch string value */
                        //printf("- row: %.*s\n", t[i+1].end-t[i+1].start,
                        //                JSON_STRING + t[i+1].start);
                        i++;
                } else if (jsoneq(JSON_STRING, &t[i], "pitch") == 0) {
                        /* We may additionally check if the value is either "true" or "false" */
                        //printf("- pitch: %.*s\n", t[i+1].end-t[i+1].start,
                        //                JSON_STRING + t[i+1].start);
                        i++;
                } else if (jsoneq(JSON_STRING, &t[i], "yaw") == 0) {
                        /* We may want to do strtol() here to get numeric value */
                        //printf("- yaw: %.*s\n", t[i+1].end-t[i+1].start,
                        //                JSON_STRING + t[i+1].start);
                        i++;
                } else {
                        //printf("Unexpected key: %.*s\n", t[i].end-t[i].start,
                        //                JSON_STRING + t[i].start);
                }
        }

        #define BLOCK_BUFFER_SIZE    25



        // Pixy Block buffer // 

        
        struct Block blocks[BLOCK_BUFFER_SIZE];



        static bool run_flag = true;
                
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
                //printf(&blocks[index].x);
                //GUI_RI_sendPixyData(blocks[index].x);
                //function1_RI_sendPixyData((decimal)blocks[index].x);
                //function1_RI_sendPixyData(12);
                *OUT_x = blocks[index].x;
                *OUT_y = blocks[index].y;
            }

            i++;

        }

        pixy_close();
        //*OUT_x=212;
        //*OUT_y=534;
        //printf(OUT_x);
        //printf(OUT_y);
}
