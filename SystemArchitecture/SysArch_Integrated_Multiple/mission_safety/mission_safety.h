/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_mission_safety__
#define __USER_CODE_H_mission_safety__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void mission_safety_startup();

void mission_safety_PI_check_mission_safety(const asn1SccWorldData *,
                                            asn1SccSafetyInterupt *);

#ifdef __cplusplus
}
#endif


#endif
