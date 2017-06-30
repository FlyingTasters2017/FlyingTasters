/* User code: This file will not be overwritten by TASTE. */

#include "cclient.h"
#include <stdio.h>

asn1SccMyDroneData droneData;
void cclient_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void cclient_PI_takeoff(asn1SccMyDroneData *OUT_droneData)
{
    /* Write your code here! */
    /*float thrust;
    float yaw;
    float roll;
    float pitch;
    
    printf("Enter thrustRef: ");
    scanf("%f", thrust);
    
    printf("Enter yaw: ");
    scanf("%f", yaw);
    
    printf("Enter roll: ");
    scanf("%f", roll);
    
    printf("Enter pitch: ");
    scanf("%f", pitch);
    
    OUT_droneData->thrustRef = thrust;
    OUT_droneData->yawrateRef = yaw;
    OUT_droneData->rollRef = roll;
    OUT_droneData->pitchRef = pitch;*/
    
    
    
    droneData.zRef=0.3;
    droneData.yawrateRef=0.25;
    droneData.rollRef=0.25;
    droneData.pitchRef=0;
    
    OUT_droneData = &droneData;
    
    /*float thrust=30;
        
    OUT_droneData->thrustRef = thrust;
    OUT_droneData->yawrateRef = 0;
    OUT_droneData->rollRef = 0;
    OUT_droneData->pitchRef = 0;*/
}

