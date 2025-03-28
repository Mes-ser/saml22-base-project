/**
 * \file
 *
 * \brief Component description for AES
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

#ifndef _SAML22_AES_COMPONENT_
#define _SAML22_AES_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR AES */
/* ========================================================================== */
/** \addtogroup SAML22_AES Advanced Encryption Standard */
/*@{*/

#define AES_U2238
#define REV_AES                     0x210

/* -------- AES_CTRLA : (AES Offset: 0x00) (R/W 32) Control A -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SWRST:1;          /*!< bit:      0  Software Reset                     */
    uint32_t ENABLE:1;         /*!< bit:      1  Enable                             */
    uint32_t AESMODE:3;        /*!< bit:  2.. 4  AES Modes of operation             */
    uint32_t CFBS:3;           /*!< bit:  5.. 7  CFB Types                          */
    uint32_t KEYSIZE:2;        /*!< bit:  8.. 9  Keysize                            */
    uint32_t CIPHER:1;         /*!< bit:     10  Cipher mode                        */
    uint32_t STARTMODE:1;      /*!< bit:     11  Start mode                         */
    uint32_t LOD:1;            /*!< bit:     12  LOD Enable                         */
    uint32_t KEYGEN:1;         /*!< bit:     13  Last key generation                */
    uint32_t XORKEY:1;         /*!< bit:     14  Xor Key operation                  */
    uint32_t :1;               /*!< bit:     15  Reserved                           */
    uint32_t CTYPE:4;          /*!< bit: 16..19  Counter measure types              */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} AES_CTRLA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AES_CTRLA_OFFSET            0x00         /**< \brief (AES_CTRLA offset) Control A */
#define AES_CTRLA_RESETVALUE        0x00000000u  /**< \brief (AES_CTRLA reset_value) Control A */

#define AES_CTRLA_SWRST_Pos         0            /**< \brief (AES_CTRLA) Software Reset */
#define AES_CTRLA_SWRST             (0x1u << AES_CTRLA_SWRST_Pos)
#define AES_CTRLA_ENABLE_Pos        1            /**< \brief (AES_CTRLA) Enable */
#define AES_CTRLA_ENABLE            (0x1u << AES_CTRLA_ENABLE_Pos)
#define AES_CTRLA_AESMODE_Pos       2            /**< \brief (AES_CTRLA) AES Modes of operation */
#define AES_CTRLA_AESMODE_Msk       (0x7u << AES_CTRLA_AESMODE_Pos)
#define AES_CTRLA_AESMODE(value)    (AES_CTRLA_AESMODE_Msk & ((value) << AES_CTRLA_AESMODE_Pos))
#define AES_CTRLA_CFBS_Pos          5            /**< \brief (AES_CTRLA) CFB Types */
#define AES_CTRLA_CFBS_Msk          (0x7u << AES_CTRLA_CFBS_Pos)
#define AES_CTRLA_CFBS(value)       (AES_CTRLA_CFBS_Msk & ((value) << AES_CTRLA_CFBS_Pos))
#define AES_CTRLA_KEYSIZE_Pos       8            /**< \brief (AES_CTRLA) Keysize */
#define AES_CTRLA_KEYSIZE_Msk       (0x3u << AES_CTRLA_KEYSIZE_Pos)
#define AES_CTRLA_KEYSIZE(value)    (AES_CTRLA_KEYSIZE_Msk & ((value) << AES_CTRLA_KEYSIZE_Pos))
#define AES_CTRLA_CIPHER_Pos        10           /**< \brief (AES_CTRLA) Cipher mode */
#define AES_CTRLA_CIPHER            (0x1u << AES_CTRLA_CIPHER_Pos)
#define AES_CTRLA_STARTMODE_Pos     11           /**< \brief (AES_CTRLA) Start mode */
#define AES_CTRLA_STARTMODE         (0x1u << AES_CTRLA_STARTMODE_Pos)
#define AES_CTRLA_LOD_Pos           12           /**< \brief (AES_CTRLA) LOD Enable */
#define AES_CTRLA_LOD               (0x1u << AES_CTRLA_LOD_Pos)
#define AES_CTRLA_KEYGEN_Pos        13           /**< \brief (AES_CTRLA) Last key generation */
#define AES_CTRLA_KEYGEN            (0x1u << AES_CTRLA_KEYGEN_Pos)
#define AES_CTRLA_XORKEY_Pos        14           /**< \brief (AES_CTRLA) Xor Key operation */
#define AES_CTRLA_XORKEY            (0x1u << AES_CTRLA_XORKEY_Pos)
#define AES_CTRLA_CTYPE_Pos         16           /**< \brief (AES_CTRLA) Counter measure types */
#define AES_CTRLA_CTYPE_Msk         (0xFu << AES_CTRLA_CTYPE_Pos)
#define AES_CTRLA_CTYPE(value)      (AES_CTRLA_CTYPE_Msk & ((value) << AES_CTRLA_CTYPE_Pos))
#define AES_CTRLA_MASK              0x000F7FFFu  /**< \brief (AES_CTRLA) MASK Register */

/* -------- AES_CTRLB : (AES Offset: 0x04) (R/W  8) Control B -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  START:1;          /*!< bit:      0  Manual Start                       */
    uint8_t  NEWMSG:1;         /*!< bit:      1  New message                        */
    uint8_t  EOM:1;            /*!< bit:      2  End of message                     */
    uint8_t  GFMUL:1;          /*!< bit:      3  GF Multiplication                  */
    uint8_t  :4;               /*!< bit:  4.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} AES_CTRLB_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AES_CTRLB_OFFSET            0x04         /**< \brief (AES_CTRLB offset) Control B */
#define AES_CTRLB_RESETVALUE        0x00u        /**< \brief (AES_CTRLB reset_value) Control B */

#define AES_CTRLB_START_Pos         0            /**< \brief (AES_CTRLB) Manual Start */
#define AES_CTRLB_START             (0x1u << AES_CTRLB_START_Pos)
#define AES_CTRLB_NEWMSG_Pos        1            /**< \brief (AES_CTRLB) New message */
#define AES_CTRLB_NEWMSG            (0x1u << AES_CTRLB_NEWMSG_Pos)
#define AES_CTRLB_EOM_Pos           2            /**< \brief (AES_CTRLB) End of message */
#define AES_CTRLB_EOM               (0x1u << AES_CTRLB_EOM_Pos)
#define AES_CTRLB_GFMUL_Pos         3            /**< \brief (AES_CTRLB) GF Multiplication */
#define AES_CTRLB_GFMUL             (0x1u << AES_CTRLB_GFMUL_Pos)
#define AES_CTRLB_MASK              0x0Fu        /**< \brief (AES_CTRLB) MASK Register */

/* -------- AES_INTENCLR : (AES Offset: 0x05) (R/W  8) Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  ENCCMP:1;         /*!< bit:      0  Encryption Complete                */
    uint8_t  GFMCMP:1;         /*!< bit:      1  GF Multiplication Complete         */
    uint8_t  :6;               /*!< bit:  2.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} AES_INTENCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AES_INTENCLR_OFFSET         0x05         /**< \brief (AES_INTENCLR offset) Interrupt Enable Clear */
#define AES_INTENCLR_RESETVALUE     0x00u        /**< \brief (AES_INTENCLR reset_value) Interrupt Enable Clear */

#define AES_INTENCLR_ENCCMP_Pos     0            /**< \brief (AES_INTENCLR) Encryption Complete */
#define AES_INTENCLR_ENCCMP         (0x1u << AES_INTENCLR_ENCCMP_Pos)
#define AES_INTENCLR_GFMCMP_Pos     1            /**< \brief (AES_INTENCLR) GF Multiplication Complete */
#define AES_INTENCLR_GFMCMP         (0x1u << AES_INTENCLR_GFMCMP_Pos)
#define AES_INTENCLR_MASK           0x03u        /**< \brief (AES_INTENCLR) MASK Register */

/* -------- AES_INTENSET : (AES Offset: 0x06) (R/W  8) Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  ENCCMP:1;         /*!< bit:      0  Encryption Complete                */
    uint8_t  GFMCMP:1;         /*!< bit:      1  GF Multiplication Complete         */
    uint8_t  :6;               /*!< bit:  2.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} AES_INTENSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AES_INTENSET_OFFSET         0x06         /**< \brief (AES_INTENSET offset) Interrupt Enable Set */
#define AES_INTENSET_RESETVALUE     0x00u        /**< \brief (AES_INTENSET reset_value) Interrupt Enable Set */

#define AES_INTENSET_ENCCMP_Pos     0            /**< \brief (AES_INTENSET) Encryption Complete */
#define AES_INTENSET_ENCCMP         (0x1u << AES_INTENSET_ENCCMP_Pos)
#define AES_INTENSET_GFMCMP_Pos     1            /**< \brief (AES_INTENSET) GF Multiplication Complete */
#define AES_INTENSET_GFMCMP         (0x1u << AES_INTENSET_GFMCMP_Pos)
#define AES_INTENSET_MASK           0x03u        /**< \brief (AES_INTENSET) MASK Register */

/* -------- AES_INTFLAG : (AES Offset: 0x07) (R/W  8) Interrupt Flag Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint8_t  ENCCMP:1;         /*!< bit:      0  Encryption Complete                */
    __I uint8_t  GFMCMP:1;         /*!< bit:      1  GF Multiplication Complete         */
    __I uint8_t  :6;               /*!< bit:  2.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} AES_INTFLAG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AES_INTFLAG_OFFSET          0x07         /**< \brief (AES_INTFLAG offset) Interrupt Flag Status */
#define AES_INTFLAG_RESETVALUE      0x00u        /**< \brief (AES_INTFLAG reset_value) Interrupt Flag Status */

#define AES_INTFLAG_ENCCMP_Pos      0            /**< \brief (AES_INTFLAG) Encryption Complete */
#define AES_INTFLAG_ENCCMP          (0x1u << AES_INTFLAG_ENCCMP_Pos)
#define AES_INTFLAG_GFMCMP_Pos      1            /**< \brief (AES_INTFLAG) GF Multiplication Complete */
#define AES_INTFLAG_GFMCMP          (0x1u << AES_INTFLAG_GFMCMP_Pos)
#define AES_INTFLAG_MASK            0x03u        /**< \brief (AES_INTFLAG) MASK Register */

/* -------- AES_DATABUFPTR : (AES Offset: 0x08) (R/W  8) Data buffer pointer -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  INDATAPTR:2;      /*!< bit:  0.. 1  Input Data Pointer                 */
    uint8_t  :6;               /*!< bit:  2.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} AES_DATABUFPTR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AES_DATABUFPTR_OFFSET       0x08         /**< \brief (AES_DATABUFPTR offset) Data buffer pointer */
#define AES_DATABUFPTR_RESETVALUE   0x00u        /**< \brief (AES_DATABUFPTR reset_value) Data buffer pointer */

#define AES_DATABUFPTR_INDATAPTR_Pos 0            /**< \brief (AES_DATABUFPTR) Input Data Pointer */
#define AES_DATABUFPTR_INDATAPTR_Msk (0x3u << AES_DATABUFPTR_INDATAPTR_Pos)
#define AES_DATABUFPTR_INDATAPTR(value) (AES_DATABUFPTR_INDATAPTR_Msk & ((value) << AES_DATABUFPTR_INDATAPTR_Pos))
#define AES_DATABUFPTR_MASK         0x03u        /**< \brief (AES_DATABUFPTR) MASK Register */

/* -------- AES_DBGCTRL : (AES Offset: 0x09) ( /W  8) Debug control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  DBGRUN:1;         /*!< bit:      0  Debug Run                          */
    uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} AES_DBGCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AES_DBGCTRL_OFFSET          0x09         /**< \brief (AES_DBGCTRL offset) Debug control */
#define AES_DBGCTRL_RESETVALUE      0x00u        /**< \brief (AES_DBGCTRL reset_value) Debug control */

#define AES_DBGCTRL_DBGRUN_Pos      0            /**< \brief (AES_DBGCTRL) Debug Run */
#define AES_DBGCTRL_DBGRUN          (0x1u << AES_DBGCTRL_DBGRUN_Pos)
#define AES_DBGCTRL_MASK            0x01u        /**< \brief (AES_DBGCTRL) MASK Register */

/* -------- AES_KEYWORD : (AES Offset: 0x0C) ( /W 32) Keyword n -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} AES_KEYWORD_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AES_KEYWORD_OFFSET          0x0C         /**< \brief (AES_KEYWORD offset) Keyword n */
#define AES_KEYWORD_RESETVALUE      0x00000000u  /**< \brief (AES_KEYWORD reset_value) Keyword n */
#define AES_KEYWORD_MASK            0xFFFFFFFFu  /**< \brief (AES_KEYWORD) MASK Register */

/* -------- AES_INDATA : (AES Offset: 0x38) (R/W 32) Indata -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} AES_INDATA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AES_INDATA_OFFSET           0x38         /**< \brief (AES_INDATA offset) Indata */
#define AES_INDATA_RESETVALUE       0x00000000u  /**< \brief (AES_INDATA reset_value) Indata */
#define AES_INDATA_MASK             0xFFFFFFFFu  /**< \brief (AES_INDATA) MASK Register */

/* -------- AES_INTVECTV : (AES Offset: 0x3C) ( /W 32) Initialisation Vector n -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} AES_INTVECTV_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AES_INTVECTV_OFFSET         0x3C         /**< \brief (AES_INTVECTV offset) Initialisation Vector n */
#define AES_INTVECTV_RESETVALUE     0x00000000u  /**< \brief (AES_INTVECTV reset_value) Initialisation Vector n */
#define AES_INTVECTV_MASK           0xFFFFFFFFu  /**< \brief (AES_INTVECTV) MASK Register */

/* -------- AES_HASHKEY : (AES Offset: 0x5C) (R/W 32) Hash key n -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} AES_HASHKEY_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AES_HASHKEY_OFFSET          0x5C         /**< \brief (AES_HASHKEY offset) Hash key n */
#define AES_HASHKEY_RESETVALUE      0x00000000u  /**< \brief (AES_HASHKEY reset_value) Hash key n */
#define AES_HASHKEY_MASK            0xFFFFFFFFu  /**< \brief (AES_HASHKEY) MASK Register */

/* -------- AES_GHASH : (AES Offset: 0x6C) (R/W 32) Galois Hash n -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} AES_GHASH_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AES_GHASH_OFFSET            0x6C         /**< \brief (AES_GHASH offset) Galois Hash n */
#define AES_GHASH_RESETVALUE        0x00000000u  /**< \brief (AES_GHASH reset_value) Galois Hash n */
#define AES_GHASH_MASK              0xFFFFFFFFu  /**< \brief (AES_GHASH) MASK Register */

/* -------- AES_CIPLEN : (AES Offset: 0x80) (R/W 32) Cipher Length -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} AES_CIPLEN_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AES_CIPLEN_OFFSET           0x80         /**< \brief (AES_CIPLEN offset) Cipher Length */
#define AES_CIPLEN_RESETVALUE       0x00000000u  /**< \brief (AES_CIPLEN reset_value) Cipher Length */
#define AES_CIPLEN_MASK             0xFFFFFFFFu  /**< \brief (AES_CIPLEN) MASK Register */

/* -------- AES_RANDSEED : (AES Offset: 0x84) (R/W 32) Random Seed -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} AES_RANDSEED_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define AES_RANDSEED_OFFSET         0x84         /**< \brief (AES_RANDSEED offset) Random Seed */
#define AES_RANDSEED_RESETVALUE     0x00000000u  /**< \brief (AES_RANDSEED reset_value) Random Seed */
#define AES_RANDSEED_MASK           0xFFFFFFFFu  /**< \brief (AES_RANDSEED) MASK Register */

/** \brief AES hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO AES_CTRLA_Type            CTRLA;       /**< \brief Offset: 0x00 (R/W 32) Control A */
  __IO AES_CTRLB_Type            CTRLB;       /**< \brief Offset: 0x04 (R/W  8) Control B */
  __IO AES_INTENCLR_Type         INTENCLR;    /**< \brief Offset: 0x05 (R/W  8) Interrupt Enable Clear */
  __IO AES_INTENSET_Type         INTENSET;    /**< \brief Offset: 0x06 (R/W  8) Interrupt Enable Set */
  __IO AES_INTFLAG_Type          INTFLAG;     /**< \brief Offset: 0x07 (R/W  8) Interrupt Flag Status */
  __IO AES_DATABUFPTR_Type       DATABUFPTR;  /**< \brief Offset: 0x08 (R/W  8) Data buffer pointer */
  __O  AES_DBGCTRL_Type          DBGCTRL;     /**< \brief Offset: 0x09 ( /W  8) Debug control */
       RoReg8                    Reserved1[0x2];
  __O  AES_KEYWORD_Type          KEYWORD[8];  /**< \brief Offset: 0x0C ( /W 32) Keyword n */
       RoReg8                    Reserved2[0xC];
  __IO AES_INDATA_Type           INDATA;      /**< \brief Offset: 0x38 (R/W 32) Indata */
  __O  AES_INTVECTV_Type         INTVECTV[4]; /**< \brief Offset: 0x3C ( /W 32) Initialisation Vector n */
       RoReg8                    Reserved3[0x10];
  __IO AES_HASHKEY_Type          HASHKEY[4];  /**< \brief Offset: 0x5C (R/W 32) Hash key n */
  __IO AES_GHASH_Type            GHASH[4];    /**< \brief Offset: 0x6C (R/W 32) Galois Hash n */
       RoReg8                    Reserved4[0x4];
  __IO AES_CIPLEN_Type           CIPLEN;      /**< \brief Offset: 0x80 (R/W 32) Cipher Length */
  __IO AES_RANDSEED_Type         RANDSEED;    /**< \brief Offset: 0x84 (R/W 32) Random Seed */
} Aes;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAML22_AES_COMPONENT_ */
