/* SPDX-License-Identifier: GPL-2.0 */
/**
* \file adi_adrv9025_user.h
* \brief Contains ADRV9025 API macro definitions and global structure declarations for adi_adrv9025_user.c
*
* ADRV9025 API Version: 6.4.0.14
*/

/**
* Copyright 2015 - 2020 Analog Devices Inc.
* Released under the ADRV9025 API license, for more information
* see the "LICENSE.pdf" file in this zip file.
*/

#ifndef _ADI_ADRV9025_USER_H_
#define _ADI_ADRV9025_USER_H_

#include "adi_adrv9025_types.h"

#ifdef __cplusplus
extern
"C"
 {
#endif

/*
 *****************************************
 * Interface Macros
 ******************************************
 */
#ifndef ADI_ADRV9025_VERBOSE
#define ADI_ADRV9025_VERBOSE 1                       /*Use strings 0 not use, 1 use */
#endif /* !ADI_ADRV9025_VERBOSE */

#ifndef ADI_ADRV9025_CPU_VERBOSE
#define ADI_ADRV9025_CPU_VERBOSE 1                   /*Use strings 0 not use, 1 use */
#endif /* !ADI_ADRV9025_VERBOSE */

#ifndef ADI_ADRV9025_LOGGING
#define ADI_ADRV9025_LOGGING     ADI_COMMON_LOG_MSG | \
                                 ADI_COMMON_LOG_WARN | \
                                 ADI_COMMON_LOG_ERR | \
                                 ADI_COMMON_LOG_API /*LogLevel Set to API, Messages, Warnings, Error*/
#endif /* !ADI_ADRV9025_LOGGING */

#ifndef ADI_ADRV9025_RESET_ON_ERR
#define ADI_ADRV9025_RESET_ON_ERR   1                  /*API Reset on Severe Errors*/
#endif

#ifndef ADI_ADRV9025_NUMBER_SPI_RETRY
#define ADI_ADRV9025_NUMBER_SPI_RETRY    2
#endif

#ifndef ADI_ADRV9025_PFIR_COEFF_AUTO_INCR
#define ADI_ADRV9025_PFIR_COEFF_AUTO_INCR  0
#endif

#ifndef ADI_ADRV9025_CPU_MEM_AUTO_INCR
#define ADI_ADRV9025_CPU_MEM_AUTO_INCR  1
#endif

#ifndef ADI_ADRV9025_CPU_MEMWRITE_CACHE_ENABLE
#define ADI_ADRV9025_CPU_MEMWRITE_CACHE_ENABLE  1
#endif

#ifndef ADI_ADRV9025_CPU_MEMREAD_CACHE_ENABLE
#define ADI_ADRV9025_CPU_MEMREAD_CACHE_ENABLE  0
#endif


#ifndef ADI_ADRV9025_SW_TEST
#define ADI_ADRV9025_SW_TEST  0
#endif

#ifndef ADI_ADRV9025_PROFILE_CHECKSUM_ENABLE
#define ADI_ADRV9025_PROFILE_CHECKSUM_ENABLE  0
#endif


#ifndef ADRV9025_BITFIELD_ADDR_CHECK
#define ADRV9025_BITFIELD_ADDR_CHECK  1
#endif

#ifndef ADRV9025_BITFIELD_NULL_CHECK
#define ADRV9025_BITFIELD_NULL_CHECK  1
#endif

#ifndef ADRV9025_BITFIELD_VALUE_CHECK
#define ADRV9025_BITFIELD_VALUE_CHECK  0
#endif


#ifndef ADRV9025_BITFIELD_LOG
#define ADRV9025_BITFIELD_LOG  0
#endif

#ifndef ADRV9025_BITFIELD_HAL_LOG
#define ADRV9025_BITFIELD_HAL_LOG  0
#endif

#ifndef ADI_ADRV9025_HAL_LOG
#define ADI_ADRV9025_HAL_LOG  0
#endif


#ifndef ADI_ADRV9025_TX_ATTEN_TABLE_CACHE_MAX
#define ADI_ADRV9025_TX_ATTEN_TABLE_CACHE_MAX  256   /*Cache value: up to 1024, multiple of 4 */
#endif


#ifndef ADI_ADRV9025_MEM_DUMP_CHUNK_SIZE
#define ADI_ADRV9025_MEM_DUMP_CHUNK_SIZE  256          /*Cache value: up to 1024, multiple of 4 */
#endif

#ifndef ADI_ADRV9025_STREAM_BINARY_IMAGE_LOAD_CHUNK_SIZE_BYTES
#define ADI_ADRV9025_STREAM_BINARY_IMAGE_LOAD_CHUNK_SIZE_BYTES (1024) /*Please ensure that the Stream bin size is perfectly divisible by the chunk size*/
#endif

#ifndef ADI_ADRV9025_CPU_BINARY_IMAGE_LOAD_CHUNK_SIZE_BYTES
#define ADI_ADRV9025_CPU_BINARY_IMAGE_LOAD_CHUNK_SIZE_BYTES (1024) /*Please ensure that the CPU FW bin size is perfectly divisible by the chunk size*/
#endif

/* TODO: A few examples for timeout and interval values, remove once new code added */

/* These values can be modified by the end user to adjust how active the SPI reads are
 * to help prevent over using the SPI resource */

#ifndef  ADI_ADRV9025_SETDEFAULTCONDITION_TIMEOUT_US
#define ADI_ADRV9025_SETDEFAULTCONDITION_TIMEOUT_US  1000000
#endif

#ifndef ADI_ADRV9025_SETDEFAULTCONDITION_INTERVAL_US
#define ADI_ADRV9025_SETDEFAULTCONDITION_INTERVAL_US 1000
#endif

#ifndef ADI_ADRV9025_VERIFY_CPU_CHKSUM_TIMEOUT_US
#define ADI_ADRV9025_VERIFY_CPU_CHKSUM_TIMEOUT_US   200000
#endif

#ifndef ADI_ADRV9025_VERIFY_CPU_CHKSUM_INTERVAL_US
#define ADI_ADRV9025_VERIFY_CPU_CHKSUM_INTERVAL_US    5000
#endif

#ifndef ADI_ADRV9025_CLKPLL_CPCAL_TIMEOUT_US
#define ADI_ADRV9025_CLKPLL_CPCAL_TIMEOUT_US       1000000
#endif

#ifndef ADI_ADRV9025_CLKPLL_CPCAL_INTERVAL_US
#define ADI_ADRV9025_CLKPLL_CPCAL_INTERVAL_US         1000
#endif

#ifndef ADI_ADRV9025_CLKPLL_LOCK_TIMEOUT_US
#define ADI_ADRV9025_CLKPLL_LOCK_TIMEOUT_US        1000000
#endif

#ifndef ADI_ADRV9025_CLKPLL_LOCK_INTERVAL_US
#define ADI_ADRV9025_CLKPLL_LOCK_INTERVAL_US          1000
#endif

#ifndef ADI_ADRV9025_CLKPLL_POWERUP_US
#define ADI_ADRV9025_CLKPLL_POWERUP_US              200000
#endif

#ifndef ADI_ADRV9025_CLKPLL_LOCK_US
#define ADI_ADRV9025_CLKPLL_LOCK_US                 100000
#endif

#ifndef ADI_ADRV9025_SETARMGPIO_TIMEOUT_US
#define ADI_ADRV9025_SETARMGPIO_TIMEOUT_US         1000000
#endif

#ifndef ADI_ADRV9025_SETARMGPIO_INTERVAL_US
#define ADI_ADRV9025_SETARMGPIO_INTERVAL_US           1000
#endif

#ifndef ADI_ADRV9025_GETARMGPIO_TIMEOUT_US
#define ADI_ADRV9025_GETARMGPIO_TIMEOUT_US         1000000
#endif

#ifndef ADI_ADRV9025_GETARMGPIO_INTERVAL_US
#define ADI_ADRV9025_GETARMGPIO_INTERVAL_US           1000
#endif

#ifndef ADI_ADRV9025_SETTXTOORXMAP_TIMEOUT_US
#define ADI_ADRV9025_SETTXTOORXMAP_TIMEOUT_US      1000000
#endif

#ifndef ADI_ADRV9025_SETTXTOORXMAP_INTERVAL_US
#define ADI_ADRV9025_SETTXTOORXMAP_INTERVAL_US        1000
#endif

#ifndef ADI_ADRV9025_GETTXTOORXMAP_TIMEOUT_US
#define ADI_ADRV9025_GETTXTOORXMAP_TIMEOUT_US      1000000
#endif

#ifndef ADI_ADRV9025_GETTXTOORXMAP_INTERVAL_US
#define ADI_ADRV9025_GETTXTOORXMAP_INTERVAL_US        1000
#endif

#ifndef ADI_ADRV9025_GETTEMPERATURE_TIMEOUT_US
#define ADI_ADRV9025_GETTEMPERATURE_TIMEOUT_US     1000000
#endif

#ifndef ADI_ADRV9025_GETTEMPERATURE_INTERVAL_US
#define ADI_ADRV9025_GETTEMPERATURE_INTERVAL_US       1000
#endif

#ifndef ADI_ADRV9025_SETRFPLL_TIMEOUT_US
#define ADI_ADRV9025_SETRFPLL_TIMEOUT_US           1000000
#endif

#ifndef ADI_ADRV9025_SETRFPLL_INTERVAL_US
#define ADI_ADRV9025_SETRFPLL_INTERVAL_US             1000
#endif

#ifndef ADI_ADRV9025_GETRFPLL_TIMEOUT_US
#define ADI_ADRV9025_GETRFPLL_TIMEOUT_US           1000000
#endif

#ifndef ADI_ADRV9025_GETRFPLL_INTERVAL_US
#define ADI_ADRV9025_GETRFPLL_INTERVAL_US             1000
#endif

#ifndef ADI_ADRV9025_SETEXTDPDCAPTURETRIG_TIMEOUT_US
#define ADI_ADRV9025_SETEXTDPDCAPTURETRIG_TIMEOUT_US  1000000
#endif

#ifndef ADI_ADRV9025_SETEXTDPDCAPTURETRIG_INTERVAL_US
#define ADI_ADRV9025_SETEXTDPDCAPTURETRIG_INTERVAL_US  1000
#endif

#ifndef ADI_ADRV9025_SETEXTDPDCAPTUREDONE_INTERVAL_US
#define ADI_ADRV9025_SETEXTDPDCAPTUREDONE_INTERVAL_US  1000
#endif

#ifndef ADI_ADRV9025_SETEXTDPDCAPTUREDONE_TIMEOUT_US
#define ADI_ADRV9025_SETEXTDPDCAPTUREDONE_TIMEOUT_US   1000000
#endif

#ifndef ADI_ADRV9025_GETEXTDPDCAPTUREDONE_INTERVAL_US
#define ADI_ADRV9025_GETEXTDPDCAPTUREDONE_INTERVAL_US  1000
#endif

#ifndef ADI_ADRV9025_GETEXTDPDCAPTUREDONE_TIMEOUT_US
#define ADI_ADRV9025_GETEXTDPDCAPTUREDONE_TIMEOUT_US   1000000
#endif

#ifndef ADI_ADRV9025_SETEXTDPDENABLE_INTERVAL_US
#define ADI_ADRV9025_SETEXTDPDENABLE_INTERVAL_US       1000
#endif

#ifndef ADI_ADRV9025_SETEXTDPDENABLE_TIMEOUT_US
#define ADI_ADRV9025_SETEXTDPDENABLE_TIMEOUT_US        1000000
#endif

#ifndef ADI_ADRV9025_GETEXTDPDENABLE_INTERVAL_US
#define ADI_ADRV9025_GETEXTDPDENABLE_INTERVAL_US       1000
#endif

#ifndef ADI_ADRV9025_GETEXTDPDENABLE_TIMEOUT_US
#define ADI_ADRV9025_GETEXTDPDENABLE_TIMEOUT_US        1000000
#endif

#ifndef ADI_ADRV9025_SETEXTDMODELSELECT_INTERVAL_US
#define ADI_ADRV9025_SETEXTDMODELSELECT_INTERVAL_US    1000
#endif

#ifndef ADI_ADRV9025_SETEXTDMODELSELECT_TIMEOUT_US
#define ADI_ADRV9025_SETEXTDMODELSELECT_TIMEOUT_US     1000000
#endif

#ifndef ADI_ADRV9025_GETEXTDMODELSELECT_INTERVAL_US
#define ADI_ADRV9025_GETEXTDMODELSELECT_INTERVAL_US    1000
#endif

#ifndef ADI_ADRV9025_GETEXTDMODELSELECT_TIMEOUT_US
#define ADI_ADRV9025_GETEXTDMODELSELECT_TIMEOUT_US     1000000
#endif

#ifndef ADI_ADRV9025_SETEXTDHARDCLIPPER_INTERVAL_US
#define ADI_ADRV9025_SETEXTDHARDCLIPPER_INTERVAL_US    1000
#endif

#ifndef ADI_ADRV9025_SETEXTDHARDCLIPPER_TIMEOUT_US
#define ADI_ADRV9025_SETEXTDHARDCLIPPER_TIMEOUT_US     1000000
#endif

#ifndef ADI_ADRV9025_GETEXTDHARDCLIPPER_INTERVAL_US
#define ADI_ADRV9025_GETEXTDHARDCLIPPER_INTERVAL_US    1000
#endif

#ifndef ADI_ADRV9025_GETEXTDHARDCLIPPER_TIMEOUT_US
#define ADI_ADRV9025_GETEXTDHARDCLIPPER_TIMEOUT_US     1000000
#endif

#ifndef ADI_ADRV9025_SETEXTDLUTCLEAR_INTERVAL_US
#define ADI_ADRV9025_SETEXTDLUTCLEAR_INTERVAL_US       1000
#endif

#ifndef ADI_ADRV9025_SETEXTDLUTCLEAR_TIMEOUT_US
#define ADI_ADRV9025_SETEXTDLUTCLEAR_TIMEOUT_US        1000000
#endif

#ifndef ADI_ADRV9025_SETEXTDLUTUPDATE_INTERVAL_US
#define ADI_ADRV9025_SETEXTDLUTUPDATE_INTERVAL_US      1000
#endif

#ifndef ADI_ADRV9025_SETEXTDLUTUPDATE_TIMEOUT_US
#define ADI_ADRV9025_SETEXTDLUTUPDATE_TIMEOUT_US       1000000
#endif

#ifndef ADI_ADRV9025_SETDPDRESET_INTERVAL_US
#define ADI_ADRV9025_SETDPDRESET_INTERVAL_US           1000
#endif

#ifndef ADI_ADRV9025_SETDPDRESET_TIMEOUT_US
#define ADI_ADRV9025_SETDPDRESET_TIMEOUT_US            1000000
#endif

#ifndef ADI_ADRV9025_SETDPDTRACKCONFIG_INTERVAL_US
#define ADI_ADRV9025_SETDPDTRACKCONFIG_INTERVAL_US    1000
#endif

#ifndef ADI_ADRV9025_SETDPDTRACKCONFIG_TIMEOUT_US
#define ADI_ADRV9025_SETDPDTRACKCONFIG_TIMEOUT_US     1000000
#endif

#ifndef ADI_ADRV9025_GETDPDTRACKCONFIG_INTERVAL_US
#define ADI_ADRV9025_GETDPDTRACKCONFIG_INTERVAL_US    1000
#endif

#ifndef ADI_ADRV9025_GETDPDTRACKCONFIG_TIMEOUT_US
#define ADI_ADRV9025_GETDPDTRACKCONFIG_TIMEOUT_US     1000000
#endif

#ifndef ADI_ADRV9025_SETDPDFAULTCONDITION_INTERVAL_US
#define ADI_ADRV9025_SETDPDFAULTCONDITION_INTERVAL_US 1000
#endif

#ifndef ADI_ADRV9025_SETDPDFAULTCONDITION_TIMEOUT_US
#define ADI_ADRV9025_SETDPDFAULTCONDITION_TIMEOUT_US  1000000
#endif

#ifndef ADI_ADRV9025_GETDPDFAULTCONDITION_INTERVAL_US
#define ADI_ADRV9025_GETDPDFAULTCONDITION_INTERVAL_US 1000
#endif

#ifndef ADI_ADRV9025_GETDPDFAULTCONDITION_TIMEOUT_US
#define ADI_ADRV9025_GETDPDFAULTCONDITION_TIMEOUT_US  1000000
#endif

#ifndef ADI_ADRV9025_SETDPDRECOVERYACTION_INTERVAL_US
#define ADI_ADRV9025_SETDPDRECOVERYACTION_INTERVAL_US 1000
#endif

#ifndef ADI_ADRV9025_SETDPDRECOVERYACTION_TIMEOUT_US
#define ADI_ADRV9025_SETDPDRECOVERYACTION_TIMEOUT_US  1000000
#endif

#ifndef ADI_ADRV9025_GETDPDRECOVERYACTION_INTERVAL_US
#define ADI_ADRV9025_GETDPDRECOVERYACTION_INTERVAL_US 1000
#endif

#ifndef ADI_ADRV9025_GETDPDRECOVERYACTION_TIMEOUT_US
#define ADI_ADRV9025_GETDPDRECOVERYACTION_TIMEOUT_US  1000000
#endif

#ifndef ADI_ADRV9025_SETEXTPATHDELAY_INTERVAL_US
#define ADI_ADRV9025_SETEXTPATHDELAY_INTERVAL_US       1000
#endif

#ifndef ADI_ADRV9025_SETEXTPATHDELAY_TIMEOUT_US
#define ADI_ADRV9025_SETEXTPATHDELAY_TIMEOUT_US        1000000
#endif

#ifndef ADI_ADRV9025_SETHARDCLIPENABLE_INTERVAL_US
#define ADI_ADRV9025_SETHARDCLIPENABLE_INTERVAL_US     1000
#endif

#ifndef ADI_ADRV9025_SETHARDCLIPENABLE_TIMEOUT_US
#define ADI_ADRV9025_SETHARDCLIPENABLE_TIMEOUT_US      1000000
#endif

#ifndef ADI_ADRV9025_SETCFRCTRLCFG_INTERVAL_US
#define ADI_ADRV9025_SETCFRCTRLCFG_INTERVAL_US         1000
#endif

#ifndef ADI_ADRV9025_SETCFRCTRLCFG_TIMEOUT_US
#define ADI_ADRV9025_SETCFRCTRLCFG_TIMEOUT_US          1000000
#endif

#ifndef ADI_ADRV9025_SENDCPUCMD_TIMEOUT_US
#define ADI_ADRV9025_SENDCPUCMD_TIMEOUT_US         2000000
#endif

#ifndef ADI_ADRV9025_SENDCPUCMD_INTERVAL_US
#define ADI_ADRV9025_SENDCPUCMD_INTERVAL_US           1000
#endif

#ifndef ADI_ADRV9025_READCPUCFG_TIMEOUT_US
#define ADI_ADRV9025_READCPUCFG_TIMEOUT_US         1000000
#endif

#ifndef ADI_ADRV9025_READCPUCFG_INTERVAL_US
#define ADI_ADRV9025_READCPUCFG_INTERVAL_US           1000
#endif

#ifndef ADI_ADRV9025_WRITECPUCFG_TIMEOUT_US
#define ADI_ADRV9025_WRITECPUCFG_TIMEOUT_US        1000000
#endif

#ifndef ADI_ADRV9025_WRITECPUCFG_INTERVAL_US
#define ADI_ADRV9025_WRITECPUCFG_INTERVAL_US          1000
#endif

#ifndef ADI_ADRV9025_GETCPUBOOTUP_TIMEOUT_US
#define ADI_ADRV9025_GETCPUBOOTUP_TIMEOUT_US       1000000
#endif

#ifndef ADI_ADRV9025_GETCPUBOOTUP_INTERVAL_US
#define ADI_ADRV9025_GETCPUBOOTUP_INTERVAL_US         1000
#endif

#ifndef ADI_ADRV9025_SETCPUBOOTUPMCS_TIMEOUT_US
#define ADI_ADRV9025_SETCPUBOOTUPMCS_TIMEOUT_US    1000000
#endif

#ifndef ADI_ADRV9025_SETCPUBOOTUPMCS_INTERVAL_US
#define ADI_ADRV9025_SETCPUBOOTUPMCS_INTERVAL_US      1000
#endif

#ifndef ADI_ADRV9025_WRITECPUEXCEPTION_TIMEOUT_US
#define ADI_ADRV9025_WRITECPUEXCEPTION_TIMEOUT_US  5000000
#endif

#ifndef ADI_ADRV9025_WRITECPUEXCEPTION_INTERVAL_US
#define ADI_ADRV9025_WRITECPUEXCEPTION_INTERVAL_US    1000
#endif

#ifndef ADI_ADRV9025_INITCALSWAIT_INTERVAL_US
#define ADI_ADRV9025_INITCALSWAIT_INTERVAL_US         1000
#endif

#ifndef ADI_ADRV9025_INITCALSABORT_TIMEOUT_US
#define ADI_ADRV9025_INITCALSABORT_TIMEOUT_US      1000000
#endif

#ifndef ADI_ADRV9025_INITCALSABORT_INTERVAL_US
#define ADI_ADRV9025_INITCALSABORT_INTERVAL_US        1000
#endif

#ifndef ADI_ADRV9025_INITCALSTATUSGET_TIMEOUT_US
#define ADI_ADRV9025_INITCALSTATUSGET_TIMEOUT_US   1000000
#endif

#ifndef ADI_ADRV9025_INITCALSTATUSGET_INTERVAL_US
#define ADI_ADRV9025_INITCALSTATUSGET_INTERVAL_US     1000
#endif

#ifndef ADI_ADRV9025_ENTRACKINGCALS_TIMEOUT_US
#define ADI_ADRV9025_ENTRACKINGCALS_TIMEOUT_US     1000000
#endif

#ifndef ADI_ADRV9025_ENTRACKINGCALS_INTERVAL_US
#define ADI_ADRV9025_ENTRACKINGCALS_INTERVAL_US       1000
#endif

#ifndef ADI_ADRV9025_SETSRLCONFIG_TIMEOUT_US
#define ADI_ADRV9025_SETSRLCONFIG_TIMEOUT_US       1000000
#endif

#ifndef ADI_ADRV9025_SETSRLCONFIG_INTERVAL_US
#define ADI_ADRV9025_SETSRLCONFIG_INTERVAL_US         1000
#endif

#ifndef ADI_ADRV9025_GETSRLCONFIG_TIMEOUT_US
#define ADI_ADRV9025_GETSRLCONFIG_TIMEOUT_US       1000000
#endif

#ifndef ADI_ADRV9025_GETSRLCONFIG_INTERVAL_US
#define ADI_ADRV9025_GETSRLCONFIG_INTERVAL_US         1000
#endif

#ifndef ADI_ADRV9025_GETSRLSTATS_TIMEOUT_US
#define ADI_ADRV9025_GETSRLSTATS_TIMEOUT_US       1000000
#endif

#ifndef ADI_ADRV9025_GETSRLSTATS_INTERVAL_US
#define ADI_ADRV9025_GETSRLSTATS_INTERVAL_US         1000
#endif

#ifndef ADI_ADRV9025_GETTXLOLSTATUS_TIMEOUT_US
#define ADI_ADRV9025_GETTXLOLSTATUS_TIMEOUT_US     1000000
#endif

#ifndef ADI_ADRV9025_GETTXLOLSTATUS_INTERVAL_US
#define ADI_ADRV9025_GETTXLOLSTATUS_INTERVAL_US       1000
#endif

#ifndef ADI_ADRV9025_GETTXQECSTATUS_TIMEOUT_US
#define ADI_ADRV9025_GETTXQECSTATUS_TIMEOUT_US     1000000
#endif

#ifndef ADI_ADRV9025_GETTXQECSTATUS_INTERVAL_US
#define ADI_ADRV9025_GETTXQECSTATUS_INTERVAL_US       1000
#endif

#ifndef ADI_ADRV9025_GETRXQECSTATUS_TIMEOUT_US
#define ADI_ADRV9025_GETRXQECSTATUS_TIMEOUT_US     1000000
#endif

#ifndef ADI_ADRV9025_GETRXQECSTATUS_INTERVAL_US
#define ADI_ADRV9025_GETRXQECSTATUS_INTERVAL_US       1000
#endif

#ifndef ADI_ADRV9025_GETORXQECSTATUS_TIMEOUT_US
#define ADI_ADRV9025_GETORXQECSTATUS_TIMEOUT_US    1000000
#endif

#ifndef ADI_ADRV9025_GETORXQECSTATUS_INTERVAL_US
#define ADI_ADRV9025_GETORXQECSTATUS_INTERVAL_US      1000
#endif

#ifndef ADI_ADRV9025_GETTXVSWRSTATUS_TIMEOUT_US
#define ADI_ADRV9025_GETTXVSWRSTATUS_TIMEOUT_US    1000000
#endif

#ifndef ADI_ADRV9025_GETTXVSWRSTATUS_INTERVAL_US
#define ADI_ADRV9025_GETTXVSWRSTATUS_INTERVAL_US      1000
#endif

#ifndef ADI_ADRV9025_GETTXCLGCSTATUS_TIMEOUT_US
#define ADI_ADRV9025_GETTXCLGCSTATUS_TIMEOUT_US    1000000
#endif

#ifndef ADI_ADRV9025_GETTXCLGCSTATUS_INTERVAL_US
#define ADI_ADRV9025_GETTXCLGCSTATUS_INTERVAL_US      1000
#endif

#ifndef ADI_ADRV9025_GETTXDPDSTATUS_TIMEOUT_US
#define ADI_ADRV9025_GETTXDPDSTATUS_TIMEOUT_US     1000000
#endif

#ifndef ADI_ADRV9025_GETTXDPDSTATUS_INTERVAL_US
#define ADI_ADRV9025_GETTXDPDSTATUS_INTERVAL_US       1000
#endif

#ifndef ADI_ADRV9025_GETTXCFRSTATUS_TIMEOUT_US
#define ADI_ADRV9025_GETTXCFRSTATUS_TIMEOUT_US     1000000
#endif

#ifndef ADI_ADRV9025_GETTXCFRSTATUS_INTERVAL_US
#define ADI_ADRV9025_GETTXCFRSTATUS_INTERVAL_US       1000
#endif

#ifndef ADI_ADRV9025_GETRXHD2STATUS_TIMEOUT_US
#define ADI_ADRV9025_GETRXHD2STATUS_TIMEOUT_US     1000000
#endif

#ifndef ADI_ADRV9025_GETRXHD2STATUS_INTERVAL_US
#define ADI_ADRV9025_GETRXHD2STATUS_INTERVAL_US       1000
#endif

#ifndef ADI_ADRV9025_GETTCALS_STATE_TIMEOUT_US
#define ADI_ADRV9025_GETTCALS_STATE_TIMEOUT_US     1000000
#endif

#ifndef ADI_ADRV9025_GETTCALS_STATE_INTERVAL_US
#define ADI_ADRV9025_GETTCALS_STATE_INTERVAL_US       1000
#endif

#ifndef ADI_ADRV9025_GETDESSTATUS_TIMEOUT_US
#define ADI_ADRV9025_GETDESSTATUS_TIMEOUT_US       1000000
#endif

#ifndef ADI_ADRV9025_GETDESSTATUS_INTERVAL_US
#define ADI_ADRV9025_GETDESSTATUS_INTERVAL_US         1000
#endif

#ifndef ADI_ADRV9025_GETBANDSWITCHSTAT_TIMEOUT_US
#define ADI_ADRV9025_GETBANDSWITCHSTAT_TIMEOUT_US   1000000
#endif

#ifndef ADI_ADRV9025_GETBANDSWITCHSTAT_INTERVAL_US
#define ADI_ADRV9025_GETBANDSWITCHSTAT_INTERVAL_US     1000
#endif

#ifndef ADI_ADRV9025_SETMCS_DONE_TIMEOUT_US
#define ADI_ADRV9025_SETMCS_DONE_TIMEOUT_US        1000000
#endif

#ifndef ADI_ADRV9025_SETMCS_DONE_INTERVAL_US
#define ADI_ADRV9025_SETMCS_DONE_INTERVAL_US           1000
#endif
#ifndef ADI_ADRV9025_TEST_MODE_TIMEOUT_US
#define ADI_ADRV9025_TEST_MODE_TIMEOUT_US   30000000
#endif

#ifndef ADI_ADRV9025_TEST_MODE_INTERVAL_US
#define ADI_ADRV9025_TEST_MODE_INTERVAL_US     10000
#endif
/*
 *****************************************
 * Rx and ObsRx gain tables
 ******************************************
 */

#ifndef ADI_ADRV9025_MAX_GAIN_TABLE_INDEX
#define ADI_ADRV9025_MAX_GAIN_TABLE_INDEX             255
#endif

#ifndef ADI_ADRV9025_MIN_GAIN_TABLE_INDEX
#define ADI_ADRV9025_MIN_GAIN_TABLE_INDEX             0
#endif


#ifndef ADI_ADRV9025_START_RX_GAIN_INDEX
#define ADI_ADRV9025_START_RX_GAIN_INDEX              255
#endif

#ifndef ADI_ADRV9025_MIN_RX_GAIN_TABLE_INDEX
#define ADI_ADRV9025_MIN_RX_GAIN_TABLE_INDEX          0
#endif


#ifndef ADI_ADRV9025_START_ORX_GAIN_INDEX
#define ADI_ADRV9025_START_ORX_GAIN_INDEX             255
#endif

#ifndef ADI_ADRV9025_MIN_ORX_GAIN_TABLE_INDEX
#define ADI_ADRV9025_MIN_ORX_GAIN_TABLE_INDEX         0
#endif


#ifndef ADI_ADRV9025_RX_RANGE_CHECK
#define ADI_ADRV9025_RX_RANGE_CHECK  1
#endif

#ifndef ADI_ADRV9025_RADIOCTRL_RANGE_CHECK
#define ADI_ADRV9025_RADIOCTRL_RANGE_CHECK  1
#endif

#ifndef ADI_ADRV9025_TX_RANGE_CHECK
#define ADI_ADRV9025_TX_RANGE_CHECK  1
#endif

#ifndef ADI_ADRV9025_AGC_RANGE_CHECK
#define ADI_ADRV9025_AGC_RANGE_CHECK  1
#endif

#ifndef ADI_ADRV9025_EXT_DPD_RANGE_CHECK
#define ADI_ADRV9025_EXT_DPD_RANGE_CHECK  1
#endif

#ifndef ADI_ADRV9025_FOVR_RANGE_CHECK
#define ADI_ADRV9025_FOVR_RANGE_CHECK  1
#endif

#ifndef ADI_ADRV9025_GPIO_RANGE_CHECK
#define ADI_ADRV9025_GPIO_RANGE_CHECK  1
#endif

#ifndef ADI_ADRV9025_DPD_RANGE_CHECK
#define ADI_ADRV9025_DPD_RANGE_CHECK  1
#endif

#ifndef ADI_ADRV9025_PCA_RANGE_CHECK
#define ADI_ADRV9025_PCA_RANGE_CHECK  1
#endif

#ifndef ADI_ADRV9025_PHM_RANGE_CHECK
#define ADI_ADRV9025_PHM_RANGE_CHECK  1
#endif

#ifndef ADI_ADRV9025_CFR_RANGE_CHECK
#define ADI_ADRV9025_CFR_RANGE_CHECK  1
#endif

#ifndef ADI_ADRV9025_CLGC_RANGE_CHECK
#define ADI_ADRV9025_CLGC_RANGE_CHECK  1
#endif

#ifndef ADI_ADRV9025_INIT_RANGE_CHECK
#define ADI_ADRV9025_INIT_RANGE_CHECK  0
#endif

 /**
 * SPI Write Streaming Enable
 *
 * If enabled, dma full word write transactions are performed with Spi streaming. This allows API to write a full word as
 * A A D D D D package of 6 bytes. If disabled, API writes a full word as A A D A A D A A D A A D package of 12 bytes.
 * Streaming speeds up the memory access when there is large number of bytes to be written.
 */
#ifndef ADI_ADRV9025_SPI_WRITE_STREAMING_ENABLE

#define ADI_ADRV9025_SPI_WRITE_STREAMING_ENABLE  1

#endif


 /**
 * SPI Read Streaming Enable
 *
 * If enabled, dma full word read transactions are performed with Spi streaming. This allows API to read a full word as
 * A A D D D D package of 6 bytes. If disabled, API reads a full word as A A D A A D A A D A A D package of 12 bytes.
 * Streaming speeds up the memory access when there is large number of bytes to be read.
 */
#ifndef ADI_ADRV9025_SPI_READ_STREAMING_ENABLE
#define ADI_ADRV9025_SPI_READ_STREAMING_ENABLE  0
#endif

#ifndef ADI_ADRV9025_LITTLE_ENDIAN_ENABLE
#define ADI_ADRV9025_LITTLE_ENDIAN_ENABLE  1
#endif


#if ADI_ADRV9025_LITTLE_ENDIAN_ENABLE == 1
#define HTOCLL( x ) ( x )
#define CTOHLL( x ) ( x )
#define HTOCL( x )  ( x )
#define CTOHL( x )  ( x )
#define HTOCS( x )  ( x )
#define CTOHS( x )  ( x )
#else
#define HTOCLL( x ) ((((x) & 0xFF00000000000000ull) >> 56u) | \
                     (((x) & 0x00FF000000000000ull) >> 40u) | \
                     (((x) & 0x0000FF0000000000ull) >> 24u) | \
                     (((x) & 0x000000FF00000000ull) >>  8u) | \
                     (((x) & 0x00000000FF000000ull) <<  8u) | \
                     (((x) & 0x0000000000FF0000ull) << 24u) | \
                     (((x) & 0x000000000000FF00ull) << 40u) | \
                     (((x) & 0x00000000000000FFull) << 56u))
#define CTOHLL( x ) ((((x) & 0xFF00000000000000ull) >> 56u) | \
                     (((x) & 0x00FF000000000000ull) >> 40u) | \
                     (((x) & 0x0000FF0000000000ull) >> 24u) | \
                     (((x) & 0x000000FF00000000ull) >>  8u) | \
                     (((x) & 0x00000000FF000000ull) <<  8u) | \
                     (((x) & 0x0000000000FF0000ull) << 24u) | \
                     (((x) & 0x000000000000FF00ull) << 40u) | \
                     (((x) & 0x00000000000000FFull) << 56u))
#define HTOCL( x )  ((((x) & 0xFF000000ul) >> 24) | (((x) & 0x00FF0000ul) >> 8) | (((x) & 0x0000FF00ul) << 8) | (((x) & 0x000000FFul) << 24))
#define CTOHL( x )  ((((x) & 0xFF000000ul) >> 24) | (((x) & 0x00FF0000ul) >> 8) | (((x) & 0x0000FF00ul) << 8) | (((x) & 0x000000FFul) << 24))
#define HTOCS( x )  ((((x) & 0xFF00u) >> 8) | (((x) & 0x00FFu) << 8))
#define CTOHS( x )  ((((x) & 0xFF00u) >> 8) | (((x) & 0x00FFu) << 8))
#endif

 /**
 * ADI_ADRV9025_MAX_DPD_FEATURES
 *
 * Number of dpd model coefficients (defaulted to 190 which is the maximum)
 */
#ifndef ADI_ADRV9025_MAX_DPD_FEATURES
#define ADI_ADRV9025_MAX_DPD_FEATURES 190u
#endif

#ifndef ADI_ADRV9025_HW_RMW_ENABLE

#define ADI_ADRV9025_HW_RMW_ENABLE    1    /* Enable/Disable HW_RMW for ADRV9025 */

#endif

#ifdef __cplusplus
}
#endif

#endif
