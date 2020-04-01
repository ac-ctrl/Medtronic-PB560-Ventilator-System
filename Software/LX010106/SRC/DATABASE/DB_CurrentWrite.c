/******************************************************************************/
/*																										*/
/* Project Number	: 	RB0505     			     		                       	  		*/
/*																										*/
/*----------------------------------------------------------------------------*/
/*                                                                 			  	*/
/* Filename	: DB_CurrentWrite.c 			   				                  		*/
/*                                                           				  		*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/


/******************************************************************************/
/*%C 			Functionnal description : 	this function writes the values in the	*/
/*%C         current base																		*/
/*                                                            				  		*/
/******************************************************************************/
/*%I 	Input Parameter : 			Id		  	        			                  	*/
/*%I						  				Value                                 		  	*/
/*%IO Input/Output Parameter : 	None 	        			                  		*/
/*%O 	Output Parameter : 			None   		                 				  		*/
/******************************************************************************/

/******************************************************************************/
/*                                INCLUDE FILES		                          	*/
/******************************************************************************/
#include "typedef.h"
#include "DB_Current.h"
/******************************************************************************/
/*                                FUNCTION BODY		                          	*/
/******************************************************************************/
void DB_CurrentWrite(e_DB_ADJUST_CURRENT Id, UWORD16 Value)
{
	if(Id < end_of_adjust_table)
		DB_Current[Id] = Value;	
}
