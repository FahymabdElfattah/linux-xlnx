// SPDX-License-Identifier: GPL-2.0
#ifndef __AD916x_REGISTERS_H__
#define __AD916x_REGISTERS_H__


struct ad916x_reg_data {
	uint16_t reg;
	uint8_t  val;
};

int ad916x_register_write_tbl(ad916x_handle_t *h,
				struct ad916x_reg_data *tbl, uint32_t count);

/*SILICON Revision SUMMARY: (AD916x_REGMAP_V4)*/
#define AD916x_REL_SI_REV                         0x3
#define AD9161_PROD_ID_LSB                        0x61
#define AD9162_PROD_ID_LSB                        0x62
#define AD9163_PROD_ID_LSB                        0x63
#define AD9166_PROD_ID_LSB                        0x66
/*REGISTER SUMMARY : (AD916x_REGMAP_V4)*/
#define AD916x_REG_IF_CFG_A                       0x000
#define AD916x_REG_IF_CFG_B                       0x001
#define AD916x_REG_DEV_CFG                        0x002
#define AD916x_REG_CHIP_TYPE                      0x003
#define AD916x_REG_PROD_ID_LSB                    0x004
#define AD916x_REG_PROD_ID_MSB                    0x005
#define AD916x_REG_CHIP_GRADE                     0x006
#define AD916x_REG_IRQ_EN                         0x020
#define AD916x_BIT_MSK_IRQ_PRBSI                  0x1
#define AD916x_BIT_MSK_IRQ_PRBSQ                  0x2
#define AD916x_BIT_MSK_IRQ_LANE_FIFO              0x4
#define AD916x_BIT_MSK_IRQ_DATA_RDY               0x8
#define AD916x_BIT_MSK_IRQ_SYSREFJITTER           0x10
#define AD916x_REG_IRQ_STATUS                     0x024 
#define AD916x_REG_ILS_CFG_STATUS                 0x030
#define AD916x_FLD_CFG_STATUS                     0x3F
#define AD916x_REG_SYNC_LMFC_DELAY_FRAME          0x031
#define AD916x_REG_SYNC_LMFC_DELAY0               0x032
#define AD916x_REG_SYNC_LMFC_DELAY1               0x033
#define AD916x_REG_SYNC_LMFC_ST0                  0x034
#define AD916x_FLD_SYNC_LMFC_LSB                  0xFF
#define AD916x_REG_SYNC_LMFC_ST1                  0x035
#define AD916x_FLD_SYNC_LMFC_MSB                  0xF
#define AD916x_REG_SYSREF_COUNT                   0x036
#define AD916x_REG_SYSREF_PHASE0                  0x037
#define AD916x_FLD_SYSREF_PHASE_LSB               0xFF
#define AD916x_REG_SYSREF_PHASE1                  0x038
#define AD916x_FLD_SYSREF_PHASE_MSB               0xF
#define AD916x_REG_SYSREF_JITTER_WIN              0x039
#define AD916x_FLD_SYSREF_JITTER_WIN              0x3F
#define AD916x_REG_SYNC_CTRL                      0x03A
#define AD916x_FLD_SYNC_MODE                      0x3
#define AD916x_REG_TX_ENABLE                      0x03F
#define AD916x_FLD_DATAPATH_POST                  0x80
#define AD916x_FLD_DATAPATH_PRE                   0x40
#define AD916x_FLD_TX_EN_NCO_RESET                0x8
#define AD916x_FLD_TX_EN_ZERO_DATA_DAC            0x4
#define AD916x_FLD_TX_EN_ZERO_DATA_PATH           0x2
#define AD916x_FLD_TX_EN_FULL_SCALE_CURR          0x1
#define AD916x_REG_ANA_DAC_BIAS_PD                0x040
#define AD916x_REG_ANA_FSC0                       0x041
#define AD916x_FLD_ANA_FSC_LSB                    0x3
#define AD916x_REG_ANA_FSC1                       0x042
#define AD916x_FLD_ANA_FSC_MSB                    0xFF
#define AD916x_REG_CLK_PHASE_TUNE                 0x07F
#define AD916x_FLD_CLK_PHASE_POL                  0x20
#define AD916x_FLD_CLK_PHASE                      0x1F
#define AD916x_REG_CLK_DUTY                       0x082
#define AD916x_FLD_CLK_DUTY_EN                    0x80
#define AD916x_FLD_CLK_DUTY_OFFSET_EN             0x40
#define AD916x_FLD_CLK_DUTY                       0x1F
#define AD916x_REG_CLK_CRS_CTRL                   0x083
#define AD916x_FLD_CLK_CRS_ADJ                    0xF
#define AD916x_FLD_CLK_CRS_EN                     0x80
#define AD916x_REG_PLL_REF_CLK_PD                 0x084
#define AD916x_FLD_PLL_REF_CLK_RATE               0x30
#define AD916x_REG_SYSREF_CTRL0                   0x088
#define AD916x_REG_SYSREF_CTRL1                   0x089
#define AD916x_REG_DLL_PD                         0x090
#define AD916x_REG_DLL_CTRL                       0x091
#define AD916x_REG_DLL_STATUS                     0x092
#define AD916x_FLD_DLL_LOCKED                     0x1
#define AD916x_REG_DLL_GB                         0x093
#define AD916x_REG_DLL_COARSE                     0x094
#define AD916x_REG_DLL_FINE                       0x095
#define AD916x_REG_DLL_PHASE                      0x096
#define AD916x_REG_DLL_BW                         0x097
#define AD916x_REG_DLL_READ                       0x098
#define AD916x_REG_DLL_COARSE_RB                  0x099
#define AD916x_REG_DLL_FINE_RB                    0x09A
#define AD916x_REG_DLL_PHASE_RB                   0x09B
#define AD916x_REG_DIG_CLK_INVERT                 0x09D
#define AD916x_REG_DLL_CLK_DEBUG                  0x0A0
#define AD916x_REG_LANE_INTPL_MODE                0x110
#define AD916x_FLD_INTPL_MODE                     0xF
#define AD916x_FLD_JESD_LANES                     0xF0
#define AD916x_JESD_LANES(x)                      (((x) << 4) & AD916x_FLD_JESD_LANES)
#define AD916x_REG_DATAPATH_CFG                   0x111
#define AD916x_FLD_FIR85_EN                       0x1
#define AD916x_FLD_FILT_BW90_EN                   0x10
#define AD916x_FLD_INVSINC_EN                     0x80
#define AD916x_REG_FTW_UPDATE                     0x113
#define AD916x_REG_FTW0                           0x114
#define AD916x_REG_FTW1                           0x115
#define AD916x_REG_FTW2                           0x116
#define AD916x_REG_FTW3                           0x117
#define AD916x_REG_FTW4                           0x118
#define AD916x_REG_FTW5                           0x119
#define AD916x_REG_PHASE_OFFSET0                  0x11C
#define AD916x_REG_PHASE_OFFSET1                  0x11D
#define AD916x_REG_ACC_MOD0                       0x124
#define AD916x_REG_ACC_MOD1                       0x125
#define AD916x_REG_ACC_MOD2                       0x126
#define AD916x_REG_ACC_MOD3                       0x127
#define AD916x_REG_ACC_MOD4                       0x128
#define AD916x_REG_ACC_MOD5                       0x129
#define AD916x_REG_ACC_DELTA0                     0x12A
#define AD916x_REG_ACC_DELTA1                     0x12B
#define AD916x_REG_ACC_DELTA2                     0x12C
#define AD916x_REG_ACC_DELTA3                     0x12D
#define AD916x_REG_ACC_DELTA4                     0x12E
#define AD916x_REG_ACC_DELTA5                     0x12F
#define AD916x_REG_PRBS                           0x14B
#define AD916x_REG_PRBS_ERROR_I                   0x14C
#define AD916x_REG_PRBS_ERROR_Q                   0x14D
#define AD916x_REG_TEST_DC_DATA1                  0x14E
#define AD916x_REG_TEST_DC_DATA0                  0x14F
#define AD916x_REG_DIG_TEST                       0x150
#define AD916x_REG_DECODE_CTRL                    0x151
#define AD916x_REG_DECODE_MODE                    0x152
#define AD916x_REG_SPI_STRENGTH                   0x1DF
#define AD916x_REG_MASTER_PD                      0x200
#define AD916x_FLD_PD_MASTER                      0x1
#define AD916x_REG_PHY_PD                         0x201
#define AD916x_REG_GENERIC_PD                     0x203
#define AD916x_REG_CDR_RESET                      0x206
#define AD916x_FLD_CDR_RESET                      0x1
#define AD916x_REG_CDR_OP_MODE_0                  0x230
#define AD916x_FLD_ENHALFRATE                     0x20
#define AD916x_FLD_DIVISION_RATE                  0x6
#define AD916x_REG_EQ_CONFIG_PHY_0_1              0x250
#define AD916x_REG_EQ_CONFIG_PHY_2_3              0x251
#define AD916x_REG_EQ_CONFIG_PHY_4_5              0x252
#define AD916x_REG_EQ_CONFIG_PHY_6_7              0x253
#define AD916x_REG_SYNTH_ENABLE_CTRL              0x280
#define AD916x_FLD_EN_CURRENTS                    0x2
#define AD916x_FLD_EN_SYNTH                       0x1
#define AD916x_REG_PLL_STATUS                     0x281
#define AD916x_REG_REF_CLK_DIVIDER_LDO            0x289
#define AD916x_FLD_SERDES_PLL_DIV_FCTR            0x3
#define AD916x_FLD_LDO_BYPASS_FILT                0x4
#define AD916x_REG_TERM_BLK1_CTRL0                0x2A7
#define AD916x_FLD_TUNE_CALTERM_A                 0x1
#define AD916x_REG_TERM_BLK1_CTRL1                0x2A8
#define AD916x_REG_TERM_BLK2_CTRL0                0x2AE
#define AD916x_FLD_TUNE_CALTERM_B                 0x1
#define AD916x_REG_TERM_BLK2_CTRL1                0x2AF
#define AD916x_REG_TERM_OFFSET_0                  0x2BB
#define AD916x_REG_TERM_OFFSET_1                  0x2BC
#define AD916x_REG_TERM_OFFSET_2                  0x2BD
#define AD916x_REG_TERM_OFFSET_3                  0x2BE
#define AD916x_REG_TERM_OFFSET_4                  0x2BF
#define AD916x_REG_TERM_OFFSET_5                  0x2C0
#define AD916x_REG_TERM_OFFSET_6                  0x2C1
#define AD916x_REG_TERM_OFFSET_7                  0x2C2
#define AD916x_REG_GEN_JRX_CTRL_0                 0x300
#define AD916x_REG_GEN_JRX_CTRL_1                 0x301
#define AD916x_FLD_SUBCLASS                       0x7
#define AD916x_REG_DYN_LINK_LATENCY_0             0x302
#define AD916x_FLD_DYN_LINK_LATENCY               0x1F
#define AD916x_REG_LMFC_DELAY_0                   0x304
#define AD916x_FLD_LMFC_DELAY                     0x1F
#define AD916x_REG_LMFC_VAR_0                     0x306
#define AD916x_FLD_LMFC_VAR                       0x1F
#define AD916x_REG_XBAR_LN_0_1                    0x308
#define AD916x_FLD_XBAR_LN_EVEN                   0x7
#define AD916x_FLD_XBAR_LN_ODD                    0x38
#define AD916x_REG_XBAR_LN_2_3                    0x309
#define AD916x_REG_XBAR_LN_4_5                    0x30A
#define AD916x_REG_XBAR_LN_6_7                    0x30B
#define AD916x_REG_FIFO_STATUS_0                  0x30C
#define AD916x_REG_FIFO_STATUS_1                  0x30D
#define AD916x_REG_FIFO_STATUS_2                  0x30E
#define AD916x_REG_SYNCB_GEN_0                    0x311
#define AD916x_REG_SYNCB_GEN_1                    0x312
#define AD916x_REG_SYNCB_GEN_3                    0x313
#define AD916x_REG_SPI_SYNC_CTRL                  0x314
#define AD916x_REG_PHY_PRBS_EN                    0x315
#define AD916x_REG_PHY_PRBS_CTRL                  0x316
#define AD916x_REG_PHY_PRBS_ERROR_THRESHOLD_LO    0x317
#define AD916x_REG_PHY_PRBS_ERROR_THRESHOLD_MID   0x318
#define AD916x_REG_PHY_PRBS_ERROR_THRESHOLD_HI    0x319
#define AD916x_REG_JESD_BIT_INVERT_CTRL           0x334
#define AD916x_REG_PHY_PRBS_ERRCNT_0              0x31A
#define AD916x_REG_PHY_PRBS_ERRCNT_1              0x31B
#define AD916x_REG_PHY_PRBS_ERRCNT_2              0x31C
#define AD916x_REG_PHY_PRBS_STAT                  0x31D
#define AD916x_REG_DID                            0x400
#define AD916x_REG_BID                            0x401
#define AD916x_REG_LID_O                          0x402
#define AD916x_REG_SCR                            0x403
#define AD916x_REG_F                              0x404
#define AD916x_REG_K                              0x405
#define AD916x_REG_M                              0x406
#define AD916x_REG_CS_n                           0x407
#define AD916x_REG_NP                             0x408
#define AD916x_REG_S                              0x409
#define AD916x_REG_hd_CF                          0x40A
#define AD916x_REG_RES_1                          0x40B
#define AD916x_REG_RES_2                          0x40C
#define AD916x_REG_CHECKSUM_0                     0x40D
#define AD916x_REG_COMPSUM_0                      0x40E
#define AD916x_REG_LID_1                          0x412
#define AD916x_REG_CHECKSUM_1                     0x415
#define AD916x_REG_COMPSUM_1                      0x416
#define AD916x_REG_LID_2                          0x41A
#define AD916x_REG_CHECKSUM_2                     0x41D
#define AD916x_REG_COMPSUM_2                      0x41E
#define AD916x_REG_LID_3                          0x422
#define AD916x_REG_CHECKSUM_3                     0x425
#define AD916x_REG_COMPSUM_3                      0x426
#define AD916x_REG_LID_4                          0x42A
#define AD916x_REG_CHECKSUM_4                     0x42D
#define AD916x_REG_COMPSUM_4                      0x42E
#define AD916x_REG_LID_5                          0x432
#define AD916x_REG_CHECKSUM_5                     0x435
#define AD916x_REG_COMPSUM_5                      0x436
#define AD916x_REG_LID_6                          0x43A
#define AD916x_REG_CHECKSUM_6                     0x43D
#define AD916x_REG_COMPSUM_6                      0x43E
#define AD916x_REG_LID_7                          0x442
#define AD916x_REG_CHECKSUM_7                     0x445
#define AD916x_REG_COMPSUM_7                      0x446
#define AD916x_REG_ILS_DID                        0x450
#define AD916x_REG_ILS_BID                        0x451
#define AD916x_REG_ILS_LID0                       0x452
#define AD916x_FLD_LID0                           0xF
#define AD916x_REG_ILS_SCR_L                      0x453
#define AD916x_FLD_SCR                            0x80
#define AD916x_FLD_L                              0x1F
#define AD916x_REG_ILS_F                          0x454
#define AD916x_REG_ILS_K                          0x455
#define AD916x_FLD_K                              0xF
#define AD916x_REG_ILS_M                          0x456
#define AD916x_REG_ILS_CS_N                       0x457
#define AD916x_FLD_N                              0xF
#define AD916x_REG_ILS_NP                         0x458
#define AD916x_FLD_NP                             0xF
#define AD916x_REG_ILS_S                          0x459
#define AD916x_FLD_S                              0xF
#define AD916x_FLD_JESDV                          0xE0
#define AD916x_REG_ILS_HD_CF                      0x45A
#define AD916x_FLD_HD                             0x80
#define AD916x_REG_ILS_RES_1                      0x45B
#define AD916x_REG_ILS_RES_2                      0x45C
#define AD916x_REG_ILS_CHECKSUM                   0x45D
#define AD916x_REG_LANE_DESKEW                    0x46C
#define AD916x_REG_BAD_DISPARITY                  0x46D
#define AD916x_REG_NOT_IN_TABLE                   0x46E
#define AD916x_REG_UNEXPECTED_KC                  0x46F
#define AD916x_REG_CODE_GRP_SYNC                  0x470
#define AD916x_REG_FRAME_SYNC                     0x471
#define AD916x_REG_GOOD_CHECKSUM                  0x472
#define AD916x_REG_INIT_LANE_SYNC                 0x473
#define AD916x_REG_JESD_CTRL0                     0x475
#define AD916x_FLD_DEFRAMER_RESET                 0x8
#define AD916x_REG_JESD_CTRL1                     0x476
#define AD916x_FLD_CGS_SEL                        0x4
#define AD916x_REG_JESD_CTRL2                     0x477
#define AD916x_REG_KVAL                           0x478
#define AD916x_REG_ERROR_THRES                    0x47C
#define AD916x_REG_SYNC_ASSERT_MASK               0x47D
#define AD916x_REG_LINK_STATUS0                   0x4B0
#define AD916x_REG_LINK_STATUS1                   0x4B1
#define AD916x_REG_LINK_STATUS2                   0x4B2
#define AD916x_REG_LINK_STATUS3                   0x4B3
#define AD916x_REG_LINK_STATUS4                   0x4B4
#define AD916x_REG_LINK_STATUS5                   0x4B5
#define AD916x_REG_LINK_STATUS6                   0x4B6
#define AD916x_REG_LINK_STATUS7                   0x4B7
#define AD916x_REG_JESD_IRQ_ENABLE_A              0x4B8
#define AD916x_REG_JESD_IRQ_ENABLE_B              0x4B9
#define AD916x_REG_JESD_IRQ_STATUS_A              0x4BA
#define AD916x_REG_JESD_IRQ_STATUS_B              0x4BB
#define AD916x_BIT_MSK_IRQ_BDE                    0x80
#define AD916x_BIT_MSK_IRQ_NIT                    0x40
#define AD916x_BIT_MSK_IRQ_UEK                    0x20
#define AD916x_BIT_MSK_IRQ_ILD                    0x10
#define AD916x_BIT_MSK_IRQ_ILS                    0x8
#define AD916x_BIT_MSK_IRQ_CKS                    0x4
#define AD916x_BIT_MSK_IRQ_FS                     0x2
#define AD916x_BIT_MSK_IRQ_CGS                    0x1
#define AD916x_BIT_MSK_IRQ_ILAS                   0x1
#define AD916x_REG_NVM_LOADER                     0x604
#define AD916x_FLD_NVM_BLR_DONE                   0x2
#define AD916x_REG_HOPF_CTRL                      0x800
#define AD916x_REG_HOPF_FTW1_0                    0x806
#define AD916x_REG_HOPF_FTW1_1                    0x807
#define AD916x_REG_HOPF_FTW1_2                    0x808
#define AD916x_REG_HOPF_FTW1_3                    0x809
#define AD916x_REG_HOPF_FTW2_0                    0x80A
#define AD916x_REG_HOPF_FTW2_1                    0x80B
#define AD916x_REG_HOPF_FTW2_2                    0x80C
#define AD916x_REG_HOPF_FTW2_3                    0x80D
#define AD916x_REG_HOPF_FTW3_0                    0x80E
#define AD916x_REG_HOPF_FTW3_1                    0x80F
#define AD916x_REG_HOPF_FTW3_2                    0x810
#define AD916x_REG_HOPF_FTW3_3                    0x811
#define AD916x_REG_HOPF_FTW4_0                    0x812
#define AD916x_REG_HOPF_FTW4_1                    0x813
#define AD916x_REG_HOPF_FTW4_2                    0x814
#define AD916x_REG_HOPF_FTW4_3                    0x815
#define AD916x_REG_HOPF_FTW5_0                    0x816
#define AD916x_REG_HOPF_FTW5_1                    0x817
#define AD916x_REG_HOPF_FTW5_2                    0x818
#define AD916x_REG_HOPF_FTW5_3                    0x819
#define AD916x_REG_HOPF_FTW6_0                    0x81A
#define AD916x_REG_HOPF_FTW6_1                    0x81B
#define AD916x_REG_HOPF_FTW6_2                    0x81C
#define AD916x_REG_HOPF_FTW6_3                    0x81D
#define AD916x_REG_HOPF_FTW7_0                    0x81E
#define AD916x_REG_HOPF_FTW7_1                    0x81F
#define AD916x_REG_HOPF_FTW7_2                    0x820
#define AD916x_REG_HOPF_FTW7_3                    0x821
#define AD916x_REG_HOPF_FTW8_0                    0x822
#define AD916x_REG_HOPF_FTW8_1                    0x823
#define AD916x_REG_HOPF_FTW8_2                    0x824
#define AD916x_REG_HOPF_FTW8_3                    0x825
#define AD916x_REG_HOPF_FTW9_0                    0x826
#define AD916x_REG_HOPF_FTW9_1                    0x827
#define AD916x_REG_HOPF_FTW9_2                    0x828
#define AD916x_REG_HOPF_FTW9_3                    0x829
#define AD916x_REG_HOPF_FTW10_0                   0x82A
#define AD916x_REG_HOPF_FTW10_1                   0x82B
#define AD916x_REG_HOPF_FTW10_2                   0x82C
#define AD916x_REG_HOPF_FTW10_3                   0x82D
#define AD916x_REG_HOPF_FTW11_0                   0x82E
#define AD916x_REG_HOPF_FTW11_1                   0x82F
#define AD916x_REG_HOPF_FTW11_2                   0x830
#define AD916x_REG_HOPF_FTW11_3                   0x831
#define AD916x_REG_HOPF_FTW12_0                   0x832
#define AD916x_REG_HOPF_FTW12_1                   0x833
#define AD916x_REG_HOPF_FTW12_2                   0x834
#define AD916x_REG_HOPF_FTW12_3                   0x835
#define AD916x_REG_HOPF_FTW13_0                   0x836
#define AD916x_REG_HOPF_FTW13_1                   0x837
#define AD916x_REG_HOPF_FTW13_2                   0x838
#define AD916x_REG_HOPF_FTW13_3                   0x839
#define AD916x_REG_HOPF_FTW14_0                   0x83A
#define AD916x_REG_HOPF_FTW14_1                   0x83B
#define AD916x_REG_HOPF_FTW14_2                   0x83C
#define AD916x_REG_HOPF_FTW14_3                   0x83D
#define AD916x_REG_HOPF_FTW15_0                   0x83E
#define AD916x_REG_HOPF_FTW15_1                   0x83F
#define AD916x_REG_HOPF_FTW15_2                   0x840
#define AD916x_REG_HOPF_FTW15_3                   0x841
#define AD916x_REG_HOPF_FTW16_0                   0x842
#define AD916x_REG_HOPF_FTW16_1                   0x843
#define AD916x_REG_HOPF_FTW16_2                   0x844
#define AD916x_REG_HOPF_FTW16_3                   0x845
#define AD916x_REG_HOPF_FTW17_0                   0x846
#define AD916x_REG_HOPF_FTW17_1                   0x847
#define AD916x_REG_HOPF_FTW17_2                   0x848
#define AD916x_REG_HOPF_FTW17_3                   0x849
#define AD916x_REG_HOPF_FTW18_0                   0x84A
#define AD916x_REG_HOPF_FTW18_1                   0x84B
#define AD916x_REG_HOPF_FTW18_2                   0x84C
#define AD916x_REG_HOPF_FTW18_3                   0x84D
#define AD916x_REG_HOPF_FTW19_0                   0x84E
#define AD916x_REG_HOPF_FTW19_1                   0x84F
#define AD916x_REG_HOPF_FTW19_2                   0x850
#define AD916x_REG_HOPF_FTW19_3                   0x851
#define AD916x_REG_HOPF_FTW20_0                   0x852
#define AD916x_REG_HOPF_FTW20_1                   0x853
#define AD916x_REG_HOPF_FTW20_2                   0x854
#define AD916x_REG_HOPF_FTW20_3                   0x855
#define AD916x_REG_HOPF_FTW21_0                   0x856
#define AD916x_REG_HOPF_FTW21_1                   0x857
#define AD916x_REG_HOPF_FTW21_2                   0x858
#define AD916x_REG_HOPF_FTW21_3                   0x859
#define AD916x_REG_HOPF_FTW22_0                   0x85A
#define AD916x_REG_HOPF_FTW22_1                   0x85B
#define AD916x_REG_HOPF_FTW22_2                   0x85C
#define AD916x_REG_HOPF_FTW22_3                   0x85D
#define AD916x_REG_HOPF_FTW23_0                   0x85E
#define AD916x_REG_HOPF_FTW23_1                   0x85F
#define AD916x_REG_HOPF_FTW23_2                   0x860
#define AD916x_REG_HOPF_FTW23_3                   0x861
#define AD916x_REG_HOPF_FTW24_0                   0x862
#define AD916x_REG_HOPF_FTW24_1                   0x863
#define AD916x_REG_HOPF_FTW24_2                   0x864
#define AD916x_REG_HOPF_FTW24_3                   0x865
#define AD916x_REG_HOPF_FTW25_0                   0x866
#define AD916x_REG_HOPF_FTW25_1                   0x867
#define AD916x_REG_HOPF_FTW25_2                   0x868
#define AD916x_REG_HOPF_FTW25_3                   0x869
#define AD916x_REG_HOPF_FTW26_0                   0x86A
#define AD916x_REG_HOPF_FTW26_1                   0x86B
#define AD916x_REG_HOPF_FTW26_2                   0x86C
#define AD916x_REG_HOPF_FTW26_3                   0x86D
#define AD916x_REG_HOPF_FTW27_0                   0x86E
#define AD916x_REG_HOPF_FTW27_1                   0x86F
#define AD916x_REG_HOPF_FTW27_2                   0x870
#define AD916x_REG_HOPF_FTW27_3                   0x871
#define AD916x_REG_HOPF_FTW28_0                   0x872
#define AD916x_REG_HOPF_FTW28_1                   0x873
#define AD916x_REG_HOPF_FTW28_2                   0x874
#define AD916x_REG_HOPF_FTW28_3                   0x875
#define AD916x_REG_HOPF_FTW29_0                   0x876
#define AD916x_REG_HOPF_FTW29_1                   0x877
#define AD916x_REG_HOPF_FTW29_2                   0x878
#define AD916x_REG_HOPF_FTW29_3                   0x879
#define AD916x_REG_HOPF_FTW30_0                   0x87A
#define AD916x_REG_HOPF_FTW30_1                   0x87B
#define AD916x_REG_HOPF_FTW30_2                   0x87C
#define AD916x_REG_HOPF_FTW30_3                   0x87D
#define AD916x_REG_HOPF_FTW31_0                   0x87E
#define AD916x_REG_HOPF_FTW31_1                   0x87F
#define AD916x_REG_HOPF_FTW31_2                   0x880
#define AD916x_REG_HOPF_FTW31_3                   0x881
#define AD916x_REG_HOPF_FTW(a,b)                  (0x806 + (a)*4+(b))
#define AD916x_REG_HOPF_FTWX_0(x)                 (0x806 + (x-1)*4)
#define AD916x_REG_HOPF_FTWX_1(x)                 (0x807 + (x-1)*4)
#define AD916x_REG_HOPF_FTWX_2(x)                 (0x808 + (x-1)*4)
#define AD916x_REG_HOPF_FTWX_3(x)                 (0x809 + (x-1)*4)

#define AD916x_HOPF_MODE_SHIFT 6
#define AD916x_HOPF_MODE_MASK 3
#define AD916x_HOPF_SEL_SHIFT 0
#define AD916x_HOPF_SEL_MASK 0x1F

#define AD916x_JESD_NOF_LANES 8

#endif /*__AD916x_REG_H__*/
