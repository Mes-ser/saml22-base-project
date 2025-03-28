/**
 * \file
 *
 * \brief Header file for SAML22N18A
 *
 * Copyright (c) 2017-2018 Microchip Technology Inc. and its subsidiaries.
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

#ifndef _SAML22N18A_
#define _SAML22N18A_

/**
 * \ingroup SAML22_definitions
 * \addtogroup SAML22N18A_definitions SAML22N18A definitions
 * This file defines all structures and symbols for SAML22N18A:
 *   - registers and bitfields
 *   - peripheral base address
 *   - peripheral ID
 *   - PIO definitions
*/
/*@{*/

#ifdef __cplusplus
 extern "C" {
#endif

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#include <stdint.h>
#ifndef __cplusplus
typedef volatile const uint32_t RoReg;   /**< Read only 32-bit register (volatile const unsigned int) */
typedef volatile const uint16_t RoReg16; /**< Read only 16-bit register (volatile const unsigned int) */
typedef volatile const uint8_t  RoReg8;  /**< Read only  8-bit register (volatile const unsigned int) */
#else
typedef volatile       uint32_t RoReg;   /**< Read only 32-bit register (volatile const unsigned int) */
typedef volatile       uint16_t RoReg16; /**< Read only 16-bit register (volatile const unsigned int) */
typedef volatile       uint8_t  RoReg8;  /**< Read only  8-bit register (volatile const unsigned int) */
#endif
typedef volatile       uint32_t WoReg;   /**< Write only 32-bit register (volatile unsigned int) */
typedef volatile       uint16_t WoReg16; /**< Write only 16-bit register (volatile unsigned int) */
typedef volatile       uint8_t  WoReg8;  /**< Write only  8-bit register (volatile unsigned int) */
typedef volatile       uint32_t RwReg;   /**< Read-Write 32-bit register (volatile unsigned int) */
typedef volatile       uint16_t RwReg16; /**< Read-Write 16-bit register (volatile unsigned int) */
typedef volatile       uint8_t  RwReg8;  /**< Read-Write  8-bit register (volatile unsigned int) */
#define CAST(type, value) ((type *)(value))
#define REG_ACCESS(type, address) (*(type*)(address)) /**< C code: Register value */
#else
#define CAST(type, value) (value)
#define REG_ACCESS(type, address) (address) /**< Assembly code: Register address */
#endif

/* ************************************************************************** */
/**  CMSIS DEFINITIONS FOR SAML22N18A */
/* ************************************************************************** */
/** \defgroup SAML22N18A_cmsis CMSIS Definitions */
/*@{*/

/** Interrupt Number Definition */
typedef enum IRQn
{
  /******  Cortex-M0+ Processor Exceptions Numbers ******************************/
  NonMaskableInt_IRQn      = -14,/**<  2 Non Maskable Interrupt                 */
  HardFault_IRQn           = -13,/**<  3 Cortex-M0+ Hard Fault Interrupt        */
  SVCall_IRQn              = -5, /**< 11 Cortex-M0+ SV Call Interrupt           */
  PendSV_IRQn              = -2, /**< 14 Cortex-M0+ Pend SV Interrupt           */
  SysTick_IRQn             = -1, /**< 15 Cortex-M0+ System Tick Interrupt       */
  /******  SAML22N18A-specific Interrupt Numbers ***********************/
  SYSTEM_IRQn              =  0, /**<  0 SAML22N18A System Interrupts */
  WDT_IRQn                 =  1, /**<  1 SAML22N18A Watchdog Timer (WDT) */
  RTC_IRQn                 =  2, /**<  2 SAML22N18A Real-Time Counter (RTC) */
  EIC_IRQn                 =  3, /**<  3 SAML22N18A External Interrupt Controller (EIC) */
  FREQM_IRQn               =  4, /**<  4 SAML22N18A Frequency Meter (FREQM) */
  USB_IRQn                 =  5, /**<  5 SAML22N18A Universal Serial Bus (USB) */
  NVMCTRL_IRQn             =  6, /**<  6 SAML22N18A Non-Volatile Memory Controller (NVMCTRL) */
  DMAC_IRQn                =  7, /**<  7 SAML22N18A Direct Memory Access Controller (DMAC) */
  EVSYS_IRQn               =  8, /**<  8 SAML22N18A Event System Interface (EVSYS) */
  SERCOM0_IRQn             =  9, /**<  9 SAML22N18A Serial Communication Interface 0 (SERCOM0) */
  SERCOM1_IRQn             = 10, /**< 10 SAML22N18A Serial Communication Interface 1 (SERCOM1) */
  SERCOM2_IRQn             = 11, /**< 11 SAML22N18A Serial Communication Interface 2 (SERCOM2) */
  SERCOM3_IRQn             = 12, /**< 12 SAML22N18A Serial Communication Interface 3 (SERCOM3) */
  SERCOM4_IRQn             = 13, /**< 13 SAML22N18A Serial Communication Interface 4 (SERCOM4) */
  SERCOM5_IRQn             = 14, /**< 14 SAML22N18A Serial Communication Interface 5 (SERCOM5) */
  TCC0_IRQn                = 15, /**< 15 SAML22N18A Timer Counter Control (TCC0) */
  TC0_IRQn                 = 16, /**< 16 SAML22N18A Basic Timer Counter 0 (TC0) */
  TC1_IRQn                 = 17, /**< 17 SAML22N18A Basic Timer Counter 1 (TC1) */
  TC2_IRQn                 = 18, /**< 18 SAML22N18A Basic Timer Counter 2 (TC2) */
  TC3_IRQn                 = 19, /**< 19 SAML22N18A Basic Timer Counter 3 (TC3) */
  ADC_IRQn                 = 20, /**< 20 SAML22N18A Analog Digital Converter (ADC) */
  AC_IRQn                  = 21, /**< 21 SAML22N18A Analog Comparators (AC) */
  PTC_IRQn                 = 22, /**< 22 SAML22N18A Peripheral Touch Controller (PTC) */
  SLCD_IRQn                = 23, /**< 23 SAML22N18A Segment Liquid Crystal Display Controller (SLCD) */
  AES_IRQn                 = 24, /**< 24 SAML22N18A Advanced Encryption Standard (AES) */
  TRNG_IRQn                = 25, /**< 25 SAML22N18A True Random Generator (TRNG) */

  PERIPH_COUNT_IRQn        = 26  /**< Number of peripheral IDs */
} IRQn_Type;

typedef struct _DeviceVectors
{
  /* Stack pointer */
  void* pvStack;

  /* Cortex-M handlers */
  void* pfnReset_Handler;
  void* pfnNMI_Handler;
  void* pfnHardFault_Handler;
  void* pvReservedM12;
  void* pvReservedM11;
  void* pvReservedM10;
  void* pvReservedM9;
  void* pvReservedM8;
  void* pvReservedM7;
  void* pvReservedM6;
  void* pfnSVC_Handler;
  void* pvReservedM4;
  void* pvReservedM3;
  void* pfnPendSV_Handler;
  void* pfnSysTick_Handler;

  /* Peripheral handlers */
  void* pfnSYSTEM_Handler;                /*  0 Main Clock, 32k Oscillators Control, Oscillators Control, Peripheral Access Controller, Power Manager, Supply Controller, Trigger Allocator */
  void* pfnWDT_Handler;                   /*  1 Watchdog Timer */
  void* pfnRTC_Handler;                   /*  2 Real-Time Counter */
  void* pfnEIC_Handler;                   /*  3 External Interrupt Controller */
  void* pfnFREQM_Handler;                 /*  4 Frequency Meter */
  void* pfnUSB_Handler;                   /*  5 Universal Serial Bus */
  void* pfnNVMCTRL_Handler;               /*  6 Non-Volatile Memory Controller */
  void* pfnDMAC_Handler;                  /*  7 Direct Memory Access Controller */
  void* pfnEVSYS_Handler;                 /*  8 Event System Interface */
  void* pfnSERCOM0_Handler;               /*  9 Serial Communication Interface 0 */
  void* pfnSERCOM1_Handler;               /* 10 Serial Communication Interface 1 */
  void* pfnSERCOM2_Handler;               /* 11 Serial Communication Interface 2 */
  void* pfnSERCOM3_Handler;               /* 12 Serial Communication Interface 3 */
  void* pfnSERCOM4_Handler;               /* 13 Serial Communication Interface 4 */
  void* pfnSERCOM5_Handler;               /* 14 Serial Communication Interface 5 */
  void* pfnTCC0_Handler;                  /* 15 Timer Counter Control */
  void* pfnTC0_Handler;                   /* 16 Basic Timer Counter 0 */
  void* pfnTC1_Handler;                   /* 17 Basic Timer Counter 1 */
  void* pfnTC2_Handler;                   /* 18 Basic Timer Counter 2 */
  void* pfnTC3_Handler;                   /* 19 Basic Timer Counter 3 */
  void* pfnADC_Handler;                   /* 20 Analog Digital Converter */
  void* pfnAC_Handler;                    /* 21 Analog Comparators */
  void* pfnPTC_Handler;                   /* 22 Peripheral Touch Controller */
  void* pfnSLCD_Handler;                  /* 23 Segment Liquid Crystal Display Controller */
  void* pfnAES_Handler;                   /* 24 Advanced Encryption Standard */
  void* pfnTRNG_Handler;                  /* 25 True Random Generator */
} DeviceVectors;

/* Cortex-M0+ processor handlers */
void Reset_Handler               ( void );
void NMI_Handler                 ( void );
void HardFault_Handler           ( void );
void SVC_Handler                 ( void );
void PendSV_Handler              ( void );
void SysTick_Handler             ( void );

/* Peripherals handlers */
void SYSTEM_Handler              ( void );
void WDT_Handler                 ( void );
void RTC_Handler                 ( void );
void EIC_Handler                 ( void );
void FREQM_Handler               ( void );
void USB_Handler                 ( void );
void NVMCTRL_Handler             ( void );
void DMAC_Handler                ( void );
void EVSYS_Handler               ( void );
void SERCOM0_Handler             ( void );
void SERCOM1_Handler             ( void );
void SERCOM2_Handler             ( void );
void SERCOM3_Handler             ( void );
void SERCOM4_Handler             ( void );
void SERCOM5_Handler             ( void );
void TCC0_Handler                ( void );
void TC0_Handler                 ( void );
void TC1_Handler                 ( void );
void TC2_Handler                 ( void );
void TC3_Handler                 ( void );
void ADC_Handler                 ( void );
void AC_Handler                  ( void );
void PTC_Handler                 ( void );
void SLCD_Handler                ( void );
void AES_Handler                 ( void );
void TRNG_Handler                ( void );

/*
 * \brief Configuration of the Cortex-M0+ Processor and Core Peripherals
 */

#define LITTLE_ENDIAN          1
#define __CM0PLUS_REV          1         /*!< Core revision r0p1 */
#define __MPU_PRESENT          1         /*!< MPU present or not */
#define __NVIC_PRIO_BITS       2         /*!< Number of bits used for Priority Levels */
#define __VTOR_PRESENT         1         /*!< VTOR present or not */
#define __Vendor_SysTickConfig 0         /*!< Set to 1 if different SysTick Config is used */

/**
 * \brief CMSIS includes
 */

#include <core_cm0plus.h>
#if !defined DONT_USE_CMSIS_INIT
#include "system_saml22.h"
#endif /* DONT_USE_CMSIS_INIT */

/*@}*/

/* ************************************************************************** */
/**  SOFTWARE PERIPHERAL API DEFINITION FOR SAML22N18A */
/* ************************************************************************** */
/** \defgroup SAML22N18A_api Peripheral Software API */
/*@{*/

#include "component/ac.h"
#include "component/adc.h"
#include "component/aes.h"
#include "component/ccl.h"
#include "component/dmac.h"
#include "component/dsu.h"
#include "component/eic.h"
#include "component/evsys.h"
#include "component/freqm.h"
#include "component/gclk.h"
#include "component/mclk.h"
#include "component/mtb.h"
#include "component/nvmctrl.h"
#include "component/oscctrl.h"
#include "component/osc32kctrl.h"
#include "component/pac.h"
#include "component/pm.h"
#include "component/port.h"
#include "component/rstc.h"
#include "component/rtc.h"
#include "component/sercom.h"
#include "component/slcd.h"
#include "component/supc.h"
#include "component/tal.h"
#include "component/tc.h"
#include "component/tcc.h"
#include "component/trng.h"
#include "component/usb.h"
#include "component/wdt.h"
/*@}*/

/* ************************************************************************** */
/**  REGISTERS ACCESS DEFINITIONS FOR SAML22N18A */
/* ************************************************************************** */
/** \defgroup SAML22N18A_reg Registers Access Definitions */
/*@{*/

#include "instance/ac.h"
#include "instance/adc.h"
#include "instance/aes.h"
#include "instance/ccl.h"
#include "instance/dmac.h"
#include "instance/dsu.h"
#include "instance/eic.h"
#include "instance/evsys.h"
#include "instance/freqm.h"
#include "instance/gclk.h"
#include "instance/mclk.h"
#include "instance/mtb.h"
#include "instance/nvmctrl.h"
#include "instance/oscctrl.h"
#include "instance/osc32kctrl.h"
#include "instance/pac.h"
#include "instance/pm.h"
#include "instance/port.h"
#include "instance/rstc.h"
#include "instance/rtc.h"
#include "instance/sercom0.h"
#include "instance/sercom1.h"
#include "instance/sercom2.h"
#include "instance/sercom3.h"
#include "instance/sercom4.h"
#include "instance/sercom5.h"
#include "instance/slcd.h"
#include "instance/supc.h"
#include "instance/tal.h"
#include "instance/tc0.h"
#include "instance/tc1.h"
#include "instance/tc2.h"
#include "instance/tc3.h"
#include "instance/tcc0.h"
#include "instance/trng.h"
#include "instance/usb.h"
#include "instance/wdt.h"
/*@}*/

/* ************************************************************************** */
/**  PERIPHERAL ID DEFINITIONS FOR SAML22N18A */
/* ************************************************************************** */
/** \defgroup SAML22N18A_id Peripheral Ids Definitions */
/*@{*/

// Peripheral instances on HPB0 bridge
#define ID_PAC            0 /**< \brief Peripheral Access Controller (PAC) */
#define ID_PM             1 /**< \brief Power Manager (PM) */
#define ID_MCLK           2 /**< \brief Main Clock (MCLK) */
#define ID_RSTC           3 /**< \brief Reset Controller (RSTC) */
#define ID_OSCCTRL        4 /**< \brief Oscillators Control (OSCCTRL) */
#define ID_OSC32KCTRL     5 /**< \brief 32k Oscillators Control (OSC32KCTRL) */
#define ID_SUPC           6 /**< \brief Supply Controller (SUPC) */
#define ID_GCLK           7 /**< \brief Generic Clock Generator (GCLK) */
#define ID_WDT            8 /**< \brief Watchdog Timer (WDT) */
#define ID_RTC            9 /**< \brief Real-Time Counter (RTC) */
#define ID_EIC           10 /**< \brief External Interrupt Controller (EIC) */
#define ID_FREQM         11 /**< \brief Frequency Meter (FREQM) */
#define ID_TAL           12 /**< \brief Trigger Allocator (TAL) */

// Peripheral instances on HPB1 bridge
#define ID_USB           32 /**< \brief Universal Serial Bus (USB) */
#define ID_DSU           33 /**< \brief Device Service Unit (DSU) */
#define ID_NVMCTRL       34 /**< \brief Non-Volatile Memory Controller (NVMCTRL) */
#define ID_PORT          35 /**< \brief Port Module (PORT) */
#define ID_DMAC          36 /**< \brief Direct Memory Access Controller (DMAC) */
#define ID_MTB           37 /**< \brief Cortex-M0+ Micro-Trace Buffer (MTB) */

// Peripheral instances on HPB2 bridge
#define ID_EVSYS         64 /**< \brief Event System Interface (EVSYS) */
#define ID_SERCOM0       65 /**< \brief Serial Communication Interface 0 (SERCOM0) */
#define ID_SERCOM1       66 /**< \brief Serial Communication Interface 1 (SERCOM1) */
#define ID_SERCOM2       67 /**< \brief Serial Communication Interface 2 (SERCOM2) */
#define ID_SERCOM3       68 /**< \brief Serial Communication Interface 3 (SERCOM3) */
#define ID_SERCOM4       69 /**< \brief Serial Communication Interface 4 (SERCOM4) */
#define ID_SERCOM5       70 /**< \brief Serial Communication Interface 5 (SERCOM5) */
#define ID_TCC0          71 /**< \brief Timer Counter Control (TCC0) */
#define ID_TC0           72 /**< \brief Basic Timer Counter 0 (TC0) */
#define ID_TC1           73 /**< \brief Basic Timer Counter 1 (TC1) */
#define ID_TC2           74 /**< \brief Basic Timer Counter 2 (TC2) */
#define ID_TC3           75 /**< \brief Basic Timer Counter 3 (TC3) */
#define ID_ADC           76 /**< \brief Analog Digital Converter (ADC) */
#define ID_AC            77 /**< \brief Analog Comparators (AC) */
#define ID_PTC           78 /**< \brief Peripheral Touch Controller (PTC) */
#define ID_SLCD          79 /**< \brief Segment Liquid Crystal Display Controller (SLCD) */
#define ID_AES           80 /**< \brief Advanced Encryption Standard (AES) */
#define ID_TRNG          81 /**< \brief True Random Generator (TRNG) */
#define ID_CCL           82 /**< \brief Configurable Custom Logic (CCL) */

#define ID_PERIPH_COUNT  83 /**< \brief Max number of peripheral IDs */
/*@}*/

/* ************************************************************************** */
/**  BASE ADDRESS DEFINITIONS FOR SAML22N18A */
/* ************************************************************************** */
/** \defgroup SAML22N18A_base Peripheral Base Address Definitions */
/*@{*/

#if defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)
#define AC                            (0x42003400UL) /**< \brief (AC) APB Base Address */
#define ADC                           (0x42003000UL) /**< \brief (ADC) APB Base Address */
#define AES                           (0x42004000UL) /**< \brief (AES) APB Base Address */
#define CCL                           (0x42004800UL) /**< \brief (CCL) APB Base Address */
#define DMAC                          (0x41008000UL) /**< \brief (DMAC) APB Base Address */
#define DSU                           (0x41002000UL) /**< \brief (DSU) APB Base Address */
#define EIC                           (0x40002800UL) /**< \brief (EIC) APB Base Address */
#define EVSYS                         (0x42000000UL) /**< \brief (EVSYS) APB Base Address */
#define FREQM                         (0x40002C00UL) /**< \brief (FREQM) APB Base Address */
#define GCLK                          (0x40001C00UL) /**< \brief (GCLK) APB Base Address */
#define MCLK                          (0x40000800UL) /**< \brief (MCLK) APB Base Address */
#define MTB                           (0x4100A000UL) /**< \brief (MTB) APB Base Address */
#define NVMCTRL                       (0x41004000UL) /**< \brief (NVMCTRL) APB Base Address */
#define NVMCTRL_CAL                   (0x00800000UL) /**< \brief (NVMCTRL) CAL Base Address */
#define NVMCTRL_LOCKBIT               (0x00802000UL) /**< \brief (NVMCTRL) LOCKBIT Base Address */
#define NVMCTRL_OTP1                  (0x00806000UL) /**< \brief (NVMCTRL) OTP1 Base Address */
#define NVMCTRL_OTP2                  (0x00806008UL) /**< \brief (NVMCTRL) OTP2 Base Address */
#define NVMCTRL_OTP3                  (0x00806010UL) /**< \brief (NVMCTRL) OTP3 Base Address */
#define NVMCTRL_OTP4                  (0x00806018UL) /**< \brief (NVMCTRL) OTP4 Base Address */
#define NVMCTRL_OTP5                  (0x00806020UL) /**< \brief (NVMCTRL) OTP5 Base Address */
#define NVMCTRL_TEMP_LOG              (0x00806030UL) /**< \brief (NVMCTRL) TEMP_LOG Base Address */
#define NVMCTRL_USER                  (0x00804000UL) /**< \brief (NVMCTRL) USER Base Address */
#define OSCCTRL                       (0x40001000UL) /**< \brief (OSCCTRL) APB Base Address */
#define OSC32KCTRL                    (0x40001400UL) /**< \brief (OSC32KCTRL) APB Base Address */
#define PAC                           (0x40000000UL) /**< \brief (PAC) APB Base Address */
#define PM                            (0x40000400UL) /**< \brief (PM) APB Base Address */
#define PORT                          (0x41006000UL) /**< \brief (PORT) APB Base Address */
#define PORT_IOBUS                    (0x60000000UL) /**< \brief (PORT) IOBUS Base Address */
#define RSTC                          (0x40000C00UL) /**< \brief (RSTC) APB Base Address */
#define RTC                           (0x40002400UL) /**< \brief (RTC) APB Base Address */
#define SERCOM0                       (0x42000400UL) /**< \brief (SERCOM0) APB Base Address */
#define SERCOM1                       (0x42000800UL) /**< \brief (SERCOM1) APB Base Address */
#define SERCOM2                       (0x42000C00UL) /**< \brief (SERCOM2) APB Base Address */
#define SERCOM3                       (0x42001000UL) /**< \brief (SERCOM3) APB Base Address */
#define SERCOM4                       (0x42001400UL) /**< \brief (SERCOM4) APB Base Address */
#define SERCOM5                       (0x42001800UL) /**< \brief (SERCOM5) APB Base Address */
#define SLCD                          (0x42003C00UL) /**< \brief (SLCD) APB Base Address */
#define SUPC                          (0x40001800UL) /**< \brief (SUPC) APB Base Address */
#define TAL                           (0x40003000UL) /**< \brief (TAL) APB Base Address */
#define TC0                           (0x42002000UL) /**< \brief (TC0) APB Base Address */
#define TC1                           (0x42002400UL) /**< \brief (TC1) APB Base Address */
#define TC2                           (0x42002800UL) /**< \brief (TC2) APB Base Address */
#define TC3                           (0x42002C00UL) /**< \brief (TC3) APB Base Address */
#define TCC0                          (0x42001C00UL) /**< \brief (TCC0) APB Base Address */
#define TRNG                          (0x42004400UL) /**< \brief (TRNG) APB Base Address */
#define USB                           (0x41000000UL) /**< \brief (USB) APB Base Address */
#define WDT                           (0x40002000UL) /**< \brief (WDT) APB Base Address */
#else
#define AC                ((Ac       *)0x42003400UL) /**< \brief (AC) APB Base Address */
#define AC_INST_NUM       1                          /**< \brief (AC) Number of instances */
#define AC_INSTS          { AC }                     /**< \brief (AC) Instances List */

#define ADC               ((Adc      *)0x42003000UL) /**< \brief (ADC) APB Base Address */
#define ADC_INST_NUM      1                          /**< \brief (ADC) Number of instances */
#define ADC_INSTS         { ADC }                    /**< \brief (ADC) Instances List */

#define AES               ((Aes      *)0x42004000UL) /**< \brief (AES) APB Base Address */
#define AES_INST_NUM      1                          /**< \brief (AES) Number of instances */
#define AES_INSTS         { AES }                    /**< \brief (AES) Instances List */

#define CCL               ((Ccl      *)0x42004800UL) /**< \brief (CCL) APB Base Address */
#define CCL_INST_NUM      1                          /**< \brief (CCL) Number of instances */
#define CCL_INSTS         { CCL }                    /**< \brief (CCL) Instances List */

#define DMAC              ((Dmac     *)0x41008000UL) /**< \brief (DMAC) APB Base Address */
#define DMAC_INST_NUM     1                          /**< \brief (DMAC) Number of instances */
#define DMAC_INSTS        { DMAC }                   /**< \brief (DMAC) Instances List */

#define DSU               ((Dsu      *)0x41002000UL) /**< \brief (DSU) APB Base Address */
#define DSU_INST_NUM      1                          /**< \brief (DSU) Number of instances */
#define DSU_INSTS         { DSU }                    /**< \brief (DSU) Instances List */

#define EIC               ((Eic      *)0x40002800UL) /**< \brief (EIC) APB Base Address */
#define EIC_INST_NUM      1                          /**< \brief (EIC) Number of instances */
#define EIC_INSTS         { EIC }                    /**< \brief (EIC) Instances List */

#define EVSYS             ((Evsys    *)0x42000000UL) /**< \brief (EVSYS) APB Base Address */
#define EVSYS_INST_NUM    1                          /**< \brief (EVSYS) Number of instances */
#define EVSYS_INSTS       { EVSYS }                  /**< \brief (EVSYS) Instances List */

#define FREQM             ((Freqm    *)0x40002C00UL) /**< \brief (FREQM) APB Base Address */
#define FREQM_INST_NUM    1                          /**< \brief (FREQM) Number of instances */
#define FREQM_INSTS       { FREQM }                  /**< \brief (FREQM) Instances List */

#define GCLK              ((Gclk     *)0x40001C00UL) /**< \brief (GCLK) APB Base Address */
#define GCLK_INST_NUM     1                          /**< \brief (GCLK) Number of instances */
#define GCLK_INSTS        { GCLK }                   /**< \brief (GCLK) Instances List */

#define MCLK              ((Mclk     *)0x40000800UL) /**< \brief (MCLK) APB Base Address */
#define MCLK_INST_NUM     1                          /**< \brief (MCLK) Number of instances */
#define MCLK_INSTS        { MCLK }                   /**< \brief (MCLK) Instances List */

#define MTB               ((Mtb      *)0x4100A000UL) /**< \brief (MTB) APB Base Address */
#define MTB_INST_NUM      1                          /**< \brief (MTB) Number of instances */
#define MTB_INSTS         { MTB }                    /**< \brief (MTB) Instances List */

#define NVMCTRL           ((Nvmctrl  *)0x41004000UL) /**< \brief (NVMCTRL) APB Base Address */
#define NVMCTRL_CAL                   (0x00800000UL) /**< \brief (NVMCTRL) CAL Base Address */
#define NVMCTRL_LOCKBIT               (0x00802000UL) /**< \brief (NVMCTRL) LOCKBIT Base Address */
#define NVMCTRL_OTP1                  (0x00806000UL) /**< \brief (NVMCTRL) OTP1 Base Address */
#define NVMCTRL_OTP2                  (0x00806008UL) /**< \brief (NVMCTRL) OTP2 Base Address */
#define NVMCTRL_OTP3                  (0x00806010UL) /**< \brief (NVMCTRL) OTP3 Base Address */
#define NVMCTRL_OTP4                  (0x00806018UL) /**< \brief (NVMCTRL) OTP4 Base Address */
#define NVMCTRL_OTP5                  (0x00806020UL) /**< \brief (NVMCTRL) OTP5 Base Address */
#define NVMCTRL_TEMP_LOG              (0x00806030UL) /**< \brief (NVMCTRL) TEMP_LOG Base Address */
#define NVMCTRL_USER                  (0x00804000UL) /**< \brief (NVMCTRL) USER Base Address */
#define NVMCTRL_INST_NUM  1                          /**< \brief (NVMCTRL) Number of instances */
#define NVMCTRL_INSTS     { NVMCTRL }                /**< \brief (NVMCTRL) Instances List */

#define OSCCTRL           ((Oscctrl  *)0x40001000UL) /**< \brief (OSCCTRL) APB Base Address */
#define OSCCTRL_INST_NUM  1                          /**< \brief (OSCCTRL) Number of instances */
#define OSCCTRL_INSTS     { OSCCTRL }                /**< \brief (OSCCTRL) Instances List */

#define OSC32KCTRL        ((Osc32kctrl *)0x40001400UL) /**< \brief (OSC32KCTRL) APB Base Address */
#define OSC32KCTRL_INST_NUM 1                          /**< \brief (OSC32KCTRL) Number of instances */
#define OSC32KCTRL_INSTS  { OSC32KCTRL }             /**< \brief (OSC32KCTRL) Instances List */

#define PAC               ((Pac      *)0x40000000UL) /**< \brief (PAC) APB Base Address */
#define PAC_INST_NUM      1                          /**< \brief (PAC) Number of instances */
#define PAC_INSTS         { PAC }                    /**< \brief (PAC) Instances List */

#define PM                ((Pm       *)0x40000400UL) /**< \brief (PM) APB Base Address */
#define PM_INST_NUM       1                          /**< \brief (PM) Number of instances */
#define PM_INSTS          { PM }                     /**< \brief (PM) Instances List */

#define PORT              ((Port     *)0x41006000UL) /**< \brief (PORT) APB Base Address */
#define PORT_IOBUS        ((Port     *)0x60000000UL) /**< \brief (PORT) IOBUS Base Address */
#define PORT_INST_NUM     1                          /**< \brief (PORT) Number of instances */
#define PORT_INSTS        { PORT }                   /**< \brief (PORT) Instances List */
#define PORT_IOBUS_INST_NUM 1                          /**< \brief (PORT) Number of instances */
#define PORT_IOBUS_INSTS  { PORT_IOBUS }             /**< \brief (PORT) Instances List */

#define PTC_GCLK_ID       27
#define PTC_INST_NUM      1                          /**< \brief (PTC) Number of instances */
#define PTC_INSTS         { PTC }                    /**< \brief (PTC) Instances List */

#define RSTC              ((Rstc     *)0x40000C00UL) /**< \brief (RSTC) APB Base Address */
#define RSTC_INST_NUM     1                          /**< \brief (RSTC) Number of instances */
#define RSTC_INSTS        { RSTC }                   /**< \brief (RSTC) Instances List */

#define RTC               ((Rtc      *)0x40002400UL) /**< \brief (RTC) APB Base Address */
#define RTC_INST_NUM      1                          /**< \brief (RTC) Number of instances */
#define RTC_INSTS         { RTC }                    /**< \brief (RTC) Instances List */

#define SERCOM0           ((Sercom   *)0x42000400UL) /**< \brief (SERCOM0) APB Base Address */
#define SERCOM1           ((Sercom   *)0x42000800UL) /**< \brief (SERCOM1) APB Base Address */
#define SERCOM2           ((Sercom   *)0x42000C00UL) /**< \brief (SERCOM2) APB Base Address */
#define SERCOM3           ((Sercom   *)0x42001000UL) /**< \brief (SERCOM3) APB Base Address */
#define SERCOM4           ((Sercom   *)0x42001400UL) /**< \brief (SERCOM4) APB Base Address */
#define SERCOM5           ((Sercom   *)0x42001800UL) /**< \brief (SERCOM5) APB Base Address */
#define SERCOM_INST_NUM   6                          /**< \brief (SERCOM) Number of instances */
#define SERCOM_INSTS      { SERCOM0, SERCOM1, SERCOM2, SERCOM3, SERCOM4, SERCOM5 } /**< \brief (SERCOM) Instances List */

#define SLCD              ((Slcd     *)0x42003C00UL) /**< \brief (SLCD) APB Base Address */
#define SLCD_INST_NUM     1                          /**< \brief (SLCD) Number of instances */
#define SLCD_INSTS        { SLCD }                   /**< \brief (SLCD) Instances List */

#define SUPC              ((Supc     *)0x40001800UL) /**< \brief (SUPC) APB Base Address */
#define SUPC_INST_NUM     1                          /**< \brief (SUPC) Number of instances */
#define SUPC_INSTS        { SUPC }                   /**< \brief (SUPC) Instances List */

#define TAL               ((Tal      *)0x40003000UL) /**< \brief (TAL) APB Base Address */
#define TAL_INST_NUM      1                          /**< \brief (TAL) Number of instances */
#define TAL_INSTS         { TAL }                    /**< \brief (TAL) Instances List */

#define TC0               ((Tc       *)0x42002000UL) /**< \brief (TC0) APB Base Address */
#define TC1               ((Tc       *)0x42002400UL) /**< \brief (TC1) APB Base Address */
#define TC2               ((Tc       *)0x42002800UL) /**< \brief (TC2) APB Base Address */
#define TC3               ((Tc       *)0x42002C00UL) /**< \brief (TC3) APB Base Address */
#define TC_INST_NUM       4                          /**< \brief (TC) Number of instances */
#define TC_INSTS          { TC0, TC1, TC2, TC3 }     /**< \brief (TC) Instances List */

#define TCC0              ((Tcc      *)0x42001C00UL) /**< \brief (TCC0) APB Base Address */
#define TCC_INST_NUM      1                          /**< \brief (TCC) Number of instances */
#define TCC_INSTS         { TCC0 }                   /**< \brief (TCC) Instances List */

#define TRNG              ((Trng     *)0x42004400UL) /**< \brief (TRNG) APB Base Address */
#define TRNG_INST_NUM     1                          /**< \brief (TRNG) Number of instances */
#define TRNG_INSTS        { TRNG }                   /**< \brief (TRNG) Instances List */

#define USB               ((Usb      *)0x41000000UL) /**< \brief (USB) APB Base Address */
#define USB_INST_NUM      1                          /**< \brief (USB) Number of instances */
#define USB_INSTS         { USB }                    /**< \brief (USB) Instances List */

#define WDT               ((Wdt      *)0x40002000UL) /**< \brief (WDT) APB Base Address */
#define WDT_INST_NUM      1                          /**< \brief (WDT) Number of instances */
#define WDT_INSTS         { WDT }                    /**< \brief (WDT) Instances List */

#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
/*@}*/

/* ************************************************************************** */
/**  PORT DEFINITIONS FOR SAML22N18A */
/* ************************************************************************** */
/** \defgroup SAML22N18A_port PORT Definitions */
/*@{*/

#include "pio/saml22n18a.h"
/*@}*/

/* ************************************************************************** */
/**  MEMORY MAPPING DEFINITIONS FOR SAML22N18A */
/* ************************************************************************** */

#define FLASH_SIZE            0x40000UL /* 256 kB */
#define FLASH_PAGE_SIZE       64
#define FLASH_NB_OF_PAGES     4096
#define FLASH_USER_PAGE_SIZE  64
#define HSRAM_SIZE            0x8000UL /* 32 kB */

#define FLASH_ADDR            (0x00000000u) /**< FLASH base address */
#define FLASH_USER_PAGE_ADDR  (0x00800000u) /**< FLASH_USER_PAGE base address */
#define HSRAM_ADDR            (0x20000000u) /**< HSRAM base address */
#define HPB0_ADDR             (0x40000000u) /**< HPB0 base address */
#define HPB1_ADDR             (0x41000000u) /**< HPB1 base address */
#define HPB2_ADDR             (0x42000000u) /**< HPB2 base address */
#define PPB_ADDR              (0xE0000000u) /**< PPB base address */

#define DSU_DID_RESETVALUE    0x10820000U
#define NVMCTRL_RWW_EEPROM_SIZE 0x2000UL /* 8 kB */
#define PORT_GROUPS           3

/* ************************************************************************** */
/**  ELECTRICAL DEFINITIONS FOR SAML22N18A */
/* ************************************************************************** */


#ifdef __cplusplus
}
#endif

/*@}*/

#endif /* SAML22N18A_H */
