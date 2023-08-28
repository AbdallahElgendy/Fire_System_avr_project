/*
 * WDT_Interface.h
 *
 *  Created on: 26 Aug 2023
 *      Author: El-Wattaneya
 */

#ifndef MCAL_WDT_WDT_INTERFACE_H_
#define MCAL_WDT_WDT_INTERFACE_H_



#include "../DIO/DIO_Interface.h"

void WDT_voidEnable(void) ;
void WDT_voidDisable(void) ;
void WDT_voidSleep(u8 copy_u8sleep) ;




#endif /* MCAL_WDT_WDT_INTERFACE_H_ */
