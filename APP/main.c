/*
 * main.c
 *
 *  Created on: 15 Aug 2023
 *      Author: El-Wattaneya
 */
#include "util/delay.h"
#include "../MCAL/DIO/DIO_Interface.h"
#include "../MCAL/EXTI/EXTI_Interface.h"
#include "../MCAL/GIE/GIE_Interface.h"
#include "avr/interrupt.h"

#include "../MCAL/ADC/ADC_Interface.h"
#include "../MCAL/Timer/Timer0_Interface.h"
#include "../HAL/LCD/LCD_Interface.h"
#include "../HAL/ServoMotor/ServoMotor_Interface.h"
#include "../MCAL/UART/UART_Interface.h"
#include "../MCAL/SPI/SPI_Interface.h"


/*
int main (){
	DIO_voidSetPinDirection(DIO_PORTB , DIO_PIN4 , DIO_INPUT) ;
	DIO_voidSetPinValue(DIO_PORTB , DIO_PIN4 , DIO_HIGH) ;

	DIO_voidSetPinDirection(DIO_PORTB , DIO_PIN5 , DIO_OUTPUT) ;
	DIO_voidSetPinDirection(DIO_PORTB , DIO_PIN6 , DIO_INPUT) ;
	DIO_voidSetPinDirection(DIO_PORTB , DIO_PIN7 , DIO_OUTPUT) ;


	DIO_voidSetPinDirection(DIO_PORTA , DIO_PIN0 , 0) ;
	MADC_voidInit(0) ;

	MSPI_voidMasterInit() ;

	u8 Dig_value   ;
	u8 temp   ;
	f32 An_value ;

	while(1){
		Dig_value = MADC_u8GetChannelRead(0)  ;
		An_value = (Dig_value* (5000.0 / 255.0) );
		temp = (u8)(An_value / 10) ;


		MSPI_u8Transcieve(temp) ;


	}
}

*/

int main(){
	u8 value ;
	DIO_voidSetPinDirection(DIO_PORTA , DIO_PIN0 , DIO_OUTPUT) ;
	DIO_voidSetPinDirection(DIO_PORTB , DIO_PIN4 , DIO_INPUT) ;
	DIO_voidSetPinDirection(DIO_PORTB , DIO_PIN5 , DIO_INPUT) ;
	DIO_voidSetPinDirection(DIO_PORTB , DIO_PIN6 , DIO_OUTPUT) ;
	DIO_voidSetPinDirection(DIO_PORTB , DIO_PIN7 , DIO_INPUT) ;
	DIO_voidSetPortDirection(DIO_PORTD ,DIO_OUTPUT ) ;
	DIO_voidSetPinDirection(DIO_PORTB , DIO_PIN3 , DIO_OUTPUT) ;

	MGIE_voidEnable() ;
	MTimer_voidTimer0Init(FAST_PWM);


	LCD_voidInit() ;
	MSPI_voidSlaveInit() ;

	while(1){
		value = MSPI_u8Transcieve('x') ;
		LCD_voidGoTo(1,1) ;
		LCD_voidSendString("Temperature ") ;
		LCD_voidDisplayNumber((s32)(value)) ;

		if(value > 50){
			DIO_voidTogglePinValue(DIO_PORTD ,DIO_PIN0) ;
			MTimer_voidStart() ;
			MTimer_voidSetPreloadValue(100 , FAST_PWM) ;
			LCD_voidGoTo(2,6) ;
			LCD_voidSendString("HIGH") ;
		}
		else if (value < 50){
			DIO_voidSetPinValue(DIO_PORTD ,DIO_PIN0  ,DIO_LOW ) ;
			MTimer_voidStop() ;
			LCD_voidGoTo(2,1) ;
			LCD_voidSendString("     ") ;

		}


	}
}



