#ifndef _COMFAULTCDD_H_
#define _COMFAULTCDD_H_

#include "Std_Types.h"

#define BASE_TIME                           10U /* 10ms */

#define KL30VOL_STATE_INIT                  0U
#define KL30VOL_STATE_NORMAL                1U
#define KL30VOL_STATE_OVERVOL               2U
#define KL30VOL_STATE_UNDERVOL              3U

#define KL30TIME_VALUE_FIRST                (2000 / BASE_TIME) /* 2s */
#define KL30TIME_VALUE_RECOVER              (1000 / BASE_TIME) /* 1s */

#define KL30VOL_VALUE_OVERVOL               160U /* over voltage: 16.0v */
#define KL30VOL_VALUE_OVERVOL_REC           155U /* recover from over voltage: 15.5v */
#define KL30VOL_VALUE_UNDERVOL              90U /* under voltage: 9.0v */
#define KL30VOL_VALUE_UNDERVOL_REC          95U /* recover from under voltage: 9.5v */

#define KL15_OFF                            0U
#define KL15_ON                             1U

#define COMFAULTCDD_KL15_OFF                0U
#define COMFAULTCDD_KL15_DELAY_ON           1U

#define KL15_ON_DELAY_VALUE                 (1500 / BASE_TIME)


extern void ComFaultCdd_Init();
extern void ComFaultCdd_Mainfunction();

#endif