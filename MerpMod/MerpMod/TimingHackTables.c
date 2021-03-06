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

#if TIMING_HACKS

unsigned char DefaultLCTimingMode TIMINGDATA = LCTimingModeDisabled;
unsigned char DefaultTimingHackEnabled TIMINGDATA = HackDisabled;
float DefaultLCTimingLock TIMINGDATA = 20.0f;
float DefaultLCTimingRetardMultiplier TIMINGDATA = 1.0f;

//TODO IS THIS NECESSARY?
ThreeDTable TimingTable1i  TIMINGDATA;
ThreeDTable TimingTable1s  TIMINGDATA;
ThreeDTable TimingTable1ss  TIMINGDATA;
ThreeDTable TimingTable2i  TIMINGDATA;
ThreeDTable TimingTable2s  TIMINGDATA;
ThreeDTable TimingTable2ss  TIMINGDATA;
ThreeDTable KnockCorrectionRetardTable1i  TIMINGDATA;
ThreeDTable KnockCorrectionRetardTable1s  TIMINGDATA;
ThreeDTable KnockCorrectionRetardTable1ss  TIMINGDATA;
ThreeDTable KnockCorrectionRetardTable2i  TIMINGDATA;
ThreeDTable KnockCorrectionRetardTable2s  TIMINGDATA;
ThreeDTable KnockCorrectionRetardTable2ss  TIMINGDATA;

#if SWITCH_HACKS
TableGroup TimingTableGroup TIMINGDATA = {
	{&TimingTable1i,
	&TimingTable1s,
	&TimingTable1ss},
	{&TimingTable2i,
	&TimingTable2s,
	&TimingTable2ss}
};

TableGroup KnockCorrectionRetardTableGroup TIMINGDATA = {
	{&KnockCorrectionRetardTable1i,
	&KnockCorrectionRetardTable1s,
	&KnockCorrectionRetardTable1ss},
	{&KnockCorrectionRetardTable2i,
	&KnockCorrectionRetardTable2s,
	&KnockCorrectionRetardTable2ss}
};

#else
TableGroup TimingTableGroup TIMINGDATA = {
	{&TimingTable1i,
	&TimingTable1i,
	&TimingTable1i},
	{&TimingTable2i,
	&TimingTable2i,
	&TimingTable2i}
	};
TableGroup KnockCorrectionRetardTableGroup TIMINGDATA = {
	{&KnockCorrectionRetardTable1i,
	&KnockCorrectionRetardTable1i,
	&KnockCorrectionRetardTable1i},
	{&KnockCorrectionRetardTable2i,
	&KnockCorrectionRetardTable2i,
	&KnockCorrectionRetardTable2i}
	};
#endif

//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!! Timing Table 1 i
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	
float T1i_COLS[]  TIMINGDATA = 
{0.2,0.4,0.6,0.8,1.0,1.2,1.4,1.6,1.8,2.0,2.2,2.4,2.6,2.8,3.0,3.2,3.4,3.6,3.8,4.0};

float T1i_ROWS[]  TIMINGDATA = 
{2800,3200,3600,4000,4400,4800,5200,5600,6000,6400,6800,7000,7200,7400,7600,7800,8000,8200,8400,8600};

unsigned char T1i_DATA[]  TIMINGDATA = 
{105, 121, 121, 117, 91, 71, 53, 37, 26, 26, 26, 25, 25, 24, 23, 23, 22, 21, 21, 20,
134, 168, 148, 137, 115, 90, 73, 61, 48, 40, 40, 38, 36, 33, 31, 29, 27, 24, 22, 20,
162, 193, 171, 159, 122, 104, 88, 77, 63, 55, 50, 47, 43, 40, 37, 33, 30, 27, 23, 20,
185, 213, 199, 169, 141, 132, 118, 101, 80, 70, 63, 58, 53, 49, 44, 39, 34, 30, 25, 20,
185, 208, 213, 182, 165, 151, 129, 114, 90, 80, 68, 63, 57, 52, 47, 41, 36, 31, 25, 20,
185, 202, 208, 182, 165, 152, 135, 118, 97, 87, 80, 73, 67, 60, 53, 47, 40, 33, 27, 20,
185, 196, 196, 182, 165, 159, 139, 122, 102, 94, 85, 78, 71, 63, 56, 49, 42, 34, 27, 20,
185, 196, 196, 182, 171, 159, 145, 132, 111, 102, 95, 87, 78, 70, 62, 53, 45, 37, 28, 20,
185, 196, 196, 182, 171, 151, 137, 125, 115, 107, 101, 92, 83, 74, 65, 56, 47, 38, 29, 20,
182, 193, 193, 182, 171, 151, 137, 125, 115, 110, 104, 95, 85, 76, 67, 57, 48, 39, 29, 20,
171, 182, 182, 182, 171, 151, 137, 125, 119, 114, 110, 100, 90, 80, 70, 60, 50, 40, 30, 20,
171, 182, 182, 182, 171, 151, 137, 125, 122, 119, 112, 102, 92, 81, 71, 61, 51, 40, 30, 20,
171, 182, 182, 182, 171, 151, 137, 127, 124, 121, 112, 102, 92, 81, 71, 61, 51, 40, 30, 20,
171, 182, 182, 182, 171, 151, 137, 129, 125, 122, 115, 104, 94, 83, 73, 62, 52, 41, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
};

ThreeDTable TimingTable1i  TIMINGDATA = {
	.columnCount = 20,
	.rowCount = 20,
	.columnHeaderArray = T1i_COLS,
	.rowHeaderArray = T1i_ROWS,
	.tableCells = T1i_DATA,
	.tableType = UInt8Table3D,
	.multiplier = 0.3515625f,	//
	.offset = -20.0f }; 	//-20 offset
	
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!! Timing Table 2 i
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

	
float T2i_COLS[]  TIMINGDATA = 
{0.2,0.4,0.6,0.8,1.0,1.2,1.4,1.6,1.8,2.0,2.2,2.4,2.6,2.8,3.0,3.2,3.4,3.6,3.8,4.0};

float T2i_ROWS[]  TIMINGDATA = 
{2800,3200,3600,4000,4400,4800,5200,5600,6000,6400,6800,7000,7200,7400,7600,7800,8000,8200,8400,8600};

unsigned char T2i_DATA[]  TIMINGDATA = 
{105, 121, 121, 117, 91, 71, 53, 37, 26, 26, 26, 25, 25, 24, 23, 23, 22, 21, 21, 20,
134, 168, 148, 137, 115, 90, 73, 61, 48, 40, 40, 38, 36, 33, 31, 29, 27, 24, 22, 20,
162, 193, 171, 159, 122, 104, 88, 77, 63, 55, 50, 47, 43, 40, 37, 33, 30, 27, 23, 20,
185, 213, 199, 169, 141, 132, 118, 101, 80, 70, 63, 58, 53, 49, 44, 39, 34, 30, 25, 20,
185, 208, 213, 182, 165, 151, 129, 114, 90, 80, 68, 63, 57, 52, 47, 41, 36, 31, 25, 20,
185, 202, 208, 182, 165, 152, 135, 118, 97, 87, 80, 73, 67, 60, 53, 47, 40, 33, 27, 20,
185, 196, 196, 182, 165, 159, 139, 122, 102, 94, 85, 78, 71, 63, 56, 49, 42, 34, 27, 20,
185, 196, 196, 182, 171, 159, 145, 132, 111, 102, 95, 87, 78, 70, 62, 53, 45, 37, 28, 20,
185, 196, 196, 182, 171, 151, 137, 125, 115, 107, 101, 92, 83, 74, 65, 56, 47, 38, 29, 20,
182, 193, 193, 182, 171, 151, 137, 125, 115, 110, 104, 95, 85, 76, 67, 57, 48, 39, 29, 20,
171, 182, 182, 182, 171, 151, 137, 125, 119, 114, 110, 100, 90, 80, 70, 60, 50, 40, 30, 20,
171, 182, 182, 182, 171, 151, 137, 125, 122, 119, 112, 102, 92, 81, 71, 61, 51, 40, 30, 20,
171, 182, 182, 182, 171, 151, 137, 127, 124, 121, 112, 102, 92, 81, 71, 61, 51, 40, 30, 20,
171, 182, 182, 182, 171, 151, 137, 129, 125, 122, 115, 104, 94, 83, 73, 62, 52, 41, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
};
	
ThreeDTable TimingTable2i  TIMINGDATA = {
	.columnCount = 20,
	.rowCount = 20,
	.columnHeaderArray = T2i_COLS,
	.rowHeaderArray = T2i_ROWS,
	.tableCells = T2i_DATA,
	.tableType = UInt8Table3D,
	.multiplier = 0.3515625f,	//
	.offset = -20.0f }; 	//-20 offset
	
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!! KCR Table 1 i
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	
float KCR1i_COLS[]  TIMINGDATA = 
{0.2,0.4,0.6,0.8,1.0,1.2,1.4,1.6,1.8,2.0,2.2,2.4,2.6,2.8,3.0,3.2,3.4,3.6,3.8,4.0};

float KCR1i_ROWS[]  TIMINGDATA = 
{2800,3200,3600,4000,4400,4800,5200,5600,6000,6400,6800,7000,7200,7400,7600,7800,8000,8200,8400,8600};

unsigned char KCR1i_DATA[]  TIMINGDATA = 
{85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85};

ThreeDTable KnockCorrectionRetardTable1i  TIMINGDATA = {
	.columnCount = 20,
	.rowCount = 20,
	.columnHeaderArray = KCR1i_COLS,
	.rowHeaderArray = KCR1i_ROWS,
	.tableCells = KCR1i_DATA,
	.tableType = UInt8Table3D,
	.multiplier = 0.3515625f,	//
	.offset = -20.0f }; 	//-20 offset
	
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!! KCR Table 2 i
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	
float KCR2i_COLS[]  TIMINGDATA = 
{0.2,0.4,0.6,0.8,1.0,1.2,1.4,1.6,1.8,2.0,2.2,2.4,2.6,2.8,3.0,3.2,3.4,3.6,3.8,4.0};

float KCR2i_ROWS[]  TIMINGDATA = 
{2800,3200,3600,4000,4400,4800,5200,5600,6000,6400,6800,7000,7200,7400,7600,7800,8000,8200,8400,8600};

unsigned char KCR2i_DATA[]  TIMINGDATA = 
{85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85};

ThreeDTable KnockCorrectionRetardTable2i  TIMINGDATA = {
	.columnCount = 20,
	.rowCount = 20,
	.columnHeaderArray = KCR2i_COLS,
	.rowHeaderArray = KCR2i_ROWS,
	.tableCells = KCR2i_DATA,
	.tableType = UInt8Table3D,
	.multiplier = 0.3515625f,	//
	.offset = -20.0f }; 	//-20 offset

#if SWITCH_HACKS
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!! Timing Table 1 s
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	
float T1s_COLS[]  TIMINGDATA = 
{0.2,0.4,0.6,0.8,1.0,1.2,1.4,1.6,1.8,2.0,2.2,2.4,2.6,2.8,3.0,3.2,3.4,3.6,3.8,4.0};

float T1s_ROWS[]  TIMINGDATA = 
{2800,3200,3600,4000,4400,4800,5200,5600,6000,6400,6800,7000,7200,7400,7600,7800,8000,8200,8400,8600};

unsigned char T1s_DATA[]  TIMINGDATA = 
{105, 121, 121, 117, 91, 71, 53, 37, 26, 26, 26, 25, 25, 24, 23, 23, 22, 21, 21, 20,
134, 168, 148, 137, 115, 90, 73, 61, 48, 40, 40, 38, 36, 33, 31, 29, 27, 24, 22, 20,
162, 193, 171, 159, 122, 104, 88, 77, 63, 55, 50, 47, 43, 40, 37, 33, 30, 27, 23, 20,
185, 213, 199, 169, 141, 132, 118, 101, 80, 70, 63, 58, 53, 49, 44, 39, 34, 30, 25, 20,
185, 208, 213, 182, 165, 151, 129, 114, 90, 80, 68, 63, 57, 52, 47, 41, 36, 31, 25, 20,
185, 202, 208, 182, 165, 152, 135, 118, 97, 87, 80, 73, 67, 60, 53, 47, 40, 33, 27, 20,
185, 196, 196, 182, 165, 159, 139, 122, 102, 94, 85, 78, 71, 63, 56, 49, 42, 34, 27, 20,
185, 196, 196, 182, 171, 159, 145, 132, 111, 102, 95, 87, 78, 70, 62, 53, 45, 37, 28, 20,
185, 196, 196, 182, 171, 151, 137, 125, 115, 107, 101, 92, 83, 74, 65, 56, 47, 38, 29, 20,
182, 193, 193, 182, 171, 151, 137, 125, 115, 110, 104, 95, 85, 76, 67, 57, 48, 39, 29, 20,
171, 182, 182, 182, 171, 151, 137, 125, 119, 114, 110, 100, 90, 80, 70, 60, 50, 40, 30, 20,
171, 182, 182, 182, 171, 151, 137, 125, 122, 119, 112, 102, 92, 81, 71, 61, 51, 40, 30, 20,
171, 182, 182, 182, 171, 151, 137, 127, 124, 121, 112, 102, 92, 81, 71, 61, 51, 40, 30, 20,
171, 182, 182, 182, 171, 151, 137, 129, 125, 122, 115, 104, 94, 83, 73, 62, 52, 41, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
};

ThreeDTable TimingTable1s  TIMINGDATA = {
	.columnCount = 20,
	.rowCount = 20,
	.columnHeaderArray = T1s_COLS,
	.rowHeaderArray = T1s_ROWS,
	.tableCells = T1s_DATA,
	.tableType = UInt8Table3D,
	.multiplier = 0.3515625f,	//
	.offset = -20.0f }; 	//-20 offset
	
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!! Timing Table 2 s
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

	
float T2s_COLS[]  TIMINGDATA = 
{0.2,0.4,0.6,0.8,1.0,1.2,1.4,1.6,1.8,2.0,2.2,2.4,2.6,2.8,3.0,3.2,3.4,3.6,3.8,4.0};

float T2s_ROWS[]  TIMINGDATA = 
{2800,3200,3600,4000,4400,4800,5200,5600,6000,6400,6800,7000,7200,7400,7600,7800,8000,8200,8400,8600};

unsigned char T2s_DATA[]  TIMINGDATA = 
{105, 121, 121, 117, 91, 71, 53, 37, 26, 26, 26, 25, 25, 24, 23, 23, 22, 21, 21, 20,
134, 168, 148, 137, 115, 90, 73, 61, 48, 40, 40, 38, 36, 33, 31, 29, 27, 24, 22, 20,
162, 193, 171, 159, 122, 104, 88, 77, 63, 55, 50, 47, 43, 40, 37, 33, 30, 27, 23, 20,
185, 213, 199, 169, 141, 132, 118, 101, 80, 70, 63, 58, 53, 49, 44, 39, 34, 30, 25, 20,
185, 208, 213, 182, 165, 151, 129, 114, 90, 80, 68, 63, 57, 52, 47, 41, 36, 31, 25, 20,
185, 202, 208, 182, 165, 152, 135, 118, 97, 87, 80, 73, 67, 60, 53, 47, 40, 33, 27, 20,
185, 196, 196, 182, 165, 159, 139, 122, 102, 94, 85, 78, 71, 63, 56, 49, 42, 34, 27, 20,
185, 196, 196, 182, 171, 159, 145, 132, 111, 102, 95, 87, 78, 70, 62, 53, 45, 37, 28, 20,
185, 196, 196, 182, 171, 151, 137, 125, 115, 107, 101, 92, 83, 74, 65, 56, 47, 38, 29, 20,
182, 193, 193, 182, 171, 151, 137, 125, 115, 110, 104, 95, 85, 76, 67, 57, 48, 39, 29, 20,
171, 182, 182, 182, 171, 151, 137, 125, 119, 114, 110, 100, 90, 80, 70, 60, 50, 40, 30, 20,
171, 182, 182, 182, 171, 151, 137, 125, 122, 119, 112, 102, 92, 81, 71, 61, 51, 40, 30, 20,
171, 182, 182, 182, 171, 151, 137, 127, 124, 121, 112, 102, 92, 81, 71, 61, 51, 40, 30, 20,
171, 182, 182, 182, 171, 151, 137, 129, 125, 122, 115, 104, 94, 83, 73, 62, 52, 41, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
};
	
ThreeDTable TimingTable2s  TIMINGDATA = {
	.columnCount = 20,
	.rowCount = 20,
	.columnHeaderArray = T2s_COLS,
	.rowHeaderArray = T2s_ROWS,
	.tableCells = T2s_DATA,
	.tableType = UInt8Table3D,
	.multiplier = 0.3515625f,	//
	.offset = -20.0f }; 	//-20 offset

//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!	
//!! KCR Table 1 s
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	
float KCR1s_COLS[]  TIMINGDATA = 
{0.2,0.4,0.6,0.8,1.0,1.2,1.4,1.6,1.8,2.0,2.2,2.4,2.6,2.8,3.0,3.2,3.4,3.6,3.8,4.0};

float KCR1s_ROWS[]  TIMINGDATA = 
{2800,3200,3600,4000,4400,4800,5200,5600,6000,6400,6800,7000,7200,7400,7600,7800,8000,8200,8400,8600};

unsigned char KCR1s_DATA[]  TIMINGDATA = 
{85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85};

ThreeDTable KnockCorrectionRetardTable1s  TIMINGDATA = {
	.columnCount = 20,
	.rowCount = 20,
	.columnHeaderArray = KCR1s_COLS,
	.rowHeaderArray = KCR1s_ROWS,
	.tableCells = KCR1s_DATA,
	.tableType = UInt8Table3D,
	.multiplier = 0.3515625f,	//
	.offset = -20.0f }; 	//-20 offset
	
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!! KCR Table 2 s
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	
float KCR2s_COLS[]  TIMINGDATA = 
{0.2,0.4,0.6,0.8,1.0,1.2,1.4,1.6,1.8,2.0,2.2,2.4,2.6,2.8,3.0,3.2,3.4,3.6,3.8,4.0};

float KCR2s_ROWS[]  TIMINGDATA = 
{2800,3200,3600,4000,4400,4800,5200,5600,6000,6400,6800,7000,7200,7400,7600,7800,8000,8200,8400,8600};

unsigned char KCR2s_DATA[]  TIMINGDATA = 
{85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85};

ThreeDTable KnockCorrectionRetardTable2s  TIMINGDATA = {
	.columnCount = 20,
	.rowCount = 20,
	.columnHeaderArray = KCR2s_COLS,
	.rowHeaderArray = KCR2s_ROWS,
	.tableCells = KCR2s_DATA,
	.tableType = UInt8Table3D,
	.multiplier = 0.3515625f,	//
	.offset = -20.0f }; 	//-20 offset
	
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!! Timing Table 1 ss
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	
float T1ss_COLS[]  TIMINGDATA = 
{0.2,0.4,0.6,0.8,1.0,1.2,1.4,1.6,1.8,2.0,2.2,2.4,2.6,2.8,3.0,3.2,3.4,3.6,3.8,4.0};

float T1ss_ROWS[]  TIMINGDATA = 
{2800,3200,3600,4000,4400,4800,5200,5600,6000,6400,6800,7000,7200,7400,7600,7800,8000,8200,8400,8600};

unsigned char T1ss_DATA[]  TIMINGDATA = 
{105, 121, 121, 117, 91, 71, 53, 37, 26, 26, 26, 25, 25, 24, 23, 23, 22, 21, 21, 20,
134, 168, 148, 137, 115, 90, 73, 61, 48, 40, 40, 38, 36, 33, 31, 29, 27, 24, 22, 20,
162, 193, 171, 159, 122, 104, 88, 77, 63, 55, 50, 47, 43, 40, 37, 33, 30, 27, 23, 20,
185, 213, 199, 169, 141, 132, 118, 101, 80, 70, 63, 58, 53, 49, 44, 39, 34, 30, 25, 20,
185, 208, 213, 182, 165, 151, 129, 114, 90, 80, 68, 63, 57, 52, 47, 41, 36, 31, 25, 20,
185, 202, 208, 182, 165, 152, 135, 118, 97, 87, 80, 73, 67, 60, 53, 47, 40, 33, 27, 20,
185, 196, 196, 182, 165, 159, 139, 122, 102, 94, 85, 78, 71, 63, 56, 49, 42, 34, 27, 20,
185, 196, 196, 182, 171, 159, 145, 132, 111, 102, 95, 87, 78, 70, 62, 53, 45, 37, 28, 20,
185, 196, 196, 182, 171, 151, 137, 125, 115, 107, 101, 92, 83, 74, 65, 56, 47, 38, 29, 20,
182, 193, 193, 182, 171, 151, 137, 125, 115, 110, 104, 95, 85, 76, 67, 57, 48, 39, 29, 20,
171, 182, 182, 182, 171, 151, 137, 125, 119, 114, 110, 100, 90, 80, 70, 60, 50, 40, 30, 20,
171, 182, 182, 182, 171, 151, 137, 125, 122, 119, 112, 102, 92, 81, 71, 61, 51, 40, 30, 20,
171, 182, 182, 182, 171, 151, 137, 127, 124, 121, 112, 102, 92, 81, 71, 61, 51, 40, 30, 20,
171, 182, 182, 182, 171, 151, 137, 129, 125, 122, 115, 104, 94, 83, 73, 62, 52, 41, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
};

ThreeDTable TimingTable1ss  TIMINGDATA = {
	.columnCount = 20,
	.rowCount = 20,
	.columnHeaderArray = T1ss_COLS,
	.rowHeaderArray = T1ss_ROWS,
	.tableCells = T1ss_DATA,
	.tableType = UInt8Table3D,
	.multiplier = 0.3515625f,	//
	.offset = -20.0f }; 	//-20 offset
	
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!! Timing Table 2 ss
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

	
float T2ss_COLS[]  TIMINGDATA = 
{0.2,0.4,0.6,0.8,1.0,1.2,1.4,1.6,1.8,2.0,2.2,2.4,2.6,2.8,3.0,3.2,3.4,3.6,3.8,4.0};

float T2ss_ROWS[]  TIMINGDATA = 
{2800,3200,3600,4000,4400,4800,5200,5600,6000,6400,6800,7000,7200,7400,7600,7800,8000,8200,8400,8600};

unsigned char T2ss_DATA[]  TIMINGDATA = 
{105, 121, 121, 117, 91, 71, 53, 37, 26, 26, 26, 25, 25, 24, 23, 23, 22, 21, 21, 20,
134, 168, 148, 137, 115, 90, 73, 61, 48, 40, 40, 38, 36, 33, 31, 29, 27, 24, 22, 20,
162, 193, 171, 159, 122, 104, 88, 77, 63, 55, 50, 47, 43, 40, 37, 33, 30, 27, 23, 20,
185, 213, 199, 169, 141, 132, 118, 101, 80, 70, 63, 58, 53, 49, 44, 39, 34, 30, 25, 20,
185, 208, 213, 182, 165, 151, 129, 114, 90, 80, 68, 63, 57, 52, 47, 41, 36, 31, 25, 20,
185, 202, 208, 182, 165, 152, 135, 118, 97, 87, 80, 73, 67, 60, 53, 47, 40, 33, 27, 20,
185, 196, 196, 182, 165, 159, 139, 122, 102, 94, 85, 78, 71, 63, 56, 49, 42, 34, 27, 20,
185, 196, 196, 182, 171, 159, 145, 132, 111, 102, 95, 87, 78, 70, 62, 53, 45, 37, 28, 20,
185, 196, 196, 182, 171, 151, 137, 125, 115, 107, 101, 92, 83, 74, 65, 56, 47, 38, 29, 20,
182, 193, 193, 182, 171, 151, 137, 125, 115, 110, 104, 95, 85, 76, 67, 57, 48, 39, 29, 20,
171, 182, 182, 182, 171, 151, 137, 125, 119, 114, 110, 100, 90, 80, 70, 60, 50, 40, 30, 20,
171, 182, 182, 182, 171, 151, 137, 125, 122, 119, 112, 102, 92, 81, 71, 61, 51, 40, 30, 20,
171, 182, 182, 182, 171, 151, 137, 127, 124, 121, 112, 102, 92, 81, 71, 61, 51, 40, 30, 20,
171, 182, 182, 182, 171, 151, 137, 129, 125, 122, 115, 104, 94, 83, 73, 62, 52, 41, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
171, 182, 182, 182, 171, 152, 142, 135, 129, 125, 117, 106, 95, 85, 74, 63, 52, 42, 31, 20,
};
	
ThreeDTable TimingTable2ss  TIMINGDATA = {
	.columnCount = 20,
	.rowCount = 20,
	.columnHeaderArray = T2ss_COLS,
	.rowHeaderArray = T2ss_ROWS,
	.tableCells = T2ss_DATA,
	.tableType = UInt8Table3D,
	.multiplier = 0.3515625f,	//
	.offset = -20.0f }; 	//-20 offset


//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!	
//!! KCR Table 1 ss
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	
float KCR1ss_COLS[]  TIMINGDATA = 
{0.2,0.4,0.6,0.8,1.0,1.2,1.4,1.6,1.8,2.0,2.2,2.4,2.6,2.8,3.0,3.2,3.4,3.6,3.8,4.0};

float KCR1ss_ROWS[]  TIMINGDATA = 
{2800,3200,3600,4000,4400,4800,5200,5600,6000,6400,6800,7000,7200,7400,7600,7800,8000,8200,8400,8600};

unsigned char KCR1ss_DATA[]  TIMINGDATA = 
{85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85};

ThreeDTable KnockCorrectionRetardTable1ss  TIMINGDATA = {
	.columnCount = 20,
	.rowCount = 20,
	.columnHeaderArray = KCR1ss_COLS,
	.rowHeaderArray = KCR1ss_ROWS,
	.tableCells = KCR1ss_DATA,
	.tableType = UInt8Table3D,
	.multiplier = 0.3515625f,	//
	.offset = -20.0f }; 	//-20 offset
	
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!! KCR Table 2 ss
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	
float KCR2ss_COLS[]  TIMINGDATA = 
{0.2,0.4,0.6,0.8,1.0,1.2,1.4,1.6,1.8,2.0,2.2,2.4,2.6,2.8,3.0,3.2,3.4,3.6,3.8,4.0};

float KCR2ss_ROWS[]  TIMINGDATA = 
{2800,3200,3600,4000,4400,4800,5200,5600,6000,6400,6800,7000,7200,7400,7600,7800,8000,8200,8400,8600};

unsigned char KCR2ss_DATA[]  TIMINGDATA = 
{85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85};

ThreeDTable KnockCorrectionRetardTable2ss  TIMINGDATA = {
	.columnCount = 20,
	.rowCount = 20,
	.columnHeaderArray = KCR2ss_COLS,
	.rowHeaderArray = KCR2ss_ROWS,
	.tableCells = KCR2ss_DATA,
	.tableType = UInt8Table3D,
	.multiplier = 0.3515625f,	//
	.offset = -20.0f }; 	//-20 offset
#endif

#if TIMING_RAMTUNING
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!!Timing Ram table
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!	
ThreeDTable TimingRamTable  TIMINGDATA = {
	.columnCount = 20,
	.rowCount = 20,
	.columnHeaderArray = &(pRamVariables.TimingRamCols),
	.rowHeaderArray = &(pRamVariables.TimingRamRows),
	.tableCells = &(pRamVariables.TimingRamData),
	.tableType = UInt8Table3D,
	.multiplier = 0.3515625f,	//
	.offset = -20.0f }; 	//-20 offset
#endif

//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!! Launch Control Timing Retard Table
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

float LCTR_COLS[]  TIMINGDATA = 
{0,4,6,8,12};

float LCTR_ROWS[]  TIMINGDATA = 
{2800,3000,3600,4000,4400,4800,5200,5600,6000,6400,6800,7200};

unsigned char LCTR_DATA[]  TIMINGDATA = 
{57, 57, 57, 57, 57,
57,	57,	57,	57,	57,
57,	57,	57,	57,	57,
59,	59,	58,	58,	57,
60,	59,	59,	58,	57,
62,	61,	60,	58,	57,
63,	62,	60,	59,	57,
65,	63,	61,	59,	57,
66,	64,	62,	59,	57,
68,	65,	63,	60,	57,
69,	66,	63,	60,	57,
71,	68,	64,	61,	57,
};
	
ThreeDTable LCTimingRetardTable  TIMINGDATA = {
	.columnCount = 5,
	.rowCount = 12,
	.columnHeaderArray = LCTR_COLS,
	.rowHeaderArray = LCTR_ROWS,
	.tableCells = LCTR_DATA,
	.tableType = UInt8Table3D,
	.multiplier = 0.3515625f,	//
	.offset = -20.0f }; 	//-20 offset

#endif