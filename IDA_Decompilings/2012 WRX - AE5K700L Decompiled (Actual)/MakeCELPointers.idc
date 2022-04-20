/*
 * Copyright (C) 2015  Dale C. Schultz
 * RomRaider member ID: dschultz
 *
 * You are free to use this script for any purpose, but please keep
 * notice of where it came from!
 *
 * To use this script you must locate the start of the CEL routine
 * definitions in the ROM.
 * You also need to locate the start of the CEL switch table.
 * Move the cursor to beginning of the CEL routine definitions and
 * start the script.  Enter the CEL switch start address.
 * Each routine will be commented with the P code and Enable/disable
 * status.  The CEL switch table will be named with the P code.
 * The message area will contain the P code, status and address.
 * The script stops when either 280 codes are ID'd or the P code is 
 * non-numeric or orverruns the CEL routines address.
 * The results are written to the file pcode_def.xml in the ROM
 * directory in a format that can be pasted into a RomRaider
 * Editor def file.
 */

#include <idc.idc>
static main() {
	auto i, startFrom, addrFrom, CelSwTable, pcodeEnabled, pcount, pcArray, currentCode, proceed, endCheck, fout, resultArray, pOOOO, strPcode, alpha, pDesc;
	auto byteOffset, codeBit, ync, offset, combined, tableSize, tableEnd, celCount;
	pcArray = GetArrayId("PCODEARRAY");
	DeleteArray(pcArray);
	resultArray = GetArrayId("RESULTARRAY");
	DeleteArray(resultArray);
	CreatePcodeArray();
	pcArray = GetArrayId("PCODEARRAY");

	ync = AskYN(-1, "Are the CEL Switch and CEL Routine tables combined?"); // -1:cancel,0-no,1-ok
	if (ync == -1) {
		Message("Aborting ROM formating at user request\n");
		return 0;
	}
	else if (ync == 1) {
		tableEnd = AskAddr(0,"Enter the CEL Table End address, or 0 to cancel:\n");
		if (tableEnd <= here) {
			Message("Script cancelled by user, invalid table end address.\n");
			return;
		}
		offset = 2;
		combined = 1;
		tableSize = 12;
	}
	else {
		ync = AskYN(-1, "This question helps determine the CEL table format.\n\nIs this a CAN ROM (2008+)?"); // -1:cancel,0-no,1-ok
		if (ync == -1) {
			Message("Aborting ROM formating at user request\n");
			return 0;
		}
		else if (ync == 1) {
			offset = 2;
		}
		else {
			offset = 1;
		}
		CelSwTable = AskAddr(0,"Make sure the cursor is on the CEL Routine Table Start address then,\nEnter the CEL Switch Table Starting Address:\n");
		if (CelSwTable < 1) {
			Message("Script cancelled by user.\n");
			return;
		}
		combined = 0;
		tableSize = 20;
		tableEnd = 99999999;
	}

	fout = fopen("pcode_def.xml", "w");
	resultArray = CreateArray("RESULTARRAY");
	startFrom = here;
	addrFrom = here;
	pcount = 0;
	celCount = 0;
	endCheck = 1;	// true
	do {
		alpha = 0;
		if (combined) {
			CelSwTable = FormatCombinedTable(addrFrom);
			byteOffset = Byte(addrFrom + 1);
			currentCode = Word(addrFrom + 5);
			pcount = 0;
		}
		else {
			FormatRoutinesTable(addrFrom, CelSwTable, pcount);
			currentCode = Word(addrFrom + 4);
			byteOffset = Byte(addrFrom + offset);
			codeBit = Byte(addrFrom + 1 + offset);
		}
		if (codeBit == 0x01) {
			codeBit = 0;
		}
		else if (codeBit == 0x02) {
			codeBit = 1;
		}
		else if (codeBit == 0x04) {
			codeBit = 2;
		}
		else if (codeBit == 0x08) {
			codeBit = 3;
		}
		else if (codeBit == 0x010) {
			codeBit = 4;
		}
		else if (codeBit == 0x020) {
			codeBit = 5;
		}
		else if (codeBit == 0x040) {
			codeBit = 6;
		}
		else if (codeBit == 0x080) {
			codeBit = 7;
		}

		// Check for P codes with Alphabetical characters in them
		strPcode = form("%04X",currentCode);
		if (substr(strPcode,0,1)  > "9") {alpha = 1;}
		if (substr(strPcode,0,1) == "C") {alpha = 2;}
		if (currentCode == 0xFFFF)		{ endCheck = 0; Message("Found P code of FFFF\n"); }

		pcodeEnabled = CheckEnabled(CelSwTable, currentCode, pcount);
		strPcode = StringOfPcode(currentCode);
		MakeRptCmt(addrFrom + 4 + combined, form("%s - %s %s", pcodeEnabled, strPcode, GetArrayElement(AR_STR, pcArray, currentCode)));
		Message(form("%s, 0x%s, LUT_idx:%02X, byte:%02X, bit:%d, %s %s\n", pcodeEnabled, ltoa(CelSwTable+pcount, 16), celCount, byteOffset, codeBit, strPcode, GetArrayElement(AR_STR, pcArray, currentCode)));
		if (endCheck != 0 && alpha != 1) {
			if (pcodeEnabled == "E") {
				pDesc = GetArrayElement(AR_STR, pcArray, currentCode);
				if (currentCode == 0x0000 && pOOOO == "") {
					pOOOO = form("    <table name=\"(%s) %s\" storageaddress=\"%s\" />\n", strPcode, GetArrayElement(AR_STR, pcArray, 0xFFFE), ltoa(CelSwTable+pcount, 16));
				}
				if (pDesc != "") {
					SetArrayString(resultArray, currentCode,
						form("    <table name=\"(%s) %s\" storageaddress=\"%s\" />\n", strPcode, pDesc, ltoa(CelSwTable+pcount, 16)));
				}
			}
		}
		addrFrom = addrFrom + tableSize;
		celCount = celCount + 1;
		pcount = pcount + 1;
		if (pcount > 280) 						{ endCheck = 0; Message("More than 280 P codes analyzed\n"); }
		if (CelSwTable + pcount == startFrom)	{ endCheck = 0; Message("Overrunning CEL Switch start address\n"); }
		if (addrFrom >= tableEnd)				{ endCheck = 0; Message("Table End address reached\n"); }
	} while (endCheck != 0);
	Message("Finished, " + form("%d", celCount) + " P codes defined.\n");
	currentCode = GetFirstIndex(AR_STR, resultArray);
	Message("Writing pcode_def.xml file in the directory where the ROM file is stored.\n");
	while (currentCode != -1) {
		if (currentCode == 0x0000) {
			writestr(fout, pOOOO);
		}
		writestr(fout, GetArrayElement(AR_STR, resultArray, currentCode));
		currentCode = GetNextIndex(AR_STR, resultArray, currentCode);
	}
	fclose(fout);
	DeleteArray(pcArray);
	DeleteArray(resultArray);
}

static FormatRoutinesTable(addrFrom, CelSwTable, pcount) {
	auto i;
	MakeUnknown(addrFrom, 20, DOUNK_SIMPLE);
	for ( i=0; i < 20; i = i + 1 ) {
		MakeRptCmt(addrFrom + i, "");
	}
	MakeByte(addrFrom);
	MakeByte(addrFrom + 1);	// pre-CAN offset into DTC storage table
	MakeByte(addrFrom + 2);	// pre-CAN DTC bit mask (sets bit for active)
							// CAN offset into DTC storage table
	MakeByte(addrFrom + 3);	// CAN DTC bit mask (sets bit for active)
	MakeWord(addrFrom + 4);	// Diagnostic Trouble Code in this word
	MakeByte(addrFrom + 6);
	MakeByte(addrFrom + 7);
	MakeByte(addrFrom + 8);
	MakeByte(addrFrom + 9);
	MakeByte(addrFrom + 10);
	MakeByte(addrFrom + 11);
	MakeDword(addrFrom + 12);	// Subroutine address
	MakeByte(addrFrom + 16);
	MakeByte(addrFrom + 17);
	MakeByte(addrFrom + 18);
	MakeByte(addrFrom + 19);
	MakeUnknown(CelSwTable + pcount, 1, DOUNK_SIMPLE);
	MakeByte(CelSwTable + pcount);
}

static FormatCombinedTable(addrFrom) {
	auto i;
	MakeUnknown(addrFrom, 12, DOUNK_SIMPLE);
	for ( i=0; i < 12; i = i + 1 ) {
		MakeRptCmt(addrFrom + i, "");
	}
	MakeByte(addrFrom);		// CEL Switch
	MakeByte(addrFrom + 1);	// byte 0-F
	MakeByte(addrFrom + 2);
	MakeByte(addrFrom + 3);
	MakeByte(addrFrom + 4);
	MakeWord(addrFrom + 5);	// Diagnostic Trouble Code in this word
	MakeByte(addrFrom + 7);
	MakeByte(addrFrom + 8);	// byte 0 or 1
	MakeByte(addrFrom + 9);
	MakeByte(addrFrom + 10);
	MakeByte(addrFrom + 11);
	return addrFrom;
}

static CheckEnabled(CelSwTable, currentCode, pcount) {
	auto celEnabled, pcArray, strPcode;
	strPcode = StringOfPcode(currentCode);
	pcArray = GetArrayId("PCODEARRAY");
	CelSwTable = CelSwTable + pcount;
	celEnabled = Byte(CelSwTable);
	if (celEnabled) {
		celEnabled = "E";
		MakeRptCmt(CelSwTable, "");
		if (MakeNameEx(CelSwTable, form("%s_%s",strPcode, GetArrayElement(AR_STR, pcArray, currentCode)), SN_NOWARN)){
		} else {
			MakeNameEx(CelSwTable, form("%s__%s",strPcode, GetArrayElement(AR_STR, pcArray, currentCode)), SN_NOCHECK);
			Message(form("DUPLICATE: %s_%s\n",strPcode, GetArrayElement(AR_STR, pcArray, currentCode)));
		}
	} else {
		celEnabled = "D";
		MakeRptCmt(CelSwTable, form("%s %s", strPcode, GetArrayElement(AR_STR, pcArray, currentCode)));
	}
	return celEnabled;
}

static StringOfPcode(currentCode) {
	auto strPcode;
	strPcode = form("%04X",currentCode);
	if (substr(strPcode,0,1) == "C") {
		strPcode = form("U0%s", substr(strPcode,1,4));
	} else {
		strPcode = form("P%s", strPcode);
	}
	return strPcode;
}

static CreatePcodeArray() {
	auto pcArray;
	pcArray = CreateArray("PCODEARRAY");
	SetArrayString(pcArray, 0x0000, "PASS_CODE_(NO_DTC_DETECTED)");
	SetArrayString(pcArray, 0x0009, "ENGINE_POSITION_SYSTEM_PERFORMANCE_BANK_2");
	SetArrayString(pcArray, 0x000A, "A_CAMSHAFT_POSITION_SLOW_RESPONSE_(BANK_1)");
	SetArrayString(pcArray, 0x000B, "B_CAMSHAFT_POSITION_SLOW_RESPONSE_(BANK_1)");
	SetArrayString(pcArray, 0x000C, "A_CAMSHAFT_POSITION_SLOW_RESPONSE_(BANK_2)");
	SetArrayString(pcArray, 0x000D, "B_CAMSHAFT_POSITION_SLOW_RESPONSE_(BANK_2)");
	SetArrayString(pcArray, 0x0010, "A_CAMSHAFT_POSITION_ACTUATOR_CIRCUIT_OPEN_(BANK_1)");
	SetArrayString(pcArray, 0x0011, "CAMSHAFT_POS_TIMING_OVER_ADVANCED_1");
	SetArrayString(pcArray, 0x0013, "B_CAMSHAFT_POSITION_ACTUATOR_CIRCUIT_OPEN_(BANK_1)");
	SetArrayString(pcArray, 0x0014, "EXHAUST_AVCS_SYSTEM_1_RANGE_PERF");
	SetArrayString(pcArray, 0x0016, "CRANKSHAFT_CAMSHAFT_CORRELATION_1A");
	SetArrayString(pcArray, 0x0017, "CRANK_CAM_TIMING_B_FAILURE_1");
	SetArrayString(pcArray, 0x0018, "CRANKSHAFT_CAMSHAFT_CORRELATION_2A");
	SetArrayString(pcArray, 0x0019, "CRANK_CAM_TIMING_B_FAILURE_2");
	SetArrayString(pcArray, 0x0020, "A_CAMSHAFT_POSITION_ACTUATOR_CIRCUIT_OPEN_(BANK_2)");
	SetArrayString(pcArray, 0x0021, "CAMSHAFT_POS_TIMING_OVER_ADVANCED_2");
	SetArrayString(pcArray, 0x0023, "B_CAMSHAFT_POSITION_ACTUATOR_CIRCUIT_OPEN_(BANK_2)");
	SetArrayString(pcArray, 0x0024, "EXHAUST_AVCS_SYSTEM_2_RANGE_PERF");
	SetArrayString(pcArray, 0x0026, "OSV_SOLENOID_VALVE_CIRCUIT_RANGE_PERF_B1");
	SetArrayString(pcArray, 0x0028, "OSV_SOLENOID_VALVE_CIRCUIT_RANGE_PERF_B2");
	SetArrayString(pcArray, 0x0030, "FRONT_O2_SENSOR_RANGE_PERF");
	SetArrayString(pcArray, 0x0031, "FRONT_O2_SENSOR_LOW_INPUT");
	SetArrayString(pcArray, 0x0032, "FRONT_O2_SENSOR_HIGH_INPUT");
	SetArrayString(pcArray, 0x0037, "REAR_O2_SENSOR_LOW_INPUT");
	SetArrayString(pcArray, 0x0038, "REAR_O2_SENSOR_HIGH_INPUT");
	SetArrayString(pcArray, 0x0043, "HO2S_CIRCUIT_LOW_B1_S3");
	SetArrayString(pcArray, 0x0044, "HO2S_CIRCUIT_HIGH_B1_S3");
	SetArrayString(pcArray, 0x0050, "HO2S_CIRCUIT_RANGE_PERF_B2_S1");
	SetArrayString(pcArray, 0x0051, "HO2S_CIRCUIT_LOW_B2_S1");
	SetArrayString(pcArray, 0x0052, "HO2S_CIRCUIT_HIGH_B2_S1");
	SetArrayString(pcArray, 0x0057, "HO2S_CIRCUIT_LOW_B2_S2");
	SetArrayString(pcArray, 0x0058, "HO2S_CIRCUIT_HIGH_B2_S2");
	SetArrayString(pcArray, 0x0068, "MAP_SENSOR_RANGE_PERF");
	SetArrayString(pcArray, 0x0076, "INTAKE_VALVE_CIRCUIT_LOW_(BANK_1)");
	SetArrayString(pcArray, 0x0077, "INTAKE_VALVE_CONTROL_HIGH_(BANK_1)");
	SetArrayString(pcArray, 0x0082, "INTAKE_VALVE_CONTROL_LOW_(BANK_2)");
	SetArrayString(pcArray, 0x0083, "INTAKE_VALVE_CONTROL_HIGH_(BANK_2)");
	SetArrayString(pcArray, 0x0087, "FUEL_RAIL_SYSTEM_PRESSURE___TOO_LOW");
	SetArrayString(pcArray, 0x0088, "FUEL_RAIL_SYSTEM_PRESSURE___TOO_HIGH");
	SetArrayString(pcArray, 0x0091, "FUEL_PRESSURE_REGULATOR_1_CONTROL_LOW");
	SetArrayString(pcArray, 0x0092, "FUEL_PRESSURE_REGULATOR_1_CONTROL_HIGH");
	SetArrayString(pcArray, 0x0096, "IAT_SENSOR_2_RANGE_PERF");
	SetArrayString(pcArray, 0x0097, "IAT_SENSOR_2_LOW_INPUT");
	SetArrayString(pcArray, 0x0098, "IAT_SENSOR_2_HIGH_INPUT");
	SetArrayString(pcArray, 0x0101, "MAF_SENSOR_RANGE_PERF");
	SetArrayString(pcArray, 0x0102, "MAF_SENSOR_LOW_INPUT");
	SetArrayString(pcArray, 0x0103, "MAF_SENSOR_HIGH_INPUT");
	SetArrayString(pcArray, 0x0107, "MAP_SENSOR_LOW_INPUT");
	SetArrayString(pcArray, 0x0108, "MAP_SENSOR_HIGH_INPUT");
	SetArrayString(pcArray, 0x0111, "IAT_SENSOR_RANGE_PERF");
	SetArrayString(pcArray, 0x0112, "IAT_SENSOR_LOW_INPUT");
	SetArrayString(pcArray, 0x0113, "IAT_SENSOR_HIGH_INPUT");
	SetArrayString(pcArray, 0x0116, "COOLANT_TEMP_SENSOR_1_CIRCUIT_RANGE_PERF");
	SetArrayString(pcArray, 0x0117, "COOLANT_TEMP_SENSOR_LOW_INPUT");
	SetArrayString(pcArray, 0x0118, "COOLANT_TEMP_SENSOR_HIGH_INPUT");
	SetArrayString(pcArray, 0x0121, "TPS_RANGE_PERF");
	SetArrayString(pcArray, 0x0122, "TPS_A_LOW_INPUT");
	SetArrayString(pcArray, 0x0123, "TPS_A_HIGH_INPUT");
	SetArrayString(pcArray, 0x0125, "INSUFFICIENT_COOLANT_TEMP_(FUELING)");
	SetArrayString(pcArray, 0x0126, "INSUFFICIENT_COOLANT_TEMP_(OPERATION)");
	SetArrayString(pcArray, 0x0128, "THERMOSTAT_MALFUNCTION");
	SetArrayString(pcArray, 0x0129, "ATMOS_PRESSURE_SENSOR_RANGE_PERF");
	SetArrayString(pcArray, 0x0131, "FRONT_O2_SENSOR_LOW_INPUT");
	SetArrayString(pcArray, 0x0132, "FRONT_O2_SENSOR_HIGH_INPUT");
	SetArrayString(pcArray, 0x0133, "FRONT_O2_SENSOR_SLOW_RESPONSE");
	SetArrayString(pcArray, 0x0134, "FRONT_O2_SENSOR_NO_ACTIVITY");
	SetArrayString(pcArray, 0x0137, "REAR_O2_SENSOR_LOW_VOLTAGE");
	SetArrayString(pcArray, 0x0138, "REAR_O2_SENSOR_HIGH_VOLTAGE");
	SetArrayString(pcArray, 0x0139, "REAR_O2_SENSOR_SLOW_RESPONSE");
	SetArrayString(pcArray, 0x013A, "O2_SENSOR_SLOW_RESPONSE_RICH_TO_LEAN_B1_S2");
	SetArrayString(pcArray, 0x013B, "O2_SENSOR_SLOW_RESPONSE_LEAN_TO_RICH_B1_S2");
	SetArrayString(pcArray, 0x013C, "O2_SENSOR_SLOW_RESPONSE_RICH_TO_LEAN_B2_S2");
	SetArrayString(pcArray, 0x013D, "O2_SENSOR_SLOW_RESPONSE_LEAN_TO_RICH_B2_S2");
	SetArrayString(pcArray, 0x013E, "O2_SENSOR_DELAYED_RESPONSE_RICH_TO_LEAN_B1_S2");
	SetArrayString(pcArray, 0x013F, "O2_SENSOR_DELAYED_RESPONSE_LEAN_TO_RICH_B1_S2");
	SetArrayString(pcArray, 0x0140, "REAR_O2_SENSOR_NO_ACTIVITY");
	SetArrayString(pcArray, 0x0141, "REAR_O2_SENSOR_MALFUNCTION");
	SetArrayString(pcArray, 0x0143, "O2_SENSOR_CIRCUIT_LOW_B1_S3");
	SetArrayString(pcArray, 0x0144, "O2_SENSOR_CIRCUIT_HIGH_B1_S3");
	SetArrayString(pcArray, 0x0145, "O2_SENSOR_CIRCUIT_SLOW_RESPONSE_B1_S3");
	SetArrayString(pcArray, 0x014A, "O2_SENSOR_DELAYED_RESPONSE_RICH_TO_LEAN_B2_S2");
	SetArrayString(pcArray, 0x014B, "O2_SENSOR_DELAYED_RESPONSE_LEAN_TO_RICH_B2_S2");
	SetArrayString(pcArray, 0x014C, "O2_SENSOR_SLOW_RESPONSE_RICH_TO_LEAN_B1_S1");
	SetArrayString(pcArray, 0x014D, "O2_SENSOR_SLOW_RESPONSE_LEAN_TO_RICH_B1_S1");
	SetArrayString(pcArray, 0x014E, "O2_SENSOR_SLOW_RESPONSE_RICH_TO_LEAN_B2_S1");
	SetArrayString(pcArray, 0x014F, "O2_SENSOR_SLOW_RESPONSE_LEAN_TO_RICH_B2_S1");
	SetArrayString(pcArray, 0x0151, "O2_SENSOR_CIRCUIT_LOW_B2_S1");
	SetArrayString(pcArray, 0x0152, "O2_SENSOR_CIRCUIT_HIGH_B2_S1");
	SetArrayString(pcArray, 0x0153, "O2_SENSOR_CIRCUIT_SLOW_RESPONSE_B2_S1");
	SetArrayString(pcArray, 0x0154, "O2_SENSOR_CIRCUIT_OPEN_B2_S1");
	SetArrayString(pcArray, 0x0157, "O2_SENSOR_CIRCUIT_LOW_B2_S2");
	SetArrayString(pcArray, 0x0158, "O2_SENSOR_CIRCUIT_HIGH_B2_S2");
	SetArrayString(pcArray, 0x0159, "O2_SENSOR_CIRCUIT_SLOW_RESPONSE_B2_S2");
	SetArrayString(pcArray, 0x015A, "O2_SENSOR_DELAYED_RESPONSE_RICH_TO_LEAN_B1_S1");
	SetArrayString(pcArray, 0x015B, "O2_SENSOR_DELAYED_RESPONSE_LEAN_TO_RICH_B1_S1");
	SetArrayString(pcArray, 0x015C, "O2_SENSOR_DELAYED_RESPONSE_RICH_TO_LEAN_B2_S1");
	SetArrayString(pcArray, 0x015D, "O2_SENSOR_DELAYED_RESPONSE_LEAN_TO_RICH_B2_S1");
	SetArrayString(pcArray, 0x0160, "O2_SENSOR_NO_ACTIVITY_B2_S2");
	SetArrayString(pcArray, 0x0161, "O2_SENSOR_HEATER_CIRCUIT_MALFUNCTION_B2_S2");
	SetArrayString(pcArray, 0x0171, "SYSTEM_TOO_LEAN");
	SetArrayString(pcArray, 0x0172, "SYSTEM_TOO_RICH");
	SetArrayString(pcArray, 0x0174, "SYSTEM_TOO_LEAN_B2");
	SetArrayString(pcArray, 0x0175, "SYSTEM_TOO_RICH_B2");
	SetArrayString(pcArray, 0x0181, "FUEL_TEMP_SENSOR_A_RANGE_PERF");
	SetArrayString(pcArray, 0x0182, "FUEL_TEMP_SENSOR_A_LOW_INPUT");
	SetArrayString(pcArray, 0x0183, "FUEL_TEMP_SENSOR_A_HIGH_INPUT");
	SetArrayString(pcArray, 0x0191, "FUEL_RAIL_PRESSURE_SENSOR_A_CIRCUIT_RANGE_PERF");
	SetArrayString(pcArray, 0x0192, "FUEL_RAIL_PRESSURE_SENSOR_CIRCUIT_LOW_INPUT");
	SetArrayString(pcArray, 0x0193, "FUEL_RAIL_PRESSURE_SENSOR_CIRCUIT_HIGH_INPUT");
	SetArrayString(pcArray, 0x0196, "OIL_TEMP_SENSOR_RANGE_PERF");
	SetArrayString(pcArray, 0x0197, "OIL_TEMP_SENSOR_LOW");
	SetArrayString(pcArray, 0x0198, "OIL_TEMP_SENSOR_HIGH");
	SetArrayString(pcArray, 0x0201, "INJECTOR_CIRCUIT_MALFUNCTION_CYLINDER_1");
	SetArrayString(pcArray, 0x0202, "INJECTOR_CIRCUIT_MALFUNCTION_CYLINDER_2");
	SetArrayString(pcArray, 0x0203, "INJECTOR_CIRCUIT_MALFUNCTION_CYLINDER_3");
	SetArrayString(pcArray, 0x0204, "INJECTOR_CIRCUIT_MALFUNCTION_CYLINDER_4");
	SetArrayString(pcArray, 0x0205, "INJECTOR_CIRCUIT_MALFUNCTION_CYLINDER_5");
	SetArrayString(pcArray, 0x0206, "INJECTOR_CIRCUIT_MALFUNCTION_CYLINDER_6");
	SetArrayString(pcArray, 0x0222, "TPS_B_LOW_INPUT");
	SetArrayString(pcArray, 0x0223, "TPS_B_HIGH_INPUT");
	SetArrayString(pcArray, 0x0230, "FUEL_PUMP_PRIMARY_CIRCUIT");
	SetArrayString(pcArray, 0x0244, "WASTEGATE_SOLENOID_A_RANGE_PERF");
	SetArrayString(pcArray, 0x0245, "WASTEGATE_SOLENOID_A_LOW");
	SetArrayString(pcArray, 0x0246, "WASTEGATE_SOLENOID_A_HIGH");
	SetArrayString(pcArray, 0x0261, "FUEL_INJECTOR_#1_CIRCUIT_LOW");
	SetArrayString(pcArray, 0x0264, "FUEL_INJECTOR_#2_CIRCUIT_LOW");
	SetArrayString(pcArray, 0x0267, "FUEL_INJECTOR_#3_CIRCUIT_LOW");
	SetArrayString(pcArray, 0x0270, "FUEL_INJECTOR_#4_CIRCUIT_LOW");
	SetArrayString(pcArray, 0x0300, "RANDOM_MULTIPLE_CYLINDER_MISFIRE_DETECTED");
	SetArrayString(pcArray, 0x0301, "MISFIRE_CYLINDER_1");
	SetArrayString(pcArray, 0x0302, "MISFIRE_CYLINDER_2");
	SetArrayString(pcArray, 0x0303, "MISFIRE_CYLINDER_3");
	SetArrayString(pcArray, 0x0304, "MISFIRE_CYLINDER_4");
	SetArrayString(pcArray, 0x0305, "MISFIRE_CYLINDER_5");
	SetArrayString(pcArray, 0x0306, "MISFIRE_CYLINDER_6");
	SetArrayString(pcArray, 0x0327, "KNOCK_SENSOR_1_LOW_INPUT");
	SetArrayString(pcArray, 0x0328, "KNOCK_SENSOR_1_HIGH_INPUT");
	SetArrayString(pcArray, 0x0332, "KNOCK_SENSOR_2_LOW_INPUT");
	SetArrayString(pcArray, 0x0333, "KNOCK_SENSOR_2_HIGH_INPUT");
	SetArrayString(pcArray, 0x0335, "CRANKSHAFT_POS_SENSOR_A_MALFUNCTION");
	SetArrayString(pcArray, 0x0336, "CRANKSHAFT_POS_SENSOR_A_RANGE_PERF");
	SetArrayString(pcArray, 0x0340, "CAMSHAFT_POS_SENSOR_A_MALFUNCTION");
	SetArrayString(pcArray, 0x0340, "CAMSHAFT_POS_SENSOR_A_MALFUNCTION");
	SetArrayString(pcArray, 0x0341, "CAMSHAFT_POS_SENSOR_A_RANGE_PERF");
	SetArrayString(pcArray, 0x0345, "CAMSHAFT_POS_SENSOR_A_BANK_2");
	SetArrayString(pcArray, 0x0346, "CAMSHAFT_POS_SENSOR_A_CIRCUIT_RANGE_PERF_BANK_2");
	SetArrayString(pcArray, 0x0350, "IGNITION_COIL_PRIMARY_SECONDARY");
	SetArrayString(pcArray, 0x0351, "IGNITION_COIL_A_PRIMARY_SECONDARY_CIRCUIT_MALFUNCTION");
	SetArrayString(pcArray, 0x0352, "IGNITION_COIL_B_PRIMARY_SECONDARY_CIRCUIT_MALFUNCTION");
	SetArrayString(pcArray, 0x0353, "IGNITION_COIL_C_PRIMARY_SECONDARY_CIRCUIT_MALFUNCTION");
	SetArrayString(pcArray, 0x0354, "IGNITION_COIL_D_PRIMARY_SECONDARY_CIRCUIT_MALFUNCTION");
	SetArrayString(pcArray, 0x0355, "IGNITION_COIL_E_PRIMARY_SECONDARY_CIRCUIT_MALFUNCTION");
	SetArrayString(pcArray, 0x0356, "IGNITION_COIL_F_PRIMARY_SECONDARY_CIRCUIT_MALFUNCTION");
	SetArrayString(pcArray, 0x0365, "CAMSHAFT_POS_SENSOR_B_BANK_1");
	SetArrayString(pcArray, 0x0366, "CAMSHAFT_POS_SENSOR_B_CIRCUIT_RANGE_PERF_BANK_1");
	SetArrayString(pcArray, 0x0390, "CAMSHAFT_POS_SENSOR_B_BANK_2");
	SetArrayString(pcArray, 0x0391, "CAMSHAFT_POS_SENSOR_B_CIRCUIT_RANGE_PERF_BANK_2");
	SetArrayString(pcArray, 0x0400, "EGR_FLOW");
	SetArrayString(pcArray, 0x0410, "SECONDARY_AIR_PUMP_SYSTEM");
	SetArrayString(pcArray, 0x0411, "SECONDARY_AIR_PUMP_INCORRECT_FLOW");
	SetArrayString(pcArray, 0x0413, "SECONDARY_AIR_PUMP_A_OPEN");
	SetArrayString(pcArray, 0x0414, "SECONDARY_AIR_PUMP_A_SHORTED");
	SetArrayString(pcArray, 0x0416, "SECONDARY_AIR_PUMP_B_OPEN");
	SetArrayString(pcArray, 0x0417, "SECONDARY_AIR_PUMP_B_SHORTED");
	SetArrayString(pcArray, 0x0418, "SECONDARY_AIR_PUMP_RELAY_A");
	SetArrayString(pcArray, 0x0420, "CAT_EFFICIENCY_BELOW_THRESHOLD");
	SetArrayString(pcArray, 0x0441, "EVAP_INCORRECT_PURGE_FLOW");
	SetArrayString(pcArray, 0x0442, "EVAP_LEAK_DETECTED_(SMALL)");
	SetArrayString(pcArray, 0x0445, "EVAP_EMISSION_CONTROL_SYSTEM_PURGE_CONTROL_VALVE_CIRCUIT_SHORTED");
	SetArrayString(pcArray, 0x0447, "EVAP_VENT_CONTROL_CIRCUIT_OPEN");
	SetArrayString(pcArray, 0x0448, "EVAP_VENT_CONTROL_CIRCUIT_SHORTED");
	SetArrayString(pcArray, 0x0451, "EVAP_PRESSURE_SENSOR_RANGE_PERF");
	SetArrayString(pcArray, 0x0452, "EVAP_PRESSURE_SENSOR_LOW_INPUT");
	SetArrayString(pcArray, 0x0453, "EVAP_PRESSURE_SENSOR_HIGH_INPUT");
	SetArrayString(pcArray, 0x0455, "EVAP_EMISSION_CONTROL_SYSTEM_LEAK_DETECTED_(GROSS_LEAK)");
	SetArrayString(pcArray, 0x0456, "EVAP_LEAK_DETECTED_(VERY_SMALL)");
	SetArrayString(pcArray, 0x0457, "EVAP_LEAK_DETECTED_(FUEL_CAP)");
	SetArrayString(pcArray, 0x0458, "EVAP_PURGE_VALVE_CIRCUIT_LOW");
	SetArrayString(pcArray, 0x0459, "EVAP_PURGE_VALVE_CIRCUIT_HIGH");
	SetArrayString(pcArray, 0x0461, "FUEL_LEVEL_SENSOR_RANGE_PERF");
	SetArrayString(pcArray, 0x0462, "FUEL_LEVEL_SENSOR_LOW_INPUT");
	SetArrayString(pcArray, 0x0463, "FUEL_LEVEL_SENSOR_HIGH_INPUT");
	SetArrayString(pcArray, 0x0464, "FUEL_LEVEL_SENSOR_INTERMITTENT");
	SetArrayString(pcArray, 0x0483, "RADIATOR_FAN_RATIONALITY_CHECK");
	SetArrayString(pcArray, 0x04AC, "EVAP_SYSTEM_PURGE_CONTROL_VALVE_B_CIRCUIT_LOW");
	SetArrayString(pcArray, 0x04AD, "EVAP_SYSTEM_PURGE_CONTROL_VALVE_B_CIRCUIT_HIGH");
	SetArrayString(pcArray, 0x04DB, "CRANKCASE_VENTILATION_SYSTEM_DISCONNECTED");
	SetArrayString(pcArray, 0x0500, "VEHICLE_SPEED_SENSOR_A");
	SetArrayString(pcArray, 0x0502, "VEHICLE_SPEED_SENSOR_LOW_INPUT");
	SetArrayString(pcArray, 0x0503, "VEHICLE_SPEED_SENSOR_INTERMITTENT");
	SetArrayString(pcArray, 0x0504, "BRAKE_SWITCH_A___B_CORRELATION");
	SetArrayString(pcArray, 0x0506, "IDLE_CONTROL_RPM_LOWER_THAN_EXPECTED");
	SetArrayString(pcArray, 0x0507, "IDLE_CONTROL_RPM_HIGH_THAN_EXPECTED");
	SetArrayString(pcArray, 0x0508, "IDLE_CONTROL_CIRCUIT_LOW");
	SetArrayString(pcArray, 0x0509, "IDLE_CONTROL_CIRCUIT_HIGH");
	SetArrayString(pcArray, 0x050A, "COLD_START_IDLE_AIR_CONTROL_SYSTEM_PERFORMANCE");
	SetArrayString(pcArray, 0x050B, "COLD_START_IGNITION_TIMING_PERFORMANCE");
	SetArrayString(pcArray, 0x050E, "COLD_START_ENGINE_EXHAUST_TEMPERATURE_OUT_OF_RANGE");
	SetArrayString(pcArray, 0x0512, "STARTER_REQUEST_CIRCUIT");
	SetArrayString(pcArray, 0x0516, "BATTERY_TEMPERATURE_SENSOR_CIRCUIT_LOW");
	SetArrayString(pcArray, 0x0517, "BATTERY_TEMPERATURE_SENSOR_CIRCUIT_HIGH");
	SetArrayString(pcArray, 0x0519, "IDLE_CONTROL_MALFUNCTION_(FAIL_SAFE)");
	SetArrayString(pcArray, 0x0545, "EGT_SENSOR_CIRCUIT_LOW");
	SetArrayString(pcArray, 0x0546, "EGT_SENSOR_CIRCUIT_HIGH");
	SetArrayString(pcArray, 0x0557, "BRAKE_BOOSTER_PRESSURE_SENSOR_CIRCUIT_LOW");
	SetArrayString(pcArray, 0x0558, "ALTERNATOR_CIRCUIT_LOW");
	SetArrayString(pcArray, 0x0559, "ALTERNATOR_CIRCUIT_HIGH");
	SetArrayString(pcArray, 0x0560, "BACKUP_POWER_SUPPLY");
	SetArrayString(pcArray, 0x0562, "SYSTEM_VOLTAGE_LOW");
	SetArrayString(pcArray, 0x0563, "SYSTEM_VOLTAGE_HIGH");
	SetArrayString(pcArray, 0x0565, "CRUISE_CONTROL_SET_SIGNAL");
	SetArrayString(pcArray, 0x0600, "SERIAL_COMMUNICATION_LINK");
	SetArrayString(pcArray, 0x0602, "CONTROL_MODULE_PROG_ERROR");
	SetArrayString(pcArray, 0x0604, "CONTROL_MODULE_RAM_ERROR");
	SetArrayString(pcArray, 0x0605, "CONTROL_MODULE_ROM_ERROR");
	SetArrayString(pcArray, 0x0606, "MICRO_COMPUTER_(CPU_FAILURE)");
	SetArrayString(pcArray, 0x0607, "CONTROL_MODULE_PERFORMANCE");
	SetArrayString(pcArray, 0x060A, "INTERNAL_CONTROL_MODULE_MONITORING_PROCESSOR_PERFORMANCE");
	SetArrayString(pcArray, 0x060B, "INTERNAL_CONTROL_MODULE_A_D_PROCESSING_PERFORMANCE");
	SetArrayString(pcArray, 0x0616, "STARTER_RELAY_CIRCUIT_(LOW)");
	SetArrayString(pcArray, 0x0617, "STARTER_RELAY_CIRCUIT_(HIGH)");
	SetArrayString(pcArray, 0x062D, "NO1_FUEL_INJECTOR_DRIVER_CIRCUIT_PERFORMANCE");
	SetArrayString(pcArray, 0x062F, "EEPROM_ERROR");
	SetArrayString(pcArray, 0x0638, "THROTTLE_ACTUATOR_RANGE_PERF");
	SetArrayString(pcArray, 0x0691, "RADIATOR_FAN_CIRCUIT_LOW");
	SetArrayString(pcArray, 0x0692, "RADIATOR_FAN_CIRCUIT_HIGH");
	SetArrayString(pcArray, 0x0700, "TRANSMISSION_CONTROL_SYSTEM");
	SetArrayString(pcArray, 0x0703, "BRAKE_SWITCH_INPUT_MALFUNCTION");
	SetArrayString(pcArray, 0x0705, "TRANSMISSION_RANGE_SENSOR_MALFUNCTION");
	SetArrayString(pcArray, 0x0710, "ATF_TEMP_SENSOR_MALFUNCTION");
	SetArrayString(pcArray, 0x0716, "TORQUE_CONVERTER_TURBINE_SPEED_RANGE_PERF");
	SetArrayString(pcArray, 0x0720, "AT_VEHICLE_SPEED_SENSOR_HIGH");
	SetArrayString(pcArray, 0x0726, "ENGINE_SPEED_INPUT_RANGE_PERF");
	SetArrayString(pcArray, 0x0731, "GEAR_1_INCORRECT_RATIO");
	SetArrayString(pcArray, 0x0732, "GEAR_2_INCORRECT_RATIO");
	SetArrayString(pcArray, 0x0733, "GEAR_3_INCORRECT_RATIO");
	SetArrayString(pcArray, 0x0734, "GEAR_4_INCORRECT_RATIO");
	SetArrayString(pcArray, 0x0741, "TORQUE_CONVERTER_CLUTCH_MALFUNCTION");
	SetArrayString(pcArray, 0x0743, "TORQUE_CONVERTER_CLUTCH_LOCK_UP_DUTY_SOLENOID");
	SetArrayString(pcArray, 0x0748, "PRESSURE_CONTROL_LINE_PRESSURE_DUTY_SOLENOID");
	SetArrayString(pcArray, 0x0753, "SHIFT_SOLENOID_A_ELECTRICAL");
	SetArrayString(pcArray, 0x0758, "SHIFT_SOLENOID_B_ELECTRICAL");
	SetArrayString(pcArray, 0x0771, "AT_LOW_CLUTCH_TIMING_SOLENOID_MALFUNCTION");
	SetArrayString(pcArray, 0x0778, "AT_2_4_BRAKE_PRESSURE_SOLENOID_MALFUNCTION");
	SetArrayString(pcArray, 0x0785, "AT_2_4_BRAKE_TIMING_SOLENOID_MALFUNCTION");
	SetArrayString(pcArray, 0x081A, "STARTER_CUT_RELAY_SYSTEM_CIRCUIT_(LOW)");
	SetArrayString(pcArray, 0x0851, "NEUTRAL_SWITCH_INPUT_LOW");
	SetArrayString(pcArray, 0x0852, "NEUTRAL_SWITCH_INPUT_HIGH");
	SetArrayString(pcArray, 0x0864, "TCM_COMMUNICATION_RANGE_PERF");
	SetArrayString(pcArray, 0x0865, "TCM_COMMUNICATION_CIRCUIT_LOW");
	SetArrayString(pcArray, 0x0866, "TCM_COMMUNICATION_CIRCUIT_HIGH");
	SetArrayString(pcArray, 0x1026, "VVL_SYSTEMS_1_PERFORMANCE");
	SetArrayString(pcArray, 0x1028, "VVL_SYSTEMS_2_PERFORMANCE");
	SetArrayString(pcArray, 0x1086, "TGV_POS_2_CIRCUIT_LOW");
	SetArrayString(pcArray, 0x1087, "TGV_POS_2_CIRCUIT_HIGH");
	SetArrayString(pcArray, 0x1088, "TGV_POS_1_CIRCUIT_LOW");
	SetArrayString(pcArray, 0x1089, "TGV_POS_1_CIRCUIT_HIGH");
	SetArrayString(pcArray, 0x1090, "TGV_SYSTEM_1_(VALVE_OPEN)");
	SetArrayString(pcArray, 0x1091, "TGV_SYSTEM_1_(VALVE_CLOSE)");
	SetArrayString(pcArray, 0x1092, "TGV_SYSTEM_2_(VALVE_OPEN)");
	SetArrayString(pcArray, 0x1093, "TGV_SYSTEM_2_(VALVE_CLOSE)");
	SetArrayString(pcArray, 0x1094, "TGV_SIGNAL_1_(OPEN)");
	SetArrayString(pcArray, 0x1095, "TGV_SIGNAL_1_(SHORT)");
	SetArrayString(pcArray, 0x1096, "TGV_SIGNAL_2_(OPEN)");
	SetArrayString(pcArray, 0x1097, "TGV_SIGNAL_2_(SHORT)");
	SetArrayString(pcArray, 0x1109, "DETECTED_THROTTLE_DEPOSIT");
	SetArrayString(pcArray, 0x1110, "ATMOS_PRESSURE_SENSOR_LOW_INPUT");
	SetArrayString(pcArray, 0x1111, "ATMOS_PRESSURE_SENSOR_HIGH_INPUT");
	SetArrayString(pcArray, 0x1152, "FRONT_O2_SENSOR_RANGE_PERF_LOW_B1_S1");
	SetArrayString(pcArray, 0x1153, "FRONT_O2_SENSOR_RANGE_PERF_HIGH_B1_S1");
	SetArrayString(pcArray, 0x1154, "O2_SENSOR_RANGE_PERF_LOW_B2_S1");
	SetArrayString(pcArray, 0x1155, "O2_SENSOR_RANGE_PERF_HIGH_B2_S1");
	SetArrayString(pcArray, 0x1160, "ABNORMAL_RETURN_SPRING");
	SetArrayString(pcArray, 0x1170, "FUEL_SYSTEM_ABNORMAL_(PORT)");
	SetArrayString(pcArray, 0x117B, "FUEL_SYSTEM_ABNORMAL_(DI)");
	SetArrayString(pcArray, 0x1235, "HIGH_PRESSURE_FUEL_PUMP_ABNORMAL");
	SetArrayString(pcArray, 0x1261, "DI_INJECTOR_CIRCUIT_OPEN_(CYLINDER_1)");
	SetArrayString(pcArray, 0x1262, "DI_INJECTOR_CIRCUIT_OPEN_(CYLINDER_2)");
	SetArrayString(pcArray, 0x1263, "DI_INJECTOR_CIRCUIT_OPEN_(CYLINDER_3)");
	SetArrayString(pcArray, 0x1264, "DI_INJECTOR_CIRCUIT_OPEN_(CYLINDER_4)");
	SetArrayString(pcArray, 0x1282, "PCV_SYSTEM_CIRCUIT_(OPEN)");
	SetArrayString(pcArray, 0x1301, "MISFIRE_(HIGH_TEMP_EXHAUST_GAS)");
	SetArrayString(pcArray, 0x1312, "EGT_SENSOR_MALFUNCTION");
	SetArrayString(pcArray, 0x1400, "FUEL_TANK_PRESSURE_SOL_LOW");
	SetArrayString(pcArray, 0x1410, "SECONDARY_AIR_PUMP_VALVE_STUCK_OPEN");
	SetArrayString(pcArray, 0x1418, "SECONDARY_AIR_PUMP_CIRCUIT_SHORTED");
	SetArrayString(pcArray, 0x1420, "FUEL_TANK_PRESSURE_SOL_HIGH_INPUT");
	SetArrayString(pcArray, 0x1443, "VENT_CONTROL_SOLENOID_FUNCTION_PROBLEM");
	SetArrayString(pcArray, 0x1446, "FUEL_TANK_SENSOR_CONTROL_CIRCUIT_LOW");
	SetArrayString(pcArray, 0x1447, "FUEL_TANK_SENSOR_CONTROL_CIRCUIT_HIGH");
	SetArrayString(pcArray, 0x1448, "FUEL_TANK_SENSOR_CONTROL_RANGE_PERF");
	SetArrayString(pcArray, 0x1449, "EVAPORATIVE_EMISSION_CONT_SYS_AIR_FILTER_CLOG");
	SetArrayString(pcArray, 0x1451, "EVAPORATIVE_EMISSION_CONT_SYS");
	SetArrayString(pcArray, 0x1458, "CANISTER_PURGE_CONTROL_SOLENOID_VALVE_2_LOW");
	SetArrayString(pcArray, 0x1459, "CANISTER_PURGE_CONTROL_SOLENOID_VALVE_2_HIGH");
	SetArrayString(pcArray, 0x145A, "A_C_PRESSURE_INSUFFICIENT___A_C_CLUTCH_DISABLED");
	SetArrayString(pcArray, 0x1491, "PCV_(BLOWBY) FUNCTION_PROBLEM");
	SetArrayString(pcArray, 0x1492, "EGR_SOLENOID_SIGNAL_1_MALFUNCTION_(LOW)");
	SetArrayString(pcArray, 0x1493, "EGR_SOLENOID_SIGNAL_1_MALFUNCTION_(HIGH)");
	SetArrayString(pcArray, 0x1494, "EGR_SOLENOID_SIGNAL_2_MALFUNCTION_(LOW)");
	SetArrayString(pcArray, 0x1495, "EGR_SOLENOID_SIGNAL_2_MALFUNCTION_(HIGH)");
	SetArrayString(pcArray, 0x1496, "EGR_SIGNAL_3_CIRCUIT_LOW");
	SetArrayString(pcArray, 0x1497, "EGR_SOLENOID_SIGNAL_3_MALFUNCTION_(HIGH)");
	SetArrayString(pcArray, 0x1498, "EGR_SIGNAL_4_CIRCUIT_LOW");
	SetArrayString(pcArray, 0x1499, "EGR_SIGNAL_4_CIRCUIT_HIGH");
	SetArrayString(pcArray, 0x1518, "STARTER_SWITCH_LOW_INPUT");
	SetArrayString(pcArray, 0x1519, "IMRC_STUCK_CLOSED");
	SetArrayString(pcArray, 0x1520, "IMRC_CIRCUIT_MALFUNCTION");
	SetArrayString(pcArray, 0x1530, "BATTERY_CURRENT_SENSOR_CIRCUIT_(LOW)");
	SetArrayString(pcArray, 0x1531, "BATTERY_CURRENT_SENSOR_CIRCUIT_(HIGH)");
	SetArrayString(pcArray, 0x1532, "CHARGING_CONTROL_SYSTEM");
	SetArrayString(pcArray, 0x1544, "EGT_TOO_HIGH");
	SetArrayString(pcArray, 0x1560, "BACK_UP_VOLTAGE_MALFUNCTION");
	SetArrayString(pcArray, 0x1602, "CONTROL_MODULE_PROGRAMMING_ERROR");
	SetArrayString(pcArray, 0x1603, "ENGINE_STALL_HISTORY");
	SetArrayString(pcArray, 0x1604, "STARTABILITY_MALFUNCTION");
	SetArrayString(pcArray, 0x1616, "SBDS_INTERACTIVE_CODES");
	SetArrayString(pcArray, 0x1700, "TPS_CIRCUIT_MALFUNCTION_(AT)");
	SetArrayString(pcArray, 0x2004, "TGV___INTAKE_MANIFOLD_RUNNER_1_STUCK_OPEN");
	SetArrayString(pcArray, 0x2005, "TGV___INTAKE_MANIFOLD_RUNNER_2_STUCK_OPEN");
	SetArrayString(pcArray, 0x2006, "TGV___INTAKE_MANIFOLD_RUNNER_1_STUCK_CLOSED");
	SetArrayString(pcArray, 0x2007, "TGV___INTAKE_MANIFOLD_RUNNER_2_STUCK_CLOSED");
	SetArrayString(pcArray, 0x2008, "TGV___INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_OPEN");
	SetArrayString(pcArray, 0x2009, "TGV___INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_LOW");
	SetArrayString(pcArray, 0x2011, "TGV___INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_OPEN");
	SetArrayString(pcArray, 0x2012, "TGV___INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_LOW");
	SetArrayString(pcArray, 0x2016, "TGV___INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_LOW");
	SetArrayString(pcArray, 0x2017, "TGV___INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_HIGH");
	SetArrayString(pcArray, 0x2021, "TGV___INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_LOW");
	SetArrayString(pcArray, 0x2022, "TGV___INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_HIGH");
	SetArrayString(pcArray, 0x2088, "OCV_SOLENOID_A1_CIRCUIT_OPEN");
	SetArrayString(pcArray, 0x2089, "OCV_SOLENOID_A1_CIRCUIT_SHORT");
	SetArrayString(pcArray, 0x2090, "OCV_SOLENOID_B1_CIRCUIT_OPEN");
	SetArrayString(pcArray, 0x2091, "OCV_SOLENOID_B1_CIRCUIT_SHORT");
	SetArrayString(pcArray, 0x2092, "OCV_SOLENOID_A2_CIRCUIT_OPEN");
	SetArrayString(pcArray, 0x2093, "OCV_SOLENOID_A2_CIRCUIT_SHORT");
	SetArrayString(pcArray, 0x2094, "OCV_SOLENOID_B2_CIRCUIT_OPEN");
	SetArrayString(pcArray, 0x2095, "OCV_SOLENOID_B2_CIRCUIT_SHORT");
	SetArrayString(pcArray, 0x2096, "POST_CATALYST_TOO_LEAN_B1");
	SetArrayString(pcArray, 0x2097, "POST_CATALYST_TOO_RICH_B1");
	SetArrayString(pcArray, 0x2098, "POST_CATALYST_TOO_LEAN_B2");
	SetArrayString(pcArray, 0x2099, "POST_CATALYST_TOO_RICH_B2");
	SetArrayString(pcArray, 0x2101, "THROTTLE_ACTUATOR_CIRCUIT_RANGE_PERF");
	SetArrayString(pcArray, 0x2102, "THROTTLE_ACTUATOR_CIRCUIT_LOW");
	SetArrayString(pcArray, 0x2103, "THROTTLE_ACTUATOR_CIRCUIT_HIGH");
	SetArrayString(pcArray, 0x2109, "TPS_A_MINIMUM_STOP_PERF");
	SetArrayString(pcArray, 0x2119, "THROTTLE_CONTROL_CIRCUIT_RANGE_PERF_PROBLEM");
	SetArrayString(pcArray, 0x2122, "TPS_D_CIRCUIT_LOW_INPUT");
	SetArrayString(pcArray, 0x2123, "TPS_D_CIRCUIT_HIGH_INPUT");
	SetArrayString(pcArray, 0x2127, "TPS_E_CIRCUIT_LOW_INPUT");
	SetArrayString(pcArray, 0x2128, "TPS_E_CIRCUIT_HIGH_INPUT");
	SetArrayString(pcArray, 0x2135, "TPS_A_B_VOLTAGE");
	SetArrayString(pcArray, 0x2138, "TPS_D_E_VOLTAGE");
	SetArrayString(pcArray, 0x2158, "VEHICLE_SPEED_SENSOR_B");
	SetArrayString(pcArray, 0x2195, "O2_SENSOR_SIGNAL_BIASED_STUCK_LEAN_BANK_1_SENSOR_1");
	SetArrayString(pcArray, 0x2196, "O2_SENSOR_SIGNAL_BIASED_STUCK_RICH_BANK_1_SENSOR_1");
	SetArrayString(pcArray, 0x219A, "BANK_1_AFR_IMBALANCE");
	SetArrayString(pcArray, 0x219B, "BANK_2_AFR_IMBALANCE");
	SetArrayString(pcArray, 0x2227, "BARO_PRESSURE_CIRCUIT_RANGE_PERF");
	SetArrayString(pcArray, 0x2228, "BARO_PRESSURE_CIRCUIT_LOW_INPUT");
	SetArrayString(pcArray, 0x2229, "BARO_PRESSURE_CIRCUIT_HIGH_INPUT");
	SetArrayString(pcArray, 0x2270, "O2_SENSOR_SIGNAL_BIASED_STUCK_LEAN_BANK_1_SENSOR_2");
	SetArrayString(pcArray, 0x2271, "O2_SENSOR_SIGNAL_BIASED_STUCK_RICH_BANK_1_SENSOR_2");
	SetArrayString(pcArray, 0x2272, "O2_SENSOR_SIGNAL_BIASED_STUCK_LEAN_BANK_2_SENSOR_2");
	SetArrayString(pcArray, 0x2273, "O2_SENSOR_SIGNAL_BIASED_STUCK_RICH_BANK_2_SENSOR_2");
	SetArrayString(pcArray, 0x2401, "EVAP_LEAK_DETECTION_PUMP_CONTROL_CIRCUIT_LOW");
	SetArrayString(pcArray, 0x2402, "EVAP_LEAK_DETECTION_PUMP_CONTROL_CIRCUIT_HIGH");
	SetArrayString(pcArray, 0x2404, "EVAP_LEAK_DETECTION_PUMP_SENSE_CIRCUIT_RANGE_PERF");
	SetArrayString(pcArray, 0x2419, "EVAP_SWITCHING_VALVE_LOW");
	SetArrayString(pcArray, 0x2420, "EVAP_SWITCHING_VALVE_HIGH");
	SetArrayString(pcArray, 0x2431, "SECONDARY_AIR_PUMP_CIRCUIT_RANGE_PERF");
	SetArrayString(pcArray, 0x2432, "SECONDARY_AIR_PUMP_CIRCUIT_LOW");
	SetArrayString(pcArray, 0x2433, "SECONDARY_AIR_PUMP_CIRCUIT_HIGH");
	SetArrayString(pcArray, 0x2440, "SECONDARY_AIR_PUMP_VALVE_1_STUCK_OPEN");
	SetArrayString(pcArray, 0x2441, "SECONDARY_AIR_PUMP_VALVE_1_STUCK_CLOSED");
	SetArrayString(pcArray, 0x2442, "SECONDARY_AIR_PUMP_VALVE_2_STUCK_OPEN");
	SetArrayString(pcArray, 0x2443, "SECONDARY_AIR_PUMP_2_STUCK_CLOSED");
	SetArrayString(pcArray, 0x2444, "SECONDARY_AIR_PUMP_1_STUCK_ON_B1");
	SetArrayString(pcArray, 0x2503, "CHARGING_SYSTEM_VOLTAGE_LOW");
	SetArrayString(pcArray, 0x2504, "CHARGING_SYSTEM_VOLTAGE_HIGH");
	SetArrayString(pcArray, 0x2257, "AIR_SYSTEM_CONTROL_A_CIRCUIT_LOW");
	SetArrayString(pcArray, 0x2258, "AIR_SYSTEM_CONTROL_A_CIRCUIT_HIGH");
	SetArrayString(pcArray, 0x2610, "ECM_PCM_INTERNAL_ENGINE_OFF_TIMER_PERFORMANCE");
	SetArrayString(pcArray, 0xC073, "CAN_COMMUNICATION_BUS_A_OFF");
	SetArrayString(pcArray, 0xC100, "ENGINE_DATA_NOT_RECEIVED");
	SetArrayString(pcArray, 0xC101, "CAN_LOST_COMMUNICATION_WITH_TCM");
	SetArrayString(pcArray, 0xC122, "CAN_LOST_COMMUNICATION_WITH_VDC");
	SetArrayString(pcArray, 0xC126, "MISSING_DATA_FOR_STEERING_ANGLE_SENSOR");
	SetArrayString(pcArray, 0xC131, "LOST_COMMUNICATION_WITH_EPS");
	SetArrayString(pcArray, 0xC140, "CAN_LOST_COMMUNICATION_WITH_BIU");
	SetArrayString(pcArray, 0xC151, "LOST_COMMUNICATION_WITH_AIR_BAG");
	SetArrayString(pcArray, 0xC155, "LOST_COMMUNICATION_WITH_INSTRUMENT_PANEL_CLUSTER_(IPC) CONTROL_MODULE");
	SetArrayString(pcArray, 0xC164, "MISSING_DATA_FOR_AIR_CONDITIONER");
	SetArrayString(pcArray, 0xC327, "MISSING_DATA_FOR_SMART_KEY_COMPUTER_ASSY");
	SetArrayString(pcArray, 0xC401, "DATA_ERROR_FROM_ENGINE");
	SetArrayString(pcArray, 0xC402, "CAN_INVALID_DATA_RECEIVED_FROM_TCM");
	SetArrayString(pcArray, 0xC416, "CAN_INVALID_DATA_RECEIVED_FROM_VDC");
	SetArrayString(pcArray, 0xC422, "CAN_INVALID_DATA_RECEIVED_FROM_BIU");
	SetArrayString(pcArray, 0xC423, "INVALID_DATA_RECEIVED_FROM_INSTRUMENT_PANEL_CLUSTER_CONTROL_MODULE");
	SetArrayString(pcArray, 0xC424, "DATA_ERROR_FROM_AIR_CONDITIONER");
	SetArrayString(pcArray, 0xC427, "DATA_ERROR_FROM_SMART_KEY_COMPUTER_ASSY");
	SetArrayString(pcArray, 0xC428, "DATA_ERROR_FROM_STEERING_ANGLE_SENSOR");
	SetArrayString(pcArray, 0xC452, "DATA_ERROR_FROM_AIR_BAG");
	SetArrayString(pcArray, 0xFFFE, "PASS_CODE_(NO_DTC_DETECTED)");
}
