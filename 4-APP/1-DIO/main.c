/********************************************************************************************/
/********************************************************************************************/
/**************************		Author:  Abdelrahman El_Gharbawy	            *************/
/**************************		Date:    22 November 2020	            		*************/
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

/********************************************************************************************/
/* Include Interface Files in HAL                                                           */
/********************************************************************************************/
#include "LED_interface.h"
#include "SSD_interface.h"


/* MACROS and Global Variable */
#define DELAY_IN_MS						1000

/* Entry point */
void main(void)
{
	/* Initialize RCC */
	MRCC_voidInitSysClock();

	/* Enable GPIOA Clock */
	MRCC_u8EnableClock(RCC_APB2 , RCC_GPIOA);

	/* Enable GPIOB Clock */
	MRCC_u8EnableClock(RCC_APB2 , RCC_GPIOB);

	/* Enable GPIOC Clock */
	MRCC_u8EnableClock(RCC_APB2 , RCC_GPIOC);



	/**************************************************/
	/* LAB1: BLINK A0		                          */
	/**************************************************/
//		/* Initialize Local variable as counter */
//		u16 Local_u16Counter1 = 0;
//		u16 Local_u16Counter2 = 0;
//		/* Set PINA0 as output push pull 10MHZ */
//		MGPIO_u8SetPinDirection(GPIOA , GPIO_PIN0 ,  GPIO_OUTPUT_SPEED_10MHZ_PP);
//
//		/* Still in Infinty Loop */
//		while(1)
//		{
//			/* Set A0 as HIGH */
//			MGPIO_u8SetPinValue(GPIOA ,  GPIO_PIN0 ,  GPIO_HIGH);
//
//			/* Wait until value of DELAY_IN_MS */
//			for(Local_u16Counter1 = 0 ; Local_u16Counter1 < DELAY_IN_MS ; Local_u16Counter1++)
//			{
//				for(Local_u16Counter2 = 0 ; Local_u16Counter2 < DELAY_IN_MS ; Local_u16Counter2++)
//				{
//					/* Assembly code : No Operation */
//					asm("NOP");
//				}
//
//			}
//			/* Set A0 as LOW */
//			MGPIO_u8SetPinValue(GPIOA ,  GPIO_PIN0 ,  GPIO_LOW);
//
//		    /* Wait until value of DELAY_IN_MS */
//			for(Local_u16Counter1 = 0 ; Local_u16Counter1 < DELAY_IN_MS ; Local_u16Counter1++)
//			{
//				for(Local_u16Counter2 = 0 ; Local_u16Counter2 < DELAY_IN_MS ; Local_u16Counter2++)
//				{
//					/* Assembly code : No Operation */
//					asm("NOP");
//				}
//
//			}
//
//		}
	/********************************************************************************************/
	/* END OF LAB1                                                                              */
	/********************************************************************************************/



	/**************************************************/
	/* LAB2 : Set HIGH at All Pins	                  */
	/**************************************************/
//		/* Set PORTA as output push pull 10MHZ */
//		MGPIO_u8SetPinDirection(GPIOA ,  GPIO_PIN0  , GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOA ,  GPIO_PIN1  , GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOA ,  GPIO_PIN2  , GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOA ,  GPIO_PIN3  , GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOA ,  GPIO_PIN4  , GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOA ,  GPIO_PIN5  , GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOA ,  GPIO_PIN6  , GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOA ,  GPIO_PIN7  , GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOA ,  GPIO_PIN8  , GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOA ,  GPIO_PIN9  , GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOA ,  GPIO_PIN10 , GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOA ,  GPIO_PIN11 , GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOA ,  GPIO_PIN12 , GPIO_OUTPUT_SPEED_10MHZ_PP);
//
//		/* Set PORTB as output push pull 10MHZ */
//		MGPIO_u8SetPinDirection(GPIOB ,  GPIO_PIN0  , GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOB ,  GPIO_PIN1  , GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOB ,  GPIO_PIN5  , GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOB ,  GPIO_PIN6  , GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOB ,  GPIO_PIN7  , GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOB ,  GPIO_PIN8  , GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOB ,  GPIO_PIN9  , GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOB ,  GPIO_PIN10 , GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOB ,  GPIO_PIN11 , GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOB ,  GPIO_PIN12 , GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOB ,  GPIO_PIN13 , GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOB ,  GPIO_PIN14 , GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOB ,  GPIO_PIN15 , GPIO_OUTPUT_SPEED_10MHZ_PP);
//
//		/* Set PORTC as output push pull 10MHZ */
//		MGPIO_u8SetPinDirection(GPIOC , GPIO_PIN13 , GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOC , GPIO_PIN14 , GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOC , GPIO_PIN15 , GPIO_OUTPUT_SPEED_10MHZ_PP);
//
//		/* Set all pins in portA as HIGH Except pin13 , pin14 and pin15*/
//		MGPIO_u8SetPinValue(GPIOA ,  GPIO_PIN0  , GPIO_HIGH);
//		MGPIO_u8SetPinValue(GPIOA ,  GPIO_PIN1  , GPIO_HIGH);
//		MGPIO_u8SetPinValue(GPIOA ,  GPIO_PIN2  , GPIO_HIGH);
//		MGPIO_u8SetPinValue(GPIOA ,  GPIO_PIN3  , GPIO_HIGH);
//		MGPIO_u8SetPinValue(GPIOA ,  GPIO_PIN4  , GPIO_HIGH);
//		MGPIO_u8SetPinValue(GPIOA ,  GPIO_PIN5  , GPIO_HIGH);
//		MGPIO_u8SetPinValue(GPIOA ,  GPIO_PIN6  , GPIO_HIGH);
//		MGPIO_u8SetPinValue(GPIOA ,  GPIO_PIN7  , GPIO_HIGH);
//		MGPIO_u8SetPinValue(GPIOA ,  GPIO_PIN8  , GPIO_HIGH);
//		MGPIO_u8SetPinValue(GPIOA ,  GPIO_PIN9  , GPIO_HIGH);
//		MGPIO_u8SetPinValue(GPIOA ,  GPIO_PIN10 , GPIO_HIGH);
//		MGPIO_u8SetPinValue(GPIOA ,  GPIO_PIN11 , GPIO_HIGH);
//		MGPIO_u8SetPinValue(GPIOA ,  GPIO_PIN12 , GPIO_HIGH);
//		MGPIO_u8SetPinValue(GPIOA ,  GPIO_PIN13 , GPIO_HIGH);
//		MGPIO_u8SetPinValue(GPIOA ,  GPIO_PIN14 , GPIO_HIGH);
//
//		/* Set all pins in portB as HIGH except pin2 , pin3 and pin4 */
//		MGPIO_u8SetPinValue(GPIOB ,  GPIO_PIN0  , GPIO_HIGH);
//		MGPIO_u8SetPinValue(GPIOB ,  GPIO_PIN1  , GPIO_HIGH);
//		MGPIO_u8SetPinValue(GPIOB ,  GPIO_PIN5  , GPIO_HIGH);
//		MGPIO_u8SetPinValue(GPIOB ,  GPIO_PIN6  , GPIO_HIGH);
//		MGPIO_u8SetPinValue(GPIOB ,  GPIO_PIN7  , GPIO_HIGH);
//		MGPIO_u8SetPinValue(GPIOB ,  GPIO_PIN8  , GPIO_HIGH);
//		MGPIO_u8SetPinValue(GPIOB ,  GPIO_PIN9  , GPIO_HIGH);
//		MGPIO_u8SetPinValue(GPIOB ,  GPIO_PIN10 , GPIO_HIGH);
//		MGPIO_u8SetPinValue(GPIOB ,  GPIO_PIN11 , GPIO_HIGH);
//		MGPIO_u8SetPinValue(GPIOB ,  GPIO_PIN12 , GPIO_HIGH);
//		MGPIO_u8SetPinValue(GPIOB ,  GPIO_PIN13 , GPIO_HIGH);
//		MGPIO_u8SetPinValue(GPIOB ,  GPIO_PIN14 , GPIO_HIGH);
//		MGPIO_u8SetPinValue(GPIOB ,  GPIO_PIN15 , GPIO_HIGH);
//
//		/* Set pin13 , pin14 and pin15 on portC as HIGH   */
//		MGPIO_u8SetPinValue(GPIOC ,  GPIO_PIN13 , GPIO_HIGH);
//		MGPIO_u8SetPinValue(GPIOC ,  GPIO_PIN14 , GPIO_HIGH);
//		MGPIO_u8SetPinValue(GPIOC ,  GPIO_PIN15 , GPIO_HIGH);
//
//		/* Still in Infinity Loop */
//		while(1)
//		{
//
//		}
	/********************************************************************************************/
	/* END OF LAB2                                                                              */
	/********************************************************************************************/



	/**************************************************/
	/* LAB3 : Display 1 on Seven Segment	          */
	/**************************************************/
//		/*Set pins From pin0 to pin6 as output push pull 10MHZ */
//		MGPIO_u8SetPinDirection(GPIOA ,  GPIO_PIN0 ,	GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOA ,  GPIO_PIN1 ,  GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOA ,  GPIO_PIN2 ,  GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOA ,  GPIO_PIN3 ,  GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOA ,  GPIO_PIN4 ,  GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOA ,  GPIO_PIN5 ,  GPIO_OUTPUT_SPEED_10MHZ_PP);
//		MGPIO_u8SetPinDirection(GPIOA ,  GPIO_PIN6 ,  GPIO_OUTPUT_SPEED_10MHZ_PP);
//
//		/* Still in Infinity Loop */
//		while(1)
//		{
//			/* Wirte Number 1 on pins from pin0 to pin6 on PORTA */
//			MGPIO_u8SetPinValue(GPIOA ,  GPIO_PIN0  ,  GPIO_LOW);
//		    MGPIO_u8SetPinValue(GPIOA ,  GPIO_PIN1  ,  GPIO_HIGH);
//		    MGPIO_u8SetPinValue(GPIOA ,  GPIO_PIN2  ,  GPIO_HIGH);
//		    MGPIO_u8SetPinValue(GPIOA ,  GPIO_PIN3  ,  GPIO_LOW);
//		    MGPIO_u8SetPinValue(GPIOA ,  GPIO_PIN4  ,  GPIO_LOW);
//		    MGPIO_u8SetPinValue(GPIOA ,  GPIO_PIN5  ,  GPIO_LOW);
//		    MGPIO_u8SetPinValue(GPIOA ,  GPIO_PIN6  ,  GPIO_LOW);
//		}
	/********************************************************************************************/
	/* END OF LAB3                                                                              */
	/********************************************************************************************/



	/**************************************************/
	/* LAB4 :Turn on Led by Mecahnical Switch	      */
	/**************************************************/
//		/* Initialize switch value with 1 */
//		u8 Local_u8State = 1;
//
//		/* Set A0 as output push pull 10MHZ */
//		MGPIO_u8SetPinDirection(GPIOA ,  GPIO_PIN0 , GPIO_OUTPUT_SPEED_10MHZ_PP);
//
//		/* Set A8 as input PullUp PullDown */
//		MGPIO_u8SetPinDirection(GPIOA ,  GPIO_PIN8 , GPIO_INPUT_PULL_UP_DOWN);
//
//		/* Set A8 as input PullUp */
//		MGPIO_u8SetPinValue(GPIOA ,  GPIO_PIN8 , GPIO_HIGH);
//
//		/* Still in infinity Loop */
//		while(1)
//		{
//			/* return state of switch */
//			MGPIO_u8GetPinValue(GPIOA , GPIO_PIN8 , &Local_u8State);
//
//			/*if switch is pressed */
//			if(Local_u8State == 0)
//			{
//				/* Turn on led  */
//				MGPIO_u8SetPinValue(GPIOA ,  GPIO_PIN0 , GPIO_HIGH);
//
//			}
//			/* if switch didn't press */
//			else
//			{
//				/* Turn off led */
//				MGPIO_u8SetPinValue(GPIOA ,  GPIO_PIN0 , GPIO_LOW);
//			}
//		}
	/********************************************************************************************/
	/* END OF LAB4                                                                              */
	/********************************************************************************************/



	/**************************************************/
	/* ASS1 : Tset LED DRIVER	                      */
	/**************************************************/
//	/* Initialize Local variable as counter */
//	u16 Local_u16Counter1 = 0;
//	u16 Local_u16Counter2 = 0;
//
//	/* Toggle Led(A0) for 5 times */
//	for(Local_u16Counter1 = 0; Local_u16Counter1 < 5; Local_u16Counter1++)
//	{
//		HLED_voidToggle(GPIOA ,  GPIO_PIN0 , DELAY_IN_MS);
//	}
//
//	/*  Turn on Led(C14) */
//	HLED_voidTurnOn(GPIOC ,  GPIO_PIN14);
//
//	/* Wait until value of DELAY_IN_MS */
//	for(Local_u16Counter1 = 0 ; Local_u16Counter1 < DELAY_IN_MS ; Local_u16Counter1++)
//	{
//		for(Local_u16Counter2 = 0 ; Local_u16Counter2 < DELAY_IN_MS ; Local_u16Counter2++)
//		{
//			/* Assembly code : No Operation */
//			asm("NOP");
//		}
//
//	}
//
//	/*  Turn off Led(C14) */
//	HLED_voidTurnOff(GPIOC ,  GPIO_PIN14);
//
//	/* Still in infinity Loop */
//	while(1)
//	{
//
//	}
	/********************************************************************************************/
	/* END OF ASS1                                                                              */
	/********************************************************************************************/



	/**************************************************/
	/* ASS2 : Tset SSD DRIVER	                      */
	/**************************************************/
//	/* Initialize Local counter */
//	u8 Local_u8Counter0 = 0;
//	u16 Local_u8Counter1 , Local_u8Counter2 = 0;
//
//	/* Still in infinity Loop */
//	while(1)
//	{
//		/* Loop in SSD_voidDisplayNumber to print numbers from 0 to 9 with DELAY_IN_MS */
//		for(Local_u8Counter0 = 0; Local_u8Counter0 <= 9; Local_u8Counter0++)
//		{
//			HSSD_u8DisplayNumber(SSD_CATHODE , Local_u8Counter0 , GPIOA , SSD_1ST_HALF_PORT);
//
//			for(Local_u8Counter1 = 0 ; Local_u8Counter1 < DELAY_IN_MS ; Local_u8Counter1++)
//			{
//				for(Local_u8Counter2 = 0 ; Local_u8Counter2 < DELAY_IN_MS ; Local_u8Counter2++)
//				{
//					asm("NOP");
//				}
//
//			}
//		}
//	}
/********************************************************************************************/
/* END OF ASS2                                                                              */
/********************************************************************************************/



}
/********************************************************************************************/
/* END OF FILE: main.c                                                                      */
/********************************************************************************************/
