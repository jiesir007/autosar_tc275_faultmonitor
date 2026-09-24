#include "ComFaultCdd.h"
#include "Dio.h"

static uint8 ComFaultCdd_KL30Vol_State = KL30VOL_STATE_INIT;
static uint16 ComFaultCdd_KL30_DelayT_Cnt = KL30TIME_VALUE_FIRST;

static uint8 ComFaultCdd_KL15_State = KL15_OFF;
static uint16 comFaultCdd_KL15DelayT_Cnt = KL15_ON_DELAY_VALUE;

extern float ADC_KL30_PhyVal; /* this valuable need to be change to RTE SR Port later */


static uint8 ComFaultCdd_KL30Vol_Check(void);
static uint8 ComFaultCdd_KL15State_Check(void);

void ComFaultCdd_Init(void)
{

}



void ComFaultCdd_Mainfunction(void)
{
    ComFaultCdd_KL30Vol_Check();
    ComFaultCdd_KL15State_Check();
}

static uint8 ComFaultCdd_KL30Vol_Check(void)
{
    uint16 KL30_PhyVol;

    KL30_PhyVol = (int)(ADC_KL30_PhyVal * 10);

    if(ComFaultCdd_KL30Vol_State == KL30VOL_STATE_INIT)
    {
        /* KL30 voltage first normal*/
        if((KL30_PhyVol >= KL30VOL_VALUE_UNDERVOL) && (KL30_PhyVol <= KL30VOL_VALUE_OVERVOL))
        {
            ComFaultCdd_KL30_DelayT_Cnt--;
            if(ComFaultCdd_KL30_DelayT_Cnt == 0)
            {
                ComFaultCdd_KL30Vol_State = KL30VOL_STATE_NORMAL;
            }
            else
            {
                /* wait for delay time expired*/
            }
        }
        else
        {
            ComFaultCdd_KL30_DelayT_Cnt = KL30TIME_VALUE_FIRST;
        }
    }
    else
    {
        switch (ComFaultCdd_KL30Vol_State)
        {
        case KL30VOL_STATE_NORMAL:
        {
            if(KL30_PhyVol > KL30VOL_VALUE_OVERVOL)
            {
                ComFaultCdd_KL30_DelayT_Cnt = KL30TIME_VALUE_RECOVER;
                ComFaultCdd_KL30Vol_State = KL30VOL_STATE_OVERVOL;
            }
            else if (KL30_PhyVol < KL30VOL_VALUE_UNDERVOL)
            {
                ComFaultCdd_KL30_DelayT_Cnt = KL30TIME_VALUE_RECOVER;
                ComFaultCdd_KL30Vol_State = KL30VOL_STATE_UNDERVOL;
            }
            else
            {
                /* Stay in kl30 voltage normal state */
            }
        }
        break;

        case KL30VOL_STATE_OVERVOL:
        {
            if(KL30_PhyVol > KL30VOL_VALUE_OVERVOL_REC)
            {
                ComFaultCdd_KL30_DelayT_Cnt = KL30TIME_VALUE_RECOVER;
            }
            else if (KL30_PhyVol < KL30VOL_VALUE_UNDERVOL)
            {
                ComFaultCdd_KL30_DelayT_Cnt = KL30TIME_VALUE_RECOVER;
                ComFaultCdd_KL30Vol_State = KL30VOL_STATE_UNDERVOL;
            }
            else
            {
                ComFaultCdd_KL30_DelayT_Cnt--;
                if(ComFaultCdd_KL30_DelayT_Cnt == 0)
                {
                    ComFaultCdd_KL30Vol_State = KL30VOL_STATE_NORMAL;
                }
                else
                {
                    /* wait for delay time expired*/
                }
            }
        }
        break;

        case KL30VOL_STATE_UNDERVOL:
        {
            if(KL30_PhyVol > KL30VOL_VALUE_OVERVOL)
            {
                ComFaultCdd_KL30_DelayT_Cnt = KL30TIME_VALUE_RECOVER;
                ComFaultCdd_KL30Vol_State = KL30VOL_STATE_OVERVOL;
            }
            else if (KL30_PhyVol < KL30VOL_VALUE_UNDERVOL_REC)
            {
                ComFaultCdd_KL30_DelayT_Cnt = KL30TIME_VALUE_RECOVER;
            }
            else
            {
                ComFaultCdd_KL30_DelayT_Cnt--;
                if(ComFaultCdd_KL30_DelayT_Cnt == 0)
                {
                    ComFaultCdd_KL30Vol_State = KL30VOL_STATE_NORMAL;
                }
                else
                {
                    /* wait for delay time expired*/
                }
            }
        }
        break;

        default:
            break;
        }
    }

    return ComFaultCdd_KL30Vol_State;
}


static uint8 ComFaultCdd_KL15State_Check(void)
{
    boolean KL15_CurrentState;

    /* this read IO port need to change to RTE sr port later */
    if(Dio_ReadChannel(DioConf_DioChannel_KL15) == STD_HIGH)
    {
        KL15_CurrentState = KL15_ON;
    }
    else
    {
        KL15_CurrentState = KL15_OFF;
    }

    if(ComFaultCdd_KL15_State == COMFAULTCDD_KL15_OFF)
    {
        if(KL15_CurrentState == KL15_ON)
        {
            comFaultCdd_KL15DelayT_Cnt--;
            if(comFaultCdd_KL15DelayT_Cnt == 0)
            {
                ComFaultCdd_KL15_State = COMFAULTCDD_KL15_DELAY_ON;
            }
            else
            {
                /* wait for delay time expired*/
            }
        }
        else
        {
            comFaultCdd_KL15DelayT_Cnt = KL15_ON_DELAY_VALUE;
        }
    }
    else
    {
        if(KL15_CurrentState == KL15_OFF)
        {
            comFaultCdd_KL15DelayT_Cnt = KL15_ON_DELAY_VALUE;
            ComFaultCdd_KL15_State = COMFAULTCDD_KL15_OFF;
            /* KL15 switch from on to off, change the ComFaultCdd_KL15_State to KL15_OFF immediately*/
        }
        else
        {
            /* KL15_CurrentState is on , ComFaultCdd_KL15_State stay at KL15_DELAY_ON */
        }
    }

    return ComFaultCdd_KL15_State;
}
