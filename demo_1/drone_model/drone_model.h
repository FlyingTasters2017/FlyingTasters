/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_drone_model__
#define __USER_CODE_H_drone_model__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void drone_model_startup();

void drone_model_PI_Response(const asn1SccMyReal *,
                             asn1SccMyReal *,
                             asn1SccMyReal *);

void drone_model_PI_PI1();

#ifdef __cplusplus
}
#endif


#endif
