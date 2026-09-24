################################################################################
# Automatically-generated file. Do not edit!
################################################################################

PROJ 	= TC275
PRODDIR = C:\Program Files\TASKING\TriCore v6.3r1\ctc

-include "..\makefile.init"

all :

-include "subdir.mk"
-include "_00_ASW\Core0\AppButtonCtrl\subdir.mk"
-include "_00_ASW\Core0\AppComRx\subdir.mk"
-include "_00_ASW\Core0\AppComTx\subdir.mk"
-include "_00_ASW\Core0\AppCtrl\subdir.mk"
-include "_00_ASW\Core0\AppLedCtrl\subdir.mk"
-include "_00_ASW\Core0\AppWakeUpCtrl\subdir.mk"
-include "_00_ASW\Core1\AppCtrl1\subdir.mk"
-include "_00_ASW\Core2\AppCtrl2\subdir.mk"
-include "_01_BSW\Gen\GenData\subdir.mk"
-include "_01_BSW\Gen\Source\subdir.mk"
-include "_01_BSW\Src\BswM\subdir.mk"
-include "_01_BSW\Src\Can\subdir.mk"
-include "_01_BSW\Src\CanIf\subdir.mk"
-include "_01_BSW\Src\CanNm\subdir.mk"
-include "_01_BSW\Src\CanSM\subdir.mk"
-include "_01_BSW\Src\CanTp\subdir.mk"
-include "_01_BSW\Src\CanTrcv_30_Tja1043\subdir.mk"
-include "_01_BSW\Src\Com\subdir.mk"
-include "_01_BSW\Src\ComM\subdir.mk"
-include "_01_BSW\Src\Crc\subdir.mk"
-include "_01_BSW\Src\Dcm\subdir.mk"
-include "_01_BSW\Src\Dem\subdir.mk"
-include "_01_BSW\Src\Det\subdir.mk"
-include "_01_BSW\Src\E2E\subdir.mk"
-include "_01_BSW\Src\EcuM\subdir.mk"
-include "_01_BSW\Src\Nm\subdir.mk"
-include "_01_BSW\Src\Os\subdir.mk"
-include "_01_BSW\Src\PduR\subdir.mk"
-include "_01_BSW\Src\VStdLib\subdir.mk"
-include "_02_CDD\AdcCdd\subdir.mk"
-include "_02_CDD\CanInterCdd\subdir.mk"
-include "_02_CDD\ComFaultCdd\subdir.mk"
-include "_02_CDD\IcuCdd\subdir.mk"
-include "_02_CDD\IoHwAb\subdir.mk"
-include "_02_CDD\NmCdd\subdir.mk"
-include "_02_CDD\WakeUpCdd\subdir.mk"
-include "_03_MCAL\Gen\src\subdir.mk"
-include "_03_MCAL\Src\Adc\src\subdir.mk"
-include "_03_MCAL\Src\Dio\src\subdir.mk"
-include "_03_MCAL\Src\Icu\src\subdir.mk"
-include "_03_MCAL\Src\Intergration_general\src\subdir.mk"
-include "_03_MCAL\Src\Irq\src\subdir.mk"
-include "_03_MCAL\Src\Mcal\src\subdir.mk"
-include "_03_MCAL\Src\Mcu\src\subdir.mk"
-include "_03_MCAL\Src\Port\src\subdir.mk"
-include "_04_StartUp\subdir.mk"
-include "..\makefile.defs"

PCP_FILES :=
EXT_LIBRARIES =

all : "TC275.elf"

"TC275.elf" : $(OBJ_FILES) $(EXT_LIBRARIES) ".TC275.elf.opt"
	@echo Linking to ${@F}
	@"${PRODDIR}\bin\cctc" -f ".TC275.elf.opt"

".TC275.elf.opt" : .refresh
	@argfile ".TC275.elf.opt" -o "TC275.elf" $(OBJ_FILES) $(EXT_LIBRARIES) $(PCP_FILES)  -Ctc27x --lsl-core=vtc -t -I"D:\Autosar\CodePackage\autosar_tc275_faultmonitor-V0.01\autosar_tc275_faultmonitor\Proj_Code\_04_StartUp" -Wl-o"${PROJ}.hex":IHEX:4 -Wl-o"${PROJ}.sre":SREC:4 --hex-format=s --no-default-libraries "..\_01_BSW\Gen\Source\vLinkGen_Template.lsl" -Wl-OtxycL -Wl--map-file="${PROJ}.mapxml":XML -Wl-mcrfiklSmNOduQ -Wl--error-limit=42 --user-provided-initialization-code -g --fp-model=clfznrST --c++=03 -Wl--dep-file=".TC275.elf.d" -Wl--make-target="TC275.elf"
DEPENDENCY_FILES += ".TC275.elf.d"
-include $(DEPENDENCY_FILES)

$(EXT_LIBRARIES) : .dummy

GENERATED_FILES += "TC275.elf" "TC275*.sre" "TC275*.hex" "TC275.map*" "TC275.mdf" ".TC275.elf.opt" ".TC275.elf.d"
-include "..\makefile.targets"


clean : ".clean.opt"
	@echo Cleaning
	@rm -f -m ".clean.opt"

".clean.opt" : .refresh
	@argfile ".clean.opt" $(GENERATED_FILES) $(OPTIONAL_FILES)

GENERATED_FILES += ".clean.opt"
OPTIONAL_FILES +=  "*.pre" "*.lst" "*.p.o" "*.p.a"


.PHONY : .dummy .refresh
