/*****************************************************************************/
/*                                                                            */
/* Project N�  :  RB0505                                                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/
/*                                                                            */
/* Filename  : DRV_EEP_StartWriteWord.h */
/*                                                                            */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/


/******************************************************************************/
/*%C                     Functionnal description :                            */
/*%C                                                                          */
/******************************************************************************/
/*%I Input Parameter :  UWORD16 donnee, UWORD16 adresse                       */
/*%IO Input/Output :    NONE	                                              */
/*%O Output Parameter : NONE                                                  */
/******************************************************************************/


#ifndef DRV_EEP_STARTWRITEWORD_H
#define DRV_EEP_STARTWRITEWORD_H

extern void DRV_EEP_WaitEndTransmit(void);
extern void DRV_EEP_tempo_CE(void);
extern void DRV_OutputPort(e_OUTPUT_NAME _Port, UWORD16 _Value);

#endif