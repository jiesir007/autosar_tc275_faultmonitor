

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_AppComTx.h"
//#include "E2EPW_AppComTx_SG_Sig_Grp_0x112_SG_Sig_Grp_0x112_tx.h"
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * Sig_Test02_10: Integer in interval [0...255]
 * Sig_Test02_11: Integer in interval [0...255]
 * Sig_Test02_12: Integer in interval [0...255]
 * Sig_Test02_7: Integer in interval [0...255]
 * Sig_Test02_8: Integer in interval [0...255]
 * Sig_Test02_9: Integer in interval [0...255]
 * Sig_Test03_3: Integer in interval [0...255]
 * Sig_Test03_4: Integer in interval [0...255]
 * Sig_Test05_1: Boolean
 * Sig_Test05_3: Integer in interval [0...255]
 * Sig_Test05_4: Integer in interval [0...255]
 * Sig_Test05_5: Integer in interval [0...255]
 * Sig_Test05_6: Integer in interval [0...255]
 * Sig_Test05_7: Integer in interval [0...255]
 *
 * Enumeration Types:
 * ==================
 * Sig_Test05_2: Enumeration of integer in interval [0...255] with enumerators
 *   Cx0_OFF0x12 (0U)
 *   Cx1_ON (1U)
 *   Cx2_Reserve (2U)
 *
 * Record Types:
 * =============
 * SG_Sig_Grp_0x124: Record with elements
 *   Sig_Test02_1 of type Sig_Test02_7
 *   Sig_Test02_2 of type Sig_Test02_8
 *   Sig_Test02_3 of type Sig_Test02_9
 *   Sig_Test02_4 of type Sig_Test02_10
 *   Sig_Test02_5 of type Sig_Test02_11
 *   Sig_Test02_6 of type Sig_Test02_12
 * SG_Sig_Grp_0x125: Record with elements
 *   Sig_Test03_1 of type Sig_Test03_3
 *   Sig_Test03_2 of type Sig_Test03_4
 * SG_Sig_Grp_0x127: Record with elements
 *   Sig_Test05_1 of type Sig_Test05_1
 *   Sig_Test05_2 of type Sig_Test05_2
 *   Sig_Test05_3 of type Sig_Test05_3
 *   Sig_Test05_4 of type Sig_Test05_4
 *   Sig_Test05_5 of type Sig_Test05_5
 *   Sig_Test05_6 of type Sig_Test05_6
 *   Sig_Test05_7 of type Sig_Test05_7
 *
 *********************************************************************************************************************/


#define AppComTx_START_SEC_CODE
#include "AppComTx_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: AppComTx_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AppComTx_Init_doc
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, AppComTx_CODE) AppComTx_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AppComTx_Init
 *********************************************************************************************************************/

	//E2EPW_WriteInit_SG_Sig_Grp_0x112_SG_Sig_Grp_0x112();
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AppComTx_MainFunction
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_SG_Sig_Grp_0x124_AppSR_R_SG_Sig_Grp_0x124(SG_Sig_Grp_0x124 *data)
 *   Std_ReturnType Rte_Read_SG_Sig_Grp_0x125_AppSR_R_SG_Sig_Grp_0x125(SG_Sig_Grp_0x125 *data)
 *   Std_ReturnType Rte_Read_SG_Sig_Grp_0x127_AppSR_R_SG_Sig_Grp_0x127(SG_Sig_Grp_0x127 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_SG_Sig_Grp_0x124_SG_Sig_Grp_0x124(const SG_Sig_Grp_0x124 *data)
 *   Std_ReturnType Rte_Write_SG_Sig_Grp_0x125_SG_Sig_Grp_0x125(const SG_Sig_Grp_0x125 *data)
 *   Std_ReturnType Rte_Write_SG_Sig_Grp_0x127_SG_Sig_Grp_0x127(const SG_Sig_Grp_0x127 *data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AppComTx_MainFunction_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, AppComTx_CODE) AppComTx_MainFunction(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AppComTx_MainFunction
 *********************************************************************************************************************/
  boolean Meg_Trigger_State;
  SG_Sig_Grp_0x214 SG_Sig_Grp_0x214_AppComTx = {0};
  Rte_Read_Meg_Trigger_State_0x214_SR_R_Meg_Trigger_State(&Meg_Trigger_State);

  if(Meg_Trigger_State == 1)
  {
    Rte_Write_SG_Sig_Grp_0x214_SG_Sig_Grp_0x214(&SG_Sig_Grp_0x214_AppComTx);
  }
  else
  {

  }
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define AppComTx_STOP_SEC_CODE
#include "AppComTx_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0624:  MISRA rule: Rule8.3
     Reason:     This MISRA violation is a consequence from the RTE requirements [SWS_Rte_01007] [SWS_Rte_01150].
                 The typedefs are never used in the same context.
     Risk:       No functional risk. Only a cast to uint8* is performed.
     Prevention: Not required.

   MD_Rte_3206:  MISRA rule: Rule2.7
     Reason:     The parameter are not used by the code in all possible code variants.
     Risk:       No functional risk.
     Prevention: Not required.

*/
