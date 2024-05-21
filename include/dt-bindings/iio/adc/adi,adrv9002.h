/* SPDX-License-Identifier: GPL-2.0 */
/*
 * This header provides constants for the ADRV9002 transceiver bindings.
 */

#ifndef _DT_BINDINGS_IIO_ADC_ADRV9002_H
#define _DT_BINDINGS_IIO_ADC_ADRV9002_H

/* Digital GPIOS - 0 means unassigned gpio */
#define	ADRV9002_DGPIO_0	1
#define	ADRV9002_DGPIO_1	2
#define	ADRV9002_DGPIO_2	3
#define	ADRV9002_DGPIO_3	4
#define	ADRV9002_DGPIO_4	5
#define	ADRV9002_DGPIO_5	6
#define	ADRV9002_DGPIO_6	7
#define	ADRV9002_DGPIO_7	8
#define	ADRV9002_DGPIO_8	9
#define	ADRV9002_DGPIO_9	10
#define	ADRV9002_DGPIO_10	11
#define	ADRV9002_DGPIO_11	12
#define	ADRV9002_DGPIO_12	13
#define	ADRV9002_DGPIO_13	14
#define	ADRV9002_DGPIO_14	15
#define	ADRV9002_DGPIO_15	16
/* Analog GPIOs */
#define ADRV9002_AGPIO_00	17
#define ADRV9002_AGPIO_01	18
#define ADRV9002_AGPIO_02	19
#define ADRV9002_AGPIO_03	20
#define ADRV9002_AGPIO_04	21
#define ADRV9002_AGPIO_05	22
#define ADRV9002_AGPIO_06	23
#define ADRV9002_AGPIO_07	24
#define ADRV9002_AGPIO_08	25
#define ADRV9002_AGPIO_09	26
#define ADRV9002_AGPIO_10	27
#define ADRV9002_AGPIO_11	28

/* DGPIO Signals */
#define ADRV9002_GPIO_SIGNAL_ORX_ENABLE_1		0
#define ADRV9002_GPIO_SIGNAL_ORX_ENABLE_2		1
/* AGPIO Signals */
#define ADRV9002_GPIO_SIGNAL_TX1_EXT_FRONTEND_CONTROL	21
#define ADRV9001_GPIO_SIGNAL_TX2_EXT_FRONTEND_CONTROL	22
#define ADRV9001_GPIO_SIGNAL_RX1_EXT_FRONTEND_CONTROL	23
#define ADRV9001_GPIO_SIGNAL_RX2_EXT_FRONTEND_CONTROL	24
#define ADRV9001_GPIO_SIGNAL_EXT_PLL_1_LOCK		25
#define ADRV9001_GPIO_SIGNAL_EXT_PLL_2_LOCK		26
#define ADRV9001_GPIO_SIGNAL_EXT_PLL_1_CE		27
#define ADRV9001_GPIO_SIGNAL_EXT_PLL_2_CE		28
#define ADRV9001_GPIO_SIGNAL_RX_VCO_1_CE		29
#define ADRV9001_GPIO_SIGNAL_RX_VCO_2_CE		30

/* Frequency hopping modes */
#define	ADRV9002_FH_LO_MUX_PREPROCESS				0
#define	ADRV9001_FH_LO_MUX_REALTIME_PROCESS			1
#define	ADRV9002_FH_LO_RETUNE_REALTIME_PROCESS			2
#define	ADRV9002_FH_LO_RETUNE_REALTIME_PROCESS_DUAL_HOP		3

/* Table index control modes */
#define	ADRV9002_FH_TABLE_CTRL_AUTO_LOOP			0
#define	ADRV9002_FH_TABLE_CTRL_AUTO_PING_PONG			1
#define	ADRV9002_FH_TABLE_CTRL_GPIO				2

#define	ADRV9002_RX_1	0
#define	ADRV9002_RX_2	1
#define	ADRV9002_TX_1	0
#define	ADRV9002_TX_2	1

/* Digital predistortion */
#define ADRV9002_DPD_LUTSIZE_256	0
#define ADRV9002_DPD_LUTSIZE_512	1

#endif /* _DT_BINDINGS_IIO_ADC_ADRV9002_H */
