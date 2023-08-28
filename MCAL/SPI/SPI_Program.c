/*
 * SPI_Program.c
 *
 *  Created on: 28 Aug 2023
 *      Author: El-Wattaneya
 */
#include <avr/io.h>
#include "SPI_Interface.h"
void MSPI_voidMasterInit() {
	SET_BIT(SPCR , 4) ;
	SET_BIT(SPCR , 0) ;
	CLR_BIT(SPCR , 1) ;
	CLR_BIT(SPSR , 0) ;
	SET_BIT(SPCR , 6) ;

}
void MSPI_voidSlaveInit(){
	CLR_BIT(SPCR , 4) ;
	SET_BIT(SPCR , 6) ;
}
u8 MSPI_u8Transcieve(u8 A_u8Data) {
	SPDR = A_u8Data ;
	while(GET_BIT(SPSR,SPIF) == 0) ;
	return SPDR ;
}
