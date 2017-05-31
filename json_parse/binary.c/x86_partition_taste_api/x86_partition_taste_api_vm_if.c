/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifdef __unix__
    #include <stdlib.h>
    #include <stdio.h>
#else
    typedef unsigned size_t;
#endif

#include "x86_partition_taste_api_vm_if.h"

#include "x86_partition_taste_api.h"

#include "C_ASN1_Types.h"

void init_x86_partition_taste_api()
{
    static int init = 0;

    if (!init) {
        init = 1;
        x86_partition_taste_api_startup();
    }
}

void x86_partition_taste_api_function1_has_pending_msg (void *pmy_res, size_t *psize_my_res)
{

    /* Output variable(s): developer has to fill them */
    asn1SccT_Boolean OUT_res;

#ifdef __unix__
    asn1SccT_Boolean_Initialize(&OUT_res);
#endif
    /* Call to User-defined function */
    x86_partition_taste_api_PI_function1_has_pending_msg (&OUT_res);

    /* Encode each output parameter */

    *psize_my_res = Encode_NATIVE_T_Boolean (pmy_res, sizeof (asn1SccT_Boolean), &OUT_res);
}
