/*
 * Copyright (c) 2020 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_INCLUDE_DRIVERS_GPIO_GPIO_SX1509B_H_
#define ZEPHYR_INCLUDE_DRIVERS_GPIO_GPIO_SX1509B_H_

typedef enum {
	SX1509B_INPUT = 0,
	SX1509B_OUTPUT,
	SX1509B_PWM,
} sx1509b_pin_mode;

int sx1509b_pin_configure(struct device *dev, uint8_t pin,
			  sx1509b_pin_mode mode);

int sx1509b_set_pin_value(struct device *dev, uint8_t pin, uint8_t pin_value);

int sx1509b_read_pin_value(struct device *dev, uint8_t pin, uint8_t *value);

int sx1509b_led_set_pwm_value(struct device *dev, uint8_t pin,
			      uint8_t pwm_value);

#endif /* ZEPHYR_INCLUDE_DRIVERS_GPIO_GPIO_SX1509B_H_ */
