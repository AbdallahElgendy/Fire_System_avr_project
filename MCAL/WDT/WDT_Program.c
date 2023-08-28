/*
 * WDT_Program.c
 *
 *  Created on: 26 Aug 2023
 *      Author: El-Wattaneya
 */
#include "WDT_Interface.h"

void WDT_voidEnable(void)
{
	SET_BIT(WDTCR, WDE);
}

void WDT_voidDisable(void)
{
	WDTCR = (1<<WDE)|(1<<WDTOE);
	WDTCR = 0;
}
void WDT_voidSleep(u8 copy_u8sleep)
{
	WDTCR |= copy_u8sleep;

}
