/********************************************************************************************/
/********************************************************************************************/
/**************************		Author:  Abdelrahman El_Gharbawy	            *************/
/**************************		Date:    1 December 2020	            		*************/
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
#include "NVIC_interface.h"
#include "STK_interface.h"
#include "EXTI_interface.h"
#include "AFIO_interface.h"

/********************************************************************************************/
/* Include Interface Files in HAL                                                           */
/********************************************************************************************/
#include "LED_interface.h"
#include "Button_interface.h"

/* Led on function prototype */
void LedOn  (void);

/* Led off function prototype */
void LedOff (void);


/*****************************************************************************************/
/* LAB1: EXTI Test Driver [MEXTI_voidInit - MEXTI_u8SetCallBack - MEXTI_voidEnableEXTI]	 */
/*****************************************************************************************/

///* Entry point */
//void main(void)
//{
//	/* Initialize RCC */
//	MRCC_voidInitSysClock();
//
//	/* Initialize STK */
//	MSTK_voidInit();
//
//	/* Init EXTI with line0 & falling edge mode */
//	MEXTI_voidInit();
//
//	/* Enable RCC for GPIOA */
//	MRCC_u8EnableClock(RCC_APB2 , RCC_GPIOA);
//
//	/* Enable RCC for AFIO */
//	MRCC_u8EnableClock(RCC_APB2 , RCC_AFIO);
//
//	/* Set A0 as EXTI Pin */
//	MAFIO_u8SetEXTIConfiguration(AFIO_LINE0 , AFIO_PORTA);
//
//	/* Callback function to send application function */
//	MEXTI_u8SetCallBack(LedOn , EXTI_LINE0);
//
//	/* Enable Line of EXTI0 */
//	MEXTI_voidEnableEXTI(EXTI_LINE0);
//
//	/* Enable EXTI0 interrupt from  NVIC */
//	MNVIC_u8EnableInterrupt(NVIC_EXTI0);
//
//	/* Create Button1 on A0 */
//	HButton_u8CreateButton(GPIOA , GPIO_PIN0 , Button_PULLUP);
//
//	/* Still in Infinty Loop */
//	while(1)
//	{
//
//	}
//}
/********************************************************************************************/
/* END OF LAB1                                                                              */
/********************************************************************************************/



/***************************************************/
/* LAB2: EXTI Test Driver [MEXTI_u8SetSignalLatch] */
/***************************************************/

///* Entry point */
//void main(void)
//{
//	/* Initialize RCC */
//	MRCC_voidInitSysClock();
//
//	/* Initialize STK */
//	MSTK_voidInit();
//
//	/* Enable RCC for GPIOA */
//	MRCC_u8EnableClock(RCC_APB2 , RCC_GPIOA);
//
//	/* Enable RCC for AFIO */
//	MRCC_u8EnableClock(RCC_APB2 , RCC_AFIO);
//
//	/* Set A0 as EXTI Pin */
//	MAFIO_u8SetEXTIConfiguration(AFIO_LINE0 , AFIO_PORTA);
//
//	/* Set A1 as EXTI Pin */
//	MAFIO_u8SetEXTIConfiguration(AFIO_LINE1 , AFIO_PORTA);
//
//	/* Callback function to send application function */
//	MEXTI_u8SetCallBack(LedOn , EXTI_LINE0);
//
//	/* Callback function to send application function */
//	MEXTI_u8SetCallBack(LedOff , EXTI_LINE1);
//
//	/* Enable Line of EXTI0 */
//	MEXTI_voidEnableEXTI(EXTI_LINE0);
//
//	/* Enable Line of EXTI1 */
//	MEXTI_voidEnableEXTI(EXTI_LINE1);
//
//	/* Set Falling edge Mode for Line0 */
//	MEXTI_u8SetSignalLatch(EXTI_LINE0 , EXTI_FALING_EDGE);
//
//	/* Set Falling edge Mode for Line1 */
//	MEXTI_u8SetSignalLatch(EXTI_LINE1 , EXTI_FALING_EDGE);
//
//
//	/* Enable EXTI0 interrupt from  NVIC */
//	MNVIC_u8EnableInterrupt(NVIC_EXTI0);
//
//	/* Enable EXTI1 interrupt from  NVIC */
//	MNVIC_u8EnableInterrupt(NVIC_EXTI1);
//
//	/* Create Button1 on A0 */
//	HButton_u8CreateButton(GPIOA , GPIO_PIN0 , Button_PULLUP);
//
//	/* Create Button2 on A1 */
//	HButton_u8CreateButton(GPIOA , GPIO_PIN1 , Button_PULLUP);
//
//	/* Still in Infinty Loop */
//	while(1)
//	{
//
//	}
//}
/********************************************************************************************/
/* END OF LAB2                                                                              */
/********************************************************************************************/



/******************************************** ***/
/* LAB3: EXTI Test Driver [MEXTI_voidSwTrigger] */
/************************************************/

/* Entry point */
void main(void)
{
	/* Initialize RCC */
	MRCC_voidInitSysClock();

	/* Initialize STK */
	MSTK_voidInit();

	/* Enable RCC for GPIOA */
	MRCC_u8EnableClock(RCC_APB2 , RCC_GPIOA);

	/* Enable RCC for AFIO */
	MRCC_u8EnableClock(RCC_APB2 , RCC_AFIO);

	/* Set A0 as EXTI Pin */
	MAFIO_u8SetEXTIConfiguration(AFIO_LINE0 , AFIO_PORTA);

	/* Set A1 as EXTI Pin */
	MAFIO_u8SetEXTIConfiguration(AFIO_LINE1 , AFIO_PORTA);

	/* Callback function to send application function */
	MEXTI_u8SetCallBack(LedOn , EXTI_LINE0);

	/* Callback function to send application function */
	MEXTI_u8SetCallBack(LedOff , EXTI_LINE1);

	/* Enable Line of EXTI0 */
	MEXTI_voidEnableEXTI(EXTI_LINE0);

	/* Enable Line of EXTI1 */
	MEXTI_voidEnableEXTI(EXTI_LINE1);

	/* Enable EXTI0 interrupt from  NVIC */
	MNVIC_u8EnableInterrupt(NVIC_EXTI0);

	/* Enable EXTI1 interrupt from  NVIC */
	MNVIC_u8EnableInterrupt(NVIC_EXTI1);

	/* Set software trigger for Line0 */
	MEXTI_voidSwTrigger(EXTI_LINE0);

	/* Wait for 2 sec */
	MSTK_voidSetBusyWaitInMilliSec(2000);

	/* Set software trigger for Line1 */
	MEXTI_voidSwTrigger(EXTI_LINE1);

	/* Still in Infinty Loop */
	while(1)
	{

	}
}
/********************************************************************************************/
/* END OF LAB3                                                                              */
/********************************************************************************************/



/* Led on function Implementation */
void LedOn (void)
{
	HLED_voidTurnOn(GPIOA , GPIO_PIN2);
}

/* Led off function Implementation */
void LedOff (void)
{
	HLED_voidTurnOff(GPIOA , GPIO_PIN2);
}



/********************************************************************************************/
/* END OF FILE: main.c                                                                      */
/********************************************************************************************/