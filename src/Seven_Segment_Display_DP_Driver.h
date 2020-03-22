#ifndef SEVEN_SEGMENT_DISPLAY_DP_DRIVER_H
#define SEVEN_SEGMENT_DISPLAY_DP_DRIVER_H


/* Attributes */


/* Realized interfaces */
#include "i_SevSeg_Display_DP_Driver.h"


/* Needed interfaces */
#include "i_SevSeg_Display_Dp_Command.h"


/* Events */


/* Component_Type */
class Seven_Segment_Display_DP_Driver : i_SevSeg_Display_DP_Driver {
public :
    /*--------------------------------------------------------------------------------------------*/
    /* Constructor */
    Seven_Segment_Display_DP_Driver( void );
	void Connect_Ports( i_SevSeg_Display_DP_Command* segments_command );

    /*--------------------------------------------------------------------------------------------*/
    /* Component_Type_Operations */

    /*--------------------------------------------------------------------------------------------*/
    /* Event reception points accessors */

    /*--------------------------------------------------------------------------------------------*/
    /* Provided port accessors */
	i_SevSeg_Display_DP_Driver* Get_Port__Display( void );

	/*--------------------------------------------------------------------------------------------*/
    /* Provided operations */
	void Display_Number( uint8_t number, bool is_dp_on );

private :
    /*--------------------------------------------------------------------------------------------*/
    /* Private attributes */

    /*--------------------------------------------------------------------------------------------*/
    /* Private methods */

    /*--------------------------------------------------------------------------------------------*/
    /* Requirer_Ports */
	i_SevSeg_Display_DP_Command* Segments_Command;
	
    /*--------------------------------------------------------------------------------------------*/
    /* Provider ports */

    /*--------------------------------------------------------------------------------------------*/
    /* Sent events */

    /*--------------------------------------------------------------------------------------------*/
    /* Received events */
};

#endif