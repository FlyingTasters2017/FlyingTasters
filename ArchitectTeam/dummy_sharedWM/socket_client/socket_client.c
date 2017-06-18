/* User code: This file will not be overwritten by TASTE. */

#include "socket_client.h"

void socket_client_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void socket_client_PI_talk_to_socket(const asn1SccMyInteger *IN_control_input,
                                     asn1SccMyInteger *OUT_asd_data)
{
    *OUT_asd_data = 1;
}

