/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifdef __unix__
    #include <stdlib.h>
    #include <stdio.h>
#else
    typedef unsigned size_t;
#endif

#include "ground_vm_if.h"

#include "ground_gui_header.h"

#include "C_ASN1_Types.h"

void init_ground()
{
    static int init = 0;

    if (!init) {
        init = 1;
        ground_startup();
    }
}

void ground_GetHeight (void *pmy_Height, size_t size_my_Height)
{
    /* Decoded input variable(s): developer can use them */
    static asn1SccMyReal IN_Height;

#ifdef __unix__
    asn1SccMyReal_Initialize(&IN_Height);
#endif

    /* Decode each input parameter */
    if (0 != Decode_NATIVE_MyReal (&IN_Height, pmy_Height, size_my_Height)) {
        #ifdef __unix__
            printf("\nError Decoding MyReal\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    ground_PI_GetHeight (&IN_Height);

}
void ground_gui_polling_ground ()
{
    /* Call to User-defined function */
    ground_PI_gui_polling_ground ();

}
