/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_drone_control__
#define __USER_CODE_H_drone_control__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void drone_control_startup();

void drone_control_PI_calculate_control_input(const asn1SccMyInteger *);

void drone_control_PI_get_control_data(asn1SccMyInteger *);

#ifdef __cplusplus
}
#endif


#endif
