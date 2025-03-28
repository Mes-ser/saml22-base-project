/**
 * \file
 *
 * \brief Instance description for EIC
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

#ifndef _SAML22_EIC_INSTANCE_
#define _SAML22_EIC_INSTANCE_

/* ========== Register definition for EIC peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_EIC_CTRLA              (0x40002800U) /**< \brief (EIC) Control */
#define REG_EIC_NMICTRL            (0x40002801U) /**< \brief (EIC) NMI Control */
#define REG_EIC_NMIFLAG            (0x40002802U) /**< \brief (EIC) NMI Interrupt Flag */
#define REG_EIC_SYNCBUSY           (0x40002804U) /**< \brief (EIC) Syncbusy register */
#define REG_EIC_EVCTRL             (0x40002808U) /**< \brief (EIC) Event Control */
#define REG_EIC_INTENCLR           (0x4000280CU) /**< \brief (EIC) Interrupt Enable Clear */
#define REG_EIC_INTENSET           (0x40002810U) /**< \brief (EIC) Interrupt Enable Set */
#define REG_EIC_INTFLAG            (0x40002814U) /**< \brief (EIC) Interrupt Flag Status and Clear */
#define REG_EIC_ASYNCH             (0x40002818U) /**< \brief (EIC) EIC Asynchronous edge Detection Enable */
#define REG_EIC_CONFIG0            (0x4000281CU) /**< \brief (EIC) Configuration 0 */
#define REG_EIC_CONFIG1            (0x40002820U) /**< \brief (EIC) Configuration 1 */
#else
#define REG_EIC_CTRLA              (*(RwReg8 *)0x40002800U) /**< \brief (EIC) Control */
#define REG_EIC_NMICTRL            (*(RwReg8 *)0x40002801U) /**< \brief (EIC) NMI Control */
#define REG_EIC_NMIFLAG            (*(RwReg16*)0x40002802U) /**< \brief (EIC) NMI Interrupt Flag */
#define REG_EIC_SYNCBUSY           (*(RoReg  *)0x40002804U) /**< \brief (EIC) Syncbusy register */
#define REG_EIC_EVCTRL             (*(RwReg  *)0x40002808U) /**< \brief (EIC) Event Control */
#define REG_EIC_INTENCLR           (*(RwReg  *)0x4000280CU) /**< \brief (EIC) Interrupt Enable Clear */
#define REG_EIC_INTENSET           (*(RwReg  *)0x40002810U) /**< \brief (EIC) Interrupt Enable Set */
#define REG_EIC_INTFLAG            (*(RwReg  *)0x40002814U) /**< \brief (EIC) Interrupt Flag Status and Clear */
#define REG_EIC_ASYNCH             (*(RwReg  *)0x40002818U) /**< \brief (EIC) EIC Asynchronous edge Detection Enable */
#define REG_EIC_CONFIG0            (*(RwReg  *)0x4000281CU) /**< \brief (EIC) Configuration 0 */
#define REG_EIC_CONFIG1            (*(RwReg  *)0x40002820U) /**< \brief (EIC) Configuration 1 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for EIC peripheral ========== */
#define EIC_EXTINT_NUM              16      
#define EIC_GCLK_ID                 3       
#define EIC_NUMBER_OF_CONFIG_REGS   2       
#define EIC_NUMBER_OF_INTERRUPTS    16      

#endif /* _SAML22_EIC_INSTANCE_ */
