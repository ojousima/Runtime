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
// GPIO_INIT_DEFAULT(I);  TODO, PORT I is only 12 pins 

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
DEFINE_GPIO_PIN_INIT(A, 13, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(A, 14, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(A, 15, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);

DEFINE_GPIO_PIN_INIT(B,  0, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(B,  1, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(B,  2, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(B,  3, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
DEFINE_GPIO_PIN_INIT(B,  4, INPUT, PUSH_PULL, HIGH, NO_PULL, 0);
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

/* TODO, PORT I is only 12 pins 
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
*/

/**
 * An array of Arduino-compatible GPIO pins, index by the Arduino Pin
 * index.
 *
 * The definitions are made as a static const array, thereby allowing
 * the compiler to optimise it completely away.  The resulting code
 * accesses directly the I/O registers.
 */

// TODO  \/ ?? 
static const struct GPIO GPIOPIN[] = {
    DEFINE_GPIO_PIN(A, 10),   /*  0 PA10 D0 RX0 */
    DEFINE_GPIO_PIN(A,  9),   /*  1 PA9  D1 TX0 */
    DEFINE_GPIO_PIN(A,  8),   /*  2 PA8  D2 */
    DEFINE_GPIO_PIN(C,  9),   /*  3 PC9  D3 */
    DEFINE_GPIO_PIN(C,  8),   /*  4 PC8  D4 */
    DEFINE_GPIO_PIN(A,  7),   /*  5 PA7  D5 */
    DEFINE_GPIO_PIN(A,  3),   /*  6 PA3  D6 */
    DEFINE_GPIO_PIN(A,  2),   /*  7 PA2  D7 */
    DEFINE_GPIO_PIN(B, 10),   /*  8 PB10 D8 */
    DEFINE_GPIO_PIN(B, 11),   /*  9 PB11 D9 */
    DEFINE_GPIO_PIN(A, 15),   /* 10 PA15 D10 */
    DEFINE_GPIO_PIN(B,  5),   /* 11 PB5  D11 */
    DEFINE_GPIO_PIN(B,  4),   /* 12 PB4  D12 */
    DEFINE_GPIO_PIN(B,  3),   /* 13 PB3  Led B3 Amber "L" */
    DEFINE_GPIO_PIN(C,  6),   /* 14 PC6  (TX3) */
    DEFINE_GPIO_PIN(C,  7),   /* 15 PC7  (RX3) */
    DEFINE_GPIO_PIN(A, 14),   /* 16 A14  (TX2) SWCLK */
    DEFINE_GPIO_PIN(D,  2),   /* 17 PD2  (RX2) */
    DEFINE_GPIO_PIN(B,  6),   /* 18 PB6  TX1 */
    DEFINE_GPIO_PIN(B,  7),   /* 19 PB7  RX1 */
    DEFINE_GPIO_PIN(B,  9),   /* 20 PB9  SDA */
    DEFINE_GPIO_PIN(B,  8),   /* 21 PB8  SCL */
    DEFINE_GPIO_PIN(C,  0),   /* 54 PC0  A0  */
    DEFINE_GPIO_PIN(C,  1),   /* 55 PC1  A1  */
    DEFINE_GPIO_PIN(C,  2),   /* 56 PC2  A2  */
    DEFINE_GPIO_PIN(C,  3),   /* 57 PC3  A3  */
    DEFINE_GPIO_PIN(A,  5),   /* 58 PA5  A4  */
    DEFINE_GPIO_PIN(A,  6),   /* 59 PA6  A5  */
    DEFINE_GPIO_PIN(A,  0),   /* 60 PA0  A6 WKUP1 */
    DEFINE_GPIO_PIN(A,  1),   /* 61 PA1  A7  */
    DEFINE_GPIO_PIN(C,  4),   /* 62 PC4  A8  */
    DEFINE_GPIO_PIN(C,  5),   /* 63 PC5  A9  */
    DEFINE_GPIO_PIN(B,  0),   /* 64 PB0  A10 */
    DEFINE_GPIO_PIN(B,  1),   /* 65 PB1  A11 */
    DEFINE_GPIO_PIN(A,  4),   /* 66 PA4  DAC0 */
    DEFINE_GPIO_PIN(A, 11),   /* 67 PA11 (DAC1) */
    DEFINE_GPIO_PIN(A, 12),   /* 68 PA12 (CANRX) */
    DEFINE_GPIO_PIN(A, 13),   /* 69 PA13 (CANTX) SWDAT */
    DEFINE_GPIO_PIN(F,  7),   /* 70 PF7  SDA1 */
    DEFINE_GPIO_PIN(F,  6),   /* 71 PF6  SCL1 */
    DEFINE_GPIO_PIN(B, 12),   /* 40 PB12 SPI2 NSS */
};

#endif //_STM32F4DISCOVERY_GPIO_H_
