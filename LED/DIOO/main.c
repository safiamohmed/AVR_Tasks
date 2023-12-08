/*
 * main.c
 *
 *  Created on:29 Nov 2023
 *      Author: Safia Mohamed
 *      version:V1
 */
#include <avr/io.h>
#include <util/delay.h>
#include "LED.h"
#include "DIO_INTERFACE.h"
#include "DIO_privete.h"

#define F_CPU  8000000UL
int main (){



LED_voidInit(PORTA,DIO_PIN0);
LED_voidInit(PORTA,DIO_PIN1);
LED_voidInit(PORTB,DIO_PIN0);
while (1){
	LED_voidOn(PORTA,DIO_PIN0);
	_delay_ms(3000);
	LED_voidOff(PORTA,DIO_PIN0);
	_delay_ms(1000);
	LED_voidOn(PORTA,DIO_PIN1);
	_delay_ms(3000);
	LED_voidOff(PORTA,DIO_PIN1);
	_delay_ms(1000);

}




}
