/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifdef __unix__
    #include <stdlib.h>
    #include <stdio.h>
#else
    typedef unsigned size_t;
#endif

#include "model_1dof_vm_if.h"

#include "model_1dof.h"

#include "C_ASN1_Types.h"

void init_model_1dof()
{
    static int init = 0;

    if (!init) {
        init = 1;
        model_1dof_startup();
    }
}

void model_1dof_Compute_Thrust (void *pmy_F, size_t size_my_F, void *pmy_h, size_t *psize_my_h, void *pmy_dh, size_t *psize_my_dh)
{
    /* Decoded input variable(s): developer can use them */
    asn1SccMyReal IN_F;

    /* Output variable(s): developer has to fill them */
    asn1SccMyReal OUT_h;
    asn1SccMyReal OUT_dh;

#ifdef __unix__
    asn1SccMyReal_Initialize(&IN_F);
    asn1SccMyReal_Initialize(&OUT_h);
    asn1SccMyReal_Initialize(&OUT_dh);
#endif

    /* Decode each input parameter */
    if (0 != Decode_NATIVE_MyReal (&IN_F, pmy_F, size_my_F)) {
        #ifdef __unix__
            printf("\nError Decoding MyReal\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    model_1dof_PI_Compute_Thrust (&IN_F, &OUT_h, &OUT_dh);

    /* Encode each output parameter */

    *psize_my_h = Encode_NATIVE_MyReal (pmy_h, sizeof (asn1SccMyReal), &OUT_h);
    *psize_my_dh = Encode_NATIVE_MyReal (pmy_dh, sizeof (asn1SccMyReal), &OUT_dh);
}
