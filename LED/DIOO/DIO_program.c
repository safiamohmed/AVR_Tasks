/*
 * DIO_program.c
 *
 *  Created on: Nov 29, 2023
 *      Author: admin
 */
#include "DIO_INTERFACE.h"
#include "DIO_configration.h"
#include "DIO_privete.h"
#include "STD_TYPES.h"
#include "BIT_MATH.h"


DIO_ErrorStatus DIO_enumSetPortDirection(u8 Copy_u8Port , u8 Copy_u8Direction)
{
DIO_ErrorStatus LOC_enumState = DIO_OK;
switch(Copy_u8Port)
{
case PORTA : DDRA_REG = Copy_u8Direction; break;
case PORTB : DDRB_REG = Copy_u8Direction; break;
case PORTC : DDRC_REG = Copy_u8Direction; break;
case PORTD : DDRD_REG = Copy_u8Direction; break;
default : LOC_enumState = DIO_NOK ; break;
}
return LOC_enumState;
}
DIO_ErrorStatus DIO_enumSetPinDirection(u8 Copy_u8Port , u8 Copy_u8PinNumber , u8 Copy_u8Direction)
{
DIO_ErrorStatus LOC_enumState = DIO_OK;
if(Copy_u8PinNumber >= DIO_PIN0 && Copy_u8PinNumber <= DIO_PIN7)
{
switch(Copy_u8Port)
{
case PORTA :
if(Copy_u8Direction == DIO_OUTPUT){SET_BIT(DDRA_REG,Copy_u8PinNumber);}
else if(Copy_u8Direction == DIO_INPUT)
{CLEAR_BIT(DDRA_REG,Copy_u8PinNumber);}
else {LOC_enumState = DIO_NOK ;}
break;
case PORTB :
if(Copy_u8Direction == DIO_OUTPUT){SET_BIT(DDRB_REG,Copy_u8PinNumber);}
else if(Copy_u8Direction == DIO_INPUT)
{CLEAR_BIT(DDRB_REG,Copy_u8PinNumber);}
else {LOC_enumState = DIO_NOK ;}
break;
case PORTC :
if(Copy_u8Direction == DIO_OUTPUT){SET_BIT(DDRC_REG,Copy_u8PinNumber);}
else if(Copy_u8Direction == DIO_INPUT)
{CLEAR_BIT(DDRC_REG,Copy_u8PinNumber);}
else {LOC_enumState = DIO_NOK ;}
break;
case PORTD :
if(Copy_u8Direction == DIO_OUTPUT){SET_BIT(DDRD_REG,Copy_u8PinNumber);}
else if(Copy_u8Direction == DIO_INPUT)
{CLEAR_BIT(DDRD_REG,Copy_u8PinNumber);}
else {LOC_enumState = DIO_NOK ;}
break;
default : LOC_enumState = DIO_NOK ; break;
}
}
else{LOC_enumState = DIO_NOK ;}
return LOC_enumState;
}
DIO_ErrorStatus DIO_enumSetPortValue (u8 Copy_u8Port , u8 Copy_u8Value)
{
DIO_ErrorStatus LOC_enumState = DIO_OK;
switch(Copy_u8Port)
{
case PORTA : PORTA_REG = Copy_u8Value; break;
case PORTB : PORTB_REG = Copy_u8Value; break;
case PORTC : PORTC_REG = Copy_u8Value; break;
case PORTD : PORTD_REG = Copy_u8Value; break;
default : LOC_enumState = DIO_NOK ; break;
}
return LOC_enumState;
}
DIO_ErrorStatus DIO_enumGetPortValue (u8 Copy_u8Port , u8 *Copy_Data)
{
DIO_ErrorStatus LOC_enumState = DIO_OK;
switch(Copy_u8Port)
{
case PORTA : *Copy_Data = PINA_REG; break;
case PORTB : *Copy_Data = PINB_REG; break;
case PORTC : *Copy_Data = PINC_REG; break;
case PORTD : *Copy_Data = PIND_REG; break;
default : LOC_enumState = DIO_NOK ; break;
}
return LOC_enumState;
}


DIO_ErrorStatus DIO_enumSetPinValue (u8 Copy_u8Port , u8 Copy_u8PinNumber , u8 Copy_u8Value)
{
DIO_ErrorStatus LOC_enumState = DIO_OK;
if(Copy_u8PinNumber >= DIO_PIN0 && Copy_u8PinNumber <= DIO_PIN7)
{
switch(Copy_u8Port)
{
case PORTA :
if(Copy_u8Value == DIO_HIGH){SET_BIT(PORTA_REG,Copy_u8PinNumber);}
else if(Copy_u8Value == DIO_LOW){CLEAR_BIT(PORTA_REG,Copy_u8PinNumber);}
else {LOC_enumState = DIO_NOK ;}
break;
case PORTB :
if(Copy_u8Value == DIO_HIGH){SET_BIT(PORTB_REG,Copy_u8PinNumber);}
else if(Copy_u8Value == DIO_LOW){CLEAR_BIT(PORTB_REG,Copy_u8PinNumber);}
else {LOC_enumState = DIO_NOK ;}
break;
case PORTC :
if(Copy_u8Value == DIO_HIGH){SET_BIT(PORTC_REG,Copy_u8PinNumber);}
else if(Copy_u8Value == DIO_LOW){CLEAR_BIT(PORTC_REG,Copy_u8PinNumber);}
else {LOC_enumState = DIO_NOK ;}
break;
case PORTD :
if(Copy_u8Value == DIO_HIGH){SET_BIT(PORTD_REG,Copy_u8PinNumber);}
else if(Copy_u8Value == DIO_LOW){CLEAR_BIT(PORTD_REG,Copy_u8PinNumber);}
else {LOC_enumState = DIO_NOK ;}
break;
default : LOC_enumState = DIO_NOK ; break;
}
}
else{LOC_enumState = DIO_NOK ;}
return LOC_enumState;
}
DIO_ErrorStatus DIO_enumGetPinValue (u8 Copy_u8Port , u8 Copy_u8PinNumber , u8
* Copy_ptrData)
{
DIO_ErrorStatus LOC_enumState = DIO_OK;
if(Copy_u8PinNumber >= DIO_PIN0 && Copy_u8PinNumber <= DIO_PIN7)
{
switch(Copy_u8Port)
{
case PORTA : *Copy_ptrData = GET_BIT(PINA_REG,Copy_u8PinNumber);
break;
case PORTB : *Copy_ptrData = GET_BIT(PINB_REG,Copy_u8PinNumber);
break;
case PORTC : *Copy_ptrData = GET_BIT(PINC_REG,Copy_u8PinNumber);
break;
case PORTD : *Copy_ptrData = GET_BIT(PIND_REG,Copy_u8PinNumber);
break;
default : LOC_enumState = DIO_NOK ;
break;
}
}
else{LOC_enumState = DIO_NOK ;}
return LOC_enumState;
}
