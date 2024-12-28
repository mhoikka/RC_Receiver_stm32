/**
  ******************************************************************************
  * @file    Peripheral_Init.h
  * @author  Mitchell Hoikka
  * @version V1.2.0
  * @date    10-9-2024
  * @brief   Header for main.c module
  ******************************************************************************
  */

#include "stm32f0xx_nucleo.h"
#include "bme280_defs.h"

struct bme280_data get_sensor_reading();
void bme280_delay_microseconds(uint32_t usec, void *intf_ptr);
int8_t BME280_I2C_bus_read(uint8_t reg_addr, uint8_t *reg_data, uint32_t cnt, void *intf_ptr);
int8_t BME280_I2C_bus_write(uint8_t reg_addr, const uint8_t *reg_data, uint32_t cnt, void *intf_ptr);
uint8_t nrf24_read_register(uint8_t reg);
void nrf24_write_register(uint8_t reg, uint8_t value);
int test_BME280_connection();
int test_nrf24_connection();
void transmit(uint8_t * data, uint8_t data_len, uint8_t data_size);
void set_nrf24_SPI_CSN(uint8_t input);
void set_nrf24_SPI_CE(uint8_t input);
void MySPI_Init();
void NRF24L01p_Init();
void I2C_Settings_Init();
void UART_Settings_Init();
void BME_setup();
int BME_Init();