/******************************************************************************/
/*																										*/
/* Project Number	: 	RB0505     			     		                       	  		*/
/*																										*/
/*----------------------------------------------------------------------------*/
/*                                                                 			  	*/
/* Filename	: DB_Rtc.h						   				                  		*/
/*                                                           				  		*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/


/******************************************************************************/
/*%C Functionnal description : 	datas declaration for RTC base					*/
/*                                                            				  		*/
/******************************************************************************/
/*%I 	Input Parameter : 			None			      	                       	*/
/*%IO Input/Output Parameter : 	None 	        			                  		*/
/*%O 	Output Parameter : 			None				            				  		*/
/******************************************************************************/
#ifndef RTC_H
#define RTC_H
/******************************************************************************/
/*                     ENUM DECLARATION				                         	*/
/******************************************************************************/
/* RTC base array */
typedef enum {
	DB_RTC_SECOND_U16=0,
	DB_RTC_MINUTE_U16,
	DB_RTC_HOUR_U16,
	DB_RTC_DAY_U16,
	DB_RTC_MONTH_U16,
	DB_RTC_YEAR_U16,
	ADJUST_RTC_REQ_U16,
	ADJUST_RTC_SECOND_U16,
	ADJUST_RTC_MINUTE_U16,
	ADJUST_RTC_HOUR_U16,
	ADJUST_RTC_DAY_U16,
	ADJUST_RTC_MONTH_U16,
	ADJUST_RTC_YEAR_U16,
	end_of_db_rtc_table
} e_DB_RTC;

#ifdef DECLARATION_RTC_BASE
/******************************************************************************/
/*                     CONSTANT DECLARATION			                          */
/******************************************************************************/
/* Base Rtc array */
UWORD16 DB_Rtc[end_of_db_rtc_table];
#define cOFFSET_RTC 7
/******************************************************************************/
/*  SATURATION OF RTC PARAMETERS											  */
/******************************************************************************/

#else
/******************************************************************************/
/*                     CONSTANT DECLARATION			                          */
/******************************************************************************/
/* Base Rtc array */
extern UWORD16 DB_Rtc[end_of_db_rtc_table];
#endif

#endif
