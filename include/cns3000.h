/*
 *  Copy from Linux : arch/arm/mach-cns3000/include/mach/board-vega.h
 *
 *  Copyright (c) 2008 Cavium Networks 
 * 
 *  This file is free software; you can redistribute it and/or modify 
 *  it under the terms of the GNU General Public License, Version 2, as 
 *  published by the Free Software Foundation. 
 *
 *  This file is distributed in the hope that it will be useful, 
 *  but AS-IS and WITHOUT ANY WARRANTY; without even the implied warranty of 
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE, TITLE, or 
 *  NONINFRINGEMENT.  See the GNU General Public License for more details. 
 *
 *  You should have received a copy of the GNU General Public License 
 *  along with this file; if not, write to the Free Software 
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA or 
 *  visit http://www.gnu.org/licenses/. 
 *
 *  This file may also be available under a different license from Cavium. 
 *  Contact Cavium Networks for more information
 */

#ifndef __CNS3000_H__
#define __CNS3000_H__

/*
 * Peripheral addresses
 */
#define CNS3000_VEGA_TIMER_AND_WDT_BASE	0x00000600	/* Timer and watchdog */
#define WDT_CTRL_OFFSET	0x28

#define CNS3000_VEGA_FLASH0_BASE		0x10000000	/* Flash/SRAM Memory Bank 0 */
#define CNS3000_VEGA_FLASH0_SIZE		SZ_16M
#define CNS3000_VEGA_FLASH1_BASE		0x11000000	/* Flash/SRAM Memory Bank 1 */
#define CNS3000_VEGA_FLASH1_SIZE		SZ_16M
#define CNS3000_VEGA_FLASH2_BASE		0x12000000	/* Flash/SRAM Memory Bank 2 */
#define CNS3000_VEGA_FLASH2_SIZE		SZ_16M
#define CNS3000_VEGA_FLASH3_BASE		0x13000000	/* Flash/SRAM Memory Bank 3 */
#define CNS3000_VEGA_FLASH3_SIZE		SZ_16M

#define CNS3000_VEGA_DDR2SDRAM_BASE		0x20000000	/* DDR2 SDRAM Memory */

#define CNS3000_VEGA_SPI_FLASH_BASE		0x60000000	/* SPI Serial Flash Memory */
#define CNS3000_VEGA_SWITCH_BASE		0x70000000	/* Switch and HNAT Control */
#define CNS3000_VEGA_SSP_BASE			0x71000000	/* Synchronous Serial Port - SPI/PCM/I2C */

#define SPI_CFG_OFFSET				0x40
#define SPI_STAT_OFFSET				0x44
#define	SPI_BIT_RATE_OFFSET			0x48
#define SPI_TX_CTRL_OFFSET			0x4C
#define SPI_TX_DATA_OFFSET			0x50
#define SPI_RX_CTRL_OFFSET			0x54
#define SPI_RX_DATA_OFFSET			0x58
#define SPI_FIFO_TX_CFG_OFFSET			0x5C
#define SPI_FIFO_TX_CTRL_OFFSET			0x60
#define SPI_FIFO_RX_CFG_OFFSET			0x64
#define SPI_INTR_STAT_OFFSET			0x68
#define SPI_INTR_ENA_OFFSET			0x6C
#define SPI_ACCESS_CMD_OFFSET			0x70

#define CNS3000_VEGA_DMC_BASE			0x72000000	/* DMC Control (DDR2 SDRAM) */

#define DMC_MEMC_STATUS_OFFSET			0x000
#define DMC_MEMC_CMD_OFFSET			0x004
#define DMC_DIRECT_CMD_OFFSET			0x008
#define DMC_MEMORY_CFG_OFFSET			0x00C
#define DMC_REFRESH_PRD_OFFSET			0x010
#define DMC_CAS_LATENCY_OFFSET			0x014
#define DMC_WRITE_LATENCY_OFFSET		0x018
#define DMC_T_MRD_OFFSET			0x01C
#define DMC_T_RAS_OFFSET			0x020
#define DMC_T_RC_OFFSET				0x024
#define DMC_T_RCD_OFFSET			0x028
#define DMC_T_RFC_OFFSET			0x02C
#define DMC_T_RP_OFFSET				0x030
#define DMC_T_RRD_OFFSET			0x034
#define DMC_T_WR_OFFSET				0x038
#define DMC_T_WTR_OFFSET			0x03C
#define DMC_T_XP_OFFSET				0x040
#define DMC_T_XSR_OFFSET			0x044
#define DMC_T_ESR_OFFSET			0x048
#define DMC_MEMORY_CFG2_OFFSET			0x04C
#define DMC_MEMORY_CFG3_OFFSET			0x050
#define DMC_T_FAW_OFFSET			0x054
#define DMC_ID_0_CFG_OFFSET			0x100
#define DMC_CHIP_0_CFG_OFFSET			0x200
#define DMC_USER_STATUS_OFFSET			0x300
#define DMC_USER_CONFIG0_OFFSET			0x304
#define DMC_USER_CONFIG1_OFFSET			0x308
#define DMC_FEATURE_CTRL_OFFSET			0x30C
#define DMC_PERIPH_ID_0_OFFSET			0xFE0
#define DMC_PCELL_ID_0_OFFSET			0xFF0

#define CNS3000_VEGA_SMC_BASE			0x73000000	/* SMC Control */

#define SMC_MEMC_STATUS_OFFSET			0x000
#define SMC_MEMIF_CFG_OFFSET			0x004
#define SMC_MEMC_CFG_SET_OFFSET			0x008
#define SMC_MEMC_CFG_CLR_OFFSET			0x00C
#define SMC_DIRECT_CMD_OFFSET			0x010
#define SMC_SET_CYCLES_OFFSET			0x014
#define SMC_SET_OPMODE_OFFSET			0x018
#define SMC_REFRESH_PERIOD_0_OFFSET		0x020
#define SMC_REFRESH_PERIOD_1_OFFSET		0x024

#define SMC_SRAM_CYCLES0_0_OFFSET		0x100		/* SMC Interface 0, NOR flash */
#define SMC_OPMODE0_0_OFFSET			0x104
#define SMC_SRAM_CYCLES0_1_OFFSET		0x120
#define SMC_OPMODE0_1_OFFSET			0x124
#define SMC_SRAM_CYCLES0_2_OFFSET		0x140
#define SMC_OPMODE0_2_OFFSET			0x144
#define SMC_SRAM_CYCLES0_3_OFFSET		0x160
#define SMC_OPMODE0_3_OFFSET			0x164

#define SMC_NAND_CYCLES1_0_OFFSET		0x180		/* SMC Interface 1, NAND flash */
#define SMC_OPMODE1_0_OFFSET			0x184
#define SMC_NAND_CYCLES1_1_OFFSET		0x1A0
#define SMC_OPMODE1_1_OFFSET			0x1A4
#define SMC_NAND_CYCLES1_2_OFFSET		0x1C0
#define SMC_OPMODE1_2_OFFSET			0x1C4
#define SMC_NAND_CYCLES1_3_OFFSET		0x1E0
#define SMC_OPMODE1_3_OFFSET			0x1E4

#define SMC_USER_STATUS_OFFSET			0x200
#define SMC_USER_CONFIG_OFFSET			0x204

#define SMC_ECC_STATUS_OFFSET			0x300
#define SMC_ECC_MEMCFG_OFFSET			0x304
#define SMC_ECC_MEMCOMMAND1_OFFSET		0x308
#define SMC_ECC_MEMCOMMAND2_OFFSET		0x30C
#define SMC_ECC_ADDR0_OFFSET			0x310
#define SMC_ECC_ADDR1_OFFSET			0x314
#define SMC_ECC_VALUE0_OFFSET			0x318
#define SMC_ECC_VALUE1_OFFSET			0x31C
#define SMC_ECC_VALUE2_OFFSET			0x320
#define SMC_ECC_VALUE3_OFFSET			0x324

#define SMC_MBECC1_STATUS_OFFSET		0x600		/* MBECC add-on */
#define SMC_MBECC1_CFG_OFFSET			0x604
#define SMC_MBECC1_MEMCMD0_OFFSET		0x608
#define SMC_MBECC1_MEMCMD1_OFFSET		0x60C

#define SMC_PERIPH_ID_0_OFFSET			0xFE0
#define SMC_PERIPH_ID_1_OFFSET			0xFE4
#define SMC_PERIPH_ID_2_OFFSET			0xFE8
#define SMC_PERIPH_ID_3_OFFSET			0xFEC
#define SMC_PCELL_ID_0_OFFSET			0xFF0
#define SMC_PCELL_ID_1_OFFSET			0xFF4
#define SMC_PCELL_ID_2_OFFSET			0xFF8
#define SMC_PCELL_ID_3_OFFSET			0xFFC

#define SMC_INT_OUTPUTS_OFFSET			0xE08

#define CNS3000_VEGA_GPIOA_BASE			0x74000000	/* GPIO port A */
#define CNS3000_VEGA_GPIOB_BASE			0x74800000	/* GPIO port B */
#define CNS3000_VEGA_RTC_BASE			0x75000000	/* Real Time Clock */

#define RTC_SEC_OFFSET				0x00
#define RTC_MIN_OFFSET				0x04
#define RTC_HOUR_OFFSET				0x08
#define RTC_DAY_OFFSET				0x0C
#define RTC_SEC_ALM_OFFSET			0x10
#define RTC_MIN_ALM_OFFSET			0x14
#define RTC_HOUR_ALM_OFFSET			0x18
#define RTC_REC_OFFSET				0x1C
#define RTC_CTRL_OFFSET				0x20
#define RTC_INTR_STS_OFFSET			0x24

#define CNS3000_VEGA_MISC_BASE			0x76000000	/* Misc Control */

#define CNS3000_VEGA_PMU_BASE			0x77000000	/* Power Management Control */
#define PM_CLK_GATE_OFFSET			0x00
#define PM_SOFT_RST_OFFSET			0x04
#define PM_HS_CFG_OFFSET			0x08
#define PM_CACTIVE_STA_OFFSET			0x0C
#define PM_PWR_STA_OFFSET			0x10
#define PM_SYS_CLK_CTRL_OFFSET			0x14
#define PM_PLL_LCD_I2S_CTRL_OFFSET		0x18
#define PM_PLL_HM_PD_OFFSET			0x1C



#define CNS3000_VEGA_UART0_BASE			0x78000000	/* UART 0 */
/* The other UART0 registers are defined in drivers/serial/serial_cns3000.h */

#define CNS3000_VEGA_UART1_BASE			0x78400000	/* UART 1 */
#define CNS3000_VEGA_UART2_BASE			0x78800000	/* UART 2 */
#define CNS3000_VEGA_UART3_BASE			0x78C00000	/* UART 3 */
#define CNS3000_VEGA_GDMAC_BASE			0x79000000	/* Generic DMA Control */
#define CNS3000_VEGA_CORESIGHT_BASE		0x7A000000	/* CoreSight */
#define CNS3000_VEGA_CRYPTO_BASE		0x7B000000	/* Crypto */
#define CNS3000_VEGA_I2S_BASE			0x7C000000	/* I2S */
#define CNS3000_VEGA_TIMER_BASE			0x7C800000	/* Timer (external timer) */

#define TIMER0_COUNTER_OFFSET			0x00
#define TIMER0_AUTO_RELOAD_OFFSET		0x04
#define TIMER0_MATCH_V1_OFFSET			0x08
#define TIMER0_MATCH_V2_OFFSET			0x0C

#define TIMER1_COUNTER_OFFSET			0x10
#define TIMER1_AUTO_RELOAD_OFFSET		0x14
#define TIMER1_MATCH_V1_OFFSET			0x18
#define TIMER1_MATCH_V2_OFFSET			0x1C

#define TIMER0_1_CONTROL_OFFSET			0x30
#define TIMER0_1_INTERRUPT_STATUS_OFFSET	0x34
#define TIMER0_1_INTERRUPT_MASK_OFFSET		0x38

#define TIMER_FREERUN_OFFSET			0x40
#define TIMER_FREERUN_CONTROL_OFFSET		0x44

#define CNS3000_VEGA_HCIE_BASE			0x7D000000	/* HCIE Control */
#define CNS3000_VEGA_RAID_BASE			0x7E000000	/* RAID Control */
#define CNS3000_VEGA_AXI_IXC_BASE		0x7F000000	/* AXI IXC */
#define CNS3000_VEGA_CLCD_BASE			0x80000000	/* LCD Control */
#define CNS3000_VEGA_USBOTG_BASE		0x81000000	/* USB OTG Control */
#define CNS3000_VEGA_USB_BASE			0x82000000	/* USB Host Control */
#define CNS3000_VEGA_AHCI_BASE			0x83000000	/* SATA */
#define CNS3000_VEGA_CAMERA_BASE		0x84000000	/* Camera Interface */
#define CNS3000_VEGA_SDIO_BASE			0x85000000	/* SDIO */

#define SDIO_DMA_SYS_ADDR_OFFSET		0x00
#define SDIO_BLK_CNT_SIZE_OFFSET		0x04
#define SDIO_ARGUMENT_CTRL_OFFSET		0x08
#define SDIO_CMD_TRAN_MODE_OFFSET		0x0C
#define SDIO_RESPONSE0_OFFSET			0x10
#define SDIO_RESPONSE1_OFFSET			0x14
#define SDIO_RESPONSE2_OFFSET			0x18
#define SDIO_RESPONSE3_OFFSET			0x1C
#define SDIO_BUF_DATA_PORT_OFFSET		0x20
#define SDIO_PRE_STATE_OFFSET			0x24
#define SDIO_SD_HOST_CTRL_OFFSET		0x28
#define SDIO_PWR_HOST_CTRL_OFFSET		0x2C
#define SDIO_INTR_STATUS_OFFSET			0x30
#define SDIO_INTR_ENABLE_OFFSET			0x34
#define SDIO_INTR_SIG_ENABLE_OFFSET		0x38
#define SDIO_CMD12_ERR_STATUS_OFFSET		0x3C
#define SDIO_CAPABILITY0_OFFSET			0x40
#define SDIO_CAPABILITY1_OFFSET			0x44
#define SDIO_MAX_CURR_CAP0_OFFSET		0x48
#define SDIO_MAX_CURR_CAP1_OFFSET		0x4C
#define SDIO_FORCE_EVENT_OFFSET			0x50
#define SDIO_HOST_CTRL_SLOT_STATUS_OFFSET	0xFC

#define CNS3000_VEGA_I2S_TDM_BASE		0x86000000	/* I2S TDM */
#define CNS3000_VEGA_2DG_BASE			0x87000000	/* 2D Graphic Control */
#define CNS3000_VEGA_PCIE0_BASE			0x90000000	/* PCIe Port 0 */
#define CNS3000_VEGA_PCIE1_BASE			0x91000000	/* PCIe Port 1 */
#define CNS3000_VEGA_L2C_BASE			0x92000000	/* L2 Cache Control */
#define CNS3000_VEGA_PCIE0_MEM_BASE		0xA0000000	/* PCIe Port 0 IO/Memory Space */
#define CNS3000_VEGA_PCIE1_MEM_BASE		0xB0000000	/* PCIe Port 1 IO/Memory Space */

#define CNS3000_VEGA_NAND_FLASH0_BASE		0xC0000000	/* NAND Flash Memory Bank 0 */
#define CNS3000_VEGA_NAND_FLASH0_SIZE		SZ_128M
#define CNS3000_VEGA_NAND_FLASH1_BASE		0xC8000000	/* NAND Flash Memory Bank 1 */
#define CNS3000_VEGA_NAND_FLASH1_SIZE		SZ_128M
#define CNS3000_VEGA_NAND_FLASH2_BASE		0xD0000000	/* NAND Flash Memory Bank 2 */
#define CNS3000_VEGA_NAND_FLASH2_SIZE		SZ_128M
#define CNS3000_VEGA_NAND_FLASH3_BASE		0xD8000000	/* NAND Flash Memory Bank 3 */
#define CNS3000_VEGA_NAND_FLASH3_SIZE		SZ_128M

/*
 *
 */

#define CNS3000_VEGA_WATCHDOG_BASE		0x10010000	/* watchdog interface */
#define CNS3000_VEGA_TIMER0_1_BASE		0x10011000	/* Timer 0 and 1 */
#define CNS3000_VEGA_TIMER2_3_BASE		0x10012000	/* Timer 2 and 3 */
#define CNS3000_VEGA_GIC_CPU_BASE		0x1E000000	/* Generic interrupt controller CPU interface */
#define CNS3000_VEGA_GIC_DIST_BASE		0x1E001000	/* Generic interrupt controller distributor */

#define CNS3000_TC11MP_SCU_BASE			0x90000000	/* IRQ, Test chip */

#define SCU_CTRL_OFFSET				0x00
#define SCU_CONFIG_OFFSET			0x04
#define SCU_CPU_STATUS_OFFSET			0x08
#define SCU_INVALIDATE_OFFSET			0x0c
#define SCU_FPGA_REVISION_OFFSET		0x10

#define CNS3000_TC11MP_GIC_CPU_BASE		0x90000100	/* Test chip interrupt controller CPU interface */
#define CNS3000_TC11MP_TWD_BASE			0x90000700
#define CNS3000_TC11MP_TWD_SIZE			0x00000100
#define CNS3000_TC11MP_GIC_DIST_BASE	0x90001000	/* Test chip interrupt controller distributor */
#define CNS3000_TC11MP_L220_BASE		0x90002000	/* L220 registers */

#define GIC_CPU_CTRL_OFFSET			0x00
#define GIC_CPU_PRIMASK_OFFSET			0x04
#define GIC_CPU_BINPOINT_OFFSET			0x08
#define GIC_CPU_INTACK_OFFSET			0x0c
#define GIC_CPU_EOI_OFFSET			0x10
#define GIC_CPU_RUNNINGPRI_OFFSET		0x14
#define GIC_CPU_HIGHPRI_OFFSET			0x18

#endif	/* __CNS3000_H__ */
