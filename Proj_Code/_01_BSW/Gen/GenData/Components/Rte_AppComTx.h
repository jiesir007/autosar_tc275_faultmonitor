
/* double include prevention */
#ifndef RTE_APPCOMTX_H
# define RTE_APPCOMTX_H

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

# include "Rte_AppComTx_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(Meg_Trigger_Type, RTE_VAR_INIT) Rte_AppCtrl_Meg_Trigger_State_0x214_SR_S_Meg_Trigger_State;

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AppComTx_SG_Sig_Grp_0x210_SR_R_SG_Sig_Grp_0x210(P2VAR(SG_Sig_Grp_0x210, AUTOMATIC, RTE_APPCOMTX_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AppComTx_SG_Sig_Grp_0x211_SR_R_SG_Sig_Grp_0x211(P2VAR(SG_Sig_Grp_0x211, AUTOMATIC, RTE_APPCOMTX_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AppComTx_SG_Sig_Grp_0x212_SR_R_SG_Sig_Grp_0x212(P2VAR(SG_Sig_Grp_0x212, AUTOMATIC, RTE_APPCOMTX_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AppComTx_SG_Sig_Grp_0x213_SR_R_SG_Sig_Grp_0x213(P2VAR(SG_Sig_Grp_0x213, AUTOMATIC, RTE_APPCOMTX_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AppComTx_SG_Sig_Grp_0x214_SR_R_SG_Sig_Grp_0x214(P2VAR(SG_Sig_Grp_0x214, AUTOMATIC, RTE_APPCOMTX_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AppComTx_SG_Sig_Grp_0x216_SR_R_SG_Sig_Grp_0x216(P2VAR(SG_Sig_Grp_0x216, AUTOMATIC, RTE_APPCOMTX_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AppComTx_SG_Sig_Grp_0x210_SG_Sig_Grp_0x210(P2CONST(SG_Sig_Grp_0x210, AUTOMATIC, RTE_APPCOMTX_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AppComTx_SG_Sig_Grp_0x211_SG_Sig_Grp_0x211(P2CONST(SG_Sig_Grp_0x211, AUTOMATIC, RTE_APPCOMTX_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AppComTx_SG_Sig_Grp_0x212_SG_Sig_Grp_0x212(P2CONST(SG_Sig_Grp_0x212, AUTOMATIC, RTE_APPCOMTX_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AppComTx_SG_Sig_Grp_0x213_SG_Sig_Grp_0x213(P2CONST(SG_Sig_Grp_0x213, AUTOMATIC, RTE_APPCOMTX_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AppComTx_SG_Sig_Grp_0x214_SG_Sig_Grp_0x214(P2CONST(SG_Sig_Grp_0x214, AUTOMATIC, RTE_APPCOMTX_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AppComTx_SG_Sig_Grp_0x216_SG_Sig_Grp_0x216(P2CONST(SG_Sig_Grp_0x216, AUTOMATIC, RTE_APPCOMTX_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_Meg_Trigger_State_0x214_SR_R_Meg_Trigger_State Rte_Read_AppComTx_Meg_Trigger_State_0x214_SR_R_Meg_Trigger_State
#  define Rte_Read_AppComTx_Meg_Trigger_State_0x214_SR_R_Meg_Trigger_State(data) (*(data) = Rte_AppCtrl_Meg_Trigger_State_0x214_SR_S_Meg_Trigger_State, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
#  define Rte_Read_SG_Sig_Grp_0x210_SR_R_SG_Sig_Grp_0x210 Rte_Read_AppComTx_SG_Sig_Grp_0x210_SR_R_SG_Sig_Grp_0x210
#  define Rte_Read_SG_Sig_Grp_0x211_SR_R_SG_Sig_Grp_0x211 Rte_Read_AppComTx_SG_Sig_Grp_0x211_SR_R_SG_Sig_Grp_0x211
#  define Rte_Read_SG_Sig_Grp_0x212_SR_R_SG_Sig_Grp_0x212 Rte_Read_AppComTx_SG_Sig_Grp_0x212_SR_R_SG_Sig_Grp_0x212
#  define Rte_Read_SG_Sig_Grp_0x213_SR_R_SG_Sig_Grp_0x213 Rte_Read_AppComTx_SG_Sig_Grp_0x213_SR_R_SG_Sig_Grp_0x213
#  define Rte_Read_SG_Sig_Grp_0x214_SR_R_SG_Sig_Grp_0x214 Rte_Read_AppComTx_SG_Sig_Grp_0x214_SR_R_SG_Sig_Grp_0x214
#  define Rte_Read_SG_Sig_Grp_0x216_SR_R_SG_Sig_Grp_0x216 Rte_Read_AppComTx_SG_Sig_Grp_0x216_SR_R_SG_Sig_Grp_0x216


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_SG_Sig_Grp_0x210_SG_Sig_Grp_0x210 Rte_Write_AppComTx_SG_Sig_Grp_0x210_SG_Sig_Grp_0x210
#  define Rte_Write_SG_Sig_Grp_0x211_SG_Sig_Grp_0x211 Rte_Write_AppComTx_SG_Sig_Grp_0x211_SG_Sig_Grp_0x211
#  define Rte_Write_SG_Sig_Grp_0x212_SG_Sig_Grp_0x212 Rte_Write_AppComTx_SG_Sig_Grp_0x212_SG_Sig_Grp_0x212
#  define Rte_Write_SG_Sig_Grp_0x213_SG_Sig_Grp_0x213 Rte_Write_AppComTx_SG_Sig_Grp_0x213_SG_Sig_Grp_0x213
#  define Rte_Write_SG_Sig_Grp_0x214_SG_Sig_Grp_0x214 Rte_Write_AppComTx_SG_Sig_Grp_0x214_SG_Sig_Grp_0x214
#  define Rte_Write_SG_Sig_Grp_0x216_SG_Sig_Grp_0x216 Rte_Write_AppComTx_SG_Sig_Grp_0x216_SG_Sig_Grp_0x216


# endif /* !defined(RTE_CORE) */


# define AppComTx_START_SEC_CODE
# include "AppComTx_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_AppComTx_Init AppComTx_Init
#  define RTE_RUNNABLE_AppComTx_MainFunction AppComTx_MainFunction
# endif

FUNC(void, AppComTx_CODE) AppComTx_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, AppComTx_CODE) AppComTx_MainFunction(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define AppComTx_STOP_SEC_CODE
# include "AppComTx_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_APPCOMTX_H */

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

   MD_Rte_3449:  MISRA rule: Rule8.5
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3451:  MISRA rule: Rule8.5
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
