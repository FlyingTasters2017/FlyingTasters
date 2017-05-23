/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifdef __unix__
    #include <stdlib.h>
    #include <stdio.h>
#else
    typedef unsigned size_t;
#endif

#include "socketclient_vm_if.h"

#include "socketclient.h"

#include "C_ASN1_Types.h"

void init_socketclient()
{
    static int init = 0;

    if (!init) {
        init = 1;
        socketclient_startup();
        extern void init_x86_partition_taste_api();
        init_x86_partition_taste_api();
    }
}

void socketclient_readStabilizerSendThrust ()
{
    /* Call to User-defined function */
    socketclient_PI_readStabilizerSendThrust ();

}
