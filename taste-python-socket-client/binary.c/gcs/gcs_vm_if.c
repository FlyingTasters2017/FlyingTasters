/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifdef __unix__
    #include <stdlib.h>
    #include <stdio.h>
#else
    typedef unsigned size_t;
#endif

#include "gcs_vm_if.h"

#include "gcs_gui_header.h"

#include "C_ASN1_Types.h"

void init_gcs()
{
    static int init = 0;

    if (!init) {
        init = 1;
        gcs_startup();
    }
}

void gcs_gui_polling_gcs ()
{
    /* Call to User-defined function */
    gcs_PI_gui_polling_gcs ();

}
