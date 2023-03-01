/*******************************************************************************
* File Name: cycfg_pins.h
*
* Description:
* Pin configuration
* This file was automatically generated and should not be modified.
* Configurator Backend 3.0.0
* device-db 4.0.4.3352
* mtb-pdl-cat2 2.1.0.8671
*
********************************************************************************
* Copyright 2023 Cypress Semiconductor Corporation (an Infineon company) or
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
********************************************************************************/

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "cy_gpio.h"
#if defined (CY_USING_HAL)
    #include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)
#include "cycfg_routing.h"

#if defined(__cplusplus)
extern "C" {
#endif

#if defined (CY_USING_HAL)
    #define I2C_SCL (P0_0)
    #define I2C_SDA (P0_1)
    #define CANFD_RX (P0_2)
    #define CANFD_TX (P0_3)
#endif //defined (CY_USING_HAL)
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
#endif //defined (CY_USING_HAL)
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
#endif //defined (CY_USING_HAL)
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
#endif //defined (CY_USING_HAL)
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
    #define ARD_IO1 (P11_0)
    #define ARD_IO2 (P11_1)
    #define ARD_IO3 (P11_2)
    #define ARD_IO4 (P11_3)
    #define ARD_IO5 (P11_4)
    #define ARD_IO6 (P11_5)
    #define ARD_IO7 (P12_0)
    #define ARD_IO8 (P12_1)
    #define KITPROG_RX (P1_0)
    #define KITPROG_TX (P1_1)
    #define ARD_ADC1 (P2_0)
    #define ARD_ADC2 (P2_1)
    #define ARD_ADC3 (P2_2)
    #define ARD_ADC4 (P2_3)
    #define ARD_ADC5 (P2_4)
    #define ARD_ADC6 (P2_5)
    #define ARD_UART_RX (P3_0)
    #define ARD_UART_TX (P3_1)
#endif //defined (CY_USING_HAL)
#define SWDIO_ENABLED 1U
#define SWDIO_PORT GPIO_PRT3
#define SWDIO_PORT_NUM 3U
#define SWDIO_PIN 2U
#define SWDIO_NUM 2U
#define SWDIO_DRIVEMODE CY_GPIO_DM_STRONG
#define SWDIO_INIT_DRIVESTATE 1
#ifndef ioss_0_port_3_pin_2_HSIOM
    #define ioss_0_port_3_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define SWDIO_HSIOM ioss_0_port_3_pin_2_HSIOM
#define SWDIO_IRQ ioss_interrupts_gpio_3_IRQn
#if defined (CY_USING_HAL)
    #define SWDIO_HAL_PORT_PIN P3_2
    #define SWDIO P3_2
    #define SWDIO_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define SWDIO_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
    #define SWDIO_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define SWCLK_ENABLED 1U
#define SWCLK_PORT GPIO_PRT3
#define SWCLK_PORT_NUM 3U
#define SWCLK_PIN 3U
#define SWCLK_NUM 3U
#define SWCLK_DRIVEMODE CY_GPIO_DM_STRONG
#define SWCLK_INIT_DRIVESTATE 1
#ifndef ioss_0_port_3_pin_3_HSIOM
    #define ioss_0_port_3_pin_3_HSIOM HSIOM_SEL_GPIO
#endif
#define SWCLK_HSIOM ioss_0_port_3_pin_3_HSIOM
#define SWCLK_IRQ ioss_interrupts_gpio_3_IRQn
#if defined (CY_USING_HAL)
    #define SWCLK_HAL_PORT_PIN P3_3
    #define SWCLK P3_3
    #define SWCLK_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define SWCLK_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
    #define SWCLK_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
    #define LIN_RX (P4_0)
    #define LIN_TX (P4_1)
    #define CMOD1 (P5_1)
    #define CMOD2 (P5_2)
    #define CSTX1 (P5_3)
    #define CSTX2 (P5_4)
    #define CSTX3 (P5_5)
    #define CSRX (P5_6)
    #define INT_SBC (P5_7)
    #define USER_LED_GREEN (P6_0)
    #define USER_LED_RED (P6_1)
    #define USER_LED_BLUE (P6_2)
    #define USER_BUTTON (P6_3)
    #define ARD_SPI_MOSI (P8_0)
    #define ARD_SPI_MISO (P8_1)
    #define ARD_SPI_SCK (P8_2)
    #define SPI_CS (P8_3)
#endif //defined (CY_USING_HAL)

extern const cy_stc_gpio_pin_config_t WCO_IN_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t WCO_IN_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t WCO_OUT_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t WCO_OUT_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ECO_IN_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t ECO_IN_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ECO_OUT_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t ECO_OUT_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t SWDIO_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t SWDIO_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t SWCLK_config;
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t SWCLK_obj;
#endif //defined (CY_USING_HAL)

void init_cycfg_pins(void);
void reserve_cycfg_pins(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PINS_H */
