#include "Cdd_Cbk.h"

uint8 Rec_Meg_Test = 0;
uint8 Send_Meg_Test = 0;
FUNC(void, CDD_CODE) XB_INTER_CAN_RxIndication(PduIdType RxPduId, P2CONST(PduInfoType, AUTOMATIC, CDD_APPL_DATA) PduInfoPtr)
{
    Rec_Meg_Test++;
    if(Rec_Meg_Test >= 127)
    {
        Rec_Meg_Test = 0;
    }
    else
    {

    }
}

FUNC(void, CDD_CODE) XB_INTER_CAN_TxConfirm(PduIdType TxPduId)
{
    Send_Meg_Test++;
    if(Send_Meg_Test >= 127)
    {
        Send_Meg_Test = 0;
    }
    else
    {

    }
}