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
 *             File:  SchM_Adc.h
 *           Config:  TC27x.dpa
 *      ECU-Project:  TC27x
 *
 *        Generator:  MICROSAR RTE Generator Version 4.21.0
 *                    RTE Core Version 1.21.0
 *          License:  CBD1600956
 *
 *      Description:  Header of BSW Scheduler for BSW Module <Adc>
 *********************************************************************************************************************/
#ifndef SCHM_ADC_H
# define SCHM_ADC_H

# ifdef __cplusplus
extern "C" {
# endif  /* __cplusplus */

# include "SchM_Adc_Type.h"

# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(void, RTE_CODE) SchM_Enter_Adc_DisableHwTrig(void);
FUNC(void, RTE_CODE) SchM_Exit_Adc_DisableHwTrig(void);
FUNC(void, RTE_CODE) SchM_Enter_Adc_EnableHwTrig(void);
FUNC(void, RTE_CODE) SchM_Exit_Adc_EnableHwTrig(void);
FUNC(void, RTE_CODE) SchM_Enter_Adc_GetGrpStatus(void);
FUNC(void, RTE_CODE) SchM_Exit_Adc_GetGrpStatus(void);
FUNC(void, RTE_CODE) SchM_Enter_Adc_GetStreamLastPtr(void);
FUNC(void, RTE_CODE) SchM_Exit_Adc_GetStreamLastPtr(void);
FUNC(void, RTE_CODE) SchM_Enter_Adc_PopQueue(void);
FUNC(void, RTE_CODE) SchM_Exit_Adc_PopQueue(void);
FUNC(void, RTE_CODE) SchM_Enter_Adc_PushQueue(void);
FUNC(void, RTE_CODE) SchM_Exit_Adc_PushQueue(void);
FUNC(void, RTE_CODE) SchM_Enter_Adc_ReadGroup(void);
FUNC(void, RTE_CODE) SchM_Exit_Adc_ReadGroup(void);
FUNC(void, RTE_CODE) SchM_Enter_Adc_ScheduleNext(void);
FUNC(void, RTE_CODE) SchM_Exit_Adc_ScheduleNext(void);
FUNC(void, RTE_CODE) SchM_Enter_Adc_ScheduleStart(void);
FUNC(void, RTE_CODE) SchM_Exit_Adc_ScheduleStart(void);
FUNC(void, RTE_CODE) SchM_Enter_Adc_ScheduleStop(void);
FUNC(void, RTE_CODE) SchM_Exit_Adc_ScheduleStop(void);
FUNC(void, RTE_CODE) SchM_Enter_Adc_StartGroup(void);
FUNC(void, RTE_CODE) SchM_Exit_Adc_StartGroup(void);
FUNC(void, RTE_CODE) SchM_Enter_Adc_StopGroup(void);
FUNC(void, RTE_CODE) SchM_Exit_Adc_StopGroup(void);

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif  /* __cplusplus */

#endif /* SCHM_ADC_H */
