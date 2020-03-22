#include "Seven_Segment_Display_DP_Driver.h"


/**************************************************************************************************/
/* Constructor */
Seven_Segment_Display_DP_Driver::Seven_Segment_Display_DP_Driver( void )
{

}
/*------------------------------------------------------------------------------------------------*/
void Seven_Segment_Display_DP_Driver::Connect_Ports( i_SevSeg_Display_DP_Command* segments_command )
{
	this->Segments_Command = segments_command;
}
/**************************************************************************************************/


/**************************************************************************************************/
/* Component_Type_Operations */
/**************************************************************************************************/


/**************************************************************************************************/
/* Event reception points accessors */
/**************************************************************************************************/


/**************************************************************************************************/
/* Provided port accessors */
/**************************************************************************************************/
i_SevSeg_Display_DP_Driver* Seven_Segment_Display_DP_Driver::Get_Port__Display( void )
{
	return (i_SevSeg_Display_DP_Driver*)(this);
}
/**************************************************************************************************/


/**************************************************************************************************/
/* Private methods */
/**************************************************************************************************/


/**************************************************************************************************/
/* Provided operations */
/**************************************************************************************************/
void Seven_Segment_Display_DP_Driver::Display_Number( uint8_t number, bool is_dp_on )
{
	switch( number )
	{
		case 0 :
			this->Segments_Command->Set_Segments_Status( 
				true, 
				true,
				true, 
				true,
				true,
				true,
				false,
				is_dp_on );
			break;
		
		case 1 :
			this->Segments_Command->Set_Segments_Status( 
				false, 
				true,
				true, 
				false,
				false,
				false,
				false,
				is_dp_on );
			break;

		case 2 :
			this->Segments_Command->Set_Segments_Status( 
				true, 
				true,
				false, 
				true,
				true,
				false,
				true,
				is_dp_on );
			break;

		case 3 :
			this->Segments_Command->Set_Segments_Status( 
				true, 
				true,
				true, 
				true,
				false,
				false,
				true,
				is_dp_on );
			break;

		case 4 :
			this->Segments_Command->Set_Segments_Status( 
				false, 
				true,
				true, 
				false,
				false,
				true,
				true,
				is_dp_on );
			break;

		case 5 :
			this->Segments_Command->Set_Segments_Status( 
				true, 
				false,
				true, 
				true,
				false,
				true,
				true,
				is_dp_on );
			break;

		case 6 :
			this->Segments_Command->Set_Segments_Status( 
				true, 
				false,
				true, 
				true,
				true,
				true,
				true,
				is_dp_on );
			break;

		case 7 :
			this->Segments_Command->Set_Segments_Status( 
				true, 
				true,
				true, 
				false,
				false,
				false,
				false,
				is_dp_on );
			break;

		case 8 :
			this->Segments_Command->Set_Segments_Status( 
				true, 
				true,
				true, 
				true,
				true,
				true,
				true,
				is_dp_on );
			break;

		case 9 :
			this->Segments_Command->Set_Segments_Status( 
				true, 
				true,
				true, 
				true,
				false,
				true,
				true,
				is_dp_on );
			break;
			
		default :
			break;
	}
}
/**************************************************************************************************/


/**************************************************************************************************/
/* Received events */
/**************************************************************************************************/