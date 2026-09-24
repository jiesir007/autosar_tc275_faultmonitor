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
 *            Module: Com
 *           Program: MSR_Vector_SLP4
 *          Customer: China FAW Group Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC297TA
 *    License Scope : The usage is restricted to CBD1600956_D01
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Com_Lcfg.c
 *   Generation Time: 2024-02-25 12:42:33
 *           Project: TC27x - Version 1.0
 *          Delivery: CBD1600956_D01
 *      Tool Version: DaVinci Configurator  5.20.35
 *
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
  MISRA / PClint JUSTIFICATIONS
**********************************************************************************************************************/
/* PRQA  S 1881 EOF */ /* MD_MSR_AutosarBoolean */
/* PRQA  S 1882 EOF */ /* MD_MSR_AutosarBoolean */

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#define V_IL_ASRCOMCFG5_LCFG_SOURCE

#include "Com.h"

#include "Com_Lcfg.h"


#include "SchM_Com.h"

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
  SECTION: LOCAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA PROTOTYPES
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
  Com_ConstValueUInt16
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueUInt16
  \brief  Optimized array of commonly used values like initial or invalid values. (UINT16)
*/ 
#define COM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_ConstValueUInt16Type, COM_CONST) Com_ConstValueUInt16[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     ConstValueUInt16      Referable Keys */
  /*     0 */           0x0000u   /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x302_oSupE_Function_1_oDBCNetWork_28664efe_Rx/E_Sig_0x302_Used_1_oSupE_Function_1_oDBCNetWork_5fb2dd52_RxInitValue] */
};
#define COM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueUInt8
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueUInt8
  \brief  Optimized array of commonly used values like initial or invalid values. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_ConstValueUInt8Type, COM_CONST) Com_ConstValueUInt8[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     ConstValueUInt8      Referable Keys */
  /*     0 */            0x00u,  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/SupD_Checksum_0x300_oSupD_Led_Control_oDBCNetWork_2c493488_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/SupD_Counter_0x300_oSupD_Led_Control_oDBCNetWork_b943cd4b_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x301_oSupD_Button_Control_oDBCNetWork_188cbd42_Rx/D_Button1_Control_oSupD_Button_Control_oDBCNetWork_fc1efec2_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x301_oSupD_Button_Control_oDBCNetWork_188cbd42_Rx/D_Button2_Control_oSupD_Button_Control_oDBCNetWork_c42575b1_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x301_oSupD_Button_Control_oDBCNetWork_188cbd42_Rx/D_Button3_Control_oSupD_Button_Control_oDBCNetWork_651cf15f_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x301_oSupD_Button_Control_oDBCNetWork_188cbd42_Rx/D_Button4_Control_oSupD_Button_Control_oDBCNetWork_b4526357_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x302_oSupE_Function_1_oDBCNetWork_28664efe_Rx/E_Sig_0x302_Used_2_oSupE_Function_1_oDBCNetWork_1b13f84a_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x302_oSupE_Function_1_oDBCNetWork_28664efe_Rx/E_Sig_0x302_Used_3_oSupE_Function_1_oDBCNetWork_27731b42_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/D_Led1_CtrlMode_oSupD_Led_CtrlMode_oDBCNetWork_e2fdf3e9_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/D_Led2_CtrlMode_oSupD_Led_CtrlMode_oDBCNetWork_01b4444b_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/D_Led3_CtrlMode_oSupD_Led_CtrlMode_oDBCNetWork_e9a3d4ea_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/D_Led4_CtrlMode_oSupD_Led_CtrlMode_oDBCNetWork_1c562d4e_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/SupD_Checksum_0x304_oSupD_Led_CtrlMode_oDBCNetWork_984004db_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/SupD_Counter_0x304_oSupD_Led_CtrlMode_oDBCNetWork_9ab89d28_RxInitValue] */
  /*     1 */            0x02u   /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/D_Led1_Control_oSupD_Led_Control_oDBCNetWork_34bc1d83_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/D_Led2_Control_oSupD_Led_Control_oDBCNetWork_e7270178_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/D_Led3_Control_oSupD_Led_Control_oDBCNetWork_a9ae0ad1_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/D_Led4_Control_oSupD_Led_Control_oDBCNetWork_9b603ecf_RxInitValue] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_PduGrpVector
**********************************************************************************************************************/
/** 
  \var    Com_PduGrpVector
  \brief  Contains an I-PDU-Group vector for each I-PDU, mapping the I-PDU to the corresponding I-PDU-Groups.
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_PduGrpVectorType, COM_CONST) Com_PduGrpVector[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     PduGrpVector      Referable Keys */
  /*     0 */         0x02u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Angle_oDBCNetWork_afae1504_Tx, /ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx, /ActiveEcuC/Com/ComConfig/SupF_ComError_oDBCNetWork_f4af97d3_Tx, /ActiveEcuC/Com/ComConfig/SupF_Function_1_oDBCNetWork_003f31ca_Tx, /ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx, /ActiveEcuC/Com/ComConfig/SupF_PowerMode_oDBCNetWork_c1c74254_Tx] */
  /*     1 */         0x01u   /* [/ActiveEcuC/Com/ComConfig/SupD_Button_Control_oDBCNetWork_09fc4743_Rx, /ActiveEcuC/Com/ComConfig/SupD_Led_Control_oDBCNetWork_80cdf82b_Rx, /ActiveEcuC/Com/ComConfig/SupD_Led_CtrlMode_oDBCNetWork_a6b9686f_Rx, /ActiveEcuC/Com/ComConfig/SupE_Function_1_oDBCNetWork_582198e2_Rx] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxAccessInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxAccessInfo
  \brief  Contains all signal layout information necessary for signal access within an I-PDU.
  \details
  Element                   Description
  InitValueUsed             TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
  ApplType                  Application data type.
  BitLength                 Bit length of the signal or group signal.
  BitPosition               Little endian bit position of the signal or group signal within the I-PDU.
  BusAcc                    BUS access algorithm for signal or group signal packing / un-packing.
  ByteLength                Byte length of the signal or group signal.
  BytePosition              Little endian byte position of the signal or group signal within the I-PDU.
  InitValueIdx              the index of the 0:1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
  RxPduInfoIdx              the index of the 1:1 relation pointing to Com_RxPduInfo
  ShdBufferIdx              the index of the 0:1 relation pointing to Com_RxSigBufferUInt8,Com_RxSigBufferUInt16,Com_RxSigBufferUInt32,Com_RxSigBufferUInt64,Com_RxSigBufferZeroBit,Com_RxSigBufferSInt8,Com_RxSigBufferSInt16,Com_RxSigBufferSInt32,Com_RxSigBufferSInt64,Com_RxSigBufferFloat32,Com_RxSigBufferFloat64
  StartByteInPduPosition    Start Byte position of the signal or group signal within the I-PDU.
  TmpBufferIdx              the index of the 0:1 relation pointing to Com_TmpRxShdBufferUInt8,Com_TmpRxShdBufferUInt16,Com_TmpRxShdBufferUInt32,Com_TmpRxShdBufferUInt64,Com_TmpRxShdBufferSInt8,Com_TmpRxShdBufferSInt16,Com_TmpRxShdBufferSInt32,Com_TmpRxShdBufferSInt64,Com_TmpRxShdBufferFloat32,Com_TmpRxShdBufferFloat64
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxAccessInfoType, COM_CONST) Com_RxAccessInfo[19] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    InitValueUsed  ApplType                           BitLength  BitPosition  BusAcc                             ByteLength  BytePosition  InitValueIdx  RxPduInfoIdx  ShdBufferIdx  StartByteInPduPosition  TmpBufferIdx        Referable Keys */
  { /*     0 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,          8u,     COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           1u,           1u,           1u,           1u,                     1u,           4u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/D_Led1_Control_oSupD_Led_Control_oDBCNetWork_34bc1d83_Rx, /ActiveEcuC/Com/ComConfig/SupD_Led_Control_oDBCNetWork_80cdf82b_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx] */
  { /*     1 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,         10u,     COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           1u,           1u,           1u,           3u,                     1u,           2u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/D_Led2_Control_oSupD_Led_Control_oDBCNetWork_e7270178_Rx, /ActiveEcuC/Com/ComConfig/SupD_Led_Control_oDBCNetWork_80cdf82b_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx] */
  { /*     2 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,         12u,     COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           1u,           1u,           1u,           5u,                     1u,           0u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/D_Led3_Control_oSupD_Led_Control_oDBCNetWork_a9ae0ad1_Rx, /ActiveEcuC/Com/ComConfig/SupD_Led_Control_oDBCNetWork_80cdf82b_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx] */
  { /*     3 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,         14u,     COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           1u,           1u,           1u,           7u,                     1u,           1u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/D_Led4_Control_oSupD_Led_Control_oDBCNetWork_9b603ecf_Rx, /ActiveEcuC/Com/ComConfig/SupD_Led_Control_oDBCNetWork_80cdf82b_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx] */
  { /*     4 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,          0u,     COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           0u,           0u,           1u,           9u,                     0u,           3u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/SupD_Checksum_0x300_oSupD_Led_Control_oDBCNetWork_2c493488_Rx, /ActiveEcuC/Com/ComConfig/SupD_Led_Control_oDBCNetWork_80cdf82b_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx] */
  { /*     5 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,         56u,     COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           7u,           0u,           1u,          11u,                     7u,           5u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/SupD_Counter_0x300_oSupD_Led_Control_oDBCNetWork_b943cd4b_Rx, /ActiveEcuC/Com/ComConfig/SupD_Led_Control_oDBCNetWork_80cdf82b_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx] */
  { /*     6 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,          0u,     COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           0u,           0u,           0u,          13u,                     0u,           2u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x301_oSupD_Button_Control_oDBCNetWork_188cbd42_Rx/D_Button1_Control_oSupD_Button_Control_oDBCNetWork_fc1efec2_Rx, /ActiveEcuC/Com/ComConfig/SupD_Button_Control_oDBCNetWork_09fc4743_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x301_oSupD_Button_Control_oDBCNetWork_188cbd42_Rx] */
  { /*     7 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,          8u,     COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           1u,           0u,           0u,          15u,                     1u,           1u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x301_oSupD_Button_Control_oDBCNetWork_188cbd42_Rx/D_Button2_Control_oSupD_Button_Control_oDBCNetWork_c42575b1_Rx, /ActiveEcuC/Com/ComConfig/SupD_Button_Control_oDBCNetWork_09fc4743_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x301_oSupD_Button_Control_oDBCNetWork_188cbd42_Rx] */
  { /*     8 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,         16u,     COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           0u,           0u,          17u,                     2u,           0u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x301_oSupD_Button_Control_oDBCNetWork_188cbd42_Rx/D_Button3_Control_oSupD_Button_Control_oDBCNetWork_651cf15f_Rx, /ActiveEcuC/Com/ComConfig/SupD_Button_Control_oDBCNetWork_09fc4743_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x301_oSupD_Button_Control_oDBCNetWork_188cbd42_Rx] */
  { /*     9 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,         24u,     COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           3u,           0u,           0u,          19u,                     3u,           3u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x301_oSupD_Button_Control_oDBCNetWork_188cbd42_Rx/D_Button4_Control_oSupD_Button_Control_oDBCNetWork_b4526357_Rx, /ActiveEcuC/Com/ComConfig/SupD_Button_Control_oDBCNetWork_09fc4743_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x301_oSupD_Button_Control_oDBCNetWork_188cbd42_Rx] */
  { /*    10 */          TRUE, COM_UINT16_APPLTYPEOFRXACCESSINFO,       16u,          8u, COM_NBYTE_SW_BUSACCOFRXACCESSINFO,         2u,           1u,           0u,           3u,           1u,                     0u,           0u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x302_oSupE_Function_1_oDBCNetWork_28664efe_Rx/E_Sig_0x302_Used_1_oSupE_Function_1_oDBCNetWork_5fb2dd52_Rx, /ActiveEcuC/Com/ComConfig/SupE_Function_1_oDBCNetWork_582198e2_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x302_oSupE_Function_1_oDBCNetWork_28664efe_Rx] */
  { /*    11 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         16u,     COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           2u,           0u,           3u,          21u,                     2u,           0u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x302_oSupE_Function_1_oDBCNetWork_28664efe_Rx/E_Sig_0x302_Used_2_oSupE_Function_1_oDBCNetWork_1b13f84a_Rx, /ActiveEcuC/Com/ComConfig/SupE_Function_1_oDBCNetWork_582198e2_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x302_oSupE_Function_1_oDBCNetWork_28664efe_Rx] */
  { /*    12 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         24u,     COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           3u,           0u,           3u,          23u,                     3u,           1u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x302_oSupE_Function_1_oDBCNetWork_28664efe_Rx/E_Sig_0x302_Used_3_oSupE_Function_1_oDBCNetWork_27731b42_Rx, /ActiveEcuC/Com/ComConfig/SupE_Function_1_oDBCNetWork_582198e2_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x302_oSupE_Function_1_oDBCNetWork_28664efe_Rx] */
  { /*    13 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,          8u,     COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           1u,           0u,           2u,          25u,                     1u,           0u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/D_Led1_CtrlMode_oSupD_Led_CtrlMode_oDBCNetWork_e2fdf3e9_Rx, /ActiveEcuC/Com/ComConfig/SupD_Led_CtrlMode_oDBCNetWork_a6b9686f_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx] */
  { /*    14 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,         16u,     COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           0u,           2u,          27u,                     2u,           1u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/D_Led2_CtrlMode_oSupD_Led_CtrlMode_oDBCNetWork_01b4444b_Rx, /ActiveEcuC/Com/ComConfig/SupD_Led_CtrlMode_oDBCNetWork_a6b9686f_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx] */
  { /*    15 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,         24u,     COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           3u,           0u,           2u,          29u,                     3u,           3u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/D_Led3_CtrlMode_oSupD_Led_CtrlMode_oDBCNetWork_e9a3d4ea_Rx, /ActiveEcuC/Com/ComConfig/SupD_Led_CtrlMode_oDBCNetWork_a6b9686f_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx] */
  { /*    16 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,         32u,     COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           4u,           0u,           2u,          31u,                     4u,           4u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/D_Led4_CtrlMode_oSupD_Led_CtrlMode_oDBCNetWork_1c562d4e_Rx, /ActiveEcuC/Com/ComConfig/SupD_Led_CtrlMode_oDBCNetWork_a6b9686f_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx] */
  { /*    17 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,          0u,     COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           0u,           0u,           2u,          33u,                     0u,           5u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/SupD_Checksum_0x304_oSupD_Led_CtrlMode_oDBCNetWork_984004db_Rx, /ActiveEcuC/Com/ComConfig/SupD_Led_CtrlMode_oDBCNetWork_a6b9686f_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx] */
  { /*    18 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,         56u,     COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           7u,           0u,           2u,          35u,                     7u,           2u }   /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/SupD_Counter_0x304_oSupD_Led_CtrlMode_oDBCNetWork_9ab89d28_Rx, /ActiveEcuC/Com/ComConfig/SupD_Led_CtrlMode_oDBCNetWork_a6b9686f_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxAccessInfoInd
**********************************************************************************************************************/
/** 
  \var    Com_RxAccessInfoInd
  \brief  the indexes of the 1:1 sorted relation pointing to Com_RxAccessInfo
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxAccessInfoIndType, COM_CONST) Com_RxAccessInfoInd[19] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     RxAccessInfoInd      Referable Keys */
  /*     0 */               6u,  /* [/ActiveEcuC/Com/ComConfig/SupD_Button_Control_oDBCNetWork_09fc4743_Rx] */
  /*     1 */               7u,  /* [/ActiveEcuC/Com/ComConfig/SupD_Button_Control_oDBCNetWork_09fc4743_Rx] */
  /*     2 */               8u,  /* [/ActiveEcuC/Com/ComConfig/SupD_Button_Control_oDBCNetWork_09fc4743_Rx] */
  /*     3 */               9u,  /* [/ActiveEcuC/Com/ComConfig/SupD_Button_Control_oDBCNetWork_09fc4743_Rx] */
  /*     4 */               0u,  /* [/ActiveEcuC/Com/ComConfig/SupD_Led_Control_oDBCNetWork_80cdf82b_Rx] */
  /*     5 */               1u,  /* [/ActiveEcuC/Com/ComConfig/SupD_Led_Control_oDBCNetWork_80cdf82b_Rx] */
  /*     6 */               2u,  /* [/ActiveEcuC/Com/ComConfig/SupD_Led_Control_oDBCNetWork_80cdf82b_Rx] */
  /*     7 */               3u,  /* [/ActiveEcuC/Com/ComConfig/SupD_Led_Control_oDBCNetWork_80cdf82b_Rx] */
  /*     8 */               4u,  /* [/ActiveEcuC/Com/ComConfig/SupD_Led_Control_oDBCNetWork_80cdf82b_Rx] */
  /*     9 */               5u,  /* [/ActiveEcuC/Com/ComConfig/SupD_Led_Control_oDBCNetWork_80cdf82b_Rx] */
  /*    10 */              13u,  /* [/ActiveEcuC/Com/ComConfig/SupD_Led_CtrlMode_oDBCNetWork_a6b9686f_Rx] */
  /*    11 */              14u,  /* [/ActiveEcuC/Com/ComConfig/SupD_Led_CtrlMode_oDBCNetWork_a6b9686f_Rx] */
  /*    12 */              15u,  /* [/ActiveEcuC/Com/ComConfig/SupD_Led_CtrlMode_oDBCNetWork_a6b9686f_Rx] */
  /*    13 */              16u,  /* [/ActiveEcuC/Com/ComConfig/SupD_Led_CtrlMode_oDBCNetWork_a6b9686f_Rx] */
  /*    14 */              17u,  /* [/ActiveEcuC/Com/ComConfig/SupD_Led_CtrlMode_oDBCNetWork_a6b9686f_Rx] */
  /*    15 */              18u,  /* [/ActiveEcuC/Com/ComConfig/SupD_Led_CtrlMode_oDBCNetWork_a6b9686f_Rx] */
  /*    16 */              10u,  /* [/ActiveEcuC/Com/ComConfig/SupE_Function_1_oDBCNetWork_582198e2_Rx] */
  /*    17 */              11u,  /* [/ActiveEcuC/Com/ComConfig/SupE_Function_1_oDBCNetWork_582198e2_Rx] */
  /*    18 */              12u   /* [/ActiveEcuC/Com/ComConfig/SupE_Function_1_oDBCNetWork_582198e2_Rx] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduGrpInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxPduGrpInfo
  \brief  Contains all I-PDU-Group relevant information for Rx I-PDUs.
  \details
  Element                 Description
  PduGrpVectorStartIdx    the start index of the 0:n relation pointing to Com_PduGrpVector
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxPduGrpInfoType, COM_CONST) Com_RxPduGrpInfo[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PduGrpVectorStartIdx */
  { /*     0 */                   1u },
  { /*     1 */                   1u },
  { /*     2 */                   1u },
  { /*     3 */                   1u }
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxPduInfo
  \brief  Contains all relevant common information for Rx I-PDUs.
  \details
  Element                    Description
  RxAccessInfoIndUsed        TRUE, if the 0:n relation has 1 relation pointing to Com_RxAccessInfoInd
  RxAccessInfoIndEndIdx      the end index of the 0:n relation pointing to Com_RxAccessInfoInd
  RxAccessInfoIndStartIdx    the start index of the 0:n relation pointing to Com_RxAccessInfoInd
  RxDefPduBufferStartIdx     the start index of the 0:n relation pointing to Com_RxDefPduBuffer
  Type                       Defines whether rx Pdu is a NORMAL or TP IPdu.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxPduInfoType, COM_CONST) Com_RxPduInfo[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RxAccessInfoIndUsed  RxAccessInfoIndEndIdx  RxAccessInfoIndStartIdx  RxDefPduBufferStartIdx  Type                              Referable Keys */
  { /*     0 */                TRUE,                    4u,                      0u,                     0u, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/SupD_Button_Control_oDBCNetWork_09fc4743_Rx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Rx_2e39ec3a] */
  { /*     1 */                TRUE,                   10u,                      4u,                     8u, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/SupD_Led_Control_oDBCNetWork_80cdf82b_Rx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Rx_2e39ec3a] */
  { /*     2 */                TRUE,                   16u,                     10u,                    16u, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/SupD_Led_CtrlMode_oDBCNetWork_a6b9686f_Rx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Rx_2e39ec3a] */
  { /*     3 */                TRUE,                   19u,                     16u,                    24u, COM_NORMAL_TYPEOFRXPDUINFO }   /* [/ActiveEcuC/Com/ComConfig/SupE_Function_1_oDBCNetWork_582198e2_Rx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Rx_2e39ec3a] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigGrpInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxSigGrpInfo
  \brief  Contains all relevant information for Rx signal groups.
  \details
  Element                          Description
  ShdBufferRequired            
  RxAccessInfoGrpSigIndEndIdx      the end index of the 0:n relation pointing to Com_RxAccessInfoGrpSigInd
  RxAccessInfoGrpSigIndStartIdx    the start index of the 0:n relation pointing to Com_RxAccessInfoGrpSigInd
  RxPduInfoIdx                     the index of the 1:1 relation pointing to Com_RxPduInfo
  StartBytePosition                Least significant byte position of first group signal within the ComIPdu.
  ValidDlc                         Minimum length of PDU required to completely receive the signal or signal group.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxSigGrpInfoType, COM_CONST) Com_RxSigGrpInfo[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    ShdBufferRequired  RxAccessInfoGrpSigIndEndIdx  RxAccessInfoGrpSigIndStartIdx  RxPduInfoIdx  StartBytePosition  ValidDlc        Referable Keys */
  { /*     0 */              TRUE,                          6u,                            0u,           1u,                0u,       8u },  /* [/ActiveEcuC/Com/ComConfig/SupD_Led_Control_oDBCNetWork_80cdf82b_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx] */
  { /*     1 */              TRUE,                         10u,                            6u,           0u,                0u,       4u },  /* [/ActiveEcuC/Com/ComConfig/SupD_Button_Control_oDBCNetWork_09fc4743_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x301_oSupD_Button_Control_oDBCNetWork_188cbd42_Rx] */
  { /*     2 */              TRUE,                         13u,                           10u,           3u,                0u,       4u },  /* [/ActiveEcuC/Com/ComConfig/SupE_Function_1_oDBCNetWork_582198e2_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x302_oSupE_Function_1_oDBCNetWork_28664efe_Rx] */
  { /*     3 */              TRUE,                         19u,                           13u,           2u,                0u,       8u }   /* [/ActiveEcuC/Com/ComConfig/SupD_Led_CtrlMode_oDBCNetWork_a6b9686f_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigGrpInfoInd
**********************************************************************************************************************/
/** 
  \var    Com_RxSigGrpInfoInd
  \brief  the indexes of the 1:1 sorted relation pointing to Com_RxSigGrpInfo
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxSigGrpInfoIndType, COM_CONST) Com_RxSigGrpInfoInd[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     RxSigGrpInfoInd      Referable Keys */
  /*     0 */               1u,  /* [/ActiveEcuC/Com/ComConfig/SupD_Button_Control_oDBCNetWork_09fc4743_Rx] */
  /*     1 */               0u,  /* [/ActiveEcuC/Com/ComConfig/SupD_Led_Control_oDBCNetWork_80cdf82b_Rx] */
  /*     2 */               3u,  /* [/ActiveEcuC/Com/ComConfig/SupD_Led_CtrlMode_oDBCNetWork_a6b9686f_Rx] */
  /*     3 */               2u   /* [/ActiveEcuC/Com/ComConfig/SupE_Function_1_oDBCNetWork_582198e2_Rx] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeFalse
**********************************************************************************************************************/
/** 
  \var    Com_TxModeFalse
  \brief  Contains all relevant information for transmission mode false.
  \details
  Element       Description
  Periodic      TRUE if transmission mode contains a cyclic part.
  TimePeriod    Cycle time factor.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxModeFalseType, COM_CONST) Com_TxModeFalse[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Periodic  TimePeriod        Referable Keys */
  { /*     0 */     TRUE,        20u },  /* [/ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx, /ActiveEcuC/Com/ComConfig/SupF_PowerMode_oDBCNetWork_c1c74254_Tx] */
  { /*     1 */     TRUE,         4u },  /* [/ActiveEcuC/Com/ComConfig/SupF_Function_1_oDBCNetWork_003f31ca_Tx] */
  { /*     2 */     TRUE,        10u },  /* [/ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx] */
  { /*     3 */     TRUE,         2u }   /* [/ActiveEcuC/Com/ComConfig/SupF_Angle_oDBCNetWork_afae1504_Tx, /ActiveEcuC/Com/ComConfig/SupF_ComError_oDBCNetWork_f4af97d3_Tx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxModeInfo
  \brief  Contains all relevant information for transmission mode handling.
  \details
  Element          Description
  InitMode         Initial transmission mode selector of the Tx I-PDU.
  TxModeTrueIdx    the index of the 1:1 relation pointing to Com_TxModeTrue
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxModeInfoType, COM_CONST) Com_TxModeInfo[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    InitMode  TxModeTrueIdx        Referable Keys */
  { /*     0 */     TRUE,            3u },  /* [/ActiveEcuC/Com/ComConfig/SupF_Angle_oDBCNetWork_afae1504_Tx] */
  { /*     1 */     TRUE,            2u },  /* [/ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx] */
  { /*     2 */     TRUE,            3u },  /* [/ActiveEcuC/Com/ComConfig/SupF_ComError_oDBCNetWork_f4af97d3_Tx] */
  { /*     3 */     TRUE,            1u },  /* [/ActiveEcuC/Com/ComConfig/SupF_Function_1_oDBCNetWork_003f31ca_Tx] */
  { /*     4 */     TRUE,            0u },  /* [/ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx] */
  { /*     5 */     TRUE,            0u }   /* [/ActiveEcuC/Com/ComConfig/SupF_PowerMode_oDBCNetWork_c1c74254_Tx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeTrue
**********************************************************************************************************************/
/** 
  \var    Com_TxModeTrue
  \brief  Contains all relevant information for transmission mode true.
  \details
  Element       Description
  Periodic      TRUE if transmission mode contains a cyclic part.
  RepCnt        Repetition count for replication of transmission requests plus one initial transmit.
  RepPeriod     Repetition period factor for replication of transmission requests.
  TimePeriod    Cycle time factor.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxModeTrueType, COM_CONST) Com_TxModeTrue[4] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Periodic  RepCnt  RepPeriod  TimePeriod        Referable Keys */
  { /*     0 */     TRUE,     0u,        0u,        20u },  /* [/ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx, /ActiveEcuC/Com/ComConfig/SupF_PowerMode_oDBCNetWork_c1c74254_Tx] */
  { /*     1 */    FALSE,     3u,        4u,         0u },  /* [/ActiveEcuC/Com/ComConfig/SupF_Function_1_oDBCNetWork_003f31ca_Tx] */
  { /*     2 */     TRUE,     0u,        0u,        10u },  /* [/ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx] */
  { /*     3 */     TRUE,     0u,        0u,         2u }   /* [/ActiveEcuC/Com/ComConfig/SupF_Angle_oDBCNetWork_afae1504_Tx, /ActiveEcuC/Com/ComConfig/SupF_ComError_oDBCNetWork_f4af97d3_Tx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduGrpInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxPduGrpInfo
  \brief  Contains all I-PDU-Group relevant information for Tx I-PDUs.
  \details
  Element                 Description
  PduGrpVectorStartIdx    the start index of the 0:n relation pointing to Com_PduGrpVector
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxPduGrpInfoType, COM_CONST) Com_TxPduGrpInfo[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PduGrpVectorStartIdx */
  { /*     0 */                   0u },
  { /*     1 */                   0u },
  { /*     2 */                   0u },
  { /*     3 */                   0u },
  { /*     4 */                   0u },
  { /*     5 */                   0u }
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxPduInfo
  \brief  Contains all relevant information for Tx I-PDUs.
  \details
  Element                   Description
  TxPduInitValueUsed        TRUE, if the 0:n relation has 1 relation pointing to Com_TxPduInitValue
  TxBufferLength            the number of relations pointing to Com_TxBuffer
  TxPduInitValueEndIdx      the end index of the 0:n relation pointing to Com_TxPduInitValue
  TxPduInitValueStartIdx    the start index of the 0:n relation pointing to Com_TxPduInitValue
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxPduInfoType, COM_CONST) Com_TxPduInfo[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxPduInitValueUsed  TxBufferLength  TxPduInitValueEndIdx  TxPduInitValueStartIdx        Referable Keys */
  { /*     0 */               TRUE,             8u,                   8u,                     0u },  /* [/ActiveEcuC/Com/ComConfig/SupF_Angle_oDBCNetWork_afae1504_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  { /*     1 */               TRUE,             8u,                  16u,                     8u },  /* [/ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  { /*     2 */               TRUE,             8u,                  24u,                    16u },  /* [/ActiveEcuC/Com/ComConfig/SupF_ComError_oDBCNetWork_f4af97d3_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  { /*     3 */               TRUE,             8u,                  32u,                    24u },  /* [/ActiveEcuC/Com/ComConfig/SupF_Function_1_oDBCNetWork_003f31ca_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  { /*     4 */               TRUE,             8u,                  40u,                    32u },  /* [/ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  { /*     5 */               TRUE,             8u,                  48u,                    40u }   /* [/ActiveEcuC/Com/ComConfig/SupF_PowerMode_oDBCNetWork_c1c74254_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduInitValue
**********************************************************************************************************************/
/** 
  \var    Com_TxPduInitValue
  \brief  Initial values used for Tx I-PDU buffer initialization.
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxPduInitValueType, COM_CONST) Com_TxPduInitValue[48] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     TxPduInitValue      Referable Keys */
  /*     0 */           0x24u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Angle_oDBCNetWork_afae1504_Tx] */
  /*     1 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Angle_oDBCNetWork_afae1504_Tx] */
  /*     2 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Angle_oDBCNetWork_afae1504_Tx] */
  /*     3 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Angle_oDBCNetWork_afae1504_Tx] */
  /*     4 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Angle_oDBCNetWork_afae1504_Tx] */
  /*     5 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Angle_oDBCNetWork_afae1504_Tx] */
  /*     6 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Angle_oDBCNetWork_afae1504_Tx] */
  /*     7 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Angle_oDBCNetWork_afae1504_Tx] */
  /*     8 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx] */
  /*     9 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx] */
  /*    10 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx] */
  /*    11 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx] */
  /*    12 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx] */
  /*    13 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx] */
  /*    14 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx] */
  /*    15 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx] */
  /*    16 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_ComError_oDBCNetWork_f4af97d3_Tx] */
  /*    17 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_ComError_oDBCNetWork_f4af97d3_Tx] */
  /*    18 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_ComError_oDBCNetWork_f4af97d3_Tx] */
  /*    19 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_ComError_oDBCNetWork_f4af97d3_Tx] */
  /*    20 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_ComError_oDBCNetWork_f4af97d3_Tx] */
  /*    21 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_ComError_oDBCNetWork_f4af97d3_Tx] */
  /*    22 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_ComError_oDBCNetWork_f4af97d3_Tx] */
  /*    23 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_ComError_oDBCNetWork_f4af97d3_Tx] */
  /*    24 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Function_1_oDBCNetWork_003f31ca_Tx] */
  /*    25 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Function_1_oDBCNetWork_003f31ca_Tx] */
  /*    26 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Function_1_oDBCNetWork_003f31ca_Tx] */
  /*    27 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Function_1_oDBCNetWork_003f31ca_Tx] */
  /*    28 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Function_1_oDBCNetWork_003f31ca_Tx] */
  /*    29 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Function_1_oDBCNetWork_003f31ca_Tx] */
  /*    30 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Function_1_oDBCNetWork_003f31ca_Tx] */
  /*    31 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Function_1_oDBCNetWork_003f31ca_Tx] */
  /*    32 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx] */
  /*    33 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx] */
  /*    34 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx] */
  /*    35 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx] */
  /*    36 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx] */
  /*    37 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx] */
  /*    38 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx] */
  /*    39 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx] */
  /*    40 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_PowerMode_oDBCNetWork_c1c74254_Tx] */
  /*    41 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_PowerMode_oDBCNetWork_c1c74254_Tx] */
  /*    42 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_PowerMode_oDBCNetWork_c1c74254_Tx] */
  /*    43 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_PowerMode_oDBCNetWork_c1c74254_Tx] */
  /*    44 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_PowerMode_oDBCNetWork_c1c74254_Tx] */
  /*    45 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_PowerMode_oDBCNetWork_c1c74254_Tx] */
  /*    46 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/SupF_PowerMode_oDBCNetWork_c1c74254_Tx] */
  /*    47 */           0x00u   /* [/ActiveEcuC/Com/ComConfig/SupF_PowerMode_oDBCNetWork_c1c74254_Tx] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigGrpInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxSigGrpInfo
  \brief  Contains all relevant information for Tx Signal Groups.
  \details
  Element                           Description
  TxSigGrpMaskUsed                  TRUE, if the 0:n relation has 1 relation pointing to Com_TxSigGrpMask
  PduOffset                         Byte offset relative to the PDU the signal group is starting.
  TransferProperty              
  TxBufferEndIdx                    the end index of the 0:n relation pointing to Com_TxBuffer
  TxBufferSigGrpInTxIPDUEndIdx      the end index of the 1:n relation pointing to Com_TxBuffer
  TxBufferSigGrpInTxIPDUStartIdx    the start index of the 1:n relation pointing to Com_TxBuffer
  TxBufferStartIdx                  the start index of the 0:n relation pointing to Com_TxBuffer
  TxPduInfoIdx                      the index of the 1:1 relation pointing to Com_TxPduInfo
  TxSigGrpMaskEndIdx                the end index of the 0:n relation pointing to Com_TxSigGrpMask
  TxSigGrpMaskStartIdx              the start index of the 0:n relation pointing to Com_TxSigGrpMask
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxSigGrpInfoType, COM_CONST) Com_TxSigGrpInfo[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxSigGrpMaskUsed  PduOffset  TransferProperty                              TxBufferEndIdx  TxBufferSigGrpInTxIPDUEndIdx  TxBufferSigGrpInTxIPDUStartIdx  TxBufferStartIdx  TxPduInfoIdx  TxSigGrpMaskEndIdx  TxSigGrpMaskStartIdx        Referable Keys */
  { /*     0 */             TRUE,        0u,   COM_PENDING_TRANSFERPROPERTYOFTXSIGGRPINFO,            52u,                          36u,                            32u,              48u,           4u,                 7u,                   3u },  /* [/ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x210_oSupF_Led_State_oDBCNetWork_ec44dd46_Tx/F_Led1_State_oSupF_Led_State_oDBCNetWork_8a0569d2_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x210_oSupF_Led_State_oDBCNetWork_ec44dd46_Tx/F_Led3_State_oSupF_Led_State_oDBCNetWork_ce484003_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x210_oSupF_Led_State_oDBCNetWork_ec44dd46_Tx/F_Led4_State_oSupF_Led_State_oDBCNetWork_cd012db8_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x210_oSupF_Led_State_oDBCNetWork_ec44dd46_Tx/F_Led2_State_oSupF_Led_State_oDBCNetWork_01d657cb_Tx] */
  { /*     1 */             TRUE,        0u,   COM_PENDING_TRANSFERPROPERTYOFTXSIGGRPINFO,            55u,                          11u,                             8u,              52u,           1u,                 3u,                   0u },  /* [/ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x211_oSupF_Button_State_oDBCNetWork_b368711c_Tx/F_Button4_State_oSupF_Button_State_oDBCNetWork_7d23a980_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x211_oSupF_Button_State_oDBCNetWork_b368711c_Tx/F_Button2_State_oSupF_Button_State_oDBCNetWork_e6f3a94e_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x211_oSupF_Button_State_oDBCNetWork_b368711c_Tx/F_Button1_State_oSupF_Button_State_oDBCNetWork_ab1ba929_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x211_oSupF_Button_State_oDBCNetWork_b368711c_Tx/F_Button3_State_oSupF_Button_State_oDBCNetWork_6b7b54ac_Tx] */
  { /*     2 */             TRUE,        0u,   COM_PENDING_TRANSFERPROPERTYOFTXSIGGRPINFO,            63u,                          48u,                            40u,              55u,           5u,                22u,                  14u },  /* [/ActiveEcuC/Com/ComConfig/SupF_PowerMode_oDBCNetWork_c1c74254_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x212_oSupF_PowerMode_oDBCNetWork_de62da88_Tx/SupF_Counter_0x212_oSupF_PowerMode_oDBCNetWork_35c7002c_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x212_oSupF_PowerMode_oDBCNetWork_de62da88_Tx/F_PowerMode_oSupF_PowerMode_oDBCNetWork_16d1a370_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x212_oSupF_PowerMode_oDBCNetWork_de62da88_Tx/SupF_Checksum_0x212_oSupF_PowerMode_oDBCNetWork_8c3e64a3_Tx] */
  { /*     3 */             TRUE,        0u,   COM_PENDING_TRANSFERPROPERTYOFTXSIGGRPINFO,            64u,                           1u,                             0u,              63u,           0u,                 8u,                   7u },  /* [/ActiveEcuC/Com/ComConfig/SupF_Angle_oDBCNetWork_afae1504_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x213_oSupF_Angle_oDBCNetWork_3c68f302_Tx/F_AAA_Angle_oSupF_Angle_oDBCNetWork_d35fb591_Tx] */
  { /*     4 */             TRUE,        0u, COM_TRIGGERED_TRANSFERPROPERTYOFTXSIGGRPINFO,            72u,                          32u,                            24u,              64u,           3u,                15u,                   7u },  /* [/ActiveEcuC/Com/ComConfig/SupF_Function_1_oDBCNetWork_003f31ca_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx/F_Sig_0x214_Used_3_oSupF_Function_1_oDBCNetWork_b325274e_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx/F_Sig_0x214_Used_1_oSupF_Function_1_oDBCNetWork_cbe4e15e_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx/F_Sig_0x214_Used_2_oSupF_Function_1_oDBCNetWork_8f45c446_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx/F_Sig_0x214_Used_5_oSupF_Function_1_oDBCNetWork_3a676d7e_Tx] */
  { /*     5 */             TRUE,        0u,   COM_PENDING_TRANSFERPROPERTYOFTXSIGGRPINFO,            74u,                          18u,                            16u,              72u,           2u,                 9u,                   7u }   /* [/ActiveEcuC/Com/ComConfig/SupF_ComError_oDBCNetWork_f4af97d3_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x216_oSupF_ComError_oDBCNetWork_8d63d174_Tx/F_Meg_E2E_Error_oSupF_ComError_oDBCNetWork_edc11637_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x216_oSupF_ComError_oDBCNetWork_8d63d174_Tx/F_Mes_Lost_Error_oSupF_ComError_oDBCNetWork_72d68791_Tx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigGrpInfoInd
**********************************************************************************************************************/
/** 
  \var    Com_TxSigGrpInfoInd
  \brief  the indexes of the 1:1 sorted relation pointing to Com_TxSigGrpInfo
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxSigGrpInfoIndType, COM_CONST) Com_TxSigGrpInfoInd[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     TxSigGrpInfoInd      Referable Keys */
  /*     0 */               3u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Angle_oDBCNetWork_afae1504_Tx] */
  /*     1 */               1u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx] */
  /*     2 */               5u,  /* [/ActiveEcuC/Com/ComConfig/SupF_ComError_oDBCNetWork_f4af97d3_Tx] */
  /*     3 */               4u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Function_1_oDBCNetWork_003f31ca_Tx] */
  /*     4 */               0u,  /* [/ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx] */
  /*     5 */               2u   /* [/ActiveEcuC/Com/ComConfig/SupF_PowerMode_oDBCNetWork_c1c74254_Tx] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigGrpMask
**********************************************************************************************************************/
/** 
  \var    Com_TxSigGrpMask
  \brief  Signal group mask needed to copy interlaced signal groups to the Tx PDU buffer.
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxSigGrpMaskType, COM_CONST) Com_TxSigGrpMask[22] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     TxSigGrpMask      Referable Keys */
  /*     0 */         0x3Fu,  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x211_oSupF_Button_State_oDBCNetWork_b368711c_Tx] */
  /*     1 */         0x38u,  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x211_oSupF_Button_State_oDBCNetWork_b368711c_Tx] */
  /*     2 */         0x38u,  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x211_oSupF_Button_State_oDBCNetWork_b368711c_Tx] */
  /*     3 */         0x03u,  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x210_oSupF_Led_State_oDBCNetWork_ec44dd46_Tx] */
  /*     4 */         0x03u,  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x210_oSupF_Led_State_oDBCNetWork_ec44dd46_Tx] */
  /*     5 */         0x03u,  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x210_oSupF_Led_State_oDBCNetWork_ec44dd46_Tx] */
  /*     6 */         0x03u,  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x210_oSupF_Led_State_oDBCNetWork_ec44dd46_Tx] */
  /*     7 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x216_oSupF_ComError_oDBCNetWork_8d63d174_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x213_oSupF_Angle_oDBCNetWork_3c68f302_Tx] */
  /*     8 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x216_oSupF_ComError_oDBCNetWork_8d63d174_Tx] */
  /*     9 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx] */
  /*    10 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx] */
  /*    11 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx] */
  /*    12 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx] */
  /*    13 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx] */
  /*    14 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x212_oSupF_PowerMode_oDBCNetWork_de62da88_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx] */
  /*    15 */         0x00u,  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x212_oSupF_PowerMode_oDBCNetWork_de62da88_Tx] */
  /*    16 */         0x0Fu,  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x212_oSupF_PowerMode_oDBCNetWork_de62da88_Tx] */
  /*    17 */         0x00u,  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x212_oSupF_PowerMode_oDBCNetWork_de62da88_Tx] */
  /*    18 */         0x00u,  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x212_oSupF_PowerMode_oDBCNetWork_de62da88_Tx] */
  /*    19 */         0x00u,  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x212_oSupF_PowerMode_oDBCNetWork_de62da88_Tx] */
  /*    20 */         0x00u,  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x212_oSupF_PowerMode_oDBCNetWork_de62da88_Tx] */
  /*    21 */         0x0Fu   /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x212_oSupF_PowerMode_oDBCNetWork_de62da88_Tx] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxSigInfo
  \brief  Contains all relevant information for Tx signals and group signals.
  \details
  Element                   Description
  TxSigGrpInfoUsed          TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_TxSigGrpInfo
  ApplType                  Application data type.
  BitLength                 Bit length of the signal or group signal.
  BitPosition               Little endian bit position of the signal or group signal within the I-PDU.
  BusAcc                    BUS access algorithm for signal or group signal packing / un-packing.
  ByteLength                Byte length of the signal or group signal.
  BytePosition              Little endian byte position of the signal or group signal within the I-PDU.
  StartByteInPduPosition    Start Byte position of the signal or group signal within the I-PDU.
  TxBufferEndIdx            the end index of the 0:n relation pointing to Com_TxBuffer
  TxBufferStartIdx          the start index of the 0:n relation pointing to Com_TxBuffer
  TxPduInfoIdx              the index of the 1:1 relation pointing to Com_TxPduInfo
  TxSigGrpInfoIdx           the index of the 0:1 relation pointing to Com_TxSigGrpInfo
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxSigInfoType, COM_CONST) Com_TxSigInfo[18] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxSigGrpInfoUsed  ApplType                        BitLength  BitPosition  BusAcc                          ByteLength  BytePosition  StartByteInPduPosition  TxBufferEndIdx  TxBufferStartIdx  TxPduInfoIdx  TxSigGrpInfoIdx        Referable Keys */
  { /*     0 */             TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        2u,          0u,     COM_NBIT_BUSACCOFTXSIGINFO,         0u,           0u,                     0u,            49u,              48u,           4u,              0u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x210_oSupF_Led_State_oDBCNetWork_ec44dd46_Tx/F_Led1_State_oSupF_Led_State_oDBCNetWork_8a0569d2_Tx, /ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx] */
  { /*     1 */             TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        2u,          8u,     COM_NBIT_BUSACCOFTXSIGINFO,         0u,           1u,                     1u,            50u,              49u,           4u,              0u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x210_oSupF_Led_State_oDBCNetWork_ec44dd46_Tx/F_Led2_State_oSupF_Led_State_oDBCNetWork_01d657cb_Tx, /ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx] */
  { /*     2 */             TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        2u,         16u,     COM_NBIT_BUSACCOFTXSIGINFO,         0u,           2u,                     2u,            51u,              50u,           4u,              0u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x210_oSupF_Led_State_oDBCNetWork_ec44dd46_Tx/F_Led3_State_oSupF_Led_State_oDBCNetWork_ce484003_Tx, /ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx] */
  { /*     3 */             TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        2u,         24u,     COM_NBIT_BUSACCOFTXSIGINFO,         0u,           3u,                     3u,            52u,              51u,           4u,              0u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x210_oSupF_Led_State_oDBCNetWork_ec44dd46_Tx/F_Led4_State_oSupF_Led_State_oDBCNetWork_cd012db8_Tx, /ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx] */
  { /*     4 */             TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        3u,          0u,     COM_NBIT_BUSACCOFTXSIGINFO,         0u,           0u,                     0u,            53u,              52u,           1u,              1u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x211_oSupF_Button_State_oDBCNetWork_b368711c_Tx/F_Button1_State_oSupF_Button_State_oDBCNetWork_ab1ba929_Tx, /ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx] */
  { /*     5 */             TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        3u,          3u,     COM_NBIT_BUSACCOFTXSIGINFO,         0u,           0u,                     0u,            53u,              52u,           1u,              1u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x211_oSupF_Button_State_oDBCNetWork_b368711c_Tx/F_Button2_State_oSupF_Button_State_oDBCNetWork_e6f3a94e_Tx, /ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx] */
  { /*     6 */             TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        3u,         11u,     COM_NBIT_BUSACCOFTXSIGINFO,         0u,           1u,                     1u,            54u,              53u,           1u,              1u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x211_oSupF_Button_State_oDBCNetWork_b368711c_Tx/F_Button3_State_oSupF_Button_State_oDBCNetWork_6b7b54ac_Tx, /ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx] */
  { /*     7 */             TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        3u,         19u,     COM_NBIT_BUSACCOFTXSIGINFO,         0u,           2u,                     2u,            55u,              54u,           1u,              1u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x211_oSupF_Button_State_oDBCNetWork_b368711c_Tx/F_Button4_State_oSupF_Button_State_oDBCNetWork_7d23a980_Tx, /ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx] */
  { /*     8 */             TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        4u,         16u,     COM_NBIT_BUSACCOFTXSIGINFO,         0u,           2u,                     2u,            58u,              57u,           5u,              2u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x212_oSupF_PowerMode_oDBCNetWork_de62da88_Tx/F_PowerMode_oSupF_PowerMode_oDBCNetWork_16d1a370_Tx, /ActiveEcuC/Com/ComConfig/SupF_PowerMode_oDBCNetWork_c1c74254_Tx] */
  { /*     9 */             TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,          0u,     COM_BYTE_BUSACCOFTXSIGINFO,         1u,           0u,                     0u,            56u,              55u,           5u,              2u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x212_oSupF_PowerMode_oDBCNetWork_de62da88_Tx/SupF_Checksum_0x212_oSupF_PowerMode_oDBCNetWork_8c3e64a3_Tx, /ActiveEcuC/Com/ComConfig/SupF_PowerMode_oDBCNetWork_c1c74254_Tx] */
  { /*    10 */             TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        4u,         56u,     COM_NBIT_BUSACCOFTXSIGINFO,         0u,           7u,                     7u,            63u,              62u,           5u,              2u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x212_oSupF_PowerMode_oDBCNetWork_de62da88_Tx/SupF_Counter_0x212_oSupF_PowerMode_oDBCNetWork_35c7002c_Tx, /ActiveEcuC/Com/ComConfig/SupF_PowerMode_oDBCNetWork_c1c74254_Tx] */
  { /*    11 */             TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,          0u,     COM_BYTE_BUSACCOFTXSIGINFO,         1u,           0u,                     0u,            64u,              63u,           0u,              3u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x213_oSupF_Angle_oDBCNetWork_3c68f302_Tx/F_AAA_Angle_oSupF_Angle_oDBCNetWork_d35fb591_Tx, /ActiveEcuC/Com/ComConfig/SupF_Angle_oDBCNetWork_afae1504_Tx] */
  { /*    12 */             TRUE, COM_UINT16_APPLTYPEOFTXSIGINFO,       16u,          8u, COM_NBYTE_SW_BUSACCOFTXSIGINFO,         2u,           1u,                     0u,            66u,              64u,           3u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx/F_Sig_0x214_Used_1_oSupF_Function_1_oDBCNetWork_cbe4e15e_Tx, /ActiveEcuC/Com/ComConfig/SupF_Function_1_oDBCNetWork_003f31ca_Tx] */
  { /*    13 */             TRUE, COM_UINT16_APPLTYPEOFTXSIGINFO,       16u,         24u, COM_NBYTE_SW_BUSACCOFTXSIGINFO,         2u,           3u,                     2u,            68u,              66u,           3u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx/F_Sig_0x214_Used_2_oSupF_Function_1_oDBCNetWork_8f45c446_Tx, /ActiveEcuC/Com/ComConfig/SupF_Function_1_oDBCNetWork_003f31ca_Tx] */
  { /*    14 */             TRUE, COM_UINT16_APPLTYPEOFTXSIGINFO,       16u,         40u, COM_NBYTE_SW_BUSACCOFTXSIGINFO,         2u,           5u,                     4u,            70u,              68u,           3u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx/F_Sig_0x214_Used_3_oSupF_Function_1_oDBCNetWork_b325274e_Tx, /ActiveEcuC/Com/ComConfig/SupF_Function_1_oDBCNetWork_003f31ca_Tx] */
  { /*    15 */             TRUE, COM_UINT16_APPLTYPEOFTXSIGINFO,       16u,         56u, COM_NBYTE_SW_BUSACCOFTXSIGINFO,         2u,           7u,                     6u,            72u,              70u,           3u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx/F_Sig_0x214_Used_5_oSupF_Function_1_oDBCNetWork_3a676d7e_Tx, /ActiveEcuC/Com/ComConfig/SupF_Function_1_oDBCNetWork_003f31ca_Tx] */
  { /*    16 */             TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,          8u,     COM_BYTE_BUSACCOFTXSIGINFO,         1u,           1u,                     1u,            74u,              73u,           2u,              5u },  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x216_oSupF_ComError_oDBCNetWork_8d63d174_Tx/F_Meg_E2E_Error_oSupF_ComError_oDBCNetWork_edc11637_Tx, /ActiveEcuC/Com/ComConfig/SupF_ComError_oDBCNetWork_f4af97d3_Tx] */
  { /*    17 */             TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,          0u,     COM_BYTE_BUSACCOFTXSIGINFO,         1u,           0u,                     0u,            73u,              72u,           2u,              5u }   /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x216_oSupF_ComError_oDBCNetWork_8d63d174_Tx/F_Mes_Lost_Error_oSupF_ComError_oDBCNetWork_72d68791_Tx, /ActiveEcuC/Com/ComConfig/SupF_ComError_oDBCNetWork_f4af97d3_Tx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_CurrentTxMode
**********************************************************************************************************************/
/** 
  \var    Com_CurrentTxMode
  \brief  Current transmission mode state of all Tx I-PDUs.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_CurrentTxModeType, COM_VAR_NOINIT) Com_CurrentTxMode[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Angle_oDBCNetWork_afae1504_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SupF_ComError_oDBCNetWork_f4af97d3_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Function_1_oDBCNetWork_003f31ca_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/SupF_PowerMode_oDBCNetWork_c1c74254_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_CycleTimeCnt
**********************************************************************************************************************/
/** 
  \var    Com_CycleTimeCnt
  \brief  Current counter value of cyclic transmission.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_CycleTimeCntType, COM_VAR_NOINIT) Com_CycleTimeCnt[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Angle_oDBCNetWork_afae1504_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SupF_ComError_oDBCNetWork_f4af97d3_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Function_1_oDBCNetWork_003f31ca_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/SupF_PowerMode_oDBCNetWork_c1c74254_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_CyclicSendRequest
**********************************************************************************************************************/
/** 
  \var    Com_CyclicSendRequest
  \brief  Cyclic send request flag used to indicate cyclic transmission mode for all Tx I-PDU.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_CyclicSendRequestType, COM_VAR_NOINIT) Com_CyclicSendRequest[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Angle_oDBCNetWork_afae1504_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SupF_ComError_oDBCNetWork_f4af97d3_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Function_1_oDBCNetWork_003f31ca_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/SupF_PowerMode_oDBCNetWork_c1c74254_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_HandleRxPduDeferred
**********************************************************************************************************************/
/** 
  \var    Com_HandleRxPduDeferred
  \brief  Array indicating received Rx I-PDUs to be processed deferred within the next call of Com_MainfunctionRx().
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_HandleRxPduDeferredUType, COM_VAR_NOINIT) Com_HandleRxPduDeferred;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SupD_Button_Control_oDBCNetWork_09fc4743_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/SupD_Led_Control_oDBCNetWork_80cdf82b_Rx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SupD_Led_CtrlMode_oDBCNetWork_a6b9686f_Rx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/SupE_Function_1_oDBCNetWork_582198e2_Rx] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_Initialized
**********************************************************************************************************************/
/** 
  \var    Com_Initialized
  \brief  Initialization state of Com. TRUE, if Com_Init() has been called, else FALSE.
*/ 
#define COM_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_InitializedType, COM_VAR_ZERO_INIT) Com_Initialized = FALSE;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RepCnt
**********************************************************************************************************************/
/** 
  \var    Com_RepCnt
  \brief  Current repetition counter value for replication of transmission requests plus one initial transmit.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RepCntType, COM_VAR_NOINIT) Com_RepCnt[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Angle_oDBCNetWork_afae1504_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SupF_ComError_oDBCNetWork_f4af97d3_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Function_1_oDBCNetWork_003f31ca_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/SupF_PowerMode_oDBCNetWork_c1c74254_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RepCycleCnt
**********************************************************************************************************************/
/** 
  \var    Com_RepCycleCnt
  \brief  Current counter value of repetition period for replication of transmission requests.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RepCycleCntType, COM_VAR_NOINIT) Com_RepCycleCnt[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Angle_oDBCNetWork_afae1504_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SupF_ComError_oDBCNetWork_f4af97d3_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Function_1_oDBCNetWork_003f31ca_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/SupF_PowerMode_oDBCNetWork_c1c74254_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDefPduBuffer
**********************************************************************************************************************/
/** 
  \var    Com_RxDefPduBuffer
  \brief  Rx I-PDU buffer for deferred signal processing.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxDefPduBufferUType, COM_VAR_NOINIT) Com_RxDefPduBuffer;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SupD_Button_Control_oDBCNetWork_09fc4743_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SupD_Button_Control_oDBCNetWork_09fc4743_Rx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/SupD_Button_Control_oDBCNetWork_09fc4743_Rx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/SupD_Led_Control_oDBCNetWork_80cdf82b_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SupD_Led_Control_oDBCNetWork_80cdf82b_Rx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/SupD_Led_Control_oDBCNetWork_80cdf82b_Rx] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/SupD_Led_CtrlMode_oDBCNetWork_a6b9686f_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SupD_Led_CtrlMode_oDBCNetWork_a6b9686f_Rx] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/SupD_Led_CtrlMode_oDBCNetWork_a6b9686f_Rx] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/SupE_Function_1_oDBCNetWork_582198e2_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SupE_Function_1_oDBCNetWork_582198e2_Rx] */
  /*    31 */  /* [/ActiveEcuC/Com/ComConfig/SupE_Function_1_oDBCNetWork_582198e2_Rx] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDeferredProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxDeferredProcessingISRLockCounterType, COM_VAR_NOINIT) Com_RxDeferredProcessingISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxIPduGroupISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxIPduGroupISRLockCounterType, COM_VAR_NOINIT) Com_RxIPduGroupISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduGrpActive
**********************************************************************************************************************/
/** 
  \var    Com_RxPduGrpActive
  \brief  Rx I-PDU based state (started/stopped) of the corresponding I-PDU-Group.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxPduGrpActiveType, COM_VAR_NOINIT) Com_RxPduGrpActive[4];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SupD_Button_Control_oDBCNetWork_09fc4743_Rx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Rx_2e39ec3a] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/SupD_Led_Control_oDBCNetWork_80cdf82b_Rx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Rx_2e39ec3a] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SupD_Led_CtrlMode_oDBCNetWork_a6b9686f_Rx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Rx_2e39ec3a] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/SupE_Function_1_oDBCNetWork_582198e2_Rx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Rx_2e39ec3a] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferUInt16
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferUInt16
  \brief  Rx Signal and Group Signal Buffer. (UINT16)
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxSigBufferUInt16Type, COM_VAR_NOINIT) Com_RxSigBufferUInt16[2];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x302_oSupE_Function_1_oDBCNetWork_28664efe_Rx/E_Sig_0x302_Used_1_oSupE_Function_1_oDBCNetWork_5fb2dd52_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x302_oSupE_Function_1_oDBCNetWork_28664efe_Rx/E_Sig_0x302_Used_1_oSupE_Function_1_oDBCNetWork_5fb2dd52_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x302_oSupE_Function_1_oDBCNetWork_28664efe_Rx/E_Sig_0x302_Used_1_oSupE_Function_1_oDBCNetWork_5fb2dd52_Rx_RxSignalBufferRouting] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferUInt8
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferUInt8
  \brief  Rx Signal and Group Signal Buffer. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxSigBufferUInt8Type, COM_VAR_NOINIT) Com_RxSigBufferUInt8[36];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/D_Led1_Control_oSupD_Led_Control_oDBCNetWork_34bc1d83_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/D_Led1_Control_oSupD_Led_Control_oDBCNetWork_34bc1d83_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/D_Led1_Control_oSupD_Led_Control_oDBCNetWork_34bc1d83_Rx_RxSignalBufferRouting] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/D_Led2_Control_oSupD_Led_Control_oDBCNetWork_e7270178_Rx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/D_Led2_Control_oSupD_Led_Control_oDBCNetWork_e7270178_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/D_Led2_Control_oSupD_Led_Control_oDBCNetWork_e7270178_Rx_RxSignalBufferRouting] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/D_Led3_Control_oSupD_Led_Control_oDBCNetWork_a9ae0ad1_Rx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/D_Led3_Control_oSupD_Led_Control_oDBCNetWork_a9ae0ad1_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/D_Led3_Control_oSupD_Led_Control_oDBCNetWork_a9ae0ad1_Rx_RxSignalBufferRouting] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/D_Led4_Control_oSupD_Led_Control_oDBCNetWork_9b603ecf_Rx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/D_Led4_Control_oSupD_Led_Control_oDBCNetWork_9b603ecf_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/D_Led4_Control_oSupD_Led_Control_oDBCNetWork_9b603ecf_Rx_RxSignalBufferRouting] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/SupD_Checksum_0x300_oSupD_Led_Control_oDBCNetWork_2c493488_Rx] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/SupD_Checksum_0x300_oSupD_Led_Control_oDBCNetWork_2c493488_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/SupD_Checksum_0x300_oSupD_Led_Control_oDBCNetWork_2c493488_Rx_RxSignalBufferRouting] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/SupD_Counter_0x300_oSupD_Led_Control_oDBCNetWork_b943cd4b_Rx] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/SupD_Counter_0x300_oSupD_Led_Control_oDBCNetWork_b943cd4b_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/SupD_Counter_0x300_oSupD_Led_Control_oDBCNetWork_b943cd4b_Rx_RxSignalBufferRouting] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x301_oSupD_Button_Control_oDBCNetWork_188cbd42_Rx/D_Button1_Control_oSupD_Button_Control_oDBCNetWork_fc1efec2_Rx] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x301_oSupD_Button_Control_oDBCNetWork_188cbd42_Rx/D_Button1_Control_oSupD_Button_Control_oDBCNetWork_fc1efec2_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x301_oSupD_Button_Control_oDBCNetWork_188cbd42_Rx/D_Button1_Control_oSupD_Button_Control_oDBCNetWork_fc1efec2_Rx_RxSignalBufferRouting] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x301_oSupD_Button_Control_oDBCNetWork_188cbd42_Rx/D_Button2_Control_oSupD_Button_Control_oDBCNetWork_c42575b1_Rx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x301_oSupD_Button_Control_oDBCNetWork_188cbd42_Rx/D_Button2_Control_oSupD_Button_Control_oDBCNetWork_c42575b1_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x301_oSupD_Button_Control_oDBCNetWork_188cbd42_Rx/D_Button2_Control_oSupD_Button_Control_oDBCNetWork_c42575b1_Rx_RxSignalBufferRouting] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x301_oSupD_Button_Control_oDBCNetWork_188cbd42_Rx/D_Button3_Control_oSupD_Button_Control_oDBCNetWork_651cf15f_Rx] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x301_oSupD_Button_Control_oDBCNetWork_188cbd42_Rx/D_Button3_Control_oSupD_Button_Control_oDBCNetWork_651cf15f_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x301_oSupD_Button_Control_oDBCNetWork_188cbd42_Rx/D_Button3_Control_oSupD_Button_Control_oDBCNetWork_651cf15f_Rx_RxSignalBufferRouting] */
  /*    18 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x301_oSupD_Button_Control_oDBCNetWork_188cbd42_Rx/D_Button4_Control_oSupD_Button_Control_oDBCNetWork_b4526357_Rx] */
  /*    19 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x301_oSupD_Button_Control_oDBCNetWork_188cbd42_Rx/D_Button4_Control_oSupD_Button_Control_oDBCNetWork_b4526357_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x301_oSupD_Button_Control_oDBCNetWork_188cbd42_Rx/D_Button4_Control_oSupD_Button_Control_oDBCNetWork_b4526357_Rx_RxSignalBufferRouting] */
  /*    20 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x302_oSupE_Function_1_oDBCNetWork_28664efe_Rx/E_Sig_0x302_Used_2_oSupE_Function_1_oDBCNetWork_1b13f84a_Rx] */
  /*    21 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x302_oSupE_Function_1_oDBCNetWork_28664efe_Rx/E_Sig_0x302_Used_2_oSupE_Function_1_oDBCNetWork_1b13f84a_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x302_oSupE_Function_1_oDBCNetWork_28664efe_Rx/E_Sig_0x302_Used_2_oSupE_Function_1_oDBCNetWork_1b13f84a_Rx_RxSignalBufferRouting] */
  /*    22 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x302_oSupE_Function_1_oDBCNetWork_28664efe_Rx/E_Sig_0x302_Used_3_oSupE_Function_1_oDBCNetWork_27731b42_Rx] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x302_oSupE_Function_1_oDBCNetWork_28664efe_Rx/E_Sig_0x302_Used_3_oSupE_Function_1_oDBCNetWork_27731b42_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x302_oSupE_Function_1_oDBCNetWork_28664efe_Rx/E_Sig_0x302_Used_3_oSupE_Function_1_oDBCNetWork_27731b42_Rx_RxSignalBufferRouting] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/D_Led1_CtrlMode_oSupD_Led_CtrlMode_oDBCNetWork_e2fdf3e9_Rx] */
  /*    25 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/D_Led1_CtrlMode_oSupD_Led_CtrlMode_oDBCNetWork_e2fdf3e9_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/D_Led1_CtrlMode_oSupD_Led_CtrlMode_oDBCNetWork_e2fdf3e9_Rx_RxSignalBufferRouting] */
  /*    26 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/D_Led2_CtrlMode_oSupD_Led_CtrlMode_oDBCNetWork_01b4444b_Rx] */
  /*    27 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/D_Led2_CtrlMode_oSupD_Led_CtrlMode_oDBCNetWork_01b4444b_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/D_Led2_CtrlMode_oSupD_Led_CtrlMode_oDBCNetWork_01b4444b_Rx_RxSignalBufferRouting] */
  /*    28 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/D_Led3_CtrlMode_oSupD_Led_CtrlMode_oDBCNetWork_e9a3d4ea_Rx] */
  /*    29 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/D_Led3_CtrlMode_oSupD_Led_CtrlMode_oDBCNetWork_e9a3d4ea_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/D_Led3_CtrlMode_oSupD_Led_CtrlMode_oDBCNetWork_e9a3d4ea_Rx_RxSignalBufferRouting] */
  /*    30 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/D_Led4_CtrlMode_oSupD_Led_CtrlMode_oDBCNetWork_1c562d4e_Rx] */
  /*    31 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/D_Led4_CtrlMode_oSupD_Led_CtrlMode_oDBCNetWork_1c562d4e_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/D_Led4_CtrlMode_oSupD_Led_CtrlMode_oDBCNetWork_1c562d4e_Rx_RxSignalBufferRouting] */
  /*    32 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/SupD_Checksum_0x304_oSupD_Led_CtrlMode_oDBCNetWork_984004db_Rx] */
  /*    33 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/SupD_Checksum_0x304_oSupD_Led_CtrlMode_oDBCNetWork_984004db_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/SupD_Checksum_0x304_oSupD_Led_CtrlMode_oDBCNetWork_984004db_Rx_RxSignalBufferRouting] */
  /*    34 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/SupD_Counter_0x304_oSupD_Led_CtrlMode_oDBCNetWork_9ab89d28_Rx] */
  /*    35 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/SupD_Counter_0x304_oSupD_Led_CtrlMode_oDBCNetWork_9ab89d28_Rx_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/SupD_Counter_0x304_oSupD_Led_CtrlMode_oDBCNetWork_9ab89d28_Rx_RxSignalBufferRouting] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_SigGrpEventFlag
**********************************************************************************************************************/
/** 
  \var    Com_SigGrpEventFlag
  \brief  Flag is set if a group signal write access caused a triggered event.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_SigGrpEventFlagType, COM_VAR_NOINIT) Com_SigGrpEventFlag[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TmpRxShdBufferUInt16
**********************************************************************************************************************/
/** 
  \var    Com_TmpRxShdBufferUInt16
  \brief  Temporary Rx Group Signal Shadow Buffer. (UINT16)
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TmpRxShdBufferUInt16UType, COM_VAR_NOINIT) Com_TmpRxShdBufferUInt16;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x302_oSupE_Function_1_oDBCNetWork_28664efe_Rx/E_Sig_0x302_Used_1_oSupE_Function_1_oDBCNetWork_5fb2dd52_Rx] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TmpRxShdBufferUInt8
**********************************************************************************************************************/
/** 
  \var    Com_TmpRxShdBufferUInt8
  \brief  Temporary Rx Group Signal Shadow Buffer. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TmpRxShdBufferUInt8Type, COM_VAR_NOINIT) Com_TmpRxShdBufferUInt8[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x301_oSupD_Button_Control_oDBCNetWork_188cbd42_Rx/D_Button3_Control_oSupD_Button_Control_oDBCNetWork_651cf15f_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/D_Led3_Control_oSupD_Led_Control_oDBCNetWork_a9ae0ad1_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/D_Led1_CtrlMode_oSupD_Led_CtrlMode_oDBCNetWork_e2fdf3e9_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x302_oSupE_Function_1_oDBCNetWork_28664efe_Rx/E_Sig_0x302_Used_2_oSupE_Function_1_oDBCNetWork_1b13f84a_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x301_oSupD_Button_Control_oDBCNetWork_188cbd42_Rx/D_Button2_Control_oSupD_Button_Control_oDBCNetWork_c42575b1_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/D_Led4_Control_oSupD_Led_Control_oDBCNetWork_9b603ecf_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/D_Led2_CtrlMode_oSupD_Led_CtrlMode_oDBCNetWork_01b4444b_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x302_oSupE_Function_1_oDBCNetWork_28664efe_Rx/E_Sig_0x302_Used_3_oSupE_Function_1_oDBCNetWork_27731b42_Rx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x301_oSupD_Button_Control_oDBCNetWork_188cbd42_Rx/D_Button1_Control_oSupD_Button_Control_oDBCNetWork_fc1efec2_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/D_Led2_Control_oSupD_Led_Control_oDBCNetWork_e7270178_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/SupD_Counter_0x304_oSupD_Led_CtrlMode_oDBCNetWork_9ab89d28_Rx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x301_oSupD_Button_Control_oDBCNetWork_188cbd42_Rx/D_Button4_Control_oSupD_Button_Control_oDBCNetWork_b4526357_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/SupD_Checksum_0x300_oSupD_Led_Control_oDBCNetWork_2c493488_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/D_Led3_CtrlMode_oSupD_Led_CtrlMode_oDBCNetWork_e9a3d4ea_Rx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/D_Led1_Control_oSupD_Led_Control_oDBCNetWork_34bc1d83_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/D_Led4_CtrlMode_oSupD_Led_CtrlMode_oDBCNetWork_1c562d4e_Rx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x300_oSupD_Led_Control_oDBCNetWork_89733210_Rx/SupD_Counter_0x300_oSupD_Led_Control_oDBCNetWork_b943cd4b_Rx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x304_oSupD_Led_CtrlMode_oDBCNetWork_663125ab_Rx/SupD_Checksum_0x304_oSupD_Led_CtrlMode_oDBCNetWork_984004db_Rx] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TransmitRequest
**********************************************************************************************************************/
/** 
  \var    Com_TransmitRequest
  \brief  Transmit request flag used for decoupled Tx I-PDU tranmission.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TransmitRequestType, COM_VAR_NOINIT) Com_TransmitRequest[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Angle_oDBCNetWork_afae1504_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SupF_ComError_oDBCNetWork_f4af97d3_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Function_1_oDBCNetWork_003f31ca_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/SupF_PowerMode_oDBCNetWork_c1c74254_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxBuffer
**********************************************************************************************************************/
/** 
  \var    Com_TxBuffer
  \brief  Shared uint8 buffer for Tx I-PDUs and ComSignalGroup shadow buffer.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxBufferType, COM_VAR_NOINIT) Com_TxBuffer[74];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Angle_oDBCNetWork_afae1504_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x213_oSupF_Angle_oDBCNetWork_3c68f302_TxSigGrpInTxIPDU] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Angle_oDBCNetWork_afae1504_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SupF_Angle_oDBCNetWork_afae1504_Tx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Angle_oDBCNetWork_afae1504_Tx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x211_oSupF_Button_State_oDBCNetWork_b368711c_TxSigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x211_oSupF_Button_State_oDBCNetWork_b368711c_TxSigGrpInTxIPDU] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x211_oSupF_Button_State_oDBCNetWork_b368711c_TxSigGrpInTxIPDU] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/SupF_ComError_oDBCNetWork_f4af97d3_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x216_oSupF_ComError_oDBCNetWork_8d63d174_TxSigGrpInTxIPDU] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/SupF_ComError_oDBCNetWork_f4af97d3_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x216_oSupF_ComError_oDBCNetWork_8d63d174_TxSigGrpInTxIPDU] */
  /*    18 */  /* [/ActiveEcuC/Com/ComConfig/SupF_ComError_oDBCNetWork_f4af97d3_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SupF_ComError_oDBCNetWork_f4af97d3_Tx] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/SupF_ComError_oDBCNetWork_f4af97d3_Tx] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Function_1_oDBCNetWork_003f31ca_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_TxSigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SupF_Function_1_oDBCNetWork_003f31ca_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_TxSigGrpInTxIPDU] */
  /*    31 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Function_1_oDBCNetWork_003f31ca_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_TxSigGrpInTxIPDU] */
  /*    32 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x210_oSupF_Led_State_oDBCNetWork_ec44dd46_TxSigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x210_oSupF_Led_State_oDBCNetWork_ec44dd46_TxSigGrpInTxIPDU] */
  /*    35 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x210_oSupF_Led_State_oDBCNetWork_ec44dd46_TxSigGrpInTxIPDU] */
  /*    36 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx] */
  /*    39 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx] */
  /*    40 */  /* [/ActiveEcuC/Com/ComConfig/SupF_PowerMode_oDBCNetWork_c1c74254_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x212_oSupF_PowerMode_oDBCNetWork_de62da88_TxSigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SupF_PowerMode_oDBCNetWork_c1c74254_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x212_oSupF_PowerMode_oDBCNetWork_de62da88_TxSigGrpInTxIPDU] */
  /*    47 */  /* [/ActiveEcuC/Com/ComConfig/SupF_PowerMode_oDBCNetWork_c1c74254_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x212_oSupF_PowerMode_oDBCNetWork_de62da88_TxSigGrpInTxIPDU] */
  /*    48 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x210_oSupF_Led_State_oDBCNetWork_ec44dd46_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x210_oSupF_Led_State_oDBCNetWork_ec44dd46_Tx/F_Led1_State_oSupF_Led_State_oDBCNetWork_8a0569d2_Tx] */
  /*    49 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x210_oSupF_Led_State_oDBCNetWork_ec44dd46_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x210_oSupF_Led_State_oDBCNetWork_ec44dd46_Tx/F_Led2_State_oSupF_Led_State_oDBCNetWork_01d657cb_Tx] */
  /*    50 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x210_oSupF_Led_State_oDBCNetWork_ec44dd46_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x210_oSupF_Led_State_oDBCNetWork_ec44dd46_Tx/F_Led3_State_oSupF_Led_State_oDBCNetWork_ce484003_Tx] */
  /*    51 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x210_oSupF_Led_State_oDBCNetWork_ec44dd46_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x210_oSupF_Led_State_oDBCNetWork_ec44dd46_Tx/F_Led4_State_oSupF_Led_State_oDBCNetWork_cd012db8_Tx] */
  /*    52 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x211_oSupF_Button_State_oDBCNetWork_b368711c_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x211_oSupF_Button_State_oDBCNetWork_b368711c_Tx/F_Button2_State_oSupF_Button_State_oDBCNetWork_e6f3a94e_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x211_oSupF_Button_State_oDBCNetWork_b368711c_Tx/F_Button1_State_oSupF_Button_State_oDBCNetWork_ab1ba929_Tx] */
  /*    53 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x211_oSupF_Button_State_oDBCNetWork_b368711c_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x211_oSupF_Button_State_oDBCNetWork_b368711c_Tx/F_Button3_State_oSupF_Button_State_oDBCNetWork_6b7b54ac_Tx] */
  /*    54 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x211_oSupF_Button_State_oDBCNetWork_b368711c_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x211_oSupF_Button_State_oDBCNetWork_b368711c_Tx/F_Button4_State_oSupF_Button_State_oDBCNetWork_7d23a980_Tx] */
  /*    55 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x212_oSupF_PowerMode_oDBCNetWork_de62da88_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x212_oSupF_PowerMode_oDBCNetWork_de62da88_Tx/SupF_Checksum_0x212_oSupF_PowerMode_oDBCNetWork_8c3e64a3_Tx] */
  /*    56 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x212_oSupF_PowerMode_oDBCNetWork_de62da88_Tx] */
  /*    57 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x212_oSupF_PowerMode_oDBCNetWork_de62da88_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x212_oSupF_PowerMode_oDBCNetWork_de62da88_Tx/F_PowerMode_oSupF_PowerMode_oDBCNetWork_16d1a370_Tx] */
  /*    58 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x212_oSupF_PowerMode_oDBCNetWork_de62da88_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x212_oSupF_PowerMode_oDBCNetWork_de62da88_Tx] */
  /*    61 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x212_oSupF_PowerMode_oDBCNetWork_de62da88_Tx] */
  /*    62 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x212_oSupF_PowerMode_oDBCNetWork_de62da88_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x212_oSupF_PowerMode_oDBCNetWork_de62da88_Tx/SupF_Counter_0x212_oSupF_PowerMode_oDBCNetWork_35c7002c_Tx] */
  /*    63 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x213_oSupF_Angle_oDBCNetWork_3c68f302_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x213_oSupF_Angle_oDBCNetWork_3c68f302_Tx/F_AAA_Angle_oSupF_Angle_oDBCNetWork_d35fb591_Tx] */
  /*    64 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx/F_Sig_0x214_Used_1_oSupF_Function_1_oDBCNetWork_cbe4e15e_Tx] */
  /*    65 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx/F_Sig_0x214_Used_1_oSupF_Function_1_oDBCNetWork_cbe4e15e_Tx] */
  /*    66 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx/F_Sig_0x214_Used_2_oSupF_Function_1_oDBCNetWork_8f45c446_Tx] */
  /*    67 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx/F_Sig_0x214_Used_2_oSupF_Function_1_oDBCNetWork_8f45c446_Tx] */
  /*    68 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx/F_Sig_0x214_Used_3_oSupF_Function_1_oDBCNetWork_b325274e_Tx] */
  /*    69 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx/F_Sig_0x214_Used_3_oSupF_Function_1_oDBCNetWork_b325274e_Tx] */
  /*    70 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx/F_Sig_0x214_Used_5_oSupF_Function_1_oDBCNetWork_3a676d7e_Tx] */
  /*    71 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x214_oSupF_Function_1_oDBCNetWork_0607409d_Tx/F_Sig_0x214_Used_5_oSupF_Function_1_oDBCNetWork_3a676d7e_Tx] */
  /* Index        Referable Keys */
  /*    72 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x216_oSupF_ComError_oDBCNetWork_8d63d174_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x216_oSupF_ComError_oDBCNetWork_8d63d174_Tx/F_Mes_Lost_Error_oSupF_ComError_oDBCNetWork_72d68791_Tx] */
  /*    73 */  /* [/ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x216_oSupF_ComError_oDBCNetWork_8d63d174_Tx, /ActiveEcuC/Com/ComConfig/SG_Sig_Grp_0x216_oSupF_ComError_oDBCNetWork_8d63d174_Tx/F_Meg_E2E_Error_oSupF_ComError_oDBCNetWork_edc11637_Tx] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxCyclicProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxCyclicProcessingISRLockCounterType, COM_VAR_NOINIT) Com_TxCyclicProcessingISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxIPduGroupISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxIPduGroupISRLockCounterType, COM_VAR_NOINIT) Com_TxIPduGroupISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduGrpActive
**********************************************************************************************************************/
/** 
  \var    Com_TxPduGrpActive
  \brief  Tx I-PDU based state (started/stopped) of the corresponding I-PDU-Group.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxPduGrpActiveType, COM_VAR_NOINIT) Com_TxPduGrpActive[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Angle_oDBCNetWork_afae1504_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SupF_ComError_oDBCNetWork_f4af97d3_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Function_1_oDBCNetWork_003f31ca_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/SupF_PowerMode_oDBCNetWork_c1c74254_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxProcessingISRLockCounterType, COM_VAR_NOINIT) Com_TxProcessingISRLockCounter;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSduLength
**********************************************************************************************************************/
/** 
  \var    Com_TxSduLength
  \brief  This var Array contains the Com Ipdu Length.
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxSduLengthType, COM_VAR_NOINIT) Com_TxSduLength[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Angle_oDBCNetWork_afae1504_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Button_State_oDBCNetWork_e1c0e29d_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SupF_ComError_oDBCNetWork_f4af97d3_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Function_1_oDBCNetWork_003f31ca_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/SupF_Led_State_oDBCNetWork_35eef7d2_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/SupF_PowerMode_oDBCNetWork_c1c74254_Tx, /ActiveEcuC/Com/ComConfig/XB_SUP_F_oDBCNetWork_Tx_78634bbc] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
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
  END OF FILE: Com_Lcfg.c
**********************************************************************************************************************/

