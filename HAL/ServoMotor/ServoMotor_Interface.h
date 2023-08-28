/*
 * ServoMotor_Interface.h
 *
 *  Created on: 26 Aug 2023
 *      Author: El-Wattaneya
 */

#ifndef HAL_SERVOMOTOR_SERVOMOTOR_INTERFACE_H_
#define HAL_SERVOMOTOR_SERVOMOTOR_INTERFACE_H_

#include "../../MCAL/DIO/DIO_Interface.h"


void TIMER1_voidFPWM(void);

void SERVO_voidSetAngle(u8 copy_u8Angle);

#endif /* HAL_SERVOMOTOR_SERVOMOTOR_INTERFACE_H_ */
