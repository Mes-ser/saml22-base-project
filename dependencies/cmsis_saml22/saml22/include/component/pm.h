/**
 * \file
 *
 * \brief Component description for PM
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

#ifndef _SAML22_PM_COMPONENT_
#define _SAML22_PM_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR PM */
/* ========================================================================== */
/** \addtogroup SAML22_PM Power Manager */
/*@{*/

#define PM_U2240
#define REV_PM                      0x211

/* -------- PM_CTRLA : (PM Offset: 0x00) (R/W  8) Control A -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  :2;               /*!< bit:  0.. 1  Reserved                           */
    uint8_t  IORET:1;          /*!< bit:      2  I/O Retention                      */
    uint8_t  :5;               /*!< bit:  3.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} PM_CTRLA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_CTRLA_OFFSET             0x00         /**< \brief (PM_CTRLA offset) Control A */
#define PM_CTRLA_RESETVALUE         0x00u        /**< \brief (PM_CTRLA reset_value) Control A */

#define PM_CTRLA_IORET_Pos          2            /**< \brief (PM_CTRLA) I/O Retention */
#define PM_CTRLA_IORET              (0x1u << PM_CTRLA_IORET_Pos)
#define PM_CTRLA_MASK               0x04u        /**< \brief (PM_CTRLA) MASK Register */

/* -------- PM_SLEEPCFG : (PM Offset: 0x01) (R/W  8) Sleep Configuration -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  SLEEPMODE:3;      /*!< bit:  0.. 2  Sleep Mode                         */
    uint8_t  :5;               /*!< bit:  3.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} PM_SLEEPCFG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_SLEEPCFG_OFFSET          0x01         /**< \brief (PM_SLEEPCFG offset) Sleep Configuration */
#define PM_SLEEPCFG_RESETVALUE      0x02u        /**< \brief (PM_SLEEPCFG reset_value) Sleep Configuration */

#define PM_SLEEPCFG_SLEEPMODE_Pos   0            /**< \brief (PM_SLEEPCFG) Sleep Mode */
#define PM_SLEEPCFG_SLEEPMODE_Msk   (0x7u << PM_SLEEPCFG_SLEEPMODE_Pos)
#define PM_SLEEPCFG_SLEEPMODE(value) (PM_SLEEPCFG_SLEEPMODE_Msk & ((value) << PM_SLEEPCFG_SLEEPMODE_Pos))
#define   PM_SLEEPCFG_SLEEPMODE_IDLE0_Val 0x0u   /**< \brief (PM_SLEEPCFG) CPU clock is OFF */
#define   PM_SLEEPCFG_SLEEPMODE_IDLE1_Val 0x1u   /**< \brief (PM_SLEEPCFG) AHB clock is OFF */
#define   PM_SLEEPCFG_SLEEPMODE_IDLE2_Val 0x2u   /**< \brief (PM_SLEEPCFG) APB clock are OFF */
#define   PM_SLEEPCFG_SLEEPMODE_STANDBY_Val 0x4u   /**< \brief (PM_SLEEPCFG) All Clocks are OFF */
#define   PM_SLEEPCFG_SLEEPMODE_BACKUP_Val 0x5u   /**< \brief (PM_SLEEPCFG) Only Backup domain is powered ON */
#define   PM_SLEEPCFG_SLEEPMODE_OFF_Val   0x6u   /**< \brief (PM_SLEEPCFG) All power domains are powered OFF */
#define PM_SLEEPCFG_SLEEPMODE_IDLE0 (PM_SLEEPCFG_SLEEPMODE_IDLE0_Val << PM_SLEEPCFG_SLEEPMODE_Pos)
#define PM_SLEEPCFG_SLEEPMODE_IDLE1 (PM_SLEEPCFG_SLEEPMODE_IDLE1_Val << PM_SLEEPCFG_SLEEPMODE_Pos)
#define PM_SLEEPCFG_SLEEPMODE_IDLE2 (PM_SLEEPCFG_SLEEPMODE_IDLE2_Val << PM_SLEEPCFG_SLEEPMODE_Pos)
#define PM_SLEEPCFG_SLEEPMODE_STANDBY (PM_SLEEPCFG_SLEEPMODE_STANDBY_Val << PM_SLEEPCFG_SLEEPMODE_Pos)
#define PM_SLEEPCFG_SLEEPMODE_BACKUP (PM_SLEEPCFG_SLEEPMODE_BACKUP_Val << PM_SLEEPCFG_SLEEPMODE_Pos)
#define PM_SLEEPCFG_SLEEPMODE_OFF   (PM_SLEEPCFG_SLEEPMODE_OFF_Val << PM_SLEEPCFG_SLEEPMODE_Pos)
#define PM_SLEEPCFG_MASK            0x07u        /**< \brief (PM_SLEEPCFG) MASK Register */

/* -------- PM_PLCFG : (PM Offset: 0x02) (R/W  8) Performance Level Configuration -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  PLSEL:2;          /*!< bit:  0.. 1  Performance Level Select           */
    uint8_t  :5;               /*!< bit:  2.. 6  Reserved                           */
    uint8_t  PLDIS:1;          /*!< bit:      7  Performance Level Disable          */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} PM_PLCFG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_PLCFG_OFFSET             0x02         /**< \brief (PM_PLCFG offset) Performance Level Configuration */
#define PM_PLCFG_RESETVALUE         0x00u        /**< \brief (PM_PLCFG reset_value) Performance Level Configuration */

#define PM_PLCFG_PLSEL_Pos          0            /**< \brief (PM_PLCFG) Performance Level Select */
#define PM_PLCFG_PLSEL_Msk          (0x3u << PM_PLCFG_PLSEL_Pos)
#define PM_PLCFG_PLSEL(value)       (PM_PLCFG_PLSEL_Msk & ((value) << PM_PLCFG_PLSEL_Pos))
#define   PM_PLCFG_PLSEL_PL0_Val          0x0u   /**< \brief (PM_PLCFG) Performance Level 0 */
#define   PM_PLCFG_PLSEL_PL1_Val          0x1u   /**< \brief (PM_PLCFG) Performance Level 1 */
#define   PM_PLCFG_PLSEL_PL2_Val          0x2u   /**< \brief (PM_PLCFG) Performance Level 2 */
#define PM_PLCFG_PLSEL_PL0          (PM_PLCFG_PLSEL_PL0_Val        << PM_PLCFG_PLSEL_Pos)
#define PM_PLCFG_PLSEL_PL1          (PM_PLCFG_PLSEL_PL1_Val        << PM_PLCFG_PLSEL_Pos)
#define PM_PLCFG_PLSEL_PL2          (PM_PLCFG_PLSEL_PL2_Val        << PM_PLCFG_PLSEL_Pos)
#define PM_PLCFG_PLDIS_Pos          7            /**< \brief (PM_PLCFG) Performance Level Disable */
#define PM_PLCFG_PLDIS              (0x1u << PM_PLCFG_PLDIS_Pos)
#define PM_PLCFG_MASK               0x83u        /**< \brief (PM_PLCFG) MASK Register */

/* -------- PM_INTENCLR : (PM Offset: 0x04) (R/W  8) Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  PLRDY:1;          /*!< bit:      0  Performance Level Interrupt Enable */
    uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} PM_INTENCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_INTENCLR_OFFSET          0x04         /**< \brief (PM_INTENCLR offset) Interrupt Enable Clear */
#define PM_INTENCLR_RESETVALUE      0x00u        /**< \brief (PM_INTENCLR reset_value) Interrupt Enable Clear */

#define PM_INTENCLR_PLRDY_Pos       0            /**< \brief (PM_INTENCLR) Performance Level Interrupt Enable */
#define PM_INTENCLR_PLRDY           (0x1u << PM_INTENCLR_PLRDY_Pos)
#define PM_INTENCLR_MASK            0x01u        /**< \brief (PM_INTENCLR) MASK Register */

/* -------- PM_INTENSET : (PM Offset: 0x05) (R/W  8) Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  PLRDY:1;          /*!< bit:      0  Performance Level Ready interrupt Enable */
    uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} PM_INTENSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_INTENSET_OFFSET          0x05         /**< \brief (PM_INTENSET offset) Interrupt Enable Set */
#define PM_INTENSET_RESETVALUE      0x00u        /**< \brief (PM_INTENSET reset_value) Interrupt Enable Set */

#define PM_INTENSET_PLRDY_Pos       0            /**< \brief (PM_INTENSET) Performance Level Ready interrupt Enable */
#define PM_INTENSET_PLRDY           (0x1u << PM_INTENSET_PLRDY_Pos)
#define PM_INTENSET_MASK            0x01u        /**< \brief (PM_INTENSET) MASK Register */

/* -------- PM_INTFLAG : (PM Offset: 0x06) (R/W  8) Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint8_t  PLRDY:1;          /*!< bit:      0  Performance Level Ready            */
    __I uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} PM_INTFLAG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_INTFLAG_OFFSET           0x06         /**< \brief (PM_INTFLAG offset) Interrupt Flag Status and Clear */
#define PM_INTFLAG_RESETVALUE       0x00u        /**< \brief (PM_INTFLAG reset_value) Interrupt Flag Status and Clear */

#define PM_INTFLAG_PLRDY_Pos        0            /**< \brief (PM_INTFLAG) Performance Level Ready */
#define PM_INTFLAG_PLRDY            (0x1u << PM_INTFLAG_PLRDY_Pos)
#define PM_INTFLAG_MASK             0x01u        /**< \brief (PM_INTFLAG) MASK Register */

/* -------- PM_STDBYCFG : (PM Offset: 0x08) (R/W 16) Standby Configuration -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t :6;               /*!< bit:  0.. 5  Reserved                           */
    uint16_t VREGSMOD:2;       /*!< bit:  6.. 7  Voltage Regulator Standby mode     */
    uint16_t :2;               /*!< bit:  8.. 9  Reserved                           */
    uint16_t BBIASHS:2;        /*!< bit: 10..11  Back Bias for HMCRAMCHS            */
    uint16_t :4;               /*!< bit: 12..15  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} PM_STDBYCFG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_STDBYCFG_OFFSET          0x08         /**< \brief (PM_STDBYCFG offset) Standby Configuration */
#define PM_STDBYCFG_RESETVALUE      0x0400u      /**< \brief (PM_STDBYCFG reset_value) Standby Configuration */

#define PM_STDBYCFG_VREGSMOD_Pos    6            /**< \brief (PM_STDBYCFG) Voltage Regulator Standby mode */
#define PM_STDBYCFG_VREGSMOD_Msk    (0x3u << PM_STDBYCFG_VREGSMOD_Pos)
#define PM_STDBYCFG_VREGSMOD(value) (PM_STDBYCFG_VREGSMOD_Msk & ((value) << PM_STDBYCFG_VREGSMOD_Pos))
#define   PM_STDBYCFG_VREGSMOD_AUTO_Val   0x0u   /**< \brief (PM_STDBYCFG) Automatic mode */
#define   PM_STDBYCFG_VREGSMOD_PERFORMANCE_Val 0x1u   /**< \brief (PM_STDBYCFG) Performance oriented */
#define   PM_STDBYCFG_VREGSMOD_LP_Val     0x2u   /**< \brief (PM_STDBYCFG) Low Power oriented */
#define PM_STDBYCFG_VREGSMOD_AUTO   (PM_STDBYCFG_VREGSMOD_AUTO_Val << PM_STDBYCFG_VREGSMOD_Pos)
#define PM_STDBYCFG_VREGSMOD_PERFORMANCE (PM_STDBYCFG_VREGSMOD_PERFORMANCE_Val << PM_STDBYCFG_VREGSMOD_Pos)
#define PM_STDBYCFG_VREGSMOD_LP     (PM_STDBYCFG_VREGSMOD_LP_Val   << PM_STDBYCFG_VREGSMOD_Pos)
#define PM_STDBYCFG_BBIASHS_Pos     10           /**< \brief (PM_STDBYCFG) Back Bias for HMCRAMCHS */
#define PM_STDBYCFG_BBIASHS_Msk     (0x3u << PM_STDBYCFG_BBIASHS_Pos)
#define PM_STDBYCFG_BBIASHS(value)  (PM_STDBYCFG_BBIASHS_Msk & ((value) << PM_STDBYCFG_BBIASHS_Pos))
#define PM_STDBYCFG_MASK            0x0CC0u      /**< \brief (PM_STDBYCFG) MASK Register */

/** \brief PM hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO PM_CTRLA_Type             CTRLA;       /**< \brief Offset: 0x00 (R/W  8) Control A */
  __IO PM_SLEEPCFG_Type          SLEEPCFG;    /**< \brief Offset: 0x01 (R/W  8) Sleep Configuration */
  __IO PM_PLCFG_Type             PLCFG;       /**< \brief Offset: 0x02 (R/W  8) Performance Level Configuration */
       RoReg8                    Reserved1[0x1];
  __IO PM_INTENCLR_Type          INTENCLR;    /**< \brief Offset: 0x04 (R/W  8) Interrupt Enable Clear */
  __IO PM_INTENSET_Type          INTENSET;    /**< \brief Offset: 0x05 (R/W  8) Interrupt Enable Set */
  __IO PM_INTFLAG_Type           INTFLAG;     /**< \brief Offset: 0x06 (R/W  8) Interrupt Flag Status and Clear */
       RoReg8                    Reserved2[0x1];
  __IO PM_STDBYCFG_Type          STDBYCFG;    /**< \brief Offset: 0x08 (R/W 16) Standby Configuration */
} Pm;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAML22_PM_COMPONENT_ */
