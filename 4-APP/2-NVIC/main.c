/********************************************************************************************/
/********************************************************************************************/
/**************************		Author:  Abdelrahman El_Gharbawy	            *************/
/**************************		Date:    7 December 2020	            		*************/
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
#include "SCB_interface.h"


/********************************************************************************************/
/* Include Interface Files in HAL                                                           */
/********************************************************************************************/
#include "LED_interface.h"


	/***************************************************/
	/* LAB1: TEST SET PENDING FLAG FUNC IN NVIC DRIVER */
	/***************************************************/

///* Entry point */
//void main(void)
//{
//	/* Initialize RCC */
//	MRCC_voidInitSysClock();
//
//	/* Enable GPIOA Clock */
//	MRCC_u8EnableClock(RCC_APB2 , RCC_GPIOA);
//
//	/* Enable EXTI0 interrupt from  NVIC */
//	MNVIC_u8EnableInterrupt(NVIC_EXTI0);
//
//	/* Enable EXTI1 interrupt from  NVIC */
//	MNVIC_u8EnableInterrupt(NVIC_EXTI1);
//
//	/* Set Pending Flag for EXTI0 */
//	MNVIC_u8SetPendingFlag(NVIC_EXTI0);
//
//	/* Still in Infinty Loop */
//	while(1)
//	{
//
//	}
//
//}
//
///* EXTI0 ISR */
//void EXTI0_IRQHandler(void)
//{
//	/* LED ON PA0 */
//	HLED_voidTurnOn(GPIOA , GPIO_PIN0);
//
//	/* Set Pending Flag for EXTI1 */
//	MNVIC_u8SetPendingFlag(NVIC_EXTI1);
//
//	/* LED ON PA1 */
//	HLED_voidTurnOn(GPIOA , GPIO_PIN1);
//}
//
///* EXTI0 ISR */
//void EXTI1_IRQHandler(void)
//{
//	/* LED ON PA2 */
//	HLED_voidTurnOn(GPIOA , GPIO_PIN2);
//}
	/********************************************************************************************/
	/* END OF LAB1                                                                              */
	/********************************************************************************************/



	/*******************************************************/
	/* LAB2: TEST SET PRIORITY FUNC IN NVIC AND SCB DRIVER */
	/*******************************************************/

///* Entry point */
//void main(void)
//{
//	/* Initialize RCC */
//	MRCC_voidInitSysClock();
//
//	/* Enable GPIOA Clock */
//	MRCC_u8EnableClock(RCC_APB2 , RCC_GPIOA);
//
//	/* SET GONFIGURATION PRIORITY IN SCB (GROUP 2 AND SUB 2) */
//	MSCB_voidSetConfigPriority(SCB_GROUP_2_SUB_2);
//
//	/* SET EXTI0 PRIORITY */
//	MNVIC_voidSetPriority(NVIC_EXTI0 , NVIC_GROUP1 , NVIC_SUB_GROUP0 , NVIC_GROUP_2_SUB_2);
//
//	/* SET EXTI1 PRIORITY */
//	MNVIC_voidSetPriority(NVIC_EXTI1 , NVIC_GROUP0 , NVIC_SUB_GROUP3 , NVIC_GROUP_2_SUB_2);
//
//	/* Enable EXTI0 interrupt from  NVIC */
//	MNVIC_u8EnableInterrupt(NVIC_EXTI0);
//
//	/* Enable EXTI1 interrupt from  NVIC */
//	MNVIC_u8EnableInterrupt(NVIC_EXTI1);
//
//	/* Set Pending Flag for EXTI0 */
//	MNVIC_u8SetPendingFlag(NVIC_EXTI0);
//
//	/* Still in Infinty Loop */
//	while(1)
//	{
//
//	}
//
//}
//
///* EXTI0 ISR */
//void EXTI0_IRQHandler(void)
//{
//	/* LED ON PA0 */
//	HLED_voidTurnOn(GPIOA , GPIO_PIN0);
//
//	/* Set Pending Flag for EXTI1 */
//	MNVIC_u8SetPendingFlag(NVIC_EXTI1);
//
//	/* LED ON PA1 */
//	HLED_voidTurnOn(GPIOA , GPIO_PIN1);
//}
//
///* EXTI0 ISR */
//void EXTI1_IRQHandler(void)
//{
//	/* LED ON PA2 */
//	HLED_voidTurnOn(GPIOA , GPIO_PIN2);
//}
	/********************************************************************************************/
	/* END OF LAB2                                                                              */
	/********************************************************************************************/



/********************************************************************************************/
/* END OF FILE: main.c                                                                      */
/********************************************************************************************/
