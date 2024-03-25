/*
 * LCD_HEADER.h
 *
 *  Created on: 23 Mar 2024
 *      Author: safia
 */

#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_
/*
	Function Name        : LCD_voidInit
	Function Returns     : void
	Function Arguments   : void
	Function Description : Initialize the LCD screen to be ready for use.
*/
void LCD_voidInit(void);
/*
	Function Name        : LCD_voidSendCommand
	Function Returns     : void
	Function Arguments   : u8 copy_u8Command
	Function Description : Send the given command to be executed by the LCD.
*/
void LCD_voidSendCommand(u8 copy_u8Command);
/*
	Function Name        : LCD_voidSendData
	Function Returns     : void
	Function Arguments   : u8 copy_u8Data
	Function Description : Print the given data on the LCD screen at the current cursor location.
*/
void LCD_voidSendData(u8 copy_u8Data);
/*
	Function Name        : LCD_voidSendString
	Function Returns     : void
	Function Arguments   : char* Copy_u8String
	Function Description : Print the given string at the current cursor location.
*/
void LCD_voidSendString(const char* Copy_u8String);
/*
	Function Name        : LCD_voidGoToXY
	Function Returns     : void
	Function Arguments   : u8 Copy_u8Xposition,u8 Copy_u8Yposition
	Function Description : Move the cursor at the given row and column (Rows 1:2 , Cols 1:16)
*/
void LCD_voidGoToXY(u8 Copy_u8Xposition,u8 Copy_u8Yposition);
/*
	Function Name        : LCD_voidWriteNumber
	Function Returns     : void
	Function Arguments   : u32 copy_u32Number
	Function Description : Print the given Number on the LCD screen at the current cursor location.
*/
void LCD_voidWriteNumber(u32 copy_u32Number);

/*
	Function Name        : LCD_clearscreen
	Function Returns     : void
	Function Arguments   : void
	Function Description : Clear all printed characters and move the cursor to the first location at the first line
*/
void LCD_voidClearScreen(void);


void CLCD_voidSendNumber   ( u32 Copy_s64Number    );


#endif /* LCD_INTERFACE_H_ */
