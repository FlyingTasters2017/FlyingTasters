/* User code: This file will not be overwritten by TASTE. */

#include "pixyprocess.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include<assert.h>



#define MAXSIZE 20

float x_current;
float y_current;

int x;
int y;

int xp;
int yp;

float xtr_p;
float ytr_p;





void pixyprocess_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */

}

void pixyprocess_PI_processData(const asn1SccMyPositionControlData  *IN_positionData,
                                asn1SccMyPositionControlData *OUT_procpositionData)
{
    /* Write your code here! */
    int i=0;
    
    float hdrone=(IN_positionData->zAct/1000); //drone height from zRange laser sensor, m

   /* Linking of current drone height to reference height to avoid fluctuation from zRange data affecting the x and y position of markers*/ 
    if (hdrone<0.4)
    {
        hdrone = 0.3;
    }
    
    else
    {
        hdrone = 0.5;
    }
    
    
    
    int ResX=320;   
    // wide side resolution of the camera
    int ResY=200;
    // narrow side resolution of the camera
    
    //FovY=47*pi/180; %narrow side FOV angle of camera
    
    float hcam= 1.77;   
    //camera haight from the ground
    
    float ppg=7.4/1000;  
    //%per pixel real distance on the ground, m- ENTER THE FORMULA HERE

    float perpix = ppg*(hcam-hdrone)/hcam;  
    int addx[3], addy[3];
    
    //%per pix in drone height

    x = IN_positionData->xAct;
    y = IN_positionData->yAct;
            
        
    xp=x; 
    //pixy center x , pixels
    yp=y; 
    // pixy center y ,  pixels
    
    xtr_p=xp-ResX/2;    
    ytr_p=yp-ResY/2;
    //%transferred according to the center of the frame
    
    
    x_current=xtr_p*perpix;
    y_current=-ytr_p*perpix; //Negative sign to adjust for the orientation of the camera

    OUT_procpositionData->xAct = x_current;
    OUT_procpositionData->yAct = y_current;
    OUT_procpositionData->zAct = hdrone;
    

}

void pixyprocess_PI_getPosition(const asn1SccMyReal *IN_currHeight, asn1SccMyPositionData *OUT_currentPosition)
{

    
}
