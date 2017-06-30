/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_trajectorygen__
#define __USER_CODE_H_trajectorygen__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void trajectorygen_startup();

void trajectorygen_PI_getReference(const asn1SccMyPositionControlData *,
                                   const asn1SccMyPositionControlData *,
                                   const asn1SccMyPositionControlData *,
                                   asn1SccMyPositionControlData *,
                                   asn1SccMyPositionControlData *,
                                   asn1SccMyPositionControlData *);

#ifdef __cplusplus
}
#endif


#endif
