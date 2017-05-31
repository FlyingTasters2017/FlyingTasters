/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifdef __unix__
    #include <stdlib.h>
    #include <stdio.h>
#else
    typedef unsigned size_t;
#endif

#include "function1_vm_if.h"

#include "function1.h"

#include "C_ASN1_Types.h"

void init_function1()
{
    static int init = 0;

    if (!init) {
        init = 1;
        function1_startup();
        extern void init_x86_partition_taste_api();
        init_x86_partition_taste_api();
    }
}

void function1_pulse ()
{
    /* Call to User-defined function */
    function1_PI_pulse ();

}
