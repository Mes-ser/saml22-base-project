/**
 * \file
 *
 * \brief Component description for PORT
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

#ifndef _SAML22_PORT_COMPONENT_
#define _SAML22_PORT_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR PORT */
/* ========================================================================== */
/** \addtogroup SAML22_PORT Port Module */
/*@{*/

#define PORT_U2210
#define REV_PORT                    0x211

/* -------- PORT_DIR : (PORT Offset: 0x00) (R/W 32) GROUP Data Direction -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} PORT_DIR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PORT_DIR_OFFSET             0x00         /**< \brief (PORT_DIR offset) Data Direction */
#define PORT_DIR_RESETVALUE         0x00000000u  /**< \brief (PORT_DIR reset_value) Data Direction */
#define PORT_DIR_MASK               0xFFFFFFFFu  /**< \brief (PORT_DIR) MASK Register */

/* -------- PORT_DIRCLR : (PORT Offset: 0x04) (R/W 32) GROUP Data Direction Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} PORT_DIRCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PORT_DIRCLR_OFFSET          0x04         /**< \brief (PORT_DIRCLR offset) Data Direction Clear */
#define PORT_DIRCLR_RESETVALUE      0x00000000u  /**< \brief (PORT_DIRCLR reset_value) Data Direction Clear */
#define PORT_DIRCLR_MASK            0xFFFFFFFFu  /**< \brief (PORT_DIRCLR) MASK Register */

/* -------- PORT_DIRSET : (PORT Offset: 0x08) (R/W 32) GROUP Data Direction Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} PORT_DIRSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PORT_DIRSET_OFFSET          0x08         /**< \brief (PORT_DIRSET offset) Data Direction Set */
#define PORT_DIRSET_RESETVALUE      0x00000000u  /**< \brief (PORT_DIRSET reset_value) Data Direction Set */
#define PORT_DIRSET_MASK            0xFFFFFFFFu  /**< \brief (PORT_DIRSET) MASK Register */

/* -------- PORT_DIRTGL : (PORT Offset: 0x0C) (R/W 32) GROUP Data Direction Toggle -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} PORT_DIRTGL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PORT_DIRTGL_OFFSET          0x0C         /**< \brief (PORT_DIRTGL offset) Data Direction Toggle */
#define PORT_DIRTGL_RESETVALUE      0x00000000u  /**< \brief (PORT_DIRTGL reset_value) Data Direction Toggle */
#define PORT_DIRTGL_MASK            0xFFFFFFFFu  /**< \brief (PORT_DIRTGL) MASK Register */

/* -------- PORT_OUT : (PORT Offset: 0x10) (R/W 32) GROUP Data Output Value -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} PORT_OUT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PORT_OUT_OFFSET             0x10         /**< \brief (PORT_OUT offset) Data Output Value */
#define PORT_OUT_RESETVALUE         0x00000000u  /**< \brief (PORT_OUT reset_value) Data Output Value */
#define PORT_OUT_MASK               0xFFFFFFFFu  /**< \brief (PORT_OUT) MASK Register */

/* -------- PORT_OUTCLR : (PORT Offset: 0x14) (R/W 32) GROUP Data Output Value Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} PORT_OUTCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PORT_OUTCLR_OFFSET          0x14         /**< \brief (PORT_OUTCLR offset) Data Output Value Clear */
#define PORT_OUTCLR_RESETVALUE      0x00000000u  /**< \brief (PORT_OUTCLR reset_value) Data Output Value Clear */
#define PORT_OUTCLR_MASK            0xFFFFFFFFu  /**< \brief (PORT_OUTCLR) MASK Register */

/* -------- PORT_OUTSET : (PORT Offset: 0x18) (R/W 32) GROUP Data Output Value Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} PORT_OUTSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PORT_OUTSET_OFFSET          0x18         /**< \brief (PORT_OUTSET offset) Data Output Value Set */
#define PORT_OUTSET_RESETVALUE      0x00000000u  /**< \brief (PORT_OUTSET reset_value) Data Output Value Set */
#define PORT_OUTSET_MASK            0xFFFFFFFFu  /**< \brief (PORT_OUTSET) MASK Register */

/* -------- PORT_OUTTGL : (PORT Offset: 0x1C) (R/W 32) GROUP Data Output Value Toggle -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} PORT_OUTTGL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PORT_OUTTGL_OFFSET          0x1C         /**< \brief (PORT_OUTTGL offset) Data Output Value Toggle */
#define PORT_OUTTGL_RESETVALUE      0x00000000u  /**< \brief (PORT_OUTTGL reset_value) Data Output Value Toggle */
#define PORT_OUTTGL_MASK            0xFFFFFFFFu  /**< \brief (PORT_OUTTGL) MASK Register */

/* -------- PORT_IN : (PORT Offset: 0x20) (R/  32) GROUP Data Input Value -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} PORT_IN_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PORT_IN_OFFSET              0x20         /**< \brief (PORT_IN offset) Data Input Value */
#define PORT_IN_RESETVALUE          0x00000000u  /**< \brief (PORT_IN reset_value) Data Input Value */
#define PORT_IN_MASK                0xFFFFFFFFu  /**< \brief (PORT_IN) MASK Register */

/* -------- PORT_CTRL : (PORT Offset: 0x24) (R/W 32) GROUP Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SAMPLING:32;      /*!< bit:  0..31  Input Sampling Mode                */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PORT_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PORT_CTRL_OFFSET            0x24         /**< \brief (PORT_CTRL offset) Control */
#define PORT_CTRL_RESETVALUE        0x00000000u  /**< \brief (PORT_CTRL reset_value) Control */

#define PORT_CTRL_SAMPLING_Pos      0            /**< \brief (PORT_CTRL) Input Sampling Mode */
#define PORT_CTRL_SAMPLING_Msk      (0xFFFFFFFFu << PORT_CTRL_SAMPLING_Pos)
#define PORT_CTRL_SAMPLING(value)   (PORT_CTRL_SAMPLING_Msk & ((value) << PORT_CTRL_SAMPLING_Pos))
#define PORT_CTRL_MASK              0xFFFFFFFFu  /**< \brief (PORT_CTRL) MASK Register */

/* -------- PORT_WRCONFIG : (PORT Offset: 0x28) ( /W 32) GROUP Write Configuration -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PINMASK:16;       /*!< bit:  0..15  Pin Mask for Multiple Pin Configuration */
    uint32_t PMUXEN:1;         /*!< bit:     16  Select Peripheral Multiplexer      */
    uint32_t INEN:1;           /*!< bit:     17  Input Enable                       */
    uint32_t PULLEN:1;         /*!< bit:     18  Pull Enable                        */
    uint32_t :3;               /*!< bit: 19..21  Reserved                           */
    uint32_t DRVSTR:1;         /*!< bit:     22  Output Driver Strength Selection   */
    uint32_t :1;               /*!< bit:     23  Reserved                           */
    uint32_t PMUX:4;           /*!< bit: 24..27  Peripheral Multiplexing Template   */
    uint32_t WRPMUX:1;         /*!< bit:     28  Write PMUX Registers               */
    uint32_t :1;               /*!< bit:     29  Reserved                           */
    uint32_t WRPINCFG:1;       /*!< bit:     30  Write PINCFG Registers             */
    uint32_t HWSEL:1;          /*!< bit:     31  Half-Word Select                   */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PORT_WRCONFIG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PORT_WRCONFIG_OFFSET        0x28         /**< \brief (PORT_WRCONFIG offset) Write Configuration */
#define PORT_WRCONFIG_RESETVALUE    0x00000000u  /**< \brief (PORT_WRCONFIG reset_value) Write Configuration */

#define PORT_WRCONFIG_PINMASK_Pos   0            /**< \brief (PORT_WRCONFIG) Pin Mask for Multiple Pin Configuration */
#define PORT_WRCONFIG_PINMASK_Msk   (0xFFFFu << PORT_WRCONFIG_PINMASK_Pos)
#define PORT_WRCONFIG_PINMASK(value) (PORT_WRCONFIG_PINMASK_Msk & ((value) << PORT_WRCONFIG_PINMASK_Pos))
#define PORT_WRCONFIG_PMUXEN_Pos    16           /**< \brief (PORT_WRCONFIG) Select Peripheral Multiplexer */
#define PORT_WRCONFIG_PMUXEN        (0x1u << PORT_WRCONFIG_PMUXEN_Pos)
#define PORT_WRCONFIG_INEN_Pos      17           /**< \brief (PORT_WRCONFIG) Input Enable */
#define PORT_WRCONFIG_INEN          (0x1u << PORT_WRCONFIG_INEN_Pos)
#define PORT_WRCONFIG_PULLEN_Pos    18           /**< \brief (PORT_WRCONFIG) Pull Enable */
#define PORT_WRCONFIG_PULLEN        (0x1u << PORT_WRCONFIG_PULLEN_Pos)
#define PORT_WRCONFIG_DRVSTR_Pos    22           /**< \brief (PORT_WRCONFIG) Output Driver Strength Selection */
#define PORT_WRCONFIG_DRVSTR        (0x1u << PORT_WRCONFIG_DRVSTR_Pos)
#define PORT_WRCONFIG_PMUX_Pos      24           /**< \brief (PORT_WRCONFIG) Peripheral Multiplexing Template */
#define PORT_WRCONFIG_PMUX_Msk      (0xFu << PORT_WRCONFIG_PMUX_Pos)
#define PORT_WRCONFIG_PMUX(value)   (PORT_WRCONFIG_PMUX_Msk & ((value) << PORT_WRCONFIG_PMUX_Pos))
#define PORT_WRCONFIG_WRPMUX_Pos    28           /**< \brief (PORT_WRCONFIG) Write PMUX Registers */
#define PORT_WRCONFIG_WRPMUX        (0x1u << PORT_WRCONFIG_WRPMUX_Pos)
#define PORT_WRCONFIG_WRPINCFG_Pos  30           /**< \brief (PORT_WRCONFIG) Write PINCFG Registers */
#define PORT_WRCONFIG_WRPINCFG      (0x1u << PORT_WRCONFIG_WRPINCFG_Pos)
#define PORT_WRCONFIG_HWSEL_Pos     31           /**< \brief (PORT_WRCONFIG) Half-Word Select */
#define PORT_WRCONFIG_HWSEL         (0x1u << PORT_WRCONFIG_HWSEL_Pos)
#define PORT_WRCONFIG_MASK          0xDF47FFFFu  /**< \brief (PORT_WRCONFIG) MASK Register */

/* -------- PORT_EVCTRL : (PORT Offset: 0x2C) (R/W 32) GROUP Event Input Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PID0:5;           /*!< bit:  0.. 4  Port Event Pin Identifier 0        */
    uint32_t EVACT0:2;         /*!< bit:  5.. 6  Port Event Action 0                */
    uint32_t PORTEI0:1;        /*!< bit:      7  Port Event Enable Input 0          */
    uint32_t PID1:5;           /*!< bit:  8..12  Port Event Pin Identifier 1        */
    uint32_t EVACT1:2;         /*!< bit: 13..14  Port Event Action 1                */
    uint32_t PORTEI1:1;        /*!< bit:     15  Port Event Enable Input 1          */
    uint32_t PID2:5;           /*!< bit: 16..20  Port Event Pin Identifier 2        */
    uint32_t EVACT2:2;         /*!< bit: 21..22  Port Event Action 2                */
    uint32_t PORTEI2:1;        /*!< bit:     23  Port Event Enable Input 2          */
    uint32_t PID3:5;           /*!< bit: 24..28  Port Event Pin Identifier 3        */
    uint32_t EVACT3:2;         /*!< bit: 29..30  Port Event Action 3                */
    uint32_t PORTEI3:1;        /*!< bit:     31  Port Event Enable Input 3          */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PORT_EVCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PORT_EVCTRL_OFFSET          0x2C         /**< \brief (PORT_EVCTRL offset) Event Input Control */
#define PORT_EVCTRL_RESETVALUE      0x00000000u  /**< \brief (PORT_EVCTRL reset_value) Event Input Control */

#define PORT_EVCTRL_PID0_Pos        0            /**< \brief (PORT_EVCTRL) Port Event Pin Identifier 0 */
#define PORT_EVCTRL_PID0_Msk        (0x1Fu << PORT_EVCTRL_PID0_Pos)
#define PORT_EVCTRL_PID0(value)     (PORT_EVCTRL_PID0_Msk & ((value) << PORT_EVCTRL_PID0_Pos))
#define PORT_EVCTRL_EVACT0_Pos      5            /**< \brief (PORT_EVCTRL) Port Event Action 0 */
#define PORT_EVCTRL_EVACT0_Msk      (0x3u << PORT_EVCTRL_EVACT0_Pos)
#define PORT_EVCTRL_EVACT0(value)   (PORT_EVCTRL_EVACT0_Msk & ((value) << PORT_EVCTRL_EVACT0_Pos))
#define PORT_EVCTRL_PORTEI0_Pos     7            /**< \brief (PORT_EVCTRL) Port Event Enable Input 0 */
#define PORT_EVCTRL_PORTEI0         (0x1u << PORT_EVCTRL_PORTEI0_Pos)
#define PORT_EVCTRL_PID1_Pos        8            /**< \brief (PORT_EVCTRL) Port Event Pin Identifier 1 */
#define PORT_EVCTRL_PID1_Msk        (0x1Fu << PORT_EVCTRL_PID1_Pos)
#define PORT_EVCTRL_PID1(value)     (PORT_EVCTRL_PID1_Msk & ((value) << PORT_EVCTRL_PID1_Pos))
#define PORT_EVCTRL_EVACT1_Pos      13           /**< \brief (PORT_EVCTRL) Port Event Action 1 */
#define PORT_EVCTRL_EVACT1_Msk      (0x3u << PORT_EVCTRL_EVACT1_Pos)
#define PORT_EVCTRL_EVACT1(value)   (PORT_EVCTRL_EVACT1_Msk & ((value) << PORT_EVCTRL_EVACT1_Pos))
#define PORT_EVCTRL_PORTEI1_Pos     15           /**< \brief (PORT_EVCTRL) Port Event Enable Input 1 */
#define PORT_EVCTRL_PORTEI1         (0x1u << PORT_EVCTRL_PORTEI1_Pos)
#define PORT_EVCTRL_PID2_Pos        16           /**< \brief (PORT_EVCTRL) Port Event Pin Identifier 2 */
#define PORT_EVCTRL_PID2_Msk        (0x1Fu << PORT_EVCTRL_PID2_Pos)
#define PORT_EVCTRL_PID2(value)     (PORT_EVCTRL_PID2_Msk & ((value) << PORT_EVCTRL_PID2_Pos))
#define PORT_EVCTRL_EVACT2_Pos      21           /**< \brief (PORT_EVCTRL) Port Event Action 2 */
#define PORT_EVCTRL_EVACT2_Msk      (0x3u << PORT_EVCTRL_EVACT2_Pos)
#define PORT_EVCTRL_EVACT2(value)   (PORT_EVCTRL_EVACT2_Msk & ((value) << PORT_EVCTRL_EVACT2_Pos))
#define PORT_EVCTRL_PORTEI2_Pos     23           /**< \brief (PORT_EVCTRL) Port Event Enable Input 2 */
#define PORT_EVCTRL_PORTEI2         (0x1u << PORT_EVCTRL_PORTEI2_Pos)
#define PORT_EVCTRL_PID3_Pos        24           /**< \brief (PORT_EVCTRL) Port Event Pin Identifier 3 */
#define PORT_EVCTRL_PID3_Msk        (0x1Fu << PORT_EVCTRL_PID3_Pos)
#define PORT_EVCTRL_PID3(value)     (PORT_EVCTRL_PID3_Msk & ((value) << PORT_EVCTRL_PID3_Pos))
#define PORT_EVCTRL_EVACT3_Pos      29           /**< \brief (PORT_EVCTRL) Port Event Action 3 */
#define PORT_EVCTRL_EVACT3_Msk      (0x3u << PORT_EVCTRL_EVACT3_Pos)
#define PORT_EVCTRL_EVACT3(value)   (PORT_EVCTRL_EVACT3_Msk & ((value) << PORT_EVCTRL_EVACT3_Pos))
#define PORT_EVCTRL_PORTEI3_Pos     31           /**< \brief (PORT_EVCTRL) Port Event Enable Input 3 */
#define PORT_EVCTRL_PORTEI3         (0x1u << PORT_EVCTRL_PORTEI3_Pos)
#define PORT_EVCTRL_MASK            0xFFFFFFFFu  /**< \brief (PORT_EVCTRL) MASK Register */

/* -------- PORT_PMUX : (PORT Offset: 0x30) (R/W  8) GROUP Peripheral Multiplexing n -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  PMUXE:4;          /*!< bit:  0.. 3  Peripheral Multiplexing for Even-Numbered Pin */
    uint8_t  PMUXO:4;          /*!< bit:  4.. 7  Peripheral Multiplexing for Odd-Numbered Pin */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} PORT_PMUX_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PORT_PMUX_OFFSET            0x30         /**< \brief (PORT_PMUX offset) Peripheral Multiplexing n */
#define PORT_PMUX_RESETVALUE        0x00u        /**< \brief (PORT_PMUX reset_value) Peripheral Multiplexing n */

#define PORT_PMUX_PMUXE_Pos         0            /**< \brief (PORT_PMUX) Peripheral Multiplexing for Even-Numbered Pin */
#define PORT_PMUX_PMUXE_Msk         (0xFu << PORT_PMUX_PMUXE_Pos)
#define PORT_PMUX_PMUXE(value)      (PORT_PMUX_PMUXE_Msk & ((value) << PORT_PMUX_PMUXE_Pos))
#define PORT_PMUX_PMUXO_Pos         4            /**< \brief (PORT_PMUX) Peripheral Multiplexing for Odd-Numbered Pin */
#define PORT_PMUX_PMUXO_Msk         (0xFu << PORT_PMUX_PMUXO_Pos)
#define PORT_PMUX_PMUXO(value)      (PORT_PMUX_PMUXO_Msk & ((value) << PORT_PMUX_PMUXO_Pos))
#define PORT_PMUX_MASK              0xFFu        /**< \brief (PORT_PMUX) MASK Register */

/* -------- PORT_PINCFG : (PORT Offset: 0x40) (R/W  8) GROUP Pin Configuration n -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  PMUXEN:1;         /*!< bit:      0  Select Peripheral Multiplexer      */
    uint8_t  INEN:1;           /*!< bit:      1  Input Enable                       */
    uint8_t  PULLEN:1;         /*!< bit:      2  Pull Enable                        */
    uint8_t  :3;               /*!< bit:  3.. 5  Reserved                           */
    uint8_t  DRVSTR:1;         /*!< bit:      6  Output Driver Strength Selection   */
    uint8_t  :1;               /*!< bit:      7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} PORT_PINCFG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PORT_PINCFG_OFFSET          0x40         /**< \brief (PORT_PINCFG offset) Pin Configuration n */
#define PORT_PINCFG_RESETVALUE      0x00u        /**< \brief (PORT_PINCFG reset_value) Pin Configuration n */

#define PORT_PINCFG_PMUXEN_Pos      0            /**< \brief (PORT_PINCFG) Select Peripheral Multiplexer */
#define PORT_PINCFG_PMUXEN          (0x1u << PORT_PINCFG_PMUXEN_Pos)
#define PORT_PINCFG_INEN_Pos        1            /**< \brief (PORT_PINCFG) Input Enable */
#define PORT_PINCFG_INEN            (0x1u << PORT_PINCFG_INEN_Pos)
#define PORT_PINCFG_PULLEN_Pos      2            /**< \brief (PORT_PINCFG) Pull Enable */
#define PORT_PINCFG_PULLEN          (0x1u << PORT_PINCFG_PULLEN_Pos)
#define PORT_PINCFG_DRVSTR_Pos      6            /**< \brief (PORT_PINCFG) Output Driver Strength Selection */
#define PORT_PINCFG_DRVSTR          (0x1u << PORT_PINCFG_DRVSTR_Pos)
#define PORT_PINCFG_MASK            0x47u        /**< \brief (PORT_PINCFG) MASK Register */

/** \brief PortGroup hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO PORT_DIR_Type             DIR;         /**< \brief Offset: 0x00 (R/W 32) Data Direction */
  __IO PORT_DIRCLR_Type          DIRCLR;      /**< \brief Offset: 0x04 (R/W 32) Data Direction Clear */
  __IO PORT_DIRSET_Type          DIRSET;      /**< \brief Offset: 0x08 (R/W 32) Data Direction Set */
  __IO PORT_DIRTGL_Type          DIRTGL;      /**< \brief Offset: 0x0C (R/W 32) Data Direction Toggle */
  __IO PORT_OUT_Type             OUT;         /**< \brief Offset: 0x10 (R/W 32) Data Output Value */
  __IO PORT_OUTCLR_Type          OUTCLR;      /**< \brief Offset: 0x14 (R/W 32) Data Output Value Clear */
  __IO PORT_OUTSET_Type          OUTSET;      /**< \brief Offset: 0x18 (R/W 32) Data Output Value Set */
  __IO PORT_OUTTGL_Type          OUTTGL;      /**< \brief Offset: 0x1C (R/W 32) Data Output Value Toggle */
  __I  PORT_IN_Type              IN;          /**< \brief Offset: 0x20 (R/  32) Data Input Value */
  __IO PORT_CTRL_Type            CTRL;        /**< \brief Offset: 0x24 (R/W 32) Control */
  __O  PORT_WRCONFIG_Type        WRCONFIG;    /**< \brief Offset: 0x28 ( /W 32) Write Configuration */
  __IO PORT_EVCTRL_Type          EVCTRL;      /**< \brief Offset: 0x2C (R/W 32) Event Input Control */
  __IO PORT_PMUX_Type            PMUX[16];    /**< \brief Offset: 0x30 (R/W  8) Peripheral Multiplexing n */
  __IO PORT_PINCFG_Type          PINCFG[32];  /**< \brief Offset: 0x40 (R/W  8) Pin Configuration n */
       RoReg8                    Reserved1[0x20];
} PortGroup;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief PORT hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
       PortGroup                 Group[3];    /**< \brief Offset: 0x00 PortGroup groups [GROUPS] */
} Port;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAML22_PORT_COMPONENT_ */
