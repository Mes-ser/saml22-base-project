/**
 * \file
 *
 * \brief Component description for OSCCTRL
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

#ifndef _SAML22_OSCCTRL_COMPONENT_
#define _SAML22_OSCCTRL_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR OSCCTRL */
/* ========================================================================== */
/** \addtogroup SAML22_OSCCTRL Oscillators Control */
/*@{*/

#define OSCCTRL_U2119
#define REV_OSCCTRL                 0x300

/* -------- OSCCTRL_INTENCLR : (OSCCTRL Offset: 0x00) (R/W 32) Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t XOSCRDY:1;        /*!< bit:      0  XOSC Ready Interrupt Enable        */
    uint32_t XOSCFAIL:1;       /*!< bit:      1  XOSC Clock Failure Detector Interrupt Enable */
    uint32_t :2;               /*!< bit:  2.. 3  Reserved                           */
    uint32_t OSC16MRDY:1;      /*!< bit:      4  OSC16M Ready Interrupt Enable      */
    uint32_t :3;               /*!< bit:  5.. 7  Reserved                           */
    uint32_t DFLLRDY:1;        /*!< bit:      8  DFLL Ready Interrupt Enable        */
    uint32_t DFLLOOB:1;        /*!< bit:      9  DFLL Out Of Bounds Interrupt Enable */
    uint32_t DFLLLCKF:1;       /*!< bit:     10  DFLL Lock Fine Interrupt Enable    */
    uint32_t DFLLLCKC:1;       /*!< bit:     11  DFLL Lock Coarse Interrupt Enable  */
    uint32_t DFLLRCS:1;        /*!< bit:     12  DFLL Reference Clock Stopped Interrupt Enable */
    uint32_t :3;               /*!< bit: 13..15  Reserved                           */
    uint32_t DPLLLCKR:1;       /*!< bit:     16  DPLL Lock Rise Interrupt Enable    */
    uint32_t DPLLLCKF:1;       /*!< bit:     17  DPLL Lock Fall Interrupt Enable    */
    uint32_t DPLLLTO:1;        /*!< bit:     18  DPLL Time Out Interrupt Enable     */
    uint32_t DPLLLDRTO:1;      /*!< bit:     19  DPLL Ratio Ready Interrupt Enable  */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} OSCCTRL_INTENCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_INTENCLR_OFFSET     0x00         /**< \brief (OSCCTRL_INTENCLR offset) Interrupt Enable Clear */
#define OSCCTRL_INTENCLR_RESETVALUE 0x00000000u  /**< \brief (OSCCTRL_INTENCLR reset_value) Interrupt Enable Clear */

#define OSCCTRL_INTENCLR_XOSCRDY_Pos 0            /**< \brief (OSCCTRL_INTENCLR) XOSC Ready Interrupt Enable */
#define OSCCTRL_INTENCLR_XOSCRDY    (0x1u << OSCCTRL_INTENCLR_XOSCRDY_Pos)
#define OSCCTRL_INTENCLR_XOSCFAIL_Pos 1            /**< \brief (OSCCTRL_INTENCLR) XOSC Clock Failure Detector Interrupt Enable */
#define OSCCTRL_INTENCLR_XOSCFAIL   (0x1u << OSCCTRL_INTENCLR_XOSCFAIL_Pos)
#define OSCCTRL_INTENCLR_OSC16MRDY_Pos 4            /**< \brief (OSCCTRL_INTENCLR) OSC16M Ready Interrupt Enable */
#define OSCCTRL_INTENCLR_OSC16MRDY  (0x1u << OSCCTRL_INTENCLR_OSC16MRDY_Pos)
#define OSCCTRL_INTENCLR_DFLLRDY_Pos 8            /**< \brief (OSCCTRL_INTENCLR) DFLL Ready Interrupt Enable */
#define OSCCTRL_INTENCLR_DFLLRDY    (0x1u << OSCCTRL_INTENCLR_DFLLRDY_Pos)
#define OSCCTRL_INTENCLR_DFLLOOB_Pos 9            /**< \brief (OSCCTRL_INTENCLR) DFLL Out Of Bounds Interrupt Enable */
#define OSCCTRL_INTENCLR_DFLLOOB    (0x1u << OSCCTRL_INTENCLR_DFLLOOB_Pos)
#define OSCCTRL_INTENCLR_DFLLLCKF_Pos 10           /**< \brief (OSCCTRL_INTENCLR) DFLL Lock Fine Interrupt Enable */
#define OSCCTRL_INTENCLR_DFLLLCKF   (0x1u << OSCCTRL_INTENCLR_DFLLLCKF_Pos)
#define OSCCTRL_INTENCLR_DFLLLCKC_Pos 11           /**< \brief (OSCCTRL_INTENCLR) DFLL Lock Coarse Interrupt Enable */
#define OSCCTRL_INTENCLR_DFLLLCKC   (0x1u << OSCCTRL_INTENCLR_DFLLLCKC_Pos)
#define OSCCTRL_INTENCLR_DFLLRCS_Pos 12           /**< \brief (OSCCTRL_INTENCLR) DFLL Reference Clock Stopped Interrupt Enable */
#define OSCCTRL_INTENCLR_DFLLRCS    (0x1u << OSCCTRL_INTENCLR_DFLLRCS_Pos)
#define OSCCTRL_INTENCLR_DPLLLCKR_Pos 16           /**< \brief (OSCCTRL_INTENCLR) DPLL Lock Rise Interrupt Enable */
#define OSCCTRL_INTENCLR_DPLLLCKR   (0x1u << OSCCTRL_INTENCLR_DPLLLCKR_Pos)
#define OSCCTRL_INTENCLR_DPLLLCKF_Pos 17           /**< \brief (OSCCTRL_INTENCLR) DPLL Lock Fall Interrupt Enable */
#define OSCCTRL_INTENCLR_DPLLLCKF   (0x1u << OSCCTRL_INTENCLR_DPLLLCKF_Pos)
#define OSCCTRL_INTENCLR_DPLLLTO_Pos 18           /**< \brief (OSCCTRL_INTENCLR) DPLL Time Out Interrupt Enable */
#define OSCCTRL_INTENCLR_DPLLLTO    (0x1u << OSCCTRL_INTENCLR_DPLLLTO_Pos)
#define OSCCTRL_INTENCLR_DPLLLDRTO_Pos 19           /**< \brief (OSCCTRL_INTENCLR) DPLL Ratio Ready Interrupt Enable */
#define OSCCTRL_INTENCLR_DPLLLDRTO  (0x1u << OSCCTRL_INTENCLR_DPLLLDRTO_Pos)
#define OSCCTRL_INTENCLR_MASK       0x000F1F13u  /**< \brief (OSCCTRL_INTENCLR) MASK Register */

/* -------- OSCCTRL_INTENSET : (OSCCTRL Offset: 0x04) (R/W 32) Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t XOSCRDY:1;        /*!< bit:      0  XOSC Ready Interrupt Enable        */
    uint32_t XOSCFAIL:1;       /*!< bit:      1  XOSC Clock Failure Detector Interrupt Enable */
    uint32_t :2;               /*!< bit:  2.. 3  Reserved                           */
    uint32_t OSC16MRDY:1;      /*!< bit:      4  OSC16M Ready Interrupt Enable      */
    uint32_t :3;               /*!< bit:  5.. 7  Reserved                           */
    uint32_t DFLLRDY:1;        /*!< bit:      8  DFLL Ready Interrupt Enable        */
    uint32_t DFLLOOB:1;        /*!< bit:      9  DFLL Out Of Bounds Interrupt Enable */
    uint32_t DFLLLCKF:1;       /*!< bit:     10  DFLL Lock Fine Interrupt Enable    */
    uint32_t DFLLLCKC:1;       /*!< bit:     11  DFLL Lock Coarse Interrupt Enable  */
    uint32_t DFLLRCS:1;        /*!< bit:     12  DFLL Reference Clock Stopped Interrupt Enable */
    uint32_t :3;               /*!< bit: 13..15  Reserved                           */
    uint32_t DPLLLCKR:1;       /*!< bit:     16  DPLL Lock Rise Interrupt Enable    */
    uint32_t DPLLLCKF:1;       /*!< bit:     17  DPLL Lock Fall Interrupt Enable    */
    uint32_t DPLLLTO:1;        /*!< bit:     18  DPLL Time Out Interrupt Enable     */
    uint32_t DPLLLDRTO:1;      /*!< bit:     19  DPLL Ratio Ready Interrupt Enable  */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} OSCCTRL_INTENSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_INTENSET_OFFSET     0x04         /**< \brief (OSCCTRL_INTENSET offset) Interrupt Enable Set */
#define OSCCTRL_INTENSET_RESETVALUE 0x00000000u  /**< \brief (OSCCTRL_INTENSET reset_value) Interrupt Enable Set */

#define OSCCTRL_INTENSET_XOSCRDY_Pos 0            /**< \brief (OSCCTRL_INTENSET) XOSC Ready Interrupt Enable */
#define OSCCTRL_INTENSET_XOSCRDY    (0x1u << OSCCTRL_INTENSET_XOSCRDY_Pos)
#define OSCCTRL_INTENSET_XOSCFAIL_Pos 1            /**< \brief (OSCCTRL_INTENSET) XOSC Clock Failure Detector Interrupt Enable */
#define OSCCTRL_INTENSET_XOSCFAIL   (0x1u << OSCCTRL_INTENSET_XOSCFAIL_Pos)
#define OSCCTRL_INTENSET_OSC16MRDY_Pos 4            /**< \brief (OSCCTRL_INTENSET) OSC16M Ready Interrupt Enable */
#define OSCCTRL_INTENSET_OSC16MRDY  (0x1u << OSCCTRL_INTENSET_OSC16MRDY_Pos)
#define OSCCTRL_INTENSET_DFLLRDY_Pos 8            /**< \brief (OSCCTRL_INTENSET) DFLL Ready Interrupt Enable */
#define OSCCTRL_INTENSET_DFLLRDY    (0x1u << OSCCTRL_INTENSET_DFLLRDY_Pos)
#define OSCCTRL_INTENSET_DFLLOOB_Pos 9            /**< \brief (OSCCTRL_INTENSET) DFLL Out Of Bounds Interrupt Enable */
#define OSCCTRL_INTENSET_DFLLOOB    (0x1u << OSCCTRL_INTENSET_DFLLOOB_Pos)
#define OSCCTRL_INTENSET_DFLLLCKF_Pos 10           /**< \brief (OSCCTRL_INTENSET) DFLL Lock Fine Interrupt Enable */
#define OSCCTRL_INTENSET_DFLLLCKF   (0x1u << OSCCTRL_INTENSET_DFLLLCKF_Pos)
#define OSCCTRL_INTENSET_DFLLLCKC_Pos 11           /**< \brief (OSCCTRL_INTENSET) DFLL Lock Coarse Interrupt Enable */
#define OSCCTRL_INTENSET_DFLLLCKC   (0x1u << OSCCTRL_INTENSET_DFLLLCKC_Pos)
#define OSCCTRL_INTENSET_DFLLRCS_Pos 12           /**< \brief (OSCCTRL_INTENSET) DFLL Reference Clock Stopped Interrupt Enable */
#define OSCCTRL_INTENSET_DFLLRCS    (0x1u << OSCCTRL_INTENSET_DFLLRCS_Pos)
#define OSCCTRL_INTENSET_DPLLLCKR_Pos 16           /**< \brief (OSCCTRL_INTENSET) DPLL Lock Rise Interrupt Enable */
#define OSCCTRL_INTENSET_DPLLLCKR   (0x1u << OSCCTRL_INTENSET_DPLLLCKR_Pos)
#define OSCCTRL_INTENSET_DPLLLCKF_Pos 17           /**< \brief (OSCCTRL_INTENSET) DPLL Lock Fall Interrupt Enable */
#define OSCCTRL_INTENSET_DPLLLCKF   (0x1u << OSCCTRL_INTENSET_DPLLLCKF_Pos)
#define OSCCTRL_INTENSET_DPLLLTO_Pos 18           /**< \brief (OSCCTRL_INTENSET) DPLL Time Out Interrupt Enable */
#define OSCCTRL_INTENSET_DPLLLTO    (0x1u << OSCCTRL_INTENSET_DPLLLTO_Pos)
#define OSCCTRL_INTENSET_DPLLLDRTO_Pos 19           /**< \brief (OSCCTRL_INTENSET) DPLL Ratio Ready Interrupt Enable */
#define OSCCTRL_INTENSET_DPLLLDRTO  (0x1u << OSCCTRL_INTENSET_DPLLLDRTO_Pos)
#define OSCCTRL_INTENSET_MASK       0x000F1F13u  /**< \brief (OSCCTRL_INTENSET) MASK Register */

/* -------- OSCCTRL_INTFLAG : (OSCCTRL Offset: 0x08) (R/W 32) Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint32_t XOSCRDY:1;        /*!< bit:      0  XOSC Ready                         */
    __I uint32_t XOSCFAIL:1;       /*!< bit:      1  XOSC Clock Failure Detector        */
    __I uint32_t :2;               /*!< bit:  2.. 3  Reserved                           */
    __I uint32_t OSC16MRDY:1;      /*!< bit:      4  OSC16M Ready                       */
    __I uint32_t :3;               /*!< bit:  5.. 7  Reserved                           */
    __I uint32_t DFLLRDY:1;        /*!< bit:      8  DFLL Ready                         */
    __I uint32_t DFLLOOB:1;        /*!< bit:      9  DFLL Out Of Bounds                 */
    __I uint32_t DFLLLCKF:1;       /*!< bit:     10  DFLL Lock Fine                     */
    __I uint32_t DFLLLCKC:1;       /*!< bit:     11  DFLL Lock Coarse                   */
    __I uint32_t DFLLRCS:1;        /*!< bit:     12  DFLL Reference Clock Stopped       */
    __I uint32_t :3;               /*!< bit: 13..15  Reserved                           */
    __I uint32_t DPLLLCKR:1;       /*!< bit:     16  DPLL Lock Rise                     */
    __I uint32_t DPLLLCKF:1;       /*!< bit:     17  DPLL Lock Fall                     */
    __I uint32_t DPLLLTO:1;        /*!< bit:     18  DPLL Timeout                       */
    __I uint32_t DPLLLDRTO:1;      /*!< bit:     19  DPLL Ratio Ready                   */
    __I uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} OSCCTRL_INTFLAG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_INTFLAG_OFFSET      0x08         /**< \brief (OSCCTRL_INTFLAG offset) Interrupt Flag Status and Clear */
#define OSCCTRL_INTFLAG_RESETVALUE  0x00000000u  /**< \brief (OSCCTRL_INTFLAG reset_value) Interrupt Flag Status and Clear */

#define OSCCTRL_INTFLAG_XOSCRDY_Pos 0            /**< \brief (OSCCTRL_INTFLAG) XOSC Ready */
#define OSCCTRL_INTFLAG_XOSCRDY     (0x1u << OSCCTRL_INTFLAG_XOSCRDY_Pos)
#define OSCCTRL_INTFLAG_XOSCFAIL_Pos 1            /**< \brief (OSCCTRL_INTFLAG) XOSC Clock Failure Detector */
#define OSCCTRL_INTFLAG_XOSCFAIL    (0x1u << OSCCTRL_INTFLAG_XOSCFAIL_Pos)
#define OSCCTRL_INTFLAG_OSC16MRDY_Pos 4            /**< \brief (OSCCTRL_INTFLAG) OSC16M Ready */
#define OSCCTRL_INTFLAG_OSC16MRDY   (0x1u << OSCCTRL_INTFLAG_OSC16MRDY_Pos)
#define OSCCTRL_INTFLAG_DFLLRDY_Pos 8            /**< \brief (OSCCTRL_INTFLAG) DFLL Ready */
#define OSCCTRL_INTFLAG_DFLLRDY     (0x1u << OSCCTRL_INTFLAG_DFLLRDY_Pos)
#define OSCCTRL_INTFLAG_DFLLOOB_Pos 9            /**< \brief (OSCCTRL_INTFLAG) DFLL Out Of Bounds */
#define OSCCTRL_INTFLAG_DFLLOOB     (0x1u << OSCCTRL_INTFLAG_DFLLOOB_Pos)
#define OSCCTRL_INTFLAG_DFLLLCKF_Pos 10           /**< \brief (OSCCTRL_INTFLAG) DFLL Lock Fine */
#define OSCCTRL_INTFLAG_DFLLLCKF    (0x1u << OSCCTRL_INTFLAG_DFLLLCKF_Pos)
#define OSCCTRL_INTFLAG_DFLLLCKC_Pos 11           /**< \brief (OSCCTRL_INTFLAG) DFLL Lock Coarse */
#define OSCCTRL_INTFLAG_DFLLLCKC    (0x1u << OSCCTRL_INTFLAG_DFLLLCKC_Pos)
#define OSCCTRL_INTFLAG_DFLLRCS_Pos 12           /**< \brief (OSCCTRL_INTFLAG) DFLL Reference Clock Stopped */
#define OSCCTRL_INTFLAG_DFLLRCS     (0x1u << OSCCTRL_INTFLAG_DFLLRCS_Pos)
#define OSCCTRL_INTFLAG_DPLLLCKR_Pos 16           /**< \brief (OSCCTRL_INTFLAG) DPLL Lock Rise */
#define OSCCTRL_INTFLAG_DPLLLCKR    (0x1u << OSCCTRL_INTFLAG_DPLLLCKR_Pos)
#define OSCCTRL_INTFLAG_DPLLLCKF_Pos 17           /**< \brief (OSCCTRL_INTFLAG) DPLL Lock Fall */
#define OSCCTRL_INTFLAG_DPLLLCKF    (0x1u << OSCCTRL_INTFLAG_DPLLLCKF_Pos)
#define OSCCTRL_INTFLAG_DPLLLTO_Pos 18           /**< \brief (OSCCTRL_INTFLAG) DPLL Timeout */
#define OSCCTRL_INTFLAG_DPLLLTO     (0x1u << OSCCTRL_INTFLAG_DPLLLTO_Pos)
#define OSCCTRL_INTFLAG_DPLLLDRTO_Pos 19           /**< \brief (OSCCTRL_INTFLAG) DPLL Ratio Ready */
#define OSCCTRL_INTFLAG_DPLLLDRTO   (0x1u << OSCCTRL_INTFLAG_DPLLLDRTO_Pos)
#define OSCCTRL_INTFLAG_MASK        0x000F1F13u  /**< \brief (OSCCTRL_INTFLAG) MASK Register */

/* -------- OSCCTRL_STATUS : (OSCCTRL Offset: 0x0C) (R/  32) Power and Clocks Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t XOSCRDY:1;        /*!< bit:      0  XOSC Ready                         */
    uint32_t XOSCFAIL:1;       /*!< bit:      1  XOSC Clock Failure Detector        */
    uint32_t XOSCCKSW:1;       /*!< bit:      2  XOSC Clock Switch                  */
    uint32_t :1;               /*!< bit:      3  Reserved                           */
    uint32_t OSC16MRDY:1;      /*!< bit:      4  OSC16M Ready                       */
    uint32_t :3;               /*!< bit:  5.. 7  Reserved                           */
    uint32_t DFLLRDY:1;        /*!< bit:      8  DFLL Ready                         */
    uint32_t DFLLOOB:1;        /*!< bit:      9  DFLL Out Of Bounds                 */
    uint32_t DFLLLCKF:1;       /*!< bit:     10  DFLL Lock Fine                     */
    uint32_t DFLLLCKC:1;       /*!< bit:     11  DFLL Lock Coarse                   */
    uint32_t DFLLRCS:1;        /*!< bit:     12  DFLL Reference Clock Stopped       */
    uint32_t :3;               /*!< bit: 13..15  Reserved                           */
    uint32_t DPLLLCKR:1;       /*!< bit:     16  DPLL Lock Rise                     */
    uint32_t DPLLLCKF:1;       /*!< bit:     17  DPLL Lock Fall                     */
    uint32_t DPLLTO:1;         /*!< bit:     18  DPLL Timeout                       */
    uint32_t DPLLLDRTO:1;      /*!< bit:     19  DPLL Ratio Ready                   */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} OSCCTRL_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_STATUS_OFFSET       0x0C         /**< \brief (OSCCTRL_STATUS offset) Power and Clocks Status */
#define OSCCTRL_STATUS_RESETVALUE   0x00000000u  /**< \brief (OSCCTRL_STATUS reset_value) Power and Clocks Status */

#define OSCCTRL_STATUS_XOSCRDY_Pos  0            /**< \brief (OSCCTRL_STATUS) XOSC Ready */
#define OSCCTRL_STATUS_XOSCRDY      (0x1u << OSCCTRL_STATUS_XOSCRDY_Pos)
#define OSCCTRL_STATUS_XOSCFAIL_Pos 1            /**< \brief (OSCCTRL_STATUS) XOSC Clock Failure Detector */
#define OSCCTRL_STATUS_XOSCFAIL     (0x1u << OSCCTRL_STATUS_XOSCFAIL_Pos)
#define OSCCTRL_STATUS_XOSCCKSW_Pos 2            /**< \brief (OSCCTRL_STATUS) XOSC Clock Switch */
#define OSCCTRL_STATUS_XOSCCKSW     (0x1u << OSCCTRL_STATUS_XOSCCKSW_Pos)
#define OSCCTRL_STATUS_OSC16MRDY_Pos 4            /**< \brief (OSCCTRL_STATUS) OSC16M Ready */
#define OSCCTRL_STATUS_OSC16MRDY    (0x1u << OSCCTRL_STATUS_OSC16MRDY_Pos)
#define OSCCTRL_STATUS_DFLLRDY_Pos  8            /**< \brief (OSCCTRL_STATUS) DFLL Ready */
#define OSCCTRL_STATUS_DFLLRDY      (0x1u << OSCCTRL_STATUS_DFLLRDY_Pos)
#define OSCCTRL_STATUS_DFLLOOB_Pos  9            /**< \brief (OSCCTRL_STATUS) DFLL Out Of Bounds */
#define OSCCTRL_STATUS_DFLLOOB      (0x1u << OSCCTRL_STATUS_DFLLOOB_Pos)
#define OSCCTRL_STATUS_DFLLLCKF_Pos 10           /**< \brief (OSCCTRL_STATUS) DFLL Lock Fine */
#define OSCCTRL_STATUS_DFLLLCKF     (0x1u << OSCCTRL_STATUS_DFLLLCKF_Pos)
#define OSCCTRL_STATUS_DFLLLCKC_Pos 11           /**< \brief (OSCCTRL_STATUS) DFLL Lock Coarse */
#define OSCCTRL_STATUS_DFLLLCKC     (0x1u << OSCCTRL_STATUS_DFLLLCKC_Pos)
#define OSCCTRL_STATUS_DFLLRCS_Pos  12           /**< \brief (OSCCTRL_STATUS) DFLL Reference Clock Stopped */
#define OSCCTRL_STATUS_DFLLRCS      (0x1u << OSCCTRL_STATUS_DFLLRCS_Pos)
#define OSCCTRL_STATUS_DPLLLCKR_Pos 16           /**< \brief (OSCCTRL_STATUS) DPLL Lock Rise */
#define OSCCTRL_STATUS_DPLLLCKR     (0x1u << OSCCTRL_STATUS_DPLLLCKR_Pos)
#define OSCCTRL_STATUS_DPLLLCKF_Pos 17           /**< \brief (OSCCTRL_STATUS) DPLL Lock Fall */
#define OSCCTRL_STATUS_DPLLLCKF     (0x1u << OSCCTRL_STATUS_DPLLLCKF_Pos)
#define OSCCTRL_STATUS_DPLLTO_Pos   18           /**< \brief (OSCCTRL_STATUS) DPLL Timeout */
#define OSCCTRL_STATUS_DPLLTO       (0x1u << OSCCTRL_STATUS_DPLLTO_Pos)
#define OSCCTRL_STATUS_DPLLLDRTO_Pos 19           /**< \brief (OSCCTRL_STATUS) DPLL Ratio Ready */
#define OSCCTRL_STATUS_DPLLLDRTO    (0x1u << OSCCTRL_STATUS_DPLLLDRTO_Pos)
#define OSCCTRL_STATUS_MASK         0x000F1F17u  /**< \brief (OSCCTRL_STATUS) MASK Register */

/* -------- OSCCTRL_XOSCCTRL : (OSCCTRL Offset: 0x10) (R/W 16) External Multipurpose Crystal Oscillator (XOSC) Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t :1;               /*!< bit:      0  Reserved                           */
    uint16_t ENABLE:1;         /*!< bit:      1  Oscillator Enable                  */
    uint16_t XTALEN:1;         /*!< bit:      2  Crystal Oscillator Enable          */
    uint16_t CFDEN:1;          /*!< bit:      3  Xosc Clock Failure Detecteor Enable */
    uint16_t SWBEN:1;          /*!< bit:      4  Xosc Clock Switch Enable           */
    uint16_t :1;               /*!< bit:      5  Reserved                           */
    uint16_t RUNSTDBY:1;       /*!< bit:      6  Run in Standby                     */
    uint16_t ONDEMAND:1;       /*!< bit:      7  On Demand Control                  */
    uint16_t GAIN:3;           /*!< bit:  8..10  Oscillator Gain                    */
    uint16_t AMPGC:1;          /*!< bit:     11  Automatic Amplitude Gain Control   */
    uint16_t STARTUP:4;        /*!< bit: 12..15  Start-Up Time                      */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} OSCCTRL_XOSCCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_XOSCCTRL_OFFSET     0x10         /**< \brief (OSCCTRL_XOSCCTRL offset) External Multipurpose Crystal Oscillator (XOSC) Control */
#define OSCCTRL_XOSCCTRL_RESETVALUE 0x0080u      /**< \brief (OSCCTRL_XOSCCTRL reset_value) External Multipurpose Crystal Oscillator (XOSC) Control */

#define OSCCTRL_XOSCCTRL_ENABLE_Pos 1            /**< \brief (OSCCTRL_XOSCCTRL) Oscillator Enable */
#define OSCCTRL_XOSCCTRL_ENABLE     (0x1u << OSCCTRL_XOSCCTRL_ENABLE_Pos)
#define OSCCTRL_XOSCCTRL_XTALEN_Pos 2            /**< \brief (OSCCTRL_XOSCCTRL) Crystal Oscillator Enable */
#define OSCCTRL_XOSCCTRL_XTALEN     (0x1u << OSCCTRL_XOSCCTRL_XTALEN_Pos)
#define OSCCTRL_XOSCCTRL_CFDEN_Pos  3            /**< \brief (OSCCTRL_XOSCCTRL) Xosc Clock Failure Detecteor Enable */
#define OSCCTRL_XOSCCTRL_CFDEN      (0x1u << OSCCTRL_XOSCCTRL_CFDEN_Pos)
#define OSCCTRL_XOSCCTRL_SWBEN_Pos  4            /**< \brief (OSCCTRL_XOSCCTRL) Xosc Clock Switch Enable */
#define OSCCTRL_XOSCCTRL_SWBEN      (0x1u << OSCCTRL_XOSCCTRL_SWBEN_Pos)
#define OSCCTRL_XOSCCTRL_RUNSTDBY_Pos 6            /**< \brief (OSCCTRL_XOSCCTRL) Run in Standby */
#define OSCCTRL_XOSCCTRL_RUNSTDBY   (0x1u << OSCCTRL_XOSCCTRL_RUNSTDBY_Pos)
#define OSCCTRL_XOSCCTRL_ONDEMAND_Pos 7            /**< \brief (OSCCTRL_XOSCCTRL) On Demand Control */
#define OSCCTRL_XOSCCTRL_ONDEMAND   (0x1u << OSCCTRL_XOSCCTRL_ONDEMAND_Pos)
#define OSCCTRL_XOSCCTRL_GAIN_Pos   8            /**< \brief (OSCCTRL_XOSCCTRL) Oscillator Gain */
#define OSCCTRL_XOSCCTRL_GAIN_Msk   (0x7u << OSCCTRL_XOSCCTRL_GAIN_Pos)
#define OSCCTRL_XOSCCTRL_GAIN(value) (OSCCTRL_XOSCCTRL_GAIN_Msk & ((value) << OSCCTRL_XOSCCTRL_GAIN_Pos))
#define OSCCTRL_XOSCCTRL_AMPGC_Pos  11           /**< \brief (OSCCTRL_XOSCCTRL) Automatic Amplitude Gain Control */
#define OSCCTRL_XOSCCTRL_AMPGC      (0x1u << OSCCTRL_XOSCCTRL_AMPGC_Pos)
#define OSCCTRL_XOSCCTRL_STARTUP_Pos 12           /**< \brief (OSCCTRL_XOSCCTRL) Start-Up Time */
#define OSCCTRL_XOSCCTRL_STARTUP_Msk (0xFu << OSCCTRL_XOSCCTRL_STARTUP_Pos)
#define OSCCTRL_XOSCCTRL_STARTUP(value) (OSCCTRL_XOSCCTRL_STARTUP_Msk & ((value) << OSCCTRL_XOSCCTRL_STARTUP_Pos))
#define OSCCTRL_XOSCCTRL_MASK       0xFFDEu      /**< \brief (OSCCTRL_XOSCCTRL) MASK Register */

/* -------- OSCCTRL_CFDPRESC : (OSCCTRL Offset: 0x12) (R/W  8) Cloc Failure Detector Prescaler -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  CFDPRESC:3;       /*!< bit:  0.. 2  Clock Failure Detector Prescaler   */
    uint8_t  :5;               /*!< bit:  3.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} OSCCTRL_CFDPRESC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_CFDPRESC_OFFSET     0x12         /**< \brief (OSCCTRL_CFDPRESC offset) Cloc Failure Detector Prescaler */
#define OSCCTRL_CFDPRESC_RESETVALUE 0x00u        /**< \brief (OSCCTRL_CFDPRESC reset_value) Cloc Failure Detector Prescaler */

#define OSCCTRL_CFDPRESC_CFDPRESC_Pos 0            /**< \brief (OSCCTRL_CFDPRESC) Clock Failure Detector Prescaler */
#define OSCCTRL_CFDPRESC_CFDPRESC_Msk (0x7u << OSCCTRL_CFDPRESC_CFDPRESC_Pos)
#define OSCCTRL_CFDPRESC_CFDPRESC(value) (OSCCTRL_CFDPRESC_CFDPRESC_Msk & ((value) << OSCCTRL_CFDPRESC_CFDPRESC_Pos))
#define OSCCTRL_CFDPRESC_MASK       0x07u        /**< \brief (OSCCTRL_CFDPRESC) MASK Register */

/* -------- OSCCTRL_EVCTRL : (OSCCTRL Offset: 0x13) (R/W  8) Event Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  CFDEO:1;          /*!< bit:      0  Clock Failure Detector Event Output Enable */
    uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} OSCCTRL_EVCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_EVCTRL_OFFSET       0x13         /**< \brief (OSCCTRL_EVCTRL offset) Event Control */
#define OSCCTRL_EVCTRL_RESETVALUE   0x00u        /**< \brief (OSCCTRL_EVCTRL reset_value) Event Control */

#define OSCCTRL_EVCTRL_CFDEO_Pos    0            /**< \brief (OSCCTRL_EVCTRL) Clock Failure Detector Event Output Enable */
#define OSCCTRL_EVCTRL_CFDEO        (0x1u << OSCCTRL_EVCTRL_CFDEO_Pos)
#define OSCCTRL_EVCTRL_MASK         0x01u        /**< \brief (OSCCTRL_EVCTRL) MASK Register */

/* -------- OSCCTRL_OSC16MCTRL : (OSCCTRL Offset: 0x14) (R/W  8) 16MHz Internal Oscillator (OSC16M) Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  :1;               /*!< bit:      0  Reserved                           */
    uint8_t  ENABLE:1;         /*!< bit:      1  Oscillator Enable                  */
    uint8_t  FSEL:2;           /*!< bit:  2.. 3  Oscillator Frequency Select        */
    uint8_t  :2;               /*!< bit:  4.. 5  Reserved                           */
    uint8_t  RUNSTDBY:1;       /*!< bit:      6  Run in Standby                     */
    uint8_t  ONDEMAND:1;       /*!< bit:      7  On Demand Control                  */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} OSCCTRL_OSC16MCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_OSC16MCTRL_OFFSET   0x14         /**< \brief (OSCCTRL_OSC16MCTRL offset) 16MHz Internal Oscillator (OSC16M) Control */
#define OSCCTRL_OSC16MCTRL_RESETVALUE 0x82u        /**< \brief (OSCCTRL_OSC16MCTRL reset_value) 16MHz Internal Oscillator (OSC16M) Control */

#define OSCCTRL_OSC16MCTRL_ENABLE_Pos 1            /**< \brief (OSCCTRL_OSC16MCTRL) Oscillator Enable */
#define OSCCTRL_OSC16MCTRL_ENABLE   (0x1u << OSCCTRL_OSC16MCTRL_ENABLE_Pos)
#define OSCCTRL_OSC16MCTRL_FSEL_Pos 2            /**< \brief (OSCCTRL_OSC16MCTRL) Oscillator Frequency Select */
#define OSCCTRL_OSC16MCTRL_FSEL_Msk (0x3u << OSCCTRL_OSC16MCTRL_FSEL_Pos)
#define OSCCTRL_OSC16MCTRL_FSEL(value) (OSCCTRL_OSC16MCTRL_FSEL_Msk & ((value) << OSCCTRL_OSC16MCTRL_FSEL_Pos))
#define   OSCCTRL_OSC16MCTRL_FSEL_4_Val   0x0u   /**< \brief (OSCCTRL_OSC16MCTRL) 4MHz */
#define   OSCCTRL_OSC16MCTRL_FSEL_8_Val   0x1u   /**< \brief (OSCCTRL_OSC16MCTRL) 8MHz */
#define   OSCCTRL_OSC16MCTRL_FSEL_12_Val  0x2u   /**< \brief (OSCCTRL_OSC16MCTRL) 12MHz */
#define   OSCCTRL_OSC16MCTRL_FSEL_16_Val  0x3u   /**< \brief (OSCCTRL_OSC16MCTRL) 16MHz */
#define OSCCTRL_OSC16MCTRL_FSEL_4   (OSCCTRL_OSC16MCTRL_FSEL_4_Val << OSCCTRL_OSC16MCTRL_FSEL_Pos)
#define OSCCTRL_OSC16MCTRL_FSEL_8   (OSCCTRL_OSC16MCTRL_FSEL_8_Val << OSCCTRL_OSC16MCTRL_FSEL_Pos)
#define OSCCTRL_OSC16MCTRL_FSEL_12  (OSCCTRL_OSC16MCTRL_FSEL_12_Val << OSCCTRL_OSC16MCTRL_FSEL_Pos)
#define OSCCTRL_OSC16MCTRL_FSEL_16  (OSCCTRL_OSC16MCTRL_FSEL_16_Val << OSCCTRL_OSC16MCTRL_FSEL_Pos)
#define OSCCTRL_OSC16MCTRL_RUNSTDBY_Pos 6            /**< \brief (OSCCTRL_OSC16MCTRL) Run in Standby */
#define OSCCTRL_OSC16MCTRL_RUNSTDBY (0x1u << OSCCTRL_OSC16MCTRL_RUNSTDBY_Pos)
#define OSCCTRL_OSC16MCTRL_ONDEMAND_Pos 7            /**< \brief (OSCCTRL_OSC16MCTRL) On Demand Control */
#define OSCCTRL_OSC16MCTRL_ONDEMAND (0x1u << OSCCTRL_OSC16MCTRL_ONDEMAND_Pos)
#define OSCCTRL_OSC16MCTRL_MASK     0xCEu        /**< \brief (OSCCTRL_OSC16MCTRL) MASK Register */

/* -------- OSCCTRL_DFLLCTRL : (OSCCTRL Offset: 0x18) (R/W 16) DFLL48M Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t :1;               /*!< bit:      0  Reserved                           */
    uint16_t ENABLE:1;         /*!< bit:      1  DFLL Enable                        */
    uint16_t MODE:1;           /*!< bit:      2  Operating Mode Selection           */
    uint16_t STABLE:1;         /*!< bit:      3  Stable DFLL Frequency              */
    uint16_t LLAW:1;           /*!< bit:      4  Lose Lock After Wake               */
    uint16_t USBCRM:1;         /*!< bit:      5  USB Clock Recovery Mode            */
    uint16_t RUNSTDBY:1;       /*!< bit:      6  Run in Standby                     */
    uint16_t ONDEMAND:1;       /*!< bit:      7  On Demand Control                  */
    uint16_t CCDIS:1;          /*!< bit:      8  Chill Cycle Disable                */
    uint16_t QLDIS:1;          /*!< bit:      9  Quick Lock Disable                 */
    uint16_t BPLCKC:1;         /*!< bit:     10  Bypass Coarse Lock                 */
    uint16_t WAITLOCK:1;       /*!< bit:     11  Wait Lock                          */
    uint16_t :4;               /*!< bit: 12..15  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} OSCCTRL_DFLLCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DFLLCTRL_OFFSET     0x18         /**< \brief (OSCCTRL_DFLLCTRL offset) DFLL48M Control */
#define OSCCTRL_DFLLCTRL_RESETVALUE 0x0080u      /**< \brief (OSCCTRL_DFLLCTRL reset_value) DFLL48M Control */

#define OSCCTRL_DFLLCTRL_ENABLE_Pos 1            /**< \brief (OSCCTRL_DFLLCTRL) DFLL Enable */
#define OSCCTRL_DFLLCTRL_ENABLE     (0x1u << OSCCTRL_DFLLCTRL_ENABLE_Pos)
#define OSCCTRL_DFLLCTRL_MODE_Pos   2            /**< \brief (OSCCTRL_DFLLCTRL) Operating Mode Selection */
#define OSCCTRL_DFLLCTRL_MODE       (0x1u << OSCCTRL_DFLLCTRL_MODE_Pos)
#define OSCCTRL_DFLLCTRL_STABLE_Pos 3            /**< \brief (OSCCTRL_DFLLCTRL) Stable DFLL Frequency */
#define OSCCTRL_DFLLCTRL_STABLE     (0x1u << OSCCTRL_DFLLCTRL_STABLE_Pos)
#define OSCCTRL_DFLLCTRL_LLAW_Pos   4            /**< \brief (OSCCTRL_DFLLCTRL) Lose Lock After Wake */
#define OSCCTRL_DFLLCTRL_LLAW       (0x1u << OSCCTRL_DFLLCTRL_LLAW_Pos)
#define OSCCTRL_DFLLCTRL_USBCRM_Pos 5            /**< \brief (OSCCTRL_DFLLCTRL) USB Clock Recovery Mode */
#define OSCCTRL_DFLLCTRL_USBCRM     (0x1u << OSCCTRL_DFLLCTRL_USBCRM_Pos)
#define OSCCTRL_DFLLCTRL_RUNSTDBY_Pos 6            /**< \brief (OSCCTRL_DFLLCTRL) Run in Standby */
#define OSCCTRL_DFLLCTRL_RUNSTDBY   (0x1u << OSCCTRL_DFLLCTRL_RUNSTDBY_Pos)
#define OSCCTRL_DFLLCTRL_ONDEMAND_Pos 7            /**< \brief (OSCCTRL_DFLLCTRL) On Demand Control */
#define OSCCTRL_DFLLCTRL_ONDEMAND   (0x1u << OSCCTRL_DFLLCTRL_ONDEMAND_Pos)
#define OSCCTRL_DFLLCTRL_CCDIS_Pos  8            /**< \brief (OSCCTRL_DFLLCTRL) Chill Cycle Disable */
#define OSCCTRL_DFLLCTRL_CCDIS      (0x1u << OSCCTRL_DFLLCTRL_CCDIS_Pos)
#define OSCCTRL_DFLLCTRL_QLDIS_Pos  9            /**< \brief (OSCCTRL_DFLLCTRL) Quick Lock Disable */
#define OSCCTRL_DFLLCTRL_QLDIS      (0x1u << OSCCTRL_DFLLCTRL_QLDIS_Pos)
#define OSCCTRL_DFLLCTRL_BPLCKC_Pos 10           /**< \brief (OSCCTRL_DFLLCTRL) Bypass Coarse Lock */
#define OSCCTRL_DFLLCTRL_BPLCKC     (0x1u << OSCCTRL_DFLLCTRL_BPLCKC_Pos)
#define OSCCTRL_DFLLCTRL_WAITLOCK_Pos 11           /**< \brief (OSCCTRL_DFLLCTRL) Wait Lock */
#define OSCCTRL_DFLLCTRL_WAITLOCK   (0x1u << OSCCTRL_DFLLCTRL_WAITLOCK_Pos)
#define OSCCTRL_DFLLCTRL_MASK       0x0FFEu      /**< \brief (OSCCTRL_DFLLCTRL) MASK Register */

/* -------- OSCCTRL_DFLLVAL : (OSCCTRL Offset: 0x1C) (R/W 32) DFLL48M Value -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t FINE:10;          /*!< bit:  0.. 9  Fine Value                         */
    uint32_t COARSE:6;         /*!< bit: 10..15  Coarse Value                       */
    uint32_t DIFF:16;          /*!< bit: 16..31  Multiplication Ratio Difference    */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} OSCCTRL_DFLLVAL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DFLLVAL_OFFSET      0x1C         /**< \brief (OSCCTRL_DFLLVAL offset) DFLL48M Value */
#define OSCCTRL_DFLLVAL_RESETVALUE  0x00000000u  /**< \brief (OSCCTRL_DFLLVAL reset_value) DFLL48M Value */

#define OSCCTRL_DFLLVAL_FINE_Pos    0            /**< \brief (OSCCTRL_DFLLVAL) Fine Value */
#define OSCCTRL_DFLLVAL_FINE_Msk    (0x3FFu << OSCCTRL_DFLLVAL_FINE_Pos)
#define OSCCTRL_DFLLVAL_FINE(value) (OSCCTRL_DFLLVAL_FINE_Msk & ((value) << OSCCTRL_DFLLVAL_FINE_Pos))
#define OSCCTRL_DFLLVAL_COARSE_Pos  10           /**< \brief (OSCCTRL_DFLLVAL) Coarse Value */
#define OSCCTRL_DFLLVAL_COARSE_Msk  (0x3Fu << OSCCTRL_DFLLVAL_COARSE_Pos)
#define OSCCTRL_DFLLVAL_COARSE(value) (OSCCTRL_DFLLVAL_COARSE_Msk & ((value) << OSCCTRL_DFLLVAL_COARSE_Pos))
#define OSCCTRL_DFLLVAL_DIFF_Pos    16           /**< \brief (OSCCTRL_DFLLVAL) Multiplication Ratio Difference */
#define OSCCTRL_DFLLVAL_DIFF_Msk    (0xFFFFu << OSCCTRL_DFLLVAL_DIFF_Pos)
#define OSCCTRL_DFLLVAL_DIFF(value) (OSCCTRL_DFLLVAL_DIFF_Msk & ((value) << OSCCTRL_DFLLVAL_DIFF_Pos))
#define OSCCTRL_DFLLVAL_MASK        0xFFFFFFFFu  /**< \brief (OSCCTRL_DFLLVAL) MASK Register */

/* -------- OSCCTRL_DFLLMUL : (OSCCTRL Offset: 0x20) (R/W 32) DFLL48M Multiplier -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t MUL:16;           /*!< bit:  0..15  DFLL Multiply Factor               */
    uint32_t FSTEP:10;         /*!< bit: 16..25  Fine Maximum Step                  */
    uint32_t CSTEP:6;          /*!< bit: 26..31  Coarse Maximum Step                */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} OSCCTRL_DFLLMUL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DFLLMUL_OFFSET      0x20         /**< \brief (OSCCTRL_DFLLMUL offset) DFLL48M Multiplier */
#define OSCCTRL_DFLLMUL_RESETVALUE  0x00000000u  /**< \brief (OSCCTRL_DFLLMUL reset_value) DFLL48M Multiplier */

#define OSCCTRL_DFLLMUL_MUL_Pos     0            /**< \brief (OSCCTRL_DFLLMUL) DFLL Multiply Factor */
#define OSCCTRL_DFLLMUL_MUL_Msk     (0xFFFFu << OSCCTRL_DFLLMUL_MUL_Pos)
#define OSCCTRL_DFLLMUL_MUL(value)  (OSCCTRL_DFLLMUL_MUL_Msk & ((value) << OSCCTRL_DFLLMUL_MUL_Pos))
#define OSCCTRL_DFLLMUL_FSTEP_Pos   16           /**< \brief (OSCCTRL_DFLLMUL) Fine Maximum Step */
#define OSCCTRL_DFLLMUL_FSTEP_Msk   (0x3FFu << OSCCTRL_DFLLMUL_FSTEP_Pos)
#define OSCCTRL_DFLLMUL_FSTEP(value) (OSCCTRL_DFLLMUL_FSTEP_Msk & ((value) << OSCCTRL_DFLLMUL_FSTEP_Pos))
#define OSCCTRL_DFLLMUL_CSTEP_Pos   26           /**< \brief (OSCCTRL_DFLLMUL) Coarse Maximum Step */
#define OSCCTRL_DFLLMUL_CSTEP_Msk   (0x3Fu << OSCCTRL_DFLLMUL_CSTEP_Pos)
#define OSCCTRL_DFLLMUL_CSTEP(value) (OSCCTRL_DFLLMUL_CSTEP_Msk & ((value) << OSCCTRL_DFLLMUL_CSTEP_Pos))
#define OSCCTRL_DFLLMUL_MASK        0xFFFFFFFFu  /**< \brief (OSCCTRL_DFLLMUL) MASK Register */

/* -------- OSCCTRL_DFLLSYNC : (OSCCTRL Offset: 0x24) (R/W  8) DFLL48M Synchronization -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  :7;               /*!< bit:  0.. 6  Reserved                           */
    uint8_t  READREQ:1;        /*!< bit:      7  Read Request                       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} OSCCTRL_DFLLSYNC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DFLLSYNC_OFFSET     0x24         /**< \brief (OSCCTRL_DFLLSYNC offset) DFLL48M Synchronization */
#define OSCCTRL_DFLLSYNC_RESETVALUE 0x00u        /**< \brief (OSCCTRL_DFLLSYNC reset_value) DFLL48M Synchronization */

#define OSCCTRL_DFLLSYNC_READREQ_Pos 7            /**< \brief (OSCCTRL_DFLLSYNC) Read Request */
#define OSCCTRL_DFLLSYNC_READREQ    (0x1u << OSCCTRL_DFLLSYNC_READREQ_Pos)
#define OSCCTRL_DFLLSYNC_MASK       0x80u        /**< \brief (OSCCTRL_DFLLSYNC) MASK Register */

/* -------- OSCCTRL_DPLLCTRLA : (OSCCTRL Offset: 0x28) (R/W  8) DPLL Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  :1;               /*!< bit:      0  Reserved                           */
    uint8_t  ENABLE:1;         /*!< bit:      1  Enable                             */
    uint8_t  :4;               /*!< bit:  2.. 5  Reserved                           */
    uint8_t  RUNSTDBY:1;       /*!< bit:      6  Run in Standby                     */
    uint8_t  ONDEMAND:1;       /*!< bit:      7  On Demand                          */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} OSCCTRL_DPLLCTRLA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DPLLCTRLA_OFFSET    0x28         /**< \brief (OSCCTRL_DPLLCTRLA offset) DPLL Control */
#define OSCCTRL_DPLLCTRLA_RESETVALUE 0x80u        /**< \brief (OSCCTRL_DPLLCTRLA reset_value) DPLL Control */

#define OSCCTRL_DPLLCTRLA_ENABLE_Pos 1            /**< \brief (OSCCTRL_DPLLCTRLA) Enable */
#define OSCCTRL_DPLLCTRLA_ENABLE    (0x1u << OSCCTRL_DPLLCTRLA_ENABLE_Pos)
#define OSCCTRL_DPLLCTRLA_RUNSTDBY_Pos 6            /**< \brief (OSCCTRL_DPLLCTRLA) Run in Standby */
#define OSCCTRL_DPLLCTRLA_RUNSTDBY  (0x1u << OSCCTRL_DPLLCTRLA_RUNSTDBY_Pos)
#define OSCCTRL_DPLLCTRLA_ONDEMAND_Pos 7            /**< \brief (OSCCTRL_DPLLCTRLA) On Demand */
#define OSCCTRL_DPLLCTRLA_ONDEMAND  (0x1u << OSCCTRL_DPLLCTRLA_ONDEMAND_Pos)
#define OSCCTRL_DPLLCTRLA_MASK      0xC2u        /**< \brief (OSCCTRL_DPLLCTRLA) MASK Register */

/* -------- OSCCTRL_DPLLRATIO : (OSCCTRL Offset: 0x2C) (R/W 32) DPLL Ratio Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t LDR:12;           /*!< bit:  0..11  Loop Divider Ratio                 */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t LDRFRAC:4;        /*!< bit: 16..19  Loop Divider Ratio Fractional Part */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} OSCCTRL_DPLLRATIO_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DPLLRATIO_OFFSET    0x2C         /**< \brief (OSCCTRL_DPLLRATIO offset) DPLL Ratio Control */
#define OSCCTRL_DPLLRATIO_RESETVALUE 0x00000000u  /**< \brief (OSCCTRL_DPLLRATIO reset_value) DPLL Ratio Control */

#define OSCCTRL_DPLLRATIO_LDR_Pos   0            /**< \brief (OSCCTRL_DPLLRATIO) Loop Divider Ratio */
#define OSCCTRL_DPLLRATIO_LDR_Msk   (0xFFFu << OSCCTRL_DPLLRATIO_LDR_Pos)
#define OSCCTRL_DPLLRATIO_LDR(value) (OSCCTRL_DPLLRATIO_LDR_Msk & ((value) << OSCCTRL_DPLLRATIO_LDR_Pos))
#define OSCCTRL_DPLLRATIO_LDRFRAC_Pos 16           /**< \brief (OSCCTRL_DPLLRATIO) Loop Divider Ratio Fractional Part */
#define OSCCTRL_DPLLRATIO_LDRFRAC_Msk (0xFu << OSCCTRL_DPLLRATIO_LDRFRAC_Pos)
#define OSCCTRL_DPLLRATIO_LDRFRAC(value) (OSCCTRL_DPLLRATIO_LDRFRAC_Msk & ((value) << OSCCTRL_DPLLRATIO_LDRFRAC_Pos))
#define OSCCTRL_DPLLRATIO_MASK      0x000F0FFFu  /**< \brief (OSCCTRL_DPLLRATIO) MASK Register */

/* -------- OSCCTRL_DPLLCTRLB : (OSCCTRL Offset: 0x30) (R/W 32) Digital Core Configuration -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t FILTER:2;         /*!< bit:  0.. 1  Proportional Integral Filter Selection */
    uint32_t LPEN:1;           /*!< bit:      2  Low-Power Enable                   */
    uint32_t WUF:1;            /*!< bit:      3  Wake Up Fast                       */
    uint32_t REFCLK:2;         /*!< bit:  4.. 5  Reference Clock Selection          */
    uint32_t :2;               /*!< bit:  6.. 7  Reserved                           */
    uint32_t LTIME:3;          /*!< bit:  8..10  Lock Time                          */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t LBYPASS:1;        /*!< bit:     12  Lock Bypass                        */
    uint32_t :3;               /*!< bit: 13..15  Reserved                           */
    uint32_t DIV:11;           /*!< bit: 16..26  Clock Divider                      */
    uint32_t :5;               /*!< bit: 27..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} OSCCTRL_DPLLCTRLB_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DPLLCTRLB_OFFSET    0x30         /**< \brief (OSCCTRL_DPLLCTRLB offset) Digital Core Configuration */
#define OSCCTRL_DPLLCTRLB_RESETVALUE 0x00000000u  /**< \brief (OSCCTRL_DPLLCTRLB reset_value) Digital Core Configuration */

#define OSCCTRL_DPLLCTRLB_FILTER_Pos 0            /**< \brief (OSCCTRL_DPLLCTRLB) Proportional Integral Filter Selection */
#define OSCCTRL_DPLLCTRLB_FILTER_Msk (0x3u << OSCCTRL_DPLLCTRLB_FILTER_Pos)
#define OSCCTRL_DPLLCTRLB_FILTER(value) (OSCCTRL_DPLLCTRLB_FILTER_Msk & ((value) << OSCCTRL_DPLLCTRLB_FILTER_Pos))
#define OSCCTRL_DPLLCTRLB_LPEN_Pos  2            /**< \brief (OSCCTRL_DPLLCTRLB) Low-Power Enable */
#define OSCCTRL_DPLLCTRLB_LPEN      (0x1u << OSCCTRL_DPLLCTRLB_LPEN_Pos)
#define OSCCTRL_DPLLCTRLB_WUF_Pos   3            /**< \brief (OSCCTRL_DPLLCTRLB) Wake Up Fast */
#define OSCCTRL_DPLLCTRLB_WUF       (0x1u << OSCCTRL_DPLLCTRLB_WUF_Pos)
#define OSCCTRL_DPLLCTRLB_REFCLK_Pos 4            /**< \brief (OSCCTRL_DPLLCTRLB) Reference Clock Selection */
#define OSCCTRL_DPLLCTRLB_REFCLK_Msk (0x3u << OSCCTRL_DPLLCTRLB_REFCLK_Pos)
#define OSCCTRL_DPLLCTRLB_REFCLK(value) (OSCCTRL_DPLLCTRLB_REFCLK_Msk & ((value) << OSCCTRL_DPLLCTRLB_REFCLK_Pos))
#define OSCCTRL_DPLLCTRLB_LTIME_Pos 8            /**< \brief (OSCCTRL_DPLLCTRLB) Lock Time */
#define OSCCTRL_DPLLCTRLB_LTIME_Msk (0x7u << OSCCTRL_DPLLCTRLB_LTIME_Pos)
#define OSCCTRL_DPLLCTRLB_LTIME(value) (OSCCTRL_DPLLCTRLB_LTIME_Msk & ((value) << OSCCTRL_DPLLCTRLB_LTIME_Pos))
#define OSCCTRL_DPLLCTRLB_LBYPASS_Pos 12           /**< \brief (OSCCTRL_DPLLCTRLB) Lock Bypass */
#define OSCCTRL_DPLLCTRLB_LBYPASS   (0x1u << OSCCTRL_DPLLCTRLB_LBYPASS_Pos)
#define OSCCTRL_DPLLCTRLB_DIV_Pos   16           /**< \brief (OSCCTRL_DPLLCTRLB) Clock Divider */
#define OSCCTRL_DPLLCTRLB_DIV_Msk   (0x7FFu << OSCCTRL_DPLLCTRLB_DIV_Pos)
#define OSCCTRL_DPLLCTRLB_DIV(value) (OSCCTRL_DPLLCTRLB_DIV_Msk & ((value) << OSCCTRL_DPLLCTRLB_DIV_Pos))
#define OSCCTRL_DPLLCTRLB_MASK      0x07FF173Fu  /**< \brief (OSCCTRL_DPLLCTRLB) MASK Register */

/* -------- OSCCTRL_DPLLPRESC : (OSCCTRL Offset: 0x34) (R/W  8) DPLL Prescaler -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  PRESC:2;          /*!< bit:  0.. 1  Output Clock Prescaler             */
    uint8_t  :6;               /*!< bit:  2.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} OSCCTRL_DPLLPRESC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DPLLPRESC_OFFSET    0x34         /**< \brief (OSCCTRL_DPLLPRESC offset) DPLL Prescaler */
#define OSCCTRL_DPLLPRESC_RESETVALUE 0x00u        /**< \brief (OSCCTRL_DPLLPRESC reset_value) DPLL Prescaler */

#define OSCCTRL_DPLLPRESC_PRESC_Pos 0            /**< \brief (OSCCTRL_DPLLPRESC) Output Clock Prescaler */
#define OSCCTRL_DPLLPRESC_PRESC_Msk (0x3u << OSCCTRL_DPLLPRESC_PRESC_Pos)
#define OSCCTRL_DPLLPRESC_PRESC(value) (OSCCTRL_DPLLPRESC_PRESC_Msk & ((value) << OSCCTRL_DPLLPRESC_PRESC_Pos))
#define   OSCCTRL_DPLLPRESC_PRESC_DIV1_Val 0x0u   /**< \brief (OSCCTRL_DPLLPRESC) DPLL output is divided by 1 */
#define   OSCCTRL_DPLLPRESC_PRESC_DIV2_Val 0x1u   /**< \brief (OSCCTRL_DPLLPRESC) DPLL output is divided by 2 */
#define   OSCCTRL_DPLLPRESC_PRESC_DIV4_Val 0x2u   /**< \brief (OSCCTRL_DPLLPRESC) DPLL output is divided by 4 */
#define OSCCTRL_DPLLPRESC_PRESC_DIV1 (OSCCTRL_DPLLPRESC_PRESC_DIV1_Val << OSCCTRL_DPLLPRESC_PRESC_Pos)
#define OSCCTRL_DPLLPRESC_PRESC_DIV2 (OSCCTRL_DPLLPRESC_PRESC_DIV2_Val << OSCCTRL_DPLLPRESC_PRESC_Pos)
#define OSCCTRL_DPLLPRESC_PRESC_DIV4 (OSCCTRL_DPLLPRESC_PRESC_DIV4_Val << OSCCTRL_DPLLPRESC_PRESC_Pos)
#define OSCCTRL_DPLLPRESC_MASK      0x03u        /**< \brief (OSCCTRL_DPLLPRESC) MASK Register */

/* -------- OSCCTRL_DPLLSYNCBUSY : (OSCCTRL Offset: 0x38) (R/   8) DPLL Synchronization Busy -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  :1;               /*!< bit:      0  Reserved                           */
    uint8_t  ENABLE:1;         /*!< bit:      1  DPLL Enable Synchronization Status */
    uint8_t  DPLLRATIO:1;      /*!< bit:      2  DPLL Ratio Synchronization Status  */
    uint8_t  DPLLPRESC:1;      /*!< bit:      3  DPLL Prescaler Synchronization Status */
    uint8_t  :4;               /*!< bit:  4.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} OSCCTRL_DPLLSYNCBUSY_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DPLLSYNCBUSY_OFFSET 0x38         /**< \brief (OSCCTRL_DPLLSYNCBUSY offset) DPLL Synchronization Busy */
#define OSCCTRL_DPLLSYNCBUSY_RESETVALUE 0x00u        /**< \brief (OSCCTRL_DPLLSYNCBUSY reset_value) DPLL Synchronization Busy */

#define OSCCTRL_DPLLSYNCBUSY_ENABLE_Pos 1            /**< \brief (OSCCTRL_DPLLSYNCBUSY) DPLL Enable Synchronization Status */
#define OSCCTRL_DPLLSYNCBUSY_ENABLE (0x1u << OSCCTRL_DPLLSYNCBUSY_ENABLE_Pos)
#define OSCCTRL_DPLLSYNCBUSY_DPLLRATIO_Pos 2            /**< \brief (OSCCTRL_DPLLSYNCBUSY) DPLL Ratio Synchronization Status */
#define OSCCTRL_DPLLSYNCBUSY_DPLLRATIO (0x1u << OSCCTRL_DPLLSYNCBUSY_DPLLRATIO_Pos)
#define OSCCTRL_DPLLSYNCBUSY_DPLLPRESC_Pos 3            /**< \brief (OSCCTRL_DPLLSYNCBUSY) DPLL Prescaler Synchronization Status */
#define OSCCTRL_DPLLSYNCBUSY_DPLLPRESC (0x1u << OSCCTRL_DPLLSYNCBUSY_DPLLPRESC_Pos)
#define OSCCTRL_DPLLSYNCBUSY_MASK   0x0Eu        /**< \brief (OSCCTRL_DPLLSYNCBUSY) MASK Register */

/* -------- OSCCTRL_DPLLSTATUS : (OSCCTRL Offset: 0x3C) (R/   8) DPLL Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  LOCK:1;           /*!< bit:      0  DPLL Lock Status                   */
    uint8_t  CLKRDY:1;         /*!< bit:      1  DPLL Clock Ready                   */
    uint8_t  :6;               /*!< bit:  2.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} OSCCTRL_DPLLSTATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DPLLSTATUS_OFFSET   0x3C         /**< \brief (OSCCTRL_DPLLSTATUS offset) DPLL Status */
#define OSCCTRL_DPLLSTATUS_RESETVALUE 0x00u        /**< \brief (OSCCTRL_DPLLSTATUS reset_value) DPLL Status */

#define OSCCTRL_DPLLSTATUS_LOCK_Pos 0            /**< \brief (OSCCTRL_DPLLSTATUS) DPLL Lock Status */
#define OSCCTRL_DPLLSTATUS_LOCK     (0x1u << OSCCTRL_DPLLSTATUS_LOCK_Pos)
#define OSCCTRL_DPLLSTATUS_CLKRDY_Pos 1            /**< \brief (OSCCTRL_DPLLSTATUS) DPLL Clock Ready */
#define OSCCTRL_DPLLSTATUS_CLKRDY   (0x1u << OSCCTRL_DPLLSTATUS_CLKRDY_Pos)
#define OSCCTRL_DPLLSTATUS_MASK     0x03u        /**< \brief (OSCCTRL_DPLLSTATUS) MASK Register */

/** \brief OSCCTRL hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO OSCCTRL_INTENCLR_Type     INTENCLR;    /**< \brief Offset: 0x00 (R/W 32) Interrupt Enable Clear */
  __IO OSCCTRL_INTENSET_Type     INTENSET;    /**< \brief Offset: 0x04 (R/W 32) Interrupt Enable Set */
  __IO OSCCTRL_INTFLAG_Type      INTFLAG;     /**< \brief Offset: 0x08 (R/W 32) Interrupt Flag Status and Clear */
  __I  OSCCTRL_STATUS_Type       STATUS;      /**< \brief Offset: 0x0C (R/  32) Power and Clocks Status */
  __IO OSCCTRL_XOSCCTRL_Type     XOSCCTRL;    /**< \brief Offset: 0x10 (R/W 16) External Multipurpose Crystal Oscillator (XOSC) Control */
  __IO OSCCTRL_CFDPRESC_Type     CFDPRESC;    /**< \brief Offset: 0x12 (R/W  8) Cloc Failure Detector Prescaler */
  __IO OSCCTRL_EVCTRL_Type       EVCTRL;      /**< \brief Offset: 0x13 (R/W  8) Event Control */
  __IO OSCCTRL_OSC16MCTRL_Type   OSC16MCTRL;  /**< \brief Offset: 0x14 (R/W  8) 16MHz Internal Oscillator (OSC16M) Control */
       RoReg8                    Reserved1[0x3];
  __IO OSCCTRL_DFLLCTRL_Type     DFLLCTRL;    /**< \brief Offset: 0x18 (R/W 16) DFLL48M Control */
       RoReg8                    Reserved2[0x2];
  __IO OSCCTRL_DFLLVAL_Type      DFLLVAL;     /**< \brief Offset: 0x1C (R/W 32) DFLL48M Value */
  __IO OSCCTRL_DFLLMUL_Type      DFLLMUL;     /**< \brief Offset: 0x20 (R/W 32) DFLL48M Multiplier */
  __IO OSCCTRL_DFLLSYNC_Type     DFLLSYNC;    /**< \brief Offset: 0x24 (R/W  8) DFLL48M Synchronization */
       RoReg8                    Reserved3[0x3];
  __IO OSCCTRL_DPLLCTRLA_Type    DPLLCTRLA;   /**< \brief Offset: 0x28 (R/W  8) DPLL Control */
       RoReg8                    Reserved4[0x3];
  __IO OSCCTRL_DPLLRATIO_Type    DPLLRATIO;   /**< \brief Offset: 0x2C (R/W 32) DPLL Ratio Control */
  __IO OSCCTRL_DPLLCTRLB_Type    DPLLCTRLB;   /**< \brief Offset: 0x30 (R/W 32) Digital Core Configuration */
  __IO OSCCTRL_DPLLPRESC_Type    DPLLPRESC;   /**< \brief Offset: 0x34 (R/W  8) DPLL Prescaler */
       RoReg8                    Reserved5[0x3];
  __I  OSCCTRL_DPLLSYNCBUSY_Type DPLLSYNCBUSY; /**< \brief Offset: 0x38 (R/   8) DPLL Synchronization Busy */
       RoReg8                    Reserved6[0x3];
  __I  OSCCTRL_DPLLSTATUS_Type   DPLLSTATUS;  /**< \brief Offset: 0x3C (R/   8) DPLL Status */
} Oscctrl;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAML22_OSCCTRL_COMPONENT_ */
