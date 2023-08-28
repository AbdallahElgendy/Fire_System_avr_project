/*
 * DC_Motor_Interface.h
 *
 *  Created on: 20 Aug 2023
 *      Author: El-Wattaneya
 */

#ifndef HAL_DC_MOTOR_DC_MOTOR_INTERFACE_H_
#define HAL_DC_MOTOR_DC_MOTOR_INTERFACE_H_
#include "../../MCAL/DIO/DIO_Interface.h"

#define DCMOTOR_PORT      DIO_PORTC

#define DCMOTOR_PIN1      DIO_PIN0
#define DCMOTOR_PIN2      DIO_PIN1

void DCMOTOR_voidInit(void);
void DCMOTOR_voidRotateCW(void);
void DCMOTOR_voidRotateCCW(void);
void DCMOTOR_voidStop(void);



#endif /* HAL_DC_MOTOR_DC_MOTOR_INTERFACE_H_ */
