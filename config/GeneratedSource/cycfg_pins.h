/*******************************************************************************
 * File Name: cycfg_pins.h
 *
 * Description:
 * Pin configuration
 * This file was automatically generated and should not be modified.
 * Configurator Backend 3.70.0
 * device-db 4.36.0.10141
 * mtb-pdl-cat2 2.20.0.17814
 *
 *******************************************************************************
 * Copyright 2026 Cypress Semiconductor Corporation (an Infineon company) or
 * an affiliate of Cypress Semiconductor Corporation.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ******************************************************************************/

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "cy_gpio.h"
#include "cycfg_routing.h"

#if defined (CY_USING_HAL)
#include "cyhal_hwmgr.h"
#endif /* defined (CY_USING_HAL) */

#if defined(__cplusplus)
extern "C" {
#endif /* defined(__cplusplus) */

#if defined (CY_USING_HAL)
#define I2C_SCL (P0_0)
#define CYBSP_I2C_SCL I2C_SCL
#define I2C_SDA (P0_1)
#define CYBSP_I2C_SDA I2C_SDA
#define CANFD_RX (P0_2)
#define CANFD_TX (P0_3)
#endif /* defined (CY_USING_HAL) */

#define WCO_IN_ENABLED 1U
#define WCO_IN_PORT GPIO_PRT0
#define WCO_IN_PORT_NUM 0U
#define WCO_IN_PIN 4U
#define WCO_IN_NUM 4U
#define WCO_IN_DRIVEMODE CY_GPIO_DM_ANALOG
#define WCO_IN_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_4_HSIOM
    #define ioss_0_port_0_pin_4_HSIOM HSIOM_SEL_GPIO
#endif
#define WCO_IN_HSIOM ioss_0_port_0_pin_4_HSIOM
#define WCO_IN_IRQ ioss_interrupts_gpio_0_IRQn

#if defined (CY_USING_HAL)
#define WCO_IN_HAL_PORT_PIN P0_4
#define WCO_IN P0_4
#define WCO_IN_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define WCO_IN_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define WCO_IN_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif /* defined (CY_USING_HAL) */

#define WCO_OUT_ENABLED 1U
#define WCO_OUT_PORT GPIO_PRT0
#define WCO_OUT_PORT_NUM 0U
#define WCO_OUT_PIN 5U
#define WCO_OUT_NUM 5U
#define WCO_OUT_DRIVEMODE CY_GPIO_DM_ANALOG
#define WCO_OUT_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_5_HSIOM
    #define ioss_0_port_0_pin_5_HSIOM HSIOM_SEL_GPIO
#endif
#define WCO_OUT_HSIOM ioss_0_port_0_pin_5_HSIOM
#define WCO_OUT_IRQ ioss_interrupts_gpio_0_IRQn

#if defined (CY_USING_HAL)
#define WCO_OUT_HAL_PORT_PIN P0_5
#define WCO_OUT P0_5
#define WCO_OUT_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define WCO_OUT_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define WCO_OUT_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif /* defined (CY_USING_HAL) */

#define ECO_IN_ENABLED 1U
#define ECO_IN_PORT GPIO_PRT0
#define ECO_IN_PORT_NUM 0U
#define ECO_IN_PIN 6U
#define ECO_IN_NUM 6U
#define ECO_IN_DRIVEMODE CY_GPIO_DM_ANALOG
#define ECO_IN_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_6_HSIOM
    #define ioss_0_port_0_pin_6_HSIOM HSIOM_SEL_GPIO
#endif
#define ECO_IN_HSIOM ioss_0_port_0_pin_6_HSIOM
#define ECO_IN_IRQ ioss_interrupts_gpio_0_IRQn

#if defined (CY_USING_HAL)
#define ECO_IN_HAL_PORT_PIN P0_6
#define ECO_IN P0_6
#define ECO_IN_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define ECO_IN_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define ECO_IN_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif /* defined (CY_USING_HAL) */

#define ECO_OUT_ENABLED 1U
#define ECO_OUT_PORT GPIO_PRT0
#define ECO_OUT_PORT_NUM 0U
#define ECO_OUT_PIN 7U
#define ECO_OUT_NUM 7U
#define ECO_OUT_DRIVEMODE CY_GPIO_DM_ANALOG
#define ECO_OUT_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_7_HSIOM
    #define ioss_0_port_0_pin_7_HSIOM HSIOM_SEL_GPIO
#endif
#define ECO_OUT_HSIOM ioss_0_port_0_pin_7_HSIOM
#define ECO_OUT_IRQ ioss_interrupts_gpio_0_IRQn

#if defined (CY_USING_HAL)
#define ECO_OUT_HAL_PORT_PIN P0_7
#define ECO_OUT P0_7
#define ECO_OUT_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define ECO_OUT_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define ECO_OUT_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#define KITPROG_RX (P1_0)
#define CYBSP_DEBUG_UART_RX KITPROG_RX
#define KITPROG_TX (P1_1)
#define CYBSP_DEBUG_UART_TX KITPROG_TX
#define ARD_ADC1 (P2_0)
#define CYBSP_A0 ARD_ADC1
#define ARD_ADC2 (P2_1)
#define CYBSP_A1 ARD_ADC2
#define ARD_ADC3 (P2_2)
#define CYBSP_A2 ARD_ADC3
#define ARD_ADC4 (P2_3)
#define CYBSP_A3 ARD_ADC4
#define ARD_ADC5 (P2_4)
#define CYBSP_A4 ARD_ADC5
#define ARD_ADC6 (P2_5)
#define CYBSP_A5 ARD_ADC6
#define CYBSP_A6 (P2_6)
#define ARD_IO7 CYBSP_A6
#define CYBSP_A7 (P2_7)
#define ARD_UART_RX (P3_0)
#define ARD_UART_TX (P3_1)
#endif /* defined (CY_USING_HAL) */

#define SWDIO_ENABLED 1U
#define CYBSP_SWDIO_ENABLED SWDIO_ENABLED
#define SWDIO_PORT GPIO_PRT3
#define CYBSP_SWDIO_PORT SWDIO_PORT
#define SWDIO_PORT_NUM 3U
#define CYBSP_SWDIO_PORT_NUM SWDIO_PORT_NUM
#define SWDIO_PIN 2U
#define CYBSP_SWDIO_PIN SWDIO_PIN
#define SWDIO_NUM 2U
#define CYBSP_SWDIO_NUM SWDIO_NUM
#define SWDIO_DRIVEMODE CY_GPIO_DM_STRONG
#define CYBSP_SWDIO_DRIVEMODE SWDIO_DRIVEMODE
#define SWDIO_INIT_DRIVESTATE 1
#define CYBSP_SWDIO_INIT_DRIVESTATE SWDIO_INIT_DRIVESTATE
#ifndef ioss_0_port_3_pin_2_HSIOM
    #define ioss_0_port_3_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define SWDIO_HSIOM ioss_0_port_3_pin_2_HSIOM
#define CYBSP_SWDIO_HSIOM SWDIO_HSIOM
#define SWDIO_IRQ ioss_interrupts_gpio_3_IRQn
#define CYBSP_SWDIO_IRQ SWDIO_IRQ

#if defined (CY_USING_HAL)
#define SWDIO_HAL_PORT_PIN P3_2
#define CYBSP_SWDIO_HAL_PORT_PIN SWDIO_HAL_PORT_PIN
#define SWDIO P3_2
#define CYBSP_SWDIO SWDIO
#define SWDIO_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define CYBSP_SWDIO_HAL_IRQ SWDIO_HAL_IRQ
#define SWDIO_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#define CYBSP_SWDIO_HAL_DIR SWDIO_HAL_DIR
#define SWDIO_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#define CYBSP_SWDIO_HAL_DRIVEMODE SWDIO_HAL_DRIVEMODE
#endif /* defined (CY_USING_HAL) */

#define SWCLK_ENABLED 1U
#define CYBSP_SWCLK_ENABLED SWCLK_ENABLED
#define SWCLK_PORT GPIO_PRT3
#define CYBSP_SWCLK_PORT SWCLK_PORT
#define SWCLK_PORT_NUM 3U
#define CYBSP_SWCLK_PORT_NUM SWCLK_PORT_NUM
#define SWCLK_PIN 3U
#define CYBSP_SWCLK_PIN SWCLK_PIN
#define SWCLK_NUM 3U
#define CYBSP_SWCLK_NUM SWCLK_NUM
#define SWCLK_DRIVEMODE CY_GPIO_DM_STRONG
#define CYBSP_SWCLK_DRIVEMODE SWCLK_DRIVEMODE
#define SWCLK_INIT_DRIVESTATE 1
#define CYBSP_SWCLK_INIT_DRIVESTATE SWCLK_INIT_DRIVESTATE
#ifndef ioss_0_port_3_pin_3_HSIOM
    #define ioss_0_port_3_pin_3_HSIOM HSIOM_SEL_GPIO
#endif
#define SWCLK_HSIOM ioss_0_port_3_pin_3_HSIOM
#define CYBSP_SWCLK_HSIOM SWCLK_HSIOM
#define SWCLK_IRQ ioss_interrupts_gpio_3_IRQn
#define CYBSP_SWCLK_IRQ SWCLK_IRQ

#if defined (CY_USING_HAL)
#define SWCLK_HAL_PORT_PIN P3_3
#define CYBSP_SWCLK_HAL_PORT_PIN SWCLK_HAL_PORT_PIN
#define SWCLK P3_3
#define CYBSP_SWCLK SWCLK
#define SWCLK_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define CYBSP_SWCLK_HAL_IRQ SWCLK_HAL_IRQ
#define SWCLK_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#define CYBSP_SWCLK_HAL_DIR SWCLK_HAL_DIR
#define SWCLK_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#define CYBSP_SWCLK_HAL_DRIVEMODE SWCLK_HAL_DRIVEMODE
#define CMOD1 (P5_1)
#define CMOD2 (P5_2)
#define CSTX1 (P5_3)
#define CSTX2 (P5_4)
#define CSTX3 (P5_5)
#define CSRX (P5_6)
#define INT_SBC (P5_7)
#define USER_LED_RED (P6_0)
#define CYBSP_USER_LED2 USER_LED_RED
#define CYBSP_LED_RGB_RED USER_LED_RED
#define USER_LED_GREEN (P6_2)
#define CYBSP_USER_LED1 USER_LED_GREEN
#define CYBSP_LED_RGB_GREEN USER_LED_GREEN
#define USER_BUTTON (P6_3)
#define USER_BTN1 USER_BUTTON
#define CYBSP_USER_BTN USER_BUTTON
#define CYBSP_USER_BTN1 USER_BUTTON
#define USER_LED_BLUE (P6_4)
#define CYBSP_USER_LED3 USER_LED_BLUE
#define CYBSP_LED_RGB_BLUE USER_LED_BLUE
#define ARD_IO1 (P7_0)
#define ARD_IO2 (P7_1)
#define ARD_SPI_MOSI (P8_0)
#define ARD_SPI_MISO (P8_1)
#define ARD_SPI_SCK (P8_2)
#define SPI_CS (P8_3)
#define CYBSP_LIN_RX (P11_0)
#define CYBSP_LIN_TX (P11_1)
#define ARD_IO3 (P11_2)
#define ARD_IO4 (P11_3)
#define ARD_IO5 (P11_4)
#define ARD_IO6 (P11_5)
#define SPI_CS3 (P12_0)
#define ARD_IO8 (P12_1)
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t WCO_IN_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t WCO_IN_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t WCO_OUT_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t WCO_OUT_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t ECO_IN_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t ECO_IN_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t ECO_OUT_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t ECO_OUT_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t SWDIO_config;

#define CYBSP_SWDIO_config SWDIO_config

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t SWDIO_obj;
#define CYBSP_SWDIO_obj SWDIO_obj
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t SWCLK_config;

#define CYBSP_SWCLK_config SWCLK_config

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t SWCLK_obj;
#define CYBSP_SWCLK_obj SWCLK_obj
#endif /* defined (CY_USING_HAL) */

void init_cycfg_pins(void);
void reserve_cycfg_pins(void);

#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* CYCFG_PINS_H */
