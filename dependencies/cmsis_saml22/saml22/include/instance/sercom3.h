/**
 * \file
 *
 * \brief Instance description for SERCOM3
 *
 * Copyright (c) 2016-2018 Microchip Technology Inc. and its subsidiaries.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Subject to your compliance with these terms, you may use Microchip
 * software and any derivatives exclusively with Microchip products.
 * It is your responsibility to comply with third party license terms applicable
 * to your use of third party software (including open source software) that
 * may accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES,
 * WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE,
 * INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY,
 * AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP BE
 * LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE
 * SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS BEEN ADVISED OF THE
 * POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY
 * RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
 * THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * \asf_license_stop
 *
 */

#ifndef _SAML22_SERCOM3_INSTANCE_
#define _SAML22_SERCOM3_INSTANCE_

/* ========== Register definition for SERCOM3 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_SERCOM3_I2CM_CTRLA     (0x42001000U) /**< \brief (SERCOM3) I2CM Control A */
#define REG_SERCOM3_I2CM_CTRLB     (0x42001004U) /**< \brief (SERCOM3) I2CM Control B */
#define REG_SERCOM3_I2CM_BAUD      (0x4200100CU) /**< \brief (SERCOM3) I2CM Baud Rate */
#define REG_SERCOM3_I2CM_INTENCLR  (0x42001014U) /**< \brief (SERCOM3) I2CM Interrupt Enable Clear */
#define REG_SERCOM3_I2CM_INTENSET  (0x42001016U) /**< \brief (SERCOM3) I2CM Interrupt Enable Set */
#define REG_SERCOM3_I2CM_INTFLAG   (0x42001018U) /**< \brief (SERCOM3) I2CM Interrupt Flag Status and Clear */
#define REG_SERCOM3_I2CM_STATUS    (0x4200101AU) /**< \brief (SERCOM3) I2CM Status */
#define REG_SERCOM3_I2CM_SYNCBUSY  (0x4200101CU) /**< \brief (SERCOM3) I2CM Synchronization Busy */
#define REG_SERCOM3_I2CM_ADDR      (0x42001024U) /**< \brief (SERCOM3) I2CM Address */
#define REG_SERCOM3_I2CM_DATA      (0x42001028U) /**< \brief (SERCOM3) I2CM Data */
#define REG_SERCOM3_I2CM_DBGCTRL   (0x42001030U) /**< \brief (SERCOM3) I2CM Debug Control */
#define REG_SERCOM3_I2CS_CTRLA     (0x42001000U) /**< \brief (SERCOM3) I2CS Control A */
#define REG_SERCOM3_I2CS_CTRLB     (0x42001004U) /**< \brief (SERCOM3) I2CS Control B */
#define REG_SERCOM3_I2CS_INTENCLR  (0x42001014U) /**< \brief (SERCOM3) I2CS Interrupt Enable Clear */
#define REG_SERCOM3_I2CS_INTENSET  (0x42001016U) /**< \brief (SERCOM3) I2CS Interrupt Enable Set */
#define REG_SERCOM3_I2CS_INTFLAG   (0x42001018U) /**< \brief (SERCOM3) I2CS Interrupt Flag Status and Clear */
#define REG_SERCOM3_I2CS_STATUS    (0x4200101AU) /**< \brief (SERCOM3) I2CS Status */
#define REG_SERCOM3_I2CS_SYNCBUSY  (0x4200101CU) /**< \brief (SERCOM3) I2CS Synchronization Busy */
#define REG_SERCOM3_I2CS_ADDR      (0x42001024U) /**< \brief (SERCOM3) I2CS Address */
#define REG_SERCOM3_I2CS_DATA      (0x42001028U) /**< \brief (SERCOM3) I2CS Data */
#define REG_SERCOM3_SPI_CTRLA      (0x42001000U) /**< \brief (SERCOM3) SPI Control A */
#define REG_SERCOM3_SPI_CTRLB      (0x42001004U) /**< \brief (SERCOM3) SPI Control B */
#define REG_SERCOM3_SPI_BAUD       (0x4200100CU) /**< \brief (SERCOM3) SPI Baud Rate */
#define REG_SERCOM3_SPI_INTENCLR   (0x42001014U) /**< \brief (SERCOM3) SPI Interrupt Enable Clear */
#define REG_SERCOM3_SPI_INTENSET   (0x42001016U) /**< \brief (SERCOM3) SPI Interrupt Enable Set */
#define REG_SERCOM3_SPI_INTFLAG    (0x42001018U) /**< \brief (SERCOM3) SPI Interrupt Flag Status and Clear */
#define REG_SERCOM3_SPI_STATUS     (0x4200101AU) /**< \brief (SERCOM3) SPI Status */
#define REG_SERCOM3_SPI_SYNCBUSY   (0x4200101CU) /**< \brief (SERCOM3) SPI Synchronization Busy */
#define REG_SERCOM3_SPI_ADDR       (0x42001024U) /**< \brief (SERCOM3) SPI Address */
#define REG_SERCOM3_SPI_DATA       (0x42001028U) /**< \brief (SERCOM3) SPI Data */
#define REG_SERCOM3_SPI_DBGCTRL    (0x42001030U) /**< \brief (SERCOM3) SPI Debug Control */
#define REG_SERCOM3_USART_CTRLA    (0x42001000U) /**< \brief (SERCOM3) USART Control A */
#define REG_SERCOM3_USART_CTRLB    (0x42001004U) /**< \brief (SERCOM3) USART Control B */
#define REG_SERCOM3_USART_CTRLC    (0x42001008U) /**< \brief (SERCOM3) USART Control C */
#define REG_SERCOM3_USART_BAUD     (0x4200100CU) /**< \brief (SERCOM3) USART Baud Rate */
#define REG_SERCOM3_USART_RXPL     (0x4200100EU) /**< \brief (SERCOM3) USART Receive Pulse Length */
#define REG_SERCOM3_USART_INTENCLR (0x42001014U) /**< \brief (SERCOM3) USART Interrupt Enable Clear */
#define REG_SERCOM3_USART_INTENSET (0x42001016U) /**< \brief (SERCOM3) USART Interrupt Enable Set */
#define REG_SERCOM3_USART_INTFLAG  (0x42001018U) /**< \brief (SERCOM3) USART Interrupt Flag Status and Clear */
#define REG_SERCOM3_USART_STATUS   (0x4200101AU) /**< \brief (SERCOM3) USART Status */
#define REG_SERCOM3_USART_SYNCBUSY (0x4200101CU) /**< \brief (SERCOM3) USART Synchronization Busy */
#define REG_SERCOM3_USART_RXERRCNT (0x42001020U) /**< \brief (SERCOM3) USART Receive Error Count */
#define REG_SERCOM3_USART_DATA     (0x42001028U) /**< \brief (SERCOM3) USART Data */
#define REG_SERCOM3_USART_DBGCTRL  (0x42001030U) /**< \brief (SERCOM3) USART Debug Control */
#else
#define REG_SERCOM3_I2CM_CTRLA     (*(RwReg  *)0x42001000U) /**< \brief (SERCOM3) I2CM Control A */
#define REG_SERCOM3_I2CM_CTRLB     (*(RwReg  *)0x42001004U) /**< \brief (SERCOM3) I2CM Control B */
#define REG_SERCOM3_I2CM_BAUD      (*(RwReg  *)0x4200100CU) /**< \brief (SERCOM3) I2CM Baud Rate */
#define REG_SERCOM3_I2CM_INTENCLR  (*(RwReg8 *)0x42001014U) /**< \brief (SERCOM3) I2CM Interrupt Enable Clear */
#define REG_SERCOM3_I2CM_INTENSET  (*(RwReg8 *)0x42001016U) /**< \brief (SERCOM3) I2CM Interrupt Enable Set */
#define REG_SERCOM3_I2CM_INTFLAG   (*(RwReg8 *)0x42001018U) /**< \brief (SERCOM3) I2CM Interrupt Flag Status and Clear */
#define REG_SERCOM3_I2CM_STATUS    (*(RwReg16*)0x4200101AU) /**< \brief (SERCOM3) I2CM Status */
#define REG_SERCOM3_I2CM_SYNCBUSY  (*(RoReg  *)0x4200101CU) /**< \brief (SERCOM3) I2CM Synchronization Busy */
#define REG_SERCOM3_I2CM_ADDR      (*(RwReg  *)0x42001024U) /**< \brief (SERCOM3) I2CM Address */
#define REG_SERCOM3_I2CM_DATA      (*(RwReg8 *)0x42001028U) /**< \brief (SERCOM3) I2CM Data */
#define REG_SERCOM3_I2CM_DBGCTRL   (*(RwReg8 *)0x42001030U) /**< \brief (SERCOM3) I2CM Debug Control */
#define REG_SERCOM3_I2CS_CTRLA     (*(RwReg  *)0x42001000U) /**< \brief (SERCOM3) I2CS Control A */
#define REG_SERCOM3_I2CS_CTRLB     (*(RwReg  *)0x42001004U) /**< \brief (SERCOM3) I2CS Control B */
#define REG_SERCOM3_I2CS_INTENCLR  (*(RwReg8 *)0x42001014U) /**< \brief (SERCOM3) I2CS Interrupt Enable Clear */
#define REG_SERCOM3_I2CS_INTENSET  (*(RwReg8 *)0x42001016U) /**< \brief (SERCOM3) I2CS Interrupt Enable Set */
#define REG_SERCOM3_I2CS_INTFLAG   (*(RwReg8 *)0x42001018U) /**< \brief (SERCOM3) I2CS Interrupt Flag Status and Clear */
#define REG_SERCOM3_I2CS_STATUS    (*(RwReg16*)0x4200101AU) /**< \brief (SERCOM3) I2CS Status */
#define REG_SERCOM3_I2CS_SYNCBUSY  (*(RoReg  *)0x4200101CU) /**< \brief (SERCOM3) I2CS Synchronization Busy */
#define REG_SERCOM3_I2CS_ADDR      (*(RwReg  *)0x42001024U) /**< \brief (SERCOM3) I2CS Address */
#define REG_SERCOM3_I2CS_DATA      (*(RwReg8 *)0x42001028U) /**< \brief (SERCOM3) I2CS Data */
#define REG_SERCOM3_SPI_CTRLA      (*(RwReg  *)0x42001000U) /**< \brief (SERCOM3) SPI Control A */
#define REG_SERCOM3_SPI_CTRLB      (*(RwReg  *)0x42001004U) /**< \brief (SERCOM3) SPI Control B */
#define REG_SERCOM3_SPI_BAUD       (*(RwReg8 *)0x4200100CU) /**< \brief (SERCOM3) SPI Baud Rate */
#define REG_SERCOM3_SPI_INTENCLR   (*(RwReg8 *)0x42001014U) /**< \brief (SERCOM3) SPI Interrupt Enable Clear */
#define REG_SERCOM3_SPI_INTENSET   (*(RwReg8 *)0x42001016U) /**< \brief (SERCOM3) SPI Interrupt Enable Set */
#define REG_SERCOM3_SPI_INTFLAG    (*(RwReg8 *)0x42001018U) /**< \brief (SERCOM3) SPI Interrupt Flag Status and Clear */
#define REG_SERCOM3_SPI_STATUS     (*(RwReg16*)0x4200101AU) /**< \brief (SERCOM3) SPI Status */
#define REG_SERCOM3_SPI_SYNCBUSY   (*(RoReg  *)0x4200101CU) /**< \brief (SERCOM3) SPI Synchronization Busy */
#define REG_SERCOM3_SPI_ADDR       (*(RwReg  *)0x42001024U) /**< \brief (SERCOM3) SPI Address */
#define REG_SERCOM3_SPI_DATA       (*(RwReg  *)0x42001028U) /**< \brief (SERCOM3) SPI Data */
#define REG_SERCOM3_SPI_DBGCTRL    (*(RwReg8 *)0x42001030U) /**< \brief (SERCOM3) SPI Debug Control */
#define REG_SERCOM3_USART_CTRLA    (*(RwReg  *)0x42001000U) /**< \brief (SERCOM3) USART Control A */
#define REG_SERCOM3_USART_CTRLB    (*(RwReg  *)0x42001004U) /**< \brief (SERCOM3) USART Control B */
#define REG_SERCOM3_USART_CTRLC    (*(RwReg  *)0x42001008U) /**< \brief (SERCOM3) USART Control C */
#define REG_SERCOM3_USART_BAUD     (*(RwReg16*)0x4200100CU) /**< \brief (SERCOM3) USART Baud Rate */
#define REG_SERCOM3_USART_RXPL     (*(RwReg8 *)0x4200100EU) /**< \brief (SERCOM3) USART Receive Pulse Length */
#define REG_SERCOM3_USART_INTENCLR (*(RwReg8 *)0x42001014U) /**< \brief (SERCOM3) USART Interrupt Enable Clear */
#define REG_SERCOM3_USART_INTENSET (*(RwReg8 *)0x42001016U) /**< \brief (SERCOM3) USART Interrupt Enable Set */
#define REG_SERCOM3_USART_INTFLAG  (*(RwReg8 *)0x42001018U) /**< \brief (SERCOM3) USART Interrupt Flag Status and Clear */
#define REG_SERCOM3_USART_STATUS   (*(RwReg16*)0x4200101AU) /**< \brief (SERCOM3) USART Status */
#define REG_SERCOM3_USART_SYNCBUSY (*(RoReg  *)0x4200101CU) /**< \brief (SERCOM3) USART Synchronization Busy */
#define REG_SERCOM3_USART_RXERRCNT (*(RoReg8 *)0x42001020U) /**< \brief (SERCOM3) USART Receive Error Count */
#define REG_SERCOM3_USART_DATA     (*(RwReg16*)0x42001028U) /**< \brief (SERCOM3) USART Data */
#define REG_SERCOM3_USART_DBGCTRL  (*(RwReg8 *)0x42001030U) /**< \brief (SERCOM3) USART Debug Control */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for SERCOM3 peripheral ========== */
#define SERCOM3_DMAC_ID_RX          8        // Index of DMA RX trigger
#define SERCOM3_DMAC_ID_TX          9        // Index of DMA TX trigger
#define SERCOM3_GCLK_ID_CORE        19      
#define SERCOM3_GCLK_ID_SLOW        15      
#define SERCOM3_INT_MSB             6       
#define SERCOM3_PMSB                3       
#define SERCOM3_SPI                 1        // SPI mode implemented?
#define SERCOM3_TWIM                1        // TWI Master mode implemented?
#define SERCOM3_TWIS                1        // TWI Slave mode implemented?
#define SERCOM3_TWI_HSMODE          0        // TWI HighSpeed mode implemented?
#define SERCOM3_USART               1        // USART mode implemented?
#define SERCOM3_USART_ISO7816       1        // USART ISO7816 mode implemented?
#define SERCOM3_USART_LIN_MASTER    0        // USART LIN Master mode implemented?
#define SERCOM3_USART_RS485         1        // USART RS485 mode implemented?

#endif /* _SAML22_SERCOM3_INSTANCE_ */
