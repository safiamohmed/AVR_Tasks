/*
 * LED.h
 *
 *  Created on: Dec 8, 2023
 *      Author: admin
 */

#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_
#include "STD_TYPES.h"
#define ACTIVE_HIGH 1
//#define ACTIVE_LOW 0

typedef struct
{
	u8 port;
	u8 pin;
	u8 Active_State;

}LED_Confgration;
void LED_voidInit(LED_Confgration Led_u8Conf);
void LED_voidOn(LED_Confgration Led_u8Conf);
void LED_voidOff(LED_Confgration Led_u8Conf);
void LED_voidToggle(LED_Confgration Led_u8Conf);

#endif /* LED_INTERFACE_H_ */
