#include "CanNm.h"
#include "NmCdd.h"

static boolean KL15WUSRC_State = 0;
static uint8 CanNmUserData[6] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};


static void NmCdd_ClearWUSRC_KL15(void);


void NmCdd_SetWUSRC_KL15(void)
{
    KL15WUSRC_State = 1;
}

static void NmCdd_ClearWUSRC_KL15(void)
{
    KL15WUSRC_State = 0;
}


void App_Nm_StateChangeIndication(NetworkHandleType nmNetworkHandle, Nm_StateType nmPreviousState, Nm_StateType nmCurrentState)
{
    if(((nmPreviousState == NM_STATE_BUS_SLEEP) || (nmPreviousState == NM_STATE_PREPARE_BUS_SLEEP)) && (nmCurrentState == NM_STATE_REPEAT_MESSAGE))
    {
        if(KL15WUSRC_State == 1)
        {
            CanNmUserData[0] = 0x02; /* KL15 WakeUp */
            NmCdd_ClearWUSRC_KL15();
        }
        else
        {
            CanNmUserData[0] = 0x01; /* CanNm WakeUp */
        }
    }
    else
    {
        /* Do Nothing */
    }


    if(nmCurrentState == NM_STATE_REPEAT_MESSAGE)
    {
    	CanNmUserData[1] = 0x01; /* CanNm In RepeatMessageState */
    }
    else
    {
    	CanNmUserData[1] = 0x00; /* CanNm Not In RepeatMessageState */
    }

    Nm_SetUserData(NmConf_NmChannelConfig_CN_DBCNetWork_05d62413, &CanNmUserData);
}




