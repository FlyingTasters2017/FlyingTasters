/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <stdlib.h>
#include <stdio.h>

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

void ground_Height (void *pmy_h, size_t size_my_h)
{
    /* Decoded input variable(s): developer can use them */
    static asn1SccMyReal IN_h;

#ifdef __unix__
    asn1SccMyReal_Initialize(&IN_h);
#endif

    /* Decode each input parameter */
    if (0 != Decode_UPER_MyReal (&IN_h, pmy_h, size_my_h)) {
        printf("\nError Decoding MyReal\n");
        return;
    }

    /* Call to User-defined function */
    ground_PI_Height (&IN_h);

}
void ground_gui_polling_ground ()
{
    /* Call to User-defined function */
    ground_PI_gui_polling_ground ();

}
