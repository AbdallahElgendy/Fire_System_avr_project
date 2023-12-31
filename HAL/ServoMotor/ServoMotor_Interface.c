/*
 * ServoMotor_Interface.c
 *
 *  Created on: 26 Aug 2023
 *      Author: El-Wattaneya
 */

#include "ServoMotor_Interface.h"
void TIMER1_voidFPWM(void)
{
	/* SELECT FAST PWM */
	CLR_BIT(TCCR1A, WGM10);
	SET_BIT(TCCR1A, WGM11);
	SET_BIT(TCCR1B, WGM12);
	SET_BIT(TCCR1B, WGM13);

	/* CLEAR OC1A */
	CLR_BIT(TCCR1A, COM1A0);
	SET_BIT(TCCR1A, COM1A1);

	/* ICR1 */
	ICR1 = 19999;

	/* CLK/8 */
	CLR_BIT(TCCR1B, CS10);
	SET_BIT(TCCR1B, CS11);
	CLR_BIT(TCCR1B, CS12);
}

void SERVO_voidSetAngle(u8 copy_u8Angle)
{
	OCR1A = ((50* copy_u8Angle)+8991)/9;
}
