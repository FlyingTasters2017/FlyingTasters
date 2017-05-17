/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef VM_IF_obsw
#define VM_IF_obsw

#ifdef __cplusplus
extern "C" {
#endif

#include "C_ASN1_Types.h"

/*
 * Function initialization:
 * Calls all dependent user (or GUI) startup code - including sychronous RI
*/
void init_obsw();

extern void adainit();
void obsw_Pulse ();
extern void obsw_PI_Pulse ();
void obsw_Start_work (void *pmy_Int_F, size_t size_my_Int_F);
extern void obsw_PI_Start_work (const asn1SccMyReal *);
#ifdef __cplusplus
}
#endif

#endif
