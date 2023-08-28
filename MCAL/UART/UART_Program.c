/*
 * UART_Program.c
 *
 *  Created on: 27 Aug 2023
 *      Author: El-Wattaneya
 */
#include "UART_Interface.h"
#include <avr/io.h>

void MUART_voidInit(){

	UCSRB = 0b00011000;

	UCSRC = 0b10000110;
	/*Select Baud Rate 9600*/
	UBRRL = 51;


}


void MUART_voidTransmit(u8 A_u8Data){

	/*Wait For empty transmit buffer*/

	while(GET_BIT(UCSRA,5) == 0);
	/*Put data In TXD*/
	UDR = A_u8Data;

}


u8 MUART_u8Recieve(){
	/*Wait Till data Be Recieved*/
	while(GET_BIT(UCSRA,7)==0);
	return UDR;

}
void MUART_voidTransmitString (u8 *A_u8String){

	u8 Local_U8Counter ;
	for (Local_U8Counter = 0 ; A_u8String[Local_U8Counter] != '\0' ; Local_U8Counter++)
	{
		MUART_voidTransmit(A_u8String[Local_U8Counter]);
		_delay_ms(100) ;
	}
}



