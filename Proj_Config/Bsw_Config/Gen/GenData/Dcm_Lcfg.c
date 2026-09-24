/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Dcm
 *           Program: MSR_Vector_SLP4
 *          Customer: China FAW Group Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC297TA
 *    License Scope : The usage is restricted to CBD1600956_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Dcm_Lcfg.c
 *   Generation Time: 2024-03-15 23:12:07
 *           Project: TC27x - Version 1.0
 *          Delivery: CBD1600956_D01
 *      Tool Version: DaVinci Configurator  5.20.35
 *
 *
 *********************************************************************************************************************/



#define DCM_LCFG_SOURCE
/* ----------------------------------------------
 ~&&&   Includes
---------------------------------------------- */
                                                                                                                                                     /* PRQA S 1533 EOF */ /* MD_Dcm_ObjectOnlyAccessedOnce */
#include "Dcm.h"
#include "Rte_Dcm.h"
#include "Dcm_Int.h"
#include "PduR_Dcm.h"
#include "ComM_Dcm.h"
/* ----------------------------------------------
 ~&&&   Defines
---------------------------------------------- */
#if (DCM_DIDMGR_NVM_READ_ENABLED == STD_ON) || \
    (DCM_DIDMGR_NVM_WRITE_ENABLED == STD_ON)
# if defined(NVM_VENDOR_ID)
#  if (NVM_VENDOR_ID == 30u)
/* Only Vector NvM supports this feature up to now */
#   define Dcm_GetDcmNvMBlockId(blockId)                             (uint16)(NvM_GetDcmBlockId(blockId))                                            /* PRQA S 3453 */ /* QAC 7.0:  A function could probably be used instead of this function-like macro */ /* Macro is more efficient! */
#  endif
# endif

/* Default NvM handle offset */
# if !defined(Dcm_GetDcmNvMBlockId)
#  define Dcm_GetDcmNvMBlockId(blockId)                              (uint16)(blockId)                                                               /* PRQA S 3453 */ /* QAC 7.0:  A function could probably be used instead of this function-like macro */ /* Macro is more efficient! */
# endif
#endif
/* ----------------------------------------------
 ~&&&   Call-back function declarations
---------------------------------------------- */
#define DCM_START_SEC_CALLOUT_CODE
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_MemMap */
/*lint -restore */
/***********************************************************************************************************************
 *  Dcm_RidMgr_0100_Start()
***********************************************************************************************************************/
/*! \brief         Wraps RIDs execution interface.
 *  \details       Converts uint8 arrays to other signal types required by the RID execution interface and vice versa.
 *  \param[in]     OpStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier
 *  \param[in,out] DataLength         IN: Concrete length of the dynamic request signal
 *                                    OUT: Concrete length of the dynamic response Signal
 *  \param[out]    ErrorCode          Negative response code
 *  \return        E_OK               The operation is finished
 *  \return        DCM_E_PENDING      The operation is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  Forces a RCR-RP response
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        E_NOT_OK           The operation has failed. A concrete NRC shall be set, otherwise the DCM sends NRC
 *                                    0x22
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0100_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_ServiceNoPostProcessor()
***********************************************************************************************************************/
/*! \brief         Dummy post-processor
 *  \details       This post-processor is called for diagnostic services which do not require any post processing.
 *  \param[in]     pContext  Pointer to the context
 *  \param[in]     status    The post-processing status
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(void, DCM_CALLOUT_CODE) Dcm_ServiceNoPostProcessor(Dcm_ContextPtrType pContext, Dcm_ConfirmationStatusType status);
/***********************************************************************************************************************
 *  Dcm_ServiceNoUpdater()
***********************************************************************************************************************/
/*! \brief         Realizes a dummy paged buffer updater.
 *  \details       This function is never called.
 *  \param[in]     pContext      Pointer to the context
 *  \param[in]     opStatus      The operation status
 *  \param[in,out] pDataContext  Pointer to the data context
 *  \param[out]    ErrorCode     Negative response code
 *  \return        DCM_E_NOT_OK  Operation failed. Take the NRC from ErrorCode. Do not call again
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_ServiceNoUpdater(Dcm_ContextPtrType pContext, Dcm_OpStatusType opStatus, Dcm_DiagDataContextPtrType pDataContext, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_ServiceNoCancel()
***********************************************************************************************************************/
/*! \brief         Dummy service cancellation.
 *  \details       -
 *  \param[in,out] pDataContext  Pointer to the data context
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(void, DCM_CALLOUT_CODE) Dcm_ServiceNoCancel(Dcm_ContextPtrType pContext, Dcm_DiagDataContextPtrType pDataContext);
#define DCM_STOP_SEC_CALLOUT_CODE
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_MemMap */
/*lint -restore */
/* ----------------------------------------------
 ~&&&   Uninitialized RAM 8-Bit
---------------------------------------------- */
#define DCM_START_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_MemMap */
/*lint -restore */
/*! DCM protocol descriptor */
DCM_LOCAL VAR(Dcm_MsgItemType, DCM_VAR_NOINIT) Dcm_CfgNetBuffer_000[50];
#define DCM_STOP_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_MemMap */
/*lint -restore */
/* ----------------------------------------------
 ~&&&   ROM 8-Bit
---------------------------------------------- */
#define DCM_START_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_MemMap */
/*lint -restore */
/*! TxPduId to DCM connection map */
CONST(Dcm_NetConnRefMemType, DCM_CONST) Dcm_CfgNetTxPduInfo[1]=
{
    0u
};
/*! Map of DCM relevant network handles */
CONST(Dcm_CfgNetNetIdRefMemType, DCM_CONST) Dcm_CfgNetConnComMChannelMap[1]=
{
    0u
};
/*! Service 0x28 list of channels for the all-comm-channel parameter */
CONST(Dcm_CfgNetNetIdRefMemType, DCM_CONST) Dcm_CfgNetComCtrlChannelListAll[2]=
{
   1u
  , 0u
};
/*! Look up table of DCM service identifiers */
CONST(uint8, DCM_CONST) Dcm_CfgDiagSvcIdLookUpTable[13]=
{
   12u
  ,0x10u
  ,0x11u
  ,0x14u
  ,0x19u
  ,0x22u
  ,0x27u
  ,0x28u
  ,0x2Eu
  ,0x2Fu
  ,0x31u
  ,0x3Eu
  ,0x85u
};
/*! Service 0x10 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc10SubFuncLookUpTable[4]=
{
   3u
  ,0x01u
  ,0x02u
  ,0x03u
};
/*! Service 0x11 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc11SubFuncLookUpTable[3]=
{
   2u
  ,0x01u
  ,0x03u
};
/*! Service 0x19 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc19SubFuncLookUpTable[6]=
{
   5u
  ,0x01u
  ,0x02u
  ,0x04u
  ,0x06u
  ,0x0Au
};
/*! Service 0x27 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc27SubFuncLookUpTable[3]=
{
   2u
  ,0x01u
  ,0x02u
};
/*! Service 0x28 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc28SubFuncLookUpTable[3]=
{
   2u
  ,0x00u
  ,0x01u
};
/*! Service 0x28 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc28MessageTypeLookUpTable[4]=
{
   3u
  ,0x01u
  ,0x02u
  ,0x03u
};
/*! Service 0x28 network ID lookup */
CONST(uint8, DCM_CONST) Dcm_CfgSvc28SubNetIdLookUp[3]=
{
   2u
  ,0x00u
  ,0x0Fu
};
/*! Service 0x3E look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc3ESubFuncLookUpTable[2]=
{
   1u
  ,0x00u
};
/*! Look up table of service 0x85 */
CONST(uint8, DCM_CONST) Dcm_CfgSvc85SubFuncLookUpTable[3]=
{
   2u
  ,0x01u
  ,0x02u
};
#define DCM_STOP_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_MemMap */
/*lint -restore */
/* ----------------------------------------------
 ~&&&   ROM 16-Bit
---------------------------------------------- */
#define DCM_START_SEC_CONST_16
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_MemMap */
/*lint -restore */
/*! DID look up table  */
CONST(uint16, DCM_CONST) Dcm_CfgDidMgrDidLookUpTable[20]=
{
   19u
  ,0x0100u
  ,0x0107u
  ,0x0109u
  ,0x010Au
  ,0x010Bu
  ,0x010Cu
  ,0x010Du
  ,0x010Eu
  ,0x010Fu
  ,0x0110u
  ,0x0111u
  ,0x0112u
  ,0xF189u
  ,0xF18Cu
  ,0xF190u
  ,0xF191u
  ,0xF192u
  ,0xF194u
  ,0xF198u
};
/*! RID look up table  */
CONST(uint16, DCM_CONST) Dcm_CfgRidMgrRidLookUpTable[2]=
{
   1u
  ,0x0100u
};
#define DCM_STOP_SEC_CONST_16
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_MemMap */
/*lint -restore */
/* ----------------------------------------------
 ~&&&   ROM of unspecified size
---------------------------------------------- */
#define DCM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_MemMap */
/*lint -restore */
/*! DCM buffer descriptor */
CONST(Dcm_CfgNetBufferInfoType, DCM_CONST) Dcm_CfgNetBufferInfo[1]=
{
   { Dcm_CfgNetBuffer_000,  50u}
};
/*! RxPduId map */
CONST(Dcm_CfgNetRxPduInfoType, DCM_CONST) Dcm_CfgNetRxPduInfo[2]=
{
   { TRUE, 0u}
  ,{ FALSE, 0u}
};
/*! DCM connection descriptor */
CONST(Dcm_CfgNetConnectionInfoType, DCM_CONST) Dcm_CfgNetConnectionInfo[1]=
{
   { 0x0000u,PduRConf_PduRSrcPdu_PduRSrcPdu_9c32056b, 0u,0u,0x00u, 0u}
};
/*! DCM protocol descriptor */
CONST(Dcm_CfgNetProtocolInfoType, DCM_CONST) Dcm_CfgNetProtocolInfo[1]=
{
   { {        0u,       0u},4095u, 3u,TRUE,0u,DemConf_DemClient_DemClient, 0u}
};
/*! Map of all relevant for DCM network handles */
CONST(NetworkHandleType, DCM_CONST) Dcm_CfgNetAllComMChannelMap[1]=
{
   ComMConf_ComMChannel_CN_DBCNetWork_05d62413
};
/*! Look up table of DCM relevant network handles */
CONST(NetworkHandleType, DCM_CONST) Dcm_CfgNetNetworkHandleLookUpTable[2]=
{
   1u
  ,ComMConf_ComMChannel_CN_DBCNetWork_05d62413
};
/*! Diagnostic service execution conditions */
CONST(Dcm_CfgStatePreconditionInfoType, DCM_CONST) Dcm_CfgStatePreconditions[2]=
{
   { { 0x07u,0x03u}}
  ,{ { 0x06u,0x03u}}
};
/*! Session state properties */
CONST(Dcm_CfgStateSessionInfoType, DCM_CONST) Dcm_CfgStateSessionInfo[3]=
{
   { {       10u,    1000u},RTE_MODE_DcmDiagnosticSessionControl_DEFAULT_SESSION,0x01u}
  ,{ {       10u,    1000u},RTE_MODE_DcmDiagnosticSessionControl_PROGRAMMING_SESSION,0x02u}
  ,{ {       10u,    1000u},RTE_MODE_DcmDiagnosticSessionControl_EXTENDED_SESSION,0x03u}
};
/*! Security Access state properties */
CONST(Dcm_CfgStateSecurityInfoType, DCM_CONST) Dcm_CfgStateSecurityInfo[1]=
{
   { 0x01u} /* SecLvl: UnlockedL1 */
};
/*! DID properties */
CONST(Dcm_CfgDidMgrDidInfoType, DCM_CONST) Dcm_CfgDidMgrDidInfo[19]=
{
   {    7u,   7u,   7u,   0u,   0u,0x01u} /* DID: 0x0100 */
  ,{    1u,   1u,   1u,   1u,   0u,0x01u} /* DID: 0x0107 */
  ,{    1u,   1u,   1u,   2u,   0u,0x03u} /* DID: 0x0109 */
  ,{    9u,   9u,   9u,   4u,   0u,0x01u} /* DID: 0x010A */
  ,{    2u,   2u,   2u,   5u,   0u,0x01u} /* DID: 0x010B */
  ,{    8u,   8u,   8u,   6u,   0u,0x01u} /* DID: 0x010C */
  ,{    8u,   8u,   8u,   7u,   0u,0x01u} /* DID: 0x010D */
  ,{    1u,   1u,   1u,   8u,   0u,0x01u} /* DID: 0x010E */
  ,{    3u,   3u,   3u,   9u,   0u,0x01u} /* DID: 0x010F */
  ,{    3u,   3u,   3u,  10u,   0u,0x05u} /* DID: 0x0110 */
  ,{    4u,   4u,   4u,  12u,   0u,0x01u} /* DID: 0x0111 */
  ,{    3u,   3u,   3u,  13u,   0u,0x03u} /* DID: 0x0112 */
  ,{    5u,   5u,   5u,  15u,   0u,0x03u} /* DID: 0xF189 */
  ,{   13u,  13u,  13u,  17u,   0u,0x03u} /* DID: 0xF18C */
  ,{   17u,  17u,  17u,  19u,   0u,0x03u} /* DID: 0xF190 */
  ,{   13u,  13u,  13u,  21u,   0u,0x03u} /* DID: 0xF191 */
  ,{    1u,   1u,   1u,  23u,   0u,0x03u} /* DID: 0xF192 */
  ,{    1u,   1u,   1u,  25u,   0u,0x03u} /* DID: 0xF194 */
  ,{   17u,  17u,  17u,  27u,   0u,0x03u} /* DID: 0xF198 */
};
/*! DID operation properties */
CONST(Dcm_CfgDidMgrDidOpInfoType, DCM_CONST) Dcm_CfgDidMgrDidOpInfo[29]=
{
   {    0u,   0u,0x05u} /* DID: 0x0100 */
  ,{    0u,   2u,0x05u} /* DID: 0x0107 */
  ,{    0u,   4u,0x05u} /* DID: 0x0109 */
  ,{    0u,   6u,0x01u} /* DID: 0x0109 */
  ,{    0u,   7u,0x05u} /* DID: 0x010A */
  ,{    0u,   9u,0x05u} /* DID: 0x010B */
  ,{    0u,  11u,0x05u} /* DID: 0x010C */
  ,{    0u,  13u,0x05u} /* DID: 0x010D */
  ,{    0u,  15u,0x05u} /* DID: 0x010E */
  ,{    0u,  17u,0x05u} /* DID: 0x010F */
  ,{    0u,  19u,0x01u} /* DID: 0x0110 */
  ,{    1u,  20u,0x0Au} /* DID: 0x0110 */
  ,{    0u,  22u,0x05u} /* DID: 0x0111 */
  ,{    0u,  24u,0x05u} /* DID: 0x0112 */
  ,{    0u,  26u,0x01u} /* DID: 0x0112 */
  ,{    0u,  27u,0x05u} /* DID: 0xF189 */
  ,{    0u,  29u,0x01u} /* DID: 0xF189 */
  ,{    0u,  30u,0x05u} /* DID: 0xF18C */
  ,{    0u,  32u,0x01u} /* DID: 0xF18C */
  ,{    0u,  33u,0x05u} /* DID: 0xF190 */
  ,{    0u,  35u,0x01u} /* DID: 0xF190 */
  ,{    0u,  36u,0x05u} /* DID: 0xF191 */
  ,{    0u,  38u,0x01u} /* DID: 0xF191 */
  ,{    0u,  39u,0x05u} /* DID: 0xF192 */
  ,{    0u,  41u,0x01u} /* DID: 0xF192 */
  ,{    0u,  42u,0x05u} /* DID: 0xF194 */
  ,{    0u,  44u,0x01u} /* DID: 0xF194 */
  ,{    0u,  45u,0x05u} /* DID: 0xF198 */
  ,{    0u,  47u,0x01u} /* DID: 0xF198 */
};
/*! DID operation classes */
CONST(Dcm_CfgDidMgrDidOpClassInfoType, DCM_CONST) Dcm_CfgDidMgrDidOpClassInfo[49]=
{
   {  0u}
  ,{  7u}
  ,{ 14u}
  ,{ 15u}
  ,{ 16u}
  ,{ 17u}
  ,{ 18u}
  ,{ 19u}
  ,{ 28u}
  ,{ 37u}
  ,{ 39u}
  ,{ 41u}
  ,{ 49u}
  ,{ 57u}
  ,{ 65u}
  ,{ 73u}
  ,{ 74u}
  ,{ 75u}
  ,{ 78u}
  ,{ 81u}
  ,{ 84u}
  ,{ 87u}
  ,{ 90u}
  ,{ 94u}
  ,{ 98u}
  ,{ 100u}
  ,{ 102u}
  ,{ 104u}
  ,{ 105u}
  ,{ 106u}
  ,{ 107u}
  ,{ 108u}
  ,{ 109u}
  ,{ 110u}
  ,{ 111u}
  ,{ 112u}
  ,{ 113u}
  ,{ 114u}
  ,{ 115u}
  ,{ 116u}
  ,{ 117u}
  ,{ 118u}
  ,{ 119u}
  ,{ 120u}
  ,{ 121u}
  ,{ 122u}
  ,{ 125u}
  ,{ 128u}
  ,{ 131u}
};
/*! DID signal operation classes */
CONST(Dcm_CfgDidMgrSignalOpClassInfoType, DCM_CONST) Dcm_CfgDidMgrSignalOpClassInfo[131]=
{
   { ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Braking_Brake_Pedal_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0100 */                             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Braking_Brake_Pressure_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0100 */                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Braking_Status_Hydraulic_Pump_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0100 */                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Braking_Valve_Status_FR_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0100 */                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Braking_Valve_Status_FL_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0100 */                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Braking_Valve_Status_RR_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0100 */                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Braking_Valve_Status_RL_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0100 */                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Braking_Brake_Pedal_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0100 */                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Braking_Brake_Pressure_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0100 */                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Braking_Status_Hydraulic_Pump_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0100 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Braking_Valve_Status_FR_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0100 */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Braking_Valve_Status_FL_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0100 */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Braking_Valve_Status_RR_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0100 */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Braking_Valve_Status_RL_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0100 */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Supply_Voltage_ECU_Voltage_ECU_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0107 */                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Supply_Voltage_ECU_Voltage_ECU_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0107 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Wheel_Type_Wheel_type_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0109 */                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Wheel_Type_Wheel_type_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0109 */                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Wheel_Type_Wheel_type_WriteData)),   1u,   1u,0x1002u} /* DID: 0x0109 */                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Wheel_Speed_Wheel_Speed_FR_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010A */                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Wheel_Speed_Wheel_Speed_FL_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010A */                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Wheel_Speed_Wheel_Speed_RR_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010A */                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Wheel_Speed_Wheel_Speed_RL_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010A */                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Wheel_Speed_Wheel_Voltage_FR_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010A */                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Wheel_Speed_Wheel_Voltage_FL_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010A */                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Wheel_Speed_Wheel_Voltage_RR_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010A */                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Wheel_Speed_Wheel_Voltage_RL_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010A */                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Wheel_Speed_Direction_of_rotation_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010A */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Wheel_Speed_Wheel_Speed_FR_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010A */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Wheel_Speed_Wheel_Speed_FL_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010A */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Wheel_Speed_Wheel_Speed_RR_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010A */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Wheel_Speed_Wheel_Speed_RL_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010A */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Wheel_Speed_Wheel_Voltage_FR_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010A */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Wheel_Speed_Wheel_Voltage_FL_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010A */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Wheel_Speed_Wheel_Voltage_RR_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010A */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Wheel_Speed_Wheel_Voltage_RL_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010A */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Wheel_Speed_Direction_of_rotation_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010A */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Acceleration_Sensor_Voltage_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010B */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Acceleration_Sensor_Acceleration_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010B */                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Acceleration_Sensor_Voltage_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010B */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Acceleration_Sensor_Acceleration_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010B */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hydro_Unit_Valve_Voltage_FR_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010C */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hydro_Unit_Valve_Voltage_FL_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010C */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hydro_Unit_Valve_Voltage_RR_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010C */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hydro_Unit_Valve_Voltage_RL_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010C */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hydro_Unit_Valve_Status_FR_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010C */                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hydro_Unit_Valve_Status_FL_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010C */                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hydro_Unit_Valve_Status_RR_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010C */                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hydro_Unit_Valve_Status_RL_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010C */                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hydro_Unit_Valve_Voltage_FR_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010C */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hydro_Unit_Valve_Voltage_FL_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010C */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hydro_Unit_Valve_Voltage_RR_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010C */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hydro_Unit_Valve_Voltage_RL_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010C */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hydro_Unit_Valve_Status_FR_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010C */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hydro_Unit_Valve_Status_FL_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010C */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hydro_Unit_Valve_Status_RR_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010C */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hydro_Unit_Valve_Status_RL_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010C */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Brake_Pedal_Valve_Voltage_FR_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010D */                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Brake_Pedal_Valve_Voltage_FL_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010D */                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Brake_Pedal_Valve_Voltage_RR_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010D */                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Brake_Pedal_Valve_Voltage_RL_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010D */                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Brake_Pedal_Valve_Status_FR_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010D */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Brake_Pedal_Valve_Status_FL_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010D */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Brake_Pedal_Valve_Status_RR_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010D */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Brake_Pedal_Valve_Status_RL_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010D */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Brake_Pedal_Valve_Voltage_FR_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010D */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Brake_Pedal_Valve_Voltage_FL_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010D */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Brake_Pedal_Valve_Voltage_RR_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010D */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Brake_Pedal_Valve_Voltage_RL_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010D */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Brake_Pedal_Valve_Status_FR_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010D */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Brake_Pedal_Valve_Status_FL_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010D */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Brake_Pedal_Valve_Status_RR_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010D */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Brake_Pedal_Valve_Status_RL_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010D */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Brake_Pressure_Brake_Pressure_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010E */                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Brake_Pressure_Brake_Pressure_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010E */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hydraulic_Pump_Hydraulic_Pump_Voltage_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010F */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hydraulic_Pump_Status_Hydraulic_Pump_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010F */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hydraulic_Pump_Hydraulic_Pump_Performance_ReadData)),   1u,   1u,0x0002u} /* DID: 0x010F */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hydraulic_Pump_Hydraulic_Pump_Voltage_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hydraulic_Pump_Status_Hydraulic_Pump_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010F */  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hydraulic_Pump_Hydraulic_Pump_Performance_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x010F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Switches_Brake_Switch_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0110 */                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Switches_Parking_Brake_Switch_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0110 */                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Switches_Rear_Gear_Switch_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0110 */                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Switches_Brake_Switch_ResetToDefault)),   1u,   1u,0x2003u} /* DID: 0x0110 */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Switches_Parking_Brake_Switch_ResetToDefault)),   1u,   1u,0x2003u} /* DID: 0x0110 */             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Switches_Rear_Gear_Switch_ResetToDefault)),   1u,   1u,0x2003u} /* DID: 0x0110 */                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Switches_Brake_Switch_ShortTermAdjustment)),   1u,   1u,0x2004u} /* DID: 0x0110 */                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Switches_Parking_Brake_Switch_ShortTermAdjustment)),   1u,   1u,0x2004u} /* DID: 0x0110 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Switches_Rear_Gear_Switch_ShortTermAdjustment)),   1u,   1u,0x2004u} /* DID: 0x0110 */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Inflation_Pressure_Inflation_Pressure_FR_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0111 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Inflation_Pressure_Inflation_Pressure_FL_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0111 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Inflation_Pressure_Inflation_Pressure_RR_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0111 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Inflation_Pressure_Inflation_Pressure_RL_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0111 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Inflation_Pressure_Inflation_Pressure_FR_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0111 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Inflation_Pressure_Inflation_Pressure_FL_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0111 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Inflation_Pressure_Inflation_Pressure_RR_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0111 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Inflation_Pressure_Inflation_Pressure_RL_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0111 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Service_Information_Remaining_Service_Brake_Fluid_Life_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0112 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Service_Information_Remaining_Service_Time_Left_ReadData)),   2u,   2u,0x0002u} /* DID: 0x0112 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Service_Information_Remaining_Service_Brake_Fluid_Life_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0112 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Service_Information_Remaining_Service_Time_Left_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0112 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Service_Information_Remaining_Service_Brake_Fluid_Life_WriteData)),   1u,   1u,0x1002u} /* DID: 0x0112 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Service_Information_Remaining_Service_Time_Left_WriteData)),   2u,   2u,0x1002u} /* DID: 0x0112 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Software_Version_SoftwareVersion_ReadData)),   5u,   5u,0x0002u} /* DID: 0xF189 */                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Software_Version_SoftwareVersion_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF189 */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Software_Version_SoftwareVersion_WriteData)),   5u,   5u,0x1002u} /* DID: 0xF189 */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Serial_Number_SerialNumber_ReadData)),  13u,  13u,0x0002u} /* DID: 0xF18C */                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Serial_Number_SerialNumber_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF18C */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Serial_Number_SerialNumber_WriteData)),  13u,  13u,0x1002u} /* DID: 0xF18C */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VIN_VIN_ReadData)),  17u,  17u,0x0002u} /* DID: 0xF190 */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VIN_VIN_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF190 */                               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VIN_VIN_WriteData)),  17u,  17u,0x1002u} /* DID: 0xF190 */                                        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hardware_Part_Number_PartNumber_ReadData)),  13u,  13u,0x0002u} /* DID: 0xF191 */                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hardware_Part_Number_PartNumber_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF191 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hardware_Part_Number_PartNumber_WriteData)),  13u,  13u,0x1002u} /* DID: 0xF191 */                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hardware_Supplier_Identification_HardwareSupplier_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF192 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hardware_Supplier_Identification_HardwareSupplier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF192 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hardware_Supplier_Identification_HardwareSupplier_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF192 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Software_Supplier_Identification_SoftwareSupplier_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF194 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Software_Supplier_Identification_SoftwareSupplier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF194 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Software_Supplier_Identification_SoftwareSupplier_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF194 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Fingerprint_Serial_number_of_flash_tool_ReadData)),   8u,   8u,0x0002u} /* DID: 0xF198 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Fingerprint_Repair_Shop_Identification_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF198 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Fingerprint_Programming_Date_ReadData)),   8u,   8u,0x0002u} /* DID: 0xF198 */                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Fingerprint_Serial_number_of_flash_tool_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF198 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Fingerprint_Repair_Shop_Identification_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF198 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Fingerprint_Programming_Date_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF198 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Fingerprint_Serial_number_of_flash_tool_WriteData)),   8u,   8u,0x1002u} /* DID: 0xF198 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Fingerprint_Repair_Shop_Identification_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF198 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Fingerprint_Programming_Date_WriteData)),   8u,   8u,0x1002u} /* DID: 0xF198 */                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! IO control DID operation properties */
CONST(Dcm_CfgDidMgrOpInfoIoControlType, DCM_CONST) Dcm_CfgDidMgrOpInfoIoControl[1]=
{
   {    1u, 1u, 1u} /* DID: 0x0110 */
};
/*! RID properties */
CONST(Dcm_CfgRidMgrRidInfoType, DCM_CONST) Dcm_CfgRidMgrRidInfo[1]=
{
   {    0u,   0u,0x05u, 0u} /* RID: 0x0100 */
};
/*! RID operation properties */
CONST(Dcm_CfgRidMgrOpInfoType, DCM_CONST) Dcm_CfgRidMgrOpInfo[2]=
{
   { ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0100_Start)),   1u,   1u,   1u,   1u, 9u} /* RID: 0x0100 */                                                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_ECU_Check_RequestResults)),   0u,   0u,   1u,   1u, 3u} /* RID: 0x0100 */                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! DCM service initializers */
CONST(Dcm_DiagSvcInitFuncType, DCM_CONST) Dcm_CfgDiagSvcInitializers[3]=
{
   Dcm_Service27Init
  ,Dcm_Service2FInit
  ,NULL_PTR /* end marker */
};
/*! DCM service properties */
CONST(Dcm_CfgDiagServiceInfoType, DCM_CONST) Dcm_CfgDiagServiceInfo[13]=
{
   { Dcm_Service10Processor,0x01u, 1u,   1u,   2u, 0u, 0u} /* SID: 0x10 */
  ,{ Dcm_Service11Processor,0x01u, 1u,   3u,   4u, 0u, 0u} /* SID: 0x11 */
  ,{ Dcm_Service14Processor,0x00u, 3u,   0u,   0u, 0u, 0u} /* SID: 0x14 */
  ,{ Dcm_Service19Processor,0x01u, 1u,   5u,   0u, 2u, 0u} /* SID: 0x19 */
  ,{ Dcm_Service22Processor,0x00u, 2u,   0u,   0u, 0u, 0u} /* SID: 0x22 */
  ,{ Dcm_Service27Processor,0x03u, 1u,   6u,   0u, 0u, 0u} /* SID: 0x27 */
  ,{ Dcm_Service28Processor,0x01u, 1u,   7u,   0u, 0u, 0u} /* SID: 0x28 */
  ,{ Dcm_Service2EProcessor,0x00u, 3u,   0u,   0u, 0u, 0u} /* SID: 0x2E */
  ,{ Dcm_Service2FProcessor,0x00u, 3u,   8u,   0u, 0u, 0u} /* SID: 0x2F */
  ,{ Dcm_Service31Processor,0x01u, 3u,   0u,   0u, 0u, 0u} /* SID: 0x31 */
  ,{ Dcm_Service3EProcessor,0x01u, 1u,   0u,   0u, 0u, 0u} /* SID: 0x3E */
  ,{ Dcm_Service85Processor,0x01u, 1u,   9u,   0u, 0u, 0u} /* SID: 0x85 */
  ,{ Dcm_RepeaterDeadEnd,0x00u, 0u,   0u,   0u, 0u, 0u} /* Dcm_RepeaterDeadEnd */
};
/*! Indirection from diag service info to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgDiagSvcIdExecPrecondTable[12]=
{
      0u /* SID: 0x10 */
  ,   0u /* SID: 0x11 */
  ,   0u /* SID: 0x14 */
  ,   0u /* SID: 0x19 */
  ,   0u /* SID: 0x22 */
  ,   1u /* SID: 0x27 */
  ,   1u /* SID: 0x28 */
  ,   0u /* SID: 0x2E */
  ,   1u /* SID: 0x2F */
  ,   0u /* SID: 0x31 */
  ,   0u /* SID: 0x3E */
  ,   1u /* SID: 0x85 */
};
/*! DCM service post processors */
CONST(Dcm_DiagSvcConfirmationFuncType, DCM_CONST) Dcm_CfgDiagSvcPostProcessors[10]=
{
   Dcm_ServiceNoPostProcessor
  ,Dcm_Service10PostProcessor
  ,Dcm_Service10FastPostProcessor
  ,Dcm_Service11PostProcessor
  ,Dcm_Service11FastPostProcessor
  ,Dcm_Service19PostProcessor
  ,Dcm_Service27PostProcessor
  ,Dcm_Service28PostProcessor
  ,Dcm_Service2FPostProcessor
  ,Dcm_Service85PostProcessor
};
/*! DCM service paged buffer updater */
CONST(Dcm_DiagSvcUpdateFuncType, DCM_CONST) Dcm_CfgDiagSvcUpdaters[3]=
{
   Dcm_ServiceNoUpdater
  ,Dcm_PagedBufferDataPadding
  ,Dcm_Service19Updater
};
/*! DCM service paged buffer canceller */
CONST(Dcm_DiagSvcCancelFuncType, DCM_CONST) Dcm_CfgDiagSvcCancellers[1]=
{
   Dcm_ServiceNoCancel
};
/*! Service 0x10 sub-service properties table  */
CONST(Dcm_CfgSvc10SubFuncInfoType, DCM_CONST) Dcm_CfgSvc10SubFuncInfo[3]=
{
   { { 50u, 500u}} /* Session ID: 0x01 */
  ,{ { 50u, 500u}} /* Session ID: 0x02 */
  ,{ { 50u, 500u}} /* Session ID: 0x03 */
};
/*! Indirection from service 0x10 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc10SubFuncExecPrecondTable[3]=
{
      0u /* Session ID: 0x01 */
  ,   1u /* Session ID: 0x02 */
  ,   0u /* Session ID: 0x03 */
};
/*! Service 0x11 sub-service properties table  */
CONST(Dcm_CfgSvc11SubFuncInfoType, DCM_CONST) Dcm_CfgSvc11SubFuncInfo[2]=
{
   { Dcm_Service11_01Processor} /* SF: 0x01 */
  ,{ Dcm_Service11_03Processor} /* SF: 0x03 */
};
/*! Indirection from service 0x11 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc11SubFuncExecPrecondTable[2]=
{
      0u /* SF: 0x01 */
  ,   0u /* SF: 0x03 */
};
/*! Service 0x19 sub-service properties table  */
CONST(Dcm_CfgSvc19SubFuncInfoType, DCM_CONST) Dcm_CfgSvc19SubFuncInfo[5]=
{
   { Dcm_Service19_01Processor, 2u} /* SF: 0x01 */
  ,{ Dcm_Service19_02Processor, 2u} /* SF: 0x02 */
  ,{ Dcm_Service19_04Processor, 5u} /* SF: 0x04 */
  ,{ Dcm_Service19_06Processor, 5u} /* SF: 0x06 */
  ,{ Dcm_Service19_0AProcessor, 1u} /* SF: 0x0A */
};
/*! Indirection from service 0x19 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc19SubFuncExecPrecondTable[5]=
{
      0u /* SF: 0x01 */
  ,   0u /* SF: 0x02 */
  ,   0u /* SF: 0x04 */
  ,   0u /* SF: 0x06 */
  ,   0u /* SF: 0x0A */
};
/*! Service 0x27 sub-service properties table  */
CONST(Dcm_CfgSvc27SubFuncInfoType, DCM_CONST) Dcm_CfgSvc27SubFuncInfo[2]=
{
   {    1u} /* SF: 0x01 */                                                                                                                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{    5u} /* SF: 0x02 */                                                                                                                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! Service 0x27 security level properties table  */
CONST(Dcm_CfgSvc27SecLevelInfoType, DCM_CONST) Dcm_CfgSvc27SecLevelInfo[1]=
{
   { ((Dcm_Svc27GetSeedFuncType)(Rte_Call_SecurityAccess_UnlockedL1_GetSeed)),Rte_Call_SecurityAccess_UnlockedL1_CompareKey,   4u, 0u} /* SecLvl: UnlockedL1 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! Indirection from service 0x27 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc27SubFuncExecPrecondTable[2]=
{
      1u /* SF: 0x01 */
  ,   1u /* SF: 0x02 */
};
/*! Service 0x28 sub-service properties table  */
CONST(Dcm_CfgSvc28SubFuncInfoType, DCM_CONST) Dcm_CfgSvc28SubFuncInfo[2]=
{
   { Dcm_Service28_XXProcessor, 2u} /* SF: 0x00 */
  ,{ Dcm_Service28_XXProcessor, 2u} /* SF: 0x01 */
};
/*! Indirection from service 0x28 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc28SubFuncExecPrecondTable[2]=
{
      1u /* SF: 0x00 */
  ,   1u /* SF: 0x01 */
};
/*! Service 0x28 network ID to ComM channel map */
CONST(NetworkHandleType, DCM_CONST) Dcm_CfgSvc28SubNetIdMap[2]=
{
   DCM_SVC_28_NETWORK_ALL
  ,DCM_SVC_28_NETWORK_CURRENT
};
/*! Indirection from service 0x3E sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc3ESubFuncExecPrecondTable[1]=
{
      0u /* SF: 0x00 */
};
/*! Indirection from service 0x85 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc85SubFuncExecPrecondTable[2]=
{
      1u /* SF: 0x01 */
  ,   1u /* SF: 0x02 */
};
/*! DCM service 0x85 properties */
CONST(Dcm_CfgSvc85SubFuncInfoType, DCM_CONST) Dcm_CfgSvc85SubFuncInfo[2]=
{
   { Dem_EnableDTCSetting,RTE_MODE_DcmControlDtcSetting_ENABLEDTCSETTING} /* SF: 0x01 */
  ,{ Dem_DisableDTCSetting,RTE_MODE_DcmControlDtcSetting_DISABLEDTCSETTING} /* SF: 0x02 */
};
#define DCM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_MemMap */
/*lint -restore */
/* ----------------------------------------------
 ~&&&   Module call-out implementations
---------------------------------------------- */
#define DCM_START_SEC_CALLOUT_CODE
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_MemMap */
/*lint -restore */
/***********************************************************************************************************************
 *  Dcm_RidMgr_0100_Start()
***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0100_Start(Dcm_OpStatusType OpStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_RidMgrRidLengthPtrType DataLength, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  uint8 dataInIn_Start_ECU_Check;

  dataInIn_Start_ECU_Check = ((uint8)(Dcm_DiagGetReqDataAsU8Rel(pMsgContext, 0u)))                                                                   /* PRQA S 2985 */ /* MD_Dcm_Redundant_2985 */;

  DCM_IGNORE_UNREF_PARAM(DataLength);                                                                                                                /* PRQA S 3112 */ /* MD_Dcm_3112 */

  return Rte_Call_RoutineServices_ECU_Check_Start(dataInIn_Start_ECU_Check
                                                 , OpStatus
                                                 , Dcm_DiagGetResDataRel(pMsgContext, 0u)                                                            /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */ /* PRQA S 2985 */ /* MD_Dcm_Redundant_2985 */
                                                 , ErrorCode
                                                 );                                                                                                  /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_ServiceNoPostProcessor()
***********************************************************************************************************************/
/* Implements CDD Dcm_ServiceNoPostProcessor() */
DCM_LOCAL FUNC(void, DCM_CALLOUT_CODE) Dcm_ServiceNoPostProcessor(Dcm_ContextPtrType pContext, Dcm_ConfirmationStatusType status)                    /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  DCM_IGNORE_UNREF_PARAM(pContext);                                                                                                                  /* PRQA S 3112 */ /* MD_Dcm_3112 */
  DCM_IGNORE_UNREF_PARAM(status);                                                                                                                    /* PRQA S 3112 */ /* MD_Dcm_3112 */
}
/***********************************************************************************************************************
 *  Dcm_ServiceNoUpdater()
***********************************************************************************************************************/
/* Implements CDD Dcm_ServiceNoUpdater() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_ServiceNoUpdater(Dcm_ContextPtrType pContext, Dcm_OpStatusType opStatus, Dcm_DiagDataContextPtrType pDataContext, Dcm_NegativeResponseCodePtrType ErrorCode) /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
{
  DCM_IGNORE_UNREF_PARAM(pContext);                                                                                                                  /* PRQA S 3112 */ /* MD_Dcm_3112 */
  DCM_IGNORE_UNREF_PARAM(opStatus);                                                                                                                  /* PRQA S 3112 */ /* MD_Dcm_3112 */
  DCM_IGNORE_UNREF_PARAM(pDataContext);                                                                                                              /* PRQA S 3112 */ /* MD_Dcm_3112 */
  DCM_IGNORE_UNREF_PARAM(ErrorCode);                                                                                                                 /* PRQA S 3112 */ /* MD_Dcm_3112 */
  return E_NOT_OK;
}
/***********************************************************************************************************************
 *  Dcm_ServiceNoCancel()
***********************************************************************************************************************/
/* Implements CDD Dcm_ServiceNoCancel() */
DCM_LOCAL FUNC(void, DCM_CALLOUT_CODE) Dcm_ServiceNoCancel(Dcm_ContextPtrType pContext, Dcm_DiagDataContextPtrType pDataContext)                     /* PRQA S 3673 */ /* MD_Dcm_Design_3673 */
{
  DCM_IGNORE_UNREF_PARAM(pContext);                                                                                                                  /* PRQA S 3112 */ /* MD_Dcm_3112 */
  DCM_IGNORE_UNREF_PARAM(pDataContext);                                                                                                              /* PRQA S 3112 */ /* MD_Dcm_3112 */
  /* nothing to do */
}
#define DCM_STOP_SEC_CALLOUT_CODE
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_MemMap */
/*lint -restore */
/* ********************************************************************************************************************
 * END OF FILE: Dcm_Lcfg.c
 * ******************************************************************************************************************** */

