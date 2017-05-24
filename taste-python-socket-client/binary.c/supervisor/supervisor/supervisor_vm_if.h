/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef VM_IF_supervisor
#define VM_IF_supervisor

#ifdef __cplusplus
extern "C" {
#endif

#include "C_ASN1_Types.h"

/*
 * Function initialization:
 * Calls all dependent user (or GUI) startup code - including sychronous RI
*/
void init_supervisor();

extern void adainit();
void supervisor_pulse ();
extern void supervisor_PI_pulse ();
void supervisor_takeoff (void *pmy_ref_thrust, size_t size_my_ref_thrust);
extern void supervisor_PI_takeoff (const asn1SccMyReal *);
#ifdef __cplusplus
}
#endif

#endif
