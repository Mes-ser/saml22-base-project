/**
 * \file
 *
 * \brief Instance description for TC3
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

#ifndef _SAML22_TC3_INSTANCE_
#define _SAML22_TC3_INSTANCE_

/* ========== Register definition for TC3 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TC3_CTRLA              (0x42002C00U) /**< \brief (TC3) Control A */
#define REG_TC3_CTRLBCLR           (0x42002C04U) /**< \brief (TC3) Control B Clear */
#define REG_TC3_CTRLBSET           (0x42002C05U) /**< \brief (TC3) Control B Set */
#define REG_TC3_EVCTRL             (0x42002C06U) /**< \brief (TC3) Event Control */
#define REG_TC3_INTENCLR           (0x42002C08U) /**< \brief (TC3) Interrupt Enable Clear */
#define REG_TC3_INTENSET           (0x42002C09U) /**< \brief (TC3) Interrupt Enable Set */
#define REG_TC3_INTFLAG            (0x42002C0AU) /**< \brief (TC3) Interrupt Flag Status and Clear */
#define REG_TC3_STATUS             (0x42002C0BU) /**< \brief (TC3) Status */
#define REG_TC3_WAVE               (0x42002C0CU) /**< \brief (TC3) Waveform Generation Control */
#define REG_TC3_DRVCTRL            (0x42002C0DU) /**< \brief (TC3) Control C */
#define REG_TC3_DBGCTRL            (0x42002C0FU) /**< \brief (TC3) Debug Control */
#define REG_TC3_SYNCBUSY           (0x42002C10U) /**< \brief (TC3) Synchronization Status */
#define REG_TC3_COUNT16_COUNT      (0x42002C14U) /**< \brief (TC3) COUNT16 Count */
#define REG_TC3_COUNT16_CC0        (0x42002C1CU) /**< \brief (TC3) COUNT16 Compare and Capture 0 */
#define REG_TC3_COUNT16_CC1        (0x42002C1EU) /**< \brief (TC3) COUNT16 Compare and Capture 1 */
#define REG_TC3_COUNT16_CCBUF0     (0x42002C30U) /**< \brief (TC3) COUNT16 Compare and Capture Buffer 0 */
#define REG_TC3_COUNT16_CCBUF1     (0x42002C32U) /**< \brief (TC3) COUNT16 Compare and Capture Buffer 1 */
#define REG_TC3_COUNT32_COUNT      (0x42002C14U) /**< \brief (TC3) COUNT32 Count */
#define REG_TC3_COUNT32_CC0        (0x42002C1CU) /**< \brief (TC3) COUNT32 Compare and Capture 0 */
#define REG_TC3_COUNT32_CC1        (0x42002C20U) /**< \brief (TC3) COUNT32 Compare and Capture 1 */
#define REG_TC3_COUNT32_CCBUF0     (0x42002C30U) /**< \brief (TC3) COUNT32 Compare and Capture Buffer 0 */
#define REG_TC3_COUNT32_CCBUF1     (0x42002C34U) /**< \brief (TC3) COUNT32 Compare and Capture Buffer 1 */
#define REG_TC3_COUNT8_COUNT       (0x42002C14U) /**< \brief (TC3) COUNT8 Count */
#define REG_TC3_COUNT8_PER         (0x42002C1BU) /**< \brief (TC3) COUNT8 Period */
#define REG_TC3_COUNT8_CC0         (0x42002C1CU) /**< \brief (TC3) COUNT8 Compare and Capture 0 */
#define REG_TC3_COUNT8_CC1         (0x42002C1DU) /**< \brief (TC3) COUNT8 Compare and Capture 1 */
#define REG_TC3_COUNT8_PERBUF      (0x42002C2FU) /**< \brief (TC3) COUNT8 Period Buffer */
#define REG_TC3_COUNT8_CCBUF0      (0x42002C30U) /**< \brief (TC3) COUNT8 Compare and Capture Buffer 0 */
#define REG_TC3_COUNT8_CCBUF1      (0x42002C31U) /**< \brief (TC3) COUNT8 Compare and Capture Buffer 1 */
#else
#define REG_TC3_CTRLA              (*(RwReg  *)0x42002C00U) /**< \brief (TC3) Control A */
#define REG_TC3_CTRLBCLR           (*(RwReg8 *)0x42002C04U) /**< \brief (TC3) Control B Clear */
#define REG_TC3_CTRLBSET           (*(RwReg8 *)0x42002C05U) /**< \brief (TC3) Control B Set */
#define REG_TC3_EVCTRL             (*(RwReg16*)0x42002C06U) /**< \brief (TC3) Event Control */
#define REG_TC3_INTENCLR           (*(RwReg8 *)0x42002C08U) /**< \brief (TC3) Interrupt Enable Clear */
#define REG_TC3_INTENSET           (*(RwReg8 *)0x42002C09U) /**< \brief (TC3) Interrupt Enable Set */
#define REG_TC3_INTFLAG            (*(RwReg8 *)0x42002C0AU) /**< \brief (TC3) Interrupt Flag Status and Clear */
#define REG_TC3_STATUS             (*(RwReg8 *)0x42002C0BU) /**< \brief (TC3) Status */
#define REG_TC3_WAVE               (*(RwReg8 *)0x42002C0CU) /**< \brief (TC3) Waveform Generation Control */
#define REG_TC3_DRVCTRL            (*(RwReg8 *)0x42002C0DU) /**< \brief (TC3) Control C */
#define REG_TC3_DBGCTRL            (*(RwReg8 *)0x42002C0FU) /**< \brief (TC3) Debug Control */
#define REG_TC3_SYNCBUSY           (*(RoReg  *)0x42002C10U) /**< \brief (TC3) Synchronization Status */
#define REG_TC3_COUNT16_COUNT      (*(RwReg16*)0x42002C14U) /**< \brief (TC3) COUNT16 Count */
#define REG_TC3_COUNT16_CC0        (*(RwReg16*)0x42002C1CU) /**< \brief (TC3) COUNT16 Compare and Capture 0 */
#define REG_TC3_COUNT16_CC1        (*(RwReg16*)0x42002C1EU) /**< \brief (TC3) COUNT16 Compare and Capture 1 */
#define REG_TC3_COUNT16_CCBUF0     (*(RwReg16*)0x42002C30U) /**< \brief (TC3) COUNT16 Compare and Capture Buffer 0 */
#define REG_TC3_COUNT16_CCBUF1     (*(RwReg16*)0x42002C32U) /**< \brief (TC3) COUNT16 Compare and Capture Buffer 1 */
#define REG_TC3_COUNT32_COUNT      (*(RwReg  *)0x42002C14U) /**< \brief (TC3) COUNT32 Count */
#define REG_TC3_COUNT32_CC0        (*(RwReg  *)0x42002C1CU) /**< \brief (TC3) COUNT32 Compare and Capture 0 */
#define REG_TC3_COUNT32_CC1        (*(RwReg  *)0x42002C20U) /**< \brief (TC3) COUNT32 Compare and Capture 1 */
#define REG_TC3_COUNT32_CCBUF0     (*(RwReg  *)0x42002C30U) /**< \brief (TC3) COUNT32 Compare and Capture Buffer 0 */
#define REG_TC3_COUNT32_CCBUF1     (*(RwReg  *)0x42002C34U) /**< \brief (TC3) COUNT32 Compare and Capture Buffer 1 */
#define REG_TC3_COUNT8_COUNT       (*(RwReg8 *)0x42002C14U) /**< \brief (TC3) COUNT8 Count */
#define REG_TC3_COUNT8_PER         (*(RwReg8 *)0x42002C1BU) /**< \brief (TC3) COUNT8 Period */
#define REG_TC3_COUNT8_CC0         (*(RwReg8 *)0x42002C1CU) /**< \brief (TC3) COUNT8 Compare and Capture 0 */
#define REG_TC3_COUNT8_CC1         (*(RwReg8 *)0x42002C1DU) /**< \brief (TC3) COUNT8 Compare and Capture 1 */
#define REG_TC3_COUNT8_PERBUF      (*(RwReg8 *)0x42002C2FU) /**< \brief (TC3) COUNT8 Period Buffer */
#define REG_TC3_COUNT8_CCBUF0      (*(RwReg8 *)0x42002C30U) /**< \brief (TC3) COUNT8 Compare and Capture Buffer 0 */
#define REG_TC3_COUNT8_CCBUF1      (*(RwReg8 *)0x42002C31U) /**< \brief (TC3) COUNT8 Compare and Capture Buffer 1 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for TC3 peripheral ========== */
#define TC3_CC_NUM                  2       
#define TC3_DMAC_ID_MC_0            29
#define TC3_DMAC_ID_MC_1            30
#define TC3_DMAC_ID_MC_LSB          29
#define TC3_DMAC_ID_MC_MSB          30
#define TC3_DMAC_ID_MC_SIZE         2
#define TC3_DMAC_ID_OVF             28       // Indexes of DMA Overflow trigger
#define TC3_EXT                     0       
#define TC3_GCLK_ID                 24      
#define TC3_MASTER                  0       
#define TC3_OW_NUM                  2       

#endif /* _SAML22_TC3_INSTANCE_ */
