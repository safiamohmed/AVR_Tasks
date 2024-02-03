/*
 * push_button.c
 *
 *  Created on: Dec 9, 2023
 *      Author: admin
 */
#include "LED.h"
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "push_button.h"
#include "DIO_INTERFACE.h"

/*void Push_voidInit(u8 Copy_u8Port,u8 Copy_u8PinNum){
   u8 Local_State;
	DIO_enumSetPinDirection(Copy_u8Port,Copy_u8PinNum,DIO_INPUT);
	LED_voidInit(PORTA,DIO_PIN1);

if( DIO_enumGetPinValue(Copy_u8Port,Copy_u8PinNum,&Local_State)==1){
	LED_voidOn(PORTA,DIO_PIN1);}

else if (DIO_enumGetPinValue(Copy_u8Port,Copy_u8PinNum,&Local_State)==0){
	LED_voidOff(PORTA,DIO_PIN1);}
else{}



}*/
void button_voidInit ( button Button_Configuration)
{
DIO_enumSetPinDirection( Button_Configuration.Port , Button_Configuration.Pin ,DIO_INPUT);
if( Button_Configuration.Pull_State == button_PULL_UP )
{
DIO_enumSetPinValue( Button_Configuration.Port , Button_Configuration.Pin ,
DIO_HIGH);
}
else if( Button_Configuration.Pull_State == button_FLOATING )
{
DIO_enumSetPinValue( Button_Configuration.Port , Button_Configuration.Pin ,DIO_LOW );
}
}
u8 button_u8GetPressed( button Button_Configuration){

	u8 Loc_u8Result = 0;
	DIO_enumGetPinValue ( Button_Configuration.Port , Button_Configuration.Pin ,&Loc_u8Result);
	return Loc_u8Result;
}

