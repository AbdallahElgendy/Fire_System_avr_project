/*
 * EXTI_Interface.h
 *
 *  Created on: 21 Aug 2023
 *      Author: El-Wattaneya
 */

#ifndef MCAL_EXTI_EXTI_INTERFACE_H_
#define MCAL_EXTI_EXTI_INTERFACE_H_
#include "../DIO/DIO_Interface.h"


void MEXTI_voidSenseControl(u8 A_u8EXTINumber, u8 A_u8State) ;
void MEXTI_voidEXTIEnable(u8 A_u8EXTINumber) ;
void MEXTI_voidEXTIDisable(u8 A_u8EXTINumber) ;


#endif /* MCAL_EXTI_EXTI_INTERFACE_H_ */
