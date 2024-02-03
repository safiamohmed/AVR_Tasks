/*
 * push_button.h
 *
 *  Created on: Dec 9, 2023
 *      Author: admin
 */

#ifndef PUSH_BUTTON_H_
#define PUSH_BUTTON_H_

#define button_FLOATING 0
#define button_PULL_UP 1
typedef struct
{
u8 Port ;
u8 Pin ;
u8 Pull_State;
}button;
void button_voidInit ( button Button_Configuration);
u8 button_u8GetPressed( button Button_Configuration);

//void Push_voidInit(u8 Copy_u8Port,u8 Copy_u8PinNum);

#endif /* PUSH_BUTTON_H_ */
