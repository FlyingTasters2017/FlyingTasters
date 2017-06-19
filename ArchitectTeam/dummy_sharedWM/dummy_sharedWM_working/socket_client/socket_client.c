/* User code: This file will not be overwritten by TASTE. */

#include "socket_client.h"
#include <stdio.h>

asn1SccMyInteger    *raw_asd;

void socket_client_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void socket_client_PI_send_control_data(const asn1SccMyInteger *IN_control_input)
{
    printf("send control");
    
    *raw_asd    =   0;
    socket_client_RI_put_raw_ASD(raw_asd);
    printf("receive input");
    
}

