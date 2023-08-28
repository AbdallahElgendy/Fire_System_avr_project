/*
 * DC_Motor_Program.c
 *
 *  Created on: 20 Aug 2023
 *      Author: El-Wattaneya
 */


#include "DC_Motor_Interface.h"



void DCMOTOR_voidInit(void){
	DIO_voidSetPinDirection(DIO_PORTC ,DIO_PIN0 , DIO_OUTPUT) ;
	DIO_voidSetPinDirection(DIO_PORTC ,DIO_PIN1 , DIO_OUTPUT) ;

}
void DCMOTOR_voidRotateCW(void){
	DIO_voidSetPinValue(DIO_PORTC ,DIO_PIN0 ,DIO_HIGH) ;
	DIO_voidSetPinValue(DIO_PORTC ,DIO_PIN1 ,DIO_LOW) ;
}
void DCMOTOR_voidRotateCCW(void){
	DIO_voidSetPinValue(DIO_PORTC ,DIO_PIN0 ,DIO_LOW) ;
	DIO_voidSetPinValue(DIO_PORTC ,DIO_PIN1 ,DIO_HIGH) ;
}
void DCMOTOR_voidStop(void){
	DIO_voidSetPinValue(DIO_PORTC ,DIO_PIN0 ,DIO_LOW) ;
	DIO_voidSetPinValue(DIO_PORTC ,DIO_PIN1 ,DIO_LOW) ;
}

