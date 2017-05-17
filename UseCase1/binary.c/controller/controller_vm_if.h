/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef VM_IF_controller
#define VM_IF_controller

#ifdef __cplusplus
extern "C" {
#endif

#include "C_ASN1_Types.h"

/*
 * Function initialization:
 * Calls all dependent user (or GUI) startup code - including sychronous RI
*/
void init_controller();

void controller_Compute_Force (void *pmy_ReferenceHeight, size_t size_my_ReferenceHeight, void *pmy_HeightVelocity, size_t size_my_HeightVelocity, void *pmy_Height, size_t size_my_Height, void *pmy_Force, size_t *psize_my_Force);
extern void controller_PI_Compute_Force (const asn1SccMyReal *, const asn1SccMyReal *, const asn1SccMyReal *, asn1SccMyReal *);
#ifdef __cplusplus
}
#endif

#endif
