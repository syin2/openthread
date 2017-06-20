/** @file hal/micro/cortexm3/efm32/board/brd4152a.h
 * BRD4152A-EFR32MG 2.4 GHz / 434 MHz 13dBm (SLWSTK6003A)
 * See @ref board for detailed documentation.
 *
 * <!-- Copyright 2016 Silicon Laboratories, Inc.                        *80*-->
 */

/** @addtogroup board
 *  @brief Functions and definitions specific to the breakout board.
 *
 *@{
 */

#ifndef __BOARD_H__
#define __BOARD_H__

#include "bspconfig.h"

// Define board features

// #define DISABLE_PTI

// #define DISABLE_DCDC

// Enable COM port to use retarget serial configuration
#define COM_RETARGET_SERIAL
// Enable HW flow control
#define COM_USART0_HW_FC

// spi cs connection not the default
#define EXTERNAL_FLASH_CS_PORT      gpioPortA
#define EXTERNAL_FLASH_CS_PIN       4

// Include common definitions
#include "board/wstk-common.h"

#endif //__BOARD_H__
/** @} END Board Specific Functions */

/** @} END addtogroup */
