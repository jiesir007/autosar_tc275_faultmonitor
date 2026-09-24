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
 *             File:  Rte_Dcm.h
 *           Config:  TC27x.dpa
 *      ECU-Project:  TC27x
 *
 *        Generator:  MICROSAR RTE Generator Version 4.21.0
 *                    RTE Core Version 1.21.0
 *          License:  CBD1600956
 *
 *      Description:  Application header file for SW-C <Dcm>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_DCM_H
# define RTE_DCM_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_Dcm_Type.h"
# include "Rte_DataHandleType.h"


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmCommunicationControl_ComMConf_ComMChannel_CN_DBCNetWork_05d62413_DcmCommunicationControl_ComMConf_ComMChannel_CN_DBCNetWork_05d62413(Dcm_CommunicationModeType nextMode);
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmControlDtcSetting_DcmControlDtcSetting(Dcm_ControlDtcSettingType nextMode);
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl(Dcm_DiagnosticSessionControlType nextMode);
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmEcuReset_DcmEcuReset(Dcm_EcuResetType nextMode);
FUNC(Std_ReturnType, RTE_CODE) Rte_SwitchAck_Dcm_DcmEcuReset_DcmEcuReset(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Acceleration_Sensor_Acceleration_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Acceleration_Sensor_Acceleration_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Acceleration_Sensor_Acceleration_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Acceleration_Sensor_Voltage_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Acceleration_Sensor_Voltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Acceleration_Sensor_Voltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Status_FL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Status_FL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Status_FL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Status_FR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Status_FR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Status_FR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Status_RL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Status_RL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Status_RL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Status_RR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Status_RR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Status_RR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Voltage_FL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Voltage_FL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Voltage_FL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Voltage_FR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Voltage_FR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Voltage_FR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Voltage_RL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Voltage_RL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Voltage_RL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Voltage_RR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Voltage_RR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Voltage_RR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pressure_Brake_Pressure_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pressure_Brake_Pressure_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Brake_Pressure_Brake_Pressure_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Brake_Pedal_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Brake_Pedal_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Brake_Pedal_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Brake_Pressure_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Brake_Pressure_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Brake_Pressure_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Status_Hydraulic_Pump_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Status_Hydraulic_Pump_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Status_Hydraulic_Pump_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Valve_Status_FL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Valve_Status_FL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Valve_Status_FL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Valve_Status_FR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Valve_Status_FR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Valve_Status_FR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Valve_Status_RL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Valve_Status_RL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Valve_Status_RL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Valve_Status_RR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Valve_Status_RR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Braking_Valve_Status_RR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Fingerprint_Programming_Date_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Fingerprint_Programming_Date_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Fingerprint_Programming_Date_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Fingerprint_Programming_Date_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Fingerprint_Programming_Date_WriteData(P2CONST(Dcm_Data8ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Fingerprint_Repair_Shop_Identification_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Fingerprint_Repair_Shop_Identification_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Fingerprint_Repair_Shop_Identification_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Fingerprint_Repair_Shop_Identification_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Fingerprint_Repair_Shop_Identification_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Fingerprint_Serial_number_of_flash_tool_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Fingerprint_Serial_number_of_flash_tool_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Fingerprint_Serial_number_of_flash_tool_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Fingerprint_Serial_number_of_flash_tool_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Fingerprint_Serial_number_of_flash_tool_WriteData(P2CONST(Dcm_Data8ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hardware_Part_Number_PartNumber_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hardware_Part_Number_PartNumber_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hardware_Part_Number_PartNumber_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data13ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hardware_Part_Number_PartNumber_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hardware_Part_Number_PartNumber_WriteData(P2CONST(Dcm_Data13ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hardware_Supplier_Identification_HardwareSupplier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hardware_Supplier_Identification_HardwareSupplier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hardware_Supplier_Identification_HardwareSupplier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hardware_Supplier_Identification_HardwareSupplier_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hardware_Supplier_Identification_HardwareSupplier_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydraulic_Pump_Hydraulic_Pump_Performance_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydraulic_Pump_Hydraulic_Pump_Performance_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydraulic_Pump_Hydraulic_Pump_Performance_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydraulic_Pump_Hydraulic_Pump_Voltage_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydraulic_Pump_Hydraulic_Pump_Voltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydraulic_Pump_Hydraulic_Pump_Voltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydraulic_Pump_Status_Hydraulic_Pump_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydraulic_Pump_Status_Hydraulic_Pump_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydraulic_Pump_Status_Hydraulic_Pump_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Status_FL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Status_FL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Status_FL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Status_FR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Status_FR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Status_FR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Status_RL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Status_RL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Status_RL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Status_RR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Status_RR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Status_RR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Voltage_FL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Voltage_FL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Voltage_FL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Voltage_FR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Voltage_FR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Voltage_FR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Voltage_RL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Voltage_RL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Voltage_RL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Voltage_RR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Voltage_RR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Voltage_RR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Inflation_Pressure_Inflation_Pressure_FL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Inflation_Pressure_Inflation_Pressure_FL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Inflation_Pressure_Inflation_Pressure_FL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Inflation_Pressure_Inflation_Pressure_FR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Inflation_Pressure_Inflation_Pressure_FR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Inflation_Pressure_Inflation_Pressure_FR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Inflation_Pressure_Inflation_Pressure_RL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Inflation_Pressure_Inflation_Pressure_RL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Inflation_Pressure_Inflation_Pressure_RL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Inflation_Pressure_Inflation_Pressure_RR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Inflation_Pressure_Inflation_Pressure_RR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Inflation_Pressure_Inflation_Pressure_RR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Serial_Number_SerialNumber_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Serial_Number_SerialNumber_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Serial_Number_SerialNumber_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data13ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Serial_Number_SerialNumber_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Serial_Number_SerialNumber_WriteData(P2CONST(Dcm_Data13ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Service_Information_Remaining_Service_Brake_Fluid_Life_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Service_Information_Remaining_Service_Brake_Fluid_Life_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Service_Information_Remaining_Service_Brake_Fluid_Life_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Service_Information_Remaining_Service_Brake_Fluid_Life_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Service_Information_Remaining_Service_Brake_Fluid_Life_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Service_Information_Remaining_Service_Time_Left_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Service_Information_Remaining_Service_Time_Left_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Service_Information_Remaining_Service_Time_Left_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Service_Information_Remaining_Service_Time_Left_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Service_Information_Remaining_Service_Time_Left_WriteData(P2CONST(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Software_Supplier_Identification_SoftwareSupplier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Software_Supplier_Identification_SoftwareSupplier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Software_Supplier_Identification_SoftwareSupplier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Software_Supplier_Identification_SoftwareSupplier_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Software_Supplier_Identification_SoftwareSupplier_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Software_Version_SoftwareVersion_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Software_Version_SoftwareVersion_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Software_Version_SoftwareVersion_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data5ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Software_Version_SoftwareVersion_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Software_Version_SoftwareVersion_WriteData(P2CONST(Dcm_Data5ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Supply_Voltage_ECU_Voltage_ECU_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Supply_Voltage_ECU_Voltage_ECU_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Supply_Voltage_ECU_Voltage_ECU_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Switches_Brake_Switch_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Switches_Brake_Switch_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Switches_Brake_Switch_ResetToDefault(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Switches_Brake_Switch_ShortTermAdjustment(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Switches_Brake_Switch_ShortTermAdjustment(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Switches_Parking_Brake_Switch_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Switches_Parking_Brake_Switch_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Switches_Parking_Brake_Switch_ResetToDefault(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Switches_Parking_Brake_Switch_ShortTermAdjustment(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Switches_Parking_Brake_Switch_ShortTermAdjustment(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Switches_Rear_Gear_Switch_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Switches_Rear_Gear_Switch_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Switches_Rear_Gear_Switch_ResetToDefault(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Switches_Rear_Gear_Switch_ShortTermAdjustment(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Switches_Rear_Gear_Switch_ShortTermAdjustment(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VIN_VIN_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VIN_VIN_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VIN_VIN_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data17ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VIN_VIN_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VIN_VIN_WriteData(P2CONST(Dcm_Data17ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Direction_of_rotation_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Direction_of_rotation_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Direction_of_rotation_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Speed_FL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Speed_FL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Speed_FL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Speed_FR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Speed_FR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Speed_FR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Speed_RL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Speed_RL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Speed_RL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Speed_RR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Speed_RR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Speed_RR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Voltage_FL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Voltage_FL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Voltage_FL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Voltage_FR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Voltage_FR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Voltage_FR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Voltage_RL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Voltage_RL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Voltage_RL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Voltage_RR_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Voltage_RR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Voltage_RR_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Type_Wheel_type_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Type_Wheel_type_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Type_Wheel_type_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Type_Wheel_type_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Wheel_Type_Wheel_type_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_ECU_Check_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_ECU_Check_status, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_ECU_Check_Start(uint8 In_Start_ECU_Check, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_ECU_Check_is_in_progress, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_UnlockedL1_CompareKey(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_UnlockedL1_CompareKey(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_UnlockedL1_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_UnlockedL1_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Switch_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Switch_DcmCommunicationControl_ComMConf_ComMChannel_CN_DBCNetWork_05d62413_DcmCommunicationControl_ComMConf_ComMChannel_CN_DBCNetWork_05d62413 Rte_Switch_Dcm_DcmCommunicationControl_ComMConf_ComMChannel_CN_DBCNetWork_05d62413_DcmCommunicationControl_ComMConf_ComMChannel_CN_DBCNetWork_05d62413
#  define Rte_Switch_DcmControlDtcSetting_DcmControlDtcSetting Rte_Switch_Dcm_DcmControlDtcSetting_DcmControlDtcSetting
#  define Rte_Switch_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl Rte_Switch_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl
#  define Rte_Switch_DcmEcuReset_DcmEcuReset Rte_Switch_Dcm_DcmEcuReset_DcmEcuReset


/**********************************************************************************************************************
 * Rte_Feedback_<p>_<m> (mode switch acknowledge)
 *********************************************************************************************************************/
#  define Rte_SwitchAck_DcmEcuReset_DcmEcuReset Rte_SwitchAck_Dcm_DcmEcuReset_DcmEcuReset


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define Rte_Call_DataServices_Acceleration_Sensor_Acceleration_ConditionCheckRead Rte_Call_Dcm_DataServices_Acceleration_Sensor_Acceleration_ConditionCheckRead
#  define Rte_Call_DataServices_Acceleration_Sensor_Acceleration_ReadData Rte_Call_Dcm_DataServices_Acceleration_Sensor_Acceleration_ReadData
#  define Rte_Call_DataServices_Acceleration_Sensor_Voltage_ConditionCheckRead Rte_Call_Dcm_DataServices_Acceleration_Sensor_Voltage_ConditionCheckRead
#  define Rte_Call_DataServices_Acceleration_Sensor_Voltage_ReadData Rte_Call_Dcm_DataServices_Acceleration_Sensor_Voltage_ReadData
#  define Rte_Call_DataServices_Brake_Pedal_Valve_Status_FL_ConditionCheckRead Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Status_FL_ConditionCheckRead
#  define Rte_Call_DataServices_Brake_Pedal_Valve_Status_FL_ReadData Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Status_FL_ReadData
#  define Rte_Call_DataServices_Brake_Pedal_Valve_Status_FR_ConditionCheckRead Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Status_FR_ConditionCheckRead
#  define Rte_Call_DataServices_Brake_Pedal_Valve_Status_FR_ReadData Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Status_FR_ReadData
#  define Rte_Call_DataServices_Brake_Pedal_Valve_Status_RL_ConditionCheckRead Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Status_RL_ConditionCheckRead
#  define Rte_Call_DataServices_Brake_Pedal_Valve_Status_RL_ReadData Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Status_RL_ReadData
#  define Rte_Call_DataServices_Brake_Pedal_Valve_Status_RR_ConditionCheckRead Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Status_RR_ConditionCheckRead
#  define Rte_Call_DataServices_Brake_Pedal_Valve_Status_RR_ReadData Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Status_RR_ReadData
#  define Rte_Call_DataServices_Brake_Pedal_Valve_Voltage_FL_ConditionCheckRead Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Voltage_FL_ConditionCheckRead
#  define Rte_Call_DataServices_Brake_Pedal_Valve_Voltage_FL_ReadData Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Voltage_FL_ReadData
#  define Rte_Call_DataServices_Brake_Pedal_Valve_Voltage_FR_ConditionCheckRead Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Voltage_FR_ConditionCheckRead
#  define Rte_Call_DataServices_Brake_Pedal_Valve_Voltage_FR_ReadData Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Voltage_FR_ReadData
#  define Rte_Call_DataServices_Brake_Pedal_Valve_Voltage_RL_ConditionCheckRead Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Voltage_RL_ConditionCheckRead
#  define Rte_Call_DataServices_Brake_Pedal_Valve_Voltage_RL_ReadData Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Voltage_RL_ReadData
#  define Rte_Call_DataServices_Brake_Pedal_Valve_Voltage_RR_ConditionCheckRead Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Voltage_RR_ConditionCheckRead
#  define Rte_Call_DataServices_Brake_Pedal_Valve_Voltage_RR_ReadData Rte_Call_Dcm_DataServices_Brake_Pedal_Valve_Voltage_RR_ReadData
#  define Rte_Call_DataServices_Brake_Pressure_Brake_Pressure_ConditionCheckRead Rte_Call_Dcm_DataServices_Brake_Pressure_Brake_Pressure_ConditionCheckRead
#  define Rte_Call_DataServices_Brake_Pressure_Brake_Pressure_ReadData Rte_Call_Dcm_DataServices_Brake_Pressure_Brake_Pressure_ReadData
#  define Rte_Call_DataServices_Braking_Brake_Pedal_ConditionCheckRead Rte_Call_Dcm_DataServices_Braking_Brake_Pedal_ConditionCheckRead
#  define Rte_Call_DataServices_Braking_Brake_Pedal_ReadData Rte_Call_Dcm_DataServices_Braking_Brake_Pedal_ReadData
#  define Rte_Call_DataServices_Braking_Brake_Pressure_ConditionCheckRead Rte_Call_Dcm_DataServices_Braking_Brake_Pressure_ConditionCheckRead
#  define Rte_Call_DataServices_Braking_Brake_Pressure_ReadData Rte_Call_Dcm_DataServices_Braking_Brake_Pressure_ReadData
#  define Rte_Call_DataServices_Braking_Status_Hydraulic_Pump_ConditionCheckRead Rte_Call_Dcm_DataServices_Braking_Status_Hydraulic_Pump_ConditionCheckRead
#  define Rte_Call_DataServices_Braking_Status_Hydraulic_Pump_ReadData Rte_Call_Dcm_DataServices_Braking_Status_Hydraulic_Pump_ReadData
#  define Rte_Call_DataServices_Braking_Valve_Status_FL_ConditionCheckRead Rte_Call_Dcm_DataServices_Braking_Valve_Status_FL_ConditionCheckRead
#  define Rte_Call_DataServices_Braking_Valve_Status_FL_ReadData Rte_Call_Dcm_DataServices_Braking_Valve_Status_FL_ReadData
#  define Rte_Call_DataServices_Braking_Valve_Status_FR_ConditionCheckRead Rte_Call_Dcm_DataServices_Braking_Valve_Status_FR_ConditionCheckRead
#  define Rte_Call_DataServices_Braking_Valve_Status_FR_ReadData Rte_Call_Dcm_DataServices_Braking_Valve_Status_FR_ReadData
#  define Rte_Call_DataServices_Braking_Valve_Status_RL_ConditionCheckRead Rte_Call_Dcm_DataServices_Braking_Valve_Status_RL_ConditionCheckRead
#  define Rte_Call_DataServices_Braking_Valve_Status_RL_ReadData Rte_Call_Dcm_DataServices_Braking_Valve_Status_RL_ReadData
#  define Rte_Call_DataServices_Braking_Valve_Status_RR_ConditionCheckRead Rte_Call_Dcm_DataServices_Braking_Valve_Status_RR_ConditionCheckRead
#  define Rte_Call_DataServices_Braking_Valve_Status_RR_ReadData Rte_Call_Dcm_DataServices_Braking_Valve_Status_RR_ReadData
#  define Rte_Call_DataServices_Fingerprint_Programming_Date_ConditionCheckRead Rte_Call_Dcm_DataServices_Fingerprint_Programming_Date_ConditionCheckRead
#  define Rte_Call_DataServices_Fingerprint_Programming_Date_ReadData Rte_Call_Dcm_DataServices_Fingerprint_Programming_Date_ReadData
#  define Rte_Call_DataServices_Fingerprint_Programming_Date_WriteData Rte_Call_Dcm_DataServices_Fingerprint_Programming_Date_WriteData
#  define Rte_Call_DataServices_Fingerprint_Repair_Shop_Identification_ConditionCheckRead Rte_Call_Dcm_DataServices_Fingerprint_Repair_Shop_Identification_ConditionCheckRead
#  define Rte_Call_DataServices_Fingerprint_Repair_Shop_Identification_ReadData Rte_Call_Dcm_DataServices_Fingerprint_Repair_Shop_Identification_ReadData
#  define Rte_Call_DataServices_Fingerprint_Repair_Shop_Identification_WriteData Rte_Call_Dcm_DataServices_Fingerprint_Repair_Shop_Identification_WriteData
#  define Rte_Call_DataServices_Fingerprint_Serial_number_of_flash_tool_ConditionCheckRead Rte_Call_Dcm_DataServices_Fingerprint_Serial_number_of_flash_tool_ConditionCheckRead
#  define Rte_Call_DataServices_Fingerprint_Serial_number_of_flash_tool_ReadData Rte_Call_Dcm_DataServices_Fingerprint_Serial_number_of_flash_tool_ReadData
#  define Rte_Call_DataServices_Fingerprint_Serial_number_of_flash_tool_WriteData Rte_Call_Dcm_DataServices_Fingerprint_Serial_number_of_flash_tool_WriteData
#  define Rte_Call_DataServices_Hardware_Part_Number_PartNumber_ConditionCheckRead Rte_Call_Dcm_DataServices_Hardware_Part_Number_PartNumber_ConditionCheckRead
#  define Rte_Call_DataServices_Hardware_Part_Number_PartNumber_ReadData Rte_Call_Dcm_DataServices_Hardware_Part_Number_PartNumber_ReadData
#  define Rte_Call_DataServices_Hardware_Part_Number_PartNumber_WriteData Rte_Call_Dcm_DataServices_Hardware_Part_Number_PartNumber_WriteData
#  define Rte_Call_DataServices_Hardware_Supplier_Identification_HardwareSupplier_ConditionCheckRead Rte_Call_Dcm_DataServices_Hardware_Supplier_Identification_HardwareSupplier_ConditionCheckRead
#  define Rte_Call_DataServices_Hardware_Supplier_Identification_HardwareSupplier_ReadData Rte_Call_Dcm_DataServices_Hardware_Supplier_Identification_HardwareSupplier_ReadData
#  define Rte_Call_DataServices_Hardware_Supplier_Identification_HardwareSupplier_WriteData Rte_Call_Dcm_DataServices_Hardware_Supplier_Identification_HardwareSupplier_WriteData
#  define Rte_Call_DataServices_Hydraulic_Pump_Hydraulic_Pump_Performance_ConditionCheckRead Rte_Call_Dcm_DataServices_Hydraulic_Pump_Hydraulic_Pump_Performance_ConditionCheckRead
#  define Rte_Call_DataServices_Hydraulic_Pump_Hydraulic_Pump_Performance_ReadData Rte_Call_Dcm_DataServices_Hydraulic_Pump_Hydraulic_Pump_Performance_ReadData
#  define Rte_Call_DataServices_Hydraulic_Pump_Hydraulic_Pump_Voltage_ConditionCheckRead Rte_Call_Dcm_DataServices_Hydraulic_Pump_Hydraulic_Pump_Voltage_ConditionCheckRead
#  define Rte_Call_DataServices_Hydraulic_Pump_Hydraulic_Pump_Voltage_ReadData Rte_Call_Dcm_DataServices_Hydraulic_Pump_Hydraulic_Pump_Voltage_ReadData
#  define Rte_Call_DataServices_Hydraulic_Pump_Status_Hydraulic_Pump_ConditionCheckRead Rte_Call_Dcm_DataServices_Hydraulic_Pump_Status_Hydraulic_Pump_ConditionCheckRead
#  define Rte_Call_DataServices_Hydraulic_Pump_Status_Hydraulic_Pump_ReadData Rte_Call_Dcm_DataServices_Hydraulic_Pump_Status_Hydraulic_Pump_ReadData
#  define Rte_Call_DataServices_Hydro_Unit_Valve_Status_FL_ConditionCheckRead Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Status_FL_ConditionCheckRead
#  define Rte_Call_DataServices_Hydro_Unit_Valve_Status_FL_ReadData Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Status_FL_ReadData
#  define Rte_Call_DataServices_Hydro_Unit_Valve_Status_FR_ConditionCheckRead Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Status_FR_ConditionCheckRead
#  define Rte_Call_DataServices_Hydro_Unit_Valve_Status_FR_ReadData Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Status_FR_ReadData
#  define Rte_Call_DataServices_Hydro_Unit_Valve_Status_RL_ConditionCheckRead Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Status_RL_ConditionCheckRead
#  define Rte_Call_DataServices_Hydro_Unit_Valve_Status_RL_ReadData Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Status_RL_ReadData
#  define Rte_Call_DataServices_Hydro_Unit_Valve_Status_RR_ConditionCheckRead Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Status_RR_ConditionCheckRead
#  define Rte_Call_DataServices_Hydro_Unit_Valve_Status_RR_ReadData Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Status_RR_ReadData
#  define Rte_Call_DataServices_Hydro_Unit_Valve_Voltage_FL_ConditionCheckRead Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Voltage_FL_ConditionCheckRead
#  define Rte_Call_DataServices_Hydro_Unit_Valve_Voltage_FL_ReadData Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Voltage_FL_ReadData
#  define Rte_Call_DataServices_Hydro_Unit_Valve_Voltage_FR_ConditionCheckRead Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Voltage_FR_ConditionCheckRead
#  define Rte_Call_DataServices_Hydro_Unit_Valve_Voltage_FR_ReadData Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Voltage_FR_ReadData
#  define Rte_Call_DataServices_Hydro_Unit_Valve_Voltage_RL_ConditionCheckRead Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Voltage_RL_ConditionCheckRead
#  define Rte_Call_DataServices_Hydro_Unit_Valve_Voltage_RL_ReadData Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Voltage_RL_ReadData
#  define Rte_Call_DataServices_Hydro_Unit_Valve_Voltage_RR_ConditionCheckRead Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Voltage_RR_ConditionCheckRead
#  define Rte_Call_DataServices_Hydro_Unit_Valve_Voltage_RR_ReadData Rte_Call_Dcm_DataServices_Hydro_Unit_Valve_Voltage_RR_ReadData
#  define Rte_Call_DataServices_Inflation_Pressure_Inflation_Pressure_FL_ConditionCheckRead Rte_Call_Dcm_DataServices_Inflation_Pressure_Inflation_Pressure_FL_ConditionCheckRead
#  define Rte_Call_DataServices_Inflation_Pressure_Inflation_Pressure_FL_ReadData Rte_Call_Dcm_DataServices_Inflation_Pressure_Inflation_Pressure_FL_ReadData
#  define Rte_Call_DataServices_Inflation_Pressure_Inflation_Pressure_FR_ConditionCheckRead Rte_Call_Dcm_DataServices_Inflation_Pressure_Inflation_Pressure_FR_ConditionCheckRead
#  define Rte_Call_DataServices_Inflation_Pressure_Inflation_Pressure_FR_ReadData Rte_Call_Dcm_DataServices_Inflation_Pressure_Inflation_Pressure_FR_ReadData
#  define Rte_Call_DataServices_Inflation_Pressure_Inflation_Pressure_RL_ConditionCheckRead Rte_Call_Dcm_DataServices_Inflation_Pressure_Inflation_Pressure_RL_ConditionCheckRead
#  define Rte_Call_DataServices_Inflation_Pressure_Inflation_Pressure_RL_ReadData Rte_Call_Dcm_DataServices_Inflation_Pressure_Inflation_Pressure_RL_ReadData
#  define Rte_Call_DataServices_Inflation_Pressure_Inflation_Pressure_RR_ConditionCheckRead Rte_Call_Dcm_DataServices_Inflation_Pressure_Inflation_Pressure_RR_ConditionCheckRead
#  define Rte_Call_DataServices_Inflation_Pressure_Inflation_Pressure_RR_ReadData Rte_Call_Dcm_DataServices_Inflation_Pressure_Inflation_Pressure_RR_ReadData
#  define Rte_Call_DataServices_Serial_Number_SerialNumber_ConditionCheckRead Rte_Call_Dcm_DataServices_Serial_Number_SerialNumber_ConditionCheckRead
#  define Rte_Call_DataServices_Serial_Number_SerialNumber_ReadData Rte_Call_Dcm_DataServices_Serial_Number_SerialNumber_ReadData
#  define Rte_Call_DataServices_Serial_Number_SerialNumber_WriteData Rte_Call_Dcm_DataServices_Serial_Number_SerialNumber_WriteData
#  define Rte_Call_DataServices_Service_Information_Remaining_Service_Brake_Fluid_Life_ConditionCheckRead Rte_Call_Dcm_DataServices_Service_Information_Remaining_Service_Brake_Fluid_Life_ConditionCheckRead
#  define Rte_Call_DataServices_Service_Information_Remaining_Service_Brake_Fluid_Life_ReadData Rte_Call_Dcm_DataServices_Service_Information_Remaining_Service_Brake_Fluid_Life_ReadData
#  define Rte_Call_DataServices_Service_Information_Remaining_Service_Brake_Fluid_Life_WriteData Rte_Call_Dcm_DataServices_Service_Information_Remaining_Service_Brake_Fluid_Life_WriteData
#  define Rte_Call_DataServices_Service_Information_Remaining_Service_Time_Left_ConditionCheckRead Rte_Call_Dcm_DataServices_Service_Information_Remaining_Service_Time_Left_ConditionCheckRead
#  define Rte_Call_DataServices_Service_Information_Remaining_Service_Time_Left_ReadData Rte_Call_Dcm_DataServices_Service_Information_Remaining_Service_Time_Left_ReadData
#  define Rte_Call_DataServices_Service_Information_Remaining_Service_Time_Left_WriteData Rte_Call_Dcm_DataServices_Service_Information_Remaining_Service_Time_Left_WriteData
#  define Rte_Call_DataServices_Software_Supplier_Identification_SoftwareSupplier_ConditionCheckRead Rte_Call_Dcm_DataServices_Software_Supplier_Identification_SoftwareSupplier_ConditionCheckRead
#  define Rte_Call_DataServices_Software_Supplier_Identification_SoftwareSupplier_ReadData Rte_Call_Dcm_DataServices_Software_Supplier_Identification_SoftwareSupplier_ReadData
#  define Rte_Call_DataServices_Software_Supplier_Identification_SoftwareSupplier_WriteData Rte_Call_Dcm_DataServices_Software_Supplier_Identification_SoftwareSupplier_WriteData
#  define Rte_Call_DataServices_Software_Version_SoftwareVersion_ConditionCheckRead Rte_Call_Dcm_DataServices_Software_Version_SoftwareVersion_ConditionCheckRead
#  define Rte_Call_DataServices_Software_Version_SoftwareVersion_ReadData Rte_Call_Dcm_DataServices_Software_Version_SoftwareVersion_ReadData
#  define Rte_Call_DataServices_Software_Version_SoftwareVersion_WriteData Rte_Call_Dcm_DataServices_Software_Version_SoftwareVersion_WriteData
#  define Rte_Call_DataServices_Supply_Voltage_ECU_Voltage_ECU_ConditionCheckRead Rte_Call_Dcm_DataServices_Supply_Voltage_ECU_Voltage_ECU_ConditionCheckRead
#  define Rte_Call_DataServices_Supply_Voltage_ECU_Voltage_ECU_ReadData Rte_Call_Dcm_DataServices_Supply_Voltage_ECU_Voltage_ECU_ReadData
#  define Rte_Call_DataServices_Switches_Brake_Switch_ReadData Rte_Call_Dcm_DataServices_Switches_Brake_Switch_ReadData
#  define Rte_Call_DataServices_Switches_Brake_Switch_ResetToDefault Rte_Call_Dcm_DataServices_Switches_Brake_Switch_ResetToDefault
#  define Rte_Call_DataServices_Switches_Brake_Switch_ShortTermAdjustment Rte_Call_Dcm_DataServices_Switches_Brake_Switch_ShortTermAdjustment
#  define Rte_Call_DataServices_Switches_Parking_Brake_Switch_ReadData Rte_Call_Dcm_DataServices_Switches_Parking_Brake_Switch_ReadData
#  define Rte_Call_DataServices_Switches_Parking_Brake_Switch_ResetToDefault Rte_Call_Dcm_DataServices_Switches_Parking_Brake_Switch_ResetToDefault
#  define Rte_Call_DataServices_Switches_Parking_Brake_Switch_ShortTermAdjustment Rte_Call_Dcm_DataServices_Switches_Parking_Brake_Switch_ShortTermAdjustment
#  define Rte_Call_DataServices_Switches_Rear_Gear_Switch_ReadData Rte_Call_Dcm_DataServices_Switches_Rear_Gear_Switch_ReadData
#  define Rte_Call_DataServices_Switches_Rear_Gear_Switch_ResetToDefault Rte_Call_Dcm_DataServices_Switches_Rear_Gear_Switch_ResetToDefault
#  define Rte_Call_DataServices_Switches_Rear_Gear_Switch_ShortTermAdjustment Rte_Call_Dcm_DataServices_Switches_Rear_Gear_Switch_ShortTermAdjustment
#  define Rte_Call_DataServices_VIN_VIN_ConditionCheckRead Rte_Call_Dcm_DataServices_VIN_VIN_ConditionCheckRead
#  define Rte_Call_DataServices_VIN_VIN_ReadData Rte_Call_Dcm_DataServices_VIN_VIN_ReadData
#  define Rte_Call_DataServices_VIN_VIN_WriteData Rte_Call_Dcm_DataServices_VIN_VIN_WriteData
#  define Rte_Call_DataServices_Wheel_Speed_Direction_of_rotation_ConditionCheckRead Rte_Call_Dcm_DataServices_Wheel_Speed_Direction_of_rotation_ConditionCheckRead
#  define Rte_Call_DataServices_Wheel_Speed_Direction_of_rotation_ReadData Rte_Call_Dcm_DataServices_Wheel_Speed_Direction_of_rotation_ReadData
#  define Rte_Call_DataServices_Wheel_Speed_Wheel_Speed_FL_ConditionCheckRead Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Speed_FL_ConditionCheckRead
#  define Rte_Call_DataServices_Wheel_Speed_Wheel_Speed_FL_ReadData Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Speed_FL_ReadData
#  define Rte_Call_DataServices_Wheel_Speed_Wheel_Speed_FR_ConditionCheckRead Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Speed_FR_ConditionCheckRead
#  define Rte_Call_DataServices_Wheel_Speed_Wheel_Speed_FR_ReadData Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Speed_FR_ReadData
#  define Rte_Call_DataServices_Wheel_Speed_Wheel_Speed_RL_ConditionCheckRead Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Speed_RL_ConditionCheckRead
#  define Rte_Call_DataServices_Wheel_Speed_Wheel_Speed_RL_ReadData Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Speed_RL_ReadData
#  define Rte_Call_DataServices_Wheel_Speed_Wheel_Speed_RR_ConditionCheckRead Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Speed_RR_ConditionCheckRead
#  define Rte_Call_DataServices_Wheel_Speed_Wheel_Speed_RR_ReadData Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Speed_RR_ReadData
#  define Rte_Call_DataServices_Wheel_Speed_Wheel_Voltage_FL_ConditionCheckRead Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Voltage_FL_ConditionCheckRead
#  define Rte_Call_DataServices_Wheel_Speed_Wheel_Voltage_FL_ReadData Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Voltage_FL_ReadData
#  define Rte_Call_DataServices_Wheel_Speed_Wheel_Voltage_FR_ConditionCheckRead Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Voltage_FR_ConditionCheckRead
#  define Rte_Call_DataServices_Wheel_Speed_Wheel_Voltage_FR_ReadData Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Voltage_FR_ReadData
#  define Rte_Call_DataServices_Wheel_Speed_Wheel_Voltage_RL_ConditionCheckRead Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Voltage_RL_ConditionCheckRead
#  define Rte_Call_DataServices_Wheel_Speed_Wheel_Voltage_RL_ReadData Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Voltage_RL_ReadData
#  define Rte_Call_DataServices_Wheel_Speed_Wheel_Voltage_RR_ConditionCheckRead Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Voltage_RR_ConditionCheckRead
#  define Rte_Call_DataServices_Wheel_Speed_Wheel_Voltage_RR_ReadData Rte_Call_Dcm_DataServices_Wheel_Speed_Wheel_Voltage_RR_ReadData
#  define Rte_Call_DataServices_Wheel_Type_Wheel_type_ConditionCheckRead Rte_Call_Dcm_DataServices_Wheel_Type_Wheel_type_ConditionCheckRead
#  define Rte_Call_DataServices_Wheel_Type_Wheel_type_ReadData Rte_Call_Dcm_DataServices_Wheel_Type_Wheel_type_ReadData
#  define Rte_Call_DataServices_Wheel_Type_Wheel_type_WriteData Rte_Call_Dcm_DataServices_Wheel_Type_Wheel_type_WriteData
#  define Rte_Call_RoutineServices_ECU_Check_RequestResults Rte_Call_Dcm_RoutineServices_ECU_Check_RequestResults
#  define Rte_Call_RoutineServices_ECU_Check_Start Rte_Call_Dcm_RoutineServices_ECU_Check_Start
#  define Rte_Call_SecurityAccess_UnlockedL1_CompareKey Rte_Call_Dcm_SecurityAccess_UnlockedL1_CompareKey
#  define Rte_Call_SecurityAccess_UnlockedL1_GetSeed Rte_Call_Dcm_SecurityAccess_UnlockedL1_GetSeed


# endif /* !defined(RTE_CORE) */


# define Dcm_START_SEC_CODE
# include "Dcm_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_Dcm_MainFunction Dcm_MainFunction
#  define RTE_RUNNABLE_GetActiveProtocol Dcm_GetActiveProtocol
#  define RTE_RUNNABLE_GetRequestKind Dcm_GetRequestKind
#  define RTE_RUNNABLE_GetSecurityLevel Dcm_GetSecurityLevel
#  define RTE_RUNNABLE_GetSesCtrlType Dcm_GetSesCtrlType
#  define RTE_RUNNABLE_ResetToDefaultSession Dcm_ResetToDefaultSession
#  define RTE_RUNNABLE_SetActiveDiagnostic Dcm_SetActiveDiagnostic
# endif

FUNC(void, Dcm_CODE) Dcm_MainFunction(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_GetActiveProtocol(P2VAR(Dcm_ProtocolType, AUTOMATIC, RTE_DCM_APPL_VAR) ActiveProtocol); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_GetRequestKind(uint16 TesterSourceAddress, P2VAR(Dcm_RequestKindType, AUTOMATIC, RTE_DCM_APPL_VAR) RequestKind); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_GetSecurityLevel(P2VAR(Dcm_SecLevelType, AUTOMATIC, RTE_DCM_APPL_VAR) SecLevel); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_GetSesCtrlType(P2VAR(Dcm_SesCtrlType, AUTOMATIC, RTE_DCM_APPL_VAR) SesCtrlType); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_ResetToDefaultSession(void); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_SetActiveDiagnostic(boolean active); /* PRQA S 3451, 0786, 3449, 0624 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define Dcm_STOP_SEC_CODE
# include "Dcm_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_DCMServices_E_NOT_OK (1U)

#  define RTE_E_DCMServices_E_OK (0U)

#  define RTE_E_DataServices_Acceleration_Sensor_Acceleration_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Acceleration_Sensor_Acceleration_E_NOT_OK (1U)

#  define RTE_E_DataServices_Acceleration_Sensor_Voltage_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Acceleration_Sensor_Voltage_E_NOT_OK (1U)

#  define RTE_E_DataServices_Brake_Pedal_Valve_Status_FL_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Brake_Pedal_Valve_Status_FL_E_NOT_OK (1U)

#  define RTE_E_DataServices_Brake_Pedal_Valve_Status_FR_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Brake_Pedal_Valve_Status_FR_E_NOT_OK (1U)

#  define RTE_E_DataServices_Brake_Pedal_Valve_Status_RL_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Brake_Pedal_Valve_Status_RL_E_NOT_OK (1U)

#  define RTE_E_DataServices_Brake_Pedal_Valve_Status_RR_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Brake_Pedal_Valve_Status_RR_E_NOT_OK (1U)

#  define RTE_E_DataServices_Brake_Pedal_Valve_Voltage_FL_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Brake_Pedal_Valve_Voltage_FL_E_NOT_OK (1U)

#  define RTE_E_DataServices_Brake_Pedal_Valve_Voltage_FR_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Brake_Pedal_Valve_Voltage_FR_E_NOT_OK (1U)

#  define RTE_E_DataServices_Brake_Pedal_Valve_Voltage_RL_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Brake_Pedal_Valve_Voltage_RL_E_NOT_OK (1U)

#  define RTE_E_DataServices_Brake_Pedal_Valve_Voltage_RR_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Brake_Pedal_Valve_Voltage_RR_E_NOT_OK (1U)

#  define RTE_E_DataServices_Brake_Pressure_Brake_Pressure_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Brake_Pressure_Brake_Pressure_E_NOT_OK (1U)

#  define RTE_E_DataServices_Braking_Brake_Pedal_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Braking_Brake_Pedal_E_NOT_OK (1U)

#  define RTE_E_DataServices_Braking_Brake_Pressure_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Braking_Brake_Pressure_E_NOT_OK (1U)

#  define RTE_E_DataServices_Braking_Status_Hydraulic_Pump_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Braking_Status_Hydraulic_Pump_E_NOT_OK (1U)

#  define RTE_E_DataServices_Braking_Valve_Status_FL_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Braking_Valve_Status_FL_E_NOT_OK (1U)

#  define RTE_E_DataServices_Braking_Valve_Status_FR_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Braking_Valve_Status_FR_E_NOT_OK (1U)

#  define RTE_E_DataServices_Braking_Valve_Status_RL_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Braking_Valve_Status_RL_E_NOT_OK (1U)

#  define RTE_E_DataServices_Braking_Valve_Status_RR_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Braking_Valve_Status_RR_E_NOT_OK (1U)

#  define RTE_E_DataServices_Fingerprint_Programming_Date_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Fingerprint_Programming_Date_E_NOT_OK (1U)

#  define RTE_E_DataServices_Fingerprint_Repair_Shop_Identification_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Fingerprint_Repair_Shop_Identification_E_NOT_OK (1U)

#  define RTE_E_DataServices_Fingerprint_Serial_number_of_flash_tool_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Fingerprint_Serial_number_of_flash_tool_E_NOT_OK (1U)

#  define RTE_E_DataServices_Hardware_Part_Number_PartNumber_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Hardware_Part_Number_PartNumber_E_NOT_OK (1U)

#  define RTE_E_DataServices_Hardware_Supplier_Identification_HardwareSupplier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Hardware_Supplier_Identification_HardwareSupplier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Hydraulic_Pump_Hydraulic_Pump_Performance_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Hydraulic_Pump_Hydraulic_Pump_Performance_E_NOT_OK (1U)

#  define RTE_E_DataServices_Hydraulic_Pump_Hydraulic_Pump_Voltage_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Hydraulic_Pump_Hydraulic_Pump_Voltage_E_NOT_OK (1U)

#  define RTE_E_DataServices_Hydraulic_Pump_Status_Hydraulic_Pump_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Hydraulic_Pump_Status_Hydraulic_Pump_E_NOT_OK (1U)

#  define RTE_E_DataServices_Hydro_Unit_Valve_Status_FL_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Hydro_Unit_Valve_Status_FL_E_NOT_OK (1U)

#  define RTE_E_DataServices_Hydro_Unit_Valve_Status_FR_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Hydro_Unit_Valve_Status_FR_E_NOT_OK (1U)

#  define RTE_E_DataServices_Hydro_Unit_Valve_Status_RL_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Hydro_Unit_Valve_Status_RL_E_NOT_OK (1U)

#  define RTE_E_DataServices_Hydro_Unit_Valve_Status_RR_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Hydro_Unit_Valve_Status_RR_E_NOT_OK (1U)

#  define RTE_E_DataServices_Hydro_Unit_Valve_Voltage_FL_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Hydro_Unit_Valve_Voltage_FL_E_NOT_OK (1U)

#  define RTE_E_DataServices_Hydro_Unit_Valve_Voltage_FR_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Hydro_Unit_Valve_Voltage_FR_E_NOT_OK (1U)

#  define RTE_E_DataServices_Hydro_Unit_Valve_Voltage_RL_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Hydro_Unit_Valve_Voltage_RL_E_NOT_OK (1U)

#  define RTE_E_DataServices_Hydro_Unit_Valve_Voltage_RR_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Hydro_Unit_Valve_Voltage_RR_E_NOT_OK (1U)

#  define RTE_E_DataServices_Inflation_Pressure_Inflation_Pressure_FL_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Inflation_Pressure_Inflation_Pressure_FL_E_NOT_OK (1U)

#  define RTE_E_DataServices_Inflation_Pressure_Inflation_Pressure_FR_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Inflation_Pressure_Inflation_Pressure_FR_E_NOT_OK (1U)

#  define RTE_E_DataServices_Inflation_Pressure_Inflation_Pressure_RL_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Inflation_Pressure_Inflation_Pressure_RL_E_NOT_OK (1U)

#  define RTE_E_DataServices_Inflation_Pressure_Inflation_Pressure_RR_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Inflation_Pressure_Inflation_Pressure_RR_E_NOT_OK (1U)

#  define RTE_E_DataServices_Serial_Number_SerialNumber_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Serial_Number_SerialNumber_E_NOT_OK (1U)

#  define RTE_E_DataServices_Service_Information_Remaining_Service_Brake_Fluid_Life_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Service_Information_Remaining_Service_Brake_Fluid_Life_E_NOT_OK (1U)

#  define RTE_E_DataServices_Service_Information_Remaining_Service_Time_Left_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Service_Information_Remaining_Service_Time_Left_E_NOT_OK (1U)

#  define RTE_E_DataServices_Software_Supplier_Identification_SoftwareSupplier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Software_Supplier_Identification_SoftwareSupplier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Software_Version_SoftwareVersion_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Software_Version_SoftwareVersion_E_NOT_OK (1U)

#  define RTE_E_DataServices_Supply_Voltage_ECU_Voltage_ECU_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Supply_Voltage_ECU_Voltage_ECU_E_NOT_OK (1U)

#  define RTE_E_DataServices_Switches_Brake_Switch_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Switches_Brake_Switch_E_NOT_OK (1U)

#  define RTE_E_DataServices_Switches_Parking_Brake_Switch_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Switches_Parking_Brake_Switch_E_NOT_OK (1U)

#  define RTE_E_DataServices_Switches_Rear_Gear_Switch_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Switches_Rear_Gear_Switch_E_NOT_OK (1U)

#  define RTE_E_DataServices_VIN_VIN_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_VIN_VIN_E_NOT_OK (1U)

#  define RTE_E_DataServices_Wheel_Speed_Direction_of_rotation_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Wheel_Speed_Direction_of_rotation_E_NOT_OK (1U)

#  define RTE_E_DataServices_Wheel_Speed_Wheel_Speed_FL_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Wheel_Speed_Wheel_Speed_FL_E_NOT_OK (1U)

#  define RTE_E_DataServices_Wheel_Speed_Wheel_Speed_FR_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Wheel_Speed_Wheel_Speed_FR_E_NOT_OK (1U)

#  define RTE_E_DataServices_Wheel_Speed_Wheel_Speed_RL_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Wheel_Speed_Wheel_Speed_RL_E_NOT_OK (1U)

#  define RTE_E_DataServices_Wheel_Speed_Wheel_Speed_RR_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Wheel_Speed_Wheel_Speed_RR_E_NOT_OK (1U)

#  define RTE_E_DataServices_Wheel_Speed_Wheel_Voltage_FL_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Wheel_Speed_Wheel_Voltage_FL_E_NOT_OK (1U)

#  define RTE_E_DataServices_Wheel_Speed_Wheel_Voltage_FR_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Wheel_Speed_Wheel_Voltage_FR_E_NOT_OK (1U)

#  define RTE_E_DataServices_Wheel_Speed_Wheel_Voltage_RL_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Wheel_Speed_Wheel_Voltage_RL_E_NOT_OK (1U)

#  define RTE_E_DataServices_Wheel_Speed_Wheel_Voltage_RR_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Wheel_Speed_Wheel_Voltage_RR_E_NOT_OK (1U)

#  define RTE_E_DataServices_Wheel_Type_Wheel_type_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Wheel_Type_Wheel_type_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_ECU_Check_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_ECU_Check_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_ECU_Check_E_NOT_OK (1U)

#  define RTE_E_SecurityAccess_UnlockedL1_DCM_E_COMPARE_KEY_FAILED (11U)

#  define RTE_E_SecurityAccess_UnlockedL1_DCM_E_PENDING (10U)

#  define RTE_E_SecurityAccess_UnlockedL1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_DCM_H */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0624:  MISRA rule: Rule8.3
     Reason:     This MISRA violation is a consequence from the RTE requirements [SWS_Rte_01007] [SWS_Rte_01150].
                 The typedefs are never used in the same context.
     Risk:       No functional risk. Only a cast to uint8* is performed.
     Prevention: Not required.

   MD_Rte_0786:  MISRA rule: Rule5.5
     Reason:     Same macro and idintifier names in first 63 characters are required to meet AUTOSAR spec.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_1330:  MISRA rule: Rule8.3
     Reason:     The RTE Generator uses default names for parameter identifiers of port defined arguments of service modules.
                 Therefore the parameter identifiers in the function declaration differs from those of the implementation of the BSW module.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3449:  MISRA rule: Rule8.5
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3451:  MISRA rule: Rule8.5
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
