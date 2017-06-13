/* User code: This file will not be overwritten by TASTE. */

#include "function3.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void function3_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void function3_PI_getdata(const asn1SccT_UInt32 *IN_x,
                          const asn1SccT_UInt32 *IN_y)
{
    /* Write your code here! */
    printf("\n function 3 \n");
    int x = *IN_x;
    int y = *IN_y;   
    printf("\n x: %d; y: %d; \n", x, y);

}

