#include "EcuM.h"
#include "WakeUpCdd.h"
#include "Dio.h"
#include "ComM.h"

void WakeUpCdd_Init(void)
{

}

void WakeUpCdd_MainFunction(void)
{
    ComM_ModeType Current_ComMode;
    ComM_GetCurrentComMode(ComMConf_ComMUser_CN_DBCNetWork_f94df0c8, &Current_ComMode);

    if(Current_ComMode != COMM_FULL_COMMUNICATION)
    {
        if(Dio_ReadChannel(DioConf_DioChannel_KL15) == STD_HIGH)
        {
            EcuM_SetWakeupEvent(ECUM_WKSOURCE_KL15);
        }
        else
        {

        }
    }
    else
    {
        /*Do Nothing */
    }

}



