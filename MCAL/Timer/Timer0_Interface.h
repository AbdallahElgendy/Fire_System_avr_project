/*
 * Timer0_Interface.h
 *
 *  Created on: 23 Aug 2023
 *      Author: El-Wattaneya
 */

#ifndef MCAL_TIMER_TIMER0_INTERFACE_H_
#define MCAL_TIMER_TIMER0_INTERFACE_H_
#include "../DIO/DIO_Interface.h"

#define NORMAL     0
#define CTC        1
#define FAST_PWM   2


void MTimer_voidTimer0Init(u8 A_u8TimerMode) ;
void MTimer_voidStart() ;
void MTimer_voidStop() ;
void MTimer_voidSetPreloadValue(u8 A_u8Preload, u8 A_u8TimerMode) ;

//__________________________________________________________________


void MTimer1_voidInit(void) ;
void MTimer1_voidSetValue(u16 A_u16Value) ;
u16 MTimer1_u16ReadTimer1Value() ;

#endif /* MCAL_TIMER_TIMER0_INTERFACE_H_ */
