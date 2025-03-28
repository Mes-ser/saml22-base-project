/**
 * \file
 *
 * \brief Component description for GCLK
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

#ifndef _SAML22_GCLK_COMPONENT_
#define _SAML22_GCLK_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR GCLK */
/* ========================================================================== */
/** \addtogroup SAML22_GCLK Generic Clock Generator */
/*@{*/

#define GCLK_U2122
#define REV_GCLK                    0x111

/* -------- GCLK_CTRLA : (GCLK Offset: 0x00) (R/W  8) Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  SWRST:1;          /*!< bit:      0  Software Reset                     */
    uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} GCLK_CTRLA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GCLK_CTRLA_OFFSET           0x00         /**< \brief (GCLK_CTRLA offset) Control */
#define GCLK_CTRLA_RESETVALUE       0x00u        /**< \brief (GCLK_CTRLA reset_value) Control */

#define GCLK_CTRLA_SWRST_Pos        0            /**< \brief (GCLK_CTRLA) Software Reset */
#define GCLK_CTRLA_SWRST            (0x1u << GCLK_CTRLA_SWRST_Pos)
#define GCLK_CTRLA_MASK             0x01u        /**< \brief (GCLK_CTRLA) MASK Register */

/* -------- GCLK_SYNCBUSY : (GCLK Offset: 0x04) (R/  32) Synchronization Busy -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SWRST:1;          /*!< bit:      0  Software Reset Synchroniation Busy bit */
    uint32_t :1;               /*!< bit:      1  Reserved                           */
    uint32_t GENCTRL:5;        /*!< bit:  2.. 6  Generic Clock Generator Control Synchronization Busy bits */
    uint32_t :25;              /*!< bit:  7..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GCLK_SYNCBUSY_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GCLK_SYNCBUSY_OFFSET        0x04         /**< \brief (GCLK_SYNCBUSY offset) Synchronization Busy */
#define GCLK_SYNCBUSY_RESETVALUE    0x00000000u  /**< \brief (GCLK_SYNCBUSY reset_value) Synchronization Busy */

#define GCLK_SYNCBUSY_SWRST_Pos     0            /**< \brief (GCLK_SYNCBUSY) Software Reset Synchroniation Busy bit */
#define GCLK_SYNCBUSY_SWRST         (0x1u << GCLK_SYNCBUSY_SWRST_Pos)
#define GCLK_SYNCBUSY_GENCTRL_Pos   2            /**< \brief (GCLK_SYNCBUSY) Generic Clock Generator Control Synchronization Busy bits */
#define GCLK_SYNCBUSY_GENCTRL_Msk   (0x1Fu << GCLK_SYNCBUSY_GENCTRL_Pos)
#define GCLK_SYNCBUSY_GENCTRL(value) (GCLK_SYNCBUSY_GENCTRL_Msk & ((value) << GCLK_SYNCBUSY_GENCTRL_Pos))
#define   GCLK_SYNCBUSY_GENCTRL_GCLK0_Val 0x0u   /**< \brief (GCLK_SYNCBUSY) Generic clock generator 0 */
#define   GCLK_SYNCBUSY_GENCTRL_GCLK1_Val 0x1u   /**< \brief (GCLK_SYNCBUSY) Generic clock generator 1 */
#define   GCLK_SYNCBUSY_GENCTRL_GCLK2_Val 0x2u   /**< \brief (GCLK_SYNCBUSY) Generic clock generator 2 */
#define   GCLK_SYNCBUSY_GENCTRL_GCLK3_Val 0x3u   /**< \brief (GCLK_SYNCBUSY) Generic clock generator 3 */
#define   GCLK_SYNCBUSY_GENCTRL_GCLK4_Val 0x4u   /**< \brief (GCLK_SYNCBUSY) Generic clock generator 4 */
#define   GCLK_SYNCBUSY_GENCTRL_GCLK5_Val 0x5u   /**< \brief (GCLK_SYNCBUSY) Generic clock generator 5 */
#define   GCLK_SYNCBUSY_GENCTRL_GCLK6_Val 0x6u   /**< \brief (GCLK_SYNCBUSY) Generic clock generator 6 */
#define   GCLK_SYNCBUSY_GENCTRL_GCLK7_Val 0x7u   /**< \brief (GCLK_SYNCBUSY) Generic clock generator 7 */
#define   GCLK_SYNCBUSY_GENCTRL_GCLK8_Val 0x8u   /**< \brief (GCLK_SYNCBUSY) Generic clock generator 8 */
#define GCLK_SYNCBUSY_GENCTRL_GCLK0 (GCLK_SYNCBUSY_GENCTRL_GCLK0_Val << GCLK_SYNCBUSY_GENCTRL_Pos)
#define GCLK_SYNCBUSY_GENCTRL_GCLK1 (GCLK_SYNCBUSY_GENCTRL_GCLK1_Val << GCLK_SYNCBUSY_GENCTRL_Pos)
#define GCLK_SYNCBUSY_GENCTRL_GCLK2 (GCLK_SYNCBUSY_GENCTRL_GCLK2_Val << GCLK_SYNCBUSY_GENCTRL_Pos)
#define GCLK_SYNCBUSY_GENCTRL_GCLK3 (GCLK_SYNCBUSY_GENCTRL_GCLK3_Val << GCLK_SYNCBUSY_GENCTRL_Pos)
#define GCLK_SYNCBUSY_GENCTRL_GCLK4 (GCLK_SYNCBUSY_GENCTRL_GCLK4_Val << GCLK_SYNCBUSY_GENCTRL_Pos)
#define GCLK_SYNCBUSY_GENCTRL_GCLK5 (GCLK_SYNCBUSY_GENCTRL_GCLK5_Val << GCLK_SYNCBUSY_GENCTRL_Pos)
#define GCLK_SYNCBUSY_GENCTRL_GCLK6 (GCLK_SYNCBUSY_GENCTRL_GCLK6_Val << GCLK_SYNCBUSY_GENCTRL_Pos)
#define GCLK_SYNCBUSY_GENCTRL_GCLK7 (GCLK_SYNCBUSY_GENCTRL_GCLK7_Val << GCLK_SYNCBUSY_GENCTRL_Pos)
#define GCLK_SYNCBUSY_GENCTRL_GCLK8 (GCLK_SYNCBUSY_GENCTRL_GCLK8_Val << GCLK_SYNCBUSY_GENCTRL_Pos)
#define GCLK_SYNCBUSY_MASK          0x0000007Du  /**< \brief (GCLK_SYNCBUSY) MASK Register */

/* -------- GCLK_GENCTRL : (GCLK Offset: 0x20) (R/W 32) Generic Clock Generator Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SRC:3;            /*!< bit:  0.. 2  Source Select                      */
    uint32_t :5;               /*!< bit:  3.. 7  Reserved                           */
    uint32_t GENEN:1;          /*!< bit:      8  Generic Clock Generator Enable     */
    uint32_t IDC:1;            /*!< bit:      9  Improve Duty Cycle                 */
    uint32_t OOV:1;            /*!< bit:     10  Output Off Value                   */
    uint32_t OE:1;             /*!< bit:     11  Output Enable                      */
    uint32_t DIVSEL:1;         /*!< bit:     12  Divide Selection                   */
    uint32_t RUNSTDBY:1;       /*!< bit:     13  Run in Standby                     */
    uint32_t :2;               /*!< bit: 14..15  Reserved                           */
    uint32_t DIV:16;           /*!< bit: 16..31  Division Factor                    */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GCLK_GENCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GCLK_GENCTRL_OFFSET         0x20         /**< \brief (GCLK_GENCTRL offset) Generic Clock Generator Control */
#define GCLK_GENCTRL_RESETVALUE     0x00000000u  /**< \brief (GCLK_GENCTRL reset_value) Generic Clock Generator Control */

#define GCLK_GENCTRL_SRC_Pos        0            /**< \brief (GCLK_GENCTRL) Source Select */
#define GCLK_GENCTRL_SRC_Msk        (0x7u << GCLK_GENCTRL_SRC_Pos)
#define GCLK_GENCTRL_SRC(value)     (GCLK_GENCTRL_SRC_Msk & ((value) << GCLK_GENCTRL_SRC_Pos))
#define   GCLK_GENCTRL_SRC_XOSC_Val       0x0u   /**< \brief (GCLK_GENCTRL) XOSC oscillator output */
#define   GCLK_GENCTRL_SRC_GCLKIN_Val     0x1u   /**< \brief (GCLK_GENCTRL) Generator input pad */
#define   GCLK_GENCTRL_SRC_GCLKGEN1_Val   0x2u   /**< \brief (GCLK_GENCTRL) Generic clock generator 1 output */
#define   GCLK_GENCTRL_SRC_OSCULP32K_Val  0x3u   /**< \brief (GCLK_GENCTRL) OSCULP32K oscillator output */
#define   GCLK_GENCTRL_SRC_XOSC32K_Val    0x4u   /**< \brief (GCLK_GENCTRL) XOSC32K oscillator output */
#define   GCLK_GENCTRL_SRC_OSC16M_Val     0x5u   /**< \brief (GCLK_GENCTRL) OSC16M oscillator output */
#define   GCLK_GENCTRL_SRC_DFLL48M_Val    0x6u   /**< \brief (GCLK_GENCTRL) DFLL48M output */
#define   GCLK_GENCTRL_SRC_DPLL96M_Val    0x7u   /**< \brief (GCLK_GENCTRL) DPLL96M output */
#define GCLK_GENCTRL_SRC_XOSC       (GCLK_GENCTRL_SRC_XOSC_Val     << GCLK_GENCTRL_SRC_Pos)
#define GCLK_GENCTRL_SRC_GCLKIN     (GCLK_GENCTRL_SRC_GCLKIN_Val   << GCLK_GENCTRL_SRC_Pos)
#define GCLK_GENCTRL_SRC_GCLKGEN1   (GCLK_GENCTRL_SRC_GCLKGEN1_Val << GCLK_GENCTRL_SRC_Pos)
#define GCLK_GENCTRL_SRC_OSCULP32K  (GCLK_GENCTRL_SRC_OSCULP32K_Val << GCLK_GENCTRL_SRC_Pos)
#define GCLK_GENCTRL_SRC_XOSC32K    (GCLK_GENCTRL_SRC_XOSC32K_Val  << GCLK_GENCTRL_SRC_Pos)
#define GCLK_GENCTRL_SRC_OSC16M     (GCLK_GENCTRL_SRC_OSC16M_Val   << GCLK_GENCTRL_SRC_Pos)
#define GCLK_GENCTRL_SRC_DFLL48M    (GCLK_GENCTRL_SRC_DFLL48M_Val  << GCLK_GENCTRL_SRC_Pos)
#define GCLK_GENCTRL_SRC_DPLL96M    (GCLK_GENCTRL_SRC_DPLL96M_Val  << GCLK_GENCTRL_SRC_Pos)
#define GCLK_GENCTRL_GENEN_Pos      8            /**< \brief (GCLK_GENCTRL) Generic Clock Generator Enable */
#define GCLK_GENCTRL_GENEN          (0x1u << GCLK_GENCTRL_GENEN_Pos)
#define GCLK_GENCTRL_IDC_Pos        9            /**< \brief (GCLK_GENCTRL) Improve Duty Cycle */
#define GCLK_GENCTRL_IDC            (0x1u << GCLK_GENCTRL_IDC_Pos)
#define GCLK_GENCTRL_OOV_Pos        10           /**< \brief (GCLK_GENCTRL) Output Off Value */
#define GCLK_GENCTRL_OOV            (0x1u << GCLK_GENCTRL_OOV_Pos)
#define GCLK_GENCTRL_OE_Pos         11           /**< \brief (GCLK_GENCTRL) Output Enable */
#define GCLK_GENCTRL_OE             (0x1u << GCLK_GENCTRL_OE_Pos)
#define GCLK_GENCTRL_DIVSEL_Pos     12           /**< \brief (GCLK_GENCTRL) Divide Selection */
#define GCLK_GENCTRL_DIVSEL         (0x1u << GCLK_GENCTRL_DIVSEL_Pos)
#define GCLK_GENCTRL_RUNSTDBY_Pos   13           /**< \brief (GCLK_GENCTRL) Run in Standby */
#define GCLK_GENCTRL_RUNSTDBY       (0x1u << GCLK_GENCTRL_RUNSTDBY_Pos)
#define GCLK_GENCTRL_DIV_Pos        16           /**< \brief (GCLK_GENCTRL) Division Factor */
#define GCLK_GENCTRL_DIV_Msk        (0xFFFFu << GCLK_GENCTRL_DIV_Pos)
#define GCLK_GENCTRL_DIV(value)     (GCLK_GENCTRL_DIV_Msk & ((value) << GCLK_GENCTRL_DIV_Pos))
#define GCLK_GENCTRL_MASK           0xFFFF3F07u  /**< \brief (GCLK_GENCTRL) MASK Register */

/* -------- GCLK_PCHCTRL : (GCLK Offset: 0x80) (R/W 32) Peripheral Clock Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t GEN:3;            /*!< bit:  0.. 2  Generic Clock Generator            */
    uint32_t :3;               /*!< bit:  3.. 5  Reserved                           */
    uint32_t CHEN:1;           /*!< bit:      6  Channel Enable                     */
    uint32_t WRTLOCK:1;        /*!< bit:      7  Write Lock                         */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GCLK_PCHCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GCLK_PCHCTRL_OFFSET         0x80         /**< \brief (GCLK_PCHCTRL offset) Peripheral Clock Control */
#define GCLK_PCHCTRL_RESETVALUE     0x00000000u  /**< \brief (GCLK_PCHCTRL reset_value) Peripheral Clock Control */

#define GCLK_PCHCTRL_GEN_Pos        0            /**< \brief (GCLK_PCHCTRL) Generic Clock Generator */
#define GCLK_PCHCTRL_GEN_Msk        (0x7u << GCLK_PCHCTRL_GEN_Pos)
#define GCLK_PCHCTRL_GEN(value)     (GCLK_PCHCTRL_GEN_Msk & ((value) << GCLK_PCHCTRL_GEN_Pos))
#define   GCLK_PCHCTRL_GEN_GCLK0_Val      0x0u   /**< \brief (GCLK_PCHCTRL) Generic clock generator 0 */
#define   GCLK_PCHCTRL_GEN_GCLK1_Val      0x1u   /**< \brief (GCLK_PCHCTRL) Generic clock generator 1 */
#define   GCLK_PCHCTRL_GEN_GCLK2_Val      0x2u   /**< \brief (GCLK_PCHCTRL) Generic clock generator 2 */
#define   GCLK_PCHCTRL_GEN_GCLK3_Val      0x3u   /**< \brief (GCLK_PCHCTRL) Generic clock generator 3 */
#define   GCLK_PCHCTRL_GEN_GCLK4_Val      0x4u   /**< \brief (GCLK_PCHCTRL) Generic clock generator 4 */
#define GCLK_PCHCTRL_GEN_GCLK0      (GCLK_PCHCTRL_GEN_GCLK0_Val    << GCLK_PCHCTRL_GEN_Pos)
#define GCLK_PCHCTRL_GEN_GCLK1      (GCLK_PCHCTRL_GEN_GCLK1_Val    << GCLK_PCHCTRL_GEN_Pos)
#define GCLK_PCHCTRL_GEN_GCLK2      (GCLK_PCHCTRL_GEN_GCLK2_Val    << GCLK_PCHCTRL_GEN_Pos)
#define GCLK_PCHCTRL_GEN_GCLK3      (GCLK_PCHCTRL_GEN_GCLK3_Val    << GCLK_PCHCTRL_GEN_Pos)
#define GCLK_PCHCTRL_GEN_GCLK4      (GCLK_PCHCTRL_GEN_GCLK4_Val    << GCLK_PCHCTRL_GEN_Pos)
#define GCLK_PCHCTRL_CHEN_Pos       6            /**< \brief (GCLK_PCHCTRL) Channel Enable */
#define GCLK_PCHCTRL_CHEN           (0x1u << GCLK_PCHCTRL_CHEN_Pos)
#define GCLK_PCHCTRL_WRTLOCK_Pos    7            /**< \brief (GCLK_PCHCTRL) Write Lock */
#define GCLK_PCHCTRL_WRTLOCK        (0x1u << GCLK_PCHCTRL_WRTLOCK_Pos)
#define GCLK_PCHCTRL_MASK           0x000000C7u  /**< \brief (GCLK_PCHCTRL) MASK Register */

/** \brief GCLK hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO GCLK_CTRLA_Type           CTRLA;       /**< \brief Offset: 0x00 (R/W  8) Control */
       RoReg8                    Reserved1[0x3];
  __I  GCLK_SYNCBUSY_Type        SYNCBUSY;    /**< \brief Offset: 0x04 (R/  32) Synchronization Busy */
       RoReg8                    Reserved2[0x18];
  __IO GCLK_GENCTRL_Type         GENCTRL[5];  /**< \brief Offset: 0x20 (R/W 32) Generic Clock Generator Control */
       RoReg8                    Reserved3[0x4C];
  __IO GCLK_PCHCTRL_Type         PCHCTRL[30]; /**< \brief Offset: 0x80 (R/W 32) Peripheral Clock Control */
} Gclk;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAML22_GCLK_COMPONENT_ */
