/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_trajectory_generator__
#define __USER_CODE_H_trajectory_generator__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void trajectory_generator_startup();

void trajectory_generator_PI_choose_trajectory(const asn1SccMyInteger *,
                                               const asn1SccMyInteger *,
                                               asn1SccMyInteger *);

#ifdef __cplusplus
}
#endif


#endif
