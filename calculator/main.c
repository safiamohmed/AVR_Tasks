/*
 * main.c
 *
 *  Created on: 22 Mar 2024
 *      Author: safia
 */
#include "DIO_INTERFACE.h"
#include "DIO_configration.h"
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "KEYPAD_CONFG.h"
#include "KEYPAD_INTERFACE.h"
#include "LED_Interface.h"
#include "LCD_INTERFACE.h"
#include "LCD_CONFG.h"
#include "calc.h"
#include <util/delay.h>
u16 mul(u8 num1,u8 num2){
	return num1*num2;
}
int main(){



	KPD_INIT();

	LCD_voidInit();

	while(1){

		calc();



	}
	return 0;
}


