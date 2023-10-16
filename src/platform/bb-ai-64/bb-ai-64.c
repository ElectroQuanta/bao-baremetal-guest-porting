/**
 * @file bb-ai-64.c
 * @author Jose Pires
 * @date 2023-10-14
 *
 * @brief Beaglebone AI-64 UART utility functions
 *
 * See as references:
 * - Technical Reference Manual for the J721E DRA829/TDA4VM
 * Processors (available at
 * https://git.beagleboard.org/beagleboard/beaglebone-ai-64/-/tree/main/doc)
 * - Main device tree for the TI K3-J721E processor (available at
 * https://raw.githubusercontent.com/torvalds/linux/master/arch/arm64/boot/dts/ti/k3-j721e-main.dtsi)
 * - Device tree for the Beaglebone AI-64 (available at
 * https://raw.githubusercontent.com/torvalds/linux/master/arch/arm64/boot/dts/ti/k3-j721e-beagleboneai64.dts)
 *
 * @license SPDX-License-Identifier: Apache-2.0
 *
 * @copyright Bao Project and Contributors. All rights reserved.
 */


#include <plat.h>
#include <8250_uart.h>

#define VIRT_UART16550_ADDR    (UART_ADDR + 0x40)
//#define VIRT_UART16550_ADDR    (UART_ADDR)

#define VIRT_UART_BAUDRATE	115200
#define VIRT_UART_FREQ		48000000
#define VIRT_UART_REG_SHIFT          0
#define VIRT_UART_REG_WIDTH          4

void uart_init(){

//int uart8250_init(unsigned long base, u32 in_freq, u32 baudrate, u32 reg_shift,
//		  u32 reg_width);
    uart8250_init(VIRT_UART16550_ADDR, VIRT_UART_FREQ,
                  VIRT_UART_BAUDRATE, VIRT_UART_REG_SHIFT, VIRT_UART_REG_WIDTH);
}

void uart_putc(char c)
{
    uart8250_putc(c);
}

char uart_getchar(void)
{
    return uart8250_getc();
}

void uart_enable_rxirq()
{
    uart8250_enable_rx_int();
}

void uart_clear_rxirq()
{
    uart8250_interrupt_handler(); 
}
