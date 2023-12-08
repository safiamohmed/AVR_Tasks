/*
 * LED.h
 *
 *  Created on: Dec 8, 2023
 *      Author: admin
 */

#ifndef LED_H_
#define LED_H_
#include "STD_TYPES.h"
void LED_voidInit(u8 Copy_u8Port,u8 Copy_u8Pin);
void LED_voidOn(u8 Copy_u8Port,u8 Copy_u8Pin);
void LED_voidOff(u8 Copy_u8Port,u8 Copy_u8Pin);
void LED_voidToggle(u8 Copy_u8Port,u8 Copy_u8Pin,u8 *Copy_Data);

#endif /* LED_H_ */
