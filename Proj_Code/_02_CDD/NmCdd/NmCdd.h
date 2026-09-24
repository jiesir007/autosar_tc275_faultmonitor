#ifndef _NMCDD_H_
#define _NMCDD_H_

#include "Nm.h"

extern void NmCdd_SetWUSRC_KL15(void);
extern void App_Nm_StateChangeIndication(NetworkHandleType nmNetworkHandle, Nm_StateType nmPreviousState, Nm_StateType nmCurrentState);

#endif
