/**
  ******************************************************************************
  * @file    main.h 
  * @author  MCD Application Team
  * @version V1.2.0
  * @date    11-April-2014
  * @brief   Header for main.c module
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2014 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */
  
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx_nucleo.h"
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
int8_t BME280_I2C_bus_read(uint8_t reg_addr, uint8_t *reg_data, uint32_t cnt, void *intf_ptr);
int8_t BME280_I2C_bus_write(uint8_t reg_addr, const uint8_t *reg_data, uint32_t cnt, void *intf_ptr);
void bme280_delay_microseconds(uint32_t usec, void *intf_ptr);

void TimingDelay_Decrement(void);
void Delay(__IO uint32_t nTime);

void set_nrf24_SPI_CSN(uint8_t input);
void set_nrf24_SPI_CE(uint8_t input);
void MySPI_Init();
void NRF24L01p_Init();
void I2C_Settings_Init();
void UART_Settings_Init();
void System_Clock_Init();

void display_sensor_reading();
// inline function to swap two numbers
inline void swap(char *x, char *y) {
	char t = *x; *x = *y; *y = t;
}
char* reverse(char *buffer, int i, int j);
char* itoa(int value, char* buffer, int base);
void send_string(char *string);
void send_stringln(char *string);
#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
