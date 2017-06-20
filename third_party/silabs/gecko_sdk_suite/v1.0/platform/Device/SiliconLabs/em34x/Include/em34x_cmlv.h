/**************************************************************************//**
 * @file
 * @brief em34x_cmlv Register and Bit Field definitions
 * @version 5.1.3
 ******************************************************************************
 * @section License
 * <b>(C) Copyright 2014 Silicon Labs, http://www.silabs.com</b>
 *******************************************************************************
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 * DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Silicon Labs has no
 * obligation to support this Software. Silicon Labs is providing the
 * Software "AS IS", with no express or implied warranties of any kind,
 * including, but not limited to, any implied warranties of merchantability
 * or fitness for any particular purpose or warranties against infringement
 * of any proprietary rights of a third party.
 *
 * Silicon Labs will not be liable for any consequential, incidental, or
 * special damages, or any other relief, or for any claim by any third party,
 * arising from your use of this Software.
 *
 ******************************************************************************/
/**************************************************************************//**
 * @defgroup EM34X_CMLV
 * @{
 * @brief EM34X_CMLV Register Declaration
 *****************************************************************************/

typedef struct
{
  __I uint32_t SILICONID;
  __IO uint32_t OSC24MBIASTRIM;
  __IO uint32_t OSCHFTUNE;
  __I uint32_t OSC24MCOMP;
  __IO uint32_t CLKPERIODMODE;
  __I uint32_t CLKPERIOD;
  __IO uint32_t DITHERDIS;
  __IO uint32_t OSC24MCTRL;
  __IO uint32_t CPUCLKSEL;
  __IO uint32_t BUSFAULT;
  __IO uint32_t PCTRACESEL;
  __IO uint32_t FPECCLKREQ;
  __I uint32_t FPECCLKSTAT;
  __IO uint32_t LVSPARE;
  __IO uint32_t PERIPHERALDISABLE;
} CMLV_TypeDef;              /** @} */

/**************************************************************************//**
 * @defgroup EM34X_CMLV_BitFields
 * @{
 *****************************************************************************/

/* Bit fields for CMLV SILICONID */
#define _CMLV_SILICONID_RESETVALUE            0x069A962BUL
#define _CMLV_SILICONID_MASK                  0xFFFFFFFFUL
#define CMLV_SILICONID_HWVERSION              (0x1UL << 28)
#define _CMLV_SILICONID_HWVERSION_SHIFT       28
#define _CMLV_SILICONID_HWVERSION_MASK        0xF0000000UL
#define _CMLV_SILICONID_HWVERSION_DEFAULT     0x00000000UL
#define CMLV_SILICONID_HWVERSION_DEFAULT      (_CMLV_SILICONID_HWVERSION_DEFAULT << 28)
#define CMLV_SILICONID_STDIVISION             (0x1UL << 24)
#define _CMLV_SILICONID_STDIVISION_SHIFT      24
#define _CMLV_SILICONID_STDIVISION_MASK       0xF000000UL
#define _CMLV_SILICONID_STDIVISION_DEFAULT    0x00000006UL
#define CMLV_SILICONID_STDIVISION_DEFAULT     (_CMLV_SILICONID_STDIVISION_DEFAULT << 24)
#define CMLV_SILICONID_CHIPTYPE               (0x1UL << 15)
#define _CMLV_SILICONID_CHIPTYPE_SHIFT        15
#define _CMLV_SILICONID_CHIPTYPE_MASK         0xFF8000UL
#define _CMLV_SILICONID_CHIPTYPE_DEFAULT      0x00000135UL
#define CMLV_SILICONID_CHIPTYPE_DEFAULT       (_CMLV_SILICONID_CHIPTYPE_DEFAULT << 15)
#define CMLV_SILICONID_SUBTYPE                (0x1UL << 12)
#define _CMLV_SILICONID_SUBTYPE_SHIFT         12
#define _CMLV_SILICONID_SUBTYPE_MASK          0x7000UL
#define _CMLV_SILICONID_SUBTYPE_DEFAULT       0x00000001UL
#define CMLV_SILICONID_SUBTYPE_DEFAULT        (_CMLV_SILICONID_SUBTYPE_DEFAULT << 12)
#define CMLV_SILICONID_JEDECMANID             (0x1UL << 1)
#define _CMLV_SILICONID_JEDECMANID_SHIFT      1
#define _CMLV_SILICONID_JEDECMANID_MASK       0xFFEUL
#define _CMLV_SILICONID_JEDECMANID_DEFAULT    0x00000315UL
#define CMLV_SILICONID_JEDECMANID_DEFAULT     (_CMLV_SILICONID_JEDECMANID_DEFAULT << 1)
#define CMLV_SILICONID_ONE                    (0x1UL << 0)
#define _CMLV_SILICONID_ONE_SHIFT             0
#define _CMLV_SILICONID_ONE_MASK              0x1UL
#define _CMLV_SILICONID_ONE_DEFAULT           0x00000001UL
#define CMLV_SILICONID_ONE_DEFAULT            (_CMLV_SILICONID_ONE_DEFAULT << 0)

/* Bit fields for CMLV OSC24MBIASTRIM */
#define _CMLV_OSC24MBIASTRIM_RESETVALUE          0x0000000FUL
#define _CMLV_OSC24MBIASTRIM_MASK                0x0000000FUL
#define _CMLV_OSC24MBIASTRIM_BIASTRIM_SHIFT      0
#define _CMLV_OSC24MBIASTRIM_BIASTRIM_MASK       0xFUL
#define _CMLV_OSC24MBIASTRIM_BIASTRIM_DEFAULT    0x0000000FUL
#define CMLV_OSC24MBIASTRIM_BIASTRIM_DEFAULT     (_CMLV_OSC24MBIASTRIM_BIASTRIM_DEFAULT << 0)

/* Bit fields for CMLV OSCHFTUNE */
#define _CMLV_OSCHFTUNE_RESETVALUE                0x00000017UL
#define _CMLV_OSCHFTUNE_MASK                      0x0000001FUL
#define _CMLV_OSCHFTUNE_OSCHFTUNEFIELD_SHIFT      0
#define _CMLV_OSCHFTUNE_OSCHFTUNEFIELD_MASK       0x1FUL
#define _CMLV_OSCHFTUNE_OSCHFTUNEFIELD_DEFAULT    0x00000017UL
#define CMLV_OSCHFTUNE_OSCHFTUNEFIELD_DEFAULT     (_CMLV_OSCHFTUNE_OSCHFTUNEFIELD_DEFAULT << 0)

/* Bit fields for CMLV OSC24MCOMP */
#define _CMLV_OSC24MCOMP_RESETVALUE    0x00000000UL
#define _CMLV_OSC24MCOMP_MASK          0x00000003UL
#define CMLV_OSC24MCOMP_HI             (0x1UL << 1)
#define _CMLV_OSC24MCOMP_HI_SHIFT      1
#define _CMLV_OSC24MCOMP_HI_MASK       0x2UL
#define _CMLV_OSC24MCOMP_HI_DEFAULT    0x00000000UL
#define CMLV_OSC24MCOMP_HI_DEFAULT     (_CMLV_OSC24MCOMP_HI_DEFAULT << 1)
#define CMLV_OSC24MCOMP_LO             (0x1UL << 0)
#define _CMLV_OSC24MCOMP_LO_SHIFT      0
#define _CMLV_OSC24MCOMP_LO_MASK       0x1UL
#define _CMLV_OSC24MCOMP_LO_DEFAULT    0x00000000UL
#define CMLV_OSC24MCOMP_LO_DEFAULT     (_CMLV_OSC24MCOMP_LO_DEFAULT << 0)

/* Bit fields for CMLV CLKPERIODMODE */
#define _CMLV_CLKPERIODMODE_RESETVALUE                    0x00000000UL
#define _CMLV_CLKPERIODMODE_MASK                          0x00000003UL
#define _CMLV_CLKPERIODMODE_CLKPERIODMODEFIELD_SHIFT      0
#define _CMLV_CLKPERIODMODE_CLKPERIODMODEFIELD_MASK       0x3UL
#define _CMLV_CLKPERIODMODE_CLKPERIODMODEFIELD_DEFAULT    0x00000000UL
#define CMLV_CLKPERIODMODE_CLKPERIODMODEFIELD_DEFAULT     (_CMLV_CLKPERIODMODE_CLKPERIODMODEFIELD_DEFAULT << 0)

/* Bit fields for CMLV CLKPERIOD */
#define _CMLV_CLKPERIOD_RESETVALUE                0x00000000UL
#define _CMLV_CLKPERIOD_MASK                      0x0000FFFFUL
#define _CMLV_CLKPERIOD_CLKPERIODFIELD_SHIFT      0
#define _CMLV_CLKPERIOD_CLKPERIODFIELD_MASK       0xFFFFUL
#define _CMLV_CLKPERIOD_CLKPERIODFIELD_DEFAULT    0x00000000UL
#define CMLV_CLKPERIOD_CLKPERIODFIELD_DEFAULT     (_CMLV_CLKPERIOD_CLKPERIODFIELD_DEFAULT << 0)

/* Bit fields for CMLV DITHERDIS */
#define _CMLV_DITHERDIS_RESETVALUE           0x00000000UL
#define _CMLV_DITHERDIS_MASK                 0x00000001UL
#define _CMLV_DITHERDIS_DITHERDIS_SHIFT      0
#define _CMLV_DITHERDIS_DITHERDIS_MASK       0x1UL
#define _CMLV_DITHERDIS_DITHERDIS_DEFAULT    0x00000000UL
#define CMLV_DITHERDIS_DITHERDIS_DEFAULT     (_CMLV_DITHERDIS_DITHERDIS_DEFAULT << 0)

/* Bit fields for CMLV OSC24MCTRL */
#define _CMLV_OSC24MCTRL_RESETVALUE     0x00000000UL
#define _CMLV_OSC24MCTRL_MASK           0x00000003UL
#define CMLV_OSC24MCTRL_EN              (0x1UL << 1)
#define _CMLV_OSC24MCTRL_EN_SHIFT       1
#define _CMLV_OSC24MCTRL_EN_MASK        0x2UL
#define _CMLV_OSC24MCTRL_EN_DEFAULT     0x00000000UL
#define CMLV_OSC24MCTRL_EN_DEFAULT      (_CMLV_OSC24MCTRL_EN_DEFAULT << 1)
#define CMLV_OSC24MCTRL_SEL             (0x1UL << 0)
#define _CMLV_OSC24MCTRL_SEL_SHIFT      0
#define _CMLV_OSC24MCTRL_SEL_MASK       0x1UL
#define _CMLV_OSC24MCTRL_SEL_DEFAULT    0x00000000UL
#define CMLV_OSC24MCTRL_SEL_DEFAULT     (_CMLV_OSC24MCTRL_SEL_DEFAULT << 0)

/* Bit fields for CMLV CPUCLKSEL */
#define _CMLV_CPUCLKSEL_RESETVALUE                0x00000000UL
#define _CMLV_CPUCLKSEL_MASK                      0x00000001UL
#define CMLV_CPUCLKSEL_CPUCLKSELFIELD             (0x1UL << 0)
#define _CMLV_CPUCLKSEL_CPUCLKSELFIELD_SHIFT      0
#define _CMLV_CPUCLKSEL_CPUCLKSELFIELD_MASK       0x1UL
#define _CMLV_CPUCLKSEL_CPUCLKSELFIELD_DEFAULT    0x00000000UL
#define CMLV_CPUCLKSEL_CPUCLKSELFIELD_DEFAULT     (_CMLV_CPUCLKSEL_CPUCLKSELFIELD_DEFAULT << 0)

/* Bit fields for CMLV BUSFAULT */
#define _CMLV_BUSFAULT_RESETVALUE           0x00000000UL
#define _CMLV_BUSFAULT_MASK                 0x0000000FUL
#define CMLV_BUSFAULT_WRONGSIZE             (0x1UL << 3)
#define _CMLV_BUSFAULT_WRONGSIZE_SHIFT      3
#define _CMLV_BUSFAULT_WRONGSIZE_MASK       0x8UL
#define _CMLV_BUSFAULT_WRONGSIZE_DEFAULT    0x00000000UL
#define CMLV_BUSFAULT_WRONGSIZE_DEFAULT     (_CMLV_BUSFAULT_WRONGSIZE_DEFAULT << 3)
#define CMLV_BUSFAULT_PROTECTED             (0x1UL << 2)
#define _CMLV_BUSFAULT_PROTECTED_SHIFT      2
#define _CMLV_BUSFAULT_PROTECTED_MASK       0x4UL
#define _CMLV_BUSFAULT_PROTECTED_DEFAULT    0x00000000UL
#define CMLV_BUSFAULT_PROTECTED_DEFAULT     (_CMLV_BUSFAULT_PROTECTED_DEFAULT << 2)
#define CMLV_BUSFAULT_RESERVED              (0x1UL << 1)
#define _CMLV_BUSFAULT_RESERVED_SHIFT       1
#define _CMLV_BUSFAULT_RESERVED_MASK        0x2UL
#define _CMLV_BUSFAULT_RESERVED_DEFAULT     0x00000000UL
#define CMLV_BUSFAULT_RESERVED_DEFAULT      (_CMLV_BUSFAULT_RESERVED_DEFAULT << 1)
#define CMLV_BUSFAULT_MISSED                (0x1UL << 0)
#define _CMLV_BUSFAULT_MISSED_SHIFT         0
#define _CMLV_BUSFAULT_MISSED_MASK          0x1UL
#define _CMLV_BUSFAULT_MISSED_DEFAULT       0x00000000UL
#define CMLV_BUSFAULT_MISSED_DEFAULT        (_CMLV_BUSFAULT_MISSED_DEFAULT << 0)

/* Bit fields for CMLV PCTRACESEL */
#define _CMLV_PCTRACESEL_RESETVALUE                 0x00000000UL
#define _CMLV_PCTRACESEL_MASK                       0x00000001UL
#define _CMLV_PCTRACESEL_PCTRACESELFIELD_SHIFT      0
#define _CMLV_PCTRACESEL_PCTRACESELFIELD_MASK       0x1UL
#define _CMLV_PCTRACESEL_PCTRACESELFIELD_DEFAULT    0x00000000UL
#define CMLV_PCTRACESEL_PCTRACESELFIELD_DEFAULT     (_CMLV_PCTRACESEL_PCTRACESELFIELD_DEFAULT << 0)

/* Bit fields for CMLV FPECCLKREQ */
#define _CMLV_FPECCLKREQ_RESETVALUE             0x00000000UL
#define _CMLV_FPECCLKREQ_MASK                   0x00000001UL
#define _CMLV_FPECCLKREQ_CLKREQFIELD_SHIFT      0
#define _CMLV_FPECCLKREQ_CLKREQFIELD_MASK       0x1UL
#define _CMLV_FPECCLKREQ_CLKREQFIELD_DEFAULT    0x00000000UL
#define CMLV_FPECCLKREQ_CLKREQFIELD_DEFAULT     (_CMLV_FPECCLKREQ_CLKREQFIELD_DEFAULT << 0)

/* Bit fields for CMLV FPECCLKSTAT */
#define _CMLV_FPECCLKSTAT_RESETVALUE        0x00000000UL
#define _CMLV_FPECCLKSTAT_MASK              0x00000003UL
#define CMLV_FPECCLKSTAT_CLKBSY             (0x1UL << 1)
#define _CMLV_FPECCLKSTAT_CLKBSY_SHIFT      1
#define _CMLV_FPECCLKSTAT_CLKBSY_MASK       0x2UL
#define _CMLV_FPECCLKSTAT_CLKBSY_DEFAULT    0x00000000UL
#define CMLV_FPECCLKSTAT_CLKBSY_DEFAULT     (_CMLV_FPECCLKSTAT_CLKBSY_DEFAULT << 1)
#define CMLV_FPECCLKSTAT_CLKACK             (0x1UL << 0)
#define _CMLV_FPECCLKSTAT_CLKACK_SHIFT      0
#define _CMLV_FPECCLKSTAT_CLKACK_MASK       0x1UL
#define _CMLV_FPECCLKSTAT_CLKACK_DEFAULT    0x00000000UL
#define CMLV_FPECCLKSTAT_CLKACK_DEFAULT     (_CMLV_FPECCLKSTAT_CLKACK_DEFAULT << 0)

/* Bit fields for CMLV LVSPARE */
#define _CMLV_LVSPARE_RESETVALUE         0x00000000UL
#define _CMLV_LVSPARE_MASK               0x000000FFUL
#define _CMLV_LVSPARE_LVSPARE_SHIFT      0
#define _CMLV_LVSPARE_LVSPARE_MASK       0xFFUL
#define _CMLV_LVSPARE_LVSPARE_DEFAULT    0x00000000UL
#define CMLV_LVSPARE_LVSPARE_DEFAULT     (_CMLV_LVSPARE_LVSPARE_DEFAULT << 0)

/* Bit fields for CMLV PERIPHERALDISABLE */
#define _CMLV_PERIPHERALDISABLE_RESETVALUE      0x00000000UL
#define _CMLV_PERIPHERALDISABLE_MASK            0x0000003FUL
#define CMLV_PERIPHERALDISABLE_RSVD             (0x1UL << 5)
#define _CMLV_PERIPHERALDISABLE_RSVD_SHIFT      5
#define _CMLV_PERIPHERALDISABLE_RSVD_MASK       0x20UL
#define _CMLV_PERIPHERALDISABLE_RSVD_DEFAULT    0x00000000UL
#define CMLV_PERIPHERALDISABLE_RSVD_DEFAULT     (_CMLV_PERIPHERALDISABLE_RSVD_DEFAULT << 5)
#define CMLV_PERIPHERALDISABLE_ADC              (0x1UL << 4)
#define _CMLV_PERIPHERALDISABLE_ADC_SHIFT       4
#define _CMLV_PERIPHERALDISABLE_ADC_MASK        0x10UL
#define _CMLV_PERIPHERALDISABLE_ADC_DEFAULT     0x00000000UL
#define CMLV_PERIPHERALDISABLE_ADC_DEFAULT      (_CMLV_PERIPHERALDISABLE_ADC_DEFAULT << 4)
#define CMLV_PERIPHERALDISABLE_TIM2             (0x1UL << 3)
#define _CMLV_PERIPHERALDISABLE_TIM2_SHIFT      3
#define _CMLV_PERIPHERALDISABLE_TIM2_MASK       0x8UL
#define _CMLV_PERIPHERALDISABLE_TIM2_DEFAULT    0x00000000UL
#define CMLV_PERIPHERALDISABLE_TIM2_DEFAULT     (_CMLV_PERIPHERALDISABLE_TIM2_DEFAULT << 3)
#define CMLV_PERIPHERALDISABLE_TIM1             (0x1UL << 2)
#define _CMLV_PERIPHERALDISABLE_TIM1_SHIFT      2
#define _CMLV_PERIPHERALDISABLE_TIM1_MASK       0x4UL
#define _CMLV_PERIPHERALDISABLE_TIM1_DEFAULT    0x00000000UL
#define CMLV_PERIPHERALDISABLE_TIM1_DEFAULT     (_CMLV_PERIPHERALDISABLE_TIM1_DEFAULT << 2)
#define CMLV_PERIPHERALDISABLE_SC1              (0x1UL << 1)
#define _CMLV_PERIPHERALDISABLE_SC1_SHIFT       1
#define _CMLV_PERIPHERALDISABLE_SC1_MASK        0x2UL
#define _CMLV_PERIPHERALDISABLE_SC1_DEFAULT     0x00000000UL
#define CMLV_PERIPHERALDISABLE_SC1_DEFAULT      (_CMLV_PERIPHERALDISABLE_SC1_DEFAULT << 1)
#define CMLV_PERIPHERALDISABLE_SC2              (0x1UL << 0)
#define _CMLV_PERIPHERALDISABLE_SC2_SHIFT       0
#define _CMLV_PERIPHERALDISABLE_SC2_MASK        0x1UL
#define _CMLV_PERIPHERALDISABLE_SC2_DEFAULT     0x00000000UL
#define CMLV_PERIPHERALDISABLE_SC2_DEFAULT      (_CMLV_PERIPHERALDISABLE_SC2_DEFAULT << 0)

/** @} End of group EM34X_CMLV_BitFields */
