/*
 * Timer0_Program.c
 *
 *  Created on: 23 Aug 2023
 *      Author: El-Wattaneya
 */


#include "Timer0_Interface.h"

void MTimer_voidTimer0Init(u8 A_u8TimerMode){

	if(A_u8TimerMode == NORMAL){
		CLR_BIT(TCCR0, 6) ;
		CLR_BIT(TCCR0 , 3) ;


		SET_BIT(TIMSK , 0) ;


	}
	else if(A_u8TimerMode == CTC){
		CLR_BIT(TCCR0, 6) ;
		SET_BIT(TCCR0 , 3) ;


		SET_BIT(TIMSK , 1) ;

	}
	else if(A_u8TimerMode == FAST_PWM){
		SET_BIT(TCCR0, 6) ;
		SET_BIT(TCCR0 , 3) ;

		SET_BIT(TCCR0 , 5) ;
		CLR_BIT(TCCR0 , 4) ;

	}


}
void MTimer_voidStart(){
	CLR_BIT( TCCR0, 0) ;
	SET_BIT(TCCR0 , 1) ;
	CLR_BIT( TCCR0, 2) ;
}
void MTimer_voidStop(){
	CLR_BIT( TCCR0, 0) ;
	CLR_BIT(TCCR0 , 1) ;
	CLR_BIT( TCCR0, 2) ;
}




void MTimer_voidSetPreloadValue(u8 A_u8Preload, u8 A_u8TimerMode){
	if(A_u8TimerMode == NORMAL){
		TCNT0 = A_u8Preload;
	}
	else if ( A_u8TimerMode== CTC){
		/*Set Compare Reg Value*/
		OCR0 = A_u8Preload;
	}
	else if(A_u8TimerMode == FAST_PWM){
		OCR0 = A_u8Preload ;
	}
}



void MTimer1_voidInit(){
	/*Select Ps 8* */
	CLR_BIT(TCCR1B,0);
	SET_BIT(TCCR1B,1);
	CLR_BIT(TCCR1B,2);
}


void MTimer1_voidSetValue(u16 A_u16Value){
	TCNT1 = A_u16Value;
}

u16 MTimer1_u16ReadTimer1Value(){
	return TCNT1;
}






