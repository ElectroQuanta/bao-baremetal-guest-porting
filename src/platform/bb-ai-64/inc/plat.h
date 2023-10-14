/**
 * @file plat.h
 * @author Jose Pires
 * @date 2023-10-14
 *
 * @brief Beaglebone AI-64 Platform defines for the baremetal guest
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

#ifndef PLAT_H
#define PLAT_H

#define PLAT_MEM_BASE 0x80000000
#define PLAT_MEM_SIZE 0x80000000

#define PLAT_GICD_BASE_ADDR (0x01800000)
#define PLAT_GICC_BASE_ADDR (0x6f000000)

#define PLAT_UART_ADDR (0x02800000)
#define UART_IRQ_ID (192)

#endif
