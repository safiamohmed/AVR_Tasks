/*
 * main.c
 *
 *  Created on:29 Nov 2023
 *      Author: Safia Mohamed
 *      version:V1
 */
#include <avr/io.h>
#include <util/delay.h>
#include <avr/delay.h>
#include "LED_Interface.h"
#include "DIO_INTERFACE.h"
#include "DIO_privete.h"
#include "push_button.h"
#define F_CPU  8000000UL
int main (){



	button B1={DIO_PORTB ,DIO_PIN0,button_PULL_UP};
	button B2={DIO_PORTB ,DIO_PIN1,button_PULL_UP};
	button B3={DIO_PORTB ,DIO_PIN2,button_PULL_UP};
	button B4={DIO_PORTD ,DIO_PIN0,button_PULL_UP};
	button B5={DIO_PORTB ,DIO_PIN3,button_PULL_UP};
	LED_Confgration LED1={DIO_PORTA ,DIO_PIN0,ACTIVE_HIGH};
	LED_voidInit(LED1);
	LED_Confgration LED2={DIO_PORTA ,DIO_PIN1,ACTIVE_HIGH};
	LED_voidInit(LED2);
	LED_Confgration LED3={DIO_PORTA ,DIO_PIN2,ACTIVE_HIGH};
	LED_voidInit(LED3);
	LED_Confgration LED5={DIO_PORTA ,DIO_PIN3,ACTIVE_HIGH};
	LED_voidInit(LED5);
	LED_Confgration LED6={DIO_PORTA ,DIO_PIN4,ACTIVE_HIGH};
	LED_voidInit(LED6);
	LED_Confgration LED7={DIO_PORTC ,DIO_PIN2,ACTIVE_HIGH};
	LED_voidInit(LED7);
	LED_Confgration LED8={DIO_PORTC ,DIO_PIN3,ACTIVE_HIGH};
	LED_voidInit(LED8);
	LED_Confgration LED9={DIO_PORTC ,DIO_PIN4,ACTIVE_HIGH};
	LED_voidInit(LED9);
	button_voidInit(B1);
	button_voidInit(B2);
	button_voidInit(B3);
	button_voidInit(B4);
	button_voidInit(B5);

	while(1){
		/*some button draw shape*/

		if(button_u8GetPressed(B5)==0){
                    while(button_u8GetPressed(B5)==0){
		         if(button_u8GetPressed(B1)==0){


			LED_voidOn(LED1);
			LED_voidOn(LED2);
			LED_voidOn(LED3);
			LED_voidOn(LED5);
			LED_voidOn(LED6);

			_delay_ms(30000);
			LED_voidOff(LED1);
			LED_voidOff(LED2);
			LED_voidOff(LED3);
			LED_voidOff(LED5);
			LED_voidOff(LED6);



		}

		else if(button_u8GetPressed(B2)==0)
		{
			LED_voidOn(LED1);
			_delay_ms(3000);
			LED_voidOn(LED2);
			_delay_ms(3000);
			LED_voidOn(LED3);
			_delay_ms(3000);
			LED_voidOn(LED5);
			_delay_ms(3000);
			LED_voidOn(LED6);
			_delay_ms(3000);
			LED_voidOff(LED6);
			_delay_ms(3000);
			LED_voidOff(LED5);
			_delay_ms(3000);
			LED_voidOff(LED3);
			_delay_ms(3000);
			LED_voidOff(LED2);
			_delay_ms(3000);
			LED_voidOff(LED1);
			_delay_ms(3000);



		}

		else if(button_u8GetPressed(B3)==0)
		{
			LED_voidOn(LED1);
			LED_voidOn(LED6);
			_delay_ms(3000);
			LED_voidOn(LED2);
			LED_voidOn(LED5);
			_delay_ms(3000);
			LED_voidOn(LED3);
			_delay_ms(30000);

			LED_voidOff(LED3);
			_delay_ms(3000);
			LED_voidOff(LED2);
			LED_voidOff(LED5);
			_delay_ms(3000);
			LED_voidOff(LED1);
			LED_voidOff(LED6);
			_delay_ms(3000);
		}


	}}

		/*traffic light*/
		else if(button_u8GetPressed(B4)==0){
                    while(button_u8GetPressed(B4)==0){
			LED_voidOn(LED7);
			_delay_ms(3000000);
			LED_voidOff(LED7);
			LED_voidOn(LED8);
			_delay_ms(300000);
			LED_voidOff(LED8);
			LED_voidOn(LED9);
			_delay_ms(300000);
			LED_voidOff(LED9);
}

		}

	}

}




