/******************************************************************************
* Copyright (c) 2020 Xilinx, Inc.  All rights reserved.
* SPDX-License-Identifier: MIT
******************************************************************************/


#ifndef XPM_DEBUG_H_
#define XPM_DEBUG_H_

#include "xpm_common.h"

#ifdef __cplusplus
extern "C" {
#endif

/*********************** Power domain specific Errors ***********************/
/************************** (0x3000) - (0x30FF) ******************************/
/* Invalid power domain ID error */
#define XPM_INT_ERR_INVALID_PWR_DOMAIN		0x3000U
/* Error during power up */
#define XPM_INT_ERR_PWR_STATE_ON_EVENT		0x3001U
/* Error during power down */
#define XPM_INT_ERR_PWR_STATE_OFF_EVENT		0x3002U
/* Invalid state */
#define XPM_INT_ERR_INVALID_STATE		0x3003U
/* Error during domain isolation enable/disable */
#define XPM_INT_ERR_DOMAIN_ISO			0x3004U
/* Invalid power state */
#define XPM_INT_ERR_INVALID_PWR_STATE		0x3005U
/* Invalid function ID */
#define XPM_INT_ERR_INVALID_FUNC		0x3006U
/* Power domain state is OFF */
#define XPM_INT_ERR_PWR_DOMAIN_OFF		0x3007U

/*********************** Generic House Cleaning Errors ***********************/
/*************************** (0x3100) - (0x31FF) *****************************/
/* Error during power domain init */
#define XPM_INT_ERR_POWER_DOMAIN_INIT		0x3100U
/* Invalid base address */
#define XPM_INT_ERR_INVALID_BASEADDR		0x3101U
/* Power supply state does not match */
#define XPM_INT_ERR_POWER_SUPPLY		0x3102U
/* Error during apply Ams trim */
#define XPM_INT_ERR_AMS_TRIM			0x3103U
/* Error during pre BISR requirement */
#define XPM_INT_ERR_PRE_BISR_REQ		0x3104U
/* Scan clear done timeout */
#define XPM_INT_ERR_SCAN_CLEAR_TIMEOUT		0x3105U
/* Scan clear pass timeout */
#define XPM_INT_ERR_SCAN_PASS_TIMEOUT		0x3106U
/* LBIST done timeout */
#define XPM_INT_ERR_LBIST_DONE_TIMEOUT		0x3107U
/* Error during BISR repair */
#define XPM_INT_ERR_BISR_REPAIR			0x3108U
/* Mem clear done timeout */
#define XPM_INT_ERR_MEM_CLEAR_DONE_TIMEOUT	0x3109U
/* Mem clear pass timeout */
#define XPM_INT_ERR_MEM_CLEAR_PASS_TIMEOUT	0x310AU
/* MBIST done timeout */
#define XPM_INT_ERR_MBIST_DONE_TIMEOUT		0x310BU
/* MBIST not done proper */
#define XPM_INT_ERR_MBIST_GOOD			0x310CU
/* MBIST GO bit not set */
#define XPM_INT_ERR_MBIST_GO			0x310DU
/* Error during power domain init and house clean*/
#define XPM_INT_ERR_DOMAIN_INIT_AND_HC		0x310DU
/* Invalid trim type */
#define XPM_INT_ERR_INVALID_TRIM_TYPE		0x310EU
/* Error during self test */
#define XPM_INT_ERR_SELF_TEST			0x310FU
/* MEM clear not passed */
#define XPM_INT_ERR_MEM_CLEAR_PASS		0x3110U
/* MBIST pass timeout error */
#define XPM_INT_ERR_MBIST_PASS			0x3111U
/* Error during MBIST */
#define XPM_INT_ERR_MBIST			0x3112U
/* Error during scan clear trigger */
#define XPM_INT_ERR_SCAN_CLEAR_TRIGGER		0x3113U
/* Scan clear pass timeout */
#define XPM_INT_ERR_SCAN_CLEAR_PASS		0x3114U
/* Scan clear trigger is unset */
#define XPM_INT_ERR_SCAN_CLEAR_TRIGGER_UNSET	0x3115U
/* Error during MEM clear enable */
#define XPM_INT_ERR_MEM_CLEAR_EN		0x3116U
/* Error during MBIST reset */
#define XPM_INT_ERR_MBIST_RESET			0x3117U
/* Error during BIST reset */
#define XPM_INT_ERR_BIST_RESET			0x3118U
/* Error during MEM clear trigger */
#define XPM_INT_ERR_MEM_CLEAR_TRIGGER		0x3119U
/* Error during MBIST reset release */
#define XPM_INT_ERR_MBIST_RESET_RELEASE		0x311AU
/* Error during BIST reset release */
#define XPM_INT_ERR_BIST_RESET_RELEASE		0x311BU
/* MEM clear trigger is unset*/
#define XPM_INT_ERR_MEM_CLEAR_TRIGGER_UNSET	0x311CU
/* Error during init start function */
#define XPM_INT_ERR_FUNC_INIT_START		0x311DU
/* Error during init finish function */
#define XPM_INT_ERR_FUNC_INIT_FINISH		0x311EU
/* Error during init scan clear function */
#define XPM_INT_ERR_FUNC_SCAN_CLEAR		0x311FU
/* Error during init BISR function */
#define XPM_INT_ERR_FUNC_BISR			0x3120U
/* Error during init LBIST function */
#define XPM_INT_ERR_FUNC_LBIST			0x3121U
/* Error during init MEM init function */
#define XPM_INT_ERR_FUNC_MEM_INIT		0x3122U
/* Error during init MBIST clear function */
#define XPM_INT_ERR_FUNC_MBIST_CLEAR		0x3123U
/* Error during init house clean function */
#define XPM_INT_ERR_FUNC_HOUSECLEAN_PL		0x3124U
/* Error during init house clean complete function */
#define XPM_INT_ERR_FUNC_HOUSECLEAN_COMPLETE	0x3125U
/* Error during init XPPU control function */
#define XPM_INT_ERR_FUNC_XPPU_CTRL		0x3126U
/* Error during init XMPU control function */
#define XPM_INT_ERR_FUNC_XMPU_CTRL		0x3127U

/************************** LPD specific Errors ******************************/
/************************** (0x3200) - (0x32FF) ******************************/
/* Error during PMC-LPD DFX Isolation enable/disable */
#define XPM_INT_ERR_PMC_LPD_DFX_ISO		0x3200U
/* Error during PMC-LPD Isolation enable/disable */
#define XPM_INT_ERR_PMC_LPD_ISO			0x3201U
/* Error during LPD-SOC Isolation enable/disable */
#define XPM_INT_ERR_LPD_SOC_ISO			0x3202U
/* Error during PS POR reset assert/release */
#define XPM_INT_ERR_PS_POR			0x3203U
/* Error during PS SRST reset assert/release */
#define XPM_INT_ERR_PS_SRST			0x3204U
/* Error during XRAM BISR repair */
#define XPM_INT_ERR_XRAM_BISR_REPAIR		0x3205U
/* Error during XRAM MBIST */
#define XPM_INT_ERR_XRAM_MBIST			0x3206U
/* Error during LPD-PL test Isolation enable/disable */
#define XPM_INT_ERR_LPD_PL_TEST_ISO		0x3207U
/* Error during LPD-PL Isolation enable/disable */
#define XPM_INT_ERR_LPD_PL_ISO			0x3208U
/* Error during LPD-CPM Isolation enable/disable */
#define XPM_INT_ERR_LPD_CPM_ISO			0x3209U

/************************* Device specific Errors ****************************/
/************************** (0x3300) - (0x33FF) ******************************/
/* Invalid device ID */
#define XPM_INT_ERR_INVALID_DEVICE		0x3300U
/* Error during device lookup configuration */
#define XPM_INT_ERR_DEVICE_LOOKUP		0x3301U
/* Error during configuration initialization */
#define XPM_INT_ERR_CFG_INIT			0x3302U
/* Error during request PL device */
#define XPM_INT_ERR_REQ_PL_DEVICE		0x3303U
/* Error during request ME device */
#define XPM_INT_ERR_REQ_ME_DEVICE		0x3304U
/* Error during device init */
#define XPM_INT_ERR_DEVICE_INIT			0x3305U
/* Error during Add requirement of device*/
#define XPM_INT_ERR_ADD_REQUIREMENT		0x3306U
/* Error during add clock */
#define XPM_INT_ERR_ADD_CLK			0x3307U
/* Error during add reset node */
#define XPM_INT_ERR_ADD_RST			0x3308U
/* Error during set device node */
#define XPM_INT_ERR_SET_DEV_NODE		0x3309U
/* Error during set PL device */
#define XPM_INT_ERR_SET_PL_DEV			0x330AU
/* Error during set mem region */
#define XPM_INT_ERR_SET_MEM_REG_DEV		0x330BU
/* Error during get device permission */
#define XPM_INT_ERR_GET_DEVICE_PERMISSION	0x330CU
/* Subsystem has no permission to that device */
#define XPM_INT_ERR_DEVICE_PERMISSION		0x330DU
/* Shared resource has no permission to access */
#define XPM_INT_ERR_SHARED_RESOURCE		0x330EU

/************************* Reset specific Errors *****************************/
/************************** (0x3400) - (0x34FF) ******************************/
/* Invalid Reset ID */
#define XPM_INT_ERR_INVALID_RST			0x3400U
/* Invalid reset state */
#define XPM_INT_ERR_RST_STATE			0x3401U
/* Error during reset release */
#define XPM_INT_ERR_RST_RELEASE			0x3402U
/* Error during reset assert */
#define XPM_INT_ERR_RST_ASSERT			0x3403U

/************************** FPD specific Errors ******************************/
/************************** (0x3500) - (0x35FF) ******************************/
/* Error during FPD power on reset release/assert */
#define XPM_INT_ERR_FPD_POR			0x3500U
/* Error during FPD-SOC Isolation disable/enable */
#define XPM_INT_ERR_FPD_SOC_ISO			0x3501U
/* Error during SRST FPD reset release/assert */
#define XPM_INT_ERR_SRST_FPD			0x3502U
/* Error during FPD-PL Isolation disable/enable */
#define XPM_INT_ERR_FPD_PL_ISO			0x3503U
/* Error during FPD-PL test Isolation disable/enable */
#define XPM_INT_ERR_FPD_PL_TEST_ISO		0x3504U

/************************* Miscellaneous Errors ******************************/
/************************** (0x3600) - (0x36FF) ******************************/
/* Error during IPI send */
#define XPM_INT_ERR_IPI_SEND			0x3600U
/* Error during get IPI status */
#define XPM_INT_ERR_IPI_STATUS			0x3601U
/* PSMFW is not present */
#define XPM_INT_ERR_PSMFW_NOT_PRESENT		0x3602U
/* Invalid parameter passed to function */
#define XPM_INT_ERR_INVALID_PARAM		0x3603U
/* Invalid address */
#define XPM_INT_ERR_INVALID_ADDR		0x3604U
/* Error during reload image */
#define XPM_INT_ERR_RELOAD_IMAGE		0x3605U
/* Invalid processor */
#define XPM_INT_ERR_INVALID_PROC		0x3606U
/* Invalid NODE ID */
#define XPM_INT_ERR_INVALID_NODE		0x3607U
/* Invalid NODE index */
#define XPM_INT_ERR_INVALID_NODE_IDX		0x3608U
/* Invalid arguments */
#define XPM_INT_ERR_INVALID_ARGS		0x3609U
/* No feature supported */
#define XPM_INT_ERR_NO_FEATURE			0x360AU
/* Invalid subclass */
#define XPM_INT_ERR_INVALID_SUBCLASS		0x360BU
/* Buffer too small */
#define XPM_INT_ERR_BUFFER_TOO_SMALL		0x360CU

/************************** PLD specific Errors ******************************/
/************************** (0x3700) - (0x37FF) ******************************/
/* Error during GTY BISR repair */
#define XPM_INT_ERR_GTY_BISR_REPAIR		0x3700U
/* Error during GTM BISR repair */
#define XPM_INT_ERR_GTM_BISR_REPAIR		0x3701U
/* Error during GTYP BISR repair */
#define XPM_INT_ERR_GTYP_BISR_REPAIR		0x3702U
/* Error during DMAC BISR repair */
#define XPM_INT_ERR_DCMAC_BISR_REPAIR		0x3703U
/* Error during ILKN BISR repair */
#define XPM_INT_ERR_ILKN_BISR_REPAIR		0x3704U
/* Error during MRMAC BISR repair */
#define XPM_INT_ERR_MRMAC_BISR_REPAIR		0x3705U
/* Error during BRAM BISR repair */
#define XPM_INT_ERR_BRAM_BISR_REPAIR		0x3706U
/* Error during URAM BISR repair */
#define XPM_INT_ERR_URAM_BISR_REPAIR		0x3707U
/* Error during PL-SOC isolation enable/disable */
#define XPM_INT_ERR_PL_SOC_ISO			0x3708U
/* Error during PL-SOC-NPI isolation enable/disable */
#define XPM_INT_ERR_PMC_SOC_NPI_ISO		0x3709U
/* Error during PL house clean */
#define XPM_INT_ERR_PL_HC			0x370AU
/* Error during CFU initialization */
#define XPM_INT_ERR_CFU_INIT			0x370BU
/* Error during GTY house clean */
#define XPM_INT_ERR_GTY_HC			0x370CU
/* Error during VCCAUX-VCCRAM isolation enable/disable */
#define XPM_INT_ERR_VCCAUX_VCCRAM_ISO		0x370DU
/* Error during PL-POR reset assert/release */
#define XPM_INT_ERR_PL_POR			0x370EU
/* PL power status timeout */
#define XPM_INT_ERR_PL_STATUS_TIMEOUT		0x370FU
/* Error during PL SRST reset assert/release */
#define XPM_INT_ERR_PL_SRST			0x3710U
/* Error during CFRAME initialization */
#define XPM_INT_ERR_CFRAME_INIT			0x3711U
/* Error during PMC-PL-CFRAME isolation enable/disable */
#define XPM_INT_ERR_PMC_PL_CFRAME_ISO		0x3712U
/* Error during SDFEC BISR repair */
#define XPM_INT_ERR_SDFEC_BISR_REPAIR		0x3713U
/* Error during VCCRAM-SOC isolation enable/disable */
#define XPM_INT_ERR_VCCRAM_SOC_ISO		0x3714U
/* CFU not ready error */
#define XPM_INT_ERR_CFU_NOT_READY		0x3715U

/************************** NPD specific Errors ******************************/
/************************** (0x3800) - (0x38FF) ******************************/
/* Error during NOC POR assert/release*/
#define XPM_INT_ERR_NOC_POR			0x3800U
/* DDRMC power status error */
#define XPM_INT_ERR_NOC_DDRMC_STATUS		0x3801U
/* DDR MEM clear done timeout */
#define XPM_INT_ERR_DDR_MEM_CLEAR_DONE		0x3802U
/* DDR MEM clear pass timeout */
#define XPM_INT_ERR_DDR_MEM_CLEAR_PASS		0x3803U
/* Error during NIDB BISR repair */
#define XPM_INT_ERR_NIDB_BISR_REPAIR		0x3804U
/* Error during PMC-SOC isolation enable/disable */
#define XPM_INT_ERR_PMC_SOC_ISO			0x3805U

/************************* Clock specific errors *****************************/
/************************** (0x3900) - (0x39FF) ******************************/
/* Error during clock enable */
#define XPM_INT_ERR_CLK_ENABLE			0x3900U
/* Max clock parents error */
#define XPM_INT_ERR_MAX_CLK_PARENTS		0x3901U
/* Error during clock init */
#define XPM_INT_ERR_CLK_INIT			0x3902U
/* Topology nodes greater than max number of nodes */
#define XPM_INT_ERR_CLK_TOPOLOGY_MAX_NUM_NODES	0x3903U
/* Invalid clock type */
#define XPM_INT_ERR_INVALID_CLK_TYPE		0x3904U
/* Invalid clock parent */
#define XPM_INT_ERR_INVALID_CLK_PARENT		0x3905U
/* Read only clock */
#define XPM_INT_ERR_READ_ONLY_CLK		0x3906U
/* PLL permission error as PLLs are shared */
#define XPM_INT_ERR_PLL_PERMISSION		0x3907U


/************************** CPM specific Errors ******************************/
/************************** (0x4000) - (0x40FF) ******************************/
/* Error during LPD-CPM DFX Isolation enable/disable */
#define XPM_INT_ERR_LPD_CPM_DFX_ISO		0x4000U
/* Error during LPD-CPM5 DFX Isolation enable/disable */
#define XPM_INT_ERR_LPD_CPM5_DFX_ISO		0x4001U
/* Error during CPM5 BISR repair*/
#define XPM_INT_ERR_CPM5_BISR_REPAIR		0x4002U
/* Error during CPM5 GTYP BISR repair */
#define XPM_INT_ERR_CPM5_GTYP_BISR_REPAIR	0x4003U
/* Error during PL-CPM-PCIEA0 Isolation enable/disable */
#define XPM_INT_ERR_PL_CPM_PCIEA0_ISO		0x4004U
/* Error during PL-CPM-PCIEA1 Isolation enable/disable */
#define XPM_INT_ERR_PL_CPM_PCIEA1_ISO		0x4005U
/* Error during PL_CPM_RST_CPI0 Isolation enable/disable */
#define XPM_INT_ERR_PL_CPM_RST_CPI0_ISO		0x4006U
/* Error during PL_CPM_RST_CPI1 Isolation enable/disable */
#define XPM_INT_ERR_PL_CPM_RST_CPI1_ISO		0x4007U

/************************** AIE specific Errors ******************************/
/************************** (0x4100) - (0x41FF) ******************************/
/* Timeout during AIE core status check */
#define XPM_INT_ERR_AIE_CORE_STATUS_TIMEOUT	0x4100U
/* Error during program core */
#define XPM_INT_ERR_PRGRM_CORE			0x4101U
/* AIE program complete error */
#define XPM_INT_ERR_AIE_PCOMPLETE		0x4102U
/* Error during ODISABLE_0 release */
#define XPM_INT_ERR_ODISABLE_0_RELEASE		0x4103U
/* Error during ODISABLE_1 release */
#define XPM_INT_ERR_ODISABLE_1_RELEASE		0x4104U
/* Gate register is unset */
#define XPM_INT_ERR_GATEREG_UNSET		0x4105U
/* Error during MEA BISR repair */
#define XPM_INT_ERR_MEA_BISR_REPAIR		0x4106U
/* Error during MEB BISR repair */
#define XPM_INT_ERR_MEB_BISR_REPAIR		0x4107U
/* Error during MEC BISR repair */
#define XPM_INT_ERR_MEC_BISR_REPAIR		0x4108U
/* Error in ARRAY reset */
#define XPM_INT_ERR_ARRAY_RESET			0x4109U
/* Error during ARRAY reset release */
#define XPM_INT_ERR_ARRAY_RESET_RELEASE		0x410AU

/************************** PMC specific Errors ******************************/
/************************** (0x4200) - (0x42FF) ******************************/
/* Error during PMC-PL Isolation enable/disable */
#define XPM_INT_ERR_PMC_PL_ISO			0x4200U
/* Error during PMC-PL test Isolation enable/disable */
#define XPM_INT_ERR_PMC_PL_TEST_ISO		0x4201U
/* Error during VCCAUX Isolation enable/disable */
#define XPM_INT_ERR_VCCAUX_ISO			0x4202U

/************************** BISR specific errors *****************************/
/************************** (0x4300) - (0x43FF) ******************************/
/* BISR unsupported ID */
#define XPM_INT_ERR_BISR_UNSUPPORTED_ID		0x4300U
/* BISR done timeout */
#define XPM_INT_ERR_BISR_DONE_TIMEOUT		0x4301U
/* BISR PASS error */
#define XPM_INT_ERR_BISR_PASS			0x4302U
/* BISR trigger timeout */
#define XPM_INT_ERR_BISR_TRIGGER		0x4303U
/* Invalid BISR ID */
#define XPM_INT_ERR_BISR_INVALID_ID		0x4304U
/* Bad tag type */
#define XPM_INT_ERR_BAD_TAG_TYPE		0x4305U
/* Unknown tag ID */
#define XPM_INT_ERR_BISR_UNKN_TAG_ID		0x4306U

/*********************** Protection specific Errors **************************/
/************************** (0x4400) - (0x44FF) ******************************/
/* Error during protection init */
#define XPM_INT_ERR_PROT_INIT			0x4400U
/* Invalid region */
#define XPM_INT_ERR_INVALID_REGION		0x4401U
/* Error during setup region */
#define XPM_INT_ERR_SETUP_REGION		0x4402U
/* Error during XPPU configuration */
#define XPM_INT_ERR_XPPU_CONFIG			0x4403U
/* Error during XMPU configuration */
#define XPM_INT_ERR_XMPU_CONFIG			0x4404U
/* Error during XPPU Enable*/
#define XPM_INT_ERR_XPPU_EN			0x4405U
/* Error during XPPU disable */
#define XPM_INT_ERR_XPPU_DISABLE		0x4406U
/* Error during XMPU enable */
#define XPM_INT_ERR_XMPU_EN			0x4407U
/* Error during XMPU disable */
#define XPM_INT_ERR_XMPU_DISABLE		0x4408U

/************************* Proc specific Errors ******************************/
/************************** (0x4500) - (0x45FF) ******************************/
/* Invalid resume address */
#define XPM_INT_ERR_INVALID_RESUME_ADDR		0x4500U
/* Error during core init */
#define XPM_INT_ERR_CORE_INIT			0x4501U

#define XPm_PrintDbgErr(Status, DbgErr)			\
	do {						\
		if (XST_SUCCESS != Status) {		\
			PmErr("0x%x\r\n", DbgErr);	\
		}					\
	} while (0)					\

#endif /* XPM_DEBUG_H_ */
