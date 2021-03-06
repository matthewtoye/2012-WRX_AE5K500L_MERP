/*
	Copyright (C) 2012-2013 Merrill A. Myers III merrillamyersiii@gmail.com
	
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
*/

#include "EcuHacks.h"

#if SWITCH_HACKS && INJECTOR_HACKS

/*
float INJECTOR_SCALING_ROWS[11] FUELDATA =
{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0};

short INJECTOR_SCALING_DATA[11] FUELDATA =
{20000,20100,20200,20300,20400,20500,20600,20700,20800,20900,21000};//TODO: document the native units here

TwoDTable InjectorScalingTable  FUELDATA = {
	.columnCount = 11,
	.tableType = UInt16Table2D,
	.columnHeaderArray = INJECTOR_SCALING_ROWS,
	.tableCells = INJECTOR_SCALING_DATA,
	.multiplier = 0.824f,	//todo unit test these
	.offset = 0.0 };
//! 27000/32767  (0-27000.00 range, 16bit precision)
*/

float INJECTOR_SCALING_MULTIPLIER_ROWS[11] FUELDATA =
{0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0};

short INJECTOR_SCALING_MULTIPLIER_DATA[11] FUELDATA =
{6554,6357,6160,5964,5767,5570,5374,5177,4981,4784,4587};

TwoDTable InjectorScalingMultiplierTable  FUELDATA = {
	.columnCount = 11,
	.tableType = UInt16Table2D,
	.columnHeaderArray = INJECTOR_SCALING_MULTIPLIER_ROWS,
	.tableCells = INJECTOR_SCALING_MULTIPLIER_DATA,
	.multiplier = 0.0001525902f,	//todo unit test these
	.offset = 0.0 };
//! 10/65535  (0-10 range, 16bit precision)

#endif

#if POLF_HACKS

unsigned char DefaultPolfHackEnabled FUELDATA = HackDisabled;
unsigned char DefaultLCFuelMode FUELDATA = LCFuelModeDisabled;
float DefaultLCFuelLock FUELDATA = 0.35f;
float DefaultLCFuelEnrichMultiplier FUELDATA = 1.0f;

#if SWITCH_HACKS
TableGroup FuelTableGroup FUELDATA = {
	{&FuelTable1i,
	&FuelTable1s,
	&FuelTable1ss},
	{&FuelTable2i,
	&FuelTable2s,
	&FuelTable2ss}
};
#else
TableGroup FuelTableGroup FUELDATA = {
	{&FuelTable1i,
	&FuelTable1i,
	&FuelTable1i},
	{&FuelTable2i,
	&FuelTable2i,
	&FuelTable2i}
};
#endif

//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!! Launch Control Fuel Retard Table
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

float LCFR_COLS[5] FUELDATA = 
{0,2,4,6,8};

float LCFR_ROWS[12] FUELDATA = 
{2800,3240,3600,4000,4400,4800,5200,5600,6000,6400,6800,7200};

unsigned char LCFR_DATA[70] FUELDATA = 
{0,	0,	0,	0,	0,
2,	1,	1,	0,	0,
5,	4,	2,	1,	0,
8,	6,	4,	2,	0,
10,	7,	5,	2,	0,
13,	10,	6,	3,	0,
16,	12,	8,	4,	0,
19,	14,	9,	4,	0,
22,	16,	10,	5,	0,
26,	19,	12,	6,	0,
29,	21,	13,	6,	0,
33,	23,	15,	7,	0,

};

ThreeDTable LCFuelEnrichTable FUELDATA = {
	.columnCount = 5,
	.rowCount = 12,
	.columnHeaderArray = LCFR_COLS,
	.rowHeaderArray = LCFR_ROWS,
	.tableCells = LCFR_DATA,
	.tableType = UInt8Table3D,
	.multiplier = 0.0078125,//0x3C000000, // 0.78125 = 2/255 (0-2 range, 8bit precision)
	.offset = 0.0f };

//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!! Fuel Table 1 Intelligent
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
float F1I_COLS[20] FUELDATA =
{0.35,	0.55,	0.7,	0.87,	1,	1.15,	1.25,	1.35,	1.45,	1.6,	1.7,	1.8,	2,	2.21,	2.43,	2.64,	2.86,	3.07,	3.29,	3.5,};

float F1I_ROWS[20] FUELDATA =
{800,1200,1600,2000,2400,2800,3200,3600,4000,4400,4800,5200,5600,6000,6400,6800,7200,7600,8000,8400};

unsigned char F1I_DATA[400] FUELDATA =
{0,	0,	0,	0,	0,	0,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,
0,	0,	0,	0,	0,	0,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,
0,	0,	0,	0,	0,	0,	0,	0,	17,	17,	17,	17,	17,	17,	17,	17,	17,	17,	17,	17,
0,	0,	0,	0,	0,	0,	0,	0,	17,	19,	20,	22,	23,	24,	26,	26,	26,	26,	26,	26,
0,	0,	0,	0,	0,	0,	0,	0,	17,	22,	24,	27,	31,	33,	37,	37,	37,	37,	37,	37,
0,	0,	0,	0,	0,	0,	0,	8,	19,	24,	29,	35,	40,	44,	47,	47,	47,	47,	47,	47,
0,	0,	0,	0,	0,	0,	0,	10,	19,	24,	30,	38,	46,	50,	54,	54,	54,	54,	54,	54,
0,	0,	0,	0,	0,	0,	0,	15,	22,	29,	34,	40,	51,	59,	59,	59,	59,	59,	59,	59,
0,	0,	0,	0,	6,	17,	19,	24,	28,	35,	38,	43,	51,	59,	59,	59,	59,	59,	59,	59,
8,	8,	8,	13,	20,	24,	30,	34,	36,	40,	44,	48,	56,	59,	59,	59,	59,	59,	59,	59,
8,	10,	17,	21,	25,	33,	37,	40,	43,	45,	47,	49,	57,	59,	59,	59,	59,	59,	59,	59,
8,	12,	19,	24,	31,	40,	42,	45,	46,	49,	52,	56,	58,	58,	58,	58,	58,	58,	58,	58,
8,	17,	25,	30,	37,	43,	47,	49,	51,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
8,	22,	31,	35,	38,	45,	49,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	54,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	54,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55
};

ThreeDTable FuelTable1i FUELDATA = {
	.columnCount = 20,
	.rowCount = 20,
	.columnHeaderArray = F1I_COLS,
	.rowHeaderArray = F1I_ROWS,
	.tableCells = F1I_DATA,
	.tableType = UInt8Table3D,
	.multiplier = 0.0078125,//0x3C000000, // 0.78125 = 2/255 (0-2 range, 8bit precision)
	.offset = 0.0f };

//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!! Fuel Table 2 Intelligent
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

float F2I_COLS[20] FUELDATA =
{0.35,	0.55,	0.7,	0.87,	1,	1.15,	1.25,	1.35,	1.45,	1.6,	1.7,	1.8,	2,	2.21,	2.43,	2.64,	2.86,	3.07,	3.29,	3.5,};

float F2I_ROWS[20] FUELDATA =
{800,1200,1600,2000,2400,2800,3200,3600,4000,4400,4800,5200,5600,6000,6400,6800,7200,7600,8000,8400};

unsigned char F2I_DATA[400] FUELDATA =
{0,	0,	0,	0,	0,	0,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,
0,	0,	0,	0,	0,	0,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,
0,	0,	0,	0,	0,	0,	0,	0,	17,	17,	17,	17,	17,	17,	17,	17,	17,	17,	17,	17,
0,	0,	0,	0,	0,	0,	0,	0,	17,	19,	20,	22,	23,	24,	26,	26,	26,	26,	26,	26,
0,	0,	0,	0,	0,	0,	0,	0,	17,	22,	24,	27,	31,	33,	37,	37,	37,	37,	37,	37,
0,	0,	0,	0,	0,	0,	0,	8,	19,	24,	29,	35,	40,	44,	47,	47,	47,	47,	47,	47,
0,	0,	0,	0,	0,	0,	0,	10,	19,	24,	30,	38,	46,	50,	54,	54,	54,	54,	54,	54,
0,	0,	0,	0,	0,	0,	0,	15,	22,	29,	34,	40,	51,	59,	59,	59,	59,	59,	59,	59,
0,	0,	0,	0,	6,	17,	19,	24,	28,	35,	38,	43,	51,	59,	59,	59,	59,	59,	59,	59,
8,	8,	8,	13,	20,	24,	30,	34,	36,	40,	44,	48,	56,	59,	59,	59,	59,	59,	59,	59,
8,	10,	17,	21,	25,	33,	37,	40,	43,	45,	47,	49,	57,	59,	59,	59,	59,	59,	59,	59,
8,	12,	19,	24,	31,	40,	42,	45,	46,	49,	52,	56,	58,	58,	58,	58,	58,	58,	58,	58,
8,	17,	25,	30,	37,	43,	47,	49,	51,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
8,	22,	31,	35,	38,	45,	49,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	54,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	54,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55
 };

ThreeDTable FuelTable2i FUELDATA = {
	.columnCount = 20,
	.rowCount = 20,
	.columnHeaderArray = F2I_COLS,
	.rowHeaderArray = F2I_ROWS,
	.tableCells = F2I_DATA,
	.tableType = UInt8Table3D,
	.multiplier = 0.0078125,// = 2/255 (0-2 range, 8bit precision)
	.offset = 0.0f };
	
#if SWITCH_HACKS	
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!! Fuel Table 1 Sport
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
float F1S_COLS[20] FUELDATA =
{0.35,	0.55,	0.7,	0.87,	1,	1.15,	1.25,	1.35,	1.45,	1.6,	1.7,	1.8,	2,	2.21,	2.43,	2.64,	2.86,	3.07,	3.29,	3.5,};

float F1S_ROWS[20] FUELDATA =
{800,1200,1600,2000,2400,2800,3200,3600,4000,4400,4800,5200,5600,6000,6400,6800,7200,7600,8000,8400};

unsigned char F1S_DATA[400] FUELDATA =
{0,	0,	0,	0,	0,	0,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,
0,	0,	0,	0,	0,	0,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,
0,	0,	0,	0,	0,	0,	0,	0,	17,	17,	17,	17,	17,	17,	17,	17,	17,	17,	17,	17,
0,	0,	0,	0,	0,	0,	0,	0,	17,	19,	20,	22,	23,	24,	26,	26,	26,	26,	26,	26,
0,	0,	0,	0,	0,	0,	0,	0,	17,	22,	24,	27,	31,	33,	37,	37,	37,	37,	37,	37,
0,	0,	0,	0,	0,	0,	0,	8,	19,	24,	29,	35,	40,	44,	47,	47,	47,	47,	47,	47,
0,	0,	0,	0,	0,	0,	0,	10,	19,	24,	30,	38,	46,	50,	54,	54,	54,	54,	54,	54,
0,	0,	0,	0,	0,	0,	0,	15,	22,	29,	34,	40,	51,	59,	59,	59,	59,	59,	59,	59,
0,	0,	0,	0,	6,	17,	19,	24,	28,	35,	38,	43,	51,	59,	59,	59,	59,	59,	59,	59,
8,	8,	8,	13,	20,	24,	30,	34,	36,	40,	44,	48,	56,	59,	59,	59,	59,	59,	59,	59,
8,	10,	17,	21,	25,	33,	37,	40,	43,	45,	47,	49,	57,	59,	59,	59,	59,	59,	59,	59,
8,	12,	19,	24,	31,	40,	42,	45,	46,	49,	52,	56,	58,	58,	58,	58,	58,	58,	58,	58,
8,	17,	25,	30,	37,	43,	47,	49,	51,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
8,	22,	31,	35,	38,	45,	49,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	54,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	54,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55
};

ThreeDTable FuelTable1s FUELDATA = {
	.columnCount = 20,
	.rowCount = 20,
	.columnHeaderArray = F1S_COLS,
	.rowHeaderArray = F1S_ROWS,
	.tableCells = F1S_DATA,
	.tableType = UInt8Table3D,
	.multiplier = 0.0078125,//0x3C000000, // 0.78125 = 2/255 (0-2 range, 8bit precision)
	.offset = 0.0f };

//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!! Fuel Table 2 Sport
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

float F2S_COLS[20] FUELDATA =
{0.35,	0.55,	0.7,	0.87,	1,	1.15,	1.25,	1.35,	1.45,	1.6,	1.7,	1.8,	2,	2.21,	2.43,	2.64,	2.86,	3.07,	3.29,	3.5,};

float F2S_ROWS[20] FUELDATA =
{800,1200,1600,2000,2400,2800,3200,3600,4000,4400,4800,5200,5600,6000,6400,6800,7200,7600,8000,8400};

unsigned char F2S_DATA[400] FUELDATA =
{0,	0,	0,	0,	0,	0,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,
0,	0,	0,	0,	0,	0,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,
0,	0,	0,	0,	0,	0,	0,	0,	17,	17,	17,	17,	17,	17,	17,	17,	17,	17,	17,	17,
0,	0,	0,	0,	0,	0,	0,	0,	17,	19,	20,	22,	23,	24,	26,	26,	26,	26,	26,	26,
0,	0,	0,	0,	0,	0,	0,	0,	17,	22,	24,	27,	31,	33,	37,	37,	37,	37,	37,	37,
0,	0,	0,	0,	0,	0,	0,	8,	19,	24,	29,	35,	40,	44,	47,	47,	47,	47,	47,	47,
0,	0,	0,	0,	0,	0,	0,	10,	19,	24,	30,	38,	46,	50,	54,	54,	54,	54,	54,	54,
0,	0,	0,	0,	0,	0,	0,	15,	22,	29,	34,	40,	51,	59,	59,	59,	59,	59,	59,	59,
0,	0,	0,	0,	6,	17,	19,	24,	28,	35,	38,	43,	51,	59,	59,	59,	59,	59,	59,	59,
8,	8,	8,	13,	20,	24,	30,	34,	36,	40,	44,	48,	56,	59,	59,	59,	59,	59,	59,	59,
8,	10,	17,	21,	25,	33,	37,	40,	43,	45,	47,	49,	57,	59,	59,	59,	59,	59,	59,	59,
8,	12,	19,	24,	31,	40,	42,	45,	46,	49,	52,	56,	58,	58,	58,	58,	58,	58,	58,	58,
8,	17,	25,	30,	37,	43,	47,	49,	51,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
8,	22,	31,	35,	38,	45,	49,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	54,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	54,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55
 };

ThreeDTable FuelTable2s FUELDATA = {
	.columnCount = 20,
	.rowCount = 20,
	.columnHeaderArray = F2S_COLS,
	.rowHeaderArray = F2S_ROWS,
	.tableCells = F2S_DATA,
	.tableType = UInt8Table3D,
	.multiplier = 0.0078125,// = 2/255 (0-2 range, 8bit precision)
	.offset = 0.0f };
	
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!! Fuel Table 1 Sport Sharp
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
float F1SS_COLS[20] FUELDATA =
{0.35,	0.55,	0.7,	0.87,	1,	1.15,	1.25,	1.35,	1.45,	1.6,	1.7,	1.8,	2,	2.21,	2.43,	2.64,	2.86,	3.07,	3.29,	3.5,};

float F1SS_ROWS[20] FUELDATA =
{800,1200,1600,2000,2400,2800,3200,3600,4000,4400,4800,5200,5600,6000,6400,6800,7200,7600,8000,8400};

unsigned char F1SS_DATA[400] FUELDATA =
{0,	0,	0,	0,	0,	0,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,
0,	0,	0,	0,	0,	0,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,
0,	0,	0,	0,	0,	0,	0,	0,	17,	17,	17,	17,	17,	17,	17,	17,	17,	17,	17,	17,
0,	0,	0,	0,	0,	0,	0,	0,	17,	19,	20,	22,	23,	24,	26,	26,	26,	26,	26,	26,
0,	0,	0,	0,	0,	0,	0,	0,	17,	22,	24,	27,	31,	33,	37,	37,	37,	37,	37,	37,
0,	0,	0,	0,	0,	0,	0,	8,	19,	24,	29,	35,	40,	44,	47,	47,	47,	47,	47,	47,
0,	0,	0,	0,	0,	0,	0,	10,	19,	24,	30,	38,	46,	50,	54,	54,	54,	54,	54,	54,
0,	0,	0,	0,	0,	0,	0,	15,	22,	29,	34,	40,	51,	59,	59,	59,	59,	59,	59,	59,
0,	0,	0,	0,	6,	17,	19,	24,	28,	35,	38,	43,	51,	59,	59,	59,	59,	59,	59,	59,
8,	8,	8,	13,	20,	24,	30,	34,	36,	40,	44,	48,	56,	59,	59,	59,	59,	59,	59,	59,
8,	10,	17,	21,	25,	33,	37,	40,	43,	45,	47,	49,	57,	59,	59,	59,	59,	59,	59,	59,
8,	12,	19,	24,	31,	40,	42,	45,	46,	49,	52,	56,	58,	58,	58,	58,	58,	58,	58,	58,
8,	17,	25,	30,	37,	43,	47,	49,	51,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
8,	22,	31,	35,	38,	45,	49,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	54,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	54,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55
};

ThreeDTable FuelTable1ss FUELDATA = {
	.columnCount = 20,
	.rowCount = 20,
	.columnHeaderArray = F1SS_COLS,
	.rowHeaderArray = F1SS_ROWS,
	.tableCells = F1SS_DATA,
	.tableType = UInt8Table3D,
	.multiplier = 0.0078125,//0x3C000000, // 0.78125 = 2/255 (0-2 range, 8bit precision)
	.offset = 0.0f };

//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!! Fuel Table 2 Sport Sharp
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

float F2SS_COLS[20] FUELDATA =
{0.35,	0.55,	0.7,	0.87,	1,	1.15,	1.25,	1.35,	1.45,	1.6,	1.7,	1.8,	2,	2.21,	2.43,	2.64,	2.86,	3.07,	3.29,	3.5,};

float F2SS_ROWS[20] FUELDATA =
{800,1200,1600,2000,2400,2800,3200,3600,4000,4400,4800,5200,5600,6000,6400,6800,7200,7600,8000,8400};

unsigned char F2SS_DATA[400] FUELDATA =
{0,	0,	0,	0,	0,	0,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,
0,	0,	0,	0,	0,	0,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,	14,
0,	0,	0,	0,	0,	0,	0,	0,	17,	17,	17,	17,	17,	17,	17,	17,	17,	17,	17,	17,
0,	0,	0,	0,	0,	0,	0,	0,	17,	19,	20,	22,	23,	24,	26,	26,	26,	26,	26,	26,
0,	0,	0,	0,	0,	0,	0,	0,	17,	22,	24,	27,	31,	33,	37,	37,	37,	37,	37,	37,
0,	0,	0,	0,	0,	0,	0,	8,	19,	24,	29,	35,	40,	44,	47,	47,	47,	47,	47,	47,
0,	0,	0,	0,	0,	0,	0,	10,	19,	24,	30,	38,	46,	50,	54,	54,	54,	54,	54,	54,
0,	0,	0,	0,	0,	0,	0,	15,	22,	29,	34,	40,	51,	59,	59,	59,	59,	59,	59,	59,
0,	0,	0,	0,	6,	17,	19,	24,	28,	35,	38,	43,	51,	59,	59,	59,	59,	59,	59,	59,
8,	8,	8,	13,	20,	24,	30,	34,	36,	40,	44,	48,	56,	59,	59,	59,	59,	59,	59,	59,
8,	10,	17,	21,	25,	33,	37,	40,	43,	45,	47,	49,	57,	59,	59,	59,	59,	59,	59,	59,
8,	12,	19,	24,	31,	40,	42,	45,	46,	49,	52,	56,	58,	58,	58,	58,	58,	58,	58,	58,
8,	17,	25,	30,	37,	43,	47,	49,	51,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
8,	22,	31,	35,	38,	45,	49,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	54,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55,
9,	28,	37,	39,	41,	46,	51,	54,	54,	54,	55,	55,	55,	55,	55,	55,	55,	55,	55,	55
 };

ThreeDTable FuelTable2ss FUELDATA = {
	.columnCount = 20,
	.rowCount = 20,
	.columnHeaderArray = F2SS_COLS,
	.rowHeaderArray = F2SS_ROWS,
	.tableCells = F2SS_DATA,
	.tableType = UInt8Table3D,
	.multiplier = 0.0078125,// = 2/255 (0-2 range, 8bit precision)
	.offset = 0.0f };
#endif

#if POLF_RAMTUNING
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!! Fuel Ram Table
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

ThreeDTable FuelRamTable FUELDATA = {
	.columnCount = 20,
	.rowCount = 20,
	.columnHeaderArray = &(pRamVariables.POLFRamCols),
	.rowHeaderArray = &(pRamVariables.POLFRamRows),
	.tableCells = &(pRamVariables.POLFRamData),
	.tableType = UInt8Table3D,
	.multiplier = 0.0078125,// 0x3C000000, // 0.78125 = 2/255 (0-2 range, 8bit precision)
	.offset = 0.0f };
#endif
	
#endif