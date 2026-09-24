/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *             File:  Rte_AppComRx_Type.h
 *           Config:  TC27x.dpa
 *      ECU-Project:  TC27x
 *
 *        Generator:  MICROSAR RTE Generator Version 4.21.0
 *                    RTE Core Version 1.21.0
 *          License:  CBD1600956
 *
 *      Description:  Application types header file for SW-C <AppComRx>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_APPCOMRX_TYPE_H
# define RTE_APPCOMRX_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  ifndef Cx0_Button_Mode1
#   define Cx0_Button_Mode1 (0U)
#  endif

#  ifndef Cx1_Button_Mode2
#   define Cx1_Button_Mode2 (1U)
#  endif

#  ifndef Cx2_Button_Disable
#   define Cx2_Button_Disable (2U)
#  endif

#  ifndef Cx0_Init
#   define Cx0_Init (0U)
#  endif

#  ifndef Cx1_LED_ON
#   define Cx1_LED_ON (1U)
#  endif

#  ifndef Cx2_LED_OFF
#   define Cx2_LED_OFF (2U)
#  endif

#  ifndef Cx3_Reserve
#   define Cx3_Reserve (3U)
#  endif

#  ifndef Cx0_Can_Control
#   define Cx0_Can_Control (0U)
#  endif

#  ifndef Cx1_Button_Control_Mode1
#   define Cx1_Button_Control_Mode1 (1U)
#  endif

#  ifndef Cx2_Button_Control_Mode2
#   define Cx2_Button_Control_Mode2 (2U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_APPCOMRX_TYPE_H */
