/* User code: This file will not be overwritten by TASTE. */

#include "control_laws.h"

void control_laws_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void control_laws_PI_Get_IMU_Data(const asn1SccMyGyroVal *IN_gyro_X,
                                  const asn1SccMyGyroVal *IN_gyro_Y,
                                  const asn1SccMyGyroVal *IN_gyro_Z,
                                  const asn1SccMyAccVal *IN_acc_X,
                                  const asn1SccMyAccVal *IN_acc_Y,
                                  const asn1SccMyAccVal *IN_acc_Z)
{
    /* Write your code here! */
    asn1SccMyGyroVal gyro_x = *IN_gyro_X;
    asn1SccMyGyroVal gyro_y = *IN_gyro_Y;
    asn1SccMyGyroVal gyro_z = *IN_gyro_Z;
    
    asn1SccMyGyroVal acc_x = *IN_acc_X;
    asn1SccMyGyroVal acc_y = *IN_acc_Y;
    asn1SccMyGyroVal acc_z = *IN_acc_Z;

}

