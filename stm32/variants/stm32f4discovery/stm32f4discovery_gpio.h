/*
 * Copyright (c) 2013-2014 ELL-i co-operative.
 *
 * ELL-i software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * ELL-i software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with ELL-i software.  If not, see
 * <http://www.gnu.org/licenses/>.
 */

/*
 * Authors:  Lari Lehtomäki <lari@lehtomaki.fi>  2014
 */

#ifndef _STM32F4DISCOVERY_GPIO_H_
# define _STM32F4DISCOVERY_GPIO_H_

# include <arduelli_gpio.h>

/**
 * Declarations for externally visible GPIO init records.
 *
 * STM32F4 has A, B, C, D, E, F, G, H and I GPIO ports.
 */

GPIO_INIT_DEFAULT(A);
GPIO_INIT_DEFAULT(B);
GPIO_INIT_DEFAULT(C);
GPIO_INIT_DEFAULT(D);
GPIO_INIT_DEFAULT(E);
GPIO_INIT_DEFAULT(F);
GPIO_INIT_DEFAULT(G);
GPIO_INIT_DEFAULT(H);
GPIO_INIT_DEFAULT(I);

DEFINE_GPIO_PIN_INIT(A,  0, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(A,  1, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(A,  2, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(A,  3, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(A,  4, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(A,  5, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(A,  6, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(A,  7, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(A,  8, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(A,  9, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(A, 10, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(A, 11, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(A, 12, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
#ifdef FEATURE_NO_SWD
 DEFINE_GPIO_PIN_INIT(A,13, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
 DEFINE_GPIO_PIN_INIT(A,14, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
#else
 DEFINE_GPIO_PIN_INIT(A,13, ALTERNATE, PUSH_PULL, HIGH, PULL_UP, 0);
 DEFINE_GPIO_PIN_INIT(A,14, ALTERNATE, PUSH_PULL, HIGH, PULL_DOWN, 0);
#endif
DEFINE_GPIO_PIN_INIT(A, 15, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);

DEFINE_GPIO_PIN_INIT(B,  0, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(B,  1, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(B,  2, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
#ifdef FEATURE_NO_JTAG
 DEFINE_GPIO_PIN_INIT(B, 3, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
 DEFINE_GPIO_PIN_INIT(B, 4, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
#else
 DEFINE_GPIO_PIN_INIT(B, 3, ALTERNATE, PUSH_PULL, HIGH, NO_PULL, 0);
 DEFINE_GPIO_PIN_INIT(B, 4, ALTERNATE, PUSH_PULL, HIGH, PULL_UP, 0);
#endif
DEFINE_GPIO_PIN_INIT(B,  5, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(B,  6, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(B,  7, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(B,  8, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(B,  9, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(B, 10, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(B, 11, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(B, 12, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(B, 13, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(B, 14, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(B, 15, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);

DEFINE_GPIO_PIN_INIT(C,  0, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(C,  1, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(C,  2, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(C,  3, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(C,  4, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(C,  5, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(C,  6, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(C,  7, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(C,  8, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(C,  9, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(C, 10, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(C, 11, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(C, 12, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(C, 13, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(C, 14, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(C, 15, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);

DEFINE_GPIO_PIN_INIT(D,  0, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(D,  1, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(D,  2, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(D,  3, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(D,  4, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(D,  5, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(D,  6, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(D,  7, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(D,  8, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(D,  9, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(D, 10, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(D, 11, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(D, 12, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(D, 13, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(D, 14, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(D, 15, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);

DEFINE_GPIO_PIN_INIT(E,  0, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(E,  1, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(E,  2, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(E,  3, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(E,  4, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(E,  5, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(E,  6, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(E,  7, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(E,  8, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(E,  9, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(E, 10, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(E, 11, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(E, 12, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(E, 13, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(E, 14, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(E, 15, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);

DEFINE_GPIO_PIN_INIT(F,  0, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(F,  1, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(F,  2, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(F,  3, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(F,  4, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(F,  5, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(F,  6, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(F,  7, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(F,  8, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(F,  9, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(F, 10, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(F, 11, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(F, 12, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(F, 13, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(F, 14, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(F, 15, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);

DEFINE_GPIO_PIN_INIT(G,  0, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(G,  1, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(G,  2, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(G,  3, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(G,  4, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(G,  5, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(G,  6, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(G,  7, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(G,  8, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(G,  9, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(G, 10, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(G, 11, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(G, 12, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(G, 13, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(G, 14, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(G, 15, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);

DEFINE_GPIO_PIN_INIT(H,  0, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(H,  1, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(H,  2, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(H,  3, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(H,  4, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(H,  5, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(H,  6, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(H,  7, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(H,  8, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(H,  9, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(H, 10, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(H, 11, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(H, 12, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(H, 13, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(H, 14, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(H, 15, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);

DEFINE_GPIO_PIN_INIT(I,  0, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(I,  1, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(I,  2, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(I,  3, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(I,  4, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(I,  5, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(I,  6, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(I,  7, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(I,  8, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(I,  9, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(I, 10, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(I, 11, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);

/*
 * The following pins do not exist in reality, on the chip.
 * We still define them as dummies, so that the initialisation
 * macros that expect them to be there work right.
 */
DEFINE_GPIO_PIN_DUMMY(I, 12);
DEFINE_GPIO_PIN_DUMMY(I, 13);
DEFINE_GPIO_PIN_DUMMY(I, 14);
DEFINE_GPIO_PIN_DUMMY(I, 15);

/**
 * An array of Arduino-compatible GPIO pins, index by the Arduino Pin
 * index.
 *
 * The definitions are made as a static const array, thereby allowing
 * the compiler to optimise it completely away.  The resulting code
 * accesses directly the I/O registers.
 *
 * NOTE that the following pin definitions are Nucleo 401/411 compatible.
 */

static const struct GPIO GPIOPIN[] = {
    DEFINE_GPIO_PIN(A,  3),   /*  0 PA3  D0 RX2 */
    DEFINE_GPIO_PIN(A,  2),   /*  1 PA2  D1 TX2 */
    DEFINE_GPIO_PIN(A,  10),  /*  2 PA10 D2 */
    DEFINE_GPIO_PIN(B,  3),   /*  3 PB3  D3 TIM2_CH2 */
    DEFINE_GPIO_PIN(B,  5),   /*  4 PB5  D4 */
    DEFINE_GPIO_PIN(B,  4),   /*  5 PB3  D5 TIM3_CH1 */
    DEFINE_GPIO_PIN(B, 10),   /*  6 PB10 D6 TIM2_CH3 */
    DEFINE_GPIO_PIN(A,  8),   /*  7 PA8  D7 */
    DEFINE_GPIO_PIN(A,  9),   /*  8 PA9  D8 */
    DEFINE_GPIO_PIN(C,  7),   /*  9 PC7  D9 TIM3_CH2 */
    DEFINE_GPIO_PIN(B,  6),   /* 10 PB6  D10 TIM4_CH1  / SPI1_CS */
    DEFINE_GPIO_PIN(A,  7),   /* 11 PA7  D11 TIM1_CH1N / SPI1_MOSI */
    DEFINE_GPIO_PIN(A,  6),   /* 12 PA6  D12             SPI1_MISO */
    DEFINE_GPIO_PIN(A,  5),   /* 13 PA5                  SPI1_SCK */
    DEFINE_GPIO_PIN(B,  9),   /* 14 PB9  D14 I2C1_SDA */
    DEFINE_GPIO_PIN(B,  8),   /* 15 PB8  D15 I2C1_SCL */

    DEFINE_GPIO_PIN(A,  0),   /* 54 PA0  A0  ADC1_0 */
    DEFINE_GPIO_PIN(A,  1),   /* 55 PA1  A1  ADC1_1 */
    DEFINE_GPIO_PIN(A,  4),   /* 56 PC2  A2  ADC1_4 */
    DEFINE_GPIO_PIN(B,  0),   /* 57 PC3  A3  ADC1_8 */
#ifdef FEATURE_NUCLEO_ANALOG45_I2C
    DEFINE_GPIO_PIN(B,  9),   /* 58 PB9  A4  I2C1_SDA */
    DEFINE_GPIO_PIN(B,  8),   /* 59 PB8  A5  I2C1_SCL */
#else
    DEFINE_GPIO_PIN(C,  1),   /* 58 PC1  A4  ADC1_11*/
    DEFINE_GPIO_PIN(C,  0),   /* 59 PC0  A5  ADC1_10 */
#endif
};

#endif //_STM32F4DISCOVERY_GPIO_H_
