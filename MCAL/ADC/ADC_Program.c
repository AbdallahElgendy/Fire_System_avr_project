/*
 * ADC_Program.c
 *
 *  Created on: 22 Aug 2023
 *      Author: El-Wattaneya
 */

#include "ADC_Interface.h"
#include <avr/io.h>


void MADC_voidInit (u8 A_u8Vref) {

	switch(A_u8Vref){

	case 0 :
		CLR_BIT(ADMUX , 6) ;
		CLR_BIT(ADMUX , 7) ;
		break ;

	case 1 :
		SET_BIT(ADMUX , 6) ;
		CLR_BIT(ADMUX , 7) ;
		break ;

	case 2 :
		SET_BIT(ADMUX , 6) ;
		SET_BIT(ADMUX , 7) ;
		break ;

	}

	SET_BIT(ADMUX , 5) ;

	SET_BIT(ADCSRA , 0) ;
	SET_BIT(ADCSRA , 1) ;
	SET_BIT(ADCSRA , 2) ;

	SET_BIT(ADCSRA , 7) ;



}
u16 MADC_u8GetChannelRead(u8 A_u8Channel) {
	ADMUX &= 0b11100000 ;
	ADMUX |= A_u8Channel ;

	SET_BIT(ADCSRA , 6) ;

	while(GET_BIT(ADCSRA , 4)==0) ;
	SET_BIT(ADCSRA , 4) ;

	return ADCH ;
}

