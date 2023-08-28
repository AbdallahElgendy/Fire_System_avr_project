/*
 * Stepper_Program.c
 *
 *  Created on: 20 Aug 2023
 *      Author: El-Wattaneya
 */
#include "Stepper_Interface.h"

void Stepper_voidInit(void)
{
	DIO_voidSetPinDirection(STEPPER_PORT, COIL_BLUE  , DIO_OUTPUT);
	DIO_voidSetPinDirection(STEPPER_PORT, COIL_PINK  , DIO_OUTPUT);
	DIO_voidSetPinDirection(STEPPER_PORT, COIL_YELLOW, DIO_OUTPUT);
	DIO_voidSetPinDirection(STEPPER_PORT, COIL_ORANGE, DIO_OUTPUT);

}
void Stepper_voidRotateCW(void)
{
	DIO_voidSetPinValue(STEPPER_PORT, COIL_BLUE  , DIO_HIGH);
	DIO_voidSetPinValue(STEPPER_PORT, COIL_PINK  , DIO_LOW );
	DIO_voidSetPinValue(STEPPER_PORT, COIL_YELLOW, DIO_LOW );
	DIO_voidSetPinValue(STEPPER_PORT, COIL_ORANGE, DIO_LOW );
	_delay_ms(100);

	DIO_voidSetPinValue(STEPPER_PORT, COIL_BLUE  , DIO_LOW );
	DIO_voidSetPinValue(STEPPER_PORT, COIL_PINK  , DIO_HIGH);
	DIO_voidSetPinValue(STEPPER_PORT, COIL_YELLOW, DIO_LOW );
	DIO_voidSetPinValue(STEPPER_PORT, COIL_ORANGE, DIO_LOW );
	_delay_ms(100);

	DIO_voidSetPinValue(STEPPER_PORT, COIL_BLUE  , DIO_LOW );
	DIO_voidSetPinValue(STEPPER_PORT, COIL_PINK  , DIO_LOW );
	DIO_voidSetPinValue(STEPPER_PORT, COIL_YELLOW, DIO_HIGH);
	DIO_voidSetPinValue(STEPPER_PORT, COIL_ORANGE, DIO_LOW );
	_delay_ms(100);

	DIO_voidSetPinValue(STEPPER_PORT, COIL_BLUE  , DIO_LOW );
	DIO_voidSetPinValue(STEPPER_PORT, COIL_PINK  , DIO_LOW );
	DIO_voidSetPinValue(STEPPER_PORT, COIL_YELLOW, DIO_LOW );
	DIO_voidSetPinValue(STEPPER_PORT, COIL_ORANGE, DIO_HIGH);
	_delay_ms(100);

}
void Stepper_voidRotateACW(void)
{
	DIO_voidSetPinValue(STEPPER_PORT, COIL_BLUE  , DIO_LOW );
	DIO_voidSetPinValue(STEPPER_PORT, COIL_PINK  , DIO_LOW );
	DIO_voidSetPinValue(STEPPER_PORT, COIL_YELLOW, DIO_LOW );
	DIO_voidSetPinValue(STEPPER_PORT, COIL_ORANGE, DIO_HIGH);
	_delay_ms(100);

	DIO_voidSetPinValue(STEPPER_PORT, COIL_BLUE  , DIO_LOW );
	DIO_voidSetPinValue(STEPPER_PORT, COIL_PINK  , DIO_LOW );
	DIO_voidSetPinValue(STEPPER_PORT, COIL_YELLOW, DIO_HIGH);
	DIO_voidSetPinValue(STEPPER_PORT, COIL_ORANGE, DIO_LOW );
	_delay_ms(100);

	DIO_voidSetPinValue(STEPPER_PORT, COIL_BLUE  , DIO_LOW );
	DIO_voidSetPinValue(STEPPER_PORT, COIL_PINK  , DIO_HIGH);
	DIO_voidSetPinValue(STEPPER_PORT, COIL_YELLOW, DIO_LOW );
	DIO_voidSetPinValue(STEPPER_PORT, COIL_ORANGE, DIO_LOW );
	_delay_ms(100);

	DIO_voidSetPinValue(STEPPER_PORT, COIL_BLUE  , DIO_HIGH);
	DIO_voidSetPinValue(STEPPER_PORT, COIL_PINK  , DIO_LOW );
	DIO_voidSetPinValue(STEPPER_PORT, COIL_YELLOW, DIO_LOW );
	DIO_voidSetPinValue(STEPPER_PORT, COIL_ORANGE, DIO_LOW );
	_delay_ms(100);

}
