/* User code: This file will not be overwritten by TASTE. */

#include "csupervisor.h"
#include "pixyprocess.h"

int n;

void csupervisor_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
    n =0;
}


void csupervisor_PI_pulse()
{
    /* Write your code here! */
    asn1SccT_UInt32 x;
    asn1SccT_UInt32 y;
    asn1SccMyDroneData droneData;
    asn1SccMySensorData sensorData;
    
//     asn1SccMyPositionData posData;
    
    csupervisor_RI_takeoff(&droneData);
     n = n+1;
    printf("Pulse number : %d\n", n);
    
    while(1){
        printf("Start Cyle");
        csupervisor_RI_printTime();
        csupervisor_RI_readStabilizerSendThrust(&droneData,&sensorData);
        printf("Start Camera Commuication");
        csupervisor_RI_printTime();
        csupervisor_RI_rawdata();
        
        
    }
    
   
}

