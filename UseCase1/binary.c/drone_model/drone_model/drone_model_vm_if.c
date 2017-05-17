/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifdef __unix__
    #include <stdlib.h>
    #include <stdio.h>
#else
    typedef unsigned size_t;
#endif

#include "drone_model_vm_if.h"

#include "drone_model.h"

#include "C_ASN1_Types.h"

void init_drone_model()
{
    static int init = 0;

    if (!init) {
        init = 1;
        drone_model_startup();
    }
}

void drone_model_Response (void *pmy_Force, size_t size_my_Force, void *pmy_HeightVelocity, size_t *psize_my_HeightVelocity, void *pmy_Height, size_t *psize_my_Height)
{
    /* Decoded input variable(s): developer can use them */
    asn1SccMyReal IN_Force;

    /* Output variable(s): developer has to fill them */
    asn1SccMyReal OUT_HeightVelocity;
    asn1SccMyReal OUT_Height;

#ifdef __unix__
    asn1SccMyReal_Initialize(&IN_Force);
    asn1SccMyReal_Initialize(&OUT_HeightVelocity);
    asn1SccMyReal_Initialize(&OUT_Height);
#endif

    /* Decode each input parameter */
    if (0 != Decode_NATIVE_MyReal (&IN_Force, pmy_Force, size_my_Force)) {
        #ifdef __unix__
            printf("\nError Decoding MyReal\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    drone_model_PI_Response (&IN_Force, &OUT_HeightVelocity, &OUT_Height);

    /* Encode each output parameter */

    *psize_my_HeightVelocity = Encode_NATIVE_MyReal (pmy_HeightVelocity, sizeof (asn1SccMyReal), &OUT_HeightVelocity);
    *psize_my_Height = Encode_NATIVE_MyReal (pmy_Height, sizeof (asn1SccMyReal), &OUT_Height);
}
