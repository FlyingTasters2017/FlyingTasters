/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_control_law__
#define __USER_CODE_H_control_law__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void control_law_startup();

void control_law_PI_Compute_Thrust(const asn1SccMyReal *,
                                   asn1SccMyReal *,
                                   asn1SccMyReal *);

#ifdef __cplusplus
}
#endif


#endif
