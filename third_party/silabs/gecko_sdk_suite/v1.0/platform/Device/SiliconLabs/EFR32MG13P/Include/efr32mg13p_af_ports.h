/**************************************************************************//**
 * @file efr32mg13p_af_ports.h
 * @brief EFR32MG13P_AF_PORTS register and bit field definitions
 * @version 5.1.3
 ******************************************************************************
 * @section License
 * <b>Copyright 2017 Silicon Laboratories, Inc. http://www.silabs.com</b>
 ******************************************************************************
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software.@n
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.@n
 * 3. This notice may not be removed or altered from any source distribution.
 *
 * DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Silicon Laboratories, Inc.
 * has no obligation to support this Software. Silicon Laboratories, Inc. is
 * providing the Software "AS IS", with no express or implied warranties of any
 * kind, including, but not limited to, any implied warranties of
 * merchantability or fitness for any particular purpose or warranties against
 * infringement of any proprietary rights of a third party.
 *
 * Silicon Laboratories, Inc. will not be liable for any consequential,
 * incidental, or special damages, or any other relief, or for any claim by
 * any third party, arising from your use of this Software.
 *
 *****************************************************************************/
/**************************************************************************//**
* @addtogroup Parts
* @{
******************************************************************************/
/**************************************************************************//**
 * @defgroup EFR32MG13P_AF_Ports
 * @{
 *****************************************************************************/

/** AF port number for location number i */
#define AF_CMU_CLK0_PORT(i)          ((i) == 0 ? 0 : (i) == 1 ? 1 : (i) == 2 ? 2 : (i) == 3 ? 2 : (i) == 4 ? 3 : (i) == 5 ? 3 : (i) == 6 ? 5 : (i) == 7 ? 5 :  -1)
#define AF_CMU_CLK1_PORT(i)          ((i) == 0 ? 0 : (i) == 1 ? 1 : (i) == 2 ? 2 : (i) == 3 ? 2 : (i) == 4 ? 3 : (i) == 5 ? 3 : (i) == 6 ? 5 : (i) == 7 ? 5 :  -1)
#define AF_CMU_CLKI0_PORT(i)         ((i) == 0 ? 1 : (i) == 1 ? 5 : (i) == 2 ? 2 : (i) == 3 ? -1 : (i) == 4 ? 0 :  -1)
#define AF_PRS_CH0_PORT(i)           ((i) == 0 ? 5 : (i) == 1 ? 5 : (i) == 2 ? 5 : (i) == 3 ? 5 : (i) == 4 ? 5 : (i) == 5 ? 5 : (i) == 6 ? 5 : (i) == 7 ? 5 : (i) == 8 ? 2 : (i) == 9 ? 2 : (i) == 10 ? 2 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 2 :  -1)
#define AF_PRS_CH1_PORT(i)           ((i) == 0 ? 5 : (i) == 1 ? 5 : (i) == 2 ? 5 : (i) == 3 ? 5 : (i) == 4 ? 5 : (i) == 5 ? 5 : (i) == 6 ? 5 : (i) == 7 ? 5 :  -1)
#define AF_PRS_CH2_PORT(i)           ((i) == 0 ? 5 : (i) == 1 ? 5 : (i) == 2 ? 5 : (i) == 3 ? 5 : (i) == 4 ? 5 : (i) == 5 ? 5 : (i) == 6 ? 5 : (i) == 7 ? 5 :  -1)
#define AF_PRS_CH3_PORT(i)           ((i) == 0 ? 5 : (i) == 1 ? 5 : (i) == 2 ? 5 : (i) == 3 ? 5 : (i) == 4 ? 5 : (i) == 5 ? 5 : (i) == 6 ? 5 : (i) == 7 ? 5 : (i) == 8 ? 3 : (i) == 9 ? 3 : (i) == 10 ? 3 : (i) == 11 ? 3 : (i) == 12 ? 3 : (i) == 13 ? 3 : (i) == 14 ? 3 :  -1)
#define AF_PRS_CH4_PORT(i)           ((i) == 0 ? 3 : (i) == 1 ? 3 : (i) == 2 ? 3 : (i) == 3 ? 3 : (i) == 4 ? 3 : (i) == 5 ? 3 : (i) == 6 ? 3 :  -1)
#define AF_PRS_CH5_PORT(i)           ((i) == 0 ? 3 : (i) == 1 ? 3 : (i) == 2 ? 3 : (i) == 3 ? 3 : (i) == 4 ? 3 : (i) == 5 ? 3 : (i) == 6 ? 3 :  -1)
#define AF_PRS_CH6_PORT(i)           ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 0 : (i) == 4 ? 0 : (i) == 5 ? 0 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 1 : (i) == 9 ? 1 : (i) == 10 ? 1 : (i) == 11 ? 3 : (i) == 12 ? 3 : (i) == 13 ? 3 : (i) == 14 ? 3 : (i) == 15 ? 3 : (i) == 16 ? 3 : (i) == 17 ? 3 :  -1)
#define AF_PRS_CH7_PORT(i)           ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 0 : (i) == 4 ? 0 : (i) == 5 ? 1 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 1 : (i) == 9 ? 1 : (i) == 10 ? 0 :  -1)
#define AF_PRS_CH8_PORT(i)           ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 0 : (i) == 4 ? 1 : (i) == 5 ? 1 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 1 : (i) == 9 ? 0 : (i) == 10 ? 0 :  -1)
#define AF_PRS_CH9_PORT(i)           ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 1 : (i) == 4 ? 1 : (i) == 5 ? 1 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 0 : (i) == 9 ? 0 : (i) == 10 ? 0 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 2 : (i) == 14 ? 2 : (i) == 15 ? 2 : (i) == 16 ? 2 :  -1)
#define AF_PRS_CH10_PORT(i)          ((i) == 0 ? 2 : (i) == 1 ? 2 : (i) == 2 ? 2 : (i) == 3 ? 2 : (i) == 4 ? 2 : (i) == 5 ? 2 :  -1)
#define AF_PRS_CH11_PORT(i)          ((i) == 0 ? 2 : (i) == 1 ? 2 : (i) == 2 ? 2 : (i) == 3 ? 2 : (i) == 4 ? 2 : (i) == 5 ? 2 :  -1)
#define AF_TIMER0_CC0_PORT(i)        ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 0 : (i) == 4 ? 0 : (i) == 5 ? 0 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 1 : (i) == 9 ? 1 : (i) == 10 ? 1 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 2 : (i) == 14 ? 2 : (i) == 15 ? 2 : (i) == 16 ? 2 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 3 : (i) == 20 ? 3 : (i) == 21 ? 3 : (i) == 22 ? 3 : (i) == 23 ? 3 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 5 : (i) == 28 ? 5 : (i) == 29 ? 5 : (i) == 30 ? 5 : (i) == 31 ? 5 :  -1)
#define AF_TIMER0_CC1_PORT(i)        ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 0 : (i) == 4 ? 0 : (i) == 5 ? 1 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 1 : (i) == 9 ? 1 : (i) == 10 ? 2 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 2 : (i) == 14 ? 2 : (i) == 15 ? 2 : (i) == 16 ? 3 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 3 : (i) == 20 ? 3 : (i) == 21 ? 3 : (i) == 22 ? 3 : (i) == 23 ? 5 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 5 : (i) == 28 ? 5 : (i) == 29 ? 5 : (i) == 30 ? 5 : (i) == 31 ? 0 :  -1)
#define AF_TIMER0_CC2_PORT(i)        ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 0 : (i) == 4 ? 1 : (i) == 5 ? 1 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 1 : (i) == 9 ? 2 : (i) == 10 ? 2 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 2 : (i) == 14 ? 2 : (i) == 15 ? 3 : (i) == 16 ? 3 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 3 : (i) == 20 ? 3 : (i) == 21 ? 3 : (i) == 22 ? 5 : (i) == 23 ? 5 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 5 : (i) == 28 ? 5 : (i) == 29 ? 5 : (i) == 30 ? 0 : (i) == 31 ? 0 :  -1)
#define AF_TIMER0_CC3_PORT(i)        (-1)
#define AF_TIMER0_CDTI0_PORT(i)      ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 1 : (i) == 4 ? 1 : (i) == 5 ? 1 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 2 : (i) == 9 ? 2 : (i) == 10 ? 2 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 2 : (i) == 14 ? 3 : (i) == 15 ? 3 : (i) == 16 ? 3 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 3 : (i) == 20 ? 3 : (i) == 21 ? 5 : (i) == 22 ? 5 : (i) == 23 ? 5 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 5 : (i) == 28 ? 5 : (i) == 29 ? 0 : (i) == 30 ? 0 : (i) == 31 ? 0 :  -1)
#define AF_TIMER0_CDTI1_PORT(i)      ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 1 : (i) == 3 ? 1 : (i) == 4 ? 1 : (i) == 5 ? 1 : (i) == 6 ? 1 : (i) == 7 ? 2 : (i) == 8 ? 2 : (i) == 9 ? 2 : (i) == 10 ? 2 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 3 : (i) == 14 ? 3 : (i) == 15 ? 3 : (i) == 16 ? 3 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 3 : (i) == 20 ? 5 : (i) == 21 ? 5 : (i) == 22 ? 5 : (i) == 23 ? 5 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 5 : (i) == 28 ? 0 : (i) == 29 ? 0 : (i) == 30 ? 0 : (i) == 31 ? 0 :  -1)
#define AF_TIMER0_CDTI2_PORT(i)      ((i) == 0 ? 0 : (i) == 1 ? 1 : (i) == 2 ? 1 : (i) == 3 ? 1 : (i) == 4 ? 1 : (i) == 5 ? 1 : (i) == 6 ? 2 : (i) == 7 ? 2 : (i) == 8 ? 2 : (i) == 9 ? 2 : (i) == 10 ? 2 : (i) == 11 ? 2 : (i) == 12 ? 3 : (i) == 13 ? 3 : (i) == 14 ? 3 : (i) == 15 ? 3 : (i) == 16 ? 3 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 5 : (i) == 20 ? 5 : (i) == 21 ? 5 : (i) == 22 ? 5 : (i) == 23 ? 5 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 0 : (i) == 28 ? 0 : (i) == 29 ? 0 : (i) == 30 ? 0 : (i) == 31 ? 0 :  -1)
#define AF_TIMER0_CDTI3_PORT(i)      (-1)
#define AF_TIMER1_CC0_PORT(i)        ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 0 : (i) == 4 ? 0 : (i) == 5 ? 0 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 1 : (i) == 9 ? 1 : (i) == 10 ? 1 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 2 : (i) == 14 ? 2 : (i) == 15 ? 2 : (i) == 16 ? 2 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 3 : (i) == 20 ? 3 : (i) == 21 ? 3 : (i) == 22 ? 3 : (i) == 23 ? 3 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 5 : (i) == 28 ? 5 : (i) == 29 ? 5 : (i) == 30 ? 5 : (i) == 31 ? 5 :  -1)
#define AF_TIMER1_CC1_PORT(i)        ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 0 : (i) == 4 ? 0 : (i) == 5 ? 1 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 1 : (i) == 9 ? 1 : (i) == 10 ? 2 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 2 : (i) == 14 ? 2 : (i) == 15 ? 2 : (i) == 16 ? 3 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 3 : (i) == 20 ? 3 : (i) == 21 ? 3 : (i) == 22 ? 3 : (i) == 23 ? 5 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 5 : (i) == 28 ? 5 : (i) == 29 ? 5 : (i) == 30 ? 5 : (i) == 31 ? 0 :  -1)
#define AF_TIMER1_CC2_PORT(i)        ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 0 : (i) == 4 ? 1 : (i) == 5 ? 1 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 1 : (i) == 9 ? 2 : (i) == 10 ? 2 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 2 : (i) == 14 ? 2 : (i) == 15 ? 3 : (i) == 16 ? 3 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 3 : (i) == 20 ? 3 : (i) == 21 ? 3 : (i) == 22 ? 5 : (i) == 23 ? 5 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 5 : (i) == 28 ? 5 : (i) == 29 ? 5 : (i) == 30 ? 0 : (i) == 31 ? 0 :  -1)
#define AF_TIMER1_CC3_PORT(i)        ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 1 : (i) == 4 ? 1 : (i) == 5 ? 1 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 2 : (i) == 9 ? 2 : (i) == 10 ? 2 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 2 : (i) == 14 ? 3 : (i) == 15 ? 3 : (i) == 16 ? 3 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 3 : (i) == 20 ? 3 : (i) == 21 ? 5 : (i) == 22 ? 5 : (i) == 23 ? 5 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 5 : (i) == 28 ? 5 : (i) == 29 ? 0 : (i) == 30 ? 0 : (i) == 31 ? 0 :  -1)
#define AF_TIMER1_CDTI0_PORT(i)      (-1)
#define AF_TIMER1_CDTI1_PORT(i)      (-1)
#define AF_TIMER1_CDTI2_PORT(i)      (-1)
#define AF_TIMER1_CDTI3_PORT(i)      (-1)
#define AF_WTIMER0_CC0_PORT(i)       ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 0 : (i) == 4 ? 0 : (i) == 5 ? 0 : (i) == 6 ? -1 : (i) == 7 ? -1 : (i) == 8 ? -1 : (i) == 9 ? -1 : (i) == 10 ? -1 : (i) == 11 ? -1 : (i) == 12 ? -1 : (i) == 13 ? -1 : (i) == 14 ? -1 : (i) == 15 ? 1 : (i) == 16 ? 1 : (i) == 17 ? 1 : (i) == 18 ? 1 : (i) == 19 ? 1 : (i) == 20 ? -1 : (i) == 21 ? -1 : (i) == 22 ? -1 : (i) == 23 ? -1 : (i) == 24 ? -1 : (i) == 25 ? -1 : (i) == 26 ? 2 : (i) == 27 ? 2 : (i) == 28 ? 2 : (i) == 29 ? 2 : (i) == 30 ? 2 : (i) == 31 ? 2 :  -1)
#define AF_WTIMER0_CC1_PORT(i)       ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 0 : (i) == 4 ? -1 : (i) == 5 ? -1 : (i) == 6 ? -1 : (i) == 7 ? -1 : (i) == 8 ? -1 : (i) == 9 ? -1 : (i) == 10 ? -1 : (i) == 11 ? -1 : (i) == 12 ? -1 : (i) == 13 ? 1 : (i) == 14 ? 1 : (i) == 15 ? 1 : (i) == 16 ? 1 : (i) == 17 ? 1 : (i) == 18 ? -1 : (i) == 19 ? -1 : (i) == 20 ? -1 : (i) == 21 ? -1 : (i) == 22 ? -1 : (i) == 23 ? -1 : (i) == 24 ? 2 : (i) == 25 ? 2 : (i) == 26 ? 2 : (i) == 27 ? 2 : (i) == 28 ? 2 : (i) == 29 ? 2 : (i) == 30 ? -1 : (i) == 31 ? 3 :  -1)
#define AF_WTIMER0_CC2_PORT(i)       ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? -1 : (i) == 3 ? -1 : (i) == 4 ? -1 : (i) == 5 ? -1 : (i) == 6 ? -1 : (i) == 7 ? -1 : (i) == 8 ? -1 : (i) == 9 ? -1 : (i) == 10 ? -1 : (i) == 11 ? 1 : (i) == 12 ? 1 : (i) == 13 ? 1 : (i) == 14 ? 1 : (i) == 15 ? 1 : (i) == 16 ? -1 : (i) == 17 ? -1 : (i) == 18 ? -1 : (i) == 19 ? -1 : (i) == 20 ? -1 : (i) == 21 ? -1 : (i) == 22 ? 2 : (i) == 23 ? 2 : (i) == 24 ? 2 : (i) == 25 ? 2 : (i) == 26 ? 2 : (i) == 27 ? 2 : (i) == 28 ? -1 : (i) == 29 ? 3 : (i) == 30 ? 3 : (i) == 31 ? 3 :  -1)
#define AF_WTIMER0_CC3_PORT(i)       (-1)
#define AF_WTIMER0_CDTI0_PORT(i)     ((i) == 0 ? -1 : (i) == 1 ? -1 : (i) == 2 ? -1 : (i) == 3 ? -1 : (i) == 4 ? -1 : (i) == 5 ? -1 : (i) == 6 ? -1 : (i) == 7 ? 1 : (i) == 8 ? 1 : (i) == 9 ? 1 : (i) == 10 ? 1 : (i) == 11 ? 1 : (i) == 12 ? -1 : (i) == 13 ? -1 : (i) == 14 ? -1 : (i) == 15 ? -1 : (i) == 16 ? -1 : (i) == 17 ? -1 : (i) == 18 ? 2 : (i) == 19 ? 2 : (i) == 20 ? 2 : (i) == 21 ? 2 : (i) == 22 ? 2 : (i) == 23 ? 2 : (i) == 24 ? -1 : (i) == 25 ? 3 : (i) == 26 ? 3 : (i) == 27 ? 3 : (i) == 28 ? 3 : (i) == 29 ? 3 : (i) == 30 ? 3 : (i) == 31 ? 3 :  -1)
#define AF_WTIMER0_CDTI1_PORT(i)     ((i) == 0 ? -1 : (i) == 1 ? -1 : (i) == 2 ? -1 : (i) == 3 ? -1 : (i) == 4 ? -1 : (i) == 5 ? 1 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 1 : (i) == 9 ? 1 : (i) == 10 ? -1 : (i) == 11 ? -1 : (i) == 12 ? -1 : (i) == 13 ? -1 : (i) == 14 ? -1 : (i) == 15 ? -1 : (i) == 16 ? 2 : (i) == 17 ? 2 : (i) == 18 ? 2 : (i) == 19 ? 2 : (i) == 20 ? 2 : (i) == 21 ? 2 : (i) == 22 ? -1 : (i) == 23 ? 3 : (i) == 24 ? 3 : (i) == 25 ? 3 : (i) == 26 ? 3 : (i) == 27 ? 3 : (i) == 28 ? 3 : (i) == 29 ? 3 : (i) == 30 ? 5 : (i) == 31 ? 5 :  -1)
#define AF_WTIMER0_CDTI2_PORT(i)     ((i) == 0 ? -1 : (i) == 1 ? -1 : (i) == 2 ? -1 : (i) == 3 ? 1 : (i) == 4 ? 1 : (i) == 5 ? 1 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? -1 : (i) == 9 ? -1 : (i) == 10 ? -1 : (i) == 11 ? -1 : (i) == 12 ? -1 : (i) == 13 ? -1 : (i) == 14 ? 2 : (i) == 15 ? 2 : (i) == 16 ? 2 : (i) == 17 ? 2 : (i) == 18 ? 2 : (i) == 19 ? 2 : (i) == 20 ? -1 : (i) == 21 ? 3 : (i) == 22 ? 3 : (i) == 23 ? 3 : (i) == 24 ? 3 : (i) == 25 ? 3 : (i) == 26 ? 3 : (i) == 27 ? 3 : (i) == 28 ? 5 : (i) == 29 ? 5 : (i) == 30 ? 5 : (i) == 31 ? 5 :  -1)
#define AF_WTIMER0_CDTI3_PORT(i)     (-1)
#define AF_USART0_TX_PORT(i)         ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 0 : (i) == 4 ? 0 : (i) == 5 ? 0 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 1 : (i) == 9 ? 1 : (i) == 10 ? 1 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 2 : (i) == 14 ? 2 : (i) == 15 ? 2 : (i) == 16 ? 2 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 3 : (i) == 20 ? 3 : (i) == 21 ? 3 : (i) == 22 ? 3 : (i) == 23 ? 3 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 5 : (i) == 28 ? 5 : (i) == 29 ? 5 : (i) == 30 ? 5 : (i) == 31 ? 5 :  -1)
#define AF_USART0_RX_PORT(i)         ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 0 : (i) == 4 ? 0 : (i) == 5 ? 1 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 1 : (i) == 9 ? 1 : (i) == 10 ? 2 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 2 : (i) == 14 ? 2 : (i) == 15 ? 2 : (i) == 16 ? 3 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 3 : (i) == 20 ? 3 : (i) == 21 ? 3 : (i) == 22 ? 3 : (i) == 23 ? 5 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 5 : (i) == 28 ? 5 : (i) == 29 ? 5 : (i) == 30 ? 5 : (i) == 31 ? 0 :  -1)
#define AF_USART0_CLK_PORT(i)        ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 0 : (i) == 4 ? 1 : (i) == 5 ? 1 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 1 : (i) == 9 ? 2 : (i) == 10 ? 2 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 2 : (i) == 14 ? 2 : (i) == 15 ? 3 : (i) == 16 ? 3 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 3 : (i) == 20 ? 3 : (i) == 21 ? 3 : (i) == 22 ? 5 : (i) == 23 ? 5 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 5 : (i) == 28 ? 5 : (i) == 29 ? 5 : (i) == 30 ? 0 : (i) == 31 ? 0 :  -1)
#define AF_USART0_CS_PORT(i)         ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 1 : (i) == 4 ? 1 : (i) == 5 ? 1 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 2 : (i) == 9 ? 2 : (i) == 10 ? 2 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 2 : (i) == 14 ? 3 : (i) == 15 ? 3 : (i) == 16 ? 3 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 3 : (i) == 20 ? 3 : (i) == 21 ? 5 : (i) == 22 ? 5 : (i) == 23 ? 5 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 5 : (i) == 28 ? 5 : (i) == 29 ? 0 : (i) == 30 ? 0 : (i) == 31 ? 0 :  -1)
#define AF_USART0_CTS_PORT(i)        ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 1 : (i) == 3 ? 1 : (i) == 4 ? 1 : (i) == 5 ? 1 : (i) == 6 ? 1 : (i) == 7 ? 2 : (i) == 8 ? 2 : (i) == 9 ? 2 : (i) == 10 ? 2 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 3 : (i) == 14 ? 3 : (i) == 15 ? 3 : (i) == 16 ? 3 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 3 : (i) == 20 ? 5 : (i) == 21 ? 5 : (i) == 22 ? 5 : (i) == 23 ? 5 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 5 : (i) == 28 ? 0 : (i) == 29 ? 0 : (i) == 30 ? 0 : (i) == 31 ? 0 :  -1)
#define AF_USART0_RTS_PORT(i)        ((i) == 0 ? 0 : (i) == 1 ? 1 : (i) == 2 ? 1 : (i) == 3 ? 1 : (i) == 4 ? 1 : (i) == 5 ? 1 : (i) == 6 ? 2 : (i) == 7 ? 2 : (i) == 8 ? 2 : (i) == 9 ? 2 : (i) == 10 ? 2 : (i) == 11 ? 2 : (i) == 12 ? 3 : (i) == 13 ? 3 : (i) == 14 ? 3 : (i) == 15 ? 3 : (i) == 16 ? 3 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 5 : (i) == 20 ? 5 : (i) == 21 ? 5 : (i) == 22 ? 5 : (i) == 23 ? 5 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 0 : (i) == 28 ? 0 : (i) == 29 ? 0 : (i) == 30 ? 0 : (i) == 31 ? 0 :  -1)
#define AF_USART1_TX_PORT(i)         ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 0 : (i) == 4 ? 0 : (i) == 5 ? 0 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 1 : (i) == 9 ? 1 : (i) == 10 ? 1 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 2 : (i) == 14 ? 2 : (i) == 15 ? 2 : (i) == 16 ? 2 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 3 : (i) == 20 ? 3 : (i) == 21 ? 3 : (i) == 22 ? 3 : (i) == 23 ? 3 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 5 : (i) == 28 ? 5 : (i) == 29 ? 5 : (i) == 30 ? 5 : (i) == 31 ? 5 :  -1)
#define AF_USART1_RX_PORT(i)         ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 0 : (i) == 4 ? 0 : (i) == 5 ? 1 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 1 : (i) == 9 ? 1 : (i) == 10 ? 2 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 2 : (i) == 14 ? 2 : (i) == 15 ? 2 : (i) == 16 ? 3 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 3 : (i) == 20 ? 3 : (i) == 21 ? 3 : (i) == 22 ? 3 : (i) == 23 ? 5 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 5 : (i) == 28 ? 5 : (i) == 29 ? 5 : (i) == 30 ? 5 : (i) == 31 ? 0 :  -1)
#define AF_USART1_CLK_PORT(i)        ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 0 : (i) == 4 ? 1 : (i) == 5 ? 1 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 1 : (i) == 9 ? 2 : (i) == 10 ? 2 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 2 : (i) == 14 ? 2 : (i) == 15 ? 3 : (i) == 16 ? 3 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 3 : (i) == 20 ? 3 : (i) == 21 ? 3 : (i) == 22 ? 5 : (i) == 23 ? 5 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 5 : (i) == 28 ? 5 : (i) == 29 ? 5 : (i) == 30 ? 0 : (i) == 31 ? 0 :  -1)
#define AF_USART1_CS_PORT(i)         ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 1 : (i) == 4 ? 1 : (i) == 5 ? 1 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 2 : (i) == 9 ? 2 : (i) == 10 ? 2 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 2 : (i) == 14 ? 3 : (i) == 15 ? 3 : (i) == 16 ? 3 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 3 : (i) == 20 ? 3 : (i) == 21 ? 5 : (i) == 22 ? 5 : (i) == 23 ? 5 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 5 : (i) == 28 ? 5 : (i) == 29 ? 0 : (i) == 30 ? 0 : (i) == 31 ? 0 :  -1)
#define AF_USART1_CTS_PORT(i)        ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 1 : (i) == 3 ? 1 : (i) == 4 ? 1 : (i) == 5 ? 1 : (i) == 6 ? 1 : (i) == 7 ? 2 : (i) == 8 ? 2 : (i) == 9 ? 2 : (i) == 10 ? 2 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 3 : (i) == 14 ? 3 : (i) == 15 ? 3 : (i) == 16 ? 3 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 3 : (i) == 20 ? 5 : (i) == 21 ? 5 : (i) == 22 ? 5 : (i) == 23 ? 5 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 5 : (i) == 28 ? 0 : (i) == 29 ? 0 : (i) == 30 ? 0 : (i) == 31 ? 0 :  -1)
#define AF_USART1_RTS_PORT(i)        ((i) == 0 ? 0 : (i) == 1 ? 1 : (i) == 2 ? 1 : (i) == 3 ? 1 : (i) == 4 ? 1 : (i) == 5 ? 1 : (i) == 6 ? 2 : (i) == 7 ? 2 : (i) == 8 ? 2 : (i) == 9 ? 2 : (i) == 10 ? 2 : (i) == 11 ? 2 : (i) == 12 ? 3 : (i) == 13 ? 3 : (i) == 14 ? 3 : (i) == 15 ? 3 : (i) == 16 ? 3 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 5 : (i) == 20 ? 5 : (i) == 21 ? 5 : (i) == 22 ? 5 : (i) == 23 ? 5 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 0 : (i) == 28 ? 0 : (i) == 29 ? 0 : (i) == 30 ? 0 : (i) == 31 ? 0 :  -1)
#define AF_USART2_TX_PORT(i)         ((i) == 0 ? 0 : (i) == 1 ? -1 : (i) == 2 ? -1 : (i) == 3 ? -1 : (i) == 4 ? -1 : (i) == 5 ? -1 : (i) == 6 ? -1 : (i) == 7 ? -1 : (i) == 8 ? -1 : (i) == 9 ? -1 : (i) == 10 ? -1 : (i) == 11 ? -1 : (i) == 12 ? -1 : (i) == 13 ? -1 : (i) == 14 ? 5 : (i) == 15 ? 5 : (i) == 16 ? 5 : (i) == 17 ? 5 : (i) == 18 ? 5 : (i) == 19 ? 5 : (i) == 20 ? 5 : (i) == 21 ? -1 : (i) == 22 ? -1 : (i) == 23 ? -1 : (i) == 24 ? -1 : (i) == 25 ? -1 : (i) == 26 ? -1 : (i) == 27 ? -1 : (i) == 28 ? -1 : (i) == 29 ? -1 : (i) == 30 ? -1 : (i) == 31 ? -1 :  -1)
#define AF_USART2_RX_PORT(i)         ((i) == 0 ? -1 : (i) == 1 ? -1 : (i) == 2 ? -1 : (i) == 3 ? -1 : (i) == 4 ? -1 : (i) == 5 ? -1 : (i) == 6 ? -1 : (i) == 7 ? -1 : (i) == 8 ? -1 : (i) == 9 ? -1 : (i) == 10 ? -1 : (i) == 11 ? -1 : (i) == 12 ? -1 : (i) == 13 ? 5 : (i) == 14 ? 5 : (i) == 15 ? 5 : (i) == 16 ? 5 : (i) == 17 ? 5 : (i) == 18 ? 5 : (i) == 19 ? 5 : (i) == 20 ? -1 : (i) == 21 ? -1 : (i) == 22 ? -1 : (i) == 23 ? -1 : (i) == 24 ? -1 : (i) == 25 ? -1 : (i) == 26 ? -1 : (i) == 27 ? -1 : (i) == 28 ? -1 : (i) == 29 ? -1 : (i) == 30 ? -1 : (i) == 31 ? 0 :  -1)
#define AF_USART2_CLK_PORT(i)        ((i) == 0 ? -1 : (i) == 1 ? -1 : (i) == 2 ? -1 : (i) == 3 ? -1 : (i) == 4 ? -1 : (i) == 5 ? -1 : (i) == 6 ? -1 : (i) == 7 ? -1 : (i) == 8 ? -1 : (i) == 9 ? -1 : (i) == 10 ? -1 : (i) == 11 ? -1 : (i) == 12 ? 5 : (i) == 13 ? 5 : (i) == 14 ? 5 : (i) == 15 ? 5 : (i) == 16 ? 5 : (i) == 17 ? 5 : (i) == 18 ? 5 : (i) == 19 ? -1 : (i) == 20 ? -1 : (i) == 21 ? -1 : (i) == 22 ? -1 : (i) == 23 ? -1 : (i) == 24 ? -1 : (i) == 25 ? -1 : (i) == 26 ? -1 : (i) == 27 ? -1 : (i) == 28 ? -1 : (i) == 29 ? -1 : (i) == 30 ? 0 : (i) == 31 ? -1 :  -1)
#define AF_USART2_CS_PORT(i)         ((i) == 0 ? -1 : (i) == 1 ? -1 : (i) == 2 ? -1 : (i) == 3 ? -1 : (i) == 4 ? -1 : (i) == 5 ? -1 : (i) == 6 ? -1 : (i) == 7 ? -1 : (i) == 8 ? -1 : (i) == 9 ? -1 : (i) == 10 ? -1 : (i) == 11 ? 5 : (i) == 12 ? 5 : (i) == 13 ? 5 : (i) == 14 ? 5 : (i) == 15 ? 5 : (i) == 16 ? 5 : (i) == 17 ? 5 : (i) == 18 ? -1 : (i) == 19 ? -1 : (i) == 20 ? -1 : (i) == 21 ? -1 : (i) == 22 ? -1 : (i) == 23 ? -1 : (i) == 24 ? -1 : (i) == 25 ? -1 : (i) == 26 ? -1 : (i) == 27 ? -1 : (i) == 28 ? -1 : (i) == 29 ? 0 : (i) == 30 ? -1 : (i) == 31 ? -1 :  -1)
#define AF_USART2_CTS_PORT(i)        ((i) == 0 ? -1 : (i) == 1 ? -1 : (i) == 2 ? -1 : (i) == 3 ? -1 : (i) == 4 ? -1 : (i) == 5 ? -1 : (i) == 6 ? -1 : (i) == 7 ? -1 : (i) == 8 ? -1 : (i) == 9 ? -1 : (i) == 10 ? 5 : (i) == 11 ? 5 : (i) == 12 ? 5 : (i) == 13 ? 5 : (i) == 14 ? 5 : (i) == 15 ? 5 : (i) == 16 ? 5 : (i) == 17 ? -1 : (i) == 18 ? -1 : (i) == 19 ? -1 : (i) == 20 ? -1 : (i) == 21 ? -1 : (i) == 22 ? -1 : (i) == 23 ? -1 : (i) == 24 ? -1 : (i) == 25 ? -1 : (i) == 26 ? -1 : (i) == 27 ? -1 : (i) == 28 ? 0 : (i) == 29 ? -1 : (i) == 30 ? -1 : (i) == 31 ? -1 :  -1)
#define AF_USART2_RTS_PORT(i)        ((i) == 0 ? -1 : (i) == 1 ? -1 : (i) == 2 ? -1 : (i) == 3 ? -1 : (i) == 4 ? -1 : (i) == 5 ? -1 : (i) == 6 ? -1 : (i) == 7 ? -1 : (i) == 8 ? -1 : (i) == 9 ? 5 : (i) == 10 ? 5 : (i) == 11 ? 5 : (i) == 12 ? 5 : (i) == 13 ? 5 : (i) == 14 ? 5 : (i) == 15 ? 5 : (i) == 16 ? -1 : (i) == 17 ? -1 : (i) == 18 ? -1 : (i) == 19 ? -1 : (i) == 20 ? -1 : (i) == 21 ? -1 : (i) == 22 ? -1 : (i) == 23 ? -1 : (i) == 24 ? -1 : (i) == 25 ? -1 : (i) == 26 ? -1 : (i) == 27 ? 0 : (i) == 28 ? -1 : (i) == 29 ? -1 : (i) == 30 ? -1 : (i) == 31 ? -1 :  -1)
#define AF_LEUART0_TX_PORT(i)        ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 0 : (i) == 4 ? 0 : (i) == 5 ? 0 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 1 : (i) == 9 ? 1 : (i) == 10 ? 1 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 2 : (i) == 14 ? 2 : (i) == 15 ? 2 : (i) == 16 ? 2 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 3 : (i) == 20 ? 3 : (i) == 21 ? 3 : (i) == 22 ? 3 : (i) == 23 ? 3 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 5 : (i) == 28 ? 5 : (i) == 29 ? 5 : (i) == 30 ? 5 : (i) == 31 ? 5 :  -1)
#define AF_LEUART0_RX_PORT(i)        ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 0 : (i) == 4 ? 0 : (i) == 5 ? 1 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 1 : (i) == 9 ? 1 : (i) == 10 ? 2 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 2 : (i) == 14 ? 2 : (i) == 15 ? 2 : (i) == 16 ? 3 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 3 : (i) == 20 ? 3 : (i) == 21 ? 3 : (i) == 22 ? 3 : (i) == 23 ? 5 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 5 : (i) == 28 ? 5 : (i) == 29 ? 5 : (i) == 30 ? 5 : (i) == 31 ? 0 :  -1)
#define AF_LETIMER0_OUT0_PORT(i)     ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 0 : (i) == 4 ? 0 : (i) == 5 ? 0 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 1 : (i) == 9 ? 1 : (i) == 10 ? 1 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 2 : (i) == 14 ? 2 : (i) == 15 ? 2 : (i) == 16 ? 2 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 3 : (i) == 20 ? 3 : (i) == 21 ? 3 : (i) == 22 ? 3 : (i) == 23 ? 3 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 5 : (i) == 28 ? 5 : (i) == 29 ? 5 : (i) == 30 ? 5 : (i) == 31 ? 5 :  -1)
#define AF_LETIMER0_OUT1_PORT(i)     ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 0 : (i) == 4 ? 0 : (i) == 5 ? 1 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 1 : (i) == 9 ? 1 : (i) == 10 ? 2 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 2 : (i) == 14 ? 2 : (i) == 15 ? 2 : (i) == 16 ? 3 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 3 : (i) == 20 ? 3 : (i) == 21 ? 3 : (i) == 22 ? 3 : (i) == 23 ? 5 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 5 : (i) == 28 ? 5 : (i) == 29 ? 5 : (i) == 30 ? 5 : (i) == 31 ? 0 :  -1)
#define AF_PCNT0_S0IN_PORT(i)        ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 0 : (i) == 4 ? 0 : (i) == 5 ? 0 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 1 : (i) == 9 ? 1 : (i) == 10 ? 1 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 2 : (i) == 14 ? 2 : (i) == 15 ? 2 : (i) == 16 ? 2 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 3 : (i) == 20 ? 3 : (i) == 21 ? 3 : (i) == 22 ? 3 : (i) == 23 ? 3 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 5 : (i) == 28 ? 5 : (i) == 29 ? 5 : (i) == 30 ? 5 : (i) == 31 ? 5 :  -1)
#define AF_PCNT0_S1IN_PORT(i)        ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 0 : (i) == 4 ? 0 : (i) == 5 ? 1 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 1 : (i) == 9 ? 1 : (i) == 10 ? 2 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 2 : (i) == 14 ? 2 : (i) == 15 ? 2 : (i) == 16 ? 3 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 3 : (i) == 20 ? 3 : (i) == 21 ? 3 : (i) == 22 ? 3 : (i) == 23 ? 5 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 5 : (i) == 28 ? 5 : (i) == 29 ? 5 : (i) == 30 ? 5 : (i) == 31 ? 0 :  -1)
#define AF_I2C0_SDA_PORT(i)          ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 0 : (i) == 4 ? 0 : (i) == 5 ? 0 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 1 : (i) == 9 ? 1 : (i) == 10 ? 1 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 2 : (i) == 14 ? 2 : (i) == 15 ? 2 : (i) == 16 ? 2 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 3 : (i) == 20 ? 3 : (i) == 21 ? 3 : (i) == 22 ? 3 : (i) == 23 ? 3 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 5 : (i) == 28 ? 5 : (i) == 29 ? 5 : (i) == 30 ? 5 : (i) == 31 ? 5 :  -1)
#define AF_I2C0_SCL_PORT(i)          ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 0 : (i) == 4 ? 0 : (i) == 5 ? 1 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 1 : (i) == 9 ? 1 : (i) == 10 ? 2 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 2 : (i) == 14 ? 2 : (i) == 15 ? 2 : (i) == 16 ? 3 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 3 : (i) == 20 ? 3 : (i) == 21 ? 3 : (i) == 22 ? 3 : (i) == 23 ? 5 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 5 : (i) == 28 ? 5 : (i) == 29 ? 5 : (i) == 30 ? 5 : (i) == 31 ? 0 :  -1)
#define AF_I2C1_SDA_PORT(i)          ((i) == 0 ? -1 : (i) == 1 ? -1 : (i) == 2 ? -1 : (i) == 3 ? -1 : (i) == 4 ? -1 : (i) == 5 ? -1 : (i) == 6 ? -1 : (i) == 7 ? -1 : (i) == 8 ? -1 : (i) == 9 ? -1 : (i) == 10 ? -1 : (i) == 11 ? -1 : (i) == 12 ? -1 : (i) == 13 ? -1 : (i) == 14 ? -1 : (i) == 15 ? -1 : (i) == 16 ? -1 : (i) == 17 ? -1 : (i) == 18 ? -1 : (i) == 19 ? 2 : (i) == 20 ? 2 : (i) == 21 ? -1 : (i) == 22 ? -1 : (i) == 23 ? -1 : (i) == 24 ? -1 : (i) == 25 ? -1 : (i) == 26 ? -1 : (i) == 27 ? -1 : (i) == 28 ? -1 : (i) == 29 ? -1 : (i) == 30 ? -1 : (i) == 31 ? -1 :  -1)
#define AF_I2C1_SCL_PORT(i)          ((i) == 0 ? -1 : (i) == 1 ? -1 : (i) == 2 ? -1 : (i) == 3 ? -1 : (i) == 4 ? -1 : (i) == 5 ? -1 : (i) == 6 ? -1 : (i) == 7 ? -1 : (i) == 8 ? -1 : (i) == 9 ? -1 : (i) == 10 ? -1 : (i) == 11 ? -1 : (i) == 12 ? -1 : (i) == 13 ? -1 : (i) == 14 ? -1 : (i) == 15 ? -1 : (i) == 16 ? -1 : (i) == 17 ? -1 : (i) == 18 ? 2 : (i) == 19 ? 2 : (i) == 20 ? -1 : (i) == 21 ? -1 : (i) == 22 ? -1 : (i) == 23 ? -1 : (i) == 24 ? -1 : (i) == 25 ? -1 : (i) == 26 ? -1 : (i) == 27 ? -1 : (i) == 28 ? -1 : (i) == 29 ? -1 : (i) == 30 ? -1 : (i) == 31 ? -1 :  -1)
#define AF_ACMP0_OUT_PORT(i)         ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 0 : (i) == 4 ? 0 : (i) == 5 ? 0 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 1 : (i) == 9 ? 1 : (i) == 10 ? 1 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 2 : (i) == 14 ? 2 : (i) == 15 ? 2 : (i) == 16 ? 2 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 3 : (i) == 20 ? 3 : (i) == 21 ? 3 : (i) == 22 ? 3 : (i) == 23 ? 3 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 5 : (i) == 28 ? 5 : (i) == 29 ? 5 : (i) == 30 ? 5 : (i) == 31 ? 5 :  -1)
#define AF_ACMP1_OUT_PORT(i)         ((i) == 0 ? 0 : (i) == 1 ? 0 : (i) == 2 ? 0 : (i) == 3 ? 0 : (i) == 4 ? 0 : (i) == 5 ? 0 : (i) == 6 ? 1 : (i) == 7 ? 1 : (i) == 8 ? 1 : (i) == 9 ? 1 : (i) == 10 ? 1 : (i) == 11 ? 2 : (i) == 12 ? 2 : (i) == 13 ? 2 : (i) == 14 ? 2 : (i) == 15 ? 2 : (i) == 16 ? 2 : (i) == 17 ? 3 : (i) == 18 ? 3 : (i) == 19 ? 3 : (i) == 20 ? 3 : (i) == 21 ? 3 : (i) == 22 ? 3 : (i) == 23 ? 3 : (i) == 24 ? 5 : (i) == 25 ? 5 : (i) == 26 ? 5 : (i) == 27 ? 5 : (i) == 28 ? 5 : (i) == 29 ? 5 : (i) == 30 ? 5 : (i) == 31 ? 5 :  -1)
#define AF_LESENSE_CH0_PORT(i)       (-1)
#define AF_LESENSE_CH1_PORT(i)       ((i) == 0 ? 3 :  -1)
#define AF_LESENSE_CH2_PORT(i)       ((i) == 0 ? 3 :  -1)
#define AF_LESENSE_CH3_PORT(i)       ((i) == 0 ? 3 :  -1)
#define AF_LESENSE_CH4_PORT(i)       ((i) == 0 ? 3 :  -1)
#define AF_LESENSE_CH5_PORT(i)       ((i) == 0 ? 3 :  -1)
#define AF_LESENSE_CH6_PORT(i)       ((i) == 0 ? 3 :  -1)
#define AF_LESENSE_CH7_PORT(i)       ((i) == 0 ? 3 :  -1)
#define AF_LESENSE_CH8_PORT(i)       ((i) == 0 ? 0 :  -1)
#define AF_LESENSE_CH9_PORT(i)       ((i) == 0 ? 0 :  -1)
#define AF_LESENSE_CH10_PORT(i)      ((i) == 0 ? 0 :  -1)
#define AF_LESENSE_CH11_PORT(i)      ((i) == 0 ? 0 :  -1)
#define AF_LESENSE_CH12_PORT(i)      ((i) == 0 ? 0 :  -1)
#define AF_LESENSE_CH13_PORT(i)      ((i) == 0 ? 0 :  -1)
#define AF_LESENSE_CH14_PORT(i)      (-1)
#define AF_LESENSE_CH15_PORT(i)      (-1)
#define AF_LESENSE_ALTEX0_PORT(i)    (-1)
#define AF_LESENSE_ALTEX1_PORT(i)    (-1)
#define AF_LESENSE_ALTEX2_PORT(i)    (-1)
#define AF_LESENSE_ALTEX3_PORT(i)    (-1)
#define AF_LESENSE_ALTEX4_PORT(i)    (-1)
#define AF_LESENSE_ALTEX5_PORT(i)    (-1)
#define AF_LESENSE_ALTEX6_PORT(i)    (-1)
#define AF_LESENSE_ALTEX7_PORT(i)    (-1)
#define AF_DBG_TDI_PORT(i)           ((i) == 0 ? 5 :  -1)
#define AF_DBG_TDO_PORT(i)           ((i) == 0 ? 5 :  -1)
#define AF_DBG_SWV_PORT(i)           ((i) == 0 ? 5 : (i) == 1 ? 1 : (i) == 2 ? 3 : (i) == 3 ? 2 :  -1)
#define AF_DBG_SWDIOTMS_PORT(i)      ((i) == 0 ? 5 :  -1)
#define AF_DBG_SWCLKTCK_PORT(i)      ((i) == 0 ? 5 :  -1)
#define AF_ETM_TCLK_PORT(i)          ((i) == 0 ? -1 : (i) == 1 ? 0 : (i) == 2 ? -1 : (i) == 3 ? 2 :  -1)
#define AF_ETM_TD0_PORT(i)           ((i) == 0 ? -1 : (i) == 1 ? -1 : (i) == 2 ? -1 : (i) == 3 ? 2 :  -1)
#define AF_ETM_TD1_PORT(i)           ((i) == 0 ? -1 : (i) == 1 ? -1 : (i) == 2 ? -1 : (i) == 3 ? 2 :  -1)
#define AF_ETM_TD2_PORT(i)           ((i) == 0 ? -1 : (i) == 1 ? -1 : (i) == 2 ? -1 : (i) == 3 ? 2 :  -1)
#define AF_ETM_TD3_PORT(i)           ((i) == 0 ? -1 : (i) == 1 ? -1 : (i) == 2 ? -1 : (i) == 3 ? 2 :  -1)

/** @} End of group EFR32MG13P_AF_Ports */
/** @} End of group Parts */

