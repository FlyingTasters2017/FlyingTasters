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

void ground_Height (void *pmy_H, size_t size_my_H)
{
    /* Decoded input variable(s): developer can use them */
    static asn1SccMyReal IN_H;

#ifdef __unix__
    asn1SccMyReal_Initialize(&IN_H);
#endif

    /* Decode each input parameter */
    if (0 != Decode_UPER_MyReal (&IN_H, pmy_H, size_my_H)) {
        #ifdef __unix__
            printf("\nError Decoding MyReal\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    ground_PI_Height (&IN_H);

}
void ground_gui_polling_ground ()
{
    /* Call to User-defined function */
    ground_PI_gui_polling_ground ();

}
