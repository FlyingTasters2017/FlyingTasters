/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifdef __unix__
    #include <stdlib.h>
    #include <stdio.h>
#else
    typedef unsigned size_t;
#endif

#include "supervisor_vm_if.h"

#include "C_ASN1_Types.h"

void init_supervisor()
{
    static int init = 0;

    if (!init) {
        init = 1;
        extern void init_socketclient();
        init_socketclient();
        extern void init_x86_partition_taste_api();
        init_x86_partition_taste_api();
    }
    /* Calling Ada initialization code */
    adainit();
}

void supervisor_pulse ()
{
    /* Call to User-defined function */
    supervisor_PI_pulse ();

}
void supervisor_takeoff (void *pmy_ref_thrust, size_t size_my_ref_thrust)
{
    /* Decoded input variable(s): developer can use them */
    static asn1SccMyReal IN_ref_thrust;

#ifdef __unix__
    asn1SccMyReal_Initialize(&IN_ref_thrust);
#endif

    /* Decode each input parameter */
    if (0 != Decode_UPER_MyReal (&IN_ref_thrust, pmy_ref_thrust, size_my_ref_thrust)) {
        #ifdef __unix__
            printf("\nError Decoding MyReal\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    supervisor_PI_takeoff (&IN_ref_thrust);

}
