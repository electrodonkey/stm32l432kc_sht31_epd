/*
 * epd.c
 *
 *  Created on: May 26, 2020
 *      Author: DChirciu
 */

#include <epd.h>
#include <main.h>
//	D/C Behavior:
//		D/C HIGH, data = DATA
//		D/C LOW, data = COMMAND
//	RESET is active LOW
//	BUSY is active LOW, if LOW - EPD should not be interrupted

//TODO:
/* 1) System Power */

/* 2) Reset EPD */
void EPD_Reset()
{
	HAL_GPIO_WritePin(EPD_RST_GPIO_Port, EPD_RST_Pin, GPIO_PIN_RESET);
	HAL_Delay(10);
	HAL_GPIO_WritePin(EPD_RST_GPIO_Port, EPD_RST_Pin, GPIO_PIN_SET);
}


void EPD_Send_Command(uint8_t command)
{


}

void EPD_Send_Data(uint8_t data)
{


}
/* 3) Booster soft start
 C = 0x06
 D = 0x17, 0x17, 0x17
 */

/* 4) Power setting
 C = 0x01
 D = 0x03, 0x00, 0x2b, 0x2b, 0x09
*/

/* 5) Power on
 C = 0x04
*/

/* 6) Check BUSY - IF High continue */

/* 7) Panel setting
 C = 0x00
 D = 0x8F
 */

/* 8) PLL Control
 C = 0x30
 D = 0x3a
*/

/* 9) Resolution
 C = 0x61
 D = 0x68, 0x00, 0xd4
*/

/* 10) VCM_DC setting
 C = 0x82
 D = 0x12
*/

/* 11) VCOM and data interval setting
 C = 0x50
 D = 0x87
*/

/* 12) LUT */
/* 13) Data start transmission 1
 C = 0x10
 D = BW data
*/

/* 14) Data start transmission 2
 C = 0x13
 D = Red data
*/

/* 15) Display refresh
 C = 0x12
*/

/* 16) Check BUSY */

/* 17) Vcom and data interval setting - set border floating
 C = 0x50
 D = value?
*/

/* 18) Power off
 C = 0x02
*/

/* 19) Deep sleep
 C = 0x07
 D = 0xa5
*/
