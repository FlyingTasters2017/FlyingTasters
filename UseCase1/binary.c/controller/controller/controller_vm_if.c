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

void controller_Compute_Force (void *pmy_ReferenceHeight, size_t size_my_ReferenceHeight, void *pmy_HeightVelocity, size_t size_my_HeightVelocity, void *pmy_Height, size_t size_my_Height, void *pmy_Force, size_t *psize_my_Force)
{
    /* Decoded input variable(s): developer can use them */
    asn1SccMyReal IN_ReferenceHeight;
    asn1SccMyReal IN_HeightVelocity;
    asn1SccMyReal IN_Height;

    /* Output variable(s): developer has to fill them */
    asn1SccMyReal OUT_Force;

#ifdef __unix__
    asn1SccMyReal_Initialize(&IN_ReferenceHeight);
    asn1SccMyReal_Initialize(&IN_HeightVelocity);
    asn1SccMyReal_Initialize(&IN_Height);
    asn1SccMyReal_Initialize(&OUT_Force);
#endif

    /* Decode each input parameter */
    if (0 != Decode_NATIVE_MyReal (&IN_ReferenceHeight, pmy_ReferenceHeight, size_my_ReferenceHeight)) {
        #ifdef __unix__
            printf("\nError Decoding MyReal\n");
        #endif
        return;
    }

    if (0 != Decode_NATIVE_MyReal (&IN_HeightVelocity, pmy_HeightVelocity, size_my_HeightVelocity)) {
        #ifdef __unix__
            printf("\nError Decoding MyReal\n");
        #endif
        return;
    }

    if (0 != Decode_NATIVE_MyReal (&IN_Height, pmy_Height, size_my_Height)) {
        #ifdef __unix__
            printf("\nError Decoding MyReal\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    controller_PI_Compute_Force (&IN_ReferenceHeight, &IN_HeightVelocity, &IN_Height, &OUT_Force);

    /* Encode each output parameter */

    *psize_my_Force = Encode_NATIVE_MyReal (pmy_Force, sizeof (asn1SccMyReal), &OUT_Force);
}
