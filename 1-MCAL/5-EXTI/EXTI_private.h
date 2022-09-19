/********************************************************************************************/
/********************************************************************************************/
/**************************		Author:  Abdelrahman El_Gharbawy	            *************/
/**************************		Date:    1 December 2020	            		*************/
/**************************		Layer:   MCAL								   	*************/
/**************************		SWC:	 EXTI									*************/
/**************************		Version: 1.00 	             					*************/
/********************************************************************************************/
/********************************************************************************************/


/********************************************************************************************/
/* Guard of file will call one time in .c  			                                        */
/********************************************************************************************/
#ifndef EXTI_PRIVATE_H
#define EXTI_PRIVATE_H


/* Define Struct for EXTI Registers */
typedef struct
{
	volatile u32 IMR   ;
	volatile u32 EMR   ;
	volatile u32 RTSR  ;
	volatile u32 FTSR  ;
	volatile u32 SWIER ;
	volatile u32 PR    ;
	
}EXTI_t;

/* EXTI is a pointer to struct */
#define EXTI 							((volatile EXTI_t *)0x40010400)

/* Define lines number of EXTI  */
#define EXTI_NUBER_OF_LINES			16


/* Initialize array of pointer to function */
static void (*EXTI_CallBack[EXTI_NUBER_OF_LINES])  (void) = {NULL};

#endif
/********************************************************************************************/
/* END OF FILE: EXTI_private.h                                                              */
/********************************************************************************************/
