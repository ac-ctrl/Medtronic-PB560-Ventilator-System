/*****************************************************************************/
/*                                                                            */
/* Project N�  :  RB0505                                                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/
/*                                                                            */
/* Filename  : DRV_DIS_Delay_ms.c */
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

#include "typedef.h"
#include "DRV_DIS_Delay_ms.h"					 
/******************************************************************************/
/*                            FUNCTION BODY                                   */
/******************************************************************************/
void DRV_DIS_Delay_ms ( UWORD16 delay_ms )
{
	while ( delay_ms )
	{
		DRV_DIS_Delay_us(1000);
		delay_ms--;
	}
}