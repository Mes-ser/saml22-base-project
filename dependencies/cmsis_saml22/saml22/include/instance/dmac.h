/**
 * \file
 *
 * \brief Instance description for DMAC
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

#ifndef _SAML22_DMAC_INSTANCE_
#define _SAML22_DMAC_INSTANCE_

/* ========== Register definition for DMAC peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_DMAC_CTRL              (0x41008000U) /**< \brief (DMAC) Control */
#define REG_DMAC_CRCCTRL           (0x41008002U) /**< \brief (DMAC) CRC Control */
#define REG_DMAC_CRCDATAIN         (0x41008004U) /**< \brief (DMAC) CRC Data Input */
#define REG_DMAC_CRCCHKSUM         (0x41008008U) /**< \brief (DMAC) CRC Checksum */
#define REG_DMAC_CRCSTATUS         (0x4100800CU) /**< \brief (DMAC) CRC Status */
#define REG_DMAC_DBGCTRL           (0x4100800DU) /**< \brief (DMAC) Debug Control */
#define REG_DMAC_QOSCTRL           (0x4100800EU) /**< \brief (DMAC) QOS Control */
#define REG_DMAC_SWTRIGCTRL        (0x41008010U) /**< \brief (DMAC) Software Trigger Control */
#define REG_DMAC_PRICTRL0          (0x41008014U) /**< \brief (DMAC) Priority Control 0 */
#define REG_DMAC_INTPEND           (0x41008020U) /**< \brief (DMAC) Interrupt Pending */
#define REG_DMAC_INTSTATUS         (0x41008024U) /**< \brief (DMAC) Interrupt Status */
#define REG_DMAC_BUSYCH            (0x41008028U) /**< \brief (DMAC) Busy Channels */
#define REG_DMAC_PENDCH            (0x4100802CU) /**< \brief (DMAC) Pending Channels */
#define REG_DMAC_ACTIVE            (0x41008030U) /**< \brief (DMAC) Active Channel and Levels */
#define REG_DMAC_BASEADDR          (0x41008034U) /**< \brief (DMAC) Descriptor Memory Section Base Address */
#define REG_DMAC_WRBADDR           (0x41008038U) /**< \brief (DMAC) Write-Back Memory Section Base Address */
#define REG_DMAC_CHID              (0x4100803FU) /**< \brief (DMAC) Channel ID */
#define REG_DMAC_CHCTRLA           (0x41008040U) /**< \brief (DMAC) Channel Control A */
#define REG_DMAC_CHCTRLB           (0x41008044U) /**< \brief (DMAC) Channel Control B */
#define REG_DMAC_CHINTENCLR        (0x4100804CU) /**< \brief (DMAC) Channel Interrupt Enable Clear */
#define REG_DMAC_CHINTENSET        (0x4100804DU) /**< \brief (DMAC) Channel Interrupt Enable Set */
#define REG_DMAC_CHINTFLAG         (0x4100804EU) /**< \brief (DMAC) Channel Interrupt Flag Status and Clear */
#define REG_DMAC_CHSTATUS          (0x4100804FU) /**< \brief (DMAC) Channel Status */
#else
#define REG_DMAC_CTRL              (*(RwReg16*)0x41008000U) /**< \brief (DMAC) Control */
#define REG_DMAC_CRCCTRL           (*(RwReg16*)0x41008002U) /**< \brief (DMAC) CRC Control */
#define REG_DMAC_CRCDATAIN         (*(RwReg  *)0x41008004U) /**< \brief (DMAC) CRC Data Input */
#define REG_DMAC_CRCCHKSUM         (*(RwReg  *)0x41008008U) /**< \brief (DMAC) CRC Checksum */
#define REG_DMAC_CRCSTATUS         (*(RwReg8 *)0x4100800CU) /**< \brief (DMAC) CRC Status */
#define REG_DMAC_DBGCTRL           (*(RwReg8 *)0x4100800DU) /**< \brief (DMAC) Debug Control */
#define REG_DMAC_QOSCTRL           (*(RwReg8 *)0x4100800EU) /**< \brief (DMAC) QOS Control */
#define REG_DMAC_SWTRIGCTRL        (*(RwReg  *)0x41008010U) /**< \brief (DMAC) Software Trigger Control */
#define REG_DMAC_PRICTRL0          (*(RwReg  *)0x41008014U) /**< \brief (DMAC) Priority Control 0 */
#define REG_DMAC_INTPEND           (*(RwReg16*)0x41008020U) /**< \brief (DMAC) Interrupt Pending */
#define REG_DMAC_INTSTATUS         (*(RoReg  *)0x41008024U) /**< \brief (DMAC) Interrupt Status */
#define REG_DMAC_BUSYCH            (*(RoReg  *)0x41008028U) /**< \brief (DMAC) Busy Channels */
#define REG_DMAC_PENDCH            (*(RoReg  *)0x4100802CU) /**< \brief (DMAC) Pending Channels */
#define REG_DMAC_ACTIVE            (*(RoReg  *)0x41008030U) /**< \brief (DMAC) Active Channel and Levels */
#define REG_DMAC_BASEADDR          (*(RwReg  *)0x41008034U) /**< \brief (DMAC) Descriptor Memory Section Base Address */
#define REG_DMAC_WRBADDR           (*(RwReg  *)0x41008038U) /**< \brief (DMAC) Write-Back Memory Section Base Address */
#define REG_DMAC_CHID              (*(RwReg8 *)0x4100803FU) /**< \brief (DMAC) Channel ID */
#define REG_DMAC_CHCTRLA           (*(RwReg8 *)0x41008040U) /**< \brief (DMAC) Channel Control A */
#define REG_DMAC_CHCTRLB           (*(RwReg  *)0x41008044U) /**< \brief (DMAC) Channel Control B */
#define REG_DMAC_CHINTENCLR        (*(RwReg8 *)0x4100804CU) /**< \brief (DMAC) Channel Interrupt Enable Clear */
#define REG_DMAC_CHINTENSET        (*(RwReg8 *)0x4100804DU) /**< \brief (DMAC) Channel Interrupt Enable Set */
#define REG_DMAC_CHINTFLAG         (*(RwReg8 *)0x4100804EU) /**< \brief (DMAC) Channel Interrupt Flag Status and Clear */
#define REG_DMAC_CHSTATUS          (*(RoReg8 *)0x4100804FU) /**< \brief (DMAC) Channel Status */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for DMAC peripheral ========== */
#define DMAC_CH_BITS                4        // Number of bits to select channel
#define DMAC_CH_NUM                 16       // Number of channels
#define DMAC_CLK_AHB_ID             3        // AHB clock index
#define DMAC_EVIN_NUM               4        // Number of input events
#define DMAC_EVOUT_NUM              4        // Number of output events
#define DMAC_LVL_BITS               2        // Number of bit to select level priority
#define DMAC_LVL_NUM                4        // Enable priority level number
#define DMAC_QOSCTRL_D_RESETVALUE   2        // QOS dmac ahb interface reset value
#define DMAC_QOSCTRL_F_RESETVALUE   2        // QOS dmac fetch interface reset value
#define DMAC_QOSCTRL_WRB_RESETVALUE 2        // QOS dmac write back interface reset value
#define DMAC_TRIG_BITS              6        // Number of bits to select trigger source
#define DMAC_TRIG_NUM               40       // Number of peripheral triggers

#endif /* _SAML22_DMAC_INSTANCE_ */
