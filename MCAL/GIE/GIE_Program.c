/*
 * GIE_Program.c
 *
 *  Created on: 21 Aug 2023
 *      Author: El-Wattaneya
 */

#include "GIE_Interface.h"


void MGIE_voidEnable(void){
	SET_BIT(SREG, 7);
}
void MGIE_voidDiable(void) {

	CLR_BIT(SREG, 7);

}
