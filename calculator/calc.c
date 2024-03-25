/*
 * calc.c
 *
 *  Created on: 24 Mar 2024
 *      Author: safia
 */


#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "KEYPAD_CONFG.h"
#include "KEYPAD_INTERFACE.h"
#include "LCD_CONFG.h"
#include "LCD_INTERFACE.h"
#include "LED_Interface.h"
#include "DIO_INTERFACE.h"
#include "DIO_configration.h"
#include <stdio.h>
#include <stdlib.h>
#include <util/delay.h>
void calc(){


	u8 Local_u8GetPressed;
	u8 opration1[16]= {};
	u8 opration2[16]= {};
	u8 coun1,coun2,code;
	LED_Confgration LED1={DIO_PORTB,DIO_PIN0,DIO_HIGH};
	LED_voidInit(LED1);
	LED_Confgration LED2={DIO_PORTB,DIO_PIN1,DIO_HIGH};
	LED_voidInit(LED2);

	for(u8 op1=0;op1<=16;op1++){
		LED_voidOn(LED1);
		do{
			Local_u8GetPressed = KPD_u8GetPressedKey();}
		while(Local_u8GetPressed==0xff);


		if(Local_u8GetPressed!='*'&&Local_u8GetPressed!='+'&&Local_u8GetPressed!='-'&&Local_u8GetPressed!='/'&&Local_u8GetPressed!='='&&Local_u8GetPressed!='c'){

			LCD_voidSendData(Local_u8GetPressed);
			opration1[op1]=Local_u8GetPressed;
			coun1++;


		}
		else if(Local_u8GetPressed=='*'||Local_u8GetPressed!='+'||Local_u8GetPressed!='-'||Local_u8GetPressed!='/'){

			LCD_voidSendData(Local_u8GetPressed);
			code =Local_u8GetPressed;
			LED_voidOff(LED1);




			break;
		}
		else{
			LCD_voidClearScreen();

			break;
		}
	}
	for(u8 op1=0;op1<=16;op1++){
		LED_voidOn(LED2);
		do{
			Local_u8GetPressed = KPD_u8GetPressedKey();}
		while(Local_u8GetPressed==0xff);
		if(Local_u8GetPressed!='*'&&Local_u8GetPressed!='+'&&Local_u8GetPressed!='-'&&Local_u8GetPressed!='/'&&Local_u8GetPressed!='='&&Local_u8GetPressed!='c'){
			LCD_voidSendData(Local_u8GetPressed);
			opration2[op1]=Local_u8GetPressed;
			coun2++;

		}
		else if(Local_u8GetPressed=='='){

			LCD_voidSendData(Local_u8GetPressed);
			LED_voidOff(LED2);
			break;


		}

		else
		{

		}


	}


	u8 res1 = atoi(opration1);
	u8 res2 = atoi(opration2);
	u8 res;

	LCD_voidGoToXY(1,0);


	switch(code){
	case '+':


		res=res2+res1;

		LCD_voidWriteNumber(res);

		break;
	case '*':
		res=res1*res2;

		LCD_voidWriteNumber(res);
		break;
	case '-':
		res=res1-res2;
		if(res1>res2){

			LCD_voidWriteNumber(res);
		}
		else {
			res=res2-res1;
			LCD_voidSendData('-');
			LCD_voidWriteNumber(res);
		}
		break;
	case '/':
		res=res1/res2;


		LCD_voidWriteNumber(res);

		break;
	default:
		LCD_voidClearScreen();
		break;


	}
	do{
		Local_u8GetPressed = KPD_u8GetPressedKey();}
	while(Local_u8GetPressed==0xff);
	if(Local_u8GetPressed=='c'){
		LCD_voidClearScreen();
	}
	LCD_voidGoToXY(0,1);




}
