/*
 * ADC_Interface.h
 *
 *  Created on: 22 Aug 2023
 *      Author: El-Wattaneya
 */

#ifndef MCAL_ADC_ADC_INTERFACE_H_
#define MCAL_ADC_ADC_INTERFACE_H_
#include "../DIO/DIO_Interface.h"
#define 	ADC_REG		*(( volatile u16*)0x24)

void MADC_voidInit (u8 A_u8Vref) ;

u16 MADC_u8GetChannelRead(u8 A_u8Channel)  ;

#endif /* MCAL_ADC_ADC_INTERFACE_H_ */
