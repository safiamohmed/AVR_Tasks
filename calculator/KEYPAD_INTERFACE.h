/*
 * KEYPAD_INTERFACE.h
 *
 *  Created on: 15 Mar 2024
 *      Author: safia
 */

#ifndef KEYPAD_INTERFACE_H_
#define KEYPAD_INTERFACE_H_
#include "STD_TYPES.h"
/*
	Function Name        : KPD_u8GetPressedKey
	Function Returns     : u8
	Function Arguments   : void
	Function Description : Returns the pressed key or return nopress if no keys are pressed.
*/
u8 KPD_u8GetPressedKey();
/*
	Function Name        : KPD_INIT
	Function Returns     : void
	Function Arguments   : void
	Function Description : Initialize the keypad.
*/
void KPD_INIT();


#endif /* KEYPAD_INTERFACE_H_ */
