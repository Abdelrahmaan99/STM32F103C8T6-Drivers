/********************************************************************************************/
/********************************************************************************************/
/**************************		Author:  Abdelrahman El_Gharbawy	            *************/
/**************************		Date:    27 December 2020	            		*************/
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
#include "DAC_interface.h"

/* Song file */
#include "Sound.h"

/* Initialize volatile Counter to count samples */
volatile u16 u16SampleCounter = 0;

/* Define Number of samples */
#define NUMBER_OF_SAMPLES					32508

/* Define DAC Frequancy */
#define DAC_FREQUANCY						125

/********************************************************************************************/
/* Function Prototype					 			                                        */
/********************************************************************************************/
//void PlaySong(void);


/************************************************/
/* LAB1: Test Dac Driver [Play Music For 4 sec]	*/
/************************************************/

/* Entry point */
//void main(void)
//{
//	/* Initialize RCC */
//	MRCC_voidInitSysClock();
//
//	/* Enable GPIOA Clock */
//	MRCC_u8EnableClock(RCC_APB2 , RCC_GPIOA);
//
//	/* Initialize STK */
//	MSTK_voidInit();
//
//	/* Initialize Pins of Dac */
//	HDAC_voidInit();
//
//	/* Get Sample every 125 Ms */
//	MSTK_u8SetIntervalPeriodicInMicroSec(DAC_FREQUANCY , PlaySong);
//
//	/* Still in Infinty Loop */
//	while(1)
//	{
//
//	}
//}
//
//
//
///******************************************************************************/
///* Syntax           : void PlaySong(void)
// * Description      : Count array samples
// * Sync\Async       : Synchronous
// * Parameters       : void
// * Return value:    : void
// *******************************************************************************/
//void PlaySong(void)
//{
//	HDAC_voidWriteData(hiya_raw[u16SampleCounter]);
//	u16SampleCounter++;
//	if(u16SampleCounter == NUMBER_OF_SAMPLES)
//	{
//		u16SampleCounter = 0;
//	}
//}
/********************************************************************************************/
/* END OF LAB1                                                                              */
/********************************************************************************************/



/************************************************/
/* LAB2: Test Dac Driver [Generate Sin Wave]	*/
/************************************************/

void main(void)
{
	/* Declare Counter */
	u16 Local_u16Counter;

	/* Initialize RCC */
	MRCC_voidInitSysClock();

	/* Enable GPIOA Clock */
	MRCC_u8EnableClock(RCC_APB2 , RCC_GPIOA);

	/* Initialize STK */
	MSTK_voidInit();

	/* Initialize Pins of Dac */
	HDAC_voidInit();

	/* Still in Infinty Loop */
	while(1)
	{
		/* +ve */
		for(Local_u16Counter = 120; Local_u16Counter < 256; Local_u16Counter++)
		{
			HDAC_voidWriteData(Local_u16Counter);
			MSTK_voidSetBusyWaitInMilliSec(50);
		}

		/* -ve */
		for(Local_u16Counter = 255; Local_u16Counter >= 119; Local_u16Counter--)
		{
			HDAC_voidWriteData(Local_u16Counter);
			MSTK_voidSetBusyWaitInMilliSec(50);
		}
	}
}
/********************************************************************************************/
/* END OF FILE: main.c                                                                      */
/********************************************************************************************/
