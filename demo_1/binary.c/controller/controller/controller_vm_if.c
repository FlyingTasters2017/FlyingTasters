/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifdef __unix__
    #include <stdlib.h>
    #include <stdio.h>
#else
    typedef unsigned size_t;
#endif

#include "controller_vm_if.h"

#include "controller.h"

#include "C_ASN1_Types.h"

void init_controller()
{
    static int init = 0;

    if (!init) {
        init = 1;
        controller_startup();
    }
}

void controller_Compute_Input (void *pmy_Ref_h, size_t size_my_Ref_h, void *pmy_dh, size_t size_my_dh, void *pmy_h, size_t size_my_h, void *pmy_F, size_t *psize_my_F)
{
    /* Decoded input variable(s): developer can use them */
    asn1SccMyReal IN_Ref_h;
    asn1SccMyReal IN_dh;
    asn1SccMyReal IN_h;

    /* Output variable(s): developer has to fill them */
    asn1SccMyReal OUT_F;

#ifdef __unix__
    asn1SccMyReal_Initialize(&IN_Ref_h);
    asn1SccMyReal_Initialize(&IN_dh);
    asn1SccMyReal_Initialize(&IN_h);
    asn1SccMyReal_Initialize(&OUT_F);
#endif

    /* Decode each input parameter */
    if (0 != Decode_NATIVE_MyReal (&IN_Ref_h, pmy_Ref_h, size_my_Ref_h)) {
        #ifdef __unix__
            printf("\nError Decoding MyReal\n");
        #endif
        return;
    }

    if (0 != Decode_NATIVE_MyReal (&IN_dh, pmy_dh, size_my_dh)) {
        #ifdef __unix__
            printf("\nError Decoding MyReal\n");
        #endif
        return;
    }

    if (0 != Decode_NATIVE_MyReal (&IN_h, pmy_h, size_my_h)) {
        #ifdef __unix__
            printf("\nError Decoding MyReal\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    controller_PI_Compute_Input (&IN_Ref_h, &IN_dh, &IN_h, &OUT_F);

    /* Encode each output parameter */

    *psize_my_F = Encode_NATIVE_MyReal (pmy_F, sizeof (asn1SccMyReal), &OUT_F);
}
