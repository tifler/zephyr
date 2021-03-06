/* SPDX-License-Identifier: Apache-2.0 */

/* SoC level DTS fixup file */

/* CCM configuration */
#define DT_DCCM_BASE_ADDRESS		DT_ARC_DCCM_80000000_BASE_ADDRESS
#define DT_DCCM_SIZE			(DT_ARC_DCCM_80000000_SIZE >> 10)

#define DT_ICCM_BASE_ADDRESS		DT_INST_0_ARC_ICCM_BASE_ADDRESS
#define DT_ICCM_SIZE			(DT_INST_0_ARC_ICCM_SIZE >> 10)

#define DT_DDR_BASE_ADDRESS		DT_MMIO_SRAM_10000000_BASE_ADDRESS
#define DT_DDR_SIZE			(DT_MMIO_SRAM_10000000_SIZE >> 10)

/*
 * UART configuration
 */
#define DT_UART_NS16550_PORT_0_BASE_ADDR	DT_NS16550_F0008000_BASE_ADDRESS
#define DT_UART_NS16550_PORT_0_IRQ		DT_NS16550_F0008000_IRQ_0
#define DT_UART_NS16550_PORT_0_CLK_FREQ	DT_NS16550_F0008000_CLOCK_FREQUENCY
#define DT_UART_NS16550_PORT_0_BAUD_RATE	DT_NS16550_F0008000_CURRENT_SPEED
#define DT_UART_NS16550_PORT_0_NAME		DT_NS16550_F0008000_LABEL
#define DT_UART_NS16550_PORT_0_IRQ_PRI		DT_NS16550_F0008000_IRQ_0_PRIORITY

#define DT_UART_NS16550_PORT_1_BASE_ADDR	DT_NS16550_F0009000_BASE_ADDRESS
#define DT_UART_NS16550_PORT_1_IRQ		DT_NS16550_F0009000_IRQ_0
#define DT_UART_NS16550_PORT_1_CLK_FREQ	DT_NS16550_F0009000_CLOCK_FREQUENCY
#define DT_UART_NS16550_PORT_1_BAUD_RATE	DT_NS16550_F0009000_CURRENT_SPEED
#define DT_UART_NS16550_PORT_1_NAME		DT_NS16550_F0009000_LABEL
#define DT_UART_NS16550_PORT_1_IRQ_PRI		DT_NS16550_F0009000_IRQ_0_PRIORITY

#define DT_UART_NS16550_PORT_2_BASE_ADDR	DT_NS16550_F000A000_BASE_ADDRESS
#define DT_UART_NS16550_PORT_2_IRQ		DT_NS16550_F000A000_IRQ_0
#define DT_UART_NS16550_PORT_2_CLK_FREQ	DT_NS16550_F000A000_CLOCK_FREQUENCY
#define DT_UART_NS16550_PORT_2_BAUD_RATE	DT_NS16550_F000A000_CURRENT_SPEED
#define DT_UART_NS16550_PORT_2_NAME		DT_NS16550_F000A000_LABEL
#define DT_UART_NS16550_PORT_2_IRQ_PRI	DT_NS16550_F000A000_IRQ_0_PRIORITY

/*
 * GPIO configuration
 */
#define DT_GPIO_DW_0_BASE_ADDR	DT_SNPS_DESIGNWARE_GPIO_F0002000_BASE_ADDRESS
#define DT_GPIO_DW_0_BITS		DT_SNPS_DESIGNWARE_GPIO_F0002000_BITS
#define CONFIG_GPIO_DW_0_NAME	DT_SNPS_DESIGNWARE_GPIO_F0002000_LABEL
#define DT_GPIO_DW_0_IRQ 		DT_SNPS_DESIGNWARE_GPIO_F0002000_IRQ_0
#define CONFIG_GPIO_DW_0_IRQ_PRI DT_SNPS_DESIGNWARE_GPIO_F0002000_IRQ_0_PRIORITY
#define DT_GPIO_DW_0_IRQ_FLAGS	0

#define DT_GPIO_DW_1_BASE_ADDR	DT_SNPS_DESIGNWARE_GPIO_F000200C_BASE_ADDRESS
#define DT_GPIO_DW_1_BITS		DT_SNPS_DESIGNWARE_GPIO_F000200C_BITS
#define CONFIG_GPIO_DW_1_NAME	DT_SNPS_DESIGNWARE_GPIO_F000200C_LABEL
#define DT_GPIO_DW_1_IRQ 		DT_SNPS_DESIGNWARE_GPIO_F000200C_IRQ_0
#define CONFIG_GPIO_DW_1_IRQ_PRI DT_SNPS_DESIGNWARE_GPIO_F000200C_IRQ_0_PRIORITY

#define DT_GPIO_DW_2_BASE_ADDR	DT_SNPS_DESIGNWARE_GPIO_F0002018_BASE_ADDRESS
#define DT_GPIO_DW_2_BITS		DT_SNPS_DESIGNWARE_GPIO_F0002018_BITS
#define CONFIG_GPIO_DW_2_NAME	DT_SNPS_DESIGNWARE_GPIO_F0002018_LABEL
#define DT_GPIO_DW_2_IRQ 		DT_SNPS_DESIGNWARE_GPIO_F0002018_IRQ_0
#define CONFIG_GPIO_DW_2_IRQ_PRI DT_SNPS_DESIGNWARE_GPIO_F0002018_IRQ_0_PRIORITY

#define DT_GPIO_DW_3_BASE_ADDR	DT_SNPS_DESIGNWARE_GPIO_F0002024_BASE_ADDRESS
#define DT_GPIO_DW_3_BITS		DT_SNPS_DESIGNWARE_GPIO_F0002024_BITS
#define CONFIG_GPIO_DW_3_NAME	DT_SNPS_DESIGNWARE_GPIO_F0002024_LABEL
#define DT_GPIO_DW_3_IRQ 		DT_SNPS_DESIGNWARE_GPIO_F0002024_IRQ_0
#define CONFIG_GPIO_DW_3_IRQ_PRI DT_SNPS_DESIGNWARE_GPIO_F0002024_IRQ_0_PRIORITY

/*
 * SPI configuration
 */

#define DT_SPI_0_BASE_ADDRESS	DT_SNPS_DESIGNWARE_SPI_F0006000_BASE_ADDRESS
#define DT_SPI_0_NAME		DT_SNPS_DESIGNWARE_SPI_F0006000_LABEL
#define DT_SPI_0_IRQ		DT_SNPS_DESIGNWARE_SPI_F0006000_IRQ_0
#define DT_SPI_0_IRQ_PRI		DT_SNPS_DESIGNWARE_SPI_F0006000_IRQ_0_PRIORITY

#define DT_SPI_1_BASE_ADDRESS	DT_SNPS_DESIGNWARE_SPI_F0007000_BASE_ADDRESS
#define DT_SPI_1_NAME		DT_SNPS_DESIGNWARE_SPI_F0007000_LABEL
#define DT_SPI_1_IRQ		DT_SNPS_DESIGNWARE_SPI_F0007000_IRQ_0
#define DT_SPI_1_IRQ_PRI		DT_SNPS_DESIGNWARE_SPI_F0007000_IRQ_0_PRIORITY

#define DT_SPI_DW_IRQ_FLAGS	0

#define DT_SPI_DW_SPI_CLOCK	DT_NS16550_F0009000_CLOCK_FREQUENCY


/* End of SoC Level DTS fixup file */
