/**
 * @file    pwm.c
 * @brief
 *
 * DAPLink Interface Firmware
 * Copyright 2021 Micro:bit Educational Foundation
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "pwm.h"
#include "gpio.h"

void pwm_init()
{
    // TODO
}

void pwm_init_pins()
{
    // TODO
}

void pwm_deinit_pins()
{
    // TODO
}

void pwm_set_dutycycle(uint8_t duty)
{
    // This is just a hack to turn off the LED when the duty cycle is low enough
    // TODO: Actually implement this
    if (duty < 10) {
        gpio_clear(GPIO_REG(LED_PWR), GPIO_IDX(LED_PWR));
    } else {
        gpio_set(GPIO_REG(LED_PWR), GPIO_IDX(LED_PWR));
    }
}
