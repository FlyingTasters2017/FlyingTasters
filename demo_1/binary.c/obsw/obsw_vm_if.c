/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <stdlib.h>
#include <stdio.h>

#include "obsw_vm_if.h"

#include "C_ASN1_Types.h"

void init_obsw()
{
    static int init = 0;

    if (!init) {
        init = 1;
        extern void init_controller();
        init_controller();
        extern void init_drone_model();
        init_drone_model();
        extern void init_x86_partition_taste_api();
        init_x86_partition_taste_api();
    }
    /* Calling Ada initialization code */
    adainit();
}

void obsw_Pulse ()
{
    /* Call to User-defined function */
    obsw_PI_Pulse ();

}
void obsw_Takeoff (void *pmy_Ref_h, size_t size_my_Ref_h)
{
    /* Decoded input variable(s): developer can use them */
    static asn1SccMyReal IN_Ref_h;

#ifdef __unix__
    asn1SccMyReal_Initialize(&IN_Ref_h);
#endif

    /* Decode each input parameter */
    if (0 != Decode_UPER_MyReal (&IN_Ref_h, pmy_Ref_h, size_my_Ref_h)) {
        printf("\nError Decoding MyReal\n");
        return;
    }

    /* Call to User-defined function */
    obsw_PI_Takeoff (&IN_Ref_h);

}
