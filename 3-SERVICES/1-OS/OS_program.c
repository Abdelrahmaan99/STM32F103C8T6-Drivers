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
/* Include libraries                                                                        */
/********************************************************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

/********************************************************************************************/
/* Include Interface Files in MCAL                                                          */
/********************************************************************************************/
#include "STK_interface.h"

/********************************************************************************************/
/* Include Component Files                                                                  */
/********************************************************************************************/
#include "OS_interface.h"
#include "OS_config.h"
#include "OS_private.h"


/******************************************************************************/
/* Syntax          : void SOS_voidCreateTask(u8 Copy_u8TaskID , u16 Copy_u16Period , void (*Ptr)(void) , u16 Copy_u16FirstDelay)
* Description      : Create Task
* Sync\Async       : Synchronous
* Parameters       : Copy_u8TaskID , Copy_u16Period , void (*Ptr)(void) , Copy_u16FirstDelay
* Return value:    : void
*******************************************************************************/
void SOS_voidCreateTask(u8 Copy_u8TaskID , u16 Copy_u16Period , void (*Ptr)(void) , u16 Copy_u16FirstDelay)
{
	/* Assign values of task */
	OStasks[Copy_u8TaskID].Period = Copy_u16Period;
	OStasks[Copy_u8TaskID].TaskHandler = Ptr;
	OStasks[Copy_u8TaskID].FirstDelay = Copy_u16FirstDelay;
	OStasks[Copy_u8TaskID].State = TASK_READY;					/* Default state of task is Ready */
}
/********************************************************************************************/
/*   END OF Function                                                                        */
/********************************************************************************************/



/******************************************************************************/
/* Syntax          : void SOS_voidStart(void)
* Description      : Start Execution Tasks
* Sync\Async       : Synchronous
* Parameters       : void
* Return value:    : void
*******************************************************************************/
void SOS_voidStart(void)
{
	/* Initialize STK */
	MSTK_voidInit();

	/* Invoke SCHEDULER Function every 1ms */
	MSTK_u8SetIntervalPeriodicInMilliSec(1 , voidSCHEDULER);
}
/********************************************************************************************/
/*   END OF Function                                                                        */
/********************************************************************************************/



/******************************************************************************/
/* Syntax          : void SOS_voidSuspendTask(u8 Copy_u8TaskID)
* Description      : Suspend Task
* Sync\Async       : Synchronous
* Parameters       : Copy_u8TaskID
* Return value:    : void
*******************************************************************************/
void SOS_voidSuspendTask(u8 Copy_u8TaskID)
{
	OStasks[Copy_u8TaskID].State = TASK_SUSPENDED;
}
/********************************************************************************************/
/*   END OF Function                                                                        */
/********************************************************************************************/



/******************************************************************************/
/* Syntax          : void SOS_voidResumeTask(u8 Copy_u8TaskID)
* Description      : Resume Task
* Sync\Async       : Synchronous
* Parameters       : Copy_u8TaskID
* Return value:    : void
*******************************************************************************/
void SOS_voidResumeTask(u8 Copy_u8TaskID)
{
	OStasks[Copy_u8TaskID].State=TASK_READY;
}
/********************************************************************************************/
/*   END OF Function                                                                        */
/********************************************************************************************/



/******************************************************************************/
/* Syntax          : void SOS_voidDeleteTask(u8 Copy_u8TaskID)
* Description      : Delete Task
* Sync\Async       : Synchronous
* Parameters       : Copy_u8TaskID
* Return value:    : void
*******************************************************************************/
void SOS_voidDeleteTask(u8 Copy_u8TaskID)
{
	OStasks[Copy_u8TaskID].TaskHandler=NULL;
}
/********************************************************************************************/
/*   END OF Function                                                                        */
/********************************************************************************************/



/********************************************************************************************/
/*   END OF FILE: OS_program.c                                                             */
/********************************************************************************************/
