#ifndef I_SEVSEG_DISPLAY_DP_DRIVER_H
#define I_SEVSEG_DISPLAY_DP_DRIVER_H

/* Data type */
#include "stdint.h"


/* Client_Server_Interface */
/*
*/
class i_SevSeg_Display_DP_Driver {
public :
    /* Synchronous_Operation */
    /* */
    virtual void Display_Number( uint8_t number, bool is_dp_on ) = 0;
};

#endif