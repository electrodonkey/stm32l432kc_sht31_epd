/*
 * epd.h
 *
 *  Created on: May 26, 2020
 *      Author: DChirciu
 */

#ifndef INC_EPD_H_
#define INC_EPD_H_
#include "stm32l4xx_hal.h"
#include <stdint.h>
#define IL0373_PANEL_SETTING 0x00
#define IL0373_POWER_SETTING 0x01
#define IL0373_POWER_OFF 0x02
#define IL0373_POWER_OFF_SEQUENCE 0x03
#define IL0373_POWER_ON 0x04
#define IL0373_POWER_ON_MEASURE 0x05
#define IL0373_BOOSTER_SOFT_START 0x06

#define IL0373_DTM1 0x10
#define IL0373_DATA_STOP 0x11
#define IL0373_DISPLAY_REFRESH 0x12
#define EPD_DISPLAY_START_TRANSMISION 0x13
#define IL0373_PDTM1 0x14
#define IL0373_PDTM2 0x15
#define IL0373_PDRF 0x16
#define IL0373_LUT1 0x20
#define IL0373_LUTWW 0x21
#define IL0373_LUTBW 0x22
#define IL0373_LUTWB 0x23
#define IL0373_LUTBB 0x24
#define IL0373_PLL 0x30
#define IL0373_CDI 0x50
#define IL0373_RESOLUTION 0x61
#define IL0373_VCM_DC_SETTING 0x82


typedef enum
{
  EPD_COMMAND = 0U,
  EPD_DATA
}EPD_CD_Set;

#endif /* INC_EPD_H_ */
