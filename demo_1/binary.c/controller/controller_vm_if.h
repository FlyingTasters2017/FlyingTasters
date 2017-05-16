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

void controller_Compute_Input (void *pmy_Ref_h, size_t size_my_Ref_h, void *pmy_dh, size_t size_my_dh, void *pmy_h, size_t size_my_h, void *pmy_F, size_t *psize_my_F);
extern void controller_PI_Compute_Input (const asn1SccMyReal *, const asn1SccMyReal *, const asn1SccMyReal *, asn1SccMyReal *);
#ifdef __cplusplus
}
#endif

#endif
