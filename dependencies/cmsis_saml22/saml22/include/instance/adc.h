/**
 * \file
 *
 * \brief Instance description for ADC
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

#ifndef _SAML22_ADC_INSTANCE_
#define _SAML22_ADC_INSTANCE_

/* ========== Register definition for ADC peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_ADC_CTRLA              (0x42003000U) /**< \brief (ADC) Control A */
#define REG_ADC_CTRLB              (0x42003001U) /**< \brief (ADC) Control B */
#define REG_ADC_REFCTRL            (0x42003002U) /**< \brief (ADC) Reference Control */
#define REG_ADC_EVCTRL             (0x42003003U) /**< \brief (ADC) Event Control */
#define REG_ADC_INTENCLR           (0x42003004U) /**< \brief (ADC) Interrupt Enable Clear */
#define REG_ADC_INTENSET           (0x42003005U) /**< \brief (ADC) Interrupt Enable Set */
#define REG_ADC_INTFLAG            (0x42003006U) /**< \brief (ADC) Interrupt Flag Status and Clear */
#define REG_ADC_SEQSTATUS          (0x42003007U) /**< \brief (ADC) Sequence Status */
#define REG_ADC_INPUTCTRL          (0x42003008U) /**< \brief (ADC) Input Control */
#define REG_ADC_CTRLC              (0x4200300AU) /**< \brief (ADC) Control C */
#define REG_ADC_AVGCTRL            (0x4200300CU) /**< \brief (ADC) Average Control */
#define REG_ADC_SAMPCTRL           (0x4200300DU) /**< \brief (ADC) Sample Time Control */
#define REG_ADC_WINLT              (0x4200300EU) /**< \brief (ADC) Window Monitor Lower Threshold */
#define REG_ADC_WINUT              (0x42003010U) /**< \brief (ADC) Window Monitor Upper Threshold */
#define REG_ADC_GAINCORR           (0x42003012U) /**< \brief (ADC) Gain Correction */
#define REG_ADC_OFFSETCORR         (0x42003014U) /**< \brief (ADC) Offset Correction */
#define REG_ADC_SWTRIG             (0x42003018U) /**< \brief (ADC) Software Trigger */
#define REG_ADC_DBGCTRL            (0x4200301CU) /**< \brief (ADC) Debug Control */
#define REG_ADC_SYNCBUSY           (0x42003020U) /**< \brief (ADC) Synchronization Busy */
#define REG_ADC_RESULT             (0x42003024U) /**< \brief (ADC) Result */
#define REG_ADC_SEQCTRL            (0x42003028U) /**< \brief (ADC) Sequence Control */
#define REG_ADC_CALIB              (0x4200302CU) /**< \brief (ADC) Calibration */
#else
#define REG_ADC_CTRLA              (*(RwReg8 *)0x42003000U) /**< \brief (ADC) Control A */
#define REG_ADC_CTRLB              (*(RwReg8 *)0x42003001U) /**< \brief (ADC) Control B */
#define REG_ADC_REFCTRL            (*(RwReg8 *)0x42003002U) /**< \brief (ADC) Reference Control */
#define REG_ADC_EVCTRL             (*(RwReg8 *)0x42003003U) /**< \brief (ADC) Event Control */
#define REG_ADC_INTENCLR           (*(RwReg8 *)0x42003004U) /**< \brief (ADC) Interrupt Enable Clear */
#define REG_ADC_INTENSET           (*(RwReg8 *)0x42003005U) /**< \brief (ADC) Interrupt Enable Set */
#define REG_ADC_INTFLAG            (*(RwReg8 *)0x42003006U) /**< \brief (ADC) Interrupt Flag Status and Clear */
#define REG_ADC_SEQSTATUS          (*(RoReg8 *)0x42003007U) /**< \brief (ADC) Sequence Status */
#define REG_ADC_INPUTCTRL          (*(RwReg16*)0x42003008U) /**< \brief (ADC) Input Control */
#define REG_ADC_CTRLC              (*(RwReg16*)0x4200300AU) /**< \brief (ADC) Control C */
#define REG_ADC_AVGCTRL            (*(RwReg8 *)0x4200300CU) /**< \brief (ADC) Average Control */
#define REG_ADC_SAMPCTRL           (*(RwReg8 *)0x4200300DU) /**< \brief (ADC) Sample Time Control */
#define REG_ADC_WINLT              (*(RwReg16*)0x4200300EU) /**< \brief (ADC) Window Monitor Lower Threshold */
#define REG_ADC_WINUT              (*(RwReg16*)0x42003010U) /**< \brief (ADC) Window Monitor Upper Threshold */
#define REG_ADC_GAINCORR           (*(RwReg16*)0x42003012U) /**< \brief (ADC) Gain Correction */
#define REG_ADC_OFFSETCORR         (*(RwReg16*)0x42003014U) /**< \brief (ADC) Offset Correction */
#define REG_ADC_SWTRIG             (*(RwReg8 *)0x42003018U) /**< \brief (ADC) Software Trigger */
#define REG_ADC_DBGCTRL            (*(RwReg8 *)0x4200301CU) /**< \brief (ADC) Debug Control */
#define REG_ADC_SYNCBUSY           (*(RoReg16*)0x42003020U) /**< \brief (ADC) Synchronization Busy */
#define REG_ADC_RESULT             (*(RoReg16*)0x42003024U) /**< \brief (ADC) Result */
#define REG_ADC_SEQCTRL            (*(RwReg  *)0x42003028U) /**< \brief (ADC) Sequence Control */
#define REG_ADC_CALIB              (*(RwReg16*)0x4200302CU) /**< \brief (ADC) Calibration */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for ADC peripheral ========== */
#define ADC_DMAC_ID_RESRDY          31       // index of DMA RESRDY trigger
#define ADC_EXTCHANNEL_MSB          19       // Number of external channels
#define ADC_GCLK_ID                 25       // index of Generic Clock
#define ADC_INT_CH30                2        // Select OPAMP or CTAT on Channel 30
#define ADC_MASTER_SLAVE_MODE       0        // ADC Master/Slave Mode

#endif /* _SAML22_ADC_INSTANCE_ */
