/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Xilinx HDCP1X Protocol Driver
 *
 * Copyright (C) 2023, Advanced Micro Devices, Inc. All rights reserved
 * .
 * Author: katta Dhanunjanrao <katta.dhanunjanrao@amd.com>
 *
 */
#ifndef HDCP1X_TX_H_
#define HDCP1X_TX_H_

#include <drm/display/drm_hdcp.h>
#include <linux/types.h>
/*
 * hdcp1x_tx_state: The enum structure has the HDCP state machine states.
 * @H0_HDCP1X_TX_STATE_DISABLED_NO_RX_ATTACHED: HDCP state H0
 * @A0_HDCP1X_TX_STATE_DETERMINE_RX_CAPABLE: HDCP state A0
 * @A1_HDCP1X_TX_STATE_EXCHANGE_KSVS: HDCP state A1
 * @A2_HDCP1X_TX_STATE_COMPUTATIONS: HDCP state A2
 * @A3_HDCP1X_TX_STATE_VALIDATE_RX: HDCP state A3
 * @A4_HDCP1X_TX_STATE_AUTHENTICATED: HDCP state A4
 * @A5_HDCP1X_TX_STATE_TESTFORREPEATER: HDCP state A5
 * @REPTR_HDCP1X_TX_STATE_UNAUTHENTICATED: Repeater state checking
 */
enum hdcp1x_tx_state {
	H0_HDCP1X_TX_STATE_DISABLED_NO_RX_ATTACHED = 0,
	A0_HDCP1X_TX_STATE_DETERMINE_RX_CAPABLE,
	A1_HDCP1X_TX_STATE_EXCHANGE_KSVS,
	A2_HDCP1X_TX_STATE_COMPUTATIONS,
	A3_HDCP1X_TX_STATE_VALIDATE_RX,
	A4_HDCP1X_TX_STATE_AUTHENTICATED,
	A5_HDCP1X_TX_STATE_TESTFORREPEATER,
	REPTR_HDCP1X_TX_STATE_UNAUTHENTICATED
};
#endif
