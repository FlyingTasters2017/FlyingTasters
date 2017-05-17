/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef VM_IF_drone_model
#define VM_IF_drone_model

#ifdef __cplusplus
extern "C" {
#endif

#include "C_ASN1_Types.h"

/*
 * Function initialization:
 * Calls all dependent user (or GUI) startup code - including sychronous RI
*/
void init_drone_model();

void drone_model_Response (void *pmy_Force, size_t size_my_Force, void *pmy_HeightVelocity, size_t *psize_my_HeightVelocity, void *pmy_Height, size_t *psize_my_Height);
extern void drone_model_PI_Response (const asn1SccMyReal *, asn1SccMyReal *, asn1SccMyReal *);
#ifdef __cplusplus
}
#endif

#endif
