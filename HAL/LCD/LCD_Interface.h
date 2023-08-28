/*
 * LCD_Interface.h
 *
 *  Created on: 16 Aug 2023
 *      Author: El-Wattaneya
 */

#ifndef HAL_LCD_LCD_INTERFACE_H_
#define HAL_LCD_LCD_INTERFACE_H_
#include "../../MCAL/DIO/DIO_Interface.h"


/* MACROS For Used Ports & Pins */
#define 	LCD_DATA_PORT 			DIO_PORTC
#define 	LCD_CONTROL_PORT 		DIO_PORTA
#define 	RS 						DIO_PIN0
#define 	RW  					DIO_PIN1
#define 	EN  					DIO_PIN2

/* MACROS For LCD Command */
#define 	LCD_FUNC_SET 			0b00111000
#define 	LCD_ONOF 				0b00001100
#define  	LCD_CLEAR 				0b00000001
#define _LCD_DISPLAY_SHIFT_RIGHT        0x1C

/* MACROS For LCD Line */
#define 	LCD_U8_LINE1 			1
#define 	LCD_U8_LINE2 			2



/*Functions*/
void LCD_voidInit ();
void LCD_voidSendCommand(u8 Copy_U8Command);
void LCD_voidSendChar (u8 Copy_U8Data);
void LCD_voidSendString (u8 *Copy_U8String);
void LCD_voidGoTo (u8 Copy_U8LineNum , u8 Copy_U8CharNum);
void LCD_voidDisplayNumber(s32 A_s32Number) ;

#endif /* HAL_LCD_LCD_INTERFACE_H_ */
