/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_houston__
#define __USER_CODE_H_houston__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void houston_startup();

void houston_PI_put_drone_data(const asn1SccMyInteger *);

void houston_PI_control_agents(const asn1SccMyInteger *);

extern void houston_RI_put_raw_ASD(const asn1SccMyInteger *);

extern void houston_RI_send_control_data(const asn1SccMyInteger *);

#ifdef __cplusplus
}
#endif


#endif
