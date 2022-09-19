/********************************************************************************************/
/********************************************************************************************/
/**************************		Author:  Abdelrahman El_Gharbawy	            *************/
/**************************		Date:    9 December 2020	            		*************/
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


	/***************************************************************************/
	/* ASS: Test STK Driver                                                    */
	/***************************************************************************/

/* Entry point */
void main(void)
{
	/* Initialize local counter */
	u8 Local_u8Counter = 0;

	/* Initialize RCC */
	MRCC_voidInitSysClock();

	/* Initialize STK */
	MSTK_voidInit();

	/* Enable GPIOA Clock */
	MRCC_u8EnableClock(RCC_APB2 , RCC_GPIOA);

	/* Still in Infinty Loop */
	while(1)
	{
		/* Iterate 4 times */
		for(Local_u8Counter = 0; Local_u8Counter < 4; Local_u8Counter++)
		{
			/* Leds on from A7 to A0 every 200 ms */
			HLED_voidTurnOn(GPIOA , GPIO_PIN7);
			MSTK_voidSetBusyWaitInMilliSec(200);
			HLED_voidTurnOn(GPIOA , GPIO_PIN6);
			MSTK_voidSetBusyWaitInMilliSec(200);
			HLED_voidTurnOn(GPIOA , GPIO_PIN5);
			MSTK_voidSetBusyWaitInMilliSec(200);
			HLED_voidTurnOn(GPIOA , GPIO_PIN4);
			MSTK_voidSetBusyWaitInMilliSec(200);
			HLED_voidTurnOn(GPIOA , GPIO_PIN3);
			MSTK_voidSetBusyWaitInMilliSec(200);
			HLED_voidTurnOn(GPIOA , GPIO_PIN2);
			MSTK_voidSetBusyWaitInMilliSec(200);
			HLED_voidTurnOn(GPIOA , GPIO_PIN1);
			MSTK_voidSetBusyWaitInMilliSec(200);
			HLED_voidTurnOn(GPIOA , GPIO_PIN0);
			MSTK_voidSetBusyWaitInMilliSec(200);

			/* Led off from A0 to A7 every 200 ms */
			HLED_voidTurnOff(GPIOA , GPIO_PIN0);
			MSTK_voidSetBusyWaitInMilliSec(200);
			HLED_voidTurnOff(GPIOA , GPIO_PIN1);
			MSTK_voidSetBusyWaitInMilliSec(200);
			HLED_voidTurnOff(GPIOA , GPIO_PIN2);
			MSTK_voidSetBusyWaitInMilliSec(200);
			HLED_voidTurnOff(GPIOA , GPIO_PIN3);
			MSTK_voidSetBusyWaitInMilliSec(200);
			HLED_voidTurnOff(GPIOA , GPIO_PIN4);
			MSTK_voidSetBusyWaitInMilliSec(200);
			HLED_voidTurnOff(GPIOA , GPIO_PIN5);
			MSTK_voidSetBusyWaitInMilliSec(200);
			HLED_voidTurnOff(GPIOA , GPIO_PIN6);
			MSTK_voidSetBusyWaitInMilliSec(200);
			HLED_voidTurnOff(GPIOA , GPIO_PIN7);
			MSTK_voidSetBusyWaitInMilliSec(200);
		}
		/* End of for loop */

		/* Iterate 4 times */
		for(Local_u8Counter = 0; Local_u8Counter < 4; Local_u8Counter++)
		{
			/* Fatahy ya warda 2 leds to 2 leds every 200 ms on portA  */
			HLED_voidTurnOn(GPIOA , GPIO_PIN3);
			HLED_voidTurnOn(GPIOA , GPIO_PIN4);
			MSTK_voidSetBusyWaitInMilliSec(200);
			HLED_voidTurnOn(GPIOA , GPIO_PIN2);
			HLED_voidTurnOn(GPIOA , GPIO_PIN5);
			MSTK_voidSetBusyWaitInMilliSec(200);
			HLED_voidTurnOn(GPIOA , GPIO_PIN1);
			HLED_voidTurnOn(GPIOA , GPIO_PIN6);
			MSTK_voidSetBusyWaitInMilliSec(200);
			HLED_voidTurnOn(GPIOA , GPIO_PIN0);
			HLED_voidTurnOn(GPIOA , GPIO_PIN7);
			MSTK_voidSetBusyWaitInMilliSec(200);

			/* 2fly ya warda 2 leds to 2 leds every 200 ms on portA  */
			HLED_voidTurnOff(GPIOA , GPIO_PIN0);
			HLED_voidTurnOff(GPIOA , GPIO_PIN7);
			MSTK_voidSetBusyWaitInMilliSec(200);
			HLED_voidTurnOff(GPIOA , GPIO_PIN1);
			HLED_voidTurnOff(GPIOA , GPIO_PIN6);
			MSTK_voidSetBusyWaitInMilliSec(200);
			HLED_voidTurnOff(GPIOA , GPIO_PIN2);
			HLED_voidTurnOff(GPIOA , GPIO_PIN5);
			MSTK_voidSetBusyWaitInMilliSec(200);
			HLED_voidTurnOff(GPIOA , GPIO_PIN3);
			HLED_voidTurnOff(GPIOA , GPIO_PIN4);
			MSTK_voidSetBusyWaitInMilliSec(200);
		}
		/* End of for loop */

		/* Iterate 8 times */
		for(Local_u8Counter = 0; Local_u8Counter < 8; Local_u8Counter++)
		{
			/* Leds on from A0 to A7 for 500 ms */
			HLED_voidTurnOn(GPIOA , GPIO_PIN0);
			HLED_voidTurnOn(GPIOA , GPIO_PIN1);
			HLED_voidTurnOn(GPIOA , GPIO_PIN2);
			HLED_voidTurnOn(GPIOA , GPIO_PIN3);
			HLED_voidTurnOn(GPIOA , GPIO_PIN4);
			HLED_voidTurnOn(GPIOA , GPIO_PIN5);
			HLED_voidTurnOn(GPIOA , GPIO_PIN6);
			HLED_voidTurnOn(GPIOA , GPIO_PIN7);
			MSTK_voidSetBusyWaitInMilliSec(500);

			/* Leds off from A0 to A7 for 500 ms */
			HLED_voidTurnOff(GPIOA , GPIO_PIN0);
			HLED_voidTurnOff(GPIOA , GPIO_PIN1);
			HLED_voidTurnOff(GPIOA , GPIO_PIN2);
			HLED_voidTurnOff(GPIOA , GPIO_PIN3);
			HLED_voidTurnOff(GPIOA , GPIO_PIN4);
			HLED_voidTurnOff(GPIOA , GPIO_PIN5);
			HLED_voidTurnOff(GPIOA , GPIO_PIN6);
			HLED_voidTurnOff(GPIOA , GPIO_PIN7);
			MSTK_voidSetBusyWaitInMilliSec(500);
		}
		/* End of for loop */

	}
	/* end of while(1) */

}
	/********************************************************************************************/
	/* END OF ASS                                                                               */
	/********************************************************************************************/



/********************************************************************************************/
/* END OF FILE: main.c                                                                      */
/********************************************************************************************/

