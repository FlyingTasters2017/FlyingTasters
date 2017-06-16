/* User code: This file will not be overwritten by TASTE. */

#include "msd_processing.h"

void msd_processing_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void msd_processing_PI_process_MSD(const asn1SccT_UInt32 *IN_x,
                                   const asn1SccT_UInt32 *IN_y,
                                   const asn1SccMyInteger *IN_sig)
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
    
    int hcam=2.5;   
    //camera haight from the ground
    
    float ppg=10.9e-3;  
    //%per pixel real distance on the ground, m- ENTER THE FORMULA HERE

    float perpix = ppg*(hcam-hdrone)/hcam;  
    //%per pix in drone height
    
    
    
    float xtr_p=xp-ResX/2;    
    float ytr_p=yp-ResY/2;
    //%transferred according to the center of the frame
    
    
    float xreal=xtr_p*perpix;
    float yreal=ytr_p*perpix;

    asn1SccMyReal xout=xreal;
    printf("\n x: %f; y: %f; \n", xreal, yreal);
    msd_processing_RI_display(&xout);
}

