/*
 * AppCtrl.c
 *
 *  Created on: 2023��8��8��
 *      Author: Administrator
 */


/*
 * AppCtrl.c
 *
 *  Created on: 2023��5��17��
 *      Author: Administrator
 */


#include "Rte_AppCtrl.h"
#include "IfxStm_reg.h"
#include "CanIf.h"
#include "WakeUpCdd.h"
//#include "Dem.h"

#include "AdcCdd.h"
#include "ComFaultCdd.h"

#define AppCtrl_START_SEC_CODE
#include "AppCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */



uint16 E_Sig_0x302_Used_1_LAST = 0;

PduInfoType INTER_DATA;
uint8 MEG_DATA[8] = {0};


void CanInter_Transmit(void);

FUNC(void, AppCtrl_CODE) AppCtrl_Init(void)
{
	INTER_DATA.SduDataPtr = &MEG_DATA[0];
	INTER_DATA.SduLength = 8;
	
	Rte_Call_App_Dem_SetOperationCycle_SetOperationCycleState(DEM_CYCLE_STATE_START);

	AdcCdd_Init();
	ComFaultCdd_Init();
}

FUNC(void, AppCtrl_CODE) AppCtrl_MainFunction(void)
{
	boolean Meg_Trigger_State = 0;


	SG_Sig_Grp_0x302 SG_Sig_Grp_0x302_AppCtrl;

	Rte_Read_SG_Sig_Grp_0x302_SR_S_SG_Sig_Grp_0x302(&SG_Sig_Grp_0x302_AppCtrl);

	if(SG_Sig_Grp_0x302_AppCtrl.E_Sig_0x302_Used_1 != E_Sig_0x302_Used_1_LAST)
	{
		Meg_Trigger_State = 1;
		E_Sig_0x302_Used_1_LAST = SG_Sig_Grp_0x302_AppCtrl.E_Sig_0x302_Used_1;
	}
	else
	{
		Meg_Trigger_State = 0;
	}

	Rte_Write_Meg_Trigger_State_0x214_SR_S_Meg_Trigger_State(Meg_Trigger_State);

	CanInter_Transmit();
	WakeUpCdd_MainFunction();
	
//	Dem_SetEventStatus(DemConf_DemEventParameter_DTC_0x401001, DEM_EVENT_STATUS_FAILED);
	AdcCdd_Mainfunction();
	ComFaultCdd_Mainfunction();

}

void CanInter_Transmit(void)
{
	CanIf_Transmit(CanIfTxPduHnd_INTER_SEND_oDBCNetWork_INTER1_c4764d88_Tx, &INTER_DATA);
}


void ADC_AN0_Notification(void)
{

}


#define AppCtrl_STOP_SEC_CODE
#include "AppCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


