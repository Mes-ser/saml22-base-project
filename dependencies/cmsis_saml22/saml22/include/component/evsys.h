/**
 * \file
 *
 * \brief Component description for EVSYS
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

#ifndef _SAML22_EVSYS_COMPONENT_
#define _SAML22_EVSYS_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR EVSYS */
/* ========================================================================== */
/** \addtogroup SAML22_EVSYS Event System Interface */
/*@{*/

#define EVSYS_U2256
#define REV_EVSYS                   0x101

/* -------- EVSYS_CTRLA : (EVSYS Offset: 0x00) (R/W  8) Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  SWRST:1;          /*!< bit:      0  Software Reset                     */
    uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} EVSYS_CTRLA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_CTRLA_OFFSET          0x00         /**< \brief (EVSYS_CTRLA offset) Control */
#define EVSYS_CTRLA_RESETVALUE      0x00u        /**< \brief (EVSYS_CTRLA reset_value) Control */

#define EVSYS_CTRLA_SWRST_Pos       0            /**< \brief (EVSYS_CTRLA) Software Reset */
#define EVSYS_CTRLA_SWRST           (0x1u << EVSYS_CTRLA_SWRST_Pos)
#define EVSYS_CTRLA_MASK            0x01u        /**< \brief (EVSYS_CTRLA) MASK Register */

/* -------- EVSYS_CHSTATUS : (EVSYS Offset: 0x0C) (R/  32) Channel Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t USRRDY0:1;        /*!< bit:      0  Channel 0 User Ready               */
    uint32_t USRRDY1:1;        /*!< bit:      1  Channel 1 User Ready               */
    uint32_t USRRDY2:1;        /*!< bit:      2  Channel 2 User Ready               */
    uint32_t USRRDY3:1;        /*!< bit:      3  Channel 3 User Ready               */
    uint32_t USRRDY4:1;        /*!< bit:      4  Channel 4 User Ready               */
    uint32_t USRRDY5:1;        /*!< bit:      5  Channel 5 User Ready               */
    uint32_t USRRDY6:1;        /*!< bit:      6  Channel 6 User Ready               */
    uint32_t USRRDY7:1;        /*!< bit:      7  Channel 7 User Ready               */
    uint32_t :8;               /*!< bit:  8..15  Reserved                           */
    uint32_t CHBUSY0:1;        /*!< bit:     16  Channel 0 Busy                     */
    uint32_t CHBUSY1:1;        /*!< bit:     17  Channel 1 Busy                     */
    uint32_t CHBUSY2:1;        /*!< bit:     18  Channel 2 Busy                     */
    uint32_t CHBUSY3:1;        /*!< bit:     19  Channel 3 Busy                     */
    uint32_t CHBUSY4:1;        /*!< bit:     20  Channel 4 Busy                     */
    uint32_t CHBUSY5:1;        /*!< bit:     21  Channel 5 Busy                     */
    uint32_t CHBUSY6:1;        /*!< bit:     22  Channel 6 Busy                     */
    uint32_t CHBUSY7:1;        /*!< bit:     23  Channel 7 Busy                     */
    uint32_t :8;               /*!< bit: 24..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    uint32_t USRRDY:8;         /*!< bit:  0.. 7  Channel x User Ready               */
    uint32_t :8;               /*!< bit:  8..15  Reserved                           */
    uint32_t CHBUSY:8;         /*!< bit: 16..23  Channel x Busy                     */
    uint32_t :8;               /*!< bit: 24..31  Reserved                           */
  } vec;                       /*!< Structure used for vec  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EVSYS_CHSTATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_CHSTATUS_OFFSET       0x0C         /**< \brief (EVSYS_CHSTATUS offset) Channel Status */
#define EVSYS_CHSTATUS_RESETVALUE   0x00000000u  /**< \brief (EVSYS_CHSTATUS reset_value) Channel Status */

#define EVSYS_CHSTATUS_USRRDY0_Pos  0            /**< \brief (EVSYS_CHSTATUS) Channel 0 User Ready */
#define EVSYS_CHSTATUS_USRRDY0      (1 << EVSYS_CHSTATUS_USRRDY0_Pos)
#define EVSYS_CHSTATUS_USRRDY1_Pos  1            /**< \brief (EVSYS_CHSTATUS) Channel 1 User Ready */
#define EVSYS_CHSTATUS_USRRDY1      (1 << EVSYS_CHSTATUS_USRRDY1_Pos)
#define EVSYS_CHSTATUS_USRRDY2_Pos  2            /**< \brief (EVSYS_CHSTATUS) Channel 2 User Ready */
#define EVSYS_CHSTATUS_USRRDY2      (1 << EVSYS_CHSTATUS_USRRDY2_Pos)
#define EVSYS_CHSTATUS_USRRDY3_Pos  3            /**< \brief (EVSYS_CHSTATUS) Channel 3 User Ready */
#define EVSYS_CHSTATUS_USRRDY3      (1 << EVSYS_CHSTATUS_USRRDY3_Pos)
#define EVSYS_CHSTATUS_USRRDY4_Pos  4            /**< \brief (EVSYS_CHSTATUS) Channel 4 User Ready */
#define EVSYS_CHSTATUS_USRRDY4      (1 << EVSYS_CHSTATUS_USRRDY4_Pos)
#define EVSYS_CHSTATUS_USRRDY5_Pos  5            /**< \brief (EVSYS_CHSTATUS) Channel 5 User Ready */
#define EVSYS_CHSTATUS_USRRDY5      (1 << EVSYS_CHSTATUS_USRRDY5_Pos)
#define EVSYS_CHSTATUS_USRRDY6_Pos  6            /**< \brief (EVSYS_CHSTATUS) Channel 6 User Ready */
#define EVSYS_CHSTATUS_USRRDY6      (1 << EVSYS_CHSTATUS_USRRDY6_Pos)
#define EVSYS_CHSTATUS_USRRDY7_Pos  7            /**< \brief (EVSYS_CHSTATUS) Channel 7 User Ready */
#define EVSYS_CHSTATUS_USRRDY7      (1 << EVSYS_CHSTATUS_USRRDY7_Pos)
#define EVSYS_CHSTATUS_USRRDY_Pos   0            /**< \brief (EVSYS_CHSTATUS) Channel x User Ready */
#define EVSYS_CHSTATUS_USRRDY_Msk   (0xFFu << EVSYS_CHSTATUS_USRRDY_Pos)
#define EVSYS_CHSTATUS_USRRDY(value) (EVSYS_CHSTATUS_USRRDY_Msk & ((value) << EVSYS_CHSTATUS_USRRDY_Pos))
#define EVSYS_CHSTATUS_CHBUSY0_Pos  16           /**< \brief (EVSYS_CHSTATUS) Channel 0 Busy */
#define EVSYS_CHSTATUS_CHBUSY0      (1 << EVSYS_CHSTATUS_CHBUSY0_Pos)
#define EVSYS_CHSTATUS_CHBUSY1_Pos  17           /**< \brief (EVSYS_CHSTATUS) Channel 1 Busy */
#define EVSYS_CHSTATUS_CHBUSY1      (1 << EVSYS_CHSTATUS_CHBUSY1_Pos)
#define EVSYS_CHSTATUS_CHBUSY2_Pos  18           /**< \brief (EVSYS_CHSTATUS) Channel 2 Busy */
#define EVSYS_CHSTATUS_CHBUSY2      (1 << EVSYS_CHSTATUS_CHBUSY2_Pos)
#define EVSYS_CHSTATUS_CHBUSY3_Pos  19           /**< \brief (EVSYS_CHSTATUS) Channel 3 Busy */
#define EVSYS_CHSTATUS_CHBUSY3      (1 << EVSYS_CHSTATUS_CHBUSY3_Pos)
#define EVSYS_CHSTATUS_CHBUSY4_Pos  20           /**< \brief (EVSYS_CHSTATUS) Channel 4 Busy */
#define EVSYS_CHSTATUS_CHBUSY4      (1 << EVSYS_CHSTATUS_CHBUSY4_Pos)
#define EVSYS_CHSTATUS_CHBUSY5_Pos  21           /**< \brief (EVSYS_CHSTATUS) Channel 5 Busy */
#define EVSYS_CHSTATUS_CHBUSY5      (1 << EVSYS_CHSTATUS_CHBUSY5_Pos)
#define EVSYS_CHSTATUS_CHBUSY6_Pos  22           /**< \brief (EVSYS_CHSTATUS) Channel 6 Busy */
#define EVSYS_CHSTATUS_CHBUSY6      (1 << EVSYS_CHSTATUS_CHBUSY6_Pos)
#define EVSYS_CHSTATUS_CHBUSY7_Pos  23           /**< \brief (EVSYS_CHSTATUS) Channel 7 Busy */
#define EVSYS_CHSTATUS_CHBUSY7      (1 << EVSYS_CHSTATUS_CHBUSY7_Pos)
#define EVSYS_CHSTATUS_CHBUSY_Pos   16           /**< \brief (EVSYS_CHSTATUS) Channel x Busy */
#define EVSYS_CHSTATUS_CHBUSY_Msk   (0xFFu << EVSYS_CHSTATUS_CHBUSY_Pos)
#define EVSYS_CHSTATUS_CHBUSY(value) (EVSYS_CHSTATUS_CHBUSY_Msk & ((value) << EVSYS_CHSTATUS_CHBUSY_Pos))
#define EVSYS_CHSTATUS_MASK         0x00FF00FFu  /**< \brief (EVSYS_CHSTATUS) MASK Register */

/* -------- EVSYS_INTENCLR : (EVSYS Offset: 0x10) (R/W 32) Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OVR0:1;           /*!< bit:      0  Channel 0 Overrun Interrupt Enable */
    uint32_t OVR1:1;           /*!< bit:      1  Channel 1 Overrun Interrupt Enable */
    uint32_t OVR2:1;           /*!< bit:      2  Channel 2 Overrun Interrupt Enable */
    uint32_t OVR3:1;           /*!< bit:      3  Channel 3 Overrun Interrupt Enable */
    uint32_t OVR4:1;           /*!< bit:      4  Channel 4 Overrun Interrupt Enable */
    uint32_t OVR5:1;           /*!< bit:      5  Channel 5 Overrun Interrupt Enable */
    uint32_t OVR6:1;           /*!< bit:      6  Channel 6 Overrun Interrupt Enable */
    uint32_t OVR7:1;           /*!< bit:      7  Channel 7 Overrun Interrupt Enable */
    uint32_t :8;               /*!< bit:  8..15  Reserved                           */
    uint32_t EVD0:1;           /*!< bit:     16  Channel 0 Event Detection Interrupt Enable */
    uint32_t EVD1:1;           /*!< bit:     17  Channel 1 Event Detection Interrupt Enable */
    uint32_t EVD2:1;           /*!< bit:     18  Channel 2 Event Detection Interrupt Enable */
    uint32_t EVD3:1;           /*!< bit:     19  Channel 3 Event Detection Interrupt Enable */
    uint32_t EVD4:1;           /*!< bit:     20  Channel 4 Event Detection Interrupt Enable */
    uint32_t EVD5:1;           /*!< bit:     21  Channel 5 Event Detection Interrupt Enable */
    uint32_t EVD6:1;           /*!< bit:     22  Channel 6 Event Detection Interrupt Enable */
    uint32_t EVD7:1;           /*!< bit:     23  Channel 7 Event Detection Interrupt Enable */
    uint32_t :8;               /*!< bit: 24..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    uint32_t OVR:8;            /*!< bit:  0.. 7  Channel x Overrun Interrupt Enable */
    uint32_t :8;               /*!< bit:  8..15  Reserved                           */
    uint32_t EVD:8;            /*!< bit: 16..23  Channel x Event Detection Interrupt Enable */
    uint32_t :8;               /*!< bit: 24..31  Reserved                           */
  } vec;                       /*!< Structure used for vec  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EVSYS_INTENCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_INTENCLR_OFFSET       0x10         /**< \brief (EVSYS_INTENCLR offset) Interrupt Enable Clear */
#define EVSYS_INTENCLR_RESETVALUE   0x00000000u  /**< \brief (EVSYS_INTENCLR reset_value) Interrupt Enable Clear */

#define EVSYS_INTENCLR_OVR0_Pos     0            /**< \brief (EVSYS_INTENCLR) Channel 0 Overrun Interrupt Enable */
#define EVSYS_INTENCLR_OVR0         (1 << EVSYS_INTENCLR_OVR0_Pos)
#define EVSYS_INTENCLR_OVR1_Pos     1            /**< \brief (EVSYS_INTENCLR) Channel 1 Overrun Interrupt Enable */
#define EVSYS_INTENCLR_OVR1         (1 << EVSYS_INTENCLR_OVR1_Pos)
#define EVSYS_INTENCLR_OVR2_Pos     2            /**< \brief (EVSYS_INTENCLR) Channel 2 Overrun Interrupt Enable */
#define EVSYS_INTENCLR_OVR2         (1 << EVSYS_INTENCLR_OVR2_Pos)
#define EVSYS_INTENCLR_OVR3_Pos     3            /**< \brief (EVSYS_INTENCLR) Channel 3 Overrun Interrupt Enable */
#define EVSYS_INTENCLR_OVR3         (1 << EVSYS_INTENCLR_OVR3_Pos)
#define EVSYS_INTENCLR_OVR4_Pos     4            /**< \brief (EVSYS_INTENCLR) Channel 4 Overrun Interrupt Enable */
#define EVSYS_INTENCLR_OVR4         (1 << EVSYS_INTENCLR_OVR4_Pos)
#define EVSYS_INTENCLR_OVR5_Pos     5            /**< \brief (EVSYS_INTENCLR) Channel 5 Overrun Interrupt Enable */
#define EVSYS_INTENCLR_OVR5         (1 << EVSYS_INTENCLR_OVR5_Pos)
#define EVSYS_INTENCLR_OVR6_Pos     6            /**< \brief (EVSYS_INTENCLR) Channel 6 Overrun Interrupt Enable */
#define EVSYS_INTENCLR_OVR6         (1 << EVSYS_INTENCLR_OVR6_Pos)
#define EVSYS_INTENCLR_OVR7_Pos     7            /**< \brief (EVSYS_INTENCLR) Channel 7 Overrun Interrupt Enable */
#define EVSYS_INTENCLR_OVR7         (1 << EVSYS_INTENCLR_OVR7_Pos)
#define EVSYS_INTENCLR_OVR_Pos      0            /**< \brief (EVSYS_INTENCLR) Channel x Overrun Interrupt Enable */
#define EVSYS_INTENCLR_OVR_Msk      (0xFFu << EVSYS_INTENCLR_OVR_Pos)
#define EVSYS_INTENCLR_OVR(value)   (EVSYS_INTENCLR_OVR_Msk & ((value) << EVSYS_INTENCLR_OVR_Pos))
#define EVSYS_INTENCLR_EVD0_Pos     16           /**< \brief (EVSYS_INTENCLR) Channel 0 Event Detection Interrupt Enable */
#define EVSYS_INTENCLR_EVD0         (1 << EVSYS_INTENCLR_EVD0_Pos)
#define EVSYS_INTENCLR_EVD1_Pos     17           /**< \brief (EVSYS_INTENCLR) Channel 1 Event Detection Interrupt Enable */
#define EVSYS_INTENCLR_EVD1         (1 << EVSYS_INTENCLR_EVD1_Pos)
#define EVSYS_INTENCLR_EVD2_Pos     18           /**< \brief (EVSYS_INTENCLR) Channel 2 Event Detection Interrupt Enable */
#define EVSYS_INTENCLR_EVD2         (1 << EVSYS_INTENCLR_EVD2_Pos)
#define EVSYS_INTENCLR_EVD3_Pos     19           /**< \brief (EVSYS_INTENCLR) Channel 3 Event Detection Interrupt Enable */
#define EVSYS_INTENCLR_EVD3         (1 << EVSYS_INTENCLR_EVD3_Pos)
#define EVSYS_INTENCLR_EVD4_Pos     20           /**< \brief (EVSYS_INTENCLR) Channel 4 Event Detection Interrupt Enable */
#define EVSYS_INTENCLR_EVD4         (1 << EVSYS_INTENCLR_EVD4_Pos)
#define EVSYS_INTENCLR_EVD5_Pos     21           /**< \brief (EVSYS_INTENCLR) Channel 5 Event Detection Interrupt Enable */
#define EVSYS_INTENCLR_EVD5         (1 << EVSYS_INTENCLR_EVD5_Pos)
#define EVSYS_INTENCLR_EVD6_Pos     22           /**< \brief (EVSYS_INTENCLR) Channel 6 Event Detection Interrupt Enable */
#define EVSYS_INTENCLR_EVD6         (1 << EVSYS_INTENCLR_EVD6_Pos)
#define EVSYS_INTENCLR_EVD7_Pos     23           /**< \brief (EVSYS_INTENCLR) Channel 7 Event Detection Interrupt Enable */
#define EVSYS_INTENCLR_EVD7         (1 << EVSYS_INTENCLR_EVD7_Pos)
#define EVSYS_INTENCLR_EVD_Pos      16           /**< \brief (EVSYS_INTENCLR) Channel x Event Detection Interrupt Enable */
#define EVSYS_INTENCLR_EVD_Msk      (0xFFu << EVSYS_INTENCLR_EVD_Pos)
#define EVSYS_INTENCLR_EVD(value)   (EVSYS_INTENCLR_EVD_Msk & ((value) << EVSYS_INTENCLR_EVD_Pos))
#define EVSYS_INTENCLR_MASK         0x00FF00FFu  /**< \brief (EVSYS_INTENCLR) MASK Register */

/* -------- EVSYS_INTENSET : (EVSYS Offset: 0x14) (R/W 32) Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OVR0:1;           /*!< bit:      0  Channel 0 Overrun Interrupt Enable */
    uint32_t OVR1:1;           /*!< bit:      1  Channel 1 Overrun Interrupt Enable */
    uint32_t OVR2:1;           /*!< bit:      2  Channel 2 Overrun Interrupt Enable */
    uint32_t OVR3:1;           /*!< bit:      3  Channel 3 Overrun Interrupt Enable */
    uint32_t OVR4:1;           /*!< bit:      4  Channel 4 Overrun Interrupt Enable */
    uint32_t OVR5:1;           /*!< bit:      5  Channel 5 Overrun Interrupt Enable */
    uint32_t OVR6:1;           /*!< bit:      6  Channel 6 Overrun Interrupt Enable */
    uint32_t OVR7:1;           /*!< bit:      7  Channel 7 Overrun Interrupt Enable */
    uint32_t :8;               /*!< bit:  8..15  Reserved                           */
    uint32_t EVD0:1;           /*!< bit:     16  Channel 0 Event Detection Interrupt Enable */
    uint32_t EVD1:1;           /*!< bit:     17  Channel 1 Event Detection Interrupt Enable */
    uint32_t EVD2:1;           /*!< bit:     18  Channel 2 Event Detection Interrupt Enable */
    uint32_t EVD3:1;           /*!< bit:     19  Channel 3 Event Detection Interrupt Enable */
    uint32_t EVD4:1;           /*!< bit:     20  Channel 4 Event Detection Interrupt Enable */
    uint32_t EVD5:1;           /*!< bit:     21  Channel 5 Event Detection Interrupt Enable */
    uint32_t EVD6:1;           /*!< bit:     22  Channel 6 Event Detection Interrupt Enable */
    uint32_t EVD7:1;           /*!< bit:     23  Channel 7 Event Detection Interrupt Enable */
    uint32_t :8;               /*!< bit: 24..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    uint32_t OVR:8;            /*!< bit:  0.. 7  Channel x Overrun Interrupt Enable */
    uint32_t :8;               /*!< bit:  8..15  Reserved                           */
    uint32_t EVD:8;            /*!< bit: 16..23  Channel x Event Detection Interrupt Enable */
    uint32_t :8;               /*!< bit: 24..31  Reserved                           */
  } vec;                       /*!< Structure used for vec  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EVSYS_INTENSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_INTENSET_OFFSET       0x14         /**< \brief (EVSYS_INTENSET offset) Interrupt Enable Set */
#define EVSYS_INTENSET_RESETVALUE   0x00000000u  /**< \brief (EVSYS_INTENSET reset_value) Interrupt Enable Set */

#define EVSYS_INTENSET_OVR0_Pos     0            /**< \brief (EVSYS_INTENSET) Channel 0 Overrun Interrupt Enable */
#define EVSYS_INTENSET_OVR0         (1 << EVSYS_INTENSET_OVR0_Pos)
#define EVSYS_INTENSET_OVR1_Pos     1            /**< \brief (EVSYS_INTENSET) Channel 1 Overrun Interrupt Enable */
#define EVSYS_INTENSET_OVR1         (1 << EVSYS_INTENSET_OVR1_Pos)
#define EVSYS_INTENSET_OVR2_Pos     2            /**< \brief (EVSYS_INTENSET) Channel 2 Overrun Interrupt Enable */
#define EVSYS_INTENSET_OVR2         (1 << EVSYS_INTENSET_OVR2_Pos)
#define EVSYS_INTENSET_OVR3_Pos     3            /**< \brief (EVSYS_INTENSET) Channel 3 Overrun Interrupt Enable */
#define EVSYS_INTENSET_OVR3         (1 << EVSYS_INTENSET_OVR3_Pos)
#define EVSYS_INTENSET_OVR4_Pos     4            /**< \brief (EVSYS_INTENSET) Channel 4 Overrun Interrupt Enable */
#define EVSYS_INTENSET_OVR4         (1 << EVSYS_INTENSET_OVR4_Pos)
#define EVSYS_INTENSET_OVR5_Pos     5            /**< \brief (EVSYS_INTENSET) Channel 5 Overrun Interrupt Enable */
#define EVSYS_INTENSET_OVR5         (1 << EVSYS_INTENSET_OVR5_Pos)
#define EVSYS_INTENSET_OVR6_Pos     6            /**< \brief (EVSYS_INTENSET) Channel 6 Overrun Interrupt Enable */
#define EVSYS_INTENSET_OVR6         (1 << EVSYS_INTENSET_OVR6_Pos)
#define EVSYS_INTENSET_OVR7_Pos     7            /**< \brief (EVSYS_INTENSET) Channel 7 Overrun Interrupt Enable */
#define EVSYS_INTENSET_OVR7         (1 << EVSYS_INTENSET_OVR7_Pos)
#define EVSYS_INTENSET_OVR_Pos      0            /**< \brief (EVSYS_INTENSET) Channel x Overrun Interrupt Enable */
#define EVSYS_INTENSET_OVR_Msk      (0xFFu << EVSYS_INTENSET_OVR_Pos)
#define EVSYS_INTENSET_OVR(value)   (EVSYS_INTENSET_OVR_Msk & ((value) << EVSYS_INTENSET_OVR_Pos))
#define EVSYS_INTENSET_EVD0_Pos     16           /**< \brief (EVSYS_INTENSET) Channel 0 Event Detection Interrupt Enable */
#define EVSYS_INTENSET_EVD0         (1 << EVSYS_INTENSET_EVD0_Pos)
#define EVSYS_INTENSET_EVD1_Pos     17           /**< \brief (EVSYS_INTENSET) Channel 1 Event Detection Interrupt Enable */
#define EVSYS_INTENSET_EVD1         (1 << EVSYS_INTENSET_EVD1_Pos)
#define EVSYS_INTENSET_EVD2_Pos     18           /**< \brief (EVSYS_INTENSET) Channel 2 Event Detection Interrupt Enable */
#define EVSYS_INTENSET_EVD2         (1 << EVSYS_INTENSET_EVD2_Pos)
#define EVSYS_INTENSET_EVD3_Pos     19           /**< \brief (EVSYS_INTENSET) Channel 3 Event Detection Interrupt Enable */
#define EVSYS_INTENSET_EVD3         (1 << EVSYS_INTENSET_EVD3_Pos)
#define EVSYS_INTENSET_EVD4_Pos     20           /**< \brief (EVSYS_INTENSET) Channel 4 Event Detection Interrupt Enable */
#define EVSYS_INTENSET_EVD4         (1 << EVSYS_INTENSET_EVD4_Pos)
#define EVSYS_INTENSET_EVD5_Pos     21           /**< \brief (EVSYS_INTENSET) Channel 5 Event Detection Interrupt Enable */
#define EVSYS_INTENSET_EVD5         (1 << EVSYS_INTENSET_EVD5_Pos)
#define EVSYS_INTENSET_EVD6_Pos     22           /**< \brief (EVSYS_INTENSET) Channel 6 Event Detection Interrupt Enable */
#define EVSYS_INTENSET_EVD6         (1 << EVSYS_INTENSET_EVD6_Pos)
#define EVSYS_INTENSET_EVD7_Pos     23           /**< \brief (EVSYS_INTENSET) Channel 7 Event Detection Interrupt Enable */
#define EVSYS_INTENSET_EVD7         (1 << EVSYS_INTENSET_EVD7_Pos)
#define EVSYS_INTENSET_EVD_Pos      16           /**< \brief (EVSYS_INTENSET) Channel x Event Detection Interrupt Enable */
#define EVSYS_INTENSET_EVD_Msk      (0xFFu << EVSYS_INTENSET_EVD_Pos)
#define EVSYS_INTENSET_EVD(value)   (EVSYS_INTENSET_EVD_Msk & ((value) << EVSYS_INTENSET_EVD_Pos))
#define EVSYS_INTENSET_MASK         0x00FF00FFu  /**< \brief (EVSYS_INTENSET) MASK Register */

/* -------- EVSYS_INTFLAG : (EVSYS Offset: 0x18) (R/W 32) Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint32_t OVR0:1;           /*!< bit:      0  Channel 0 Overrun                  */
    __I uint32_t OVR1:1;           /*!< bit:      1  Channel 1 Overrun                  */
    __I uint32_t OVR2:1;           /*!< bit:      2  Channel 2 Overrun                  */
    __I uint32_t OVR3:1;           /*!< bit:      3  Channel 3 Overrun                  */
    __I uint32_t OVR4:1;           /*!< bit:      4  Channel 4 Overrun                  */
    __I uint32_t OVR5:1;           /*!< bit:      5  Channel 5 Overrun                  */
    __I uint32_t OVR6:1;           /*!< bit:      6  Channel 6 Overrun                  */
    __I uint32_t OVR7:1;           /*!< bit:      7  Channel 7 Overrun                  */
    __I uint32_t :8;               /*!< bit:  8..15  Reserved                           */
    __I uint32_t EVD0:1;           /*!< bit:     16  Channel 0 Event Detection          */
    __I uint32_t EVD1:1;           /*!< bit:     17  Channel 1 Event Detection          */
    __I uint32_t EVD2:1;           /*!< bit:     18  Channel 2 Event Detection          */
    __I uint32_t EVD3:1;           /*!< bit:     19  Channel 3 Event Detection          */
    __I uint32_t EVD4:1;           /*!< bit:     20  Channel 4 Event Detection          */
    __I uint32_t EVD5:1;           /*!< bit:     21  Channel 5 Event Detection          */
    __I uint32_t EVD6:1;           /*!< bit:     22  Channel 6 Event Detection          */
    __I uint32_t EVD7:1;           /*!< bit:     23  Channel 7 Event Detection          */
    __I uint32_t :8;               /*!< bit: 24..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    __I uint32_t OVR:8;            /*!< bit:  0.. 7  Channel x Overrun                  */
    __I uint32_t :8;               /*!< bit:  8..15  Reserved                           */
    __I uint32_t EVD:8;            /*!< bit: 16..23  Channel x Event Detection          */
    __I uint32_t :8;               /*!< bit: 24..31  Reserved                           */
  } vec;                       /*!< Structure used for vec  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EVSYS_INTFLAG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_INTFLAG_OFFSET        0x18         /**< \brief (EVSYS_INTFLAG offset) Interrupt Flag Status and Clear */
#define EVSYS_INTFLAG_RESETVALUE    0x00000000u  /**< \brief (EVSYS_INTFLAG reset_value) Interrupt Flag Status and Clear */

#define EVSYS_INTFLAG_OVR0_Pos      0            /**< \brief (EVSYS_INTFLAG) Channel 0 Overrun */
#define EVSYS_INTFLAG_OVR0          (1 << EVSYS_INTFLAG_OVR0_Pos)
#define EVSYS_INTFLAG_OVR1_Pos      1            /**< \brief (EVSYS_INTFLAG) Channel 1 Overrun */
#define EVSYS_INTFLAG_OVR1          (1 << EVSYS_INTFLAG_OVR1_Pos)
#define EVSYS_INTFLAG_OVR2_Pos      2            /**< \brief (EVSYS_INTFLAG) Channel 2 Overrun */
#define EVSYS_INTFLAG_OVR2          (1 << EVSYS_INTFLAG_OVR2_Pos)
#define EVSYS_INTFLAG_OVR3_Pos      3            /**< \brief (EVSYS_INTFLAG) Channel 3 Overrun */
#define EVSYS_INTFLAG_OVR3          (1 << EVSYS_INTFLAG_OVR3_Pos)
#define EVSYS_INTFLAG_OVR4_Pos      4            /**< \brief (EVSYS_INTFLAG) Channel 4 Overrun */
#define EVSYS_INTFLAG_OVR4          (1 << EVSYS_INTFLAG_OVR4_Pos)
#define EVSYS_INTFLAG_OVR5_Pos      5            /**< \brief (EVSYS_INTFLAG) Channel 5 Overrun */
#define EVSYS_INTFLAG_OVR5          (1 << EVSYS_INTFLAG_OVR5_Pos)
#define EVSYS_INTFLAG_OVR6_Pos      6            /**< \brief (EVSYS_INTFLAG) Channel 6 Overrun */
#define EVSYS_INTFLAG_OVR6          (1 << EVSYS_INTFLAG_OVR6_Pos)
#define EVSYS_INTFLAG_OVR7_Pos      7            /**< \brief (EVSYS_INTFLAG) Channel 7 Overrun */
#define EVSYS_INTFLAG_OVR7          (1 << EVSYS_INTFLAG_OVR7_Pos)
#define EVSYS_INTFLAG_OVR_Pos       0            /**< \brief (EVSYS_INTFLAG) Channel x Overrun */
#define EVSYS_INTFLAG_OVR_Msk       (0xFFu << EVSYS_INTFLAG_OVR_Pos)
#define EVSYS_INTFLAG_OVR(value)    (EVSYS_INTFLAG_OVR_Msk & ((value) << EVSYS_INTFLAG_OVR_Pos))
#define EVSYS_INTFLAG_EVD0_Pos      16           /**< \brief (EVSYS_INTFLAG) Channel 0 Event Detection */
#define EVSYS_INTFLAG_EVD0          (1 << EVSYS_INTFLAG_EVD0_Pos)
#define EVSYS_INTFLAG_EVD1_Pos      17           /**< \brief (EVSYS_INTFLAG) Channel 1 Event Detection */
#define EVSYS_INTFLAG_EVD1          (1 << EVSYS_INTFLAG_EVD1_Pos)
#define EVSYS_INTFLAG_EVD2_Pos      18           /**< \brief (EVSYS_INTFLAG) Channel 2 Event Detection */
#define EVSYS_INTFLAG_EVD2          (1 << EVSYS_INTFLAG_EVD2_Pos)
#define EVSYS_INTFLAG_EVD3_Pos      19           /**< \brief (EVSYS_INTFLAG) Channel 3 Event Detection */
#define EVSYS_INTFLAG_EVD3          (1 << EVSYS_INTFLAG_EVD3_Pos)
#define EVSYS_INTFLAG_EVD4_Pos      20           /**< \brief (EVSYS_INTFLAG) Channel 4 Event Detection */
#define EVSYS_INTFLAG_EVD4          (1 << EVSYS_INTFLAG_EVD4_Pos)
#define EVSYS_INTFLAG_EVD5_Pos      21           /**< \brief (EVSYS_INTFLAG) Channel 5 Event Detection */
#define EVSYS_INTFLAG_EVD5          (1 << EVSYS_INTFLAG_EVD5_Pos)
#define EVSYS_INTFLAG_EVD6_Pos      22           /**< \brief (EVSYS_INTFLAG) Channel 6 Event Detection */
#define EVSYS_INTFLAG_EVD6          (1 << EVSYS_INTFLAG_EVD6_Pos)
#define EVSYS_INTFLAG_EVD7_Pos      23           /**< \brief (EVSYS_INTFLAG) Channel 7 Event Detection */
#define EVSYS_INTFLAG_EVD7          (1 << EVSYS_INTFLAG_EVD7_Pos)
#define EVSYS_INTFLAG_EVD_Pos       16           /**< \brief (EVSYS_INTFLAG) Channel x Event Detection */
#define EVSYS_INTFLAG_EVD_Msk       (0xFFu << EVSYS_INTFLAG_EVD_Pos)
#define EVSYS_INTFLAG_EVD(value)    (EVSYS_INTFLAG_EVD_Msk & ((value) << EVSYS_INTFLAG_EVD_Pos))
#define EVSYS_INTFLAG_MASK          0x00FF00FFu  /**< \brief (EVSYS_INTFLAG) MASK Register */

/* -------- EVSYS_SWEVT : (EVSYS Offset: 0x1C) ( /W 32) Software Event -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CHANNEL0:1;       /*!< bit:      0  Channel 0 Software Selection       */
    uint32_t CHANNEL1:1;       /*!< bit:      1  Channel 1 Software Selection       */
    uint32_t CHANNEL2:1;       /*!< bit:      2  Channel 2 Software Selection       */
    uint32_t CHANNEL3:1;       /*!< bit:      3  Channel 3 Software Selection       */
    uint32_t CHANNEL4:1;       /*!< bit:      4  Channel 4 Software Selection       */
    uint32_t CHANNEL5:1;       /*!< bit:      5  Channel 5 Software Selection       */
    uint32_t CHANNEL6:1;       /*!< bit:      6  Channel 6 Software Selection       */
    uint32_t CHANNEL7:1;       /*!< bit:      7  Channel 7 Software Selection       */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    uint32_t CHANNEL:8;        /*!< bit:  0.. 7  Channel x Software Selection       */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } vec;                       /*!< Structure used for vec  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EVSYS_SWEVT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_SWEVT_OFFSET          0x1C         /**< \brief (EVSYS_SWEVT offset) Software Event */
#define EVSYS_SWEVT_RESETVALUE      0x00000000u  /**< \brief (EVSYS_SWEVT reset_value) Software Event */

#define EVSYS_SWEVT_CHANNEL0_Pos    0            /**< \brief (EVSYS_SWEVT) Channel 0 Software Selection */
#define EVSYS_SWEVT_CHANNEL0        (1 << EVSYS_SWEVT_CHANNEL0_Pos)
#define EVSYS_SWEVT_CHANNEL1_Pos    1            /**< \brief (EVSYS_SWEVT) Channel 1 Software Selection */
#define EVSYS_SWEVT_CHANNEL1        (1 << EVSYS_SWEVT_CHANNEL1_Pos)
#define EVSYS_SWEVT_CHANNEL2_Pos    2            /**< \brief (EVSYS_SWEVT) Channel 2 Software Selection */
#define EVSYS_SWEVT_CHANNEL2        (1 << EVSYS_SWEVT_CHANNEL2_Pos)
#define EVSYS_SWEVT_CHANNEL3_Pos    3            /**< \brief (EVSYS_SWEVT) Channel 3 Software Selection */
#define EVSYS_SWEVT_CHANNEL3        (1 << EVSYS_SWEVT_CHANNEL3_Pos)
#define EVSYS_SWEVT_CHANNEL4_Pos    4            /**< \brief (EVSYS_SWEVT) Channel 4 Software Selection */
#define EVSYS_SWEVT_CHANNEL4        (1 << EVSYS_SWEVT_CHANNEL4_Pos)
#define EVSYS_SWEVT_CHANNEL5_Pos    5            /**< \brief (EVSYS_SWEVT) Channel 5 Software Selection */
#define EVSYS_SWEVT_CHANNEL5        (1 << EVSYS_SWEVT_CHANNEL5_Pos)
#define EVSYS_SWEVT_CHANNEL6_Pos    6            /**< \brief (EVSYS_SWEVT) Channel 6 Software Selection */
#define EVSYS_SWEVT_CHANNEL6        (1 << EVSYS_SWEVT_CHANNEL6_Pos)
#define EVSYS_SWEVT_CHANNEL7_Pos    7            /**< \brief (EVSYS_SWEVT) Channel 7 Software Selection */
#define EVSYS_SWEVT_CHANNEL7        (1 << EVSYS_SWEVT_CHANNEL7_Pos)
#define EVSYS_SWEVT_CHANNEL_Pos     0            /**< \brief (EVSYS_SWEVT) Channel x Software Selection */
#define EVSYS_SWEVT_CHANNEL_Msk     (0xFFu << EVSYS_SWEVT_CHANNEL_Pos)
#define EVSYS_SWEVT_CHANNEL(value)  (EVSYS_SWEVT_CHANNEL_Msk & ((value) << EVSYS_SWEVT_CHANNEL_Pos))
#define EVSYS_SWEVT_MASK            0x000000FFu  /**< \brief (EVSYS_SWEVT) MASK Register */

/* -------- EVSYS_CHANNEL : (EVSYS Offset: 0x20) (R/W 32) Channel n -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EVGEN:7;          /*!< bit:  0.. 6  Event Generator Selection          */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t PATH:2;           /*!< bit:  8.. 9  Path Selection                     */
    uint32_t EDGSEL:2;         /*!< bit: 10..11  Edge Detection Selection           */
    uint32_t :2;               /*!< bit: 12..13  Reserved                           */
    uint32_t RUNSTDBY:1;       /*!< bit:     14  Run in standby                     */
    uint32_t ONDEMAND:1;       /*!< bit:     15  Generic Clock On Demand            */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EVSYS_CHANNEL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_CHANNEL_OFFSET        0x20         /**< \brief (EVSYS_CHANNEL offset) Channel n */
#define EVSYS_CHANNEL_RESETVALUE    0x00008000u  /**< \brief (EVSYS_CHANNEL reset_value) Channel n */

#define EVSYS_CHANNEL_EVGEN_Pos     0            /**< \brief (EVSYS_CHANNEL) Event Generator Selection */
#define EVSYS_CHANNEL_EVGEN_Msk     (0x7Fu << EVSYS_CHANNEL_EVGEN_Pos)
#define EVSYS_CHANNEL_EVGEN(value)  (EVSYS_CHANNEL_EVGEN_Msk & ((value) << EVSYS_CHANNEL_EVGEN_Pos))
#define EVSYS_CHANNEL_PATH_Pos      8            /**< \brief (EVSYS_CHANNEL) Path Selection */
#define EVSYS_CHANNEL_PATH_Msk      (0x3u << EVSYS_CHANNEL_PATH_Pos)
#define EVSYS_CHANNEL_PATH(value)   (EVSYS_CHANNEL_PATH_Msk & ((value) << EVSYS_CHANNEL_PATH_Pos))
#define   EVSYS_CHANNEL_PATH_SYNCHRONOUS_Val 0x0u   /**< \brief (EVSYS_CHANNEL) Synchronous path */
#define   EVSYS_CHANNEL_PATH_RESYNCHRONIZED_Val 0x1u   /**< \brief (EVSYS_CHANNEL) Resynchronized path */
#define   EVSYS_CHANNEL_PATH_ASYNCHRONOUS_Val 0x2u   /**< \brief (EVSYS_CHANNEL) Asynchronous path */
#define EVSYS_CHANNEL_PATH_SYNCHRONOUS (EVSYS_CHANNEL_PATH_SYNCHRONOUS_Val << EVSYS_CHANNEL_PATH_Pos)
#define EVSYS_CHANNEL_PATH_RESYNCHRONIZED (EVSYS_CHANNEL_PATH_RESYNCHRONIZED_Val << EVSYS_CHANNEL_PATH_Pos)
#define EVSYS_CHANNEL_PATH_ASYNCHRONOUS (EVSYS_CHANNEL_PATH_ASYNCHRONOUS_Val << EVSYS_CHANNEL_PATH_Pos)
#define EVSYS_CHANNEL_EDGSEL_Pos    10           /**< \brief (EVSYS_CHANNEL) Edge Detection Selection */
#define EVSYS_CHANNEL_EDGSEL_Msk    (0x3u << EVSYS_CHANNEL_EDGSEL_Pos)
#define EVSYS_CHANNEL_EDGSEL(value) (EVSYS_CHANNEL_EDGSEL_Msk & ((value) << EVSYS_CHANNEL_EDGSEL_Pos))
#define   EVSYS_CHANNEL_EDGSEL_NO_EVT_OUTPUT_Val 0x0u   /**< \brief (EVSYS_CHANNEL) No event output when using the resynchronized or synchronous path */
#define   EVSYS_CHANNEL_EDGSEL_RISING_EDGE_Val 0x1u   /**< \brief (EVSYS_CHANNEL) Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path */
#define   EVSYS_CHANNEL_EDGSEL_FALLING_EDGE_Val 0x2u   /**< \brief (EVSYS_CHANNEL) Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path */
#define   EVSYS_CHANNEL_EDGSEL_BOTH_EDGES_Val 0x3u   /**< \brief (EVSYS_CHANNEL) Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path */
#define EVSYS_CHANNEL_EDGSEL_NO_EVT_OUTPUT (EVSYS_CHANNEL_EDGSEL_NO_EVT_OUTPUT_Val << EVSYS_CHANNEL_EDGSEL_Pos)
#define EVSYS_CHANNEL_EDGSEL_RISING_EDGE (EVSYS_CHANNEL_EDGSEL_RISING_EDGE_Val << EVSYS_CHANNEL_EDGSEL_Pos)
#define EVSYS_CHANNEL_EDGSEL_FALLING_EDGE (EVSYS_CHANNEL_EDGSEL_FALLING_EDGE_Val << EVSYS_CHANNEL_EDGSEL_Pos)
#define EVSYS_CHANNEL_EDGSEL_BOTH_EDGES (EVSYS_CHANNEL_EDGSEL_BOTH_EDGES_Val << EVSYS_CHANNEL_EDGSEL_Pos)
#define EVSYS_CHANNEL_RUNSTDBY_Pos  14           /**< \brief (EVSYS_CHANNEL) Run in standby */
#define EVSYS_CHANNEL_RUNSTDBY      (0x1u << EVSYS_CHANNEL_RUNSTDBY_Pos)
#define EVSYS_CHANNEL_ONDEMAND_Pos  15           /**< \brief (EVSYS_CHANNEL) Generic Clock On Demand */
#define EVSYS_CHANNEL_ONDEMAND      (0x1u << EVSYS_CHANNEL_ONDEMAND_Pos)
#define EVSYS_CHANNEL_MASK          0x0000CF7Fu  /**< \brief (EVSYS_CHANNEL) MASK Register */

/* -------- EVSYS_USER : (EVSYS Offset: 0x80) (R/W 32) User Multiplexer n -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CHANNEL:4;        /*!< bit:  0.. 3  Channel Event Selection            */
    uint32_t :28;              /*!< bit:  4..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EVSYS_USER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_USER_OFFSET           0x80         /**< \brief (EVSYS_USER offset) User Multiplexer n */
#define EVSYS_USER_RESETVALUE       0x00000000u  /**< \brief (EVSYS_USER reset_value) User Multiplexer n */

#define EVSYS_USER_CHANNEL_Pos      0            /**< \brief (EVSYS_USER) Channel Event Selection */
#define EVSYS_USER_CHANNEL_Msk      (0xFu << EVSYS_USER_CHANNEL_Pos)
#define EVSYS_USER_CHANNEL(value)   (EVSYS_USER_CHANNEL_Msk & ((value) << EVSYS_USER_CHANNEL_Pos))
#define EVSYS_USER_MASK             0x0000000Fu  /**< \brief (EVSYS_USER) MASK Register */

/** \brief EVSYS hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO EVSYS_CTRLA_Type          CTRLA;       /**< \brief Offset: 0x00 (R/W  8) Control */
       RoReg8                    Reserved1[0xB];
  __I  EVSYS_CHSTATUS_Type       CHSTATUS;    /**< \brief Offset: 0x0C (R/  32) Channel Status */
  __IO EVSYS_INTENCLR_Type       INTENCLR;    /**< \brief Offset: 0x10 (R/W 32) Interrupt Enable Clear */
  __IO EVSYS_INTENSET_Type       INTENSET;    /**< \brief Offset: 0x14 (R/W 32) Interrupt Enable Set */
  __IO EVSYS_INTFLAG_Type        INTFLAG;     /**< \brief Offset: 0x18 (R/W 32) Interrupt Flag Status and Clear */
  __O  EVSYS_SWEVT_Type          SWEVT;       /**< \brief Offset: 0x1C ( /W 32) Software Event */
  __IO EVSYS_CHANNEL_Type        CHANNEL[8];  /**< \brief Offset: 0x20 (R/W 32) Channel n */
       RoReg8                    Reserved2[0x40];
  __IO EVSYS_USER_Type           USER[31];    /**< \brief Offset: 0x80 (R/W 32) User Multiplexer n */
} Evsys;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAML22_EVSYS_COMPONENT_ */
