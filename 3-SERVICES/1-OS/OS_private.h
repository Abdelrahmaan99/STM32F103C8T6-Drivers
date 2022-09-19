/********************************************************************************************/
/********************************************************************************************/
/**************************		Author:  Abdelrahman El_Gharbawy	            *************/
/**************************		Date:    10 January 2021	            		*************/
/**************************		Layer:   SERVICES								*************/
/**************************		SWC:	 OS										*************/
/**************************		Version: 1.00 	             					*************/
/********************************************************************************************/
/********************************************************************************************/

/********************************************************************************************/
/* Guard of file will call one time in .c  			                                        */
/********************************************************************************************/
#ifndef OS_PRIVATE_H_
#define OS_PRIVATE_H_

/********************************************************************************************/
/* Private Functions Prototype					 			                                */
/********************************************************************************************/
static void voidSCHEDULER(void);


/* Create Struct to carry element of Tasks */
typedef struct
{
	u16 Period;
	void (*TaskHandler)(void);
	u16	FirstDelay;
	u8 State;
}Task;


/* Define Sate Of Tasks */
#define			TASK_SUSPENDED			1
#define			TASK_READY				2


/* Initialize array of Struct to carry Tasks */
static Task OStasks[NUM_OF_TASKS] = {NULL};


/******************************************************************************/
/* Syntax          : static void voidSCHEDULER(void)
 * Description      : SCHEDULER Implementation
 * Sync\Async       : Synchronous
 * Parameters       : void
 * Return value:    : void
 *******************************************************************************/
static void voidSCHEDULER(void)
{
	/* Declare Local Counter */
	u8 Local_u8TaskCounter;

	/*Loop on the tasks*/
	for(Local_u8TaskCounter=0; Local_u8TaskCounter<NUM_OF_TASKS; Local_u8TaskCounter++)
	{
		/*chack that task isn't deleted or suspended */
		if((OStasks[Local_u8TaskCounter].TaskHandler != NULL) && (OStasks[Local_u8TaskCounter].State == TASK_READY) )
		{
			/*Check until the first delay equal to zero*/
			if(OStasks[Local_u8TaskCounter].FirstDelay == 0)
			{
				/* Fisrt delay equal to Period */
				OStasks[Local_u8TaskCounter].FirstDelay=OStasks[Local_u8TaskCounter].Period-1;

				/*Invoke the task function*/
				OStasks[Local_u8TaskCounter].TaskHandler();
			}
			else
			{
				/*Decrement the first delay*/
				OStasks[Local_u8TaskCounter].FirstDelay--;
			}
		}
		else
		{
			/*Do nothing*/
		}
	}
}

#endif
/********************************************************************************************/
/* END OF FILE: OS_private.h                                                               */
/********************************************************************************************/
