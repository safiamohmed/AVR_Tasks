/*
 * KEYPAD_PROGRAM.c
 *
 *  Created on: 15 Mar 2024
 *      Author: safia
 */

#include "DIO_INTERFACE.h"
#include "DIO_configration.h"
#include "DIO_privete.h"
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "KEYPAD_CONFG.h"
#include "KEYPAD_INTERFACE.h"
#include "KEYPAD_PRIVATE.h"
#include <util/delay.h>

void KPD_INIT()
{
	/* Initialize first 4 bits in keypad as output pins */
	DIO_enumSetPinDirection(keypad_port,keypad_col0_pin,DIO_OUTPUT);
	DIO_enumSetPinDirection(keypad_port,keypad_col1_pin,DIO_OUTPUT);
	DIO_enumSetPinDirection(keypad_port,keypad_col2_pin,DIO_OUTPUT);
	DIO_enumSetPinDirection(keypad_port,keypad_col3_pin,DIO_OUTPUT);
	/* initalize second four bits in keypad as input pins */
	DIO_enumSetPinDirection(keypad_port,keypad_row0_pin,DIO_INPUT);
	DIO_enumSetPinDirection(keypad_port,keypad_row1_pin,DIO_INPUT);
	DIO_enumSetPinDirection(keypad_port,keypad_row2_pin,DIO_INPUT);
	DIO_enumSetPinDirection(keypad_port,keypad_row3_pin,DIO_INPUT);
	/*connect pull up resistance to the input pins*/

	DIO_enumSetPortValue(keypad_port,0xff);
}
u8 KPD_u8GetPressedKey()
{
	u8 onpress=0xff;
	u8 Local_u8state;
	static u8 Local_u8KPDArr[rownum][colnum]={
			{'7','8','9','/'},
			{'4','5','6','*'},
			{'1','2','3','-'},
			{'c','0','=','+'}};
	//	static u8 Local_u8KPDArr[rownum][colnum]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
	static u8 Local_u8colarray[colnum]={keypad_col0_pin,keypad_col1_pin,keypad_col2_pin,keypad_col3_pin};
	static u8 Local_u8rowarray[rownum]={keypad_row0_pin,keypad_row1_pin,keypad_row2_pin,keypad_row3_pin};
	for(u8 Local_u8CoulmnIndex=0;Local_u8CoulmnIndex<colnum;Local_u8CoulmnIndex++)
	{
		DIO_enumSetPinValue(keypad_port,Local_u8colarray[Local_u8CoulmnIndex],DIO_LOW);
		for(u8 Local_u8RowIndex=0;Local_u8RowIndex<rownum;Local_u8RowIndex++)
		{
			DIO_enumGetPinValue(keypad_port,Local_u8rowarray[Local_u8RowIndex],&Local_u8state);


			if(Local_u8state==DIO_LOW){
				_delay_ms(50);
				DIO_enumGetPinValue(keypad_port,Local_u8rowarray[Local_u8RowIndex],&Local_u8state);

				if(Local_u8state==DIO_LOW){




					onpress=Local_u8KPDArr[Local_u8RowIndex][Local_u8CoulmnIndex];}//put the selected pressed key to the return value
				while(Local_u8state==DIO_LOW)
				{
					DIO_enumGetPinValue(keypad_port,Local_u8rowarray[Local_u8RowIndex],&Local_u8state);
				}
				break;


			}}

		DIO_enumSetPinValue(keypad_port,Local_u8colarray[Local_u8CoulmnIndex],DIO_HIGH);
	}
	return onpress;//return the pressed key in case of key pressed or return 0xff in case of no key pressed

}

