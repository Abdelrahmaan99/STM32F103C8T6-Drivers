/********************************************************************************************/
/********************************************************************************************/
/**************************		Author:  Abdelrahman El_Gharbawy	            *************/
/**************************		Date:    10 January 2021	            		*************/
/**************************		Layer:   APP								   	*************/
/**************************		Version: 1.00 	             					*************/
/********************************************************************************************/
/********************************************************************************************/


/********************************************************************************************/
/* Include libraries                                                                        */
/********************************************************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"


/********************************************************************************************/
/* Include Interface Files in MCAL                                                          */
/********************************************************************************************/
#include "RCC_interface.h"
#include "GPIO_interface.h"
#include "STK_interface.h"

/********************************************************************************************/
/* Include Interface Files in HAL                                                           */
/********************************************************************************************/
#include "LED_interface.h"

/********************************************************************************************/
/* Include Interface Files in SERVICES                                                      */
/********************************************************************************************/
#include "OS_interface.h"



/*********************************************************/
/* LAB1: OS Test Driver */
/*********************************************************/

/************************************************/
/* Functions Prototype						    */
/************************************************/
void TOGGLELed1 (void);
void TOGGLELed2 (void);
void TOGGLELed3 (void);

/* Entry point */
void main(void)
{
	/* Initialize RCC */
	MRCC_voidInitSysClock();

	/* Enable RCC for GPIOA */
	MRCC_u8EnableClock(RCC_APB2 , RCC_GPIOA);

	/* Create Tasks */
	SOS_voidCreateTask(0 , 1000 , TOGGLELed1 , 0);
	SOS_voidCreateTask(1 , 2000 , TOGGLELed2 , 1);
	SOS_voidCreateTask(2 , 3000 , TOGGLELed3 , 2);

	/* Start Execute of Tasks */
	SOS_voidStart();

	/* Still in infinity loop */
	while(1)
	{

	}
}


/************************************************/
/* Functions Implementation						*/
/************************************************/
void TOGGLELed1 (void)
{
	/* Initialize Led state variable  */
	static u8 Local_u8LedState = 0;

	/* Toggle bit 0 in Local_u8LedState */
	TOGGLE_BIT(Local_u8LedState , 0);

	if(Local_u8LedState == 0)
	{
		/* Ledoff on A0 */
		HLED_voidTurnOff(GPIOA , GPIO_PIN0);

		/* Delete Task of ID 0 */
		SOS_voidDeleteTask(0);
	}
	else
	{
		/* Ledon on A0 */
		HLED_voidTurnOn(GPIOA , GPIO_PIN0);
	}
}



void TOGGLELed2 (void)
{
	/* Initialize Led state variable  */
	static u8 Local_u8LedState = 0;

	/* Toggle bit 0 in Local_u8LedState */
	TOGGLE_BIT(Local_u8LedState , 0);

	if(Local_u8LedState == 0)
	{
		/* Ledoff on A1 */
		HLED_voidTurnOff(GPIOA , GPIO_PIN1);

		/* Suspend Task of ID 1 */
		SOS_voidSuspendTask(1);
	}
	else
	{
		/* Ledon on A1 */
		HLED_voidTurnOn(GPIOA , GPIO_PIN1);
	}

}
void TOGGLELed3 (void)
{
	static u8 Local_u8LedState = 0;

	TOGGLE_BIT(Local_u8LedState , 0);

	if(Local_u8LedState == 0)
	{
		/* Ledoff on A2 */
		HLED_voidTurnOff(GPIOA , GPIO_PIN2);

		/* Resume Task of ID 1 */
		SOS_voidResumeTask(1);
	}
	else
	{
		/* Ledon on A2 */
		HLED_voidTurnOn(GPIOA , GPIO_PIN2);
	}
}

/********************************************************************************************/
/* END OF FILE: main.c                                                                      */
/********************************************************************************************/
