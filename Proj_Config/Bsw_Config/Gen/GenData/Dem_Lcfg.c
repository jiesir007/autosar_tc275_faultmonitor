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
 *            Module: Dem
 *           Program: MSR_Vector_SLP4
 *          Customer: China FAW Group Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC297TA
 *    License Scope : The usage is restricted to CBD1600956_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Dem_Lcfg.c
 *   Generation Time: 2024-03-24 00:13:12
 *           Project: TC27x - Version 1.0
 *          Delivery: CBD1600956_D01
 *      Tool Version: DaVinci Configurator  5.20.35
 *
 *
 *********************************************************************************************************************/



/* configuration, interrupt handling implementations differ from the
 * source identification define used here. The naming
 * schemes for those files can be taken from this list:
 *
 * Dem.c:         DEM_SOURCE
 * Dem_Lcfg.c:    DEM_LCFG_SOURCE
 * Dem_PBcfg.c:   DEM_PBCFG_SOURCE */
#define DEM_LCFG_SOURCE


/**********************************************************************************************************************
  MISRA JUSTIFICATIONS
**********************************************************************************************************************/

/* PRQA S 0810 EOF */ /* MD_MSR_1.1_810 */                                      /* #include "..." causes nesting to exceed 8 levels - program is non-conforming. -- caused by #include'd files. */
/* PRQA S 0828 EOF */ /* MD_MSR_1.1_828 */                                      /* Maximum '#if...' nesting exceeds 8 levels - program is non-conforming -- caused by #include'd files. */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */                                      /* Number of macro definitions exceeds 1024 - program is non-conforming -- caused by #include'd files. */
/* PRQA S 0779 EOF */ /* MD_DEM_5.1 */                                          /* Identifier does not differ in 32 significant characters -- caused by Autosar algorithm for unique symbolic names. */
/* PRQA S 0612 EOF */ /* MD_DEM_1.1_612 */                                      /* The size of an object exceeds 32767 bytes - program is non-conforming -- caused by large user configration. */


/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/

#include "Dem.h"
#include "Os.h"
#if (DEM_CFG_USE_NVM == STD_ON)
# include "NvM.h"                                                               /* get: symbolic names for NvM block IDs */
#endif
#if (DEM_CFG_SUPPORT_J1939 == STD_ON)
# include "J1939Nm.h"                                                           /* get: symbolic names for J1939Nm node IDs */
#endif
#if (DEM_CFG_USE_RTE == STD_ON)
/* DEM used with RTE */
# include "Rte_DemMaster_0.h"
#endif
#include "Dem_AdditionalIncludeCfg.h"                                           /* additional, configuration defined files */

/**********************************************************************************************************************
  LOCAL CONSTANT MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/



/**********************************************************************************************************************
  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA
**********************************************************************************************************************/



/**********************************************************************************************************************
  GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  Dem_Cfg_CallbackGetFdc
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_CallbackGetFdc
  \brief  DemCallbackGetFDC/DemCallbackGetFDCFnc of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceMonitorInternal
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_GetFDCFPtrType, DEM_CONST) Dem_Cfg_CallbackGetFdc[36] = {
  /* Index     CallbackGetFdc                                                       Referable Keys */
  /*     0 */ NULL_PTR                                                        ,  /* [#EVENT_INVALID] */
  /*     1 */ Rte_Call_CBFaultDetectCtr_DTC_0x402011_GetFaultDetectionCounter ,  /* [DTC_0x402011] */
  /*     2 */ Rte_Call_CBFaultDetectCtr_DTC_0x403a13_GetFaultDetectionCounter ,  /* [DTC_0x403a13] */
  /*     3 */ Rte_Call_CBFaultDetectCtr_DTC_0x403a21_GetFaultDetectionCounter ,  /* [DTC_0x403a21] */
  /*     4 */ Rte_Call_CBFaultDetectCtr_DTC_0x403a22_GetFaultDetectionCounter ,  /* [DTC_0x403a22] */
  /*     5 */ Rte_Call_CBFaultDetectCtr_DTC_0x402012_GetFaultDetectionCounter ,  /* [DTC_0x402012] */
  /*     6 */ Rte_Call_CBFaultDetectCtr_DTC_0x402013_GetFaultDetectionCounter ,  /* [DTC_0x402013] */
  /*     7 */ Rte_Call_CBFaultDetectCtr_DTC_0x402025_GetFaultDetectionCounter ,  /* [DTC_0x402025] */
  /*     8 */ Rte_Call_CBFaultDetectCtr_DTC_0x403113_GetFaultDetectionCounter ,  /* [DTC_0x403113] */
  /*     9 */ Rte_Call_CBFaultDetectCtr_DTC_0x403121_GetFaultDetectionCounter ,  /* [DTC_0x403121] */
  /*    10 */ Rte_Call_CBFaultDetectCtr_DTC_0x403122_GetFaultDetectionCounter ,  /* [DTC_0x403122] */
  /*    11 */ Rte_Call_CBFaultDetectCtr_DTC_0x403413_GetFaultDetectionCounter ,  /* [DTC_0x403413] */
  /*    12 */ Rte_Call_CBFaultDetectCtr_DTC_0x403421_GetFaultDetectionCounter ,  /* [DTC_0x403421] */
  /*    13 */ Rte_Call_CBFaultDetectCtr_DTC_0x403422_GetFaultDetectionCounter ,  /* [DTC_0x403422] */
  /*    14 */ Rte_Call_CBFaultDetectCtr_DTC_0x403713_GetFaultDetectionCounter ,  /* [DTC_0x403713] */
  /*    15 */ Rte_Call_CBFaultDetectCtr_DTC_0x403721_GetFaultDetectionCounter ,  /* [DTC_0x403721] */
  /*    16 */ Rte_Call_CBFaultDetectCtr_DTC_0x403722_GetFaultDetectionCounter ,  /* [DTC_0x403722] */
  /*    17 */ Rte_Call_CBFaultDetectCtr_DTC_0x404011_GetFaultDetectionCounter ,  /* [DTC_0x404011] */
  /*    18 */ Rte_Call_CBFaultDetectCtr_DTC_0x404012_GetFaultDetectionCounter ,  /* [DTC_0x404012] */
  /*    19 */ Rte_Call_CBFaultDetectCtr_DTC_0x404013_GetFaultDetectionCounter ,  /* [DTC_0x404013] */
  /*    20 */ Rte_Call_CBFaultDetectCtr_DTC_0x404211_GetFaultDetectionCounter ,  /* [DTC_0x404211] */
  /*    21 */ Rte_Call_CBFaultDetectCtr_DTC_0x404212_GetFaultDetectionCounter ,  /* [DTC_0x404212] */
  /*    22 */ Rte_Call_CBFaultDetectCtr_DTC_0x404213_GetFaultDetectionCounter ,  /* [DTC_0x404213] */
  /*    23 */ Rte_Call_CBFaultDetectCtr_DTC_0x404421_GetFaultDetectionCounter ,  /* [DTC_0x404421] */
  /*    24 */ Rte_Call_CBFaultDetectCtr_DTC_0x404422_GetFaultDetectionCounter ,  /* [DTC_0x404422] */
  /*    25 */ Rte_Call_CBFaultDetectCtr_DTC_0x404428_GetFaultDetectionCounter ,  /* [DTC_0x404428] */
  /*    26 */ Rte_Call_CBFaultDetectCtr_DTC_0x406221_GetFaultDetectionCounter ,  /* [DTC_0x406221] */
  /*    27 */ Rte_Call_CBFaultDetectCtr_DTC_0x406222_GetFaultDetectionCounter ,  /* [DTC_0x406222] */
  /*    28 */ Rte_Call_CBFaultDetectCtr_DTC_0x406225_GetFaultDetectionCounter ,  /* [DTC_0x406225] */
  /*    29 */ Rte_Call_CBFaultDetectCtr_DTC_0x406321_GetFaultDetectionCounter ,  /* [DTC_0x406321] */
  /*    30 */ Rte_Call_CBFaultDetectCtr_DTC_0x406322_GetFaultDetectionCounter ,  /* [DTC_0x406322] */
  /*    31 */ Rte_Call_CBFaultDetectCtr_DTC_0x406325_GetFaultDetectionCounter ,  /* [DTC_0x406325] */
  /*    32 */ Rte_Call_CBFaultDetectCtr_DTC_0x401001_GetFaultDetectionCounter ,  /* [DTC_0x401001] */
  /*    33 */ Rte_Call_CBFaultDetectCtr_DTC_0x401003_GetFaultDetectionCounter ,  /* [DTC_0x401003] */
  /*    34 */ Rte_Call_CBFaultDetectCtr_DTC_0x402001_GetFaultDetectionCounter ,  /* [DTC_0x402001] */
  /*    35 */ Rte_Call_CBFaultDetectCtr_DTC_0x403001_GetFaultDetectionCounter    /* [DTC_0x403001] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataCollectionTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataCollectionTable
  \details
  Element                                Description
  IdNumber                           
  Trigger                                Trigger for storage and update of extended data records
  CollectionSize                     
  DataElementTableCol2ElmtIndEndIdx      the end index of the 0:n relation pointing to Dem_Cfg_DataElementTableCol2ElmtInd
  DataElementTableCol2ElmtIndStartIdx    the start index of the 0:n relation pointing to Dem_Cfg_DataElementTableCol2ElmtInd
  MaskedBits                             contains bitcoded the boolean data of Dem_Cfg_DataElementTableCol2ElmtIndUsedOfDataCollectionTable, Dem_Cfg_UpdateOfDataCollectionTable
  StorageKind                        
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DataCollectionTableType, DEM_CONST) Dem_Cfg_DataCollectionTable[7] = {
    /* Index    IdNumber  Trigger                     CollectionSize  DataElementTableCol2ElmtIndEndIdx                                  DataElementTableCol2ElmtIndStartIdx                                  MaskedBits  StorageKind                     Referable Keys */
  { /*     0 */  0x0000u, DEM_CFG_TRIGGER_NONE      ,             0u, DEM_CFG_NO_DATAELEMENTTABLECOL2ELMTINDENDIDXOFDATACOLLECTIONTABLE, DEM_CFG_NO_DATAELEMENTTABLECOL2ELMTINDSTARTIDXOFDATACOLLECTIONTABLE,      0x00u, DEM_CFG_EREC_TYPE_GLOBAL },  /* [#NoDataCollectionConfigured] */
  { /*     1 */  0x000Bu, DEM_CFG_TRIGGER_TESTFAILED,             1u,                                                                1u,                                                                  0u,      0x03u, DEM_CFG_EREC_TYPE_USER   },  /* [#EdrDTCAgingCounter, Ext:ExtendedDataClass_bc718b7c] */
  { /*     2 */  0x000Au, DEM_CFG_TRIGGER_TESTFAILED,             1u,                                                                2u,                                                                  1u,      0x03u, DEM_CFG_EREC_TYPE_USER   },  /* [#EdrOccurrenceCounter, Ext:ExtendedDataClass_bc718b7c] */
  { /*     3 */  0x000Cu, DEM_CFG_TRIGGER_TESTFAILED,             1u,                                                                3u,                                                                  2u,      0x03u, DEM_CFG_EREC_TYPE_USER   },  /* [#EdrUncompletedTestCounters, Ext:ExtendedDataClass_bc718b7c] */
  { /*     4 */  0x010Du, DEM_CFG_TRIGGER_NONE      ,             8u,                                                               11u,                                                                  3u,      0x02u, DEM_CFG_EREC_TYPE_USER   },  /* [#DidBrake_Pedal, Ffm:FreezeFrameClass_226af9a2, Ffm:FreezeFrameClass_d4213761] */
  { /*     5 */  0x0107u, DEM_CFG_TRIGGER_NONE      ,             1u,                                                               12u,                                                                 11u,      0x02u, DEM_CFG_EREC_TYPE_USER   },  /* [#DidSupply_Voltage_ECU, Ffm:FreezeFrameClass_d4213761] */
  { /*     6 */  0x010Au, DEM_CFG_TRIGGER_NONE      ,             9u,                                                               21u,                                                                 12u,      0x02u, DEM_CFG_EREC_TYPE_USER   }   /* [#DidWheel_Speed, Ffm:FreezeFrameClass_226af9a2, Ffm:FreezeFrameClass_d4213761] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataCollectionTableEdr2CollInd
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataCollectionTableEdr2CollInd
  \brief  the indexes of the 1:1 sorted relation pointing to Dem_Cfg_DataCollectionTable
*/ 
#define DEM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DataCollectionTableEdr2CollIndType, DEM_CONST) Dem_Cfg_DataCollectionTableEdr2CollInd[3] = {
  /* Index     DataCollectionTableEdr2CollInd      Referable Keys */
  /*     0 */                              2u,  /* [Ext:ExtendedDataClass_bc718b7c] */
  /*     1 */                              1u,  /* [Ext:ExtendedDataClass_bc718b7c] */
  /*     2 */                              3u   /* [Ext:ExtendedDataClass_bc718b7c] */
};
#define DEM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataCollectionTableFfm2CollInd
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataCollectionTableFfm2CollInd
  \brief  the indexes of the 1:1 sorted relation pointing to Dem_Cfg_DataCollectionTable
*/ 
#define DEM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DataCollectionTableFfm2CollIndType, DEM_CONST) Dem_Cfg_DataCollectionTableFfm2CollInd[5] = {
  /* Index     DataCollectionTableFfm2CollInd      Referable Keys */
  /*     0 */                              6u,  /* [Ffm:FreezeFrameClass_226af9a2] */
  /*     1 */                              4u,  /* [Ffm:FreezeFrameClass_226af9a2] */
  /*     2 */                              6u,  /* [Ffm:FreezeFrameClass_d4213761] */
  /*     3 */                              4u,  /* [Ffm:FreezeFrameClass_d4213761] */
  /*     4 */                              5u   /* [Ffm:FreezeFrameClass_d4213761] */
};
#define DEM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataElementTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataElementTable
  \details
  Element         Description
  ElementKind     DataElement kind, returned by Dem_Cfg_DataCallbackType()
  ElementSize     Size of data element in Byte.
  ReadDataFunc    C-function for getting the data. Its signature depends on ElementKind: With value(s) DEM_CFG_DATA_FROM_CBK_WITH_EVENTID use: Std_ReturnType (*)(uint8* Buffer, uint16 EventId); - and use: Std_ReturnType (*)(uint8* Buffer); with the other values DEM_CFG_DATA_FROM_CBK, DEM_CFG_DATA_FROM_SR_PORT_BOOLEAN, DEM_CFG_DATA_FROM_SR_PORT_SINT16, DEM_CFG_DATA_FROM_SR_PORT_SINT16_INTEL, DEM_CFG_DATA_FROM_SR_PORT_SINT32, DEM_CFG_DATA_FROM_SR_PORT_SINT32_INTEL, DEM_CFG_DATA_FROM_SR_PORT_SINT8, DEM_CFG_DATA_FROM_SR_PORT_SINT8_N, DEM_CFG_DATA_FROM_SR_PORT_UINT16, DEM_CFG_DATA_FROM_SR_PORT_UINT16_INTEL, DEM_CFG_DATA_FROM_SR_PORT_UINT32, DEM_CFG_DATA_FROM_SR_PORT_UINT32_INTEL, DEM_CFG_DATA_FROM_SR_PORT_UINT8, DEM_CFG_DATA_FROM_SR_PORT_UINT8_N.
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DataElementTableType, DEM_CONST) Dem_Cfg_DataElementTable[22] = {
    /* Index    ElementKind                  ElementSize  ReadDataFunc                                                                                                                                                Referable Keys */
  { /*     0 */ DEM_CFG_DATAELEMENT_INVALID,          0u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ NULL_PTR                                                                                 },  /* [#NoDataElementConfigured] */
  { /*     1 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_UncompletedTestCounters_Driving_Cycles_Since_Last_Completed_ReadData },  /* [#UncompletedTestCounters_Driving_Cycles_Since_Last_Completed, EdrUncompletedTestCounters] */
  { /*     2 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x10d_Valve_Voltage_RL_ReadData                                  },  /* [#DID_0x10d_Valve_Voltage_RL, DidBrake_Pedal] */
  { /*     3 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x10a_Wheel_Voltage_RL_ReadData                                  },  /* [#DID_0x10a_Wheel_Voltage_RL, DidWheel_Speed] */
  { /*     4 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x107_Voltage_ECU_ReadData                                       },  /* [#DID_0x107_Voltage_ECU, DidSupply_Voltage_ECU] */
  { /*     5 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x10d_Valve_Voltage_RR_ReadData                                  },  /* [#DID_0x10d_Valve_Voltage_RR, DidBrake_Pedal] */
  { /*     6 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DTCAgingCounter_Driving_Cycles_Since_Last_Failed_ReadData            },  /* [#DTCAgingCounter_Driving_Cycles_Since_Last_Failed, EdrDTCAgingCounter] */
  { /*     7 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x10d_Valve_Status_FR_ReadData                                   },  /* [#DID_0x10d_Valve_Status_FR, DidBrake_Pedal] */
  { /*     8 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x10a_Wheel_Voltage_RR_ReadData                                  },  /* [#DID_0x10a_Wheel_Voltage_RR, DidWheel_Speed] */
  { /*     9 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x10a_Wheel_Voltage_FR_ReadData                                  },  /* [#DID_0x10a_Wheel_Voltage_FR, DidWheel_Speed] */
  { /*    10 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x10a_Wheel_Voltage_FL_ReadData                                  },  /* [#DID_0x10a_Wheel_Voltage_FL, DidWheel_Speed] */
  { /*    11 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x10d_Valve_Status_RR_ReadData                                   },  /* [#DID_0x10d_Valve_Status_RR, DidBrake_Pedal] */
  { /*    12 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x10a_Wheel_Speed_RL_ReadData                                    },  /* [#DID_0x10a_Wheel_Speed_RL, DidWheel_Speed] */
  { /*    13 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x10a_Wheel_Speed_RR_ReadData                                    },  /* [#DID_0x10a_Wheel_Speed_RR, DidWheel_Speed] */
  { /*    14 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x10a_Wheel_Speed_FL_ReadData                                    },  /* [#DID_0x10a_Wheel_Speed_FL, DidWheel_Speed] */
  { /*    15 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x10d_Valve_Status_FL_ReadData                                   },  /* [#DID_0x10d_Valve_Status_FL, DidBrake_Pedal] */
  { /*    16 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x10a_Direction_of_rotation_ReadData                             },  /* [#DID_0x10a_Direction_of_rotation, DidWheel_Speed] */
  { /*    17 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x10d_Valve_Voltage_FL_ReadData                                  },  /* [#DID_0x10d_Valve_Voltage_FL, DidBrake_Pedal] */
  { /*    18 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x10a_Wheel_Speed_FR_ReadData                                    },  /* [#DID_0x10a_Wheel_Speed_FR, DidWheel_Speed] */
  { /*    19 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x10d_Valve_Voltage_FR_ReadData                                  },  /* [#DID_0x10d_Valve_Voltage_FR, DidBrake_Pedal] */
  { /*    20 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_OccurrenceCounter_Driving_Cycles_Since_Test_Failed_ReadData          },  /* [#OccurrenceCounter_Driving_Cycles_Since_Test_Failed, EdrOccurrenceCounter] */
  { /*    21 */ DEM_CFG_DATA_FROM_CBK      ,          1u,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DID_0x10d_Valve_Status_RL_ReadData                                   }   /* [#DID_0x10d_Valve_Status_RL, DidBrake_Pedal] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataElementTableCol2ElmtInd
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataElementTableCol2ElmtInd
  \brief  the indexes of the 1:1 sorted relation pointing to Dem_Cfg_DataElementTable
*/ 
#define DEM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DataElementTableCol2ElmtIndType, DEM_CONST) Dem_Cfg_DataElementTableCol2ElmtInd[21] = {
  /* Index     DataElementTableCol2ElmtInd      Referable Keys */
  /*     0 */                           6u,  /* [EdrDTCAgingCounter] */
  /*     1 */                          20u,  /* [EdrOccurrenceCounter] */
  /*     2 */                           1u,  /* [EdrUncompletedTestCounters] */
  /*     3 */                          19u,  /* [DidBrake_Pedal] */
  /*     4 */                          17u,  /* [DidBrake_Pedal] */
  /*     5 */                           5u,  /* [DidBrake_Pedal] */
  /*     6 */                           2u,  /* [DidBrake_Pedal] */
  /*     7 */                           7u,  /* [DidBrake_Pedal] */
  /*     8 */                          15u,  /* [DidBrake_Pedal] */
  /*     9 */                          11u,  /* [DidBrake_Pedal] */
  /*    10 */                          21u,  /* [DidBrake_Pedal] */
  /*    11 */                           4u,  /* [DidSupply_Voltage_ECU] */
  /*    12 */                          18u,  /* [DidWheel_Speed] */
  /*    13 */                          14u,  /* [DidWheel_Speed] */
  /*    14 */                          13u,  /* [DidWheel_Speed] */
  /*    15 */                          12u,  /* [DidWheel_Speed] */
  /*    16 */                           9u,  /* [DidWheel_Speed] */
  /*    17 */                          10u,  /* [DidWheel_Speed] */
  /*    18 */                           8u,  /* [DidWheel_Speed] */
  /*    19 */                           3u,  /* [DidWheel_Speed] */
  /*    20 */                          16u   /* [DidWheel_Speed] */
};
#define DEM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DebounceTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DebounceTable
  \details
  Element              Description
  DecrementStepSize    (-1) * DemDebounceCounterDecrementStepSize of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  FailedThreshold      DemDebounceCounterFailedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  IncrementStepSize    DemDebounceCounterIncrementStepSize of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  PassedThreshold      DemDebounceCounterPassedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  MaskedBits           contains bitcoded the boolean data of Dem_Cfg_DebounceContinuousOfDebounceTable, Dem_Cfg_EventDebounceBehaviorOfDebounceTable, Dem_Cfg_JumpDownOfDebounceTable, Dem_Cfg_JumpUpOfDebounceTable, Dem_Cfg_StorageOfDebounceTable
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DebounceTableType, DEM_CONST) Dem_Cfg_DebounceTable[2] = {
    /* Index    DecrementStepSize  FailedThreshold  IncrementStepSize  PassedThreshold  MaskedBits        Referable Keys */
  { /*     0 */                -1,             127,                 1,            -128,      0x06u },  /* [DTC_0x401001, DTC_0x401003, DTC_0x402001, DTC_0x402011, DTC_0x402012, DTC_0x402013, DTC_0x402025, DTC_0x403001, DTC_0x403113, DTC_0x403121, DTC_0x403122, DTC_0x403413, DTC_0x403421, DTC_0x403422, DTC_0x403713, DTC_0x403721, DTC_0x403722, DTC_0x403a13, DTC_0x403a21, DTC_0x403a22, DTC_0x404011, DTC_0x404012, DTC_0x404013, DTC_0x404211, DTC_0x404212, DTC_0x404213, DTC_0x404421, DTC_0x404422, DTC_0x404428, DTC_0x406221, DTC_0x406222, DTC_0x406225, DTC_0x406321, DTC_0x406322, DTC_0x406325] */
  { /*     1 */                 0,               0,                 0,               0,      0x00u }   /* [#EVENT_INVALID] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DtcTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DtcTable
  \details
  Element           Description
  UdsDtc        
  FunctionalUnit
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DtcTableType, DEM_CONST) Dem_Cfg_DtcTable[36] = {
    /* Index    UdsDtc        FunctionalUnit        Referable Keys */
  { /*     0 */ 0x00FFFFFFuL,           255u },  /* [#NoUdsDtcConfigured, #NoObdDtcConfigured, #NoJ1939DtcConfigured] */
  { /*     1 */ 0x00402011uL,             0u },  /* [DTCClass_DTC_0x402011] */
  { /*     2 */ 0x00403A13uL,             0u },  /* [DTCClass_DTC_0x403a13] */
  { /*     3 */ 0x00403A21uL,             0u },  /* [DTCClass_DTC_0x403a21] */
  { /*     4 */ 0x00403A22uL,             0u },  /* [DTCClass_DTC_0x403a22] */
  { /*     5 */ 0x00402012uL,             0u },  /* [DTCClass_DTC_0x402012] */
  { /*     6 */ 0x00402013uL,             0u },  /* [DTCClass_DTC_0x402013] */
  { /*     7 */ 0x00402025uL,             0u },  /* [DTCClass_DTC_0x402025] */
  { /*     8 */ 0x00403113uL,             0u },  /* [DTCClass_DTC_0x403113] */
  { /*     9 */ 0x00403121uL,             0u },  /* [DTCClass_DTC_0x403121] */
  { /*    10 */ 0x00403122uL,             0u },  /* [DTCClass_DTC_0x403122] */
  { /*    11 */ 0x00403413uL,             0u },  /* [DTCClass_DTC_0x403413] */
  { /*    12 */ 0x00403421uL,             0u },  /* [DTCClass_DTC_0x403421] */
  { /*    13 */ 0x00403422uL,             0u },  /* [DTCClass_DTC_0x403422] */
  { /*    14 */ 0x00403713uL,             0u },  /* [DTCClass_DTC_0x403713] */
  { /*    15 */ 0x00403721uL,             0u },  /* [DTCClass_DTC_0x403721] */
  { /*    16 */ 0x00403722uL,             0u },  /* [DTCClass_DTC_0x403722] */
  { /*    17 */ 0x00404011uL,             0u },  /* [DTCClass_DTC_0x404011] */
  { /*    18 */ 0x00404012uL,             0u },  /* [DTCClass_DTC_0x404012] */
  { /*    19 */ 0x00404013uL,             0u },  /* [DTCClass_DTC_0x404013] */
  { /*    20 */ 0x00404211uL,             0u },  /* [DTCClass_DTC_0x404211] */
  { /*    21 */ 0x00404212uL,             0u },  /* [DTCClass_DTC_0x404212] */
  { /*    22 */ 0x00404213uL,             0u },  /* [DTCClass_DTC_0x404213] */
  { /*    23 */ 0x00404421uL,             0u },  /* [DTCClass_DTC_0x404421] */
  { /*    24 */ 0x00404422uL,             0u },  /* [DTCClass_DTC_0x404422] */
  { /*    25 */ 0x00404428uL,             0u },  /* [DTCClass_DTC_0x404428] */
  { /*    26 */ 0x00406221uL,             0u },  /* [DTCClass_DTC_0x406221] */
  { /*    27 */ 0x00406222uL,             0u },  /* [DTCClass_DTC_0x406222] */
  { /*    28 */ 0x00406225uL,             0u },  /* [DTCClass_DTC_0x406225] */
  { /*    29 */ 0x00406321uL,             0u },  /* [DTCClass_DTC_0x406321] */
  { /*    30 */ 0x00406322uL,             0u },  /* [DTCClass_DTC_0x406322] */
  { /*    31 */ 0x00406325uL,             0u },  /* [DTCClass_DTC_0x406325] */
  { /*    32 */ 0x00401001uL,             0u },  /* [DTCClass_DTC_0x401001] */
  { /*    33 */ 0x00401003uL,             0u },  /* [DTCClass_DTC_0x401003] */
  { /*    34 */ 0x00402001uL,             0u },  /* [DTCClass_DTC_0x402001] */
  { /*    35 */ 0x00403001uL,             0u }   /* [DTCClass_DTC_0x403001] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventTable
  \details
  Element                     Description
  DtcTableIdx                 the index of the 1:1 relation pointing to Dem_Cfg_DtcTable
  FreezeFrameTableStdFFIdx    the index of the 1:1 relation pointing to Dem_Cfg_FreezeFrameTable
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_EventTableType, DEM_CONST) Dem_Cfg_EventTable[36] = {
    /* Index    DtcTableIdx  FreezeFrameTableStdFFIdx        Referable Keys */
  { /*     0 */          1u,                       2u },  /* [#EVENT_INVALID, Satellite#0] */
  { /*     1 */          1u,                       2u },  /* [DTC_0x402011, Satellite#0] */
  { /*     2 */          2u,                       1u },  /* [DTC_0x403a13, Satellite#0] */
  { /*     3 */          3u,                       1u },  /* [DTC_0x403a21, Satellite#0] */
  { /*     4 */          4u,                       1u },  /* [DTC_0x403a22, Satellite#0] */
  { /*     5 */          5u,                       2u },  /* [DTC_0x402012, Satellite#0] */
  { /*     6 */          6u,                       1u },  /* [DTC_0x402013, Satellite#0] */
  { /*     7 */          7u,                       1u },  /* [DTC_0x402025, Satellite#0] */
  { /*     8 */          8u,                       1u },  /* [DTC_0x403113, Satellite#0] */
  { /*     9 */          9u,                       1u },  /* [DTC_0x403121, Satellite#0] */
  { /*    10 */         10u,                       1u },  /* [DTC_0x403122, Satellite#0] */
  { /*    11 */         11u,                       1u },  /* [DTC_0x403413, Satellite#0] */
  { /*    12 */         12u,                       1u },  /* [DTC_0x403421, Satellite#0] */
  { /*    13 */         13u,                       1u },  /* [DTC_0x403422, Satellite#0] */
  { /*    14 */         14u,                       1u },  /* [DTC_0x403713, Satellite#0] */
  { /*    15 */         15u,                       1u },  /* [DTC_0x403721, Satellite#0] */
  { /*    16 */         16u,                       1u },  /* [DTC_0x403722, Satellite#0] */
  { /*    17 */         17u,                       1u },  /* [DTC_0x404011, Satellite#0] */
  { /*    18 */         18u,                       1u },  /* [DTC_0x404012, Satellite#0] */
  { /*    19 */         19u,                       1u },  /* [DTC_0x404013, Satellite#0] */
  { /*    20 */         20u,                       1u },  /* [DTC_0x404211, Satellite#0] */
  { /*    21 */         21u,                       1u },  /* [DTC_0x404212, Satellite#0] */
  { /*    22 */         22u,                       1u },  /* [DTC_0x404213, Satellite#0] */
  { /*    23 */         23u,                       1u },  /* [DTC_0x404421, Satellite#0] */
  { /*    24 */         24u,                       1u },  /* [DTC_0x404422, Satellite#0] */
  { /*    25 */         25u,                       1u },  /* [DTC_0x404428, Satellite#0] */
  { /*    26 */         26u,                       1u },  /* [DTC_0x406221, Satellite#0] */
  { /*    27 */         27u,                       1u },  /* [DTC_0x406222, Satellite#0] */
  { /*    28 */         28u,                       1u },  /* [DTC_0x406225, Satellite#0] */
  { /*    29 */         29u,                       1u },  /* [DTC_0x406321, Satellite#0] */
  { /*    30 */         30u,                       1u },  /* [DTC_0x406322, Satellite#0] */
  { /*    31 */         31u,                       1u },  /* [DTC_0x406325, Satellite#0] */
  { /*    32 */         32u,                       1u },  /* [DTC_0x401001, Satellite#0] */
  { /*    33 */         33u,                       1u },  /* [DTC_0x401003, Satellite#0] */
  { /*    34 */         34u,                       1u },  /* [DTC_0x402001, Satellite#0] */
  { /*    35 */         35u,                       1u }   /* [DTC_0x403001, Satellite#0] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_ExtendedDataTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_ExtendedDataTable
  \details
  Element                                   Description
  DataCollectionTableEdr2CollIndEndIdx      the end index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableEdr2CollInd
  DataCollectionTableEdr2CollIndStartIdx    the start index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableEdr2CollInd
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_ExtendedDataTableType, DEM_CONST) Dem_Cfg_ExtendedDataTable[2] = {
    /* Index    DataCollectionTableEdr2CollIndEndIdx                                DataCollectionTableEdr2CollIndStartIdx                                      Referable Keys */
  { /*     0 */ DEM_CFG_NO_DATACOLLECTIONTABLEEDR2COLLINDENDIDXOFEXTENDEDDATATABLE, DEM_CFG_NO_DATACOLLECTIONTABLEEDR2COLLINDSTARTIDXOFEXTENDEDDATATABLE },  /* [#NoExtendedDataRecordConfigured] */
  { /*     1 */                                                                 3u,                                                                   0u }   /* [#ExtendedDataClass_bc718b7c, #EVENT_INVALID, DTC_0x402011, DTC_0x403a13, DTC_0x403a21, DTC_0x403a22, DTC_0x402012, DTC_0x402013, DTC_0x402025, DTC_0x403113, DTC_0x403121, DTC_0x403122, DTC_0x403413, DTC_0x403421, DTC_0x403422, DTC_0x403713, DTC_0x403721, DTC_0x403722, DTC_0x404011, DTC_0x404012, DTC_0x404013, DTC_0x404211, DTC_0x404212, DTC_0x404213, DTC_0x404421, DTC_0x404422, DTC_0x404428, DTC_0x406221, DTC_0x406222, DTC_0x406225, DTC_0x406321, DTC_0x406322, DTC_0x406325, DTC_0x401001, DTC_0x401003, DTC_0x402001, DTC_0x403001] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_FreezeFrameNumTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_FreezeFrameNumTable
  \details
  Element     Description
  FFUpdate
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_FreezeFrameNumTableType, DEM_CONST) Dem_Cfg_FreezeFrameNumTable[2] = {
    /* Index    FFUpdate        Referable Keys */
  { /*     0 */    FALSE },  /* [calcFFRecNumClass_02, #EVENT_INVALID, DTC_0x402011, DTC_0x403a13, DTC_0x403a21, DTC_0x403a22, DTC_0x402012, DTC_0x402013, DTC_0x402025, DTC_0x403113, DTC_0x403121, DTC_0x403122, DTC_0x403413, DTC_0x403421, DTC_0x403422, DTC_0x403713, DTC_0x403721, DTC_0x403722, DTC_0x404011, DTC_0x404012, DTC_0x404013, DTC_0x404211, DTC_0x404212, DTC_0x404213, DTC_0x404421, DTC_0x404422, DTC_0x404428, DTC_0x406221, DTC_0x406222, DTC_0x406225, DTC_0x406321, DTC_0x406322, DTC_0x406325, DTC_0x401001, DTC_0x401003, DTC_0x402001, DTC_0x403001] */
  { /*     1 */     TRUE }   /* [calcFFRecNumClass_02, #EVENT_INVALID, DTC_0x402011, DTC_0x403a13, DTC_0x403a21, DTC_0x403a22, DTC_0x402012, DTC_0x402013, DTC_0x402025, DTC_0x403113, DTC_0x403121, DTC_0x403122, DTC_0x403413, DTC_0x403421, DTC_0x403422, DTC_0x403713, DTC_0x403721, DTC_0x403722, DTC_0x404011, DTC_0x404012, DTC_0x404013, DTC_0x404211, DTC_0x404212, DTC_0x404213, DTC_0x404421, DTC_0x404422, DTC_0x404428, DTC_0x406221, DTC_0x406222, DTC_0x406225, DTC_0x406321, DTC_0x406322, DTC_0x406325, DTC_0x401001, DTC_0x401003, DTC_0x402001, DTC_0x403001] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_FreezeFrameTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_FreezeFrameTable
  \details
  Element                                   Description
  DataCollectionTableFfm2CollIndEndIdx      the end index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableFfm2CollInd
  DataCollectionTableFfm2CollIndStartIdx    the start index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableFfm2CollInd
  RecordSize                                Summarized size of did data that is stored in Dem_Cfg_PrimaryEntryType.SnapshotData[][] (i.e. typically without size of dids containing internal data elements).
  RecordSizeUds                             Summarized size of did data, did numbers and snapshot header (i.e. dynamical payload size of the uds response message).
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_FreezeFrameTableType, DEM_CONST) Dem_Cfg_FreezeFrameTable[3] = {
    /* Index    DataCollectionTableFfm2CollIndEndIdx                               DataCollectionTableFfm2CollIndStartIdx                               RecordSize  RecordSizeUds        Referable Keys */
  { /*     0 */ DEM_CFG_NO_DATACOLLECTIONTABLEFFM2COLLINDENDIDXOFFREEZEFRAMETABLE, DEM_CFG_NO_DATACOLLECTIONTABLEFFM2COLLINDSTARTIDXOFFREEZEFRAMETABLE,         0u,            0u },  /* [#NoFreezeFrameConfigured] */
  { /*     1 */                                                                2u,                                                                  0u,        17u,           23u },  /* [#FreezeFrameClass_226af9a2, DTC_0x403a13, DTC_0x403a21, DTC_0x403a22, DTC_0x402013, DTC_0x402025, DTC_0x403113, DTC_0x403121, DTC_0x403122, DTC_0x403413, DTC_0x403421, DTC_0x403422, DTC_0x403713, DTC_0x403721, DTC_0x403722, DTC_0x404011, DTC_0x404012, DTC_0x404013, DTC_0x404211, DTC_0x404212, DTC_0x404213, DTC_0x404421, DTC_0x404422, DTC_0x404428, DTC_0x406221, DTC_0x406222, DTC_0x406225, DTC_0x406321, DTC_0x406322, DTC_0x406325, DTC_0x401001, DTC_0x401003, DTC_0x402001, DTC_0x403001] */
  { /*     2 */                                                                5u,                                                                  2u,        18u,           26u }   /* [#FreezeFrameClass_d4213761, #EVENT_INVALID, DTC_0x402011, DTC_0x402012] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryBlockIdToMemoryEntryId
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryBlockIdToMemoryEntryId
  \brief  The array contains these items: Admin, Status, 8 * Primary
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_MemoryEntryHandleType, DEM_CONST) Dem_Cfg_MemoryBlockIdToMemoryEntryId[10] = {
  /* Index     MemoryBlockIdToMemoryEntryId        Comment */
  /*     0 */ DEM_MEMORYENTRY_HANDLE_INVALID ,  /* [__INVALID__CONFIG__] */
  /*     1 */ DEM_MEMORYENTRY_HANDLE_INVALID ,  /* [__INVALID__CONFIG__] */
  /*     2 */ 0u                             ,  /* [__INVALID__CONFIG__] */
  /*     3 */ 1u                             ,  /* [__INVALID__CONFIG__] */
  /*     4 */ 2u                             ,  /* [__INVALID__CONFIG__] */
  /*     5 */ 3u                             ,  /* [__INVALID__CONFIG__] */
  /*     6 */ 4u                             ,  /* [__INVALID__CONFIG__] */
  /*     7 */ 5u                             ,  /* [__INVALID__CONFIG__] */
  /*     8 */ 6u                             ,  /* [__INVALID__CONFIG__] */
  /*     9 */ 7u                                /* [__INVALID__CONFIG__] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryDataPtr
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryDataPtr
  \brief  The array contains these items: Admin, Status, 8 * Primary
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_NvDataPtrType, DEM_CONST) Dem_Cfg_MemoryDataPtr[10] = {
  /* Index     MemoryDataPtr                                                                                  Comment */
  /*     0 */ (Dem_NvDataPtrType) &Dem_Cfg_GetAdminData()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     1 */ (Dem_NvDataPtrType) &Dem_Cfg_GetStatusData()       /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     2 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_0()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     3 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_1()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     4 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_2()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     5 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_3()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     6 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_4()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     7 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_5()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     8 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_6()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     9 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_7()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */   /* [__INVALID__CONFIG__] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryDataSize
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryDataSize
  \brief  The array contains these items: Admin, Status, 8 * Primary
*/ 
#define DEM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_MemoryDataSizeType, DEM_CONST) Dem_Cfg_MemoryDataSize[10] = {
  /* Index     MemoryDataSize                                                        Comment */
  /*     0 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetAdminData())      ,  /* [__INVALID__CONFIG__] */
  /*     1 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetStatusData())     ,  /* [__INVALID__CONFIG__] */
  /*     2 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_0()) ,  /* [__INVALID__CONFIG__] */
  /*     3 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_1()) ,  /* [__INVALID__CONFIG__] */
  /*     4 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_2()) ,  /* [__INVALID__CONFIG__] */
  /*     5 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_3()) ,  /* [__INVALID__CONFIG__] */
  /*     6 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_4()) ,  /* [__INVALID__CONFIG__] */
  /*     7 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_5()) ,  /* [__INVALID__CONFIG__] */
  /*     8 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_6()) ,  /* [__INVALID__CONFIG__] */
  /*     9 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_7())    /* [__INVALID__CONFIG__] */
};
#define DEM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryEntry
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryEntry
  \brief  The array contains these items: 8 * Primary, ReadoutBuffer; size = DEM_CFG_GLOBAL_PRIMARY_SIZE + DEM_CFG_GLOBAL_SECONDARY_SIZE + DEM_CFG_NUMBER_OF_READOUTBUFFERS
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_SharedMemoryEntryPtrType, DEM_CONST) Dem_Cfg_MemoryEntry[9] = {
  /* Index     MemoryEntry                                                                     Comment */
  /*     0 */ &Dem_Cfg_GetPrimaryEntry_0()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     1 */ &Dem_Cfg_GetPrimaryEntry_1()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     2 */ &Dem_Cfg_GetPrimaryEntry_2()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     3 */ &Dem_Cfg_GetPrimaryEntry_3()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     4 */ &Dem_Cfg_GetPrimaryEntry_4()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     5 */ &Dem_Cfg_GetPrimaryEntry_5()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     6 */ &Dem_Cfg_GetPrimaryEntry_6()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     7 */ &Dem_Cfg_GetPrimaryEntry_7()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     8 */ &Dem_Cfg_GetReadoutBuffer(0).Data   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */   /* [Dem_Cfg_ReadoutBuffer[0].Data] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryEntryInit
**********************************************************************************************************************/
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_PrimaryEntryType, DEM_CONST) Dem_Cfg_MemoryEntryInit = { 0 };
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_TimeSeriesEntryInit
**********************************************************************************************************************/
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_TimeSeriesEntryType, DEM_CONST) Dem_Cfg_TimeSeriesEntryInit = { 0 };
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_AdminData
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_AdminDataType, DEM_NVM_DATA_NOINIT) Dem_Cfg_AdminData;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_ClearDTCTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_ClearDTCTable
  \brief  size = DEM_CFG_NUMBER_OF_CLEARDTCS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_ClearDTC_DataType, DEM_VAR_NOINIT) Dem_Cfg_ClearDTCTable[1];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_CommitBuffer
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_CommitBufferType, DEM_VAR_NOINIT) Dem_Cfg_CommitBuffer;  /* PRQA S 0759 */ /* MD_MSR_18.4 */
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DTCSelectorTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DTCSelectorTable
  \brief  size = DEM_CFG_NUMBER_OF_DTCSELECTORS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_DTCSelector_DataType, DEM_VAR_NOINIT) Dem_Cfg_DTCSelectorTable[1];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EnableConditionGroupCounter
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EnableConditionGroupCounter
  \brief  (DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_ON) or there are internal EnableConditions. Table index: Condition group number. Table value: count of conditions in state 'enable'.
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_EnableConditionGroupCounterType, DEM_VAR_NOINIT) Dem_Cfg_EnableConditionGroupCounter[1];
  /* Index        Referable Keys  */
  /*     0 */  /* [##NoEnableConditionGroupConfigured, __Internal_ControlDtcSetting] */

#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EnableConditionGroupState
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EnableConditionGroupState
  \brief  (DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_ON) or there are internal EnableConditions. Table index: Condition group number. Table value: count of conditions in state 'enable'.
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Dem_Cfg_EnableConditionGroupStateType, DEM_VAR_NOINIT) Dem_Cfg_EnableConditionGroupState[1];
  /* Index        Referable Keys  */
  /*     0 */  /* [##NoEnableConditionGroupConfigured, __Internal_ControlDtcSetting] */

#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EnableConditionState
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EnableConditionState
  \brief  (DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_ON) or there are internal EnableConditions. Table index: Condition ID. Table value: current condition state '0' disable, '1' enable.
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_EnableConditionStateType, DEM_VAR_NOINIT) Dem_Cfg_EnableConditionState[1];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventDebounceValue
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventDebounceValue
  \brief  size = DEM_G_NUMBER_OF_EVENTS
*/ 
#define DEM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Dem_Cfg_EventDebounceValueType, DEM_VAR_NOINIT) Dem_Cfg_EventDebounceValue[36];
  /* Index        Referable Keys  */
  /*     0 */  /* [#EVENT_INVALID, Satellite#0] */
  /*     1 */  /* [DTC_0x402011, Satellite#0] */
  /*     2 */  /* [DTC_0x403a13, Satellite#0] */
  /*     3 */  /* [DTC_0x403a21, Satellite#0] */
  /*     4 */  /* [DTC_0x403a22, Satellite#0] */
  /*     5 */  /* [DTC_0x402012, Satellite#0] */
  /*     6 */  /* [DTC_0x402013, Satellite#0] */
  /*     7 */  /* [DTC_0x402025, Satellite#0] */
  /*     8 */  /* [DTC_0x403113, Satellite#0] */
  /*     9 */  /* [DTC_0x403121, Satellite#0] */
  /*    10 */  /* [DTC_0x403122, Satellite#0] */
  /*    11 */  /* [DTC_0x403413, Satellite#0] */
  /*    12 */  /* [DTC_0x403421, Satellite#0] */
  /*    13 */  /* [DTC_0x403422, Satellite#0] */
  /*    14 */  /* [DTC_0x403713, Satellite#0] */
  /*    15 */  /* [DTC_0x403721, Satellite#0] */
  /*    16 */  /* [DTC_0x403722, Satellite#0] */
  /*    17 */  /* [DTC_0x404011, Satellite#0] */
  /*    18 */  /* [DTC_0x404012, Satellite#0] */
  /*    19 */  /* [DTC_0x404013, Satellite#0] */
  /*    20 */  /* [DTC_0x404211, Satellite#0] */
  /*    21 */  /* [DTC_0x404212, Satellite#0] */
  /*    22 */  /* [DTC_0x404213, Satellite#0] */
  /*    23 */  /* [DTC_0x404421, Satellite#0] */
  /*    24 */  /* [DTC_0x404422, Satellite#0] */
  /*    25 */  /* [DTC_0x404428, Satellite#0] */
  /*    26 */  /* [DTC_0x406221, Satellite#0] */
  /*    27 */  /* [DTC_0x406222, Satellite#0] */
  /*    28 */  /* [DTC_0x406225, Satellite#0] */
  /*    29 */  /* [DTC_0x406321, Satellite#0] */
  /*    30 */  /* [DTC_0x406322, Satellite#0] */
  /*    31 */  /* [DTC_0x406325, Satellite#0] */
  /*    32 */  /* [DTC_0x401001, Satellite#0] */
  /*    33 */  /* [DTC_0x401003, Satellite#0] */
  /*    34 */  /* [DTC_0x402001, Satellite#0] */
  /*    35 */  /* [DTC_0x403001, Satellite#0] */

#define DEM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventInternalStatus
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventInternalStatus
  \brief  size = DEM_G_NUMBER_OF_EVENTS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Dem_Event_InternalStatusType, DEM_VAR_NOINIT) Dem_Cfg_EventInternalStatus[36];
  /* Index        Referable Keys  */
  /*     0 */  /* [#EVENT_INVALID, Satellite#0] */
  /*     1 */  /* [DTC_0x402011, Satellite#0] */
  /*     2 */  /* [DTC_0x403a13, Satellite#0] */
  /*     3 */  /* [DTC_0x403a21, Satellite#0] */
  /*     4 */  /* [DTC_0x403a22, Satellite#0] */
  /*     5 */  /* [DTC_0x402012, Satellite#0] */
  /*     6 */  /* [DTC_0x402013, Satellite#0] */
  /*     7 */  /* [DTC_0x402025, Satellite#0] */
  /*     8 */  /* [DTC_0x403113, Satellite#0] */
  /*     9 */  /* [DTC_0x403121, Satellite#0] */
  /*    10 */  /* [DTC_0x403122, Satellite#0] */
  /*    11 */  /* [DTC_0x403413, Satellite#0] */
  /*    12 */  /* [DTC_0x403421, Satellite#0] */
  /*    13 */  /* [DTC_0x403422, Satellite#0] */
  /*    14 */  /* [DTC_0x403713, Satellite#0] */
  /*    15 */  /* [DTC_0x403721, Satellite#0] */
  /*    16 */  /* [DTC_0x403722, Satellite#0] */
  /*    17 */  /* [DTC_0x404011, Satellite#0] */
  /*    18 */  /* [DTC_0x404012, Satellite#0] */
  /*    19 */  /* [DTC_0x404013, Satellite#0] */
  /*    20 */  /* [DTC_0x404211, Satellite#0] */
  /*    21 */  /* [DTC_0x404212, Satellite#0] */
  /*    22 */  /* [DTC_0x404213, Satellite#0] */
  /*    23 */  /* [DTC_0x404421, Satellite#0] */
  /*    24 */  /* [DTC_0x404422, Satellite#0] */
  /*    25 */  /* [DTC_0x404428, Satellite#0] */
  /*    26 */  /* [DTC_0x406221, Satellite#0] */
  /*    27 */  /* [DTC_0x406222, Satellite#0] */
  /*    28 */  /* [DTC_0x406225, Satellite#0] */
  /*    29 */  /* [DTC_0x406321, Satellite#0] */
  /*    30 */  /* [DTC_0x406322, Satellite#0] */
  /*    31 */  /* [DTC_0x406325, Satellite#0] */
  /*    32 */  /* [DTC_0x401001, Satellite#0] */
  /*    33 */  /* [DTC_0x401003, Satellite#0] */
  /*    34 */  /* [DTC_0x402001, Satellite#0] */
  /*    35 */  /* [DTC_0x403001, Satellite#0] */

#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_FilterInfoTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_FilterInfoTable
  \brief  size = DEM_CFG_NUMBER_OF_FILTER
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_FilterData_InfoType, DEM_VAR_NOINIT) Dem_Cfg_FilterInfoTable[1];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_FilterReportedEvents
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_FilterReportedEvents
  \brief  size = ceiling( DEM_G_NUMBER_OF_EVENTS / 8 )
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_FilterReportedEventsType, DEM_VAR_NOINIT) Dem_Cfg_FilterReportedEvents[5];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_FreezeFrameIteratorTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_FreezeFrameIteratorTable
  \brief  size = DEM_CFG_NUMBER_OF_FREEZEFRAMEITERATORS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_FreezeFrameIterator_FilterType, DEM_VAR_NOINIT) Dem_Cfg_FreezeFrameIteratorTable[1];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryCommitNumber
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryCommitNumber
  \brief  The array contains these items: Admin, Status, 8 * Primary
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Dem_Cfg_MemoryCommitNumberType, DEM_VAR_NOINIT) Dem_Cfg_MemoryCommitNumber[10];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryStatus
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryStatus
  \brief  The array contains these items: Admin, Status, 8 * Primary
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_MemoryStatusType, DEM_VAR_NOINIT) Dem_Cfg_MemoryStatus[10];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryChronology
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_PrimaryChronology
  \brief  size = DEM_CFG_GLOBAL_PRIMARY_SIZE
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_MemoryIndexType, DEM_VAR_NOINIT) Dem_Cfg_PrimaryChronology[8];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_0
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_0;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_1
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_1;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_2
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_2;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_3
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_3;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_4
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_4;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_5
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_5;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_6
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_6;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_7
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_7;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_ReadoutBuffer
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_ReadoutBufferEntryType, DEM_VAR_NOINIT) Dem_Cfg_ReadoutBuffer[1];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_ReportedEventsOfFilter
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_ReportedEventsOfFilter
  \brief  size = DEM_CFG_NUMBER_OF_FILTER
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_ReportedEventsType, DEM_VAR_NOINIT) Dem_Cfg_ReportedEventsOfFilter[1];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SatelliteInfo0
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_SatelliteInfo0
  \brief  Buffer for satellite data on OsApplication "0"
*/ 
#define DEM_START_SEC_0_VAR_ZERO_INIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_SatelliteInfoType0, DEM_VAR_ZERO_INIT) Dem_Cfg_SatelliteInfo0 = {0uL};
#define DEM_STOP_SEC_0_VAR_ZERO_INIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_StatusData
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_StatusDataType, DEM_NVM_DATA_NOINIT) Dem_Cfg_StatusData;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/



/**********************************************************************************************************************
  LOCAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/



/**********************************************************************************************************************
  END OF FILE: Dem_Lcfg.c     [Vector, VARIANT-PRE-COMPILE, 17.04.00.112616]
**********************************************************************************************************************/

