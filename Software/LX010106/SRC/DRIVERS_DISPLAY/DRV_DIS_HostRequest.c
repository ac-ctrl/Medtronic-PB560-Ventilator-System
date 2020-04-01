/*****************************************************************************/
/*                                                                            */
/* Project N�  :  RB0505                                                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/
/*                                                                            */
/* Filename  : DRV_DIS_HostRequest.c */
/*                                                                            */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/


/******************************************************************************/
/*%C                     Functionnal description :                            */
/*%C                  */
/******************************************************************************/
/*%I Input Parameter :  NONE                                            */
/*%IO Input/Output :    NONE	                                              */
/*%O Output Parameter : NONE       */
/******************************************************************************/

/******************************************************************************/
/*                                INCLUDE FILES		                          */
/******************************************************************************/

#ifndef _TASKING
	#include <intrins.h>
#endif	 
#include "typedef.h"
#include "Driver_Display_Data.h"
					 
/******************************************************************************/
/*                            FUNCTION BODY                                   */
/******************************************************************************/

void DRV_DIS_HostRequest ( bit etat )
{
UBYTE xhuge *ram;

	if ( etat )
		ram=(UBYTE xhuge*)REQUEST_ON;
	else
		ram=(UBYTE xhuge*)REQUEST_OFF;
	*ram = DUMMY;
	_nop_();
	_nop_();
	_nop_();
}