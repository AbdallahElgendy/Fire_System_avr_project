/*
 * UART_Interface.h
 *
 *  Created on: 27 Aug 2023
 *      Author: El-Wattaneya
 */

#ifndef MCAL_UART_UART_INTERFACE_H_
#define MCAL_UART_UART_INTERFACE_H_
#include "../DIO/DIO_Interface.h"



void MUART_voidInit 		(void);
void MUART_voidTransmit 	(u8 A_u8Data);
void MUART_voidTransmitString (u8 *A_u8String);
u8 MUART_u8Recieve 	(void);



#endif /* MCAL_UART_UART_INTERFACE_H_ */
