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
 *             File:  Rte_AppComTx_Type.h
 *           Config:  TC27x.dpa
 *      ECU-Project:  TC27x
 *
 *        Generator:  MICROSAR RTE Generator Version 4.21.0
 *                    RTE Core Version 1.21.0
 *          License:  CBD1600956
 *
 *      Description:  Application types header file for SW-C <AppComTx>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_APPCOMTX_TYPE_H
# define RTE_APPCOMTX_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  ifndef Cx0_LED_ON
#   define Cx0_LED_ON (0U)
#  endif

#  ifndef Cx1_LED_OFF
#   define Cx1_LED_OFF (1U)
#  endif

#  ifndef Cx2_Reserve
#   define Cx2_Reserve (2U)
#  endif

#  ifndef Cx3_Reserve
#   define Cx3_Reserve (3U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_APPCOMTX_TYPE_H */
