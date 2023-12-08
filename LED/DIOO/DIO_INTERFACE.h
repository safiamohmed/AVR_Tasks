/*
 * DIO_INTERFACE.h
 *
 *  Created on:29 Nov 2023
 *      Author: Safia Mohamed
 *      version:V
 */

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_
#include "STD_TYPES.h"
#define DIO_PIN0   0
#define DIO_PIN1   1
#define DIO_PIN2   2
#define DIO_PIN3   3
#define DIO_PIN4   4
#define DIO_PIN5   5
#define DIO_PIN6   6
#define DIO_PIN7   7

#define PORTA   0
#define PORTB   1
#define PORTC   2
#define PORTD   3

#define DIO_HIGH   1
#define DIO_LOW    0
/*direction*/
#define DIO_OUTPUT 1
#define DIO_INPUT  0

typedef enum
{
	DIO_NOK,
	DIO_OK
}DIO_ErrorStatus;

DIO_ErrorStatus DIO_enumSetPortDirection(u8 Copy_u8Port,u8 Copy_u8Direction);

DIO_ErrorStatus DIO_enumSetPortValue (u8 Copy_u8Port,u8 Copy_u8Value);
DIO_ErrorStatus DIO_enumGetPortValue (u8 Copy_u8Port,u8 *Copy_Data);

DIO_ErrorStatus DIO_enumSetPinDirection(u8 Copy_u8Port,u8 Copy_u8PinNumber,u8 Copy_u8Direction);
DIO_ErrorStatus DIO_enumSetPinValue (u8 Copy_u8Port,u8 Copy_u8PinNumber,u8 Copy_u8Value);
DIO_ErrorStatus DIO_enumGetPinValue (u8 Copy_u8Port,u8 Copy_u8PinNumber,u8* Copy_ptrData);

#endif
