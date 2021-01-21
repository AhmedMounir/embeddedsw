/******************************************************************************
* Copyright (c) 2020 - 2021 Xilinx, Inc. All rights reserved.
* SPDX-License-Identifier: MIT
******************************************************************************/

/*****************************************************************************/
/**
* @file xbir_i2c.c
*
* This file contains I2C related code.
*
*
* <pre>
* MODIFICATION HISTORY:
*
* Ver   Who    Date      Changes
* ----- ---- ---------- -------------------------------------------------------
* 1.00  bsv   07/02/20   First release
*
* </pre>
*
******************************************************************************/


/***************************** Include Files *********************************/
#include "xbir_i2c.h"
#include "xstatus.h"

#if defined(XPAR_XIICPS_NUM_INSTANCES)

/************************** Constant Definitions *****************************/
/*
 * The following constant defines the address of the IIC Slave device on the
 * IIC bus. Note that since the address is only 7 bits, this constant is the
 * address divided by 2.
 */
#define XBIR_IIC_SCLK_RATE		(100000U)

/**************************** Type Definitions *******************************/

/***************** Macros (Inline Functions) Definitions *********************/
#if (XPAR_XIICPS_NUM_INSTANCES == 2U)
#define XBIR_I2C_EEPROM_INDEX	(1U)
#else
#define XBIR_I2C_EEPROM_INDEX	(0U)
#endif

/************************** Function Prototypes ******************************/

/************************** Variable Definitions *****************************/
static XIicPs IicInstance = {0U};	/* The instance of the IIC device. */

/************************** Function Definitions *****************************/

/*****************************************************************************/
/**
 * @brief
 * This function reads data from the IIC serial EEPROM into a specified buffer.
 *
 * @param	BufferPtr 	Pointer to the data buffer to be filled
 * @param	ByteCount 	Number of bytes in the buffer to be read
 * @param	EepromAddr 	IIC address of the EEPROM
 *
 * @return	XST_SUCCESS on successful read of EEPROM
 *		Error code on failure
 *
 ******************************************************************************/
int Xbir_IicEepromReadData(u8 *BufferPtr, u16 ByteCount, u8 EepromAddr)
{
	int Status = XST_FAILURE;
	/* Eeprom Page size is 32 bytes and hence 2 bytes for array */
	u8 WriteBuffer[2U] = {0U};

	Status = XIicPs_MasterSendPolled(&IicInstance, WriteBuffer,
		sizeof(WriteBuffer), EepromAddr);
	if (Status != XST_SUCCESS) {
		goto END;
	}

	/*
	 * Wait until bus is idle to start another transfer.
	 */
	while (XIicPs_BusIsBusy(&IicInstance)) {
		;
	}

	/* Receive the Data */
	Status = XIicPs_MasterRecvPolled(&IicInstance, BufferPtr,
		ByteCount, EepromAddr);
	if (Status != XST_SUCCESS) {
		Status = XBIR_IIC_MASTER_RECV_POLLED_FAILED;
		goto END;
	}

	/* Wait until bus is idle to start another transfer */
	while (XIicPs_BusIsBusy(&IicInstance)) {
		;
	}

END:
	return Status;
}
#endif

/*****************************************************************************/
/**
 * This function perform the initial configuration for the IIC Device.
 *
 * @param	None.
 *
 * @return	XST_SUCCESS on successful intialization
 * 		Error code on failure
 *
 ****************************************************************************/
int Xbir_IicInit (void)
{
	int Status = XST_FAILURE;

#if XPAR_XIICPS_NUM_INSTANCES
	XIicPs_Config *ConfigPtr;	/* Pointer to configuration data */

	/* Initialize the IIC driver so that it is ready to use */
	ConfigPtr = XIicPs_LookupConfig(XBIR_I2C_EEPROM_INDEX);
	if (ConfigPtr == NULL) {
		Status = XBIR_IIC_LKP_CONFIG_FAILED;
		goto END;
	}

	Status = XIicPs_CfgInitialize(&IicInstance, ConfigPtr,
			ConfigPtr->BaseAddress);
	if (Status != XST_SUCCESS) {
		Status = XBIR_IIC_CONFIG_INIT_FAILED;
		goto END;
	}

	/* Set the IIC serial clock rate */
	Status = XIicPs_SetSClk(&IicInstance, XBIR_IIC_SCLK_RATE);
	if (Status != XST_SUCCESS) {
		Status = XBIR_IIC_SET_SCLK_FAILED;
		goto END;
	}

END:
#else
	Status = XST_SUCCESS;
#endif
	return Status;
}