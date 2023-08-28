/*
 * SPI_Interface.h
 *
 *  Created on: 28 Aug 2023
 *      Author: El-Wattaneya
 */

#ifndef MCAL_SPI_SPI_INTERFACE_H_
#define MCAL_SPI_SPI_INTERFACE_H_

#include "../DIO/DIO_Interface.h"

void MSPI_voidMasterInit() ;
void MSPI_voidSlaveInit() ;
u8 MSPI_u8Transcieve(u8 A_u8Data) ;


#endif /* MCAL_SPI_SPI_INTERFACE_H_ */
