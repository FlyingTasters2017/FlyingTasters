/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_controller_sw__
#define __USER_CODE_H_controller_sw__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void controller_sw_startup();

void controller_sw_PI_Compute_Force(const asn1SccMyReal *,
                                    const asn1SccMyReal *,
                                    const asn1SccMyReal *,
                                    asn1SccMyReal *);

#ifdef __cplusplus
}
#endif


#endif
