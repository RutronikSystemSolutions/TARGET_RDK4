/*******************************************************************************
* File Name: cycfg_pins.c
*
* Description:
* Pin configuration
* This file was automatically generated and should not be modified.
* Configurator Backend 3.0.0
* device-db 4.0.2.2983
* mtb-pdl-cat2 2.0.0.8419
*
********************************************************************************
* Copyright 2022 Cypress Semiconductor Corporation (an Infineon company) or
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

#include "cycfg_pins.h"

const cy_stc_gpio_pin_config_t WCO_IN_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = WCO_IN_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t WCO_IN_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = WCO_IN_PORT_NUM,
        .channel_num = WCO_IN_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t WCO_OUT_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = WCO_OUT_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t WCO_OUT_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = WCO_OUT_PORT_NUM,
        .channel_num = WCO_OUT_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ECO_IN_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = ECO_IN_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t ECO_IN_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = ECO_IN_PORT_NUM,
        .channel_num = ECO_IN_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t ECO_OUT_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = ECO_OUT_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t ECO_OUT_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = ECO_OUT_PORT_NUM,
        .channel_num = ECO_OUT_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t SWDIO_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = SWDIO_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t SWDIO_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = SWDIO_PORT_NUM,
        .channel_num = SWDIO_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t SWCLK_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = SWCLK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t SWCLK_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = SWCLK_PORT_NUM,
        .channel_num = SWCLK_PIN,
    };
#endif //defined (CY_USING_HAL)


void init_cycfg_pins(void)
{
    Cy_GPIO_Pin_Init(SWDIO_PORT, SWDIO_PIN, &SWDIO_config);
    Cy_GPIO_Pin_Init(SWCLK_PORT, SWCLK_PIN, &SWCLK_config);
}

void reserve_cycfg_pins(void)
{
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&WCO_IN_obj);
    cyhal_hwmgr_reserve(&WCO_OUT_obj);
    cyhal_hwmgr_reserve(&ECO_IN_obj);
    cyhal_hwmgr_reserve(&ECO_OUT_obj);
    cyhal_hwmgr_reserve(&SWDIO_obj);
    cyhal_hwmgr_reserve(&SWCLK_obj);
#endif //defined (CY_USING_HAL)
}
