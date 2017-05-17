/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef VM_IF_ground
#define VM_IF_ground

#ifdef __cplusplus
extern "C" {
#endif

#include "C_ASN1_Types.h"

/*
 * Function initialization:
 * Calls all dependent user (or GUI) startup code - including sychronous RI
*/
void init_ground();

void ground_Thrust_Update (void *pmy_H, size_t size_my_H);
extern void ground_PI_Thrust_Update (const asn1SccMyReal *);
void ground_dHeight (void *pmy_dH, size_t size_my_dH);
extern void ground_PI_dHeight (const asn1SccMyReal *);
void ground_gui_polling_ground ();
extern void ground_PI_gui_polling_ground ();
#ifdef __cplusplus
}
#endif

#endif
