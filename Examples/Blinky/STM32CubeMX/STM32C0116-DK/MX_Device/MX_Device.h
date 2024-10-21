/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 19/12/2024 10:23:26
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated with a generator out of the
 *               STM32CubeMX project and its generated files (DO NOT EDIT!)
 ******************************************************************************/

#ifndef MX_DEVICE_H__
#define MX_DEVICE_H__

/* MX_Device.h version */
#define MX_DEVICE_VERSION                       0x01000000


/*------------------------------ SPI1           -----------------------------*/
#define MX_SPI1                                 1

/* Peripheral Clock Frequency */
#define MX_SPI1_PERIPH_CLOCK_FREQ               48000000

/* Pins */

/* SPI1_MISO */
#define MX_SPI1_MISO_Pin                        PA6
#define MX_SPI1_MISO_GPIO_Pin                   GPIO_PIN_6
#define MX_SPI1_MISO_GPIOx                      GPIOA
#define MX_SPI1_MISO_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI1_MISO_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI1_MISO_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_SPI1_MISO_GPIO_AF                    GPIO_AF0_SPI1

/* SPI1_MOSI */
#define MX_SPI1_MOSI_Pin                        PA7
#define MX_SPI1_MOSI_GPIO_Pin                   GPIO_PIN_7
#define MX_SPI1_MOSI_GPIOx                      GPIOA
#define MX_SPI1_MOSI_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI1_MOSI_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI1_MOSI_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_SPI1_MOSI_GPIO_AF                    GPIO_AF0_SPI1

/* SPI1_NSS */
#define MX_SPI1_NSS_Pin                         PA4
#define MX_SPI1_NSS_GPIO_Pin                    GPIO_PIN_4
#define MX_SPI1_NSS_GPIOx                       GPIOA
#define MX_SPI1_NSS_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_SPI1_NSS_GPIO_PuPd                   GPIO_NOPULL
#define MX_SPI1_NSS_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_SPI1_NSS_GPIO_AF                     GPIO_AF0_SPI1

/* SPI1_SCK */
#define MX_SPI1_SCK_Pin                         PA5
#define MX_SPI1_SCK_GPIO_Pin                    GPIO_PIN_5
#define MX_SPI1_SCK_GPIOx                       GPIOA
#define MX_SPI1_SCK_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_SPI1_SCK_GPIO_PuPd                   GPIO_NOPULL
#define MX_SPI1_SCK_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_SPI1_SCK_GPIO_AF                     GPIO_AF0_SPI1

/*------------------------------ USART1         -----------------------------*/
#define MX_USART1                               1

/* Virtual mode */
#define MX_USART1_VM                            VM_ASYNC
#define MX_USART1_VM_ASYNC                      1

/* Pins */

/* USART1_RX */
#define MX_USART1_RX_Pin                        PA10
#define MX_USART1_RX_GPIO_Pin                   GPIO_PIN_10
#define MX_USART1_RX_GPIOx                      GPIOA
#define MX_USART1_RX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART1_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART1_RX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_USART1_RX_GPIO_AF                    GPIO_AF1_USART1

/* USART1_TX */
#define MX_USART1_TX_Pin                        PA9
#define MX_USART1_TX_GPIO_Pin                   GPIO_PIN_9
#define MX_USART1_TX_GPIOx                      GPIOA
#define MX_USART1_TX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART1_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART1_TX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_USART1_TX_GPIO_AF                    GPIO_AF1_USART1

/*------------------------------ USART2         -----------------------------*/
#define MX_USART2                               1

/* Virtual mode */
#define MX_USART2_VM                            VM_ASYNC
#define MX_USART2_VM_ASYNC                      1

/* Pins */

/* USART2_RX */
#define MX_USART2_RX_Pin                        PA3
#define MX_USART2_RX_GPIO_Pin                   GPIO_PIN_3
#define MX_USART2_RX_GPIOx                      GPIOA
#define MX_USART2_RX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART2_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART2_RX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_USART2_RX_GPIO_AF                    GPIO_AF1_USART2

/* USART2_TX */
#define MX_USART2_TX_Pin                        PA2
#define MX_USART2_TX_GPIO_Pin                   GPIO_PIN_2
#define MX_USART2_TX_GPIOx                      GPIOA
#define MX_USART2_TX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART2_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART2_TX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_USART2_TX_GPIO_AF                    GPIO_AF1_USART2

#endif  /* MX_DEVICE_H__ */
