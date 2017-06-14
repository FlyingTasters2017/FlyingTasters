/* User code: This file will not be overwritten by TASTE. */

#include "pixyprocess.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void pixyprocess_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void pixyprocess_PI_processData(const asn1SccT_UInt32 *IN_x,
                                const asn1SccT_UInt32 *IN_y)
{
    /* Write your code here! */

    printf("\n function 3 \n");
    int x = *IN_x;
    int y = *IN_y;   
   
    
    int xp=x; 
    //pixy center x , pixels
    
    int yp=y; 
    // pixy center y ,  pixels
    
    int hdrone=1;   
    //drone height from laser sensor, m
    
    int ResX=320;   
    // wide side resolution of the camera
    int ResY=200;
    // narrow side resolution of the camera
    
    //FovY=47*pi/180; %narrow side FOV angle of camera
    
    int hcam=2.57;   
    //camera haight from the ground
    
    float ppg=10.64/1000;  
    //%per pixel real distance on the ground, m- ENTER THE FORMULA HERE

    float perpix = ppg*(hcam-hdrone)/hcam;  
    //%per pix in drone height
    
    
    
    float xtr_p=xp-ResX/2;    
    float ytr_p=yp-ResY/2;
    //%transferred according to the center of the frame
    
    
    float xreal=xtr_p*perpix;
    float yreal=ytr_p*perpix;

    printf("\n x: %f; y: %f; \n", xreal, yreal);
}

