/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifdef __unix__
    #include <stdlib.h>
    #include <stdio.h>
#else
    typedef unsigned size_t;
#endif

#include "gcs_vm_if.h"

#include "gcs_gui_header.h"

#include "C_ASN1_Types.h"

void init_gcs()
{
    static int init = 0;

    if (!init) {
        init = 1;
        gcs_startup();
    }
}

void gcs_SensorData (void *pmy_updated_thrust, size_t size_my_updated_thrust)
{
    /* Decoded input variable(s): developer can use them */
    static asn1SccMyReal IN_updated_thrust;

#ifdef __unix__
    asn1SccMyReal_Initialize(&IN_updated_thrust);
#endif

    /* Decode each input parameter */
    if (0 != Decode_UPER_MyReal (&IN_updated_thrust, pmy_updated_thrust, size_my_updated_thrust)) {
        #ifdef __unix__
            printf("\nError Decoding MyReal\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    gcs_PI_SensorData (&IN_updated_thrust);

}
void gcs_gui_polling_gcs ()
{
    /* Call to User-defined function */
    gcs_PI_gui_polling_gcs ();

}
