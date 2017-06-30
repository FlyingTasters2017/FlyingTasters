/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_socket_client__
#define __USER_CODE_H_socket_client__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void socket_client_startup();

void socket_client_PI_send_control_data(const asn1SccMultiDroneControllerInput *);

extern void socket_client_RI_put_raw_asd(const asn1SccMultiDroneSensorData *);

#ifdef __cplusplus
}
#endif


#endif
