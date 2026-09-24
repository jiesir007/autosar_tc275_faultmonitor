#include "AdcCdd.h"
#include "Adc.h"

static uint16 ADC_KL30_RawValBuf = 0;
static uint16 ADC_KL30_RawVal = 0;
float ADC_KL30_PhyVal = 0;

void AdcCdd_Init(void)
{
	Adc_EnableGroupNotification(AdcConf_AdcGroup_AdcGroup_0);
	Adc_SetupResultBuffer(AdcConf_AdcGroup_AdcGroup_0, &ADC_KL30_RawValBuf);
}


void AdcCdd_Mainfunction(void)
{
	/* ADC */
	Adc_StartGroupConversion(AdcConf_AdcGroup_AdcGroup_0);
	Adc_ReadGroup(AdcConf_AdcGroup_AdcGroup_0, &ADC_KL30_RawVal);

    /* Assumption the physical max voltage to 20V(the real max voltage is 5V) */
	/* PhyVal = ADC_RawValue / (1023 / 20 ) */
	ADC_KL30_PhyVal = (float)((int)(((float)ADC_KL30_RawVal / 51.15) * 10)) / 10;
}

