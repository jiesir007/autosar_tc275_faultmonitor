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
 *             File:  Rte_SystemApplication_OsCore0.c
 *           Config:  TC27x.dpa
 *      ECU-Project:  TC27x
 *
 *        Generator:  MICROSAR RTE Generator Version 4.21.0
 *                    RTE Core Version 1.21.0
 *          License:  CBD1600956
 *
 *      Description:  RTE implementation file
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* PRQA S 0777, 0779, 0857 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2, MD_MSR_Dir1.1 */

#define RTE_CORE
#include "Os.h" /* PRQA S 0828, 0883 */ /* MD_MSR_Dir1.1, MD_Rte_Os */
#include "Rte_Type.h"
#include "Rte_Main.h"

#include "Rte_AppButtonCtrl.h"
#include "Rte_AppComRx.h"
#include "Rte_AppComTx.h"
#include "Rte_AppCtrl.h"
#include "Rte_AppCtrl1.h"
#include "Rte_AppCtrl2.h"
#include "Rte_AppLedCtrl.h"
#include "Rte_AppWakeUpCtrl.h"
#include "Rte_BswM.h"
#include "Rte_ComM.h"
#include "Rte_Dcm.h"
#include "Rte_DemMaster_0.h"
#include "Rte_DemSatellite_0.h"
#include "Rte_Det.h"
#include "Rte_EcuM.h"
#include "Rte_IcuCdd.h"
#include "Rte_IoHwAb.h"
#include "Rte_Os_OsCore0_swc.h"
#include "Rte_Os_OsCore1_swc.h"
#include "Rte_Os_OsCore2_swc.h"
#include "SchM_Adc.h"
#include "SchM_BswM.h"
#include "SchM_Can.h"
#include "SchM_CanIf.h"
#include "SchM_CanNm.h"
#include "SchM_CanSM.h"
#include "SchM_CanTp.h"
#include "SchM_CanTrcv_30_Tja1043.h"
#include "SchM_Com.h"
#include "SchM_ComM.h"
#include "SchM_Dcm.h"
#include "SchM_Dem.h"
#include "SchM_Det.h"
#include "SchM_Dio.h"
#include "SchM_EcuM.h"
#include "SchM_Icu_17_GtmCcu6.h"
#include "SchM_IoHwAb.h"
#include "SchM_Irq.h"
#include "SchM_Mcu.h"
#include "SchM_Nm.h"
#include "SchM_PduR.h"
#include "SchM_Port.h"

#include "Rte_Hook.h"

#include "Com.h"
#if defined(IL_ASRCOM_VERSION)
# define RTE_USE_COM_TXSIGNAL_RDACCESS
#endif

#include "Rte_Cbk.h"

/* AUTOSAR 3.x compatibility */
#if !defined (RTE_LOCAL)
# define RTE_LOCAL static
#endif


/**********************************************************************************************************************
 * API for enable / disable interrupts global
 *********************************************************************************************************************/

#if defined(osDisableGlobalKM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_DisableAllInterrupts() osDisableGlobalKM()   /* MICROSAR OS */
#else
# define Rte_DisableAllInterrupts() DisableAllInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osEnableGlobalKM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_EnableAllInterrupts() osEnableGlobalKM()   /* MICROSAR OS */
#else
# define Rte_EnableAllInterrupts() EnableAllInterrupts()   /* AUTOSAR OS */
#endif

/**********************************************************************************************************************
 * API for enable / disable interrupts up to the systemLevel
 *********************************************************************************************************************/

#if defined(osDisableLevelKM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_DisableOSInterrupts() osDisableLevelKM()   /* MICROSAR OS */
#else
# define Rte_DisableOSInterrupts() SuspendOSInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osEnableLevelKM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_EnableOSInterrupts() osEnableLevelKM()   /* MICROSAR OS */
#else
# define Rte_EnableOSInterrupts() ResumeOSInterrupts()   /* AUTOSAR OS */
#endif


/**********************************************************************************************************************
 * Buffers for unqueued S/R
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_Sig_Grp_0x300, RTE_VAR_INIT) Rte_AppComRx_SG_Sig_Grp_0x300_SR_S_SG_Sig_Grp_0x300 = {
  2U, 2U, 2U, 2U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_Sig_Grp_0x301, RTE_VAR_INIT) Rte_AppComRx_SG_Sig_Grp_0x301_SR_S_SG_Sig_Grp_0x301 = {
  0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_Sig_Grp_0x302, RTE_VAR_INIT) Rte_AppComRx_SG_Sig_Grp_0x302_SR_S_SG_Sig_Grp_0x302 = {
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_Sig_Grp_0x304, RTE_VAR_INIT) Rte_AppComRx_SG_Sig_Grp_0x304_SR_S_SG_Sig_Grp_0x304 = {
  0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(Meg_Trigger_Type, RTE_VAR_INIT) Rte_AppCtrl_Meg_Trigger_State_0x214_SR_S_Meg_Trigger_State = FALSE;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_Sig_Grp_0x210, RTE_VAR_INIT) Rte_AppCtrl_SG_Sig_Grp_0x210_SR_S_SG_Sig_Grp_0x210 = {
  0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_Sig_Grp_0x211, RTE_VAR_INIT) Rte_AppCtrl_SG_Sig_Grp_0x211_SR_R_SG_Sig_Grp_0x211 = {
  0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_Sig_Grp_0x212, RTE_VAR_INIT) Rte_AppCtrl_SG_Sig_Grp_0x212_SR_R_SG_Sig_Grp_0x212 = {
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_Sig_Grp_0x213, RTE_VAR_INIT) Rte_AppCtrl_SG_Sig_Grp_0x213_SR_R_SG_Sig_Grp_0x213 = {
  36U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_Sig_Grp_0x214, RTE_VAR_INIT) Rte_AppCtrl_SG_Sig_Grp_0x214_SR_R_SG_Sig_Grp_0x214 = {
  0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(SG_Sig_Grp_0x216, RTE_VAR_INIT) Rte_AppCtrl_SG_Sig_Grp_0x216_SR_R_SG_Sig_Grp_0x216 = {
  0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(ComM_ModeType, RTE_VAR_INIT) Rte_AppWakeUpCtrl_App_ComM_Mode_Request_Request_Mode = 0U;
/* PRQA L:L1 */

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * TxAck/ModeSwitchAck Flags
 *********************************************************************************************************************/


#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

VAR(Rte_SystemApplication_OsCore0_AckFlagsType, RTE_VAR_INIT) Rte_SystemApplication_OsCore0_AckFlags = {
  1,
};

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define Rte_SystemApplication_OsCore0_AckFlagsInit() (Rte_MemClr(&Rte_SystemApplication_OsCore0_AckFlags, sizeof(Rte_SystemApplication_OsCore0_AckFlagsType)))
/**********************************************************************************************************************
 * Defines for Rte_ComSendSignalProxy
 *********************************************************************************************************************/
#define RTE_COM_SENDSIGNALPROXY_NOCHANGE       (0U)
#define RTE_COM_SENDSIGNALPROXY_SEND           (1U)
#define RTE_COM_SENDSIGNALPROXY_INVALIDATE     (2U)


#define RTE_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(void, RTE_CODE) Rte_MemClr(P2VAR(void, AUTOMATIC, RTE_VAR_NOINIT) ptr, uint32_least num);

#define RTE_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * Data structures for mode management
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
VAR(BswM_ESH_Mode, RTE_VAR_INIT) Rte_ModeMachine_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_BswM_ESH_Mode_STARTUP; /* PRQA S 3408 */ /* MD_Rte_3408 */
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */



/**********************************************************************************************************************
 * Timer handling
 *********************************************************************************************************************/

#if defined OS_US2TICKS_SystemTimer_Core0
# define RTE_USEC_SystemTimer_Core0 OS_US2TICKS_SystemTimer_Core0
#else
# define RTE_USEC_SystemTimer_Core0(val) ((TickType)RTE_CONST_USEC_SystemTimer_Core0_##val) /* PRQA S 0342 */ /* MD_MSR_Rule20.10_0342 */
#endif

#if defined OS_MS2TICKS_SystemTimer_Core0
# define RTE_MSEC_SystemTimer_Core0 OS_MS2TICKS_SystemTimer_Core0
#else
# define RTE_MSEC_SystemTimer_Core0(val) ((TickType)RTE_CONST_MSEC_SystemTimer_Core0_##val) /* PRQA S 0342 */ /* MD_MSR_Rule20.10_0342 */
#endif

#if defined OS_SEC2TICKS_SystemTimer_Core0
# define RTE_SEC_SystemTimer_Core0 OS_SEC2TICKS_SystemTimer_Core0
#else
# define RTE_SEC_SystemTimer_Core0(val)  ((TickType)RTE_CONST_SEC_SystemTimer_Core0_##val) /* PRQA S 0342 */ /* MD_MSR_Rule20.10_0342 */
#endif

#if defined OS_US2TICKS_SystemTimer_Core1
# define RTE_USEC_SystemTimer_Core1 OS_US2TICKS_SystemTimer_Core1
#else
# define RTE_USEC_SystemTimer_Core1(val) ((TickType)RTE_CONST_USEC_SystemTimer_Core1_##val) /* PRQA S 0342 */ /* MD_MSR_Rule20.10_0342 */
#endif

#if defined OS_MS2TICKS_SystemTimer_Core1
# define RTE_MSEC_SystemTimer_Core1 OS_MS2TICKS_SystemTimer_Core1
#else
# define RTE_MSEC_SystemTimer_Core1(val) ((TickType)RTE_CONST_MSEC_SystemTimer_Core1_##val) /* PRQA S 0342 */ /* MD_MSR_Rule20.10_0342 */
#endif

#if defined OS_SEC2TICKS_SystemTimer_Core1
# define RTE_SEC_SystemTimer_Core1 OS_SEC2TICKS_SystemTimer_Core1
#else
# define RTE_SEC_SystemTimer_Core1(val)  ((TickType)RTE_CONST_SEC_SystemTimer_Core1_##val) /* PRQA S 0342 */ /* MD_MSR_Rule20.10_0342 */
#endif

#if defined OS_US2TICKS_SystemTimer_Core2
# define RTE_USEC_SystemTimer_Core2 OS_US2TICKS_SystemTimer_Core2
#else
# define RTE_USEC_SystemTimer_Core2(val) ((TickType)RTE_CONST_USEC_SystemTimer_Core2_##val) /* PRQA S 0342 */ /* MD_MSR_Rule20.10_0342 */
#endif

#if defined OS_MS2TICKS_SystemTimer_Core2
# define RTE_MSEC_SystemTimer_Core2 OS_MS2TICKS_SystemTimer_Core2
#else
# define RTE_MSEC_SystemTimer_Core2(val) ((TickType)RTE_CONST_MSEC_SystemTimer_Core2_##val) /* PRQA S 0342 */ /* MD_MSR_Rule20.10_0342 */
#endif

#if defined OS_SEC2TICKS_SystemTimer_Core2
# define RTE_SEC_SystemTimer_Core2 OS_SEC2TICKS_SystemTimer_Core2
#else
# define RTE_SEC_SystemTimer_Core2(val)  ((TickType)RTE_CONST_SEC_SystemTimer_Core2_##val) /* PRQA S 0342 */ /* MD_MSR_Rule20.10_0342 */
#endif

#define RTE_CONST_MSEC_SystemTimer_Core0_0 (0UL)
#define RTE_CONST_MSEC_SystemTimer_Core1_0 (0UL)
#define RTE_CONST_MSEC_SystemTimer_Core2_0 (0UL)
#define RTE_CONST_MSEC_SystemTimer_Core0_10 (10UL)
#define RTE_CONST_MSEC_SystemTimer_Core1_10 (10UL)
#define RTE_CONST_MSEC_SystemTimer_Core2_10 (10UL)
#define RTE_CONST_MSEC_SystemTimer_Core0_5 (5UL)
#define RTE_CONST_MSEC_SystemTimer_Core1_5 (5UL)
#define RTE_CONST_MSEC_SystemTimer_Core2_5 (5UL)


/**********************************************************************************************************************
 * Internal definitions
 *********************************************************************************************************************/

#define RTE_TASK_TIMEOUT_EVENT_MASK   ((EventMaskType)0x01)
#define RTE_TASK_WAITPOINT_EVENT_MASK ((EventMaskType)0x02)

/**********************************************************************************************************************
 * RTE life cycle API
 *********************************************************************************************************************/

#define RTE_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


FUNC(void, RTE_CODE) Rte_InitMemory_SystemApplication_OsCore0(void)
{
  /* set default values for internal data */
  Rte_AppComRx_SG_Sig_Grp_0x300_SR_S_SG_Sig_Grp_0x300 = Rte_C_SG_Sig_Grp_0x300_0;
  Rte_AppComRx_SG_Sig_Grp_0x301_SR_S_SG_Sig_Grp_0x301 = Rte_C_SG_Sig_Grp_0x301_0;
  Rte_AppComRx_SG_Sig_Grp_0x302_SR_S_SG_Sig_Grp_0x302 = Rte_C_SG_Sig_Grp_0x302_0;
  Rte_AppComRx_SG_Sig_Grp_0x304_SR_S_SG_Sig_Grp_0x304 = Rte_C_SG_Sig_Grp_0x304_0;
  Rte_AppCtrl_Meg_Trigger_State_0x214_SR_S_Meg_Trigger_State = FALSE;
  Rte_AppCtrl_SG_Sig_Grp_0x210_SR_S_SG_Sig_Grp_0x210 = Rte_C_SG_Sig_Grp_0x210_0;
  Rte_AppCtrl_SG_Sig_Grp_0x211_SR_R_SG_Sig_Grp_0x211 = Rte_C_SG_Sig_Grp_0x211_0;
  Rte_AppCtrl_SG_Sig_Grp_0x212_SR_R_SG_Sig_Grp_0x212 = Rte_C_SG_Sig_Grp_0x212_0;
  Rte_AppCtrl_SG_Sig_Grp_0x213_SR_R_SG_Sig_Grp_0x213 = Rte_C_SG_Sig_Grp_0x213_0;
  Rte_AppCtrl_SG_Sig_Grp_0x214_SR_R_SG_Sig_Grp_0x214 = Rte_C_SG_Sig_Grp_0x214_0;
  Rte_AppCtrl_SG_Sig_Grp_0x216_SR_R_SG_Sig_Grp_0x216 = Rte_C_SG_Sig_Grp_0x216_0;
  Rte_AppWakeUpCtrl_App_ComM_Mode_Request_Request_Mode = 0U;

  /* reset Tx Ack Flags */
  Rte_SystemApplication_OsCore0_AckFlagsInit(); /* PRQA S 0315 */ /* MD_Rte_0315 */
  Rte_SystemApplication_OsCore0_AckFlags.Rte_ModeSwitchAck_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Ack = 1U;

  /* mode management initialization part 1 */

  Rte_ModeMachine_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_BswM_ESH_Mode_STARTUP;

}


/**********************************************************************************************************************
 * Internal/External Tx connections
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AppComRx_SG_Sig_Grp_0x300_SR_S_SG_Sig_Grp_0x300(P2CONST(SG_Sig_Grp_0x300, AUTOMATIC, RTE_APPCOMRX_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_AppComRx_SG_Sig_Grp_0x300_SR_S_SG_Sig_Grp_0x300 = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AppComRx_SG_Sig_Grp_0x301_SR_S_SG_Sig_Grp_0x301(P2CONST(SG_Sig_Grp_0x301, AUTOMATIC, RTE_APPCOMRX_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_AppComRx_SG_Sig_Grp_0x301_SR_S_SG_Sig_Grp_0x301 = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AppComRx_SG_Sig_Grp_0x302_SR_S_SG_Sig_Grp_0x302(P2CONST(SG_Sig_Grp_0x302, AUTOMATIC, RTE_APPCOMRX_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_AppComRx_SG_Sig_Grp_0x302_SR_S_SG_Sig_Grp_0x302 = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AppComRx_SG_Sig_Grp_0x304_SR_S_SG_Sig_Grp_0x304(P2CONST(SG_Sig_Grp_0x304, AUTOMATIC, RTE_APPCOMRX_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_AppComRx_SG_Sig_Grp_0x304_SR_S_SG_Sig_Grp_0x304 = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AppComTx_SG_Sig_Grp_0x210_SG_Sig_Grp_0x210(P2CONST(SG_Sig_Grp_0x210, AUTOMATIC, RTE_APPCOMTX_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComGroupSignal_F_Led1_State_oSupF_Led_State_oDBCNetWork_8a0569d2_Tx, &(*(data)).F_Led1_State); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_MSR_RetVal */
  ret |= Com_SendSignal(ComConf_ComGroupSignal_F_Led2_State_oSupF_Led_State_oDBCNetWork_01d657cb_Tx, &(*(data)).F_Led2_State); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_MSR_RetVal */
  ret |= Com_SendSignal(ComConf_ComGroupSignal_F_Led3_State_oSupF_Led_State_oDBCNetWork_ce484003_Tx, &(*(data)).F_Led3_State); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_MSR_RetVal */
  ret |= Com_SendSignal(ComConf_ComGroupSignal_F_Led4_State_oSupF_Led_State_oDBCNetWork_cd012db8_Tx, &(*(data)).F_Led4_State); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_MSR_RetVal */
  ret |= Com_SendSignalGroup(ComConf_ComSignalGroup_SG_Sig_Grp_0x210_oSupF_Led_State_oDBCNetWork_ec44dd46_Tx); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_MSR_RetVal */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AppComTx_SG_Sig_Grp_0x211_SG_Sig_Grp_0x211(P2CONST(SG_Sig_Grp_0x211, AUTOMATIC, RTE_APPCOMTX_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComGroupSignal_F_Button1_State_oSupF_Button_State_oDBCNetWork_ab1ba929_Tx, &(*(data)).F_Button1_State); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_MSR_RetVal */
  ret |= Com_SendSignal(ComConf_ComGroupSignal_F_Button2_State_oSupF_Button_State_oDBCNetWork_e6f3a94e_Tx, &(*(data)).F_Button2_State); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_MSR_RetVal */
  ret |= Com_SendSignal(ComConf_ComGroupSignal_F_Button3_State_oSupF_Button_State_oDBCNetWork_6b7b54ac_Tx, &(*(data)).F_Button3_State); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_MSR_RetVal */
  ret |= Com_SendSignal(ComConf_ComGroupSignal_F_Button4_State_oSupF_Button_State_oDBCNetWork_7d23a980_Tx, &(*(data)).F_Button4_State); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_MSR_RetVal */
  ret |= Com_SendSignalGroup(ComConf_ComSignalGroup_SG_Sig_Grp_0x211_oSupF_Button_State_oDBCNetWork_b368711c_Tx); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_MSR_RetVal */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AppComTx_SG_Sig_Grp_0x212_SG_Sig_Grp_0x212(P2CONST(SG_Sig_Grp_0x212, AUTOMATIC, RTE_APPCOMTX_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComGroupSignal_F_PowerMode_oSupF_PowerMode_oDBCNetWork_16d1a370_Tx, &(*(data)).F_PowerMode); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_MSR_RetVal */
  ret |= Com_SendSignal(ComConf_ComGroupSignal_SupF_Checksum_0x212_oSupF_PowerMode_oDBCNetWork_8c3e64a3_Tx, &(*(data)).SupF_Checksum_0x212); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_MSR_RetVal */
  ret |= Com_SendSignal(ComConf_ComGroupSignal_SupF_Counter_0x212_oSupF_PowerMode_oDBCNetWork_35c7002c_Tx, &(*(data)).SupF_Counter_0x212); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_MSR_RetVal */
  ret |= Com_SendSignalGroup(ComConf_ComSignalGroup_SG_Sig_Grp_0x212_oSupF_PowerMode_oDBCNetWork_de62da88_Tx); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_MSR_RetVal */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AppComTx_SG_Sig_Grp_0x213_SG_Sig_Grp_0x213(P2CONST(SG_Sig_Grp_0x213, AUTOMATIC, RTE_APPCOMTX_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComGroupSignal_F_AAA_Angle_oSupF_Angle_oDBCNetWork_d35fb591_Tx, &(*(data)).F_AAA_Angle); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_MSR_RetVal */
  ret |= Com_SendSignalGroup(ComConf_ComSignalGroup_SG_Sig_Grp_0x213_oSupF_Angle_oDBCNetWork_3c68f302_Tx); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_MSR_RetVal */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AppComTx_SG_Sig_Grp_0x214_SG_Sig_Grp_0x214(P2CONST(SG_Sig_Grp_0x214, AUTOMATIC, RTE_APPCOMTX_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComGroupSignal_F_Sig_0x214_Used_1_oSupF_Function_1_oDBCNetWork_cbe4e15e_Tx, &(*(data)).F_Sig_0x214_Used_1); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_MSR_RetVal */
  ret |= Com_SendSignal(ComConf_ComGroupSignal_F_Sig_0x214_Used_2_oSupF_Function_1_oDBCNetWork_8f45c446_Tx, &(*(data)).F_Sig_0x214_Used_2); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_MSR_RetVal */
  ret |= Com_SendSignal(ComConf_ComGroupSignal_F_Sig_0x214_Used_3_oSupF_Function_1_oDBCNetWork_b325274e_Tx, &(*(data)).F_Sig_0x214_Used_3); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_MSR_RetVal */
  ret |= Com_SendSignal(ComConf_ComGroupSignal_F_Sig_0x214_Used_5_oSupF_Function_1_oDBCNetWork_3a676d7e_Tx, &(*(data)).F_Sig_0x214_Used_5); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_MSR_RetVal */
  ret |= Com_SendSignalGroup(ComConf_ComSignalGroup_SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_MSR_RetVal */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AppComTx_SG_Sig_Grp_0x216_SG_Sig_Grp_0x216(P2CONST(SG_Sig_Grp_0x216, AUTOMATIC, RTE_APPCOMTX_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret |= Com_SendSignal(ComConf_ComGroupSignal_F_Meg_E2E_Error_oSupF_ComError_oDBCNetWork_edc11637_Tx, &(*(data)).F_Meg_E2E_Error); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_MSR_RetVal */
  ret |= Com_SendSignal(ComConf_ComGroupSignal_F_Mes_Lost_Error_oSupF_ComError_oDBCNetWork_72d68791_Tx, &(*(data)).F_Mes_Lost_Error); /* PRQA S 0315, 1340, 2986 */ /* MD_Rte_0315, MD_Rte_1340, MD_MSR_RetVal */
  ret |= Com_SendSignalGroup(ComConf_ComSignalGroup_SG_Sig_Grp_0x216_oSupF_ComError_oDBCNetWork_8d63d174_Tx); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_MSR_RetVal */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AppCtrl_SG_Sig_Grp_0x210_SR_S_SG_Sig_Grp_0x210(P2CONST(SG_Sig_Grp_0x210, AUTOMATIC, RTE_APPCTRL_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_AppCtrl_SG_Sig_Grp_0x210_SR_S_SG_Sig_Grp_0x210 = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AppCtrl_SG_Sig_Grp_0x211_SR_R_SG_Sig_Grp_0x211(P2CONST(SG_Sig_Grp_0x211, AUTOMATIC, RTE_APPCTRL_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_AppCtrl_SG_Sig_Grp_0x211_SR_R_SG_Sig_Grp_0x211 = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AppCtrl_SG_Sig_Grp_0x212_SR_R_SG_Sig_Grp_0x212(P2CONST(SG_Sig_Grp_0x212, AUTOMATIC, RTE_APPCTRL_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_AppCtrl_SG_Sig_Grp_0x212_SR_R_SG_Sig_Grp_0x212 = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AppCtrl_SG_Sig_Grp_0x213_SR_R_SG_Sig_Grp_0x213(P2CONST(SG_Sig_Grp_0x213, AUTOMATIC, RTE_APPCTRL_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_AppCtrl_SG_Sig_Grp_0x213_SR_R_SG_Sig_Grp_0x213 = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AppCtrl_SG_Sig_Grp_0x214_SR_R_SG_Sig_Grp_0x214(P2CONST(SG_Sig_Grp_0x214, AUTOMATIC, RTE_APPCTRL_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_AppCtrl_SG_Sig_Grp_0x214_SR_R_SG_Sig_Grp_0x214 = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AppCtrl_SG_Sig_Grp_0x216_SR_R_SG_Sig_Grp_0x216(P2CONST(SG_Sig_Grp_0x216, AUTOMATIC, RTE_APPCTRL_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_AppCtrl_SG_Sig_Grp_0x216_SR_R_SG_Sig_Grp_0x216 = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */


/**********************************************************************************************************************
 * Internal/External Rx connections
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AppComRx_SG_Sig_Grp_0x300_SG_Sig_Grp_0x300(P2VAR(SG_Sig_Grp_0x300, AUTOMATIC, RTE_APPCOMRX_APPL_VAR) data) /* PRQA S 3673, 1505, 3206 */ /* MD_Rte_Qac, MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret = Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx); /* PRQA S 3453, 0315 */ /* MD_MSR_FctLikeMacro, MD_Rte_0315 */
  ret |= Com_ReceiveSignal(ComConf_ComGroupSignal_D_Led1_Control_oSupD_Led_Control_oDBCNetWork_34bc1d83_Rx, &(*(data)).D_Led1_Control); /* PRQA S 3453, 0315, 2986 */ /* MD_MSR_FctLikeMacro, MD_Rte_0315, MD_MSR_RetVal */
  ret |= Com_ReceiveSignal(ComConf_ComGroupSignal_D_Led2_Control_oSupD_Led_Control_oDBCNetWork_e7270178_Rx, &(*(data)).D_Led2_Control); /* PRQA S 3453, 0315, 2986 */ /* MD_MSR_FctLikeMacro, MD_Rte_0315, MD_MSR_RetVal */
  ret |= Com_ReceiveSignal(ComConf_ComGroupSignal_D_Led3_Control_oSupD_Led_Control_oDBCNetWork_a9ae0ad1_Rx, &(*(data)).D_Led3_Control); /* PRQA S 3453, 0315, 2986 */ /* MD_MSR_FctLikeMacro, MD_Rte_0315, MD_MSR_RetVal */
  ret |= Com_ReceiveSignal(ComConf_ComGroupSignal_D_Led4_Control_oSupD_Led_Control_oDBCNetWork_9b603ecf_Rx, &(*(data)).D_Led4_Control); /* PRQA S 3453, 0315, 2986 */ /* MD_MSR_FctLikeMacro, MD_Rte_0315, MD_MSR_RetVal */
  ret |= Com_ReceiveSignal(ComConf_ComGroupSignal_SupD_Checksum_0x300_oSupD_Led_Control_oDBCNetWork_2c493488_Rx, &(*(data)).SupD_Checksum_0x300); /* PRQA S 3453, 0315, 2986 */ /* MD_MSR_FctLikeMacro, MD_Rte_0315, MD_MSR_RetVal */
  ret |= Com_ReceiveSignal(ComConf_ComGroupSignal_SupD_Counter_0x300_oSupD_Led_Control_oDBCNetWork_b943cd4b_Rx, &(*(data)).SupD_Counter_0x300); /* PRQA S 3453, 0315, 2986 */ /* MD_MSR_FctLikeMacro, MD_Rte_0315, MD_MSR_RetVal */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AppComRx_SG_Sig_Grp_0x301_SG_Sig_Grp_0x301(P2VAR(SG_Sig_Grp_0x301, AUTOMATIC, RTE_APPCOMRX_APPL_VAR) data) /* PRQA S 3673, 1505, 3206 */ /* MD_Rte_Qac, MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret = Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_Sig_Grp_0x301_oSupD_Button_Control_oDBCNetWork_188cbd42_Rx); /* PRQA S 3453, 0315 */ /* MD_MSR_FctLikeMacro, MD_Rte_0315 */
  ret |= Com_ReceiveSignal(ComConf_ComGroupSignal_D_Button1_Control_oSupD_Button_Control_oDBCNetWork_fc1efec2_Rx, &(*(data)).D_Button1_Control); /* PRQA S 3453, 0315, 2986 */ /* MD_MSR_FctLikeMacro, MD_Rte_0315, MD_MSR_RetVal */
  ret |= Com_ReceiveSignal(ComConf_ComGroupSignal_D_Button2_Control_oSupD_Button_Control_oDBCNetWork_c42575b1_Rx, &(*(data)).D_Button2_Control); /* PRQA S 3453, 0315, 2986 */ /* MD_MSR_FctLikeMacro, MD_Rte_0315, MD_MSR_RetVal */
  ret |= Com_ReceiveSignal(ComConf_ComGroupSignal_D_Button3_Control_oSupD_Button_Control_oDBCNetWork_651cf15f_Rx, &(*(data)).D_Button3_Control); /* PRQA S 3453, 0315, 2986 */ /* MD_MSR_FctLikeMacro, MD_Rte_0315, MD_MSR_RetVal */
  ret |= Com_ReceiveSignal(ComConf_ComGroupSignal_D_Button4_Control_oSupD_Button_Control_oDBCNetWork_b4526357_Rx, &(*(data)).D_Button4_Control); /* PRQA S 3453, 0315, 2986 */ /* MD_MSR_FctLikeMacro, MD_Rte_0315, MD_MSR_RetVal */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AppComRx_SG_Sig_Grp_0x302_SG_Sig_Grp_0x302(P2VAR(SG_Sig_Grp_0x302, AUTOMATIC, RTE_APPCOMRX_APPL_VAR) data) /* PRQA S 3673, 1505, 3206 */ /* MD_Rte_Qac, MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret = Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_Sig_Grp_0x302_oSupE_Function_1_oDBCNetWork_28664efe_Rx); /* PRQA S 3453, 0315 */ /* MD_MSR_FctLikeMacro, MD_Rte_0315 */
  ret |= Com_ReceiveSignal(ComConf_ComGroupSignal_E_Sig_0x302_Used_1_oSupE_Function_1_oDBCNetWork_5fb2dd52_Rx, &(*(data)).E_Sig_0x302_Used_1); /* PRQA S 3453, 0315, 2986 */ /* MD_MSR_FctLikeMacro, MD_Rte_0315, MD_MSR_RetVal */
  ret |= Com_ReceiveSignal(ComConf_ComGroupSignal_E_Sig_0x302_Used_2_oSupE_Function_1_oDBCNetWork_1b13f84a_Rx, &(*(data)).E_Sig_0x302_Used_2); /* PRQA S 3453, 0315, 2986 */ /* MD_MSR_FctLikeMacro, MD_Rte_0315, MD_MSR_RetVal */
  ret |= Com_ReceiveSignal(ComConf_ComGroupSignal_E_Sig_0x302_Used_3_oSupE_Function_1_oDBCNetWork_27731b42_Rx, &(*(data)).E_Sig_0x302_Used_3); /* PRQA S 3453, 0315, 2986 */ /* MD_MSR_FctLikeMacro, MD_Rte_0315, MD_MSR_RetVal */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AppComRx_SG_Sig_Grp_0x304_SG_Sig_Grp_0x304(P2VAR(SG_Sig_Grp_0x304, AUTOMATIC, RTE_APPCOMRX_APPL_VAR) data) /* PRQA S 3673, 1505, 3206 */ /* MD_Rte_Qac, MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ret = Com_ReceiveSignalGroup(ComConf_ComSignalGroup_SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx); /* PRQA S 3453, 0315 */ /* MD_MSR_FctLikeMacro, MD_Rte_0315 */
  ret |= Com_ReceiveSignal(ComConf_ComGroupSignal_D_Led1_CtrlMode_oSupD_Led_CtrlMode_oDBCNetWork_e2fdf3e9_Rx, &(*(data)).D_Led1_CtrlMode); /* PRQA S 3453, 0315, 2986 */ /* MD_MSR_FctLikeMacro, MD_Rte_0315, MD_MSR_RetVal */
  ret |= Com_ReceiveSignal(ComConf_ComGroupSignal_D_Led2_CtrlMode_oSupD_Led_CtrlMode_oDBCNetWork_01b4444b_Rx, &(*(data)).D_Led2_CtrlMode); /* PRQA S 3453, 0315, 2986 */ /* MD_MSR_FctLikeMacro, MD_Rte_0315, MD_MSR_RetVal */
  ret |= Com_ReceiveSignal(ComConf_ComGroupSignal_D_Led3_CtrlMode_oSupD_Led_CtrlMode_oDBCNetWork_e9a3d4ea_Rx, &(*(data)).D_Led3_CtrlMode); /* PRQA S 3453, 0315, 2986 */ /* MD_MSR_FctLikeMacro, MD_Rte_0315, MD_MSR_RetVal */
  ret |= Com_ReceiveSignal(ComConf_ComGroupSignal_D_Led4_CtrlMode_oSupD_Led_CtrlMode_oDBCNetWork_1c562d4e_Rx, &(*(data)).D_Led4_CtrlMode); /* PRQA S 3453, 0315, 2986 */ /* MD_MSR_FctLikeMacro, MD_Rte_0315, MD_MSR_RetVal */
  ret |= Com_ReceiveSignal(ComConf_ComGroupSignal_SupD_Checksum_0x304_oSupD_Led_CtrlMode_oDBCNetWork_984004db_Rx, &(*(data)).SupD_Checksum_0x304); /* PRQA S 3453, 0315, 2986 */ /* MD_MSR_FctLikeMacro, MD_Rte_0315, MD_MSR_RetVal */
  ret |= Com_ReceiveSignal(ComConf_ComGroupSignal_SupD_Counter_0x304_oSupD_Led_CtrlMode_oDBCNetWork_9ab89d28_Rx, &(*(data)).SupD_Counter_0x304); /* PRQA S 3453, 0315, 2986 */ /* MD_MSR_FctLikeMacro, MD_Rte_0315, MD_MSR_RetVal */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AppComTx_SG_Sig_Grp_0x210_SR_R_SG_Sig_Grp_0x210(P2VAR(SG_Sig_Grp_0x210, AUTOMATIC, RTE_APPCOMTX_APPL_VAR) data) /* PRQA S 3673, 1505, 3206 */ /* MD_Rte_Qac, MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_AppCtrl_SG_Sig_Grp_0x210_SR_S_SG_Sig_Grp_0x210; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AppComTx_SG_Sig_Grp_0x211_SR_R_SG_Sig_Grp_0x211(P2VAR(SG_Sig_Grp_0x211, AUTOMATIC, RTE_APPCOMTX_APPL_VAR) data) /* PRQA S 3673, 1505, 3206 */ /* MD_Rte_Qac, MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_AppCtrl_SG_Sig_Grp_0x211_SR_R_SG_Sig_Grp_0x211; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AppComTx_SG_Sig_Grp_0x212_SR_R_SG_Sig_Grp_0x212(P2VAR(SG_Sig_Grp_0x212, AUTOMATIC, RTE_APPCOMTX_APPL_VAR) data) /* PRQA S 3673, 1505, 3206 */ /* MD_Rte_Qac, MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_AppCtrl_SG_Sig_Grp_0x212_SR_R_SG_Sig_Grp_0x212; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AppComTx_SG_Sig_Grp_0x213_SR_R_SG_Sig_Grp_0x213(P2VAR(SG_Sig_Grp_0x213, AUTOMATIC, RTE_APPCOMTX_APPL_VAR) data) /* PRQA S 3673, 1505, 3206 */ /* MD_Rte_Qac, MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_AppCtrl_SG_Sig_Grp_0x213_SR_R_SG_Sig_Grp_0x213; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AppComTx_SG_Sig_Grp_0x214_SR_R_SG_Sig_Grp_0x214(P2VAR(SG_Sig_Grp_0x214, AUTOMATIC, RTE_APPCOMTX_APPL_VAR) data) /* PRQA S 3673, 1505, 3206 */ /* MD_Rte_Qac, MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_AppCtrl_SG_Sig_Grp_0x214_SR_R_SG_Sig_Grp_0x214; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AppComTx_SG_Sig_Grp_0x216_SR_R_SG_Sig_Grp_0x216(P2VAR(SG_Sig_Grp_0x216, AUTOMATIC, RTE_APPCOMTX_APPL_VAR) data) /* PRQA S 3673, 1505, 3206 */ /* MD_Rte_Qac, MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_AppCtrl_SG_Sig_Grp_0x216_SR_R_SG_Sig_Grp_0x216; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AppCtrl_SG_Sig_Grp_0x300_SR_S_SG_Sig_Grp_0x300(P2VAR(SG_Sig_Grp_0x300, AUTOMATIC, RTE_APPCTRL_APPL_VAR) data) /* PRQA S 3673, 1505, 3206 */ /* MD_Rte_Qac, MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_AppComRx_SG_Sig_Grp_0x300_SR_S_SG_Sig_Grp_0x300; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AppCtrl_SG_Sig_Grp_0x301_SR_S_SG_Sig_Grp_0x301(P2VAR(SG_Sig_Grp_0x301, AUTOMATIC, RTE_APPCTRL_APPL_VAR) data) /* PRQA S 3673, 1505, 3206 */ /* MD_Rte_Qac, MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_AppComRx_SG_Sig_Grp_0x301_SR_S_SG_Sig_Grp_0x301; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AppCtrl_SG_Sig_Grp_0x302_SR_S_SG_Sig_Grp_0x302(P2VAR(SG_Sig_Grp_0x302, AUTOMATIC, RTE_APPCTRL_APPL_VAR) data) /* PRQA S 3673, 1505, 3206 */ /* MD_Rte_Qac, MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_AppComRx_SG_Sig_Grp_0x302_SR_S_SG_Sig_Grp_0x302; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AppCtrl_SG_Sig_Grp_0x304_SR_S_SG_Sig_Grp_0x304(P2VAR(SG_Sig_Grp_0x304, AUTOMATIC, RTE_APPCTRL_APPL_VAR) data) /* PRQA S 3673, 1505, 3206 */ /* MD_Rte_Qac, MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_AppComRx_SG_Sig_Grp_0x304_SR_S_SG_Sig_Grp_0x304; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_PostRunRequest_0_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 3673, 1505, 3206 */ /* MD_Rte_Qac, MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = 0U;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_PostRunRequest_1_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 3673, 1505, 3206 */ /* MD_Rte_Qac, MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = 0U;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_RunRequest_0_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 3673, 1505, 3206 */ /* MD_Rte_Qac, MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = 0U;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_RunRequest_1_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 3673, 1505, 3206 */ /* MD_Rte_Qac, MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = 0U;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ModeReq_App_ComM_Mode_Request_Request_Mode(P2VAR(ComM_ModeType, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 3673, 1505, 3206 */ /* MD_Rte_Qac, MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_AppWakeUpCtrl_App_ComM_Mode_Request_Request_Mode; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */


/**********************************************************************************************************************
 * Internal C/S connections
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Acceleration_Sensor_Acceleration_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Acceleration_Sensor_Acceleration_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Acceleration_Sensor_Voltage_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Acceleration_Sensor_Voltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Status_FL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Status_FL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Status_FR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Status_FR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Status_RL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Status_RL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Status_RR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Status_RR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Voltage_FL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Voltage_FL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Voltage_FR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Voltage_FR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Voltage_RL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Voltage_RL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Voltage_RR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Voltage_RR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pressure_Brake_Pressure_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pressure_Brake_Pressure_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Brake_Pedal_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Brake_Pedal_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Brake_Pressure_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Brake_Pressure_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Status_Hydraulic_Pump_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Status_Hydraulic_Pump_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Valve_Status_FL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Valve_Status_FL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Valve_Status_FR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Valve_Status_FR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Valve_Status_RL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Valve_Status_RL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Valve_Status_RR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Valve_Status_RR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Fingerprint_Programming_Date_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Fingerprint_Programming_Date_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Fingerprint_Programming_Date_WriteData(P2CONST(Dcm_Data8ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Fingerprint_Repair_Shop_Identification_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Fingerprint_Repair_Shop_Identification_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Fingerprint_Repair_Shop_Identification_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Fingerprint_Serial_number_of_flash_tool_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Fingerprint_Serial_number_of_flash_tool_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Fingerprint_Serial_number_of_flash_tool_WriteData(P2CONST(Dcm_Data8ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hardware_Part_Number_PartNumber_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hardware_Part_Number_PartNumber_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data13ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hardware_Part_Number_PartNumber_WriteData(P2CONST(Dcm_Data13ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hardware_Supplier_Identification_HardwareSupplier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hardware_Supplier_Identification_HardwareSupplier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hardware_Supplier_Identification_HardwareSupplier_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydraulic_Pump_Hydraulic_Pump_Performance_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydraulic_Pump_Hydraulic_Pump_Performance_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydraulic_Pump_Hydraulic_Pump_Voltage_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydraulic_Pump_Hydraulic_Pump_Voltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydraulic_Pump_Status_Hydraulic_Pump_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydraulic_Pump_Status_Hydraulic_Pump_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Status_FL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Status_FL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Status_FR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Status_FR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Status_RL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Status_RL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Status_RR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Status_RR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Voltage_FL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Voltage_FL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Voltage_FR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Voltage_FR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Voltage_RL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Voltage_RL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Voltage_RR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Voltage_RR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Inflation_Pressure_Inflation_Pressure_FL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Inflation_Pressure_Inflation_Pressure_FL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Inflation_Pressure_Inflation_Pressure_FR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Inflation_Pressure_Inflation_Pressure_FR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Inflation_Pressure_Inflation_Pressure_RL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Inflation_Pressure_Inflation_Pressure_RL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Inflation_Pressure_Inflation_Pressure_RR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Inflation_Pressure_Inflation_Pressure_RR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Serial_Number_SerialNumber_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Serial_Number_SerialNumber_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data13ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Serial_Number_SerialNumber_WriteData(P2CONST(Dcm_Data13ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Service_Information_Remaining_Service_Brake_Fluid_Life_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Service_Information_Remaining_Service_Brake_Fluid_Life_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Service_Information_Remaining_Service_Brake_Fluid_Life_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Service_Information_Remaining_Service_Time_Left_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Service_Information_Remaining_Service_Time_Left_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Service_Information_Remaining_Service_Time_Left_WriteData(P2CONST(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Software_Supplier_Identification_SoftwareSupplier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Software_Supplier_Identification_SoftwareSupplier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Software_Supplier_Identification_SoftwareSupplier_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Software_Version_SoftwareVersion_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Software_Version_SoftwareVersion_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data5ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Software_Version_SoftwareVersion_WriteData(P2CONST(Dcm_Data5ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Supply_Voltage_ECU_Voltage_ECU_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Supply_Voltage_ECU_Voltage_ECU_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Switches_Brake_Switch_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Switches_Brake_Switch_ResetToDefault(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Switches_Brake_Switch_ShortTermAdjustment(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Switches_Parking_Brake_Switch_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Switches_Parking_Brake_Switch_ResetToDefault(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Switches_Parking_Brake_Switch_ShortTermAdjustment(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Switches_Rear_Gear_Switch_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Switches_Rear_Gear_Switch_ResetToDefault(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Switches_Rear_Gear_Switch_ShortTermAdjustment(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VIN_VIN_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VIN_VIN_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data17ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VIN_VIN_WriteData(P2CONST(Dcm_Data17ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Direction_of_rotation_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Direction_of_rotation_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Speed_FL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Speed_FL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Speed_FR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Speed_FR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Speed_RL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Speed_RL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Speed_RR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Speed_RR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Voltage_FL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Voltage_FL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Voltage_FR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Voltage_FR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Voltage_RL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Voltage_RL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Voltage_RR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Voltage_RR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Type_Wheel_type_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Type_Wheel_type_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Type_Wheel_type_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_ECU_Check_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_ECU_Check_status, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Out_ECU_Check_status = Out_ECU_Check_status;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_ECU_Check_Start(uint8 In_Start_ECU_Check, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_ECU_Check_is_in_progress, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  In_Start_ECU_Check = In_Start_ECU_Check;
  OpStatus = OpStatus;
  Out_ECU_Check_is_in_progress = Out_ECU_Check_is_in_progress;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_UnlockedL1_CompareKey(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Key = Key;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_UnlockedL1_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Seed = Seed;
  ErrorCode = ErrorCode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x401001_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x401003_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x402001_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x402011_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x402012_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x402013_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x402025_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x403001_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x403113_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x403121_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x403122_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x403413_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x403421_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x403422_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x403713_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x403721_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x403722_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x403a13_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x403a21_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x403a22_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x404011_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x404012_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x404013_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x404211_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x404212_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x404213_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x404421_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x404422_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x404428_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x406221_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x406222_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x406225_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x406321_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x406322_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x406325_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x107_Voltage_ECU_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x10a_Direction_of_rotation_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x10a_Wheel_Speed_FL_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x10a_Wheel_Speed_FR_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x10a_Wheel_Speed_RL_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x10a_Wheel_Speed_RR_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x10a_Wheel_Voltage_FL_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x10a_Wheel_Voltage_FR_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x10a_Wheel_Voltage_RL_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x10a_Wheel_Voltage_RR_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x10d_Valve_Status_FL_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x10d_Valve_Status_FR_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x10d_Valve_Status_RL_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x10d_Valve_Status_RR_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x10d_Valve_Voltage_FL_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x10d_Valve_Voltage_FR_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x10d_Valve_Voltage_RL_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0x10d_Valve_Voltage_RR_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DTCAgingCounter_Driving_Cycles_Since_Last_Failed_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_OccurrenceCounter_Driving_Cycles_Since_Test_Failed_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_UncompletedTestCounters_Driving_Cycles_Since_Last_Completed_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x107_Voltage_ECU_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x10a_Direction_of_rotation_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x10a_Wheel_Speed_FL_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x10a_Wheel_Speed_FR_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x10a_Wheel_Speed_RL_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x10a_Wheel_Speed_RR_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x10a_Wheel_Voltage_FL_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x10a_Wheel_Voltage_FR_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x10a_Wheel_Voltage_RL_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x10a_Wheel_Voltage_RR_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x10d_Valve_Status_FL_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x10d_Valve_Status_FR_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x10d_Valve_Status_RL_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x10d_Valve_Status_RR_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x10d_Valve_Voltage_FL_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x10d_Valve_Voltage_FR_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x10d_Valve_Voltage_RL_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DID_0x10d_Valve_Voltage_RR_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DTCAgingCounter_Driving_Cycles_Since_Last_Failed_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_OccurrenceCounter_Driving_Cycles_Since_Test_Failed_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_UncompletedTestCounters_Driving_Cycles_Since_Last_Completed_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;

  return ret;
}


/**********************************************************************************************************************
 * Mode Switch API (Rte_Switch)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode(BswM_ESH_Mode nextMode) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  BswM_ESH_Mode currentMode;
  SuspendOSInterrupts();
  currentMode = Rte_ModeMachine_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode;
  if (nextMode >= 5U)
  {
    ResumeOSInterrupts();
    ret = RTE_E_LIMIT;
  }
  else if (currentMode >= 5U)
  {
    ResumeOSInterrupts();
    ret = RTE_E_LIMIT;
  }
  else
  {
    Rte_ModeMachine_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = nextMode;
    ResumeOSInterrupts();
  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */


/**********************************************************************************************************************
 * Mode reading API (Rte_Mode)
 *********************************************************************************************************************/

FUNC(BswM_ESH_Mode, RTE_CODE) Rte_Mode_BswM_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode(void) /* PRQA S 3408 */ /* MD_Rte_3408 */
{
  BswM_ESH_Mode curMode;
  curMode = Rte_ModeMachine_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode;
  return curMode;
}


/**********************************************************************************************************************
 * Transmission/Mode Switch Acknowledgement handling (Rte_Feedback/Rte_SwitchAck)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_SwitchAck_Dcm_DcmEcuReset_DcmEcuReset(void)
{

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */


/**********************************************************************************************************************
 * Mode Switch API (Rte_Switch)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmCommunicationControl_ComMConf_ComMChannel_CN_DBCNetWork_05d62413_DcmCommunicationControl_ComMConf_ComMChannel_CN_DBCNetWork_05d62413(Dcm_CommunicationModeType nextMode) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  nextMode = nextMode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmControlDtcSetting_DcmControlDtcSetting(Dcm_ControlDtcSettingType nextMode) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  nextMode = nextMode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl(Dcm_DiagnosticSessionControlType nextMode) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  nextMode = nextMode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmEcuReset_DcmEcuReset(Dcm_EcuResetType nextMode) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  nextMode = nextMode;

  return ret;
}


/**********************************************************************************************************************
 * Task bodies for RTE controlled tasks
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Task:     OsTask_App10ms_Core0
 * Priority: 34
 * Schedule: NON
 * Alarm:    Cycle Time 0.01 s Alarm Offset 0 s
 *********************************************************************************************************************/
TASK(OsTask_App10ms_Core0) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_Unreachable */
{

  /* call runnable */
  AppCtrl_MainFunction(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  AppComTx_MainFunction(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  AppComRx_MainFunction(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  AppWakeUpCtrl_MainFunction(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  AppButtonCtrl_MainFunction(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  AppLedCtrl_MainFunction(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  IcuCdd_MainFunction(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  (void)TerminateTask(); /* PRQA S 3417 */ /* MD_Rte_Os */
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Task:     OsTask_App_Init_Task
 * Priority: 50
 * Schedule: NON
 *********************************************************************************************************************/
TASK(OsTask_App_Init_Task) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_Unreachable */
{

  /* call runnable */
  AppComRx_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  AppComTx_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  AppCtrl_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  AppWakeUpCtrl_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  AppButtonCtrl_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  AppLedCtrl_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  IcuCdd_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  (void)TerminateTask(); /* PRQA S 3417 */ /* MD_Rte_Os */
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Task:     OsTask_Bsw5ms_Core0
 * Priority: 35
 * Schedule: NON
 *********************************************************************************************************************/
TASK(OsTask_Bsw5ms_Core0) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_Unreachable */
{
  EventMaskType ev;

  for(;;)
  {
    (void)WaitEvent(Rte_Ev_Cyclic2_OsTask_Bsw5ms_Core0_0_5ms | Rte_Ev_Run_IoHwAb_IoHwAb_IoHwAbRunnable); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)GetEvent(OsTask_Bsw5ms_Core0, &ev); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)ClearEvent(ev & (Rte_Ev_Cyclic2_OsTask_Bsw5ms_Core0_0_5ms | Rte_Ev_Run_IoHwAb_IoHwAb_IoHwAbRunnable)); /* PRQA S 3417 */ /* MD_Rte_Os */

    if ((ev & Rte_Ev_Cyclic2_OsTask_Bsw5ms_Core0_0_5ms) != (EventMaskType)0)
    {
      /* call runnable */
      BswM_MainFunction(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic2_OsTask_Bsw5ms_Core0_0_5ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      EcuM_MainFunction();
    }

    if ((ev & Rte_Ev_Cyclic2_OsTask_Bsw5ms_Core0_0_5ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      CanTrcv_30_Tja1043_MainFunction();

      /* call runnable */
      ComM_MainFunction_1(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      ComM_MainFunction_0(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call schedulable entity */
      CanSM_MainFunction();

      /* call schedulable entity */
      Can_MainFunction_Mode();

      /* call schedulable entity */
      Can_MainFunction_Wakeup();

      /* call schedulable entity */
      CanNm_MainFunction();

      /* call schedulable entity */
      CanTp_MainFunction();

      /* call schedulable entity */
      Com_MainFunctionRx();

      /* call schedulable entity */
      Com_MainFunctionTx();

      /* call runnable */
      Dcm_MainFunction(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      Dem_MasterMainFunction(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      Dem_SatelliteMainFunction(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Run_IoHwAb_IoHwAb_IoHwAbRunnable) != (EventMaskType)0)
    {
      /* call runnable */
      IoHwAb_IoHwAbRunnable(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }
  }
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

#define RTE_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0315:  MISRA rule: Dir1.1
     Reason:     Pointer cast to void because generic access is necessary.
     Risk:       No functional risk. Only a cast to uint8* is performed.
     Prevention: Not required.

   MD_Rte_1339:  MISRA rule: Rule17.8
     Reason:     Passing elements by pointer is a well known concept.
     Risk:       No functional risk. Data flow is handled with care.
     Prevention: Not required.

   MD_Rte_1340:  MISRA rule: Rule17.8
     Reason:     Passing elements by pointer is a well known concept.
     Risk:       No functional risk. Data flow is handled with care.
     Prevention: Not required.

   MD_Rte_1514:  MISRA rule: Rule8.9
     Reason:     Because of external definition, misra does not see the call.
     Risk:       No functional risk. There is no side effect.
     Prevention: Not required.

   MD_Rte_2982:  MISRA rule: Rule2.2
     Reason:     Used to simplify code generation.
     Risk:       No functional risk. There is no side effect.
     Prevention: Not required.

   MD_Rte_2987:  MISRA rule: Rule2.2
     Reason:     Used to simplify code generation.
     Risk:       No functional risk. There is no side effect.
     Prevention: Not required.

   MD_Rte_3206:  MISRA rule: Rule2.7
     Reason:     The parameter are not used by the code in all possible code variants.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3408:  MISRA rule: Rule8.4
     Reason:     For the purpose of monitoring during calibration or debugging it is necessary to use non-static declarations.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_Os:
     Reason:     This justification is used as summary justification for all deviations caused by the MICROSAR OS
                 which is for testing of the RTE. Those deviations are no issues in the RTE code.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_Qac:
     Reason:     This justification is used as summary justification for all deviations caused by wrong analysis tool results.
                 The used analysis tool QAC 9.0 sometimes creates wrong messages. Those deviations are no issues in the RTE code.
     Risk:       No functional risk.
     Prevention: Not required.

*/
