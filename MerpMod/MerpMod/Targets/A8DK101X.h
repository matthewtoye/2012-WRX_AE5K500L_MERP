#define MOD_ECUID E7A154F87C
#define MOD_DATE 14.10.17.15.52
#include "Flash.h"
#define MOD_CONFIG Flash
#define MOD_BUILD Debug
#define MOD_RELEASE 0
#define ECU_CALIBRATION_ID A8DK101X
#define ECU_IDENTIFIER 4D12584106
/////////////////////
// NonSpecific Rom Info and Routines
/////////////////////

#define dCalId (0x00002000)
#define dEcuId (0x000D0020)
#define dRomHoleStart (0x000E1000)
#define pRamHoleStart (0xFFFF9B60)
#define pRamHoleEnd (0xFFFFBF70)
#define sPull2DFloat (0x0000209C)
#define sPull3DFloat (0x00002150)

/////////////////////
// Switch Hacks
/////////////////////

#define tCrankingFuelD (0x0009AA64)
#define tStartupEnrich2_1A (0x0009AAFC)
#define tStartupEnrich2_2B (0x0009AB38)
#define tStartupEnrich3_1A (0x0009AAAC)

/////////////////////
// Rev Limit Hack
/////////////////////

#define hRevLimDelete (0x0001533C)
#define sRevLimStart (0x00034A80)
#define sRevLimEnd (0x00034AB6)
#define pFlagsRevLim ((unsigned char*)0xFFFF75A8)
#define RevLimBitMask (0x80)

/////////////////////
// Speed Density Hack
/////////////////////

#define hMafCalc (0x00008378)
#define sMafCalc (0x0000831C)

/////////////////////
// Injector Hack
/////////////////////

#define dInjectorScaling ((float*)0x000C8600)

/////////////////////
// Cel Hacks
/////////////////////

#define sCelTrigger (0x0008E9CC)
#define hCelSignal (0x0008EAE4)
#define pCelSignalOem ((unsigned char*)0xFFFF9712)

/////////////////////
// Boost Hacks
/////////////////////

#define tTargetBoost (0x0009969C)

/////////////////////
// WGDC Hacks
/////////////////////

#define hWgdc (0x00014DD0)
#define sWgdc (0x000176EC)
#define tWgdcInitial (0x000995F4)
#define tWgdcMax (0x0009962C)

/////////////////////
// Primary Open Loop Fueling Hacks
/////////////////////

#define pPolf4Byte (0xFFFF73E0)
#define tPolf (0x0009B168)
#define pPolfEnrich (0xFFFF73E0)

/////////////////////
// Timing Hacks
/////////////////////

#define tBaseTiming (0x0009B8E0)
#define pBaseTiming (0xFFFF7768)
#define pKcaIam (0xFFFF7904)

/////////////////////
// Spark Cut
/////////////////////


/////////////////////
// Flags-Signals
/////////////////////

#define pResumeFlags ((unsigned char*)0xFFFF650E)
#define ResumeBitMask ((unsigned char)0x01)
#define pCoastFlags ((unsigned char*)0xFFFF650D)
#define CoastBitMask ((unsigned char)0x01)
#define pBrakeFlags ((unsigned char*)0xFFFF650F)
#define BrakeBitMask ((unsigned char)0x01)
#define pClutchFlags ((unsigned char*)0xFFFF6A89)
#define ClutchBitMask ((unsigned char)0x80)

/////////////////////
// NonSpecific Engine params
/////////////////////

#define pFbkc1 ((unsigned char*)0xFFFF6C04)
#define pFbkc4 ((float*)0xFFFF78C0)
#define pIam1 ((unsigned char*)0xFFFF6C09)
#define pIam4 ((float*)0xFFFF2E38)
#define pEngineSpeed ((float*)0xFFFF6AB0)
#define pVehicleSpeed ((float*)0xFFFF6AA8)
#define pCoolantTemp ((float*)0xFFFF5CB4)
#define pAtmoPress ((float*)0xFFFF8630)
#define pManifoldAbsolutePressure ((float*)0xFFFF6710)
#define pIntakeAirTemp ((float*)0xFFFF5CA4)
#define pMassAirFlow ((float*)0xFFFF5CD8)
#define pMafSensorVoltage ((short*)0xFFFF5C02)
#define pEngineLoad ((float*)0xFFFF68CC)
#define pReqTorque ((float*)0xFFFF7BB4)
#define pThrottlePlate ((float*)0xFFFF67B4)
#define pCurrentGear ((unsigned char*)0xFFFF6BB9)
#define pAf1Res ((float*)0xFFFF5F10)

/////////////////////
// OBD Experimental stuff
/////////////////////


/////////////////////
// New Definitions
/////////////////////

#define dLoadSmoothingA (0x000C23C4)
#define dLoadSmoothingB (0x000C23C8)
#define dLoadSmoothingFinal (0x000C23D4)

/////////////////////
// Memory Reset
/////////////////////

#define sMemoryReset (0x0000F97C)
#define hMemoryReset (0x0000DC38)
#define pMemoryResetLimit (0xFFFFBFBB)
#define hMemoryResetLimit (0x000123A0)

