#define MOD_ECUID 3F82871263
#define MOD_DATE 20.04.22.08.01
#include "Flash.h"
#define MOD_CONFIG Flash
#define MOD_BUILD Debug
#define MOD_RELEASE 0
#define ECU_CALIBRATION_ID AE5K700L
#define ECU_IDENTIFIER 8112587107
/////////////////////
// NonSpecific Rom Info and Routines
/////////////////////

#define dCalId (0x00002004)
#define dEcuId (0x000D93F8)
#define dRomHoleStart (0x000E1000)
#define pRamHoleStart (0xFFFFB984)
#define pRamHoleEnd (0xFFFFBF70)
#define sPull2DFloat (0x000BE830)
#define sPull3DFloat (0x000BE8E4)

/////////////////////
// Switch Hacks
/////////////////////

#define tCrankingFuelA (0x000AAF48)
#define tCrankingFuelB (0x000AAF5C)
#define tCrankingFuelC (0x000AAF70)
#define tCrankingFuelD (0x000AAF84)
#define tCrankingFuelE (0x000AAF98)
#define tCrankingFuelF (0x000AAFAC)

/////////////////////
// Rev Limit Hack
/////////////////////

#define hRevLimDelete (0x0004A5D0)
#define sRevLimStart (0x0003B508)
#define sRevLimEnd (0x0003BD58)
#define pFlagsRevLim ((unsigned char*)0xFFFF7CA0)
#define RevLimBitMask (0x01)

/////////////////////
// Speed Density Hack
/////////////////////

#define hMafCalc (0x000049E8)
#define sMafCalc (0x0000498C)

/////////////////////
// Injector Hack
/////////////////////

#define dInjectorScaling ((float*)0x000CBD7C)

/////////////////////
// Cel Hacks
/////////////////////

#define sCelTrigger (0x0009CA80)
#define hCelSignal (0x0009CB04)
#define pCelSignalOem ((unsigned char*)0xFFFFAC86)

/////////////////////
// Boost Hacks
/////////////////////

#define hPullTargetBoost (0x00013A28)
#define hTableTargetBoost (0x00013A24)
#define tTargetBoost (0x000A9080)

/////////////////////
// WGDC Hacks
/////////////////////

#define hPullWgdc (0x00013F0C)
#define hWgdc (0x00049E9C)
#define sWgdc (0x00013774)
#define hTableWgdcInitial (0x00013F08)
#define tWgdcInitial (0x000A9064)
#define hTableWgdcMax (0x00013F28)
#define tWgdcMax (0x000A9048)

/////////////////////
// Primary Open Loop Fueling Hacks
/////////////////////

#define pPolf4Byte (0xFFFF7970)
#define hPull3DPolf (0x00036030)
#define hPolf (0x0004A5F4)
#define sPolf (0x00035DDC)
#define pPolfEnrich (0xFFFF7970)
#define tPolfKcaAlt (0x000ABD5C)
#define hTablePolfKcaAlt (0x00036048)
#define tPolfKcaBLo (0x000ABD40)
#define hTablePolfKcaBLo (0x00036044)
#define tPolfKcaBHi (0x000ABCEC)
#define hTablePolfKcaBHi (0x0003602C)

/////////////////////
// Timing Hacks
/////////////////////

#define hBaseTiming (0x0004AF08)
#define pBaseTiming (0xFFFF7EF0)
#define sBaseTiming (0x0003FEBE)
#define hPull3DTiming (0x000401D0)
#define tBaseTimingPCruise (0x000AC904)
#define hTableBaseTimingPCruise (0x000401CC)
#define tBaseTimingPNonCruise (0x000AC920)
#define hTableBaseTimingPNonCruise (0x000401D8)
#define tBaseTimingRCruiseAvcs (0x000AC93C)
#define hTableBaseTimingRCruiseAvcs (0x000401D4)
#define tBaseTimingRNonCruiseAvcs (0x000AC958)
#define hTableBaseTimingRNonCruiseAvcs (0x000401DC)
#define pKcaIam (0xFFFF8220)

/////////////////////
// Requested Torque Hacks
/////////////////////


/////////////////////
// Spark Cut
/////////////////////


/////////////////////
// Flags-Signals
/////////////////////

#define pResumeFlags ((unsigned char*)0xFFFF5FBF)
#define ResumeBitMask ((unsigned char)0x01)
#define pCoastFlags ((unsigned char*)0xFFFF5FBE)
#define CoastBitMask ((unsigned char)0x01)
#define pBrakeFlags ((unsigned char*)0xFFFF5FC0)
#define BrakeBitMask ((unsigned char)0x01)
#define pClutchFlags ((unsigned char*)0xFFFF65C8)
#define ClutchBitMask ((unsigned char)0x01)

/////////////////////
// NonSpecific Engine params
/////////////////////

#define pFbkc1 ((unsigned char*)0xFFFF6873)
#define pFbkc4 ((float*)0xFFFF81B0)
#define pIam1 ((unsigned char*)0xFFFF6875)
#define pIam4 ((float*)0xFFFF3268)
#define pEngineSpeed ((float*)0xFFFF661C)
#define pVehicleSpeed ((float*)0xFFFF65F8)
#define pCoolantTemp ((float*)0xFFFF4144)
#define pAtmoPress ((float*)0xFFFF6894)
#define pManifoldAbsolutePressure ((float*)0xFFFF6208)
#define pIntakeAirTemp ((float*)0xFFFF4128)
#define pMassAirFlow ((float*)0xFFFF40B4)
#define pMafSensorVoltage ((short*)0xFFFF4042)
#define pEngineLoad ((float*)0xFFFF63F0)
#define pReqTorque ((float*)0xFFFF851C)
#define pThrottlePlate ((float*)0xFFFF62D8)
#define pCurrentGear ((unsigned char*)0xFFFF6809)
#define pAf1Res ((float*)0xFFFF40C8)

/////////////////////
// OBD Experimental stuff
/////////////////////

#define pObdVinDirect ((unsigned char*)0xFFFF2004)

/////////////////////
// New Definitions
/////////////////////

#define dLoadSmoothingA (0x000C3100)
#define dLoadSmoothingB (0x000C30FC)
#define dLoadSmoothingAlt (0x000C30F8)
#define dLoadSmoothingFinal (0x000310C)

/////////////////////
// Memory Reset
/////////////////////

#define sMemoryReset (0x000101C8)
#define hMemoryReset (0x0000FC20)
#define pMemoryResetLimit (0xFFFFBF9F)
#define hMemoryResetLimit (0x00011C20)

