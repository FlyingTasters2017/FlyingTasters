/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef VM_IF_model_1dof
#define VM_IF_model_1dof

#ifdef __cplusplus
extern "C" {
#endif

#include "C_ASN1_Types.h"

/*
 * Function initialization:
 * Calls all dependent user (or GUI) startup code - including sychronous RI
*/
void init_model_1dof();

void model_1dof_Compute_Thrust (void *pmy_F, size_t size_my_F, void *pmy_h, size_t *psize_my_h, void *pmy_dh, size_t *psize_my_dh);
extern void model_1dof_PI_Compute_Thrust (const asn1SccMyReal *, asn1SccMyReal *, asn1SccMyReal *);
#ifdef __cplusplus
}
#endif

#endif
