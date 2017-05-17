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

void drone_model_Response (void *pmy_F, size_t size_my_F, void *pmy_dh, size_t *psize_my_dh, void *pmy_h, size_t *psize_my_h)
{
    /* Decoded input variable(s): developer can use them */
    asn1SccMyReal IN_F;

    /* Output variable(s): developer has to fill them */
    asn1SccMyReal OUT_dh;
    asn1SccMyReal OUT_h;

#ifdef __unix__
    asn1SccMyReal_Initialize(&IN_F);
    asn1SccMyReal_Initialize(&OUT_dh);
    asn1SccMyReal_Initialize(&OUT_h);
#endif

    /* Decode each input parameter */
    if (0 != Decode_NATIVE_MyReal (&IN_F, pmy_F, size_my_F)) {
        #ifdef __unix__
            printf("\nError Decoding MyReal\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    drone_model_PI_Response (&IN_F, &OUT_dh, &OUT_h);

    /* Encode each output parameter */

    *psize_my_dh = Encode_NATIVE_MyReal (pmy_dh, sizeof (asn1SccMyReal), &OUT_dh);
    *psize_my_h = Encode_NATIVE_MyReal (pmy_h, sizeof (asn1SccMyReal), &OUT_h);
}
