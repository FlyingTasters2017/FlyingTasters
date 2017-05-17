/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifdef __unix__
    #include <stdlib.h>
    #include <stdio.h>
#else
    typedef unsigned size_t;
#endif

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
void obsw_Takeoff (void *pmy_Ref_H, size_t size_my_Ref_H)
{
    /* Decoded input variable(s): developer can use them */
    static asn1SccMyReal IN_Ref_H;

#ifdef __unix__
    asn1SccMyReal_Initialize(&IN_Ref_H);
#endif

    /* Decode each input parameter */
    if (0 != Decode_UPER_MyReal (&IN_Ref_H, pmy_Ref_H, size_my_Ref_H)) {
        #ifdef __unix__
            printf("\nError Decoding MyReal\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    obsw_PI_Takeoff (&IN_Ref_H);

}
