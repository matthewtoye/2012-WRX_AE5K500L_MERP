///////////////////////////////////////////////////////////////////////////////
// All definitions for ecu: AE5K700L with SSM read vector base 6322C
///////////////////////////////////////////////////////////////////////////////
#include <idc.idc>
static main ()
{
    Tables ();
    StdParams ();
    ExtParams ();
}

static Tables ()
{
Message("--- Now marking Tables ---\n");
auto referenceAddress;
MakeNameEx(0xC1340, "Target_Boost_", SN_CHECK);
referenceAddress = DfirstB(0xC1340);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Boost_", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_\n");
}

MakeNameEx(0xC12D8, "Target_Boost_X_AXIS", SN_CHECK);
MakeNameEx(0xC1304, "Target_Boost_Y_AXIS", SN_CHECK);
MakeNameEx(0xC0CF4, "Target_Boost_Compensation_ECT", SN_CHECK);
referenceAddress = DfirstB(0xC0CF4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_ECT", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_ECT\n");
}

MakeNameEx(0xC0C14, "Target_Boost_Compensation_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xC0C0C, "Target_Boost_Compensation_1st_Gear", SN_CHECK);
MakeNameEx(0xC0C08, "Target_Boost_Compensation_1st_Gear_Speed_Disable", SN_CHECK);
MakeNameEx(0xC0E3C, "Target_Boost_Compensation_IAT_", SN_CHECK);
referenceAddress = DfirstB(0xC0E3C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_IAT_", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_IAT_\n");
}

MakeNameEx(0xC0E24, "Target_Boost_Compensation_IAT_Y_AXIS", SN_CHECK);
MakeNameEx(0xC0EC4, "Target_Boost_Compensation_Atm_Pressure_", SN_CHECK);
referenceAddress = DfirstB(0xC0EC4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_Atm_Pressure_", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_Atm_Pressure_\n");
}

MakeNameEx(0xC0E94, "Target_Boost_Compensation_Atm_Pressure_X_AXIS", SN_CHECK);
MakeNameEx(0xC0EAC, "Target_Boost_Compensation_Atm_Pressure_Y_AXIS", SN_CHECK);
MakeNameEx(0xD2444, "Boost_Limit_Fuel_Cut_", SN_CHECK);
referenceAddress = DfirstB(0xD2444);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Boost_Limit_Fuel_Cut_", SN_CHECK);
}
else
{
    Message("No reference to Boost_Limit_Fuel_Cut_\n");
}

MakeNameEx(0xD2414, "Boost_Limit_Fuel_Cut_X_AXIS", SN_CHECK);
MakeNameEx(0xD242C, "Boost_Limit_Fuel_Cut_Y_AXIS", SN_CHECK);
MakeNameEx(0xC0BFC, "Boost_Control_Disable_IAM", SN_CHECK);
MakeNameEx(0xC0BF8, "Boost_Control_Disable_Fine_Correction", SN_CHECK);
MakeNameEx(0xC0BAD, "Boost_Control_Disable_Delay_Fine_Correction", SN_CHECK);
MakeNameEx(0xC1150, "Initial_Wastegate_Duty_", SN_CHECK);
referenceAddress = DfirstB(0xC1150);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Initial_Wastegate_Duty_", SN_CHECK);
}
else
{
    Message("No reference to Initial_Wastegate_Duty_\n");
}

MakeNameEx(0xC10E0, "Initial_Wastegate_Duty_X_AXIS", SN_CHECK);
MakeNameEx(0xC111C, "Initial_Wastegate_Duty_Y_AXIS", SN_CHECK);
MakeNameEx(0xC0F58, "Max_Wastegate_Duty_", SN_CHECK);
referenceAddress = DfirstB(0xC0F58);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Max_Wastegate_Duty_", SN_CHECK);
}
else
{
    Message("No reference to Max_Wastegate_Duty_\n");
}

MakeNameEx(0xC0EE8, "Max_Wastegate_Duty_X_AXIS", SN_CHECK);
MakeNameEx(0xC0F24, "Max_Wastegate_Duty_Y_AXIS", SN_CHECK);
MakeNameEx(0x13F3C, "Max_Wastegate_Duty_Limit_PostCompensation", SN_CHECK);
MakeNameEx(0xC0C94, "InitialMax_Wastegate_Duty_Compensation_IAT", SN_CHECK);
referenceAddress = DfirstB(0xC0C94);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_IAT", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_IAT\n");
}

MakeNameEx(0xC0C54, "InitialMax_Wastegate_Duty_Compensation_IAT_Y_AXIS", SN_CHECK);
MakeNameEx(0xC0CB4, "InitialMax_Wastegate_Duty_Compensation_ECT", SN_CHECK);
referenceAddress = DfirstB(0xC0CB4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_ECT", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_ECT\n");
}

MakeNameEx(0xC0C14, "InitialMax_Wastegate_Duty_Compensation_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xC0E7C, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure", SN_CHECK);
referenceAddress = DfirstB(0xC0E7C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_Atm_Pressure", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_Atm_Pressure\n");
}

MakeNameEx(0xC0E54, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_X_AXIS", SN_CHECK);
MakeNameEx(0xC0E6C, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_Y_AXIS", SN_CHECK);
MakeNameEx(0xC0D28, "Turbo_Dynamics_Proportional", SN_CHECK);
referenceAddress = DfirstB(0xC0D28);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Proportional", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Proportional\n");
}

MakeNameEx(0xC0D04, "Turbo_Dynamics_Proportional_Y_AXIS", SN_CHECK);
MakeNameEx(0xC0D98, "Turbo_Dynamics_Integral_Positive", SN_CHECK);
referenceAddress = DfirstB(0xC0D98);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Integral_Positive", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Integral_Positive\n");
}

MakeNameEx(0xC0D74, "Turbo_Dynamics_Integral_Positive_Y_AXIS", SN_CHECK);
MakeNameEx(0xC0D60, "Turbo_Dynamics_Integral_Negative", SN_CHECK);
referenceAddress = DfirstB(0xC0D60);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Integral_Negative", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Integral_Negative\n");
}

MakeNameEx(0xC0D3C, "Turbo_Dynamics_Integral_Negative_Y_AXIS", SN_CHECK);
MakeNameEx(0xC0CC4, "TD_Proportional_Compensation_IAT", SN_CHECK);
referenceAddress = DfirstB(0xC0CC4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Proportional_Compensation_IAT", SN_CHECK);
}
else
{
    Message("No reference to TD_Proportional_Compensation_IAT\n");
}

MakeNameEx(0xC0C54, "TD_Proportional_Compensation_IAT_Y_AXIS", SN_CHECK);
MakeNameEx(0xC0CE4, "TD_Integral_Positive_Compensation_IAT", SN_CHECK);
referenceAddress = DfirstB(0xC0CE4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Integral_Positive_Compensation_IAT", SN_CHECK);
}
else
{
    Message("No reference to TD_Integral_Positive_Compensation_IAT\n");
}

MakeNameEx(0xC0C54, "TD_Integral_Positive_Compensation_IAT_Y_AXIS", SN_CHECK);
MakeNameEx(0xC0CD4, "TD_Integral_Negative_Compensation_IAT", SN_CHECK);
referenceAddress = DfirstB(0xC0CD4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Integral_Negative_Compensation_IAT", SN_CHECK);
}
else
{
    Message("No reference to TD_Integral_Negative_Compensation_IAT\n");
}

MakeNameEx(0xC0C54, "TD_Integral_Negative_Compensation_IAT_Y_AXIS", SN_CHECK);
MakeNameEx(0xC0BE8, "TD_Activation_Thresholds_RPM", SN_CHECK);
MakeNameEx(0xC0BD4, "TD_Activation_Thresholds_Target_Boost_", SN_CHECK);
MakeNameEx(0xC0BF0, "TD_Integral_Cumulative_Range_WGDC_Correction", SN_CHECK);
MakeNameEx(0xC0BDC, "TD_Integral_Negative_Activation_Boost_Error", SN_CHECK);
MakeNameEx(0xC0BE0, "TD_Integral_Positive_Activation_Boost_Error", SN_CHECK);
MakeNameEx(0xC0BE4, "TD_Integral_Negative_Activation_Wastegate_Duty", SN_CHECK);
MakeNameEx(0xD86E8, "Manifold_Pressure_Sensor_Scaling_", SN_CHECK);
MakeNameEx(0xD869A, "Manifold_Pressure_Sensor_Limits_CEL", SN_CHECK);
MakeNameEx(0xD8651, "Manifold_Pressure_Sensor_CEL_Delays", SN_CHECK);
MakeNameEx(0xCFC9C, "Primary_Open_Loop_Fueling", SN_CHECK);
referenceAddress = DfirstB(0xCFC9C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling\n");
}

MakeNameEx(0xCFC10, "Primary_Open_Loop_Fueling_X_AXIS", SN_CHECK);
MakeNameEx(0xCFC54, "Primary_Open_Loop_Fueling_Y_AXIS", SN_CHECK);
MakeNameEx(0xCFE5C, "Primary_Open_Loop_Fueling_Failsafe", SN_CHECK);
referenceAddress = DfirstB(0xCFE5C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Failsafe", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Failsafe\n");
}

MakeNameEx(0xCFDD0, "Primary_Open_Loop_Fueling_Failsafe_X_AXIS", SN_CHECK);
MakeNameEx(0xCFE14, "Primary_Open_Loop_Fueling_Failsafe_Y_AXIS", SN_CHECK);
MakeNameEx(0xCC0DC, "Primary_Open_Loop_Fuel_Map_Switch_IAM", SN_CHECK);
MakeNameEx(0xCC0E0, "Minimum_Active_Primary_Open_Loop_Enrichment", SN_CHECK);
MakeNameEx(0xCCD0C, "Minimum_Primary_Open_Loop_Enrichment_Throttle", SN_CHECK);
referenceAddress = DfirstB(0xCCD0C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Throttle", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Throttle\n");
}

MakeNameEx(0xCCCF4, "Minimum_Primary_Open_Loop_Enrichment_Throttle_Y_AXIS", SN_CHECK);
MakeNameEx(0xCCD2C, "Minimum_Primary_Open_Loop_Enrichment_Accelerator", SN_CHECK);
referenceAddress = DfirstB(0xCCD2C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Accelerator", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Accelerator\n");
}

MakeNameEx(0xCCD14, "Minimum_Primary_Open_Loop_Enrichment_Accelerator_Y_AXIS", SN_CHECK);
MakeNameEx(0xCE638, "Primary_Open_Loop_Fueling_Compensation_ECT", SN_CHECK);
referenceAddress = DfirstB(0xCE638);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_ECT", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_ECT\n");
}

MakeNameEx(0xCC590, "Primary_Open_Loop_Fueling_Compensation_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xCCC9C, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_", SN_CHECK);
referenceAddress = DfirstB(0xCCC9C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_\n");
}

MakeNameEx(0xCCC84, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_Y_AXIS", SN_CHECK);
MakeNameEx(0xD89B0, "Front_Oxygen_Sensor_Scaling", SN_CHECK);
referenceAddress = DfirstB(0xD89B0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Scaling", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Scaling\n");
}

MakeNameEx(0xD897C, "Front_Oxygen_Sensor_Scaling_Y_AXIS", SN_CHECK);
MakeNameEx(0x21B30, "Front_Oxygen_Sensor_Rich_Limit", SN_CHECK);
MakeNameEx(0xC36C0, "Front_Oxygen_Sensor_Compensation_Atm_Pressure", SN_CHECK);
referenceAddress = DfirstB(0xC36C0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Compensation_Atm_Pressure", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Compensation_Atm_Pressure\n");
}

MakeNameEx(0xC36B0, "Front_Oxygen_Sensor_Compensation_Atm_Pressure_Y_AXIS", SN_CHECK);
MakeNameEx(0xD143C, "CL_Fueling_Target_Compensation_A_Load", SN_CHECK);
referenceAddress = DfirstB(0xD143C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_A_Load", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_A_Load\n");
}

MakeNameEx(0xD13E8, "CL_Fueling_Target_Compensation_A_Load_X_AXIS", SN_CHECK);
MakeNameEx(0xD1414, "CL_Fueling_Target_Compensation_A_Load_Y_AXIS", SN_CHECK);
MakeNameEx(0xD16AC, "CL_Fueling_Target_Compensation_B_Load", SN_CHECK);
referenceAddress = DfirstB(0xD16AC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_B_Load", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_B_Load\n");
}

MakeNameEx(0xD1648, "CL_Fueling_Target_Compensation_B_Load_X_AXIS", SN_CHECK);
MakeNameEx(0xD167C, "CL_Fueling_Target_Compensation_B_Load_Y_AXIS", SN_CHECK);
MakeNameEx(0xD131C, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT", SN_CHECK);
referenceAddress = DfirstB(0xD131C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Imm_Cruise_ECT", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Imm_Cruise_ECT\n");
}

MakeNameEx(0xCC590, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_X_AXIS", SN_CHECK);
MakeNameEx(0xD1310, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xD1388, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT", SN_CHECK);
referenceAddress = DfirstB(0xD1388);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Imm_NonCruise_ECT", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Imm_NonCruise_ECT\n");
}

MakeNameEx(0xCC590, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_X_AXIS", SN_CHECK);
MakeNameEx(0xD137C, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xCBF0C, "CL_Fueling_Target_Compensation_ECT_Disable", SN_CHECK);
MakeNameEx(0xCBBE2, "CL_to_OL_Delay_", SN_CHECK);
MakeNameEx(0xCBBDC, "CL_to_OL_DelaySwitch_SIDRIVE_Intelligent", SN_CHECK);
MakeNameEx(0xCCCE4, "CL_to_OL_Transition_with_Delay_Throttle", SN_CHECK);
referenceAddress = DfirstB(0xCCCE4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Throttle", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Throttle\n");
}

MakeNameEx(0xCCCA4, "CL_to_OL_Transition_with_Delay_Throttle_Y_AXIS", SN_CHECK);
MakeNameEx(0xCC0E8, "CL_to_OL_Transition_with_Delay_Throttle_Hysteresis", SN_CHECK);
MakeNameEx(0xCE564, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width", SN_CHECK);
referenceAddress = DfirstB(0xCE564);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Base_Pulse_Width", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Base_Pulse_Width\n");
}

MakeNameEx(0xCE524, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width_Y_AXIS", SN_CHECK);
MakeNameEx(0xCC0E4, "CL_to_OL_Transition_with_Delay_BPW_Hysteresis", SN_CHECK);
MakeNameEx(0xCE5AC, "CL_to_OL_Transition_Counter_Step_Value_MAF", SN_CHECK);
referenceAddress = DfirstB(0xCE5AC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_Counter_Step_Value_MAF", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_Counter_Step_Value_MAF\n");
}

MakeNameEx(0xCE584, "CL_to_OL_Transition_Counter_Step_Value_MAF_Y_AXIS", SN_CHECK);
MakeNameEx(0xCC148, "CL_Delay_Maximum_Throttle", SN_CHECK);
MakeNameEx(0xCC164, "CL_Delay_Maximum_Vehicle_Speed", SN_CHECK);
MakeNameEx(0xCC0EC, "CL_Delay_Minimum_ECT", SN_CHECK);
MakeNameEx(0xCC174, "CL_Delay_Maximum_Engine_Load", SN_CHECK);
MakeNameEx(0xCBBDA, "CL_Delay_Engine_Load_Counter_Threshold", SN_CHECK);
MakeNameEx(0xCC0F0, "CL_Delay_Maximum_Engine_Speed_Per_Gear", SN_CHECK);
MakeNameEx(0xCC118, "CL_Delay_Maximum_Engine_Speed_Neutral", SN_CHECK);
MakeNameEx(0xD0FD8, "Injector_Latency_", SN_CHECK);
referenceAddress = DfirstB(0xD0FD8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Injector_Latency_", SN_CHECK);
}
else
{
    Message("No reference to Injector_Latency_\n");
}

MakeNameEx(0xD0FB8, "Injector_Latency_X_AXIS", SN_CHECK);
MakeNameEx(0xD0FCC, "Injector_Latency_Y_AXIS", SN_CHECK);
MakeNameEx(0xCBD7C, "Injector_Flow_Scaling", SN_CHECK);
MakeNameEx(0xD0754, "Per_Injector_Pulse_Width_Compensation_A", SN_CHECK);
referenceAddress = DfirstB(0xD0754);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_A", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_A\n");
}

MakeNameEx(0xD06CC, "Per_Injector_Pulse_Width_Compensation_A_X_AXIS", SN_CHECK);
MakeNameEx(0xD0710, "Per_Injector_Pulse_Width_Compensation_A_Y_AXIS", SN_CHECK);
MakeNameEx(0xD0900, "Per_Injector_Pulse_Width_Compensation_B", SN_CHECK);
referenceAddress = DfirstB(0xD0900);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_B", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_B\n");
}

MakeNameEx(0xD0878, "Per_Injector_Pulse_Width_Compensation_B_X_AXIS", SN_CHECK);
MakeNameEx(0xD08BC, "Per_Injector_Pulse_Width_Compensation_B_Y_AXIS", SN_CHECK);
MakeNameEx(0xD0AAC, "Per_Injector_Pulse_Width_Compensation_C", SN_CHECK);
referenceAddress = DfirstB(0xD0AAC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_C", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_C\n");
}

MakeNameEx(0xD0A24, "Per_Injector_Pulse_Width_Compensation_C_X_AXIS", SN_CHECK);
MakeNameEx(0xD0A68, "Per_Injector_Pulse_Width_Compensation_C_Y_AXIS", SN_CHECK);
MakeNameEx(0xD0C58, "Per_Injector_Pulse_Width_Compensation_D", SN_CHECK);
referenceAddress = DfirstB(0xD0C58);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_D", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_D\n");
}

MakeNameEx(0xD0BD0, "Per_Injector_Pulse_Width_Compensation_D_X_AXIS", SN_CHECK);
MakeNameEx(0xD0C14, "Per_Injector_Pulse_Width_Compensation_D_Y_AXIS", SN_CHECK);
MakeNameEx(0xCD252, "Cranking_Fuel_Injector_Pulse_Width_A_ECT", SN_CHECK);
referenceAddress = DfirstB(0xCD252);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_A_ECT", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_A_ECT\n");
}

MakeNameEx(0xCC590, "Cranking_Fuel_Injector_Pulse_Width_A_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xCD272, "Cranking_Fuel_Injector_Pulse_Width_B_ECT", SN_CHECK);
referenceAddress = DfirstB(0xCD272);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_B_ECT", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_B_ECT\n");
}

MakeNameEx(0xCC590, "Cranking_Fuel_Injector_Pulse_Width_B_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xCD292, "Cranking_Fuel_Injector_Pulse_Width_C_ECT", SN_CHECK);
referenceAddress = DfirstB(0xCD292);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_C_ECT", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_C_ECT\n");
}

MakeNameEx(0xCC590, "Cranking_Fuel_Injector_Pulse_Width_C_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xCD2B2, "Cranking_Fuel_Injector_Pulse_Width_D_ECT", SN_CHECK);
referenceAddress = DfirstB(0xCD2B2);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_D_ECT", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_D_ECT\n");
}

MakeNameEx(0xCC590, "Cranking_Fuel_Injector_Pulse_Width_D_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xCD2D2, "Cranking_Fuel_Injector_Pulse_Width_E_ECT", SN_CHECK);
referenceAddress = DfirstB(0xCD2D2);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_E_ECT", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_E_ECT\n");
}

MakeNameEx(0xCC590, "Cranking_Fuel_Injector_Pulse_Width_E_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xCD2F2, "Cranking_Fuel_Injector_Pulse_Width_F_ECT", SN_CHECK);
referenceAddress = DfirstB(0xCD2F2);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_F_ECT", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_F_ECT\n");
}

MakeNameEx(0xCC590, "Cranking_Fuel_Injector_Pulse_Width_F_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xCF670, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM", SN_CHECK);
referenceAddress = DfirstB(0xCF670);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM\n");
}

MakeNameEx(0xCF640, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_X_AXIS", SN_CHECK);
MakeNameEx(0xCF654, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_Y_AXIS", SN_CHECK);
MakeNameEx(0xCF61C, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM", SN_CHECK);
referenceAddress = DfirstB(0xCF61C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM\n");
}

MakeNameEx(0xCF5EC, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_X_AXIS", SN_CHECK);
MakeNameEx(0xCF600, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_Y_AXIS", SN_CHECK);
MakeNameEx(0xCC7D4, "Cranking_Fuel_IPW_Compensation_MAP", SN_CHECK);
referenceAddress = DfirstB(0xCC7D4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_MAP", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_MAP\n");
}

MakeNameEx(0xCC7AC, "Cranking_Fuel_IPW_Compensation_MAP_Y_AXIS", SN_CHECK);
MakeNameEx(0xCC808, "Cranking_Fuel_IPW_Compensation_Accelerator", SN_CHECK);
referenceAddress = DfirstB(0xCC808);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Accelerator", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Accelerator\n");
}

MakeNameEx(0xCC7E0, "Cranking_Fuel_IPW_Compensation_Accelerator_Y_AXIS", SN_CHECK);
MakeNameEx(0xCC828, "Cranking_Fuel_IPW_Compensation_IAT", SN_CHECK);
referenceAddress = DfirstB(0xCC828);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_IAT", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_IAT\n");
}

MakeNameEx(0xCC814, "Cranking_Fuel_IPW_Compensation_IAT_Y_AXIS", SN_CHECK);
MakeNameEx(0xCECBC, "Throttle_Tipin_Enrichment_A", SN_CHECK);
referenceAddress = DfirstB(0xCECBC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment_A", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment_A\n");
}

MakeNameEx(0xCEC74, "Throttle_Tipin_Enrichment_A_Y_AXIS", SN_CHECK);
MakeNameEx(0xCED28, "Throttle_Tipin_Enrichment_B", SN_CHECK);
referenceAddress = DfirstB(0xCED28);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment_B", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment_B\n");
}

MakeNameEx(0xCECE0, "Throttle_Tipin_Enrichment_B_Y_AXIS", SN_CHECK);
MakeNameEx(0xCC410, "Minimum_Tipin_Enrichment_Activation", SN_CHECK);
MakeNameEx(0xCC40C, "Minimum_Tipin_Enrichment_Activation_Throttle", SN_CHECK);
MakeNameEx(0xCD0B8, "Tipin_Enrichment_Compensation_Boost_Error", SN_CHECK);
referenceAddress = DfirstB(0xCD0B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_Boost_Error", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_Boost_Error\n");
}

MakeNameEx(0xCD094, "Tipin_Enrichment_Compensation_Boost_Error_Y_AXIS", SN_CHECK);
MakeNameEx(0xCD084, "Tipin_Enrichment_Compensation_RPM", SN_CHECK);
referenceAddress = DfirstB(0xCD084);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_RPM", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_RPM\n");
}

MakeNameEx(0xCD044, "Tipin_Enrichment_Compensation_RPM_Y_AXIS", SN_CHECK);
MakeNameEx(0xCD0C1, "Tipin_Enrichment_Compensation_A_ECT", SN_CHECK);
referenceAddress = DfirstB(0xCD0C1);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_A_ECT", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_A_ECT\n");
}

MakeNameEx(0xCC590, "Tipin_Enrichment_Compensation_A_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xCED4C, "Tipin_Enrichment_Compensation_B_ECT", SN_CHECK);
referenceAddress = DfirstB(0xCED4C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_B_ECT", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_B_ECT\n");
}

MakeNameEx(0xCC590, "Tipin_Enrichment_Compensation_B_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xCED6C, "Tipin_Enrichment_Compensation_C_ECT", SN_CHECK);
referenceAddress = DfirstB(0xCED6C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_C_ECT", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_C_ECT\n");
}

MakeNameEx(0xCC590, "Tipin_Enrichment_Compensation_C_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xCEDAC, "Tipin_Enrichment_Compensation_D_ECT", SN_CHECK);
referenceAddress = DfirstB(0xCEDAC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_D_ECT", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_D_ECT\n");
}

MakeNameEx(0xCC5D0, "Tipin_Enrichment_Compensation_D_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xCC414, "Tipin_Enrichment_Compensation_D_ECT_Activation", SN_CHECK);
MakeNameEx(0xCD0D1, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT", SN_CHECK);
referenceAddress = DfirstB(0xCD0D1);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT\n");
}

MakeNameEx(0xCC590, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xCD0E1, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT", SN_CHECK);
referenceAddress = DfirstB(0xCD0E1);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT\n");
}

MakeNameEx(0xCC590, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xCBB88, "Tipin_Enrichment_Applied_Counter_Reset", SN_CHECK);
MakeNameEx(0xCEDCC, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT", SN_CHECK);
referenceAddress = DfirstB(0xCEDCC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT\n");
}

MakeNameEx(0xCC590, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xCEDEC, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT", SN_CHECK);
referenceAddress = DfirstB(0xCEDEC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT\n");
}

MakeNameEx(0xCC590, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xCBB89, "Tipin_Throttle_Cumulative_Reset", SN_CHECK);
MakeNameEx(0xCF8C8, "Min_Primary_Base_Enrichment_1_Cruise", SN_CHECK);
referenceAddress = DfirstB(0xCF8C8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_Cruise", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_Cruise\n");
}

MakeNameEx(0xCC590, "Min_Primary_Base_Enrichment_1_Cruise_X_AXIS", SN_CHECK);
MakeNameEx(0xCF8A4, "Min_Primary_Base_Enrichment_1_Cruise_Y_AXIS", SN_CHECK);
MakeNameEx(0xCF824, "Min_Primary_Base_Enrichment_1_NonCruise", SN_CHECK);
referenceAddress = DfirstB(0xCF824);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonCruise", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonCruise\n");
}

MakeNameEx(0xCC590, "Min_Primary_Base_Enrichment_1_NonCruise_X_AXIS", SN_CHECK);
MakeNameEx(0xCF804, "Min_Primary_Base_Enrichment_1_NonCruise_Y_AXIS", SN_CHECK);
MakeNameEx(0xCC88D, "Min_Primary_Base_Enrichment_1_NonPrimary_OL_", SN_CHECK);
referenceAddress = DfirstB(0xCC88D);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonPrimary_OL_", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonPrimary_OL_\n");
}

MakeNameEx(0xCC590, "Min_Primary_Base_Enrichment_1_NonPrimary_OL_Y_AXIS", SN_CHECK);
MakeNameEx(0xCBFD4, "AF_Learning_1_Limits", SN_CHECK);
MakeNameEx(0xCBFE4, "AF_Learning_1_Airflow_Ranges", SN_CHECK);
MakeNameEx(0xC30D8, "MAF_Limit_Maximum", SN_CHECK);
MakeNameEx(0xD88A4, "MAF_Sensor_Scaling", SN_CHECK);
referenceAddress = DfirstB(0xD88A4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_MAF_Sensor_Scaling", SN_CHECK);
}
else
{
    Message("No reference to MAF_Sensor_Scaling\n");
}

MakeNameEx(0xD87CC, "MAF_Sensor_Scaling_Y_AXIS", SN_CHECK);
MakeNameEx(0xC3B28, "MAF_Compensation_IAT", SN_CHECK);
referenceAddress = DfirstB(0xC3B28);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_MAF_Compensation_IAT", SN_CHECK);
}
else
{
    Message("No reference to MAF_Compensation_IAT\n");
}

MakeNameEx(0xC3AF4, "MAF_Compensation_IAT_X_AXIS", SN_CHECK);
MakeNameEx(0xC3B08, "MAF_Compensation_IAT_Y_AXIS", SN_CHECK);
MakeNameEx(0x20208, "Engine_Load_Limit_A_Maximum", SN_CHECK);
MakeNameEx(0xC35C0, "Engine_Load_Limit_B_Maximum_RPM", SN_CHECK);
referenceAddress = DfirstB(0xC35C0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Limit_B_Maximum_RPM", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Limit_B_Maximum_RPM\n");
}

MakeNameEx(0xC35B8, "Engine_Load_Limit_B_Maximum_RPM_Y_AXIS", SN_CHECK);
MakeNameEx(0xC3BB4, "Engine_Load_Compensation_Cruise_MP", SN_CHECK);
referenceAddress = DfirstB(0xC3BB4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Compensation_Cruise_MP", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Compensation_Cruise_MP\n");
}

MakeNameEx(0xC3B50, "Engine_Load_Compensation_Cruise_MP_X_AXIS", SN_CHECK);
MakeNameEx(0xC3B7C, "Engine_Load_Compensation_Cruise_MP_Y_AXIS", SN_CHECK);
MakeNameEx(0xC3CB4, "Engine_Load_Compensation_NonCruise_MP", SN_CHECK);
referenceAddress = DfirstB(0xC3CB4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Compensation_NonCruise_MP", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Compensation_NonCruise_MP\n");
}

MakeNameEx(0xC3C50, "Engine_Load_Compensation_NonCruise_MP_X_AXIS", SN_CHECK);
MakeNameEx(0xC3C7C, "Engine_Load_Compensation_NonCruise_MP_Y_AXIS", SN_CHECK);
MakeNameEx(0xD4488, "Base_Timing_Primary_Cruise", SN_CHECK);
referenceAddress = DfirstB(0xD4488);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Primary_Cruise", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Primary_Cruise\n");
}

MakeNameEx(0xD43FC, "Base_Timing_Primary_Cruise_X_AXIS", SN_CHECK);
MakeNameEx(0xD4440, "Base_Timing_Primary_Cruise_Y_AXIS", SN_CHECK);
MakeNameEx(0xD4808, "Base_Timing_Reference_Cruise_AVCS_related", SN_CHECK);
referenceAddress = DfirstB(0xD4808);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Reference_Cruise_AVCS_related", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Reference_Cruise_AVCS_related\n");
}

MakeNameEx(0xD477C, "Base_Timing_Reference_Cruise_AVCS_related_X_AXIS", SN_CHECK);
MakeNameEx(0xD47C0, "Base_Timing_Reference_Cruise_AVCS_related_Y_AXIS", SN_CHECK);
MakeNameEx(0xD4648, "Base_Timing_Primary_NonCruise", SN_CHECK);
referenceAddress = DfirstB(0xD4648);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Primary_NonCruise", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Primary_NonCruise\n");
}

MakeNameEx(0xD45BC, "Base_Timing_Primary_NonCruise_X_AXIS", SN_CHECK);
MakeNameEx(0xD4600, "Base_Timing_Primary_NonCruise_Y_AXIS", SN_CHECK);
MakeNameEx(0xD49C8, "Base_Timing_Reference_NonCruise_AVCS_related", SN_CHECK);
referenceAddress = DfirstB(0xD49C8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Reference_NonCruise_AVCS_related", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Reference_NonCruise_AVCS_related\n");
}

MakeNameEx(0xD493C, "Base_Timing_Reference_NonCruise_AVCS_related_X_AXIS", SN_CHECK);
MakeNameEx(0xD4980, "Base_Timing_Reference_NonCruise_AVCS_related_Y_AXIS", SN_CHECK);
MakeNameEx(0xD3022, "Base_Timing_Idle_A_InGear", SN_CHECK);
referenceAddress = DfirstB(0xD3022);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_A_InGear", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_A_InGear\n");
}

MakeNameEx(0xD2E08, "Base_Timing_Idle_A_InGear_Y_AXIS", SN_CHECK);
MakeNameEx(0xD3032, "Base_Timing_Idle_B_InGear", SN_CHECK);
referenceAddress = DfirstB(0xD3032);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_B_InGear", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_B_InGear\n");
}

MakeNameEx(0xD2E08, "Base_Timing_Idle_B_InGear_Y_AXIS", SN_CHECK);
MakeNameEx(0xD3042, "Base_Timing_Idle_A_Neutral", SN_CHECK);
referenceAddress = DfirstB(0xD3042);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_A_Neutral", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_A_Neutral\n");
}

MakeNameEx(0xD2E08, "Base_Timing_Idle_A_Neutral_Y_AXIS", SN_CHECK);
MakeNameEx(0xD3052, "Base_Timing_Idle_B_Neutral", SN_CHECK);
referenceAddress = DfirstB(0xD3052);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_B_Neutral", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_B_Neutral\n");
}

MakeNameEx(0xD2E08, "Base_Timing_Idle_B_Neutral_Y_AXIS", SN_CHECK);
MakeNameEx(0xD3019, "Base_Timing_Idle_Minimum", SN_CHECK);
referenceAddress = DfirstB(0xD3019);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_Minimum", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_Minimum\n");
}

MakeNameEx(0xD2E88, "Base_Timing_Idle_Minimum_Y_AXIS", SN_CHECK);
MakeNameEx(0xD29B4, "Base_Timing_Idle_Minimum_Vehicle_Speed_Enable", SN_CHECK);
MakeNameEx(0xD5570, "Knock_Correction_Advance_Max_Cruise", SN_CHECK);
referenceAddress = DfirstB(0xD5570);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_Cruise", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_Cruise\n");
}

MakeNameEx(0xD54E4, "Knock_Correction_Advance_Max_Cruise_X_AXIS", SN_CHECK);
MakeNameEx(0xD5528, "Knock_Correction_Advance_Max_Cruise_Y_AXIS", SN_CHECK);
MakeNameEx(0xD5730, "Knock_Correction_Advance_Max_NonCruise", SN_CHECK);
referenceAddress = DfirstB(0xD5730);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_NonCruise", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_NonCruise\n");
}

MakeNameEx(0xD56A4, "Knock_Correction_Advance_Max_NonCruise_X_AXIS", SN_CHECK);
MakeNameEx(0xD56E8, "Knock_Correction_Advance_Max_NonCruise_Y_AXIS", SN_CHECK);
MakeNameEx(0xD3104, "Timing_Compensation_A_IAT", SN_CHECK);
referenceAddress = DfirstB(0xD3104);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_A_IAT", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_A_IAT\n");
}

MakeNameEx(0xD30C4, "Timing_Compensation_A_IAT_Y_AXIS", SN_CHECK);
MakeNameEx(0xD4B3C, "Timing_Compensation_A_IAT_Activation", SN_CHECK);
referenceAddress = DfirstB(0xD4B3C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_A_IAT_Activation", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_A_IAT_Activation\n");
}

MakeNameEx(0xD4AFC, "Timing_Compensation_A_IAT_Activation_X_AXIS", SN_CHECK);
MakeNameEx(0xD4B1C, "Timing_Compensation_A_IAT_Activation_Y_AXIS", SN_CHECK);
MakeNameEx(0xD36D4, "Timing_Compensation_B_IAT", SN_CHECK);
referenceAddress = DfirstB(0xD36D4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_B_IAT", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_B_IAT\n");
}

MakeNameEx(0xD3694, "Timing_Compensation_B_IAT_Y_AXIS", SN_CHECK);
MakeNameEx(0xD2B70, "Timing_Compensation_B_IAT_IAM_Activation", SN_CHECK);
MakeNameEx(0xD2B54, "Timing_Compensation_B_IAT_Max_Additive", SN_CHECK);
MakeNameEx(0xD30A2, "Timing_Compensation_Imm_Cruise_A_ECT", SN_CHECK);
referenceAddress = DfirstB(0xD30A2);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_Cruise_A_ECT", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_Cruise_A_ECT\n");
}

MakeNameEx(0xD2E08, "Timing_Compensation_Imm_Cruise_A_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xD30B2, "Timing_Compensation_Imm_Cruise_B_ECT", SN_CHECK);
referenceAddress = DfirstB(0xD30B2);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_Cruise_B_ECT", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_Cruise_B_ECT\n");
}

MakeNameEx(0xD2E08, "Timing_Compensation_Imm_Cruise_B_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xD3082, "Timing_Compensation_Imm_NonCruise_A_ECT", SN_CHECK);
referenceAddress = DfirstB(0xD3082);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_NonCruise_A_ECT", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_NonCruise_A_ECT\n");
}

MakeNameEx(0xD2E08, "Timing_Compensation_Imm_NonCruise_A_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xD3092, "Timing_Compensation_Imm_NonCruise_B_ECT", SN_CHECK);
referenceAddress = DfirstB(0xD3092);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_NonCruise_B_ECT", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_NonCruise_B_ECT\n");
}

MakeNameEx(0xD2E08, "Timing_Compensation_Imm_NonCruise_B_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xD511C, "Timing_Compensation_Per_Cylinder_A", SN_CHECK);
referenceAddress = DfirstB(0xD511C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_A", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_A\n");
}

MakeNameEx(0xD50D0, "Timing_Compensation_Per_Cylinder_A_X_AXIS", SN_CHECK);
MakeNameEx(0xD5108, "Timing_Compensation_Per_Cylinder_A_Y_AXIS", SN_CHECK);
MakeNameEx(0xD51B0, "Timing_Compensation_Per_Cylinder_B", SN_CHECK);
referenceAddress = DfirstB(0xD51B0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_B", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_B\n");
}

MakeNameEx(0xD5164, "Timing_Compensation_Per_Cylinder_B_X_AXIS", SN_CHECK);
MakeNameEx(0xD519C, "Timing_Compensation_Per_Cylinder_B_Y_AXIS", SN_CHECK);
MakeNameEx(0xD5244, "Timing_Compensation_Per_Cylinder_C", SN_CHECK);
referenceAddress = DfirstB(0xD5244);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_C", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_C\n");
}

MakeNameEx(0xD51F8, "Timing_Compensation_Per_Cylinder_C_X_AXIS", SN_CHECK);
MakeNameEx(0xD5230, "Timing_Compensation_Per_Cylinder_C_Y_AXIS", SN_CHECK);
MakeNameEx(0xD52DC, "Timing_Compensation_Per_Cylinder_D", SN_CHECK);
referenceAddress = DfirstB(0xD52DC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_D", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_D\n");
}

MakeNameEx(0xD528C, "Timing_Compensation_Per_Cylinder_D_X_AXIS", SN_CHECK);
MakeNameEx(0xD52C4, "Timing_Compensation_Per_Cylinder_D_Y_AXIS", SN_CHECK);
MakeNameEx(0xD2C18, "Timing_Comp_Minimum_Load_Per_Cylinder", SN_CHECK);
MakeNameEx(0xD2C14, "Timing_Comp_Maximum_RPM_Per_Cylinder", SN_CHECK);
MakeNameEx(0xD2C1C, "Timing_Comp_Minimum_Coolant_Temp_Per_Cylinder", SN_CHECK);
MakeNameEx(0xD2C28, "Feedback_Correction_Range_RPM", SN_CHECK);
MakeNameEx(0xD2C20, "Feedback_Correction_Minimum_Load", SN_CHECK);
MakeNameEx(0xD2C48, "Feedback_Correction_Retard_Value", SN_CHECK);
MakeNameEx(0xD2C44, "Feedback_Correction_Retard_Limit", SN_CHECK);
MakeNameEx(0xD2C4C, "Feedback_Correction_Negative_Advance_Value", SN_CHECK);
MakeNameEx(0xD28B8, "Feedback_Correction_Negative_Advance_Delay", SN_CHECK);
MakeNameEx(0xD2C54, "Extended_Feedback_Correction_High_RPM_Compensation", SN_CHECK);
MakeNameEx(0xD2DE8, "Fine_Correction_Range_RPM", SN_CHECK);
MakeNameEx(0xD2DF8, "Fine_Correction_Range_Load", SN_CHECK);
MakeNameEx(0xD2D88, "Fine_Correction_Rows_RPM", SN_CHECK);
MakeNameEx(0xD2DA4, "Fine_Correction_Columns_Load", SN_CHECK);
MakeNameEx(0xD2DCC, "Fine_Correction_Retard_Value", SN_CHECK);
MakeNameEx(0xD2DC8, "Fine_Correction_Retard_Limit", SN_CHECK);
MakeNameEx(0xD2DC4, "Fine_Correction_Advance_Value", SN_CHECK);
MakeNameEx(0xD2DC0, "Fine_Correction_Advance_Limit", SN_CHECK);
MakeNameEx(0xD28C8, "Fine_Correction_Advance_Delay", SN_CHECK);
MakeNameEx(0xD2D38, "Rough_Correction_Range_RPM", SN_CHECK);
MakeNameEx(0xD2D48, "Rough_Correction_Range_Load", SN_CHECK);
MakeNameEx(0xD2D58, "Rough_Correction_Minimum_KC_Advance_Map_Value", SN_CHECK);
MakeNameEx(0xD3A00, "Rough_Correction_Learning_Delay_Increasing_", SN_CHECK);
referenceAddress = DfirstB(0xD3A00);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Rough_Correction_Learning_Delay_Increasing_", SN_CHECK);
}
else
{
    Message("No reference to Rough_Correction_Learning_Delay_Increasing_\n");
}

MakeNameEx(0xD39D8, "Rough_Correction_Learning_Delay_Increasing_Y_AXIS", SN_CHECK);
MakeNameEx(0xD2D5C, "Advance_Multiplier_Initial", SN_CHECK);
MakeNameEx(0xD2D60, "Advance_Multiplier_Step_Value", SN_CHECK);
MakeNameEx(0xDA574, "Intake_Cam_Advance_Angle_Cruise_AVCS", SN_CHECK);
referenceAddress = DfirstB(0xDA574);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_Cruise_AVCS", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_Cruise_AVCS\n");
}

MakeNameEx(0xDA4EC, "Intake_Cam_Advance_Angle_Cruise_AVCS_X_AXIS", SN_CHECK);
MakeNameEx(0xDA534, "Intake_Cam_Advance_Angle_Cruise_AVCS_Y_AXIS", SN_CHECK);
MakeNameEx(0xDA83C, "Intake_Cam_Advance_Angle_NonCruise_AVCS", SN_CHECK);
referenceAddress = DfirstB(0xDA83C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_NonCruise_AVCS", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_NonCruise_AVCS\n");
}

MakeNameEx(0xDA7B4, "Intake_Cam_Advance_Angle_NonCruise_AVCS_X_AXIS", SN_CHECK);
MakeNameEx(0xDA7FC, "Intake_Cam_Advance_Angle_NonCruise_AVCS_Y_AXIS", SN_CHECK);
MakeNameEx(0xF9EE0, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport", SN_CHECK);
referenceAddress = DfirstB(0xF9EE0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport\n");
}

MakeNameEx(0xF9E60, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_X_AXIS", SN_CHECK);
MakeNameEx(0xF9E9C, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Y_AXIS", SN_CHECK);
MakeNameEx(0xFA160, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp", SN_CHECK);
referenceAddress = DfirstB(0xFA160);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp\n");
}

MakeNameEx(0xFA0E0, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp_X_AXIS", SN_CHECK);
MakeNameEx(0xFA11C, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp_Y_AXIS", SN_CHECK);
MakeNameEx(0xFA3E0, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent", SN_CHECK);
referenceAddress = DfirstB(0xFA3E0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent\n");
}

MakeNameEx(0xFA360, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent_X_AXIS", SN_CHECK);
MakeNameEx(0xFA39C, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent_Y_AXIS", SN_CHECK);
MakeNameEx(0xF9054, "Requested_Torque_Base_RPM", SN_CHECK);
referenceAddress = DfirstB(0xF9054);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Base_RPM", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Base_RPM\n");
}

MakeNameEx(0xF9014, "Requested_Torque_Base_RPM_Y_AXIS", SN_CHECK);
MakeNameEx(0xF9504, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio", SN_CHECK);
referenceAddress = DfirstB(0xF9504);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio\n");
}

MakeNameEx(0xF9484, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_X_AXIS", SN_CHECK);
MakeNameEx(0xF94C4, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_Y_AXIS", SN_CHECK);
MakeNameEx(0xF9784, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio", SN_CHECK);
referenceAddress = DfirstB(0xF9784);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio\n");
}

MakeNameEx(0xF9704, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_X_AXIS", SN_CHECK);
MakeNameEx(0xF9744, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_Y_AXIS", SN_CHECK);
MakeNameEx(0xF9A04, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio", SN_CHECK);
referenceAddress = DfirstB(0xF9A04);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio\n");
}

MakeNameEx(0xF9984, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_X_AXIS", SN_CHECK);
MakeNameEx(0xF99C4, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_Y_AXIS", SN_CHECK);
MakeNameEx(0xF9C88, "Requested_Torque_Limit_A_Per_GearEngine_Speed", SN_CHECK);
referenceAddress = DfirstB(0xF9C88);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Limit_A_Per_GearEngine_Speed", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Limit_A_Per_GearEngine_Speed\n");
}

MakeNameEx(0xF9C30, "Requested_Torque_Limit_A_Per_GearEngine_Speed_X_AXIS", SN_CHECK);
MakeNameEx(0xF9C70, "Requested_Torque_Limit_A_Per_GearEngine_Speed_Y_AXIS", SN_CHECK);
MakeNameEx(0xF9DA0, "Requested_Torque_Limit_B_Per_GearEngine_Speed", SN_CHECK);
referenceAddress = DfirstB(0xF9DA0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Limit_B_Per_GearEngine_Speed", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Limit_B_Per_GearEngine_Speed\n");
}

MakeNameEx(0xF9D48, "Requested_Torque_Limit_B_Per_GearEngine_Speed_X_AXIS", SN_CHECK);
MakeNameEx(0xF9D88, "Requested_Torque_Limit_B_Per_GearEngine_Speed_Y_AXIS", SN_CHECK);
MakeNameEx(0xCC46C, "Rev_Limit_Fuel_Cut", SN_CHECK);
MakeNameEx(0xCC484, "Rev_Limit_Fuel_Resume_Boost", SN_CHECK);
MakeNameEx(0xCC48C, "Speed_Limiting_Enable_Fuel_Cut", SN_CHECK);
MakeNameEx(0xCC494, "Speed_Limiting_Disable_Fuel_Cut", SN_CHECK);
MakeNameEx(0xF8E48, "Speed_Limiting_A_Throttle_SIDRIVE_SportSport_Sharp", SN_CHECK);
MakeNameEx(0xF8E60, "Speed_Limiting_B_Throttle_SIDRIVE_SportSport_Sharp", SN_CHECK);
MakeNameEx(0xF8E54, "Speed_Limiting_Throttle_SIDRIVE_Intelligent", SN_CHECK);
MakeNameEx(0xD8C2C, "Fuel_Temp_Sensor_Scaling", SN_CHECK);
referenceAddress = DfirstB(0xD8C2C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Fuel_Temp_Sensor_Scaling", SN_CHECK);
}
else
{
    Message("No reference to Fuel_Temp_Sensor_Scaling\n");
}

MakeNameEx(0xD8BB4, "Fuel_Temp_Sensor_Scaling_Y_AXIS", SN_CHECK);
MakeNameEx(0xD8B3C, "Intake_Temp_Sensor_Scaling", SN_CHECK);
referenceAddress = DfirstB(0xD8B3C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Intake_Temp_Sensor_Scaling", SN_CHECK);
}
else
{
    Message("No reference to Intake_Temp_Sensor_Scaling\n");
}

MakeNameEx(0xD8AC4, "Intake_Temp_Sensor_Scaling_Y_AXIS", SN_CHECK);
MakeNameEx(0xD8A54, "Coolant_Temp_Sensor_Scaling", SN_CHECK);
referenceAddress = DfirstB(0xD8A54);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Coolant_Temp_Sensor_Scaling", SN_CHECK);
}
else
{
    Message("No reference to Coolant_Temp_Sensor_Scaling\n");
}

MakeNameEx(0xD89E4, "Coolant_Temp_Sensor_Scaling_Y_AXIS", SN_CHECK);
MakeNameEx(0x4B45C, "Fuel_Pump_Duty", SN_CHECK);
MakeNameEx(0xD8F34, "Radiator_Fan_Modes_A_ECT", SN_CHECK);
MakeNameEx(0xD8F44, "Radiator_Fan_Modes_B_ECT", SN_CHECK);
MakeNameEx(0xD8F54, "Radiator_Fan_Modes_Veh_Speed", SN_CHECK);
MakeNameEx(0xC344C, "Gear_Determination_Thresholds_A", SN_CHECK);
MakeNameEx(0xC3460, "Gear_Determination_Thresholds_B", SN_CHECK);
MakeNameEx(0xC3474, "Gear_Determination_Thresholds_C", SN_CHECK);
MakeNameEx(0xD6B6C, "Idle_Speed_Target_A", SN_CHECK);
referenceAddress = DfirstB(0xD6B6C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_A", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_A\n");
}

MakeNameEx(0xD6400, "Idle_Speed_Target_A_Y_AXIS", SN_CHECK);
MakeNameEx(0xD6BAC, "Idle_Speed_Target_B", SN_CHECK);
referenceAddress = DfirstB(0xD6BAC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_B", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_B\n");
}

MakeNameEx(0xD6400, "Idle_Speed_Target_B_Y_AXIS", SN_CHECK);
MakeNameEx(0xD6BEC, "Idle_Speed_Target_C", SN_CHECK);
referenceAddress = DfirstB(0xD6BEC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_C", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_C\n");
}

MakeNameEx(0xD6400, "Idle_Speed_Target_C_Y_AXIS", SN_CHECK);
MakeNameEx(0xD6C8C, "Idle_Speed_Target_D", SN_CHECK);
referenceAddress = DfirstB(0xD6C8C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_D", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_D\n");
}

MakeNameEx(0xD6400, "Idle_Speed_Target_D_Y_AXIS", SN_CHECK);
MakeNameEx(0xD8DE8, "Ignition_Dwell", SN_CHECK);
referenceAddress = DfirstB(0xD8DE8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Ignition_Dwell", SN_CHECK);
}
else
{
    Message("No reference to Ignition_Dwell\n");
}

MakeNameEx(0xD8D94, "Ignition_Dwell_X_AXIS", SN_CHECK);
MakeNameEx(0xD8DD4, "Ignition_Dwell_Y_AXIS", SN_CHECK);
MakeNameEx(0x98CA2, "P0000_PASS_CODE_NO_DTC_DETECTED", SN_CHECK);
MakeNameEx(0x98C85, "P0011_CAMSHAFT_POS_TIMING_OVERADVANCED_1", SN_CHECK);
MakeNameEx(0x98D13, "P0016_CRANKSHAFTCAMSHAFT_CORRELATION_1A", SN_CHECK);
MakeNameEx(0x98D12, "P0018_CRANKSHAFTCAMSHAFT_CORRELATION_2A", SN_CHECK);
MakeNameEx(0x98C86, "P0021_CAMSHAFT_POS_TIMING_OVERADVANCED_2", SN_CHECK);
MakeNameEx(0x98CC6, "P0030_FRONT_O2_SENSOR_RANGEPERF", SN_CHECK);
MakeNameEx(0x98CB1, "P0031_FRONT_O2_SENSOR_LOW_INPUT", SN_CHECK);
MakeNameEx(0x98CAF, "P0032_FRONT_O2_SENSOR_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x98CB0, "P0037_REAR_O2_SENSOR_LOW_INPUT", SN_CHECK);
MakeNameEx(0x98CAE, "P0038_REAR_O2_SENSOR_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x98CC1, "P0068_MAP_SENSOR_RANGEPERF", SN_CHECK);
MakeNameEx(0x98CC2, "P0101_MAF_SENSOR_RANGEPERF", SN_CHECK);
MakeNameEx(0x98C61, "P0102_MAF_SENSOR_LOW_INPUT", SN_CHECK);
MakeNameEx(0x98C62, "P0103_MAF_SENSOR_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x98CB2, "P0107_MAP_SENSOR_LOW_INPUT", SN_CHECK);
MakeNameEx(0x98CB3, "P0108_MAP_SENSOR_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x98CAD, "P0111_IAT_SENSOR_RANGEPERF", SN_CHECK);
MakeNameEx(0x98CAB, "P0112_IAT_SENSOR_LOW_INPUT", SN_CHECK);
MakeNameEx(0x98CAC, "P0113_IAT_SENSOR_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x98C6A, "P0117_COOLANT_TEMP_SENSOR_LOW_INPUT", SN_CHECK);
MakeNameEx(0x98C6B, "P0118_COOLANT_TEMP_SENSOR_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x98C68, "P0122_TPS_A_LOW_INPUT", SN_CHECK);
MakeNameEx(0x98C69, "P0123_TPS_A_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x98C6D, "P0125_INSUFFICIENT_COOLANT_TEMP_FUELING", SN_CHECK);
MakeNameEx(0x98CFB, "P0126_INSUFFICIENT_COOLANT_TEMP_OPERATION", SN_CHECK);
MakeNameEx(0x98CB8, "P0128_THERMOSTAT_MALFUNCTION", SN_CHECK);
MakeNameEx(0x98CA5, "P0131_FRONT_O2_SENSOR_LOW_INPUT", SN_CHECK);
MakeNameEx(0x98CA7, "P0132_FRONT_O2_SENSOR_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x98CC4, "P0134_FRONT_O2_SENSOR_NO_ACTIVITY", SN_CHECK);
MakeNameEx(0x98CA4, "P0137_REAR_O2_SENSOR_LOW_VOLTAGE", SN_CHECK);
MakeNameEx(0x98CA9, "P0138_REAR_O2_SENSOR_HIGH_VOLTAGE", SN_CHECK);
MakeNameEx(0x98D0E, "P0140_REAR_O2_SENSOR_NO_ACTIVITY", SN_CHECK);
MakeNameEx(0x98C8E, "P0141_REAR_O2_SENSOR_MALFUNCTION", SN_CHECK);
MakeNameEx(0x98D3E, "P014C_O2_SENSOR_SLOW_RESPONSE_RICH_TO_LEAN_B1_S1", SN_CHECK);
MakeNameEx(0x98D3D, "P014D_O2_SENSOR_SLOW_RESPONSE_LEAN_TO_RICH_B1_S1", SN_CHECK);
MakeNameEx(0x98D3A, "P015A_O2_SENSOR_DELAYED_RESPONSE_RICH_TO_LEAN_B1_S1", SN_CHECK);
MakeNameEx(0x98C99, "P0171_SYSTEM_TOO_LEAN", SN_CHECK);
MakeNameEx(0x98C9A, "P0172_SYSTEM_TOO_RICH", SN_CHECK);
MakeNameEx(0x98CCD, "P0222_TPS_B_LOW_INPUT", SN_CHECK);
MakeNameEx(0x98CCE, "P0223_TPS_B_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x98CC0, "P0230_FUEL_PUMP_PRIMARY_CIRCUIT", SN_CHECK);
MakeNameEx(0x98CBF, "P0244_WASTEGATE_SOLENOID_A_RANGEPERF", SN_CHECK);
MakeNameEx(0x98CBD, "P0245_WASTEGATE_SOLENOID_A_LOW", SN_CHECK);
MakeNameEx(0x98CBE, "P0246_WASTEGATE_SOLENOID_A_HIGH", SN_CHECK);
MakeNameEx(0x98C9B, "P0301_MISFIRE_CYLINDER_1", SN_CHECK);
MakeNameEx(0x98C9C, "P0302_MISFIRE_CYLINDER_2", SN_CHECK);
MakeNameEx(0x98C9D, "P0303_MISFIRE_CYLINDER_3", SN_CHECK);
MakeNameEx(0x98C9E, "P0304_MISFIRE_CYLINDER_4", SN_CHECK);
MakeNameEx(0x98C66, "P0327_KNOCK_SENSOR_1_LOW_INPUT", SN_CHECK);
MakeNameEx(0x98C67, "P0328_KNOCK_SENSOR_1_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x98C5C, "P0335_CRANKSHAFT_POS_SENSOR_A_MALFUNCTION", SN_CHECK);
MakeNameEx(0x98C5D, "P0336_CRANKSHAFT_POS_SENSOR_A_RANGEPERF", SN_CHECK);
MakeNameEx(0x98CE0, "P0340_CAMSHAFT_POS_SENSOR_A_MALFUNCTION", SN_CHECK);
MakeNameEx(0x98CDF, "P0345_CAMSHAFT_POS_SENSOR_A_BANK_2", SN_CHECK);
MakeNameEx(0x98D08, "P0410_SECONDARY_AIR_PUMP_SYSTEM", SN_CHECK);
MakeNameEx(0x98D07, "P0411_SECONDARY_AIR_PUMP_INCORRECT_FLOW", SN_CHECK);
MakeNameEx(0x98D0C, "P0413_SECONDARY_AIR_PUMP_A_OPEN", SN_CHECK);
MakeNameEx(0x98D10, "P0414_SECONDARY_AIR_PUMP_A_SHORTED", SN_CHECK);
MakeNameEx(0x98D1A, "P0416_SECONDARY_AIR_PUMP_B_OPEN", SN_CHECK);
MakeNameEx(0x98D19, "P0417_SECONDARY_AIR_PUMP_B_SHORTED", SN_CHECK);
MakeNameEx(0x98D0D, "P0418_SECONDARY_AIR_PUMP_RELAY_A", SN_CHECK);
MakeNameEx(0x98C95, "P0420_CAT_EFFICIENCY_BELOW_THRESHOLD", SN_CHECK);
MakeNameEx(0x98D44, "P0441_EVAP_INCORRECT_PURGE_FLOW", SN_CHECK);
MakeNameEx(0x98D43, "P0451_EVAP_PRESSURE_SENSOR_RANGEPERF", SN_CHECK);
MakeNameEx(0x98D36, "P0452_EVAP_PRESSURE_SENSOR_LOW_INPUT", SN_CHECK);
MakeNameEx(0x98D35, "P0453_EVAP_PRESSURE_SENSOR_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x98D42, "P0455_EVAP_EMISSION_CONTROL_SYSTEM_LEAK_DETECTED_GROSS_LEAK", SN_CHECK);
MakeNameEx(0x98C97, "P0456_EVAP_LEAK_DETECTED_VERY_SMALL", SN_CHECK);
MakeNameEx(0x98C89, "P0458_EVAP_PURGE_VALVE_CIRCUIT_LOW", SN_CHECK);
MakeNameEx(0x98C8A, "P0459_EVAP_PURGE_VALVE_CIRCUIT_HIGH", SN_CHECK);
MakeNameEx(0x98C70, "P0461_FUEL_LEVEL_SENSOR_RANGEPERF", SN_CHECK);
MakeNameEx(0x98C6E, "P0462_FUEL_LEVEL_SENSOR_LOW_INPUT", SN_CHECK);
MakeNameEx(0x98C6F, "P0463_FUEL_LEVEL_SENSOR_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x98C63, "P0500_VEHICLE_SPEED_SENSOR_A", SN_CHECK);
MakeNameEx(0x98C83, "P0506_IDLE_CONTROL_RPM_LOWER_THAN_EXPECTED", SN_CHECK);
MakeNameEx(0x98C84, "P0507_IDLE_CONTROL_RPM_HIGH_THAN_EXPECTED", SN_CHECK);
MakeNameEx(0x98D30, "P050A_COLD_START_IDLE_AIR_CONTROL_SYSTEM_PERFORMANCE", SN_CHECK);
MakeNameEx(0x98D2F, "P050B_COLD_START_IGNITION_TIMING_PERFORMANCE", SN_CHECK);
MakeNameEx(0x98C72, "P0512_STARTER_REQUEST_CIRCUIT", SN_CHECK);
MakeNameEx(0x98C60, "P0604_CONTROL_MODULE_RAM_ERROR", SN_CHECK);
MakeNameEx(0x98CE1, "P0605_CONTROL_MODULE_ROM_ERROR", SN_CHECK);
MakeNameEx(0x98CD5, "P0607_CONTROL_MODULE_PERFORMANCE", SN_CHECK);
MakeNameEx(0x98CD4, "P0638_THROTTLE_ACTUATOR_RANGEPERF", SN_CHECK);
MakeNameEx(0x98C76, "P0851_NEUTRAL_SWITCH_INPUT_LOW", SN_CHECK);
MakeNameEx(0x98C7A, "P0852_NEUTRAL_SWITCH_INPUT_HIGH", SN_CHECK);
MakeNameEx(0x98C91, "P1152_FRONT_O2_SENSOR_RANGEPERF_LOW_B1_S1", SN_CHECK);
MakeNameEx(0x98C92, "P1153_FRONT_O2_SENSOR_RANGEPERF_HIGH_B1_S1", SN_CHECK);
MakeNameEx(0x98CCF, "P1160_ABNORMAL_RETURN_SPRING", SN_CHECK);
MakeNameEx(0x98C87, "P1400_FUEL_TANK_PRESSURE_SOL_LOW", SN_CHECK);
MakeNameEx(0x98D14, "P1410_SECONDARY_AIR_PUMP_VALVE_STUCK_OPEN", SN_CHECK);
MakeNameEx(0x98D11, "P1418_SECONDARY_AIR_PUMP_CIRCUIT_SHORTED", SN_CHECK);
MakeNameEx(0x98C88, "P1420_FUEL_TANK_PRESSURE_SOL_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x98D41, "P1449_EVAPORATIVE_EMISSION_CONT_SYS_AIR_FILTER_CLOG", SN_CHECK);
MakeNameEx(0x98D40, "P1451_EVAPORATIVE_EMISSION_CONT_SYS", SN_CHECK);
MakeNameEx(0x98D3F, "P1458_CANISTER_PURGE_CONTROL_SOLENOID_VALVE_2_LOW", SN_CHECK);
MakeNameEx(0x98D49, "P1459_CANISTER_PURGE_CONTROL_SOLENOID_VALVE_2_HIGH", SN_CHECK);
MakeNameEx(0x98CB9, "P1491_PCV_BLOWBY_FUNCTION_PROBLEM", SN_CHECK);
MakeNameEx(0x98C71, "P1518_STARTER_SWITCH_LOW_INPUT", SN_CHECK);
MakeNameEx(0x98D1F, "P1519_IMRC_STUCK_CLOSED", SN_CHECK);
MakeNameEx(0x98D1E, "P1520_IMRC_CIRCUIT_MALFUNCTION", SN_CHECK);
MakeNameEx(0x98CBA, "P1560_BACKUP_VOLTAGE_MALFUNCTION", SN_CHECK);
MakeNameEx(0x98D1D, "P1616_SBDS_INTERACTIVE_CODES", SN_CHECK);
MakeNameEx(0x98CF6, "P2004_TGV_INTAKE_MANIFOLD_RUNNER_1_STUCK_OPEN", SN_CHECK);
MakeNameEx(0x98CF8, "P2005_TGV_INTAKE_MANIFOLD_RUNNER_2_STUCK_OPEN", SN_CHECK);
MakeNameEx(0x98CF7, "P2006_TGV_INTAKE_MANIFOLD_RUNNER_1_STUCK_CLOSED", SN_CHECK);
MakeNameEx(0x98CF9, "P2007_TGV_INTAKE_MANIFOLD_RUNNER_2_STUCK_CLOSED", SN_CHECK);
MakeNameEx(0x98D04, "P2008_TGV_INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_OPEN", SN_CHECK);
MakeNameEx(0x98D02, "P2009_TGV_INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_LOW", SN_CHECK);
MakeNameEx(0x98D05, "P2011_TGV_INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_OPEN", SN_CHECK);
MakeNameEx(0x98D03, "P2012_TGV_INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_LOW", SN_CHECK);
MakeNameEx(0x98CFE, "P2016_TGV_INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_LOW", SN_CHECK);
MakeNameEx(0x98CFF, "P2017_TGV_INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_HIGH", SN_CHECK);
MakeNameEx(0x98D00, "P2021_TGV_INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_LOW", SN_CHECK);
MakeNameEx(0x98D01, "P2022_TGV_INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_HIGH", SN_CHECK);
MakeNameEx(0x98CE9, "P2088_OCV_SOLENOID_A1_CIRCUIT_OPEN", SN_CHECK);
MakeNameEx(0x98CE8, "P2089_OCV_SOLENOID_A1_CIRCUIT_SHORT", SN_CHECK);
MakeNameEx(0x98CE7, "P2092_OCV_SOLENOID_A2_CIRCUIT_OPEN", SN_CHECK);
MakeNameEx(0x98CE6, "P2093_OCV_SOLENOID_A2_CIRCUIT_SHORT", SN_CHECK);
MakeNameEx(0x98CD3, "P2096_POST_CATALYST_TOO_LEAN_B1", SN_CHECK);
MakeNameEx(0x98CDC, "P2097_POST_CATALYST_TOO_RICH_B1", SN_CHECK);
MakeNameEx(0x98CD2, "P2101_THROTTLE_ACTUATOR_CIRCUIT_RANGEPERF", SN_CHECK);
MakeNameEx(0x98CD0, "P2102_THROTTLE_ACTUATOR_CIRCUIT_LOW", SN_CHECK);
MakeNameEx(0x98CD1, "P2103_THROTTLE_ACTUATOR_CIRCUIT_HIGH", SN_CHECK);
MakeNameEx(0x98CCC, "P2109_TPS_A_MINIMUM_STOP_PERF", SN_CHECK);
MakeNameEx(0x98CD9, "P2122_TPS_D_CIRCUIT_LOW_INPUT", SN_CHECK);
MakeNameEx(0x98CDA, "P2123_TPS_D_CIRCUIT_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x98CD7, "P2127_TPS_E_CIRCUIT_LOW_INPUT", SN_CHECK);
MakeNameEx(0x98CD8, "P2128_TPS_E_CIRCUIT_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x98CDB, "P2135_TPS_AB_VOLTAGE", SN_CHECK);
MakeNameEx(0x98CD6, "P2138_TPS_DE_VOLTAGE", SN_CHECK);
MakeNameEx(0x98D46, "P219A_BANK_1_AFR_IMBALANCE", SN_CHECK);
MakeNameEx(0x98D34, "P2401_EVAP_LEAK_DETECTION_PUMP_CONTROL_CIRCUIT_LOW", SN_CHECK);
MakeNameEx(0x98D48, "P2402_EVAP_LEAK_DETECTION_PUMP_CONTROL_CIRCUIT_HIGH", SN_CHECK);
MakeNameEx(0x98D33, "P2419_EVAP_SWITCHING_VALVE_LOW", SN_CHECK);
MakeNameEx(0x98D32, "P2420_EVAP_SWITCHING_VALVE_HIGH", SN_CHECK);
MakeNameEx(0x98D09, "P2431_SECONDARY_AIR_PUMP_CIRCUIT_RANGEPERF", SN_CHECK);
MakeNameEx(0x98D0B, "P2432_SECONDARY_AIR_PUMP_CIRCUIT_LOW", SN_CHECK);
MakeNameEx(0x98D0A, "P2433_SECONDARY_AIR_PUMP_CIRCUIT_HIGH", SN_CHECK);
MakeNameEx(0x98D18, "P2440_SECONDARY_AIR_PUMP_VALVE_1_STUCK_OPEN", SN_CHECK);
MakeNameEx(0x98D17, "P2441_SECONDARY_AIR_PUMP_VALVE_1_STUCK_CLOSED", SN_CHECK);
MakeNameEx(0x98D16, "P2442_SECONDARY_AIR_PUMP_VALVE_2_STUCK_OPEN", SN_CHECK);
MakeNameEx(0x98D15, "P2443_SECONDARY_AIR_PUMP_2_STUCK_CLOSED", SN_CHECK);
MakeNameEx(0x98D06, "P2444_SECONDARY_AIR_PUMP_1_STUCK_ON_B1", SN_CHECK);
MakeNameEx(0x98D2D, "U0073_CAN_COMMUNICATION_BUS_A_OFF", SN_CHECK);
MakeNameEx(0x98D2A, "U0101_CAN_LOST_COMMUNICATION_WITH_TCM", SN_CHECK);
MakeNameEx(0x98D2C, "U0122_CAN_LOST_COMMUNICATION_WITH_VDC", SN_CHECK);
MakeNameEx(0x98D28, "U0140_CAN_LOST_COMMUNICATION_WITH_BIU", SN_CHECK);
MakeNameEx(0x98D29, "U0402_CAN_INVALID_DATA_RECEIVED_FROM_TCM", SN_CHECK);
MakeNameEx(0x98D2B, "U0416_CAN_INVALID_DATA_RECEIVED_FROM_VDC", SN_CHECK);
MakeNameEx(0x98D27, "U0422_CAN_INVALID_DATA_RECEIVED_FROM_BIU", SN_CHECK);
MakeNameEx(0xC1340, "Target_Boost__", SN_CHECK);
referenceAddress = DfirstB(0xC1340);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Boost__", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost__\n");
}

MakeNameEx(0xC12D8, "Target_Boost_X_AXIS_", SN_CHECK);
MakeNameEx(0xC1304, "Target_Boost_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC0CF4, "Target_Boost_Compensation_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xC0CF4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_ECT_\n");
}

MakeNameEx(0xC0C14, "Target_Boost_Compensation_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC0C0C, "Target_Boost_Compensation_1st_Gear_", SN_CHECK);
MakeNameEx(0xC0C08, "Target_Boost_Compensation_1st_Gear_Speed_Disable_", SN_CHECK);
MakeNameEx(0xC0E3C, "Target_Boost_Compensation_IAT__", SN_CHECK);
referenceAddress = DfirstB(0xC0E3C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_IAT__", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_IAT__\n");
}

MakeNameEx(0xC0E24, "Target_Boost_Compensation_IAT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC0EC4, "Target_Boost_Compensation_Atm_Pressure__", SN_CHECK);
referenceAddress = DfirstB(0xC0EC4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_Atm_Pressure__", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_Atm_Pressure__\n");
}

MakeNameEx(0xC0E94, "Target_Boost_Compensation_Atm_Pressure_X_AXIS_", SN_CHECK);
MakeNameEx(0xC0EAC, "Target_Boost_Compensation_Atm_Pressure_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD2444, "Boost_Limit_Fuel_Cut__", SN_CHECK);
referenceAddress = DfirstB(0xD2444);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Boost_Limit_Fuel_Cut__", SN_CHECK);
}
else
{
    Message("No reference to Boost_Limit_Fuel_Cut__\n");
}

MakeNameEx(0xD2414, "Boost_Limit_Fuel_Cut_X_AXIS_", SN_CHECK);
MakeNameEx(0xD242C, "Boost_Limit_Fuel_Cut_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC0BFC, "Boost_Control_Disable_IAM_", SN_CHECK);
MakeNameEx(0xC0BF8, "Boost_Control_Disable_Fine_Correction_", SN_CHECK);
MakeNameEx(0xC0BAD, "Boost_Control_Disable_Delay_Fine_Correction_", SN_CHECK);
MakeNameEx(0xC1150, "Initial_Wastegate_Duty__", SN_CHECK);
referenceAddress = DfirstB(0xC1150);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Initial_Wastegate_Duty__", SN_CHECK);
}
else
{
    Message("No reference to Initial_Wastegate_Duty__\n");
}

MakeNameEx(0xC10E0, "Initial_Wastegate_Duty_X_AXIS_", SN_CHECK);
MakeNameEx(0xC111C, "Initial_Wastegate_Duty_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC0F58, "Max_Wastegate_Duty__", SN_CHECK);
referenceAddress = DfirstB(0xC0F58);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Max_Wastegate_Duty__", SN_CHECK);
}
else
{
    Message("No reference to Max_Wastegate_Duty__\n");
}

MakeNameEx(0xC0EE8, "Max_Wastegate_Duty_X_AXIS_", SN_CHECK);
MakeNameEx(0xC0F24, "Max_Wastegate_Duty_Y_AXIS_", SN_CHECK);
MakeNameEx(0x13F3C, "Max_Wastegate_Duty_Limit_PostCompensation_", SN_CHECK);
MakeNameEx(0xC0C94, "InitialMax_Wastegate_Duty_Compensation_IAT_", SN_CHECK);
referenceAddress = DfirstB(0xC0C94);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_IAT_", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_IAT_\n");
}

MakeNameEx(0xC0C54, "InitialMax_Wastegate_Duty_Compensation_IAT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC0CB4, "InitialMax_Wastegate_Duty_Compensation_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xC0CB4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_ECT_", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_ECT_\n");
}

MakeNameEx(0xC0C14, "InitialMax_Wastegate_Duty_Compensation_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC0E7C, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_", SN_CHECK);
referenceAddress = DfirstB(0xC0E7C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_\n");
}

MakeNameEx(0xC0E54, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_X_AXIS_", SN_CHECK);
MakeNameEx(0xC0E6C, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC0D28, "Turbo_Dynamics_Proportional_", SN_CHECK);
referenceAddress = DfirstB(0xC0D28);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Proportional_", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Proportional_\n");
}

MakeNameEx(0xC0D04, "Turbo_Dynamics_Proportional_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC0D98, "Turbo_Dynamics_Integral_Positive_", SN_CHECK);
referenceAddress = DfirstB(0xC0D98);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Integral_Positive_", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Integral_Positive_\n");
}

MakeNameEx(0xC0D74, "Turbo_Dynamics_Integral_Positive_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC0D60, "Turbo_Dynamics_Integral_Negative_", SN_CHECK);
referenceAddress = DfirstB(0xC0D60);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Integral_Negative_", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Integral_Negative_\n");
}

MakeNameEx(0xC0D3C, "Turbo_Dynamics_Integral_Negative_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC0CC4, "TD_Proportional_Compensation_IAT_", SN_CHECK);
referenceAddress = DfirstB(0xC0CC4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Proportional_Compensation_IAT_", SN_CHECK);
}
else
{
    Message("No reference to TD_Proportional_Compensation_IAT_\n");
}

MakeNameEx(0xC0C54, "TD_Proportional_Compensation_IAT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC0CE4, "TD_Integral_Positive_Compensation_IAT_", SN_CHECK);
referenceAddress = DfirstB(0xC0CE4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Integral_Positive_Compensation_IAT_", SN_CHECK);
}
else
{
    Message("No reference to TD_Integral_Positive_Compensation_IAT_\n");
}

MakeNameEx(0xC0C54, "TD_Integral_Positive_Compensation_IAT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC0CD4, "TD_Integral_Negative_Compensation_IAT_", SN_CHECK);
referenceAddress = DfirstB(0xC0CD4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Integral_Negative_Compensation_IAT_", SN_CHECK);
}
else
{
    Message("No reference to TD_Integral_Negative_Compensation_IAT_\n");
}

MakeNameEx(0xC0C54, "TD_Integral_Negative_Compensation_IAT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC0BE8, "TD_Activation_Thresholds_RPM_", SN_CHECK);
MakeNameEx(0xC0BD4, "TD_Activation_Thresholds_Target_Boost__", SN_CHECK);
MakeNameEx(0xC0BF0, "TD_Integral_Cumulative_Range_WGDC_Correction_", SN_CHECK);
MakeNameEx(0xC0BDC, "TD_Integral_Negative_Activation_Boost_Error_", SN_CHECK);
MakeNameEx(0xC0BE0, "TD_Integral_Positive_Activation_Boost_Error_", SN_CHECK);
MakeNameEx(0xC0BE4, "TD_Integral_Negative_Activation_Wastegate_Duty_", SN_CHECK);
MakeNameEx(0xD86E8, "Manifold_Pressure_Sensor_Scaling__", SN_CHECK);
MakeNameEx(0xD869A, "Manifold_Pressure_Sensor_Limits_CEL_", SN_CHECK);
MakeNameEx(0xD8651, "Manifold_Pressure_Sensor_CEL_Delays_", SN_CHECK);
MakeNameEx(0xCFC9C, "Primary_Open_Loop_Fueling_", SN_CHECK);
referenceAddress = DfirstB(0xCFC9C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_\n");
}

MakeNameEx(0xCFC10, "Primary_Open_Loop_Fueling_X_AXIS_", SN_CHECK);
MakeNameEx(0xCFC54, "Primary_Open_Loop_Fueling_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCFE5C, "Primary_Open_Loop_Fueling_Failsafe_", SN_CHECK);
referenceAddress = DfirstB(0xCFE5C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Failsafe_", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Failsafe_\n");
}

MakeNameEx(0xCFDD0, "Primary_Open_Loop_Fueling_Failsafe_X_AXIS_", SN_CHECK);
MakeNameEx(0xCFE14, "Primary_Open_Loop_Fueling_Failsafe_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCC0DC, "Primary_Open_Loop_Fuel_Map_Switch_IAM_", SN_CHECK);
MakeNameEx(0xCC0E0, "Minimum_Active_Primary_Open_Loop_Enrichment_", SN_CHECK);
MakeNameEx(0xCCD0C, "Minimum_Primary_Open_Loop_Enrichment_Throttle_", SN_CHECK);
referenceAddress = DfirstB(0xCCD0C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Throttle_", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Throttle_\n");
}

MakeNameEx(0xCCCF4, "Minimum_Primary_Open_Loop_Enrichment_Throttle_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCCD2C, "Minimum_Primary_Open_Loop_Enrichment_Accelerator_", SN_CHECK);
referenceAddress = DfirstB(0xCCD2C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Accelerator_", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Accelerator_\n");
}

MakeNameEx(0xCCD14, "Minimum_Primary_Open_Loop_Enrichment_Accelerator_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCE638, "Primary_Open_Loop_Fueling_Compensation_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xCE638);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_ECT_\n");
}

MakeNameEx(0xCC590, "Primary_Open_Loop_Fueling_Compensation_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCCC9C, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation__", SN_CHECK);
referenceAddress = DfirstB(0xCCC9C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_Timing_Compensation__", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_Timing_Compensation__\n");
}

MakeNameEx(0xCCC84, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD89B0, "Front_Oxygen_Sensor_Scaling_", SN_CHECK);
referenceAddress = DfirstB(0xD89B0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Scaling_", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Scaling_\n");
}

MakeNameEx(0xD897C, "Front_Oxygen_Sensor_Scaling_Y_AXIS_", SN_CHECK);
MakeNameEx(0x21B30, "Front_Oxygen_Sensor_Rich_Limit_", SN_CHECK);
MakeNameEx(0xC36C0, "Front_Oxygen_Sensor_Compensation_Atm_Pressure_", SN_CHECK);
referenceAddress = DfirstB(0xC36C0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Compensation_Atm_Pressure_", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Compensation_Atm_Pressure_\n");
}

MakeNameEx(0xC36B0, "Front_Oxygen_Sensor_Compensation_Atm_Pressure_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD143C, "CL_Fueling_Target_Compensation_A_Load_", SN_CHECK);
referenceAddress = DfirstB(0xD143C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_A_Load_", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_A_Load_\n");
}

MakeNameEx(0xD13E8, "CL_Fueling_Target_Compensation_A_Load_X_AXIS_", SN_CHECK);
MakeNameEx(0xD1414, "CL_Fueling_Target_Compensation_A_Load_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD16AC, "CL_Fueling_Target_Compensation_B_Load_", SN_CHECK);
referenceAddress = DfirstB(0xD16AC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_B_Load_", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_B_Load_\n");
}

MakeNameEx(0xD1648, "CL_Fueling_Target_Compensation_B_Load_X_AXIS_", SN_CHECK);
MakeNameEx(0xD167C, "CL_Fueling_Target_Compensation_B_Load_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD131C, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xD131C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Imm_Cruise_ECT_", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Imm_Cruise_ECT_\n");
}

MakeNameEx(0xCC590, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_X_AXIS_", SN_CHECK);
MakeNameEx(0xD1310, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD1388, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xD1388);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_\n");
}

MakeNameEx(0xCC590, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_X_AXIS_", SN_CHECK);
MakeNameEx(0xD137C, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCBF0C, "CL_Fueling_Target_Compensation_ECT_Disable_", SN_CHECK);
MakeNameEx(0xCBBE2, "CL_to_OL_Delay__", SN_CHECK);
MakeNameEx(0xCBBDC, "CL_to_OL_DelaySwitch_SIDRIVE_Intelligent_", SN_CHECK);
MakeNameEx(0xCCCE4, "CL_to_OL_Transition_with_Delay_Throttle_", SN_CHECK);
referenceAddress = DfirstB(0xCCCE4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Throttle_", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Throttle_\n");
}

MakeNameEx(0xCCCA4, "CL_to_OL_Transition_with_Delay_Throttle_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCC0E8, "CL_to_OL_Transition_with_Delay_Throttle_Hysteresis_", SN_CHECK);
MakeNameEx(0xCE564, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width_", SN_CHECK);
referenceAddress = DfirstB(0xCE564);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Base_Pulse_Width_", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Base_Pulse_Width_\n");
}

MakeNameEx(0xCE524, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCC0E4, "CL_to_OL_Transition_with_Delay_BPW_Hysteresis_", SN_CHECK);
MakeNameEx(0xCE5AC, "CL_to_OL_Transition_Counter_Step_Value_MAF_", SN_CHECK);
referenceAddress = DfirstB(0xCE5AC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_Counter_Step_Value_MAF_", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_Counter_Step_Value_MAF_\n");
}

MakeNameEx(0xCE584, "CL_to_OL_Transition_Counter_Step_Value_MAF_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCC148, "CL_Delay_Maximum_Throttle_", SN_CHECK);
MakeNameEx(0xCC164, "CL_Delay_Maximum_Vehicle_Speed_", SN_CHECK);
MakeNameEx(0xCC0EC, "CL_Delay_Minimum_ECT_", SN_CHECK);
MakeNameEx(0xCC174, "CL_Delay_Maximum_Engine_Load_", SN_CHECK);
MakeNameEx(0xCBBDA, "CL_Delay_Engine_Load_Counter_Threshold_", SN_CHECK);
MakeNameEx(0xCC0F0, "CL_Delay_Maximum_Engine_Speed_Per_Gear_", SN_CHECK);
MakeNameEx(0xCC118, "CL_Delay_Maximum_Engine_Speed_Neutral_", SN_CHECK);
MakeNameEx(0xD0FD8, "Injector_Latency__", SN_CHECK);
referenceAddress = DfirstB(0xD0FD8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Injector_Latency__", SN_CHECK);
}
else
{
    Message("No reference to Injector_Latency__\n");
}

MakeNameEx(0xD0FB8, "Injector_Latency_X_AXIS_", SN_CHECK);
MakeNameEx(0xD0FCC, "Injector_Latency_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCBD7C, "Injector_Flow_Scaling_", SN_CHECK);
MakeNameEx(0xD0754, "Per_Injector_Pulse_Width_Compensation_A_", SN_CHECK);
referenceAddress = DfirstB(0xD0754);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_A_", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_A_\n");
}

MakeNameEx(0xD06CC, "Per_Injector_Pulse_Width_Compensation_A_X_AXIS_", SN_CHECK);
MakeNameEx(0xD0710, "Per_Injector_Pulse_Width_Compensation_A_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD0900, "Per_Injector_Pulse_Width_Compensation_B_", SN_CHECK);
referenceAddress = DfirstB(0xD0900);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_B_", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_B_\n");
}

MakeNameEx(0xD0878, "Per_Injector_Pulse_Width_Compensation_B_X_AXIS_", SN_CHECK);
MakeNameEx(0xD08BC, "Per_Injector_Pulse_Width_Compensation_B_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD0AAC, "Per_Injector_Pulse_Width_Compensation_C_", SN_CHECK);
referenceAddress = DfirstB(0xD0AAC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_C_", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_C_\n");
}

MakeNameEx(0xD0A24, "Per_Injector_Pulse_Width_Compensation_C_X_AXIS_", SN_CHECK);
MakeNameEx(0xD0A68, "Per_Injector_Pulse_Width_Compensation_C_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD0C58, "Per_Injector_Pulse_Width_Compensation_D_", SN_CHECK);
referenceAddress = DfirstB(0xD0C58);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_D_", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_D_\n");
}

MakeNameEx(0xD0BD0, "Per_Injector_Pulse_Width_Compensation_D_X_AXIS_", SN_CHECK);
MakeNameEx(0xD0C14, "Per_Injector_Pulse_Width_Compensation_D_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCD252, "Cranking_Fuel_Injector_Pulse_Width_A_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xCD252);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_A_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_A_ECT_\n");
}

MakeNameEx(0xCC590, "Cranking_Fuel_Injector_Pulse_Width_A_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCD272, "Cranking_Fuel_Injector_Pulse_Width_B_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xCD272);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_B_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_B_ECT_\n");
}

MakeNameEx(0xCC590, "Cranking_Fuel_Injector_Pulse_Width_B_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCD292, "Cranking_Fuel_Injector_Pulse_Width_C_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xCD292);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_C_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_C_ECT_\n");
}

MakeNameEx(0xCC590, "Cranking_Fuel_Injector_Pulse_Width_C_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCD2B2, "Cranking_Fuel_Injector_Pulse_Width_D_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xCD2B2);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_D_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_D_ECT_\n");
}

MakeNameEx(0xCC590, "Cranking_Fuel_Injector_Pulse_Width_D_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCD2D2, "Cranking_Fuel_Injector_Pulse_Width_E_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xCD2D2);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_E_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_E_ECT_\n");
}

MakeNameEx(0xCC590, "Cranking_Fuel_Injector_Pulse_Width_E_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCD2F2, "Cranking_Fuel_Injector_Pulse_Width_F_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xCD2F2);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_F_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_F_ECT_\n");
}

MakeNameEx(0xCC590, "Cranking_Fuel_Injector_Pulse_Width_F_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCF670, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_", SN_CHECK);
referenceAddress = DfirstB(0xCF670);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_\n");
}

MakeNameEx(0xCF640, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_X_AXIS_", SN_CHECK);
MakeNameEx(0xCF654, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCF61C, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_", SN_CHECK);
referenceAddress = DfirstB(0xCF61C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_\n");
}

MakeNameEx(0xCF5EC, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_X_AXIS_", SN_CHECK);
MakeNameEx(0xCF600, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCC7D4, "Cranking_Fuel_IPW_Compensation_MAP_", SN_CHECK);
referenceAddress = DfirstB(0xCC7D4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_MAP_", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_MAP_\n");
}

MakeNameEx(0xCC7AC, "Cranking_Fuel_IPW_Compensation_MAP_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCC808, "Cranking_Fuel_IPW_Compensation_Accelerator_", SN_CHECK);
referenceAddress = DfirstB(0xCC808);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Accelerator_", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Accelerator_\n");
}

MakeNameEx(0xCC7E0, "Cranking_Fuel_IPW_Compensation_Accelerator_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCC828, "Cranking_Fuel_IPW_Compensation_IAT_", SN_CHECK);
referenceAddress = DfirstB(0xCC828);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_IAT_", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_IAT_\n");
}

MakeNameEx(0xCC814, "Cranking_Fuel_IPW_Compensation_IAT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCECBC, "Throttle_Tipin_Enrichment_A_", SN_CHECK);
referenceAddress = DfirstB(0xCECBC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment_A_", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment_A_\n");
}

MakeNameEx(0xCEC74, "Throttle_Tipin_Enrichment_A_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCED28, "Throttle_Tipin_Enrichment_B_", SN_CHECK);
referenceAddress = DfirstB(0xCED28);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment_B_", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment_B_\n");
}

MakeNameEx(0xCECE0, "Throttle_Tipin_Enrichment_B_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCC410, "Minimum_Tipin_Enrichment_Activation_", SN_CHECK);
MakeNameEx(0xCC40C, "Minimum_Tipin_Enrichment_Activation_Throttle_", SN_CHECK);
MakeNameEx(0xCD0B8, "Tipin_Enrichment_Compensation_Boost_Error_", SN_CHECK);
referenceAddress = DfirstB(0xCD0B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_Boost_Error_", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_Boost_Error_\n");
}

MakeNameEx(0xCD094, "Tipin_Enrichment_Compensation_Boost_Error_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCD084, "Tipin_Enrichment_Compensation_RPM_", SN_CHECK);
referenceAddress = DfirstB(0xCD084);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_RPM_", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_RPM_\n");
}

MakeNameEx(0xCD044, "Tipin_Enrichment_Compensation_RPM_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCD0C1, "Tipin_Enrichment_Compensation_A_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xCD0C1);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_A_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_A_ECT_\n");
}

MakeNameEx(0xCC590, "Tipin_Enrichment_Compensation_A_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCED4C, "Tipin_Enrichment_Compensation_B_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xCED4C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_B_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_B_ECT_\n");
}

MakeNameEx(0xCC590, "Tipin_Enrichment_Compensation_B_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCED6C, "Tipin_Enrichment_Compensation_C_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xCED6C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_C_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_C_ECT_\n");
}

MakeNameEx(0xCC590, "Tipin_Enrichment_Compensation_C_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCEDAC, "Tipin_Enrichment_Compensation_D_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xCEDAC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_D_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_D_ECT_\n");
}

MakeNameEx(0xCC5D0, "Tipin_Enrichment_Compensation_D_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCC414, "Tipin_Enrichment_Compensation_D_ECT_Activation_", SN_CHECK);
MakeNameEx(0xCD0D1, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xCD0D1);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT_\n");
}

MakeNameEx(0xCC590, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCD0E1, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xCD0E1);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT_\n");
}

MakeNameEx(0xCC590, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCBB88, "Tipin_Enrichment_Applied_Counter_Reset_", SN_CHECK);
MakeNameEx(0xCEDCC, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xCEDCC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT_\n");
}

MakeNameEx(0xCC590, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCEDEC, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xCEDEC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT_\n");
}

MakeNameEx(0xCC590, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCBB89, "Tipin_Throttle_Cumulative_Reset_", SN_CHECK);
MakeNameEx(0xCF8C8, "Min_Primary_Base_Enrichment_1_Cruise_", SN_CHECK);
referenceAddress = DfirstB(0xCF8C8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_Cruise_", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_Cruise_\n");
}

MakeNameEx(0xCC590, "Min_Primary_Base_Enrichment_1_Cruise_X_AXIS_", SN_CHECK);
MakeNameEx(0xCF8A4, "Min_Primary_Base_Enrichment_1_Cruise_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCF824, "Min_Primary_Base_Enrichment_1_NonCruise_", SN_CHECK);
referenceAddress = DfirstB(0xCF824);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonCruise_", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonCruise_\n");
}

MakeNameEx(0xCC590, "Min_Primary_Base_Enrichment_1_NonCruise_X_AXIS_", SN_CHECK);
MakeNameEx(0xCF804, "Min_Primary_Base_Enrichment_1_NonCruise_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCC88D, "Min_Primary_Base_Enrichment_1_NonPrimary_OL__", SN_CHECK);
referenceAddress = DfirstB(0xCC88D);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonPrimary_OL__", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonPrimary_OL__\n");
}

MakeNameEx(0xCC590, "Min_Primary_Base_Enrichment_1_NonPrimary_OL_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCBFD4, "AF_Learning_1_Limits_", SN_CHECK);
MakeNameEx(0xCBFE4, "AF_Learning_1_Airflow_Ranges_", SN_CHECK);
MakeNameEx(0xC30D8, "MAF_Limit_Maximum_", SN_CHECK);
MakeNameEx(0xD88A4, "MAF_Sensor_Scaling_", SN_CHECK);
referenceAddress = DfirstB(0xD88A4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_MAF_Sensor_Scaling_", SN_CHECK);
}
else
{
    Message("No reference to MAF_Sensor_Scaling_\n");
}

MakeNameEx(0xD87CC, "MAF_Sensor_Scaling_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC3B28, "MAF_Compensation_IAT_", SN_CHECK);
referenceAddress = DfirstB(0xC3B28);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_MAF_Compensation_IAT_", SN_CHECK);
}
else
{
    Message("No reference to MAF_Compensation_IAT_\n");
}

MakeNameEx(0xC3AF4, "MAF_Compensation_IAT_X_AXIS_", SN_CHECK);
MakeNameEx(0xC3B08, "MAF_Compensation_IAT_Y_AXIS_", SN_CHECK);
MakeNameEx(0x20208, "Engine_Load_Limit_A_Maximum_", SN_CHECK);
MakeNameEx(0xC35C0, "Engine_Load_Limit_B_Maximum_RPM_", SN_CHECK);
referenceAddress = DfirstB(0xC35C0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Limit_B_Maximum_RPM_", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Limit_B_Maximum_RPM_\n");
}

MakeNameEx(0xC35B8, "Engine_Load_Limit_B_Maximum_RPM_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC3BB4, "Engine_Load_Compensation_Cruise_MP_", SN_CHECK);
referenceAddress = DfirstB(0xC3BB4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Compensation_Cruise_MP_", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Compensation_Cruise_MP_\n");
}

MakeNameEx(0xC3B50, "Engine_Load_Compensation_Cruise_MP_X_AXIS_", SN_CHECK);
MakeNameEx(0xC3B7C, "Engine_Load_Compensation_Cruise_MP_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC3CB4, "Engine_Load_Compensation_NonCruise_MP_", SN_CHECK);
referenceAddress = DfirstB(0xC3CB4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Compensation_NonCruise_MP_", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Compensation_NonCruise_MP_\n");
}

MakeNameEx(0xC3C50, "Engine_Load_Compensation_NonCruise_MP_X_AXIS_", SN_CHECK);
MakeNameEx(0xC3C7C, "Engine_Load_Compensation_NonCruise_MP_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD4488, "Base_Timing_Primary_Cruise_", SN_CHECK);
referenceAddress = DfirstB(0xD4488);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Primary_Cruise_", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Primary_Cruise_\n");
}

MakeNameEx(0xD43FC, "Base_Timing_Primary_Cruise_X_AXIS_", SN_CHECK);
MakeNameEx(0xD4440, "Base_Timing_Primary_Cruise_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD4808, "Base_Timing_Reference_Cruise_AVCS_related_", SN_CHECK);
referenceAddress = DfirstB(0xD4808);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Reference_Cruise_AVCS_related_", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Reference_Cruise_AVCS_related_\n");
}

MakeNameEx(0xD477C, "Base_Timing_Reference_Cruise_AVCS_related_X_AXIS_", SN_CHECK);
MakeNameEx(0xD47C0, "Base_Timing_Reference_Cruise_AVCS_related_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD4648, "Base_Timing_Primary_NonCruise_", SN_CHECK);
referenceAddress = DfirstB(0xD4648);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Primary_NonCruise_", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Primary_NonCruise_\n");
}

MakeNameEx(0xD45BC, "Base_Timing_Primary_NonCruise_X_AXIS_", SN_CHECK);
MakeNameEx(0xD4600, "Base_Timing_Primary_NonCruise_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD49C8, "Base_Timing_Reference_NonCruise_AVCS_related_", SN_CHECK);
referenceAddress = DfirstB(0xD49C8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Reference_NonCruise_AVCS_related_", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Reference_NonCruise_AVCS_related_\n");
}

MakeNameEx(0xD493C, "Base_Timing_Reference_NonCruise_AVCS_related_X_AXIS_", SN_CHECK);
MakeNameEx(0xD4980, "Base_Timing_Reference_NonCruise_AVCS_related_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD3022, "Base_Timing_Idle_A_InGear_", SN_CHECK);
referenceAddress = DfirstB(0xD3022);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_A_InGear_", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_A_InGear_\n");
}

MakeNameEx(0xD2E08, "Base_Timing_Idle_A_InGear_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD3032, "Base_Timing_Idle_B_InGear_", SN_CHECK);
referenceAddress = DfirstB(0xD3032);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_B_InGear_", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_B_InGear_\n");
}

MakeNameEx(0xD2E08, "Base_Timing_Idle_B_InGear_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD3042, "Base_Timing_Idle_A_Neutral_", SN_CHECK);
referenceAddress = DfirstB(0xD3042);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_A_Neutral_", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_A_Neutral_\n");
}

MakeNameEx(0xD2E08, "Base_Timing_Idle_A_Neutral_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD3052, "Base_Timing_Idle_B_Neutral_", SN_CHECK);
referenceAddress = DfirstB(0xD3052);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_B_Neutral_", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_B_Neutral_\n");
}

MakeNameEx(0xD2E08, "Base_Timing_Idle_B_Neutral_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD3019, "Base_Timing_Idle_Minimum_", SN_CHECK);
referenceAddress = DfirstB(0xD3019);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_Minimum_", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_Minimum_\n");
}

MakeNameEx(0xD2E88, "Base_Timing_Idle_Minimum_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD29B4, "Base_Timing_Idle_Minimum_Vehicle_Speed_Enable_", SN_CHECK);
MakeNameEx(0xD5570, "Knock_Correction_Advance_Max_Cruise_", SN_CHECK);
referenceAddress = DfirstB(0xD5570);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_Cruise_", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_Cruise_\n");
}

MakeNameEx(0xD54E4, "Knock_Correction_Advance_Max_Cruise_X_AXIS_", SN_CHECK);
MakeNameEx(0xD5528, "Knock_Correction_Advance_Max_Cruise_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD5730, "Knock_Correction_Advance_Max_NonCruise_", SN_CHECK);
referenceAddress = DfirstB(0xD5730);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_NonCruise_", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_NonCruise_\n");
}

MakeNameEx(0xD56A4, "Knock_Correction_Advance_Max_NonCruise_X_AXIS_", SN_CHECK);
MakeNameEx(0xD56E8, "Knock_Correction_Advance_Max_NonCruise_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD3104, "Timing_Compensation_A_IAT_", SN_CHECK);
referenceAddress = DfirstB(0xD3104);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_A_IAT_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_A_IAT_\n");
}

MakeNameEx(0xD30C4, "Timing_Compensation_A_IAT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD4B3C, "Timing_Compensation_A_IAT_Activation_", SN_CHECK);
referenceAddress = DfirstB(0xD4B3C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_A_IAT_Activation_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_A_IAT_Activation_\n");
}

MakeNameEx(0xD4AFC, "Timing_Compensation_A_IAT_Activation_X_AXIS_", SN_CHECK);
MakeNameEx(0xD4B1C, "Timing_Compensation_A_IAT_Activation_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD36D4, "Timing_Compensation_B_IAT_", SN_CHECK);
referenceAddress = DfirstB(0xD36D4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_B_IAT_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_B_IAT_\n");
}

MakeNameEx(0xD3694, "Timing_Compensation_B_IAT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD2B70, "Timing_Compensation_B_IAT_IAM_Activation_", SN_CHECK);
MakeNameEx(0xD2B54, "Timing_Compensation_B_IAT_Max_Additive_", SN_CHECK);
MakeNameEx(0xD30A2, "Timing_Compensation_Imm_Cruise_A_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xD30A2);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_Cruise_A_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_Cruise_A_ECT_\n");
}

MakeNameEx(0xD2E08, "Timing_Compensation_Imm_Cruise_A_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD30B2, "Timing_Compensation_Imm_Cruise_B_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xD30B2);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_Cruise_B_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_Cruise_B_ECT_\n");
}

MakeNameEx(0xD2E08, "Timing_Compensation_Imm_Cruise_B_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD3082, "Timing_Compensation_Imm_NonCruise_A_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xD3082);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_NonCruise_A_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_NonCruise_A_ECT_\n");
}

MakeNameEx(0xD2E08, "Timing_Compensation_Imm_NonCruise_A_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD3092, "Timing_Compensation_Imm_NonCruise_B_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xD3092);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_NonCruise_B_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_NonCruise_B_ECT_\n");
}

MakeNameEx(0xD2E08, "Timing_Compensation_Imm_NonCruise_B_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD511C, "Timing_Compensation_Per_Cylinder_A_", SN_CHECK);
referenceAddress = DfirstB(0xD511C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_A_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_A_\n");
}

MakeNameEx(0xD50D0, "Timing_Compensation_Per_Cylinder_A_X_AXIS_", SN_CHECK);
MakeNameEx(0xD5108, "Timing_Compensation_Per_Cylinder_A_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD51B0, "Timing_Compensation_Per_Cylinder_B_", SN_CHECK);
referenceAddress = DfirstB(0xD51B0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_B_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_B_\n");
}

MakeNameEx(0xD5164, "Timing_Compensation_Per_Cylinder_B_X_AXIS_", SN_CHECK);
MakeNameEx(0xD519C, "Timing_Compensation_Per_Cylinder_B_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD5244, "Timing_Compensation_Per_Cylinder_C_", SN_CHECK);
referenceAddress = DfirstB(0xD5244);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_C_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_C_\n");
}

MakeNameEx(0xD51F8, "Timing_Compensation_Per_Cylinder_C_X_AXIS_", SN_CHECK);
MakeNameEx(0xD5230, "Timing_Compensation_Per_Cylinder_C_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD52DC, "Timing_Compensation_Per_Cylinder_D_", SN_CHECK);
referenceAddress = DfirstB(0xD52DC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_D_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_D_\n");
}

MakeNameEx(0xD528C, "Timing_Compensation_Per_Cylinder_D_X_AXIS_", SN_CHECK);
MakeNameEx(0xD52C4, "Timing_Compensation_Per_Cylinder_D_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD2C18, "Timing_Comp_Minimum_Load_Per_Cylinder_", SN_CHECK);
MakeNameEx(0xD2C14, "Timing_Comp_Maximum_RPM_Per_Cylinder_", SN_CHECK);
MakeNameEx(0xD2C1C, "Timing_Comp_Minimum_Coolant_Temp_Per_Cylinder_", SN_CHECK);
MakeNameEx(0xD2C28, "Feedback_Correction_Range_RPM_", SN_CHECK);
MakeNameEx(0xD2C20, "Feedback_Correction_Minimum_Load_", SN_CHECK);
MakeNameEx(0xD2C48, "Feedback_Correction_Retard_Value_", SN_CHECK);
MakeNameEx(0xD2C44, "Feedback_Correction_Retard_Limit_", SN_CHECK);
MakeNameEx(0xD2C4C, "Feedback_Correction_Negative_Advance_Value_", SN_CHECK);
MakeNameEx(0xD28B8, "Feedback_Correction_Negative_Advance_Delay_", SN_CHECK);
MakeNameEx(0xD2C54, "Extended_Feedback_Correction_High_RPM_Compensation_", SN_CHECK);
MakeNameEx(0xD2DE8, "Fine_Correction_Range_RPM_", SN_CHECK);
MakeNameEx(0xD2DF8, "Fine_Correction_Range_Load_", SN_CHECK);
MakeNameEx(0xD2D88, "Fine_Correction_Rows_RPM_", SN_CHECK);
MakeNameEx(0xD2DA4, "Fine_Correction_Columns_Load_", SN_CHECK);
MakeNameEx(0xD2DCC, "Fine_Correction_Retard_Value_", SN_CHECK);
MakeNameEx(0xD2DC8, "Fine_Correction_Retard_Limit_", SN_CHECK);
MakeNameEx(0xD2DC4, "Fine_Correction_Advance_Value_", SN_CHECK);
MakeNameEx(0xD2DC0, "Fine_Correction_Advance_Limit_", SN_CHECK);
MakeNameEx(0xD28C8, "Fine_Correction_Advance_Delay_", SN_CHECK);
MakeNameEx(0xD2D38, "Rough_Correction_Range_RPM_", SN_CHECK);
MakeNameEx(0xD2D48, "Rough_Correction_Range_Load_", SN_CHECK);
MakeNameEx(0xD2D58, "Rough_Correction_Minimum_KC_Advance_Map_Value_", SN_CHECK);
MakeNameEx(0xD3A00, "Rough_Correction_Learning_Delay_Increasing__", SN_CHECK);
referenceAddress = DfirstB(0xD3A00);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Rough_Correction_Learning_Delay_Increasing__", SN_CHECK);
}
else
{
    Message("No reference to Rough_Correction_Learning_Delay_Increasing__\n");
}

MakeNameEx(0xD39D8, "Rough_Correction_Learning_Delay_Increasing_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD2D5C, "Advance_Multiplier_Initial_", SN_CHECK);
MakeNameEx(0xD2D60, "Advance_Multiplier_Step_Value_", SN_CHECK);
MakeNameEx(0xDA574, "Intake_Cam_Advance_Angle_Cruise_AVCS_", SN_CHECK);
referenceAddress = DfirstB(0xDA574);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_Cruise_AVCS_", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_Cruise_AVCS_\n");
}

MakeNameEx(0xDA4EC, "Intake_Cam_Advance_Angle_Cruise_AVCS_X_AXIS_", SN_CHECK);
MakeNameEx(0xDA534, "Intake_Cam_Advance_Angle_Cruise_AVCS_Y_AXIS_", SN_CHECK);
MakeNameEx(0xDA83C, "Intake_Cam_Advance_Angle_NonCruise_AVCS_", SN_CHECK);
referenceAddress = DfirstB(0xDA83C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_NonCruise_AVCS_", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_NonCruise_AVCS_\n");
}

MakeNameEx(0xDA7B4, "Intake_Cam_Advance_Angle_NonCruise_AVCS_X_AXIS_", SN_CHECK);
MakeNameEx(0xDA7FC, "Intake_Cam_Advance_Angle_NonCruise_AVCS_Y_AXIS_", SN_CHECK);
MakeNameEx(0xF9EE0, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_", SN_CHECK);
referenceAddress = DfirstB(0xF9EE0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_\n");
}

MakeNameEx(0xF9E60, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_X_AXIS_", SN_CHECK);
MakeNameEx(0xF9E9C, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Y_AXIS_", SN_CHECK);
MakeNameEx(0xFA160, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp_", SN_CHECK);
referenceAddress = DfirstB(0xFA160);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp_", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp_\n");
}

MakeNameEx(0xFA0E0, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp_X_AXIS_", SN_CHECK);
MakeNameEx(0xFA11C, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp_Y_AXIS_", SN_CHECK);
MakeNameEx(0xFA3E0, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent_", SN_CHECK);
referenceAddress = DfirstB(0xFA3E0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent_", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent_\n");
}

MakeNameEx(0xFA360, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent_X_AXIS_", SN_CHECK);
MakeNameEx(0xFA39C, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent_Y_AXIS_", SN_CHECK);
MakeNameEx(0xF9054, "Requested_Torque_Base_RPM_", SN_CHECK);
referenceAddress = DfirstB(0xF9054);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Base_RPM_", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Base_RPM_\n");
}

MakeNameEx(0xF9014, "Requested_Torque_Base_RPM_Y_AXIS_", SN_CHECK);
MakeNameEx(0xF9504, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_", SN_CHECK);
referenceAddress = DfirstB(0xF9504);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_\n");
}

MakeNameEx(0xF9484, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_X_AXIS_", SN_CHECK);
MakeNameEx(0xF94C4, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_Y_AXIS_", SN_CHECK);
MakeNameEx(0xF9784, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_", SN_CHECK);
referenceAddress = DfirstB(0xF9784);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_\n");
}

MakeNameEx(0xF9704, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_X_AXIS_", SN_CHECK);
MakeNameEx(0xF9744, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_Y_AXIS_", SN_CHECK);
MakeNameEx(0xF9A04, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_", SN_CHECK);
referenceAddress = DfirstB(0xF9A04);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_\n");
}

MakeNameEx(0xF9984, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_X_AXIS_", SN_CHECK);
MakeNameEx(0xF99C4, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_Y_AXIS_", SN_CHECK);
MakeNameEx(0xF9C88, "Requested_Torque_Limit_A_Per_GearEngine_Speed_", SN_CHECK);
referenceAddress = DfirstB(0xF9C88);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Limit_A_Per_GearEngine_Speed_", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Limit_A_Per_GearEngine_Speed_\n");
}

MakeNameEx(0xF9C30, "Requested_Torque_Limit_A_Per_GearEngine_Speed_X_AXIS_", SN_CHECK);
MakeNameEx(0xF9C70, "Requested_Torque_Limit_A_Per_GearEngine_Speed_Y_AXIS_", SN_CHECK);
MakeNameEx(0xF9DA0, "Requested_Torque_Limit_B_Per_GearEngine_Speed_", SN_CHECK);
referenceAddress = DfirstB(0xF9DA0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Limit_B_Per_GearEngine_Speed_", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Limit_B_Per_GearEngine_Speed_\n");
}

MakeNameEx(0xF9D48, "Requested_Torque_Limit_B_Per_GearEngine_Speed_X_AXIS_", SN_CHECK);
MakeNameEx(0xF9D88, "Requested_Torque_Limit_B_Per_GearEngine_Speed_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCC46C, "Rev_Limit_Fuel_Cut_", SN_CHECK);
MakeNameEx(0xCC484, "Rev_Limit_Fuel_Resume_Boost_", SN_CHECK);
MakeNameEx(0xCC48C, "Speed_Limiting_Enable_Fuel_Cut_", SN_CHECK);
MakeNameEx(0xCC494, "Speed_Limiting_Disable_Fuel_Cut_", SN_CHECK);
MakeNameEx(0xF8E48, "Speed_Limiting_A_Throttle_SIDRIVE_SportSport_Sharp_", SN_CHECK);
MakeNameEx(0xF8E60, "Speed_Limiting_B_Throttle_SIDRIVE_SportSport_Sharp_", SN_CHECK);
MakeNameEx(0xF8E54, "Speed_Limiting_Throttle_SIDRIVE_Intelligent_", SN_CHECK);
MakeNameEx(0xD8C2C, "Fuel_Temp_Sensor_Scaling_", SN_CHECK);
referenceAddress = DfirstB(0xD8C2C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Fuel_Temp_Sensor_Scaling_", SN_CHECK);
}
else
{
    Message("No reference to Fuel_Temp_Sensor_Scaling_\n");
}

MakeNameEx(0xD8BB4, "Fuel_Temp_Sensor_Scaling_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD8B3C, "Intake_Temp_Sensor_Scaling_", SN_CHECK);
referenceAddress = DfirstB(0xD8B3C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Intake_Temp_Sensor_Scaling_", SN_CHECK);
}
else
{
    Message("No reference to Intake_Temp_Sensor_Scaling_\n");
}

MakeNameEx(0xD8AC4, "Intake_Temp_Sensor_Scaling_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD8A54, "Coolant_Temp_Sensor_Scaling_", SN_CHECK);
referenceAddress = DfirstB(0xD8A54);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Coolant_Temp_Sensor_Scaling_", SN_CHECK);
}
else
{
    Message("No reference to Coolant_Temp_Sensor_Scaling_\n");
}

MakeNameEx(0xD89E4, "Coolant_Temp_Sensor_Scaling_Y_AXIS_", SN_CHECK);
MakeNameEx(0x4B45C, "Fuel_Pump_Duty_", SN_CHECK);
MakeNameEx(0xD8F34, "Radiator_Fan_Modes_A_ECT_", SN_CHECK);
MakeNameEx(0xD8F44, "Radiator_Fan_Modes_B_ECT_", SN_CHECK);
MakeNameEx(0xD8F54, "Radiator_Fan_Modes_Veh_Speed_", SN_CHECK);
MakeNameEx(0xC344C, "Gear_Determination_Thresholds_A_", SN_CHECK);
MakeNameEx(0xC3460, "Gear_Determination_Thresholds_B_", SN_CHECK);
MakeNameEx(0xC3474, "Gear_Determination_Thresholds_C_", SN_CHECK);
MakeNameEx(0xD6B6C, "Idle_Speed_Target_A_", SN_CHECK);
referenceAddress = DfirstB(0xD6B6C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_A_", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_A_\n");
}

MakeNameEx(0xD6400, "Idle_Speed_Target_A_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD6BAC, "Idle_Speed_Target_B_", SN_CHECK);
referenceAddress = DfirstB(0xD6BAC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_B_", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_B_\n");
}

MakeNameEx(0xD6400, "Idle_Speed_Target_B_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD6BEC, "Idle_Speed_Target_C_", SN_CHECK);
referenceAddress = DfirstB(0xD6BEC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_C_", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_C_\n");
}

MakeNameEx(0xD6400, "Idle_Speed_Target_C_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD6C8C, "Idle_Speed_Target_D_", SN_CHECK);
referenceAddress = DfirstB(0xD6C8C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_D_", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_D_\n");
}

MakeNameEx(0xD6400, "Idle_Speed_Target_D_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD8DE8, "Ignition_Dwell_", SN_CHECK);
referenceAddress = DfirstB(0xD8DE8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Ignition_Dwell_", SN_CHECK);
}
else
{
    Message("No reference to Ignition_Dwell_\n");
}

MakeNameEx(0xD8D94, "Ignition_Dwell_X_AXIS_", SN_CHECK);
MakeNameEx(0xD8DD4, "Ignition_Dwell_Y_AXIS_", SN_CHECK);
MakeNameEx(0x98CA2, "P0000_PASS_CODE_NO_DTC_DETECTED_", SN_CHECK);
MakeNameEx(0x98C85, "P0011_CAMSHAFT_POS_TIMING_OVERADVANCED_1_", SN_CHECK);
MakeNameEx(0x98D13, "P0016_CRANKSHAFTCAMSHAFT_CORRELATION_1A_", SN_CHECK);
MakeNameEx(0x98D12, "P0018_CRANKSHAFTCAMSHAFT_CORRELATION_2A_", SN_CHECK);
MakeNameEx(0x98C86, "P0021_CAMSHAFT_POS_TIMING_OVERADVANCED_2_", SN_CHECK);
MakeNameEx(0x98CC6, "P0030_FRONT_O2_SENSOR_RANGEPERF_", SN_CHECK);
MakeNameEx(0x98CB1, "P0031_FRONT_O2_SENSOR_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x98CAF, "P0032_FRONT_O2_SENSOR_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x98CB0, "P0037_REAR_O2_SENSOR_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x98CAE, "P0038_REAR_O2_SENSOR_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x98CC1, "P0068_MAP_SENSOR_RANGEPERF_", SN_CHECK);
MakeNameEx(0x98CC2, "P0101_MAF_SENSOR_RANGEPERF_", SN_CHECK);
MakeNameEx(0x98C61, "P0102_MAF_SENSOR_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x98C62, "P0103_MAF_SENSOR_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x98CB2, "P0107_MAP_SENSOR_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x98CB3, "P0108_MAP_SENSOR_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x98CAD, "P0111_IAT_SENSOR_RANGEPERF_", SN_CHECK);
MakeNameEx(0x98CAB, "P0112_IAT_SENSOR_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x98CAC, "P0113_IAT_SENSOR_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x98C6A, "P0117_COOLANT_TEMP_SENSOR_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x98C6B, "P0118_COOLANT_TEMP_SENSOR_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x98C68, "P0122_TPS_A_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x98C69, "P0123_TPS_A_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x98C6D, "P0125_INSUFFICIENT_COOLANT_TEMP_FUELING_", SN_CHECK);
MakeNameEx(0x98CFB, "P0126_INSUFFICIENT_COOLANT_TEMP_OPERATION_", SN_CHECK);
MakeNameEx(0x98CB8, "P0128_THERMOSTAT_MALFUNCTION_", SN_CHECK);
MakeNameEx(0x98CA5, "P0131_FRONT_O2_SENSOR_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x98CA7, "P0132_FRONT_O2_SENSOR_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x98CC4, "P0134_FRONT_O2_SENSOR_NO_ACTIVITY_", SN_CHECK);
MakeNameEx(0x98CA4, "P0137_REAR_O2_SENSOR_LOW_VOLTAGE_", SN_CHECK);
MakeNameEx(0x98CA9, "P0138_REAR_O2_SENSOR_HIGH_VOLTAGE_", SN_CHECK);
MakeNameEx(0x98D0E, "P0140_REAR_O2_SENSOR_NO_ACTIVITY_", SN_CHECK);
MakeNameEx(0x98C8E, "P0141_REAR_O2_SENSOR_MALFUNCTION_", SN_CHECK);
MakeNameEx(0x98D3E, "P014C_O2_SENSOR_SLOW_RESPONSE_RICH_TO_LEAN_B1_S1_", SN_CHECK);
MakeNameEx(0x98D3D, "P014D_O2_SENSOR_SLOW_RESPONSE_LEAN_TO_RICH_B1_S1_", SN_CHECK);
MakeNameEx(0x98D3A, "P015A_O2_SENSOR_DELAYED_RESPONSE_RICH_TO_LEAN_B1_S1_", SN_CHECK);
MakeNameEx(0x98C99, "P0171_SYSTEM_TOO_LEAN_", SN_CHECK);
MakeNameEx(0x98C9A, "P0172_SYSTEM_TOO_RICH_", SN_CHECK);
MakeNameEx(0x98CCD, "P0222_TPS_B_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x98CCE, "P0223_TPS_B_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x98CC0, "P0230_FUEL_PUMP_PRIMARY_CIRCUIT_", SN_CHECK);
MakeNameEx(0x98CBF, "P0244_WASTEGATE_SOLENOID_A_RANGEPERF_", SN_CHECK);
MakeNameEx(0x98CBD, "P0245_WASTEGATE_SOLENOID_A_LOW_", SN_CHECK);
MakeNameEx(0x98CBE, "P0246_WASTEGATE_SOLENOID_A_HIGH_", SN_CHECK);
MakeNameEx(0x98C9B, "P0301_MISFIRE_CYLINDER_1_", SN_CHECK);
MakeNameEx(0x98C9C, "P0302_MISFIRE_CYLINDER_2_", SN_CHECK);
MakeNameEx(0x98C9D, "P0303_MISFIRE_CYLINDER_3_", SN_CHECK);
MakeNameEx(0x98C9E, "P0304_MISFIRE_CYLINDER_4_", SN_CHECK);
MakeNameEx(0x98C66, "P0327_KNOCK_SENSOR_1_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x98C67, "P0328_KNOCK_SENSOR_1_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x98C5C, "P0335_CRANKSHAFT_POS_SENSOR_A_MALFUNCTION_", SN_CHECK);
MakeNameEx(0x98C5D, "P0336_CRANKSHAFT_POS_SENSOR_A_RANGEPERF_", SN_CHECK);
MakeNameEx(0x98CE0, "P0340_CAMSHAFT_POS_SENSOR_A_MALFUNCTION_", SN_CHECK);
MakeNameEx(0x98CDF, "P0345_CAMSHAFT_POS_SENSOR_A_BANK_2_", SN_CHECK);
MakeNameEx(0x98D08, "P0410_SECONDARY_AIR_PUMP_SYSTEM_", SN_CHECK);
MakeNameEx(0x98D07, "P0411_SECONDARY_AIR_PUMP_INCORRECT_FLOW_", SN_CHECK);
MakeNameEx(0x98D0C, "P0413_SECONDARY_AIR_PUMP_A_OPEN_", SN_CHECK);
MakeNameEx(0x98D10, "P0414_SECONDARY_AIR_PUMP_A_SHORTED_", SN_CHECK);
MakeNameEx(0x98D1A, "P0416_SECONDARY_AIR_PUMP_B_OPEN_", SN_CHECK);
MakeNameEx(0x98D19, "P0417_SECONDARY_AIR_PUMP_B_SHORTED_", SN_CHECK);
MakeNameEx(0x98D0D, "P0418_SECONDARY_AIR_PUMP_RELAY_A_", SN_CHECK);
MakeNameEx(0x98C95, "P0420_CAT_EFFICIENCY_BELOW_THRESHOLD_", SN_CHECK);
MakeNameEx(0x98D44, "P0441_EVAP_INCORRECT_PURGE_FLOW_", SN_CHECK);
MakeNameEx(0x98D43, "P0451_EVAP_PRESSURE_SENSOR_RANGEPERF_", SN_CHECK);
MakeNameEx(0x98D36, "P0452_EVAP_PRESSURE_SENSOR_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x98D35, "P0453_EVAP_PRESSURE_SENSOR_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x98D42, "P0455_EVAP_EMISSION_CONTROL_SYSTEM_LEAK_DETECTED_GROSS_LEAK_", SN_CHECK);
MakeNameEx(0x98C97, "P0456_EVAP_LEAK_DETECTED_VERY_SMALL_", SN_CHECK);
MakeNameEx(0x98C89, "P0458_EVAP_PURGE_VALVE_CIRCUIT_LOW_", SN_CHECK);
MakeNameEx(0x98C8A, "P0459_EVAP_PURGE_VALVE_CIRCUIT_HIGH_", SN_CHECK);
MakeNameEx(0x98C70, "P0461_FUEL_LEVEL_SENSOR_RANGEPERF_", SN_CHECK);
MakeNameEx(0x98C6E, "P0462_FUEL_LEVEL_SENSOR_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x98C6F, "P0463_FUEL_LEVEL_SENSOR_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x98C63, "P0500_VEHICLE_SPEED_SENSOR_A_", SN_CHECK);
MakeNameEx(0x98C83, "P0506_IDLE_CONTROL_RPM_LOWER_THAN_EXPECTED_", SN_CHECK);
MakeNameEx(0x98C84, "P0507_IDLE_CONTROL_RPM_HIGH_THAN_EXPECTED_", SN_CHECK);
MakeNameEx(0x98D30, "P050A_COLD_START_IDLE_AIR_CONTROL_SYSTEM_PERFORMANCE_", SN_CHECK);
MakeNameEx(0x98D2F, "P050B_COLD_START_IGNITION_TIMING_PERFORMANCE_", SN_CHECK);
MakeNameEx(0x98C72, "P0512_STARTER_REQUEST_CIRCUIT_", SN_CHECK);
MakeNameEx(0x98C60, "P0604_CONTROL_MODULE_RAM_ERROR_", SN_CHECK);
MakeNameEx(0x98CE1, "P0605_CONTROL_MODULE_ROM_ERROR_", SN_CHECK);
MakeNameEx(0x98CD5, "P0607_CONTROL_MODULE_PERFORMANCE_", SN_CHECK);
MakeNameEx(0x98CD4, "P0638_THROTTLE_ACTUATOR_RANGEPERF_", SN_CHECK);
MakeNameEx(0x98C76, "P0851_NEUTRAL_SWITCH_INPUT_LOW_", SN_CHECK);
MakeNameEx(0x98C7A, "P0852_NEUTRAL_SWITCH_INPUT_HIGH_", SN_CHECK);
MakeNameEx(0x98C91, "P1152_FRONT_O2_SENSOR_RANGEPERF_LOW_B1_S1_", SN_CHECK);
MakeNameEx(0x98C92, "P1153_FRONT_O2_SENSOR_RANGEPERF_HIGH_B1_S1_", SN_CHECK);
MakeNameEx(0x98CCF, "P1160_ABNORMAL_RETURN_SPRING_", SN_CHECK);
MakeNameEx(0x98C87, "P1400_FUEL_TANK_PRESSURE_SOL_LOW_", SN_CHECK);
MakeNameEx(0x98D14, "P1410_SECONDARY_AIR_PUMP_VALVE_STUCK_OPEN_", SN_CHECK);
MakeNameEx(0x98D11, "P1418_SECONDARY_AIR_PUMP_CIRCUIT_SHORTED_", SN_CHECK);
MakeNameEx(0x98C88, "P1420_FUEL_TANK_PRESSURE_SOL_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x98D41, "P1449_EVAPORATIVE_EMISSION_CONT_SYS_AIR_FILTER_CLOG_", SN_CHECK);
MakeNameEx(0x98D40, "P1451_EVAPORATIVE_EMISSION_CONT_SYS_", SN_CHECK);
MakeNameEx(0x98D3F, "P1458_CANISTER_PURGE_CONTROL_SOLENOID_VALVE_2_LOW_", SN_CHECK);
MakeNameEx(0x98D49, "P1459_CANISTER_PURGE_CONTROL_SOLENOID_VALVE_2_HIGH_", SN_CHECK);
MakeNameEx(0x98CB9, "P1491_PCV_BLOWBY_FUNCTION_PROBLEM_", SN_CHECK);
MakeNameEx(0x98C71, "P1518_STARTER_SWITCH_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x98D1F, "P1519_IMRC_STUCK_CLOSED_", SN_CHECK);
MakeNameEx(0x98D1E, "P1520_IMRC_CIRCUIT_MALFUNCTION_", SN_CHECK);
MakeNameEx(0x98CBA, "P1560_BACKUP_VOLTAGE_MALFUNCTION_", SN_CHECK);
MakeNameEx(0x98D1D, "P1616_SBDS_INTERACTIVE_CODES_", SN_CHECK);
MakeNameEx(0x98CF6, "P2004_TGV_INTAKE_MANIFOLD_RUNNER_1_STUCK_OPEN_", SN_CHECK);
MakeNameEx(0x98CF8, "P2005_TGV_INTAKE_MANIFOLD_RUNNER_2_STUCK_OPEN_", SN_CHECK);
MakeNameEx(0x98CF7, "P2006_TGV_INTAKE_MANIFOLD_RUNNER_1_STUCK_CLOSED_", SN_CHECK);
MakeNameEx(0x98CF9, "P2007_TGV_INTAKE_MANIFOLD_RUNNER_2_STUCK_CLOSED_", SN_CHECK);
MakeNameEx(0x98D04, "P2008_TGV_INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_OPEN_", SN_CHECK);
MakeNameEx(0x98D02, "P2009_TGV_INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_LOW_", SN_CHECK);
MakeNameEx(0x98D05, "P2011_TGV_INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_OPEN_", SN_CHECK);
MakeNameEx(0x98D03, "P2012_TGV_INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_LOW_", SN_CHECK);
MakeNameEx(0x98CFE, "P2016_TGV_INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_LOW_", SN_CHECK);
MakeNameEx(0x98CFF, "P2017_TGV_INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_HIGH_", SN_CHECK);
MakeNameEx(0x98D00, "P2021_TGV_INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_LOW_", SN_CHECK);
MakeNameEx(0x98D01, "P2022_TGV_INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_HIGH_", SN_CHECK);
MakeNameEx(0x98CE9, "P2088_OCV_SOLENOID_A1_CIRCUIT_OPEN_", SN_CHECK);
MakeNameEx(0x98CE8, "P2089_OCV_SOLENOID_A1_CIRCUIT_SHORT_", SN_CHECK);
MakeNameEx(0x98CE7, "P2092_OCV_SOLENOID_A2_CIRCUIT_OPEN_", SN_CHECK);
MakeNameEx(0x98CE6, "P2093_OCV_SOLENOID_A2_CIRCUIT_SHORT_", SN_CHECK);
MakeNameEx(0x98CD3, "P2096_POST_CATALYST_TOO_LEAN_B1_", SN_CHECK);
MakeNameEx(0x98CDC, "P2097_POST_CATALYST_TOO_RICH_B1_", SN_CHECK);
MakeNameEx(0x98CD2, "P2101_THROTTLE_ACTUATOR_CIRCUIT_RANGEPERF_", SN_CHECK);
MakeNameEx(0x98CD0, "P2102_THROTTLE_ACTUATOR_CIRCUIT_LOW_", SN_CHECK);
MakeNameEx(0x98CD1, "P2103_THROTTLE_ACTUATOR_CIRCUIT_HIGH_", SN_CHECK);
MakeNameEx(0x98CCC, "P2109_TPS_A_MINIMUM_STOP_PERF_", SN_CHECK);
MakeNameEx(0x98CD9, "P2122_TPS_D_CIRCUIT_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x98CDA, "P2123_TPS_D_CIRCUIT_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x98CD7, "P2127_TPS_E_CIRCUIT_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x98CD8, "P2128_TPS_E_CIRCUIT_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x98CDB, "P2135_TPS_AB_VOLTAGE_", SN_CHECK);
MakeNameEx(0x98CD6, "P2138_TPS_DE_VOLTAGE_", SN_CHECK);
MakeNameEx(0x98D46, "P219A_BANK_1_AFR_IMBALANCE_", SN_CHECK);
MakeNameEx(0x98D34, "P2401_EVAP_LEAK_DETECTION_PUMP_CONTROL_CIRCUIT_LOW_", SN_CHECK);
MakeNameEx(0x98D48, "P2402_EVAP_LEAK_DETECTION_PUMP_CONTROL_CIRCUIT_HIGH_", SN_CHECK);
MakeNameEx(0x98D33, "P2419_EVAP_SWITCHING_VALVE_LOW_", SN_CHECK);
MakeNameEx(0x98D32, "P2420_EVAP_SWITCHING_VALVE_HIGH_", SN_CHECK);
MakeNameEx(0x98D09, "P2431_SECONDARY_AIR_PUMP_CIRCUIT_RANGEPERF_", SN_CHECK);
MakeNameEx(0x98D0B, "P2432_SECONDARY_AIR_PUMP_CIRCUIT_LOW_", SN_CHECK);
MakeNameEx(0x98D0A, "P2433_SECONDARY_AIR_PUMP_CIRCUIT_HIGH_", SN_CHECK);
MakeNameEx(0x98D18, "P2440_SECONDARY_AIR_PUMP_VALVE_1_STUCK_OPEN_", SN_CHECK);
MakeNameEx(0x98D17, "P2441_SECONDARY_AIR_PUMP_VALVE_1_STUCK_CLOSED_", SN_CHECK);
MakeNameEx(0x98D16, "P2442_SECONDARY_AIR_PUMP_VALVE_2_STUCK_OPEN_", SN_CHECK);
MakeNameEx(0x98D15, "P2443_SECONDARY_AIR_PUMP_2_STUCK_CLOSED_", SN_CHECK);
MakeNameEx(0x98D06, "P2444_SECONDARY_AIR_PUMP_1_STUCK_ON_B1_", SN_CHECK);
MakeNameEx(0x98D2D, "U0073_CAN_COMMUNICATION_BUS_A_OFF_", SN_CHECK);
MakeNameEx(0x98D2A, "U0101_CAN_LOST_COMMUNICATION_WITH_TCM_", SN_CHECK);
MakeNameEx(0x98D2C, "U0122_CAN_LOST_COMMUNICATION_WITH_VDC_", SN_CHECK);
MakeNameEx(0x98D28, "U0140_CAN_LOST_COMMUNICATION_WITH_BIU_", SN_CHECK);
MakeNameEx(0x98D29, "U0402_CAN_INVALID_DATA_RECEIVED_FROM_TCM_", SN_CHECK);
MakeNameEx(0x98D2B, "U0416_CAN_INVALID_DATA_RECEIVED_FROM_VDC_", SN_CHECK);
MakeNameEx(0x98D27, "U0422_CAN_INVALID_DATA_RECEIVED_FROM_BIU_", SN_CHECK);
MakeNameEx(0xC1340, "Target_Boost___", SN_CHECK);
referenceAddress = DfirstB(0xC1340);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Boost___", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost___\n");
}

MakeNameEx(0xC12D8, "Target_Boost_X_AXIS__", SN_CHECK);
MakeNameEx(0xC1304, "Target_Boost_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC0CF4, "Target_Boost_Compensation_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xC0CF4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_ECT__\n");
}

MakeNameEx(0xC0C14, "Target_Boost_Compensation_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC0C0C, "Target_Boost_Compensation_1st_Gear__", SN_CHECK);
MakeNameEx(0xC0C08, "Target_Boost_Compensation_1st_Gear_Speed_Disable__", SN_CHECK);
MakeNameEx(0xC0E3C, "Target_Boost_Compensation_IAT___", SN_CHECK);
referenceAddress = DfirstB(0xC0E3C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_IAT___", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_IAT___\n");
}

MakeNameEx(0xC0E24, "Target_Boost_Compensation_IAT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC0EC4, "Target_Boost_Compensation_Atm_Pressure___", SN_CHECK);
referenceAddress = DfirstB(0xC0EC4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_Atm_Pressure___", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_Atm_Pressure___\n");
}

MakeNameEx(0xC0E94, "Target_Boost_Compensation_Atm_Pressure_X_AXIS__", SN_CHECK);
MakeNameEx(0xC0EAC, "Target_Boost_Compensation_Atm_Pressure_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD2444, "Boost_Limit_Fuel_Cut___", SN_CHECK);
referenceAddress = DfirstB(0xD2444);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Boost_Limit_Fuel_Cut___", SN_CHECK);
}
else
{
    Message("No reference to Boost_Limit_Fuel_Cut___\n");
}

MakeNameEx(0xD2414, "Boost_Limit_Fuel_Cut_X_AXIS__", SN_CHECK);
MakeNameEx(0xD242C, "Boost_Limit_Fuel_Cut_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC0BFC, "Boost_Control_Disable_IAM__", SN_CHECK);
MakeNameEx(0xC0BF8, "Boost_Control_Disable_Fine_Correction__", SN_CHECK);
MakeNameEx(0xC0BAD, "Boost_Control_Disable_Delay_Fine_Correction__", SN_CHECK);
MakeNameEx(0xC1150, "Initial_Wastegate_Duty___", SN_CHECK);
referenceAddress = DfirstB(0xC1150);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Initial_Wastegate_Duty___", SN_CHECK);
}
else
{
    Message("No reference to Initial_Wastegate_Duty___\n");
}

MakeNameEx(0xC10E0, "Initial_Wastegate_Duty_X_AXIS__", SN_CHECK);
MakeNameEx(0xC111C, "Initial_Wastegate_Duty_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC0F58, "Max_Wastegate_Duty___", SN_CHECK);
referenceAddress = DfirstB(0xC0F58);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Max_Wastegate_Duty___", SN_CHECK);
}
else
{
    Message("No reference to Max_Wastegate_Duty___\n");
}

MakeNameEx(0xC0EE8, "Max_Wastegate_Duty_X_AXIS__", SN_CHECK);
MakeNameEx(0xC0F24, "Max_Wastegate_Duty_Y_AXIS__", SN_CHECK);
MakeNameEx(0x13F3C, "Max_Wastegate_Duty_Limit_PostCompensation__", SN_CHECK);
MakeNameEx(0xC0C94, "InitialMax_Wastegate_Duty_Compensation_IAT__", SN_CHECK);
referenceAddress = DfirstB(0xC0C94);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_IAT__", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_IAT__\n");
}

MakeNameEx(0xC0C54, "InitialMax_Wastegate_Duty_Compensation_IAT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC0CB4, "InitialMax_Wastegate_Duty_Compensation_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xC0CB4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_ECT__", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_ECT__\n");
}

MakeNameEx(0xC0C14, "InitialMax_Wastegate_Duty_Compensation_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC0E7C, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure__", SN_CHECK);
referenceAddress = DfirstB(0xC0E7C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_Atm_Pressure__", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_Atm_Pressure__\n");
}

MakeNameEx(0xC0E54, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_X_AXIS__", SN_CHECK);
MakeNameEx(0xC0E6C, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC0D28, "Turbo_Dynamics_Proportional__", SN_CHECK);
referenceAddress = DfirstB(0xC0D28);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Proportional__", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Proportional__\n");
}

MakeNameEx(0xC0D04, "Turbo_Dynamics_Proportional_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC0D98, "Turbo_Dynamics_Integral_Positive__", SN_CHECK);
referenceAddress = DfirstB(0xC0D98);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Integral_Positive__", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Integral_Positive__\n");
}

MakeNameEx(0xC0D74, "Turbo_Dynamics_Integral_Positive_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC0D60, "Turbo_Dynamics_Integral_Negative__", SN_CHECK);
referenceAddress = DfirstB(0xC0D60);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Integral_Negative__", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Integral_Negative__\n");
}

MakeNameEx(0xC0D3C, "Turbo_Dynamics_Integral_Negative_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC0CC4, "TD_Proportional_Compensation_IAT__", SN_CHECK);
referenceAddress = DfirstB(0xC0CC4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Proportional_Compensation_IAT__", SN_CHECK);
}
else
{
    Message("No reference to TD_Proportional_Compensation_IAT__\n");
}

MakeNameEx(0xC0C54, "TD_Proportional_Compensation_IAT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC0CE4, "TD_Integral_Positive_Compensation_IAT__", SN_CHECK);
referenceAddress = DfirstB(0xC0CE4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Integral_Positive_Compensation_IAT__", SN_CHECK);
}
else
{
    Message("No reference to TD_Integral_Positive_Compensation_IAT__\n");
}

MakeNameEx(0xC0C54, "TD_Integral_Positive_Compensation_IAT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC0CD4, "TD_Integral_Negative_Compensation_IAT__", SN_CHECK);
referenceAddress = DfirstB(0xC0CD4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Integral_Negative_Compensation_IAT__", SN_CHECK);
}
else
{
    Message("No reference to TD_Integral_Negative_Compensation_IAT__\n");
}

MakeNameEx(0xC0C54, "TD_Integral_Negative_Compensation_IAT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC0BE8, "TD_Activation_Thresholds_RPM__", SN_CHECK);
MakeNameEx(0xC0BD4, "TD_Activation_Thresholds_Target_Boost___", SN_CHECK);
MakeNameEx(0xC0BF0, "TD_Integral_Cumulative_Range_WGDC_Correction__", SN_CHECK);
MakeNameEx(0xC0BDC, "TD_Integral_Negative_Activation_Boost_Error__", SN_CHECK);
MakeNameEx(0xC0BE0, "TD_Integral_Positive_Activation_Boost_Error__", SN_CHECK);
MakeNameEx(0xC0BE4, "TD_Integral_Negative_Activation_Wastegate_Duty__", SN_CHECK);
MakeNameEx(0xD86E8, "Manifold_Pressure_Sensor_Scaling___", SN_CHECK);
MakeNameEx(0xD869A, "Manifold_Pressure_Sensor_Limits_CEL__", SN_CHECK);
MakeNameEx(0xD8651, "Manifold_Pressure_Sensor_CEL_Delays__", SN_CHECK);
MakeNameEx(0xCFC9C, "Primary_Open_Loop_Fueling__", SN_CHECK);
referenceAddress = DfirstB(0xCFC9C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling__", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling__\n");
}

MakeNameEx(0xCFC10, "Primary_Open_Loop_Fueling_X_AXIS__", SN_CHECK);
MakeNameEx(0xCFC54, "Primary_Open_Loop_Fueling_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCFE5C, "Primary_Open_Loop_Fueling_Failsafe__", SN_CHECK);
referenceAddress = DfirstB(0xCFE5C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Failsafe__", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Failsafe__\n");
}

MakeNameEx(0xCFDD0, "Primary_Open_Loop_Fueling_Failsafe_X_AXIS__", SN_CHECK);
MakeNameEx(0xCFE14, "Primary_Open_Loop_Fueling_Failsafe_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCC0DC, "Primary_Open_Loop_Fuel_Map_Switch_IAM__", SN_CHECK);
MakeNameEx(0xCC0E0, "Minimum_Active_Primary_Open_Loop_Enrichment__", SN_CHECK);
MakeNameEx(0xCCD0C, "Minimum_Primary_Open_Loop_Enrichment_Throttle__", SN_CHECK);
referenceAddress = DfirstB(0xCCD0C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Throttle__", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Throttle__\n");
}

MakeNameEx(0xCCCF4, "Minimum_Primary_Open_Loop_Enrichment_Throttle_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCCD2C, "Minimum_Primary_Open_Loop_Enrichment_Accelerator__", SN_CHECK);
referenceAddress = DfirstB(0xCCD2C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Accelerator__", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Accelerator__\n");
}

MakeNameEx(0xCCD14, "Minimum_Primary_Open_Loop_Enrichment_Accelerator_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCE638, "Primary_Open_Loop_Fueling_Compensation_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xCE638);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_ECT__\n");
}

MakeNameEx(0xCC590, "Primary_Open_Loop_Fueling_Compensation_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCCC9C, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation___", SN_CHECK);
referenceAddress = DfirstB(0xCCC9C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_Timing_Compensation___", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_Timing_Compensation___\n");
}

MakeNameEx(0xCCC84, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD89B0, "Front_Oxygen_Sensor_Scaling__", SN_CHECK);
referenceAddress = DfirstB(0xD89B0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Scaling__", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Scaling__\n");
}

MakeNameEx(0xD897C, "Front_Oxygen_Sensor_Scaling_Y_AXIS__", SN_CHECK);
MakeNameEx(0x21B30, "Front_Oxygen_Sensor_Rich_Limit__", SN_CHECK);
MakeNameEx(0xC36C0, "Front_Oxygen_Sensor_Compensation_Atm_Pressure__", SN_CHECK);
referenceAddress = DfirstB(0xC36C0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Compensation_Atm_Pressure__", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Compensation_Atm_Pressure__\n");
}

MakeNameEx(0xC36B0, "Front_Oxygen_Sensor_Compensation_Atm_Pressure_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD143C, "CL_Fueling_Target_Compensation_A_Load__", SN_CHECK);
referenceAddress = DfirstB(0xD143C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_A_Load__", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_A_Load__\n");
}

MakeNameEx(0xD13E8, "CL_Fueling_Target_Compensation_A_Load_X_AXIS__", SN_CHECK);
MakeNameEx(0xD1414, "CL_Fueling_Target_Compensation_A_Load_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD16AC, "CL_Fueling_Target_Compensation_B_Load__", SN_CHECK);
referenceAddress = DfirstB(0xD16AC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_B_Load__", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_B_Load__\n");
}

MakeNameEx(0xD1648, "CL_Fueling_Target_Compensation_B_Load_X_AXIS__", SN_CHECK);
MakeNameEx(0xD167C, "CL_Fueling_Target_Compensation_B_Load_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD131C, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xD131C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Imm_Cruise_ECT__", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Imm_Cruise_ECT__\n");
}

MakeNameEx(0xCC590, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_X_AXIS__", SN_CHECK);
MakeNameEx(0xD1310, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD1388, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xD1388);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Imm_NonCruise_ECT__", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Imm_NonCruise_ECT__\n");
}

MakeNameEx(0xCC590, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_X_AXIS__", SN_CHECK);
MakeNameEx(0xD137C, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCBF0C, "CL_Fueling_Target_Compensation_ECT_Disable__", SN_CHECK);
MakeNameEx(0xCBBE2, "CL_to_OL_Delay___", SN_CHECK);
MakeNameEx(0xCBBDC, "CL_to_OL_DelaySwitch_SIDRIVE_Intelligent__", SN_CHECK);
MakeNameEx(0xCCCE4, "CL_to_OL_Transition_with_Delay_Throttle__", SN_CHECK);
referenceAddress = DfirstB(0xCCCE4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Throttle__", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Throttle__\n");
}

MakeNameEx(0xCCCA4, "CL_to_OL_Transition_with_Delay_Throttle_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCC0E8, "CL_to_OL_Transition_with_Delay_Throttle_Hysteresis__", SN_CHECK);
MakeNameEx(0xCE564, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width__", SN_CHECK);
referenceAddress = DfirstB(0xCE564);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Base_Pulse_Width__", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Base_Pulse_Width__\n");
}

MakeNameEx(0xCE524, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCC0E4, "CL_to_OL_Transition_with_Delay_BPW_Hysteresis__", SN_CHECK);
MakeNameEx(0xCE5AC, "CL_to_OL_Transition_Counter_Step_Value_MAF__", SN_CHECK);
referenceAddress = DfirstB(0xCE5AC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_Counter_Step_Value_MAF__", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_Counter_Step_Value_MAF__\n");
}

MakeNameEx(0xCE584, "CL_to_OL_Transition_Counter_Step_Value_MAF_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCC148, "CL_Delay_Maximum_Throttle__", SN_CHECK);
MakeNameEx(0xCC164, "CL_Delay_Maximum_Vehicle_Speed__", SN_CHECK);
MakeNameEx(0xCC0EC, "CL_Delay_Minimum_ECT__", SN_CHECK);
MakeNameEx(0xCC174, "CL_Delay_Maximum_Engine_Load__", SN_CHECK);
MakeNameEx(0xCBBDA, "CL_Delay_Engine_Load_Counter_Threshold__", SN_CHECK);
MakeNameEx(0xCC0F0, "CL_Delay_Maximum_Engine_Speed_Per_Gear__", SN_CHECK);
MakeNameEx(0xCC118, "CL_Delay_Maximum_Engine_Speed_Neutral__", SN_CHECK);
MakeNameEx(0xD0FD8, "Injector_Latency___", SN_CHECK);
referenceAddress = DfirstB(0xD0FD8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Injector_Latency___", SN_CHECK);
}
else
{
    Message("No reference to Injector_Latency___\n");
}

MakeNameEx(0xD0FB8, "Injector_Latency_X_AXIS__", SN_CHECK);
MakeNameEx(0xD0FCC, "Injector_Latency_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCBD7C, "Injector_Flow_Scaling__", SN_CHECK);
MakeNameEx(0xD0754, "Per_Injector_Pulse_Width_Compensation_A__", SN_CHECK);
referenceAddress = DfirstB(0xD0754);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_A__", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_A__\n");
}

MakeNameEx(0xD06CC, "Per_Injector_Pulse_Width_Compensation_A_X_AXIS__", SN_CHECK);
MakeNameEx(0xD0710, "Per_Injector_Pulse_Width_Compensation_A_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD0900, "Per_Injector_Pulse_Width_Compensation_B__", SN_CHECK);
referenceAddress = DfirstB(0xD0900);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_B__", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_B__\n");
}

MakeNameEx(0xD0878, "Per_Injector_Pulse_Width_Compensation_B_X_AXIS__", SN_CHECK);
MakeNameEx(0xD08BC, "Per_Injector_Pulse_Width_Compensation_B_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD0AAC, "Per_Injector_Pulse_Width_Compensation_C__", SN_CHECK);
referenceAddress = DfirstB(0xD0AAC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_C__", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_C__\n");
}

MakeNameEx(0xD0A24, "Per_Injector_Pulse_Width_Compensation_C_X_AXIS__", SN_CHECK);
MakeNameEx(0xD0A68, "Per_Injector_Pulse_Width_Compensation_C_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD0C58, "Per_Injector_Pulse_Width_Compensation_D__", SN_CHECK);
referenceAddress = DfirstB(0xD0C58);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_D__", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_D__\n");
}

MakeNameEx(0xD0BD0, "Per_Injector_Pulse_Width_Compensation_D_X_AXIS__", SN_CHECK);
MakeNameEx(0xD0C14, "Per_Injector_Pulse_Width_Compensation_D_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCD252, "Cranking_Fuel_Injector_Pulse_Width_A_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xCD252);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_A_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_A_ECT__\n");
}

MakeNameEx(0xCC590, "Cranking_Fuel_Injector_Pulse_Width_A_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCD272, "Cranking_Fuel_Injector_Pulse_Width_B_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xCD272);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_B_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_B_ECT__\n");
}

MakeNameEx(0xCC590, "Cranking_Fuel_Injector_Pulse_Width_B_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCD292, "Cranking_Fuel_Injector_Pulse_Width_C_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xCD292);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_C_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_C_ECT__\n");
}

MakeNameEx(0xCC590, "Cranking_Fuel_Injector_Pulse_Width_C_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCD2B2, "Cranking_Fuel_Injector_Pulse_Width_D_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xCD2B2);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_D_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_D_ECT__\n");
}

MakeNameEx(0xCC590, "Cranking_Fuel_Injector_Pulse_Width_D_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCD2D2, "Cranking_Fuel_Injector_Pulse_Width_E_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xCD2D2);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_E_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_E_ECT__\n");
}

MakeNameEx(0xCC590, "Cranking_Fuel_Injector_Pulse_Width_E_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCD2F2, "Cranking_Fuel_Injector_Pulse_Width_F_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xCD2F2);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_F_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_F_ECT__\n");
}

MakeNameEx(0xCC590, "Cranking_Fuel_Injector_Pulse_Width_F_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCF670, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM__", SN_CHECK);
referenceAddress = DfirstB(0xCF670);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM__", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM__\n");
}

MakeNameEx(0xCF640, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_X_AXIS__", SN_CHECK);
MakeNameEx(0xCF654, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCF61C, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM__", SN_CHECK);
referenceAddress = DfirstB(0xCF61C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM__", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM__\n");
}

MakeNameEx(0xCF5EC, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_X_AXIS__", SN_CHECK);
MakeNameEx(0xCF600, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCC7D4, "Cranking_Fuel_IPW_Compensation_MAP__", SN_CHECK);
referenceAddress = DfirstB(0xCC7D4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_MAP__", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_MAP__\n");
}

MakeNameEx(0xCC7AC, "Cranking_Fuel_IPW_Compensation_MAP_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCC808, "Cranking_Fuel_IPW_Compensation_Accelerator__", SN_CHECK);
referenceAddress = DfirstB(0xCC808);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Accelerator__", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Accelerator__\n");
}

MakeNameEx(0xCC7E0, "Cranking_Fuel_IPW_Compensation_Accelerator_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCC828, "Cranking_Fuel_IPW_Compensation_IAT__", SN_CHECK);
referenceAddress = DfirstB(0xCC828);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_IAT__", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_IAT__\n");
}

MakeNameEx(0xCC814, "Cranking_Fuel_IPW_Compensation_IAT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCECBC, "Throttle_Tipin_Enrichment_A__", SN_CHECK);
referenceAddress = DfirstB(0xCECBC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment_A__", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment_A__\n");
}

MakeNameEx(0xCEC74, "Throttle_Tipin_Enrichment_A_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCED28, "Throttle_Tipin_Enrichment_B__", SN_CHECK);
referenceAddress = DfirstB(0xCED28);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment_B__", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment_B__\n");
}

MakeNameEx(0xCECE0, "Throttle_Tipin_Enrichment_B_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCC410, "Minimum_Tipin_Enrichment_Activation__", SN_CHECK);
MakeNameEx(0xCC40C, "Minimum_Tipin_Enrichment_Activation_Throttle__", SN_CHECK);
MakeNameEx(0xCD0B8, "Tipin_Enrichment_Compensation_Boost_Error__", SN_CHECK);
referenceAddress = DfirstB(0xCD0B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_Boost_Error__", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_Boost_Error__\n");
}

MakeNameEx(0xCD094, "Tipin_Enrichment_Compensation_Boost_Error_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCD084, "Tipin_Enrichment_Compensation_RPM__", SN_CHECK);
referenceAddress = DfirstB(0xCD084);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_RPM__", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_RPM__\n");
}

MakeNameEx(0xCD044, "Tipin_Enrichment_Compensation_RPM_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCD0C1, "Tipin_Enrichment_Compensation_A_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xCD0C1);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_A_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_A_ECT__\n");
}

MakeNameEx(0xCC590, "Tipin_Enrichment_Compensation_A_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCED4C, "Tipin_Enrichment_Compensation_B_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xCED4C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_B_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_B_ECT__\n");
}

MakeNameEx(0xCC590, "Tipin_Enrichment_Compensation_B_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCED6C, "Tipin_Enrichment_Compensation_C_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xCED6C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_C_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_C_ECT__\n");
}

MakeNameEx(0xCC590, "Tipin_Enrichment_Compensation_C_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCEDAC, "Tipin_Enrichment_Compensation_D_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xCEDAC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_D_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_D_ECT__\n");
}

MakeNameEx(0xCC5D0, "Tipin_Enrichment_Compensation_D_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCC414, "Tipin_Enrichment_Compensation_D_ECT_Activation__", SN_CHECK);
MakeNameEx(0xCD0D1, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xCD0D1);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT__\n");
}

MakeNameEx(0xCC590, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCD0E1, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xCD0E1);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT__\n");
}

MakeNameEx(0xCC590, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCBB88, "Tipin_Enrichment_Applied_Counter_Reset__", SN_CHECK);
MakeNameEx(0xCEDCC, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xCEDCC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT__\n");
}

MakeNameEx(0xCC590, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCEDEC, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xCEDEC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT__\n");
}

MakeNameEx(0xCC590, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCBB89, "Tipin_Throttle_Cumulative_Reset__", SN_CHECK);
MakeNameEx(0xCF8C8, "Min_Primary_Base_Enrichment_1_Cruise__", SN_CHECK);
referenceAddress = DfirstB(0xCF8C8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_Cruise__", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_Cruise__\n");
}

MakeNameEx(0xCC590, "Min_Primary_Base_Enrichment_1_Cruise_X_AXIS__", SN_CHECK);
MakeNameEx(0xCF8A4, "Min_Primary_Base_Enrichment_1_Cruise_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCF824, "Min_Primary_Base_Enrichment_1_NonCruise__", SN_CHECK);
referenceAddress = DfirstB(0xCF824);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonCruise__", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonCruise__\n");
}

MakeNameEx(0xCC590, "Min_Primary_Base_Enrichment_1_NonCruise_X_AXIS__", SN_CHECK);
MakeNameEx(0xCF804, "Min_Primary_Base_Enrichment_1_NonCruise_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCC88D, "Min_Primary_Base_Enrichment_1_NonPrimary_OL___", SN_CHECK);
referenceAddress = DfirstB(0xCC88D);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonPrimary_OL___", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonPrimary_OL___\n");
}

MakeNameEx(0xCC590, "Min_Primary_Base_Enrichment_1_NonPrimary_OL_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCBFD4, "AF_Learning_1_Limits__", SN_CHECK);
MakeNameEx(0xCBFE4, "AF_Learning_1_Airflow_Ranges__", SN_CHECK);
MakeNameEx(0xC30D8, "MAF_Limit_Maximum__", SN_CHECK);
MakeNameEx(0xD88A4, "MAF_Sensor_Scaling__", SN_CHECK);
referenceAddress = DfirstB(0xD88A4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_MAF_Sensor_Scaling__", SN_CHECK);
}
else
{
    Message("No reference to MAF_Sensor_Scaling__\n");
}

MakeNameEx(0xD87CC, "MAF_Sensor_Scaling_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC3B28, "MAF_Compensation_IAT__", SN_CHECK);
referenceAddress = DfirstB(0xC3B28);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_MAF_Compensation_IAT__", SN_CHECK);
}
else
{
    Message("No reference to MAF_Compensation_IAT__\n");
}

MakeNameEx(0xC3AF4, "MAF_Compensation_IAT_X_AXIS__", SN_CHECK);
MakeNameEx(0xC3B08, "MAF_Compensation_IAT_Y_AXIS__", SN_CHECK);
MakeNameEx(0x20208, "Engine_Load_Limit_A_Maximum__", SN_CHECK);
MakeNameEx(0xC35C0, "Engine_Load_Limit_B_Maximum_RPM__", SN_CHECK);
referenceAddress = DfirstB(0xC35C0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Limit_B_Maximum_RPM__", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Limit_B_Maximum_RPM__\n");
}

MakeNameEx(0xC35B8, "Engine_Load_Limit_B_Maximum_RPM_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC3BB4, "Engine_Load_Compensation_Cruise_MP__", SN_CHECK);
referenceAddress = DfirstB(0xC3BB4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Compensation_Cruise_MP__", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Compensation_Cruise_MP__\n");
}

MakeNameEx(0xC3B50, "Engine_Load_Compensation_Cruise_MP_X_AXIS__", SN_CHECK);
MakeNameEx(0xC3B7C, "Engine_Load_Compensation_Cruise_MP_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC3CB4, "Engine_Load_Compensation_NonCruise_MP__", SN_CHECK);
referenceAddress = DfirstB(0xC3CB4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Compensation_NonCruise_MP__", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Compensation_NonCruise_MP__\n");
}

MakeNameEx(0xC3C50, "Engine_Load_Compensation_NonCruise_MP_X_AXIS__", SN_CHECK);
MakeNameEx(0xC3C7C, "Engine_Load_Compensation_NonCruise_MP_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD4488, "Base_Timing_Primary_Cruise__", SN_CHECK);
referenceAddress = DfirstB(0xD4488);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Primary_Cruise__", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Primary_Cruise__\n");
}

MakeNameEx(0xD43FC, "Base_Timing_Primary_Cruise_X_AXIS__", SN_CHECK);
MakeNameEx(0xD4440, "Base_Timing_Primary_Cruise_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD4808, "Base_Timing_Reference_Cruise_AVCS_related__", SN_CHECK);
referenceAddress = DfirstB(0xD4808);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Reference_Cruise_AVCS_related__", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Reference_Cruise_AVCS_related__\n");
}

MakeNameEx(0xD477C, "Base_Timing_Reference_Cruise_AVCS_related_X_AXIS__", SN_CHECK);
MakeNameEx(0xD47C0, "Base_Timing_Reference_Cruise_AVCS_related_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD4648, "Base_Timing_Primary_NonCruise__", SN_CHECK);
referenceAddress = DfirstB(0xD4648);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Primary_NonCruise__", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Primary_NonCruise__\n");
}

MakeNameEx(0xD45BC, "Base_Timing_Primary_NonCruise_X_AXIS__", SN_CHECK);
MakeNameEx(0xD4600, "Base_Timing_Primary_NonCruise_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD49C8, "Base_Timing_Reference_NonCruise_AVCS_related__", SN_CHECK);
referenceAddress = DfirstB(0xD49C8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Reference_NonCruise_AVCS_related__", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Reference_NonCruise_AVCS_related__\n");
}

MakeNameEx(0xD493C, "Base_Timing_Reference_NonCruise_AVCS_related_X_AXIS__", SN_CHECK);
MakeNameEx(0xD4980, "Base_Timing_Reference_NonCruise_AVCS_related_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD3022, "Base_Timing_Idle_A_InGear__", SN_CHECK);
referenceAddress = DfirstB(0xD3022);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_A_InGear__", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_A_InGear__\n");
}

MakeNameEx(0xD2E08, "Base_Timing_Idle_A_InGear_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD3032, "Base_Timing_Idle_B_InGear__", SN_CHECK);
referenceAddress = DfirstB(0xD3032);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_B_InGear__", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_B_InGear__\n");
}

MakeNameEx(0xD2E08, "Base_Timing_Idle_B_InGear_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD3042, "Base_Timing_Idle_A_Neutral__", SN_CHECK);
referenceAddress = DfirstB(0xD3042);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_A_Neutral__", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_A_Neutral__\n");
}

MakeNameEx(0xD2E08, "Base_Timing_Idle_A_Neutral_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD3052, "Base_Timing_Idle_B_Neutral__", SN_CHECK);
referenceAddress = DfirstB(0xD3052);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_B_Neutral__", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_B_Neutral__\n");
}

MakeNameEx(0xD2E08, "Base_Timing_Idle_B_Neutral_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD3019, "Base_Timing_Idle_Minimum__", SN_CHECK);
referenceAddress = DfirstB(0xD3019);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_Minimum__", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_Minimum__\n");
}

MakeNameEx(0xD2E88, "Base_Timing_Idle_Minimum_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD29B4, "Base_Timing_Idle_Minimum_Vehicle_Speed_Enable__", SN_CHECK);
MakeNameEx(0xD5570, "Knock_Correction_Advance_Max_Cruise__", SN_CHECK);
referenceAddress = DfirstB(0xD5570);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_Cruise__", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_Cruise__\n");
}

MakeNameEx(0xD54E4, "Knock_Correction_Advance_Max_Cruise_X_AXIS__", SN_CHECK);
MakeNameEx(0xD5528, "Knock_Correction_Advance_Max_Cruise_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD5730, "Knock_Correction_Advance_Max_NonCruise__", SN_CHECK);
referenceAddress = DfirstB(0xD5730);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_NonCruise__", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_NonCruise__\n");
}

MakeNameEx(0xD56A4, "Knock_Correction_Advance_Max_NonCruise_X_AXIS__", SN_CHECK);
MakeNameEx(0xD56E8, "Knock_Correction_Advance_Max_NonCruise_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD3104, "Timing_Compensation_A_IAT__", SN_CHECK);
referenceAddress = DfirstB(0xD3104);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_A_IAT__", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_A_IAT__\n");
}

MakeNameEx(0xD30C4, "Timing_Compensation_A_IAT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD4B3C, "Timing_Compensation_A_IAT_Activation__", SN_CHECK);
referenceAddress = DfirstB(0xD4B3C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_A_IAT_Activation__", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_A_IAT_Activation__\n");
}

MakeNameEx(0xD4AFC, "Timing_Compensation_A_IAT_Activation_X_AXIS__", SN_CHECK);
MakeNameEx(0xD4B1C, "Timing_Compensation_A_IAT_Activation_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD36D4, "Timing_Compensation_B_IAT__", SN_CHECK);
referenceAddress = DfirstB(0xD36D4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_B_IAT__", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_B_IAT__\n");
}

MakeNameEx(0xD3694, "Timing_Compensation_B_IAT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD2B70, "Timing_Compensation_B_IAT_IAM_Activation__", SN_CHECK);
MakeNameEx(0xD2B54, "Timing_Compensation_B_IAT_Max_Additive__", SN_CHECK);
MakeNameEx(0xD30A2, "Timing_Compensation_Imm_Cruise_A_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xD30A2);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_Cruise_A_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_Cruise_A_ECT__\n");
}

MakeNameEx(0xD2E08, "Timing_Compensation_Imm_Cruise_A_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD30B2, "Timing_Compensation_Imm_Cruise_B_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xD30B2);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_Cruise_B_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_Cruise_B_ECT__\n");
}

MakeNameEx(0xD2E08, "Timing_Compensation_Imm_Cruise_B_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD3082, "Timing_Compensation_Imm_NonCruise_A_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xD3082);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_NonCruise_A_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_NonCruise_A_ECT__\n");
}

MakeNameEx(0xD2E08, "Timing_Compensation_Imm_NonCruise_A_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD3092, "Timing_Compensation_Imm_NonCruise_B_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xD3092);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_NonCruise_B_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_NonCruise_B_ECT__\n");
}

MakeNameEx(0xD2E08, "Timing_Compensation_Imm_NonCruise_B_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD511C, "Timing_Compensation_Per_Cylinder_A__", SN_CHECK);
referenceAddress = DfirstB(0xD511C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_A__", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_A__\n");
}

MakeNameEx(0xD50D0, "Timing_Compensation_Per_Cylinder_A_X_AXIS__", SN_CHECK);
MakeNameEx(0xD5108, "Timing_Compensation_Per_Cylinder_A_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD51B0, "Timing_Compensation_Per_Cylinder_B__", SN_CHECK);
referenceAddress = DfirstB(0xD51B0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_B__", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_B__\n");
}

MakeNameEx(0xD5164, "Timing_Compensation_Per_Cylinder_B_X_AXIS__", SN_CHECK);
MakeNameEx(0xD519C, "Timing_Compensation_Per_Cylinder_B_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD5244, "Timing_Compensation_Per_Cylinder_C__", SN_CHECK);
referenceAddress = DfirstB(0xD5244);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_C__", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_C__\n");
}

MakeNameEx(0xD51F8, "Timing_Compensation_Per_Cylinder_C_X_AXIS__", SN_CHECK);
MakeNameEx(0xD5230, "Timing_Compensation_Per_Cylinder_C_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD52DC, "Timing_Compensation_Per_Cylinder_D__", SN_CHECK);
referenceAddress = DfirstB(0xD52DC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_D__", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_D__\n");
}

MakeNameEx(0xD528C, "Timing_Compensation_Per_Cylinder_D_X_AXIS__", SN_CHECK);
MakeNameEx(0xD52C4, "Timing_Compensation_Per_Cylinder_D_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD2C18, "Timing_Comp_Minimum_Load_Per_Cylinder__", SN_CHECK);
MakeNameEx(0xD2C14, "Timing_Comp_Maximum_RPM_Per_Cylinder__", SN_CHECK);
MakeNameEx(0xD2C1C, "Timing_Comp_Minimum_Coolant_Temp_Per_Cylinder__", SN_CHECK);
MakeNameEx(0xD2C28, "Feedback_Correction_Range_RPM__", SN_CHECK);
MakeNameEx(0xD2C20, "Feedback_Correction_Minimum_Load__", SN_CHECK);
MakeNameEx(0xD2C48, "Feedback_Correction_Retard_Value__", SN_CHECK);
MakeNameEx(0xD2C44, "Feedback_Correction_Retard_Limit__", SN_CHECK);
MakeNameEx(0xD2C4C, "Feedback_Correction_Negative_Advance_Value__", SN_CHECK);
MakeNameEx(0xD28B8, "Feedback_Correction_Negative_Advance_Delay__", SN_CHECK);
MakeNameEx(0xD2C54, "Extended_Feedback_Correction_High_RPM_Compensation__", SN_CHECK);
MakeNameEx(0xD2DE8, "Fine_Correction_Range_RPM__", SN_CHECK);
MakeNameEx(0xD2DF8, "Fine_Correction_Range_Load__", SN_CHECK);
MakeNameEx(0xD2D88, "Fine_Correction_Rows_RPM__", SN_CHECK);
MakeNameEx(0xD2DA4, "Fine_Correction_Columns_Load__", SN_CHECK);
MakeNameEx(0xD2DCC, "Fine_Correction_Retard_Value__", SN_CHECK);
MakeNameEx(0xD2DC8, "Fine_Correction_Retard_Limit__", SN_CHECK);
MakeNameEx(0xD2DC4, "Fine_Correction_Advance_Value__", SN_CHECK);
MakeNameEx(0xD2DC0, "Fine_Correction_Advance_Limit__", SN_CHECK);
MakeNameEx(0xD28C8, "Fine_Correction_Advance_Delay__", SN_CHECK);
MakeNameEx(0xD2D38, "Rough_Correction_Range_RPM__", SN_CHECK);
MakeNameEx(0xD2D48, "Rough_Correction_Range_Load__", SN_CHECK);
MakeNameEx(0xD2D58, "Rough_Correction_Minimum_KC_Advance_Map_Value__", SN_CHECK);
MakeNameEx(0xD3A00, "Rough_Correction_Learning_Delay_Increasing___", SN_CHECK);
referenceAddress = DfirstB(0xD3A00);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Rough_Correction_Learning_Delay_Increasing___", SN_CHECK);
}
else
{
    Message("No reference to Rough_Correction_Learning_Delay_Increasing___\n");
}

MakeNameEx(0xD39D8, "Rough_Correction_Learning_Delay_Increasing_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD2D5C, "Advance_Multiplier_Initial__", SN_CHECK);
MakeNameEx(0xD2D60, "Advance_Multiplier_Step_Value__", SN_CHECK);
MakeNameEx(0xDA574, "Intake_Cam_Advance_Angle_Cruise_AVCS__", SN_CHECK);
referenceAddress = DfirstB(0xDA574);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_Cruise_AVCS__", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_Cruise_AVCS__\n");
}

MakeNameEx(0xDA4EC, "Intake_Cam_Advance_Angle_Cruise_AVCS_X_AXIS__", SN_CHECK);
MakeNameEx(0xDA534, "Intake_Cam_Advance_Angle_Cruise_AVCS_Y_AXIS__", SN_CHECK);
MakeNameEx(0xDA83C, "Intake_Cam_Advance_Angle_NonCruise_AVCS__", SN_CHECK);
referenceAddress = DfirstB(0xDA83C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_NonCruise_AVCS__", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_NonCruise_AVCS__\n");
}

MakeNameEx(0xDA7B4, "Intake_Cam_Advance_Angle_NonCruise_AVCS_X_AXIS__", SN_CHECK);
MakeNameEx(0xDA7FC, "Intake_Cam_Advance_Angle_NonCruise_AVCS_Y_AXIS__", SN_CHECK);
MakeNameEx(0xF9EE0, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport__", SN_CHECK);
referenceAddress = DfirstB(0xF9EE0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport__", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport__\n");
}

MakeNameEx(0xF9E60, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_X_AXIS__", SN_CHECK);
MakeNameEx(0xF9E9C, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Y_AXIS__", SN_CHECK);
MakeNameEx(0xFA160, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp__", SN_CHECK);
referenceAddress = DfirstB(0xFA160);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp__", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp__\n");
}

MakeNameEx(0xFA0E0, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp_X_AXIS__", SN_CHECK);
MakeNameEx(0xFA11C, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp_Y_AXIS__", SN_CHECK);
MakeNameEx(0xFA3E0, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent__", SN_CHECK);
referenceAddress = DfirstB(0xFA3E0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent__", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent__\n");
}

MakeNameEx(0xFA360, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent_X_AXIS__", SN_CHECK);
MakeNameEx(0xFA39C, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent_Y_AXIS__", SN_CHECK);
MakeNameEx(0xF9054, "Requested_Torque_Base_RPM__", SN_CHECK);
referenceAddress = DfirstB(0xF9054);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Base_RPM__", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Base_RPM__\n");
}

MakeNameEx(0xF9014, "Requested_Torque_Base_RPM_Y_AXIS__", SN_CHECK);
MakeNameEx(0xF9504, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio__", SN_CHECK);
referenceAddress = DfirstB(0xF9504);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio__", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio__\n");
}

MakeNameEx(0xF9484, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_X_AXIS__", SN_CHECK);
MakeNameEx(0xF94C4, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_Y_AXIS__", SN_CHECK);
MakeNameEx(0xF9784, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio__", SN_CHECK);
referenceAddress = DfirstB(0xF9784);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio__", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio__\n");
}

MakeNameEx(0xF9704, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_X_AXIS__", SN_CHECK);
MakeNameEx(0xF9744, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_Y_AXIS__", SN_CHECK);
MakeNameEx(0xF9A04, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio__", SN_CHECK);
referenceAddress = DfirstB(0xF9A04);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio__", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio__\n");
}

MakeNameEx(0xF9984, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_X_AXIS__", SN_CHECK);
MakeNameEx(0xF99C4, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_Y_AXIS__", SN_CHECK);
MakeNameEx(0xF9C88, "Requested_Torque_Limit_A_Per_GearEngine_Speed__", SN_CHECK);
referenceAddress = DfirstB(0xF9C88);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Limit_A_Per_GearEngine_Speed__", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Limit_A_Per_GearEngine_Speed__\n");
}

MakeNameEx(0xF9C30, "Requested_Torque_Limit_A_Per_GearEngine_Speed_X_AXIS__", SN_CHECK);
MakeNameEx(0xF9C70, "Requested_Torque_Limit_A_Per_GearEngine_Speed_Y_AXIS__", SN_CHECK);
MakeNameEx(0xF9DA0, "Requested_Torque_Limit_B_Per_GearEngine_Speed__", SN_CHECK);
referenceAddress = DfirstB(0xF9DA0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Limit_B_Per_GearEngine_Speed__", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Limit_B_Per_GearEngine_Speed__\n");
}

MakeNameEx(0xF9D48, "Requested_Torque_Limit_B_Per_GearEngine_Speed_X_AXIS__", SN_CHECK);
MakeNameEx(0xF9D88, "Requested_Torque_Limit_B_Per_GearEngine_Speed_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCC46C, "Rev_Limit_Fuel_Cut__", SN_CHECK);
MakeNameEx(0xCC484, "Rev_Limit_Fuel_Resume_Boost__", SN_CHECK);
MakeNameEx(0xCC48C, "Speed_Limiting_Enable_Fuel_Cut__", SN_CHECK);
MakeNameEx(0xCC494, "Speed_Limiting_Disable_Fuel_Cut__", SN_CHECK);
MakeNameEx(0xF8E48, "Speed_Limiting_A_Throttle_SIDRIVE_SportSport_Sharp__", SN_CHECK);
MakeNameEx(0xF8E60, "Speed_Limiting_B_Throttle_SIDRIVE_SportSport_Sharp__", SN_CHECK);
MakeNameEx(0xF8E54, "Speed_Limiting_Throttle_SIDRIVE_Intelligent__", SN_CHECK);
MakeNameEx(0xD8C2C, "Fuel_Temp_Sensor_Scaling__", SN_CHECK);
referenceAddress = DfirstB(0xD8C2C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Fuel_Temp_Sensor_Scaling__", SN_CHECK);
}
else
{
    Message("No reference to Fuel_Temp_Sensor_Scaling__\n");
}

MakeNameEx(0xD8BB4, "Fuel_Temp_Sensor_Scaling_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD8B3C, "Intake_Temp_Sensor_Scaling__", SN_CHECK);
referenceAddress = DfirstB(0xD8B3C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Intake_Temp_Sensor_Scaling__", SN_CHECK);
}
else
{
    Message("No reference to Intake_Temp_Sensor_Scaling__\n");
}

MakeNameEx(0xD8AC4, "Intake_Temp_Sensor_Scaling_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD8A54, "Coolant_Temp_Sensor_Scaling__", SN_CHECK);
referenceAddress = DfirstB(0xD8A54);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Coolant_Temp_Sensor_Scaling__", SN_CHECK);
}
else
{
    Message("No reference to Coolant_Temp_Sensor_Scaling__\n");
}

MakeNameEx(0xD89E4, "Coolant_Temp_Sensor_Scaling_Y_AXIS__", SN_CHECK);
MakeNameEx(0x4B45C, "Fuel_Pump_Duty__", SN_CHECK);
MakeNameEx(0xD8F34, "Radiator_Fan_Modes_A_ECT__", SN_CHECK);
MakeNameEx(0xD8F44, "Radiator_Fan_Modes_B_ECT__", SN_CHECK);
MakeNameEx(0xD8F54, "Radiator_Fan_Modes_Veh_Speed__", SN_CHECK);
MakeNameEx(0xC344C, "Gear_Determination_Thresholds_A__", SN_CHECK);
MakeNameEx(0xC3460, "Gear_Determination_Thresholds_B__", SN_CHECK);
MakeNameEx(0xC3474, "Gear_Determination_Thresholds_C__", SN_CHECK);
MakeNameEx(0xD6B6C, "Idle_Speed_Target_A__", SN_CHECK);
referenceAddress = DfirstB(0xD6B6C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_A__", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_A__\n");
}

MakeNameEx(0xD6400, "Idle_Speed_Target_A_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD6BAC, "Idle_Speed_Target_B__", SN_CHECK);
referenceAddress = DfirstB(0xD6BAC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_B__", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_B__\n");
}

MakeNameEx(0xD6400, "Idle_Speed_Target_B_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD6BEC, "Idle_Speed_Target_C__", SN_CHECK);
referenceAddress = DfirstB(0xD6BEC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_C__", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_C__\n");
}

MakeNameEx(0xD6400, "Idle_Speed_Target_C_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD6C8C, "Idle_Speed_Target_D__", SN_CHECK);
referenceAddress = DfirstB(0xD6C8C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_D__", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_D__\n");
}

MakeNameEx(0xD6400, "Idle_Speed_Target_D_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD8DE8, "Ignition_Dwell__", SN_CHECK);
referenceAddress = DfirstB(0xD8DE8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Ignition_Dwell__", SN_CHECK);
}
else
{
    Message("No reference to Ignition_Dwell__\n");
}

MakeNameEx(0xD8D94, "Ignition_Dwell_X_AXIS__", SN_CHECK);
MakeNameEx(0xD8DD4, "Ignition_Dwell_Y_AXIS__", SN_CHECK);
MakeNameEx(0x98CA2, "P0000_PASS_CODE_NO_DTC_DETECTED__", SN_CHECK);
MakeNameEx(0x98C85, "P0011_CAMSHAFT_POS_TIMING_OVERADVANCED_1__", SN_CHECK);
MakeNameEx(0x98D13, "P0016_CRANKSHAFTCAMSHAFT_CORRELATION_1A__", SN_CHECK);
MakeNameEx(0x98D12, "P0018_CRANKSHAFTCAMSHAFT_CORRELATION_2A__", SN_CHECK);
MakeNameEx(0x98C86, "P0021_CAMSHAFT_POS_TIMING_OVERADVANCED_2__", SN_CHECK);
MakeNameEx(0x98CC6, "P0030_FRONT_O2_SENSOR_RANGEPERF__", SN_CHECK);
MakeNameEx(0x98CB1, "P0031_FRONT_O2_SENSOR_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x98CAF, "P0032_FRONT_O2_SENSOR_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x98CB0, "P0037_REAR_O2_SENSOR_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x98CAE, "P0038_REAR_O2_SENSOR_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x98CC1, "P0068_MAP_SENSOR_RANGEPERF__", SN_CHECK);
MakeNameEx(0x98CC2, "P0101_MAF_SENSOR_RANGEPERF__", SN_CHECK);
MakeNameEx(0x98C61, "P0102_MAF_SENSOR_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x98C62, "P0103_MAF_SENSOR_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x98CB2, "P0107_MAP_SENSOR_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x98CB3, "P0108_MAP_SENSOR_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x98CAD, "P0111_IAT_SENSOR_RANGEPERF__", SN_CHECK);
MakeNameEx(0x98CAB, "P0112_IAT_SENSOR_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x98CAC, "P0113_IAT_SENSOR_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x98C6A, "P0117_COOLANT_TEMP_SENSOR_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x98C6B, "P0118_COOLANT_TEMP_SENSOR_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x98C68, "P0122_TPS_A_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x98C69, "P0123_TPS_A_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x98C6D, "P0125_INSUFFICIENT_COOLANT_TEMP_FUELING__", SN_CHECK);
MakeNameEx(0x98CFB, "P0126_INSUFFICIENT_COOLANT_TEMP_OPERATION__", SN_CHECK);
MakeNameEx(0x98CB8, "P0128_THERMOSTAT_MALFUNCTION__", SN_CHECK);
MakeNameEx(0x98CA5, "P0131_FRONT_O2_SENSOR_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x98CA7, "P0132_FRONT_O2_SENSOR_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x98CC4, "P0134_FRONT_O2_SENSOR_NO_ACTIVITY__", SN_CHECK);
MakeNameEx(0x98CA4, "P0137_REAR_O2_SENSOR_LOW_VOLTAGE__", SN_CHECK);
MakeNameEx(0x98CA9, "P0138_REAR_O2_SENSOR_HIGH_VOLTAGE__", SN_CHECK);
MakeNameEx(0x98D0E, "P0140_REAR_O2_SENSOR_NO_ACTIVITY__", SN_CHECK);
MakeNameEx(0x98C8E, "P0141_REAR_O2_SENSOR_MALFUNCTION__", SN_CHECK);
MakeNameEx(0x98D3E, "P014C_O2_SENSOR_SLOW_RESPONSE_RICH_TO_LEAN_B1_S1__", SN_CHECK);
MakeNameEx(0x98D3D, "P014D_O2_SENSOR_SLOW_RESPONSE_LEAN_TO_RICH_B1_S1__", SN_CHECK);
MakeNameEx(0x98D3A, "P015A_O2_SENSOR_DELAYED_RESPONSE_RICH_TO_LEAN_B1_S1__", SN_CHECK);
MakeNameEx(0x98C99, "P0171_SYSTEM_TOO_LEAN__", SN_CHECK);
MakeNameEx(0x98C9A, "P0172_SYSTEM_TOO_RICH__", SN_CHECK);
MakeNameEx(0x98CCD, "P0222_TPS_B_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x98CCE, "P0223_TPS_B_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x98CC0, "P0230_FUEL_PUMP_PRIMARY_CIRCUIT__", SN_CHECK);
MakeNameEx(0x98CBF, "P0244_WASTEGATE_SOLENOID_A_RANGEPERF__", SN_CHECK);
MakeNameEx(0x98CBD, "P0245_WASTEGATE_SOLENOID_A_LOW__", SN_CHECK);
MakeNameEx(0x98CBE, "P0246_WASTEGATE_SOLENOID_A_HIGH__", SN_CHECK);
MakeNameEx(0x98C9B, "P0301_MISFIRE_CYLINDER_1__", SN_CHECK);
MakeNameEx(0x98C9C, "P0302_MISFIRE_CYLINDER_2__", SN_CHECK);
MakeNameEx(0x98C9D, "P0303_MISFIRE_CYLINDER_3__", SN_CHECK);
MakeNameEx(0x98C9E, "P0304_MISFIRE_CYLINDER_4__", SN_CHECK);
MakeNameEx(0x98C66, "P0327_KNOCK_SENSOR_1_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x98C67, "P0328_KNOCK_SENSOR_1_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x98C5C, "P0335_CRANKSHAFT_POS_SENSOR_A_MALFUNCTION__", SN_CHECK);
MakeNameEx(0x98C5D, "P0336_CRANKSHAFT_POS_SENSOR_A_RANGEPERF__", SN_CHECK);
MakeNameEx(0x98CE0, "P0340_CAMSHAFT_POS_SENSOR_A_MALFUNCTION__", SN_CHECK);
MakeNameEx(0x98CDF, "P0345_CAMSHAFT_POS_SENSOR_A_BANK_2__", SN_CHECK);
MakeNameEx(0x98D08, "P0410_SECONDARY_AIR_PUMP_SYSTEM__", SN_CHECK);
MakeNameEx(0x98D07, "P0411_SECONDARY_AIR_PUMP_INCORRECT_FLOW__", SN_CHECK);
MakeNameEx(0x98D0C, "P0413_SECONDARY_AIR_PUMP_A_OPEN__", SN_CHECK);
MakeNameEx(0x98D10, "P0414_SECONDARY_AIR_PUMP_A_SHORTED__", SN_CHECK);
MakeNameEx(0x98D1A, "P0416_SECONDARY_AIR_PUMP_B_OPEN__", SN_CHECK);
MakeNameEx(0x98D19, "P0417_SECONDARY_AIR_PUMP_B_SHORTED__", SN_CHECK);
MakeNameEx(0x98D0D, "P0418_SECONDARY_AIR_PUMP_RELAY_A__", SN_CHECK);
MakeNameEx(0x98C95, "P0420_CAT_EFFICIENCY_BELOW_THRESHOLD__", SN_CHECK);
MakeNameEx(0x98D44, "P0441_EVAP_INCORRECT_PURGE_FLOW__", SN_CHECK);
MakeNameEx(0x98D43, "P0451_EVAP_PRESSURE_SENSOR_RANGEPERF__", SN_CHECK);
MakeNameEx(0x98D36, "P0452_EVAP_PRESSURE_SENSOR_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x98D35, "P0453_EVAP_PRESSURE_SENSOR_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x98D42, "P0455_EVAP_EMISSION_CONTROL_SYSTEM_LEAK_DETECTED_GROSS_LEAK__", SN_CHECK);
MakeNameEx(0x98C97, "P0456_EVAP_LEAK_DETECTED_VERY_SMALL__", SN_CHECK);
MakeNameEx(0x98C89, "P0458_EVAP_PURGE_VALVE_CIRCUIT_LOW__", SN_CHECK);
MakeNameEx(0x98C8A, "P0459_EVAP_PURGE_VALVE_CIRCUIT_HIGH__", SN_CHECK);
MakeNameEx(0x98C70, "P0461_FUEL_LEVEL_SENSOR_RANGEPERF__", SN_CHECK);
MakeNameEx(0x98C6E, "P0462_FUEL_LEVEL_SENSOR_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x98C6F, "P0463_FUEL_LEVEL_SENSOR_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x98C63, "P0500_VEHICLE_SPEED_SENSOR_A__", SN_CHECK);
MakeNameEx(0x98C83, "P0506_IDLE_CONTROL_RPM_LOWER_THAN_EXPECTED__", SN_CHECK);
MakeNameEx(0x98C84, "P0507_IDLE_CONTROL_RPM_HIGH_THAN_EXPECTED__", SN_CHECK);
MakeNameEx(0x98D30, "P050A_COLD_START_IDLE_AIR_CONTROL_SYSTEM_PERFORMANCE__", SN_CHECK);
MakeNameEx(0x98D2F, "P050B_COLD_START_IGNITION_TIMING_PERFORMANCE__", SN_CHECK);
MakeNameEx(0x98C72, "P0512_STARTER_REQUEST_CIRCUIT__", SN_CHECK);
MakeNameEx(0x98C60, "P0604_CONTROL_MODULE_RAM_ERROR__", SN_CHECK);
MakeNameEx(0x98CE1, "P0605_CONTROL_MODULE_ROM_ERROR__", SN_CHECK);
MakeNameEx(0x98CD5, "P0607_CONTROL_MODULE_PERFORMANCE__", SN_CHECK);
MakeNameEx(0x98CD4, "P0638_THROTTLE_ACTUATOR_RANGEPERF__", SN_CHECK);
MakeNameEx(0x98C76, "P0851_NEUTRAL_SWITCH_INPUT_LOW__", SN_CHECK);
MakeNameEx(0x98C7A, "P0852_NEUTRAL_SWITCH_INPUT_HIGH__", SN_CHECK);
MakeNameEx(0x98C91, "P1152_FRONT_O2_SENSOR_RANGEPERF_LOW_B1_S1__", SN_CHECK);
MakeNameEx(0x98C92, "P1153_FRONT_O2_SENSOR_RANGEPERF_HIGH_B1_S1__", SN_CHECK);
MakeNameEx(0x98CCF, "P1160_ABNORMAL_RETURN_SPRING__", SN_CHECK);
MakeNameEx(0x98C87, "P1400_FUEL_TANK_PRESSURE_SOL_LOW__", SN_CHECK);
MakeNameEx(0x98D14, "P1410_SECONDARY_AIR_PUMP_VALVE_STUCK_OPEN__", SN_CHECK);
MakeNameEx(0x98D11, "P1418_SECONDARY_AIR_PUMP_CIRCUIT_SHORTED__", SN_CHECK);
MakeNameEx(0x98C88, "P1420_FUEL_TANK_PRESSURE_SOL_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x98D41, "P1449_EVAPORATIVE_EMISSION_CONT_SYS_AIR_FILTER_CLOG__", SN_CHECK);
MakeNameEx(0x98D40, "P1451_EVAPORATIVE_EMISSION_CONT_SYS__", SN_CHECK);
MakeNameEx(0x98D3F, "P1458_CANISTER_PURGE_CONTROL_SOLENOID_VALVE_2_LOW__", SN_CHECK);
MakeNameEx(0x98D49, "P1459_CANISTER_PURGE_CONTROL_SOLENOID_VALVE_2_HIGH__", SN_CHECK);
MakeNameEx(0x98CB9, "P1491_PCV_BLOWBY_FUNCTION_PROBLEM__", SN_CHECK);
MakeNameEx(0x98C71, "P1518_STARTER_SWITCH_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x98D1F, "P1519_IMRC_STUCK_CLOSED__", SN_CHECK);
MakeNameEx(0x98D1E, "P1520_IMRC_CIRCUIT_MALFUNCTION__", SN_CHECK);
MakeNameEx(0x98CBA, "P1560_BACKUP_VOLTAGE_MALFUNCTION__", SN_CHECK);
MakeNameEx(0x98D1D, "P1616_SBDS_INTERACTIVE_CODES__", SN_CHECK);
MakeNameEx(0x98CF6, "P2004_TGV_INTAKE_MANIFOLD_RUNNER_1_STUCK_OPEN__", SN_CHECK);
MakeNameEx(0x98CF8, "P2005_TGV_INTAKE_MANIFOLD_RUNNER_2_STUCK_OPEN__", SN_CHECK);
MakeNameEx(0x98CF7, "P2006_TGV_INTAKE_MANIFOLD_RUNNER_1_STUCK_CLOSED__", SN_CHECK);
MakeNameEx(0x98CF9, "P2007_TGV_INTAKE_MANIFOLD_RUNNER_2_STUCK_CLOSED__", SN_CHECK);
MakeNameEx(0x98D04, "P2008_TGV_INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_OPEN__", SN_CHECK);
MakeNameEx(0x98D02, "P2009_TGV_INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_LOW__", SN_CHECK);
MakeNameEx(0x98D05, "P2011_TGV_INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_OPEN__", SN_CHECK);
MakeNameEx(0x98D03, "P2012_TGV_INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_LOW__", SN_CHECK);
MakeNameEx(0x98CFE, "P2016_TGV_INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_LOW__", SN_CHECK);
MakeNameEx(0x98CFF, "P2017_TGV_INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_HIGH__", SN_CHECK);
MakeNameEx(0x98D00, "P2021_TGV_INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_LOW__", SN_CHECK);
MakeNameEx(0x98D01, "P2022_TGV_INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_HIGH__", SN_CHECK);
MakeNameEx(0x98CE9, "P2088_OCV_SOLENOID_A1_CIRCUIT_OPEN__", SN_CHECK);
MakeNameEx(0x98CE8, "P2089_OCV_SOLENOID_A1_CIRCUIT_SHORT__", SN_CHECK);
MakeNameEx(0x98CE7, "P2092_OCV_SOLENOID_A2_CIRCUIT_OPEN__", SN_CHECK);
MakeNameEx(0x98CE6, "P2093_OCV_SOLENOID_A2_CIRCUIT_SHORT__", SN_CHECK);
MakeNameEx(0x98CD3, "P2096_POST_CATALYST_TOO_LEAN_B1__", SN_CHECK);
MakeNameEx(0x98CDC, "P2097_POST_CATALYST_TOO_RICH_B1__", SN_CHECK);
MakeNameEx(0x98CD2, "P2101_THROTTLE_ACTUATOR_CIRCUIT_RANGEPERF__", SN_CHECK);
MakeNameEx(0x98CD0, "P2102_THROTTLE_ACTUATOR_CIRCUIT_LOW__", SN_CHECK);
MakeNameEx(0x98CD1, "P2103_THROTTLE_ACTUATOR_CIRCUIT_HIGH__", SN_CHECK);
MakeNameEx(0x98CCC, "P2109_TPS_A_MINIMUM_STOP_PERF__", SN_CHECK);
MakeNameEx(0x98CD9, "P2122_TPS_D_CIRCUIT_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x98CDA, "P2123_TPS_D_CIRCUIT_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x98CD7, "P2127_TPS_E_CIRCUIT_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x98CD8, "P2128_TPS_E_CIRCUIT_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x98CDB, "P2135_TPS_AB_VOLTAGE__", SN_CHECK);
MakeNameEx(0x98CD6, "P2138_TPS_DE_VOLTAGE__", SN_CHECK);
MakeNameEx(0x98D46, "P219A_BANK_1_AFR_IMBALANCE__", SN_CHECK);
MakeNameEx(0x98D34, "P2401_EVAP_LEAK_DETECTION_PUMP_CONTROL_CIRCUIT_LOW__", SN_CHECK);
MakeNameEx(0x98D48, "P2402_EVAP_LEAK_DETECTION_PUMP_CONTROL_CIRCUIT_HIGH__", SN_CHECK);
MakeNameEx(0x98D33, "P2419_EVAP_SWITCHING_VALVE_LOW__", SN_CHECK);
MakeNameEx(0x98D32, "P2420_EVAP_SWITCHING_VALVE_HIGH__", SN_CHECK);
MakeNameEx(0x98D09, "P2431_SECONDARY_AIR_PUMP_CIRCUIT_RANGEPERF__", SN_CHECK);
MakeNameEx(0x98D0B, "P2432_SECONDARY_AIR_PUMP_CIRCUIT_LOW__", SN_CHECK);
MakeNameEx(0x98D0A, "P2433_SECONDARY_AIR_PUMP_CIRCUIT_HIGH__", SN_CHECK);
MakeNameEx(0x98D18, "P2440_SECONDARY_AIR_PUMP_VALVE_1_STUCK_OPEN__", SN_CHECK);
MakeNameEx(0x98D17, "P2441_SECONDARY_AIR_PUMP_VALVE_1_STUCK_CLOSED__", SN_CHECK);
MakeNameEx(0x98D16, "P2442_SECONDARY_AIR_PUMP_VALVE_2_STUCK_OPEN__", SN_CHECK);
MakeNameEx(0x98D15, "P2443_SECONDARY_AIR_PUMP_2_STUCK_CLOSED__", SN_CHECK);
MakeNameEx(0x98D06, "P2444_SECONDARY_AIR_PUMP_1_STUCK_ON_B1__", SN_CHECK);
MakeNameEx(0x98D2D, "U0073_CAN_COMMUNICATION_BUS_A_OFF__", SN_CHECK);
MakeNameEx(0x98D2A, "U0101_CAN_LOST_COMMUNICATION_WITH_TCM__", SN_CHECK);
MakeNameEx(0x98D2C, "U0122_CAN_LOST_COMMUNICATION_WITH_VDC__", SN_CHECK);
MakeNameEx(0x98D28, "U0140_CAN_LOST_COMMUNICATION_WITH_BIU__", SN_CHECK);
MakeNameEx(0x98D29, "U0402_CAN_INVALID_DATA_RECEIVED_FROM_TCM__", SN_CHECK);
MakeNameEx(0x98D2B, "U0416_CAN_INVALID_DATA_RECEIVED_FROM_VDC__", SN_CHECK);
MakeNameEx(0x98D27, "U0422_CAN_INVALID_DATA_RECEIVED_FROM_BIU__", SN_CHECK);
MakeNameEx(0xC1340, "Target_Boost____", SN_CHECK);
referenceAddress = DfirstB(0xC1340);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Boost____", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost____\n");
}

MakeNameEx(0xC12D8, "Target_Boost_X_AXIS___", SN_CHECK);
MakeNameEx(0xC1304, "Target_Boost_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC0CF4, "Target_Boost_Compensation_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xC0CF4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_ECT___\n");
}

MakeNameEx(0xC0C14, "Target_Boost_Compensation_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC0C0C, "Target_Boost_Compensation_1st_Gear___", SN_CHECK);
MakeNameEx(0xC0C08, "Target_Boost_Compensation_1st_Gear_Speed_Disable___", SN_CHECK);
MakeNameEx(0xC0E3C, "Target_Boost_Compensation_IAT____", SN_CHECK);
referenceAddress = DfirstB(0xC0E3C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_IAT____", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_IAT____\n");
}

MakeNameEx(0xC0E24, "Target_Boost_Compensation_IAT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC0EC4, "Target_Boost_Compensation_Atm_Pressure____", SN_CHECK);
referenceAddress = DfirstB(0xC0EC4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_Atm_Pressure____", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_Atm_Pressure____\n");
}

MakeNameEx(0xC0E94, "Target_Boost_Compensation_Atm_Pressure_X_AXIS___", SN_CHECK);
MakeNameEx(0xC0EAC, "Target_Boost_Compensation_Atm_Pressure_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD2444, "Boost_Limit_Fuel_Cut____", SN_CHECK);
referenceAddress = DfirstB(0xD2444);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Boost_Limit_Fuel_Cut____", SN_CHECK);
}
else
{
    Message("No reference to Boost_Limit_Fuel_Cut____\n");
}

MakeNameEx(0xD2414, "Boost_Limit_Fuel_Cut_X_AXIS___", SN_CHECK);
MakeNameEx(0xD242C, "Boost_Limit_Fuel_Cut_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC0BFC, "Boost_Control_Disable_IAM___", SN_CHECK);
MakeNameEx(0xC0BF8, "Boost_Control_Disable_Fine_Correction___", SN_CHECK);
MakeNameEx(0xC0BAD, "Boost_Control_Disable_Delay_Fine_Correction___", SN_CHECK);
MakeNameEx(0xC1150, "Initial_Wastegate_Duty____", SN_CHECK);
referenceAddress = DfirstB(0xC1150);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Initial_Wastegate_Duty____", SN_CHECK);
}
else
{
    Message("No reference to Initial_Wastegate_Duty____\n");
}

MakeNameEx(0xC10E0, "Initial_Wastegate_Duty_X_AXIS___", SN_CHECK);
MakeNameEx(0xC111C, "Initial_Wastegate_Duty_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC0F58, "Max_Wastegate_Duty____", SN_CHECK);
referenceAddress = DfirstB(0xC0F58);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Max_Wastegate_Duty____", SN_CHECK);
}
else
{
    Message("No reference to Max_Wastegate_Duty____\n");
}

MakeNameEx(0xC0EE8, "Max_Wastegate_Duty_X_AXIS___", SN_CHECK);
MakeNameEx(0xC0F24, "Max_Wastegate_Duty_Y_AXIS___", SN_CHECK);
MakeNameEx(0x13F3C, "Max_Wastegate_Duty_Limit_PostCompensation___", SN_CHECK);
MakeNameEx(0xC0C94, "InitialMax_Wastegate_Duty_Compensation_IAT___", SN_CHECK);
referenceAddress = DfirstB(0xC0C94);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_IAT___", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_IAT___\n");
}

MakeNameEx(0xC0C54, "InitialMax_Wastegate_Duty_Compensation_IAT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC0CB4, "InitialMax_Wastegate_Duty_Compensation_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xC0CB4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_ECT___", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_ECT___\n");
}

MakeNameEx(0xC0C14, "InitialMax_Wastegate_Duty_Compensation_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC0E7C, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure___", SN_CHECK);
referenceAddress = DfirstB(0xC0E7C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_Atm_Pressure___", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_Atm_Pressure___\n");
}

MakeNameEx(0xC0E54, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_X_AXIS___", SN_CHECK);
MakeNameEx(0xC0E6C, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC0D28, "Turbo_Dynamics_Proportional___", SN_CHECK);
referenceAddress = DfirstB(0xC0D28);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Proportional___", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Proportional___\n");
}

MakeNameEx(0xC0D04, "Turbo_Dynamics_Proportional_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC0D98, "Turbo_Dynamics_Integral_Positive___", SN_CHECK);
referenceAddress = DfirstB(0xC0D98);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Integral_Positive___", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Integral_Positive___\n");
}

MakeNameEx(0xC0D74, "Turbo_Dynamics_Integral_Positive_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC0D60, "Turbo_Dynamics_Integral_Negative___", SN_CHECK);
referenceAddress = DfirstB(0xC0D60);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Integral_Negative___", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Integral_Negative___\n");
}

MakeNameEx(0xC0D3C, "Turbo_Dynamics_Integral_Negative_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC0CC4, "TD_Proportional_Compensation_IAT___", SN_CHECK);
referenceAddress = DfirstB(0xC0CC4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Proportional_Compensation_IAT___", SN_CHECK);
}
else
{
    Message("No reference to TD_Proportional_Compensation_IAT___\n");
}

MakeNameEx(0xC0C54, "TD_Proportional_Compensation_IAT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC0CE4, "TD_Integral_Positive_Compensation_IAT___", SN_CHECK);
referenceAddress = DfirstB(0xC0CE4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Integral_Positive_Compensation_IAT___", SN_CHECK);
}
else
{
    Message("No reference to TD_Integral_Positive_Compensation_IAT___\n");
}

MakeNameEx(0xC0C54, "TD_Integral_Positive_Compensation_IAT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC0CD4, "TD_Integral_Negative_Compensation_IAT___", SN_CHECK);
referenceAddress = DfirstB(0xC0CD4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Integral_Negative_Compensation_IAT___", SN_CHECK);
}
else
{
    Message("No reference to TD_Integral_Negative_Compensation_IAT___\n");
}

MakeNameEx(0xC0C54, "TD_Integral_Negative_Compensation_IAT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC0BE8, "TD_Activation_Thresholds_RPM___", SN_CHECK);
MakeNameEx(0xC0BD4, "TD_Activation_Thresholds_Target_Boost____", SN_CHECK);
MakeNameEx(0xC0BF0, "TD_Integral_Cumulative_Range_WGDC_Correction___", SN_CHECK);
MakeNameEx(0xC0BDC, "TD_Integral_Negative_Activation_Boost_Error___", SN_CHECK);
MakeNameEx(0xC0BE0, "TD_Integral_Positive_Activation_Boost_Error___", SN_CHECK);
MakeNameEx(0xC0BE4, "TD_Integral_Negative_Activation_Wastegate_Duty___", SN_CHECK);
MakeNameEx(0xD86E8, "Manifold_Pressure_Sensor_Scaling____", SN_CHECK);
MakeNameEx(0xD869A, "Manifold_Pressure_Sensor_Limits_CEL___", SN_CHECK);
MakeNameEx(0xD8651, "Manifold_Pressure_Sensor_CEL_Delays___", SN_CHECK);
MakeNameEx(0xCFC9C, "Primary_Open_Loop_Fueling___", SN_CHECK);
referenceAddress = DfirstB(0xCFC9C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling___", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling___\n");
}

MakeNameEx(0xCFC10, "Primary_Open_Loop_Fueling_X_AXIS___", SN_CHECK);
MakeNameEx(0xCFC54, "Primary_Open_Loop_Fueling_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCFE5C, "Primary_Open_Loop_Fueling_Failsafe___", SN_CHECK);
referenceAddress = DfirstB(0xCFE5C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Failsafe___", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Failsafe___\n");
}

MakeNameEx(0xCFDD0, "Primary_Open_Loop_Fueling_Failsafe_X_AXIS___", SN_CHECK);
MakeNameEx(0xCFE14, "Primary_Open_Loop_Fueling_Failsafe_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCC0DC, "Primary_Open_Loop_Fuel_Map_Switch_IAM___", SN_CHECK);
MakeNameEx(0xCC0E0, "Minimum_Active_Primary_Open_Loop_Enrichment___", SN_CHECK);
MakeNameEx(0xCCD0C, "Minimum_Primary_Open_Loop_Enrichment_Throttle___", SN_CHECK);
referenceAddress = DfirstB(0xCCD0C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Throttle___", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Throttle___\n");
}

MakeNameEx(0xCCCF4, "Minimum_Primary_Open_Loop_Enrichment_Throttle_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCCD2C, "Minimum_Primary_Open_Loop_Enrichment_Accelerator___", SN_CHECK);
referenceAddress = DfirstB(0xCCD2C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Accelerator___", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Accelerator___\n");
}

MakeNameEx(0xCCD14, "Minimum_Primary_Open_Loop_Enrichment_Accelerator_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCE638, "Primary_Open_Loop_Fueling_Compensation_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xCE638);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_ECT___\n");
}

MakeNameEx(0xCC590, "Primary_Open_Loop_Fueling_Compensation_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCCC9C, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation____", SN_CHECK);
referenceAddress = DfirstB(0xCCC9C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_Timing_Compensation____", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_Timing_Compensation____\n");
}

MakeNameEx(0xCCC84, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD89B0, "Front_Oxygen_Sensor_Scaling___", SN_CHECK);
referenceAddress = DfirstB(0xD89B0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Scaling___", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Scaling___\n");
}

MakeNameEx(0xD897C, "Front_Oxygen_Sensor_Scaling_Y_AXIS___", SN_CHECK);
MakeNameEx(0x21B30, "Front_Oxygen_Sensor_Rich_Limit___", SN_CHECK);
MakeNameEx(0xC36C0, "Front_Oxygen_Sensor_Compensation_Atm_Pressure___", SN_CHECK);
referenceAddress = DfirstB(0xC36C0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Compensation_Atm_Pressure___", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Compensation_Atm_Pressure___\n");
}

MakeNameEx(0xC36B0, "Front_Oxygen_Sensor_Compensation_Atm_Pressure_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD143C, "CL_Fueling_Target_Compensation_A_Load___", SN_CHECK);
referenceAddress = DfirstB(0xD143C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_A_Load___", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_A_Load___\n");
}

MakeNameEx(0xD13E8, "CL_Fueling_Target_Compensation_A_Load_X_AXIS___", SN_CHECK);
MakeNameEx(0xD1414, "CL_Fueling_Target_Compensation_A_Load_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD16AC, "CL_Fueling_Target_Compensation_B_Load___", SN_CHECK);
referenceAddress = DfirstB(0xD16AC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_B_Load___", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_B_Load___\n");
}

MakeNameEx(0xD1648, "CL_Fueling_Target_Compensation_B_Load_X_AXIS___", SN_CHECK);
MakeNameEx(0xD167C, "CL_Fueling_Target_Compensation_B_Load_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD131C, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xD131C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Imm_Cruise_ECT___", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Imm_Cruise_ECT___\n");
}

MakeNameEx(0xCC590, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_X_AXIS___", SN_CHECK);
MakeNameEx(0xD1310, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD1388, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xD1388);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Imm_NonCruise_ECT___", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Imm_NonCruise_ECT___\n");
}

MakeNameEx(0xCC590, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_X_AXIS___", SN_CHECK);
MakeNameEx(0xD137C, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCBF0C, "CL_Fueling_Target_Compensation_ECT_Disable___", SN_CHECK);
MakeNameEx(0xCBBE2, "CL_to_OL_Delay____", SN_CHECK);
MakeNameEx(0xCBBDC, "CL_to_OL_DelaySwitch_SIDRIVE_Intelligent___", SN_CHECK);
MakeNameEx(0xCCCE4, "CL_to_OL_Transition_with_Delay_Throttle___", SN_CHECK);
referenceAddress = DfirstB(0xCCCE4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Throttle___", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Throttle___\n");
}

MakeNameEx(0xCCCA4, "CL_to_OL_Transition_with_Delay_Throttle_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCC0E8, "CL_to_OL_Transition_with_Delay_Throttle_Hysteresis___", SN_CHECK);
MakeNameEx(0xCE564, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width___", SN_CHECK);
referenceAddress = DfirstB(0xCE564);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Base_Pulse_Width___", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Base_Pulse_Width___\n");
}

MakeNameEx(0xCE524, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCC0E4, "CL_to_OL_Transition_with_Delay_BPW_Hysteresis___", SN_CHECK);
MakeNameEx(0xCE5AC, "CL_to_OL_Transition_Counter_Step_Value_MAF___", SN_CHECK);
referenceAddress = DfirstB(0xCE5AC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_Counter_Step_Value_MAF___", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_Counter_Step_Value_MAF___\n");
}

MakeNameEx(0xCE584, "CL_to_OL_Transition_Counter_Step_Value_MAF_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCC148, "CL_Delay_Maximum_Throttle___", SN_CHECK);
MakeNameEx(0xCC164, "CL_Delay_Maximum_Vehicle_Speed___", SN_CHECK);
MakeNameEx(0xCC0EC, "CL_Delay_Minimum_ECT___", SN_CHECK);
MakeNameEx(0xCC174, "CL_Delay_Maximum_Engine_Load___", SN_CHECK);
MakeNameEx(0xCBBDA, "CL_Delay_Engine_Load_Counter_Threshold___", SN_CHECK);
MakeNameEx(0xCC0F0, "CL_Delay_Maximum_Engine_Speed_Per_Gear___", SN_CHECK);
MakeNameEx(0xCC118, "CL_Delay_Maximum_Engine_Speed_Neutral___", SN_CHECK);
MakeNameEx(0xD0FD8, "Injector_Latency____", SN_CHECK);
referenceAddress = DfirstB(0xD0FD8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Injector_Latency____", SN_CHECK);
}
else
{
    Message("No reference to Injector_Latency____\n");
}

MakeNameEx(0xD0FB8, "Injector_Latency_X_AXIS___", SN_CHECK);
MakeNameEx(0xD0FCC, "Injector_Latency_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCBD7C, "Injector_Flow_Scaling___", SN_CHECK);
MakeNameEx(0xD0754, "Per_Injector_Pulse_Width_Compensation_A___", SN_CHECK);
referenceAddress = DfirstB(0xD0754);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_A___", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_A___\n");
}

MakeNameEx(0xD06CC, "Per_Injector_Pulse_Width_Compensation_A_X_AXIS___", SN_CHECK);
MakeNameEx(0xD0710, "Per_Injector_Pulse_Width_Compensation_A_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD0900, "Per_Injector_Pulse_Width_Compensation_B___", SN_CHECK);
referenceAddress = DfirstB(0xD0900);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_B___", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_B___\n");
}

MakeNameEx(0xD0878, "Per_Injector_Pulse_Width_Compensation_B_X_AXIS___", SN_CHECK);
MakeNameEx(0xD08BC, "Per_Injector_Pulse_Width_Compensation_B_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD0AAC, "Per_Injector_Pulse_Width_Compensation_C___", SN_CHECK);
referenceAddress = DfirstB(0xD0AAC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_C___", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_C___\n");
}

MakeNameEx(0xD0A24, "Per_Injector_Pulse_Width_Compensation_C_X_AXIS___", SN_CHECK);
MakeNameEx(0xD0A68, "Per_Injector_Pulse_Width_Compensation_C_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD0C58, "Per_Injector_Pulse_Width_Compensation_D___", SN_CHECK);
referenceAddress = DfirstB(0xD0C58);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_D___", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_D___\n");
}

MakeNameEx(0xD0BD0, "Per_Injector_Pulse_Width_Compensation_D_X_AXIS___", SN_CHECK);
MakeNameEx(0xD0C14, "Per_Injector_Pulse_Width_Compensation_D_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCD252, "Cranking_Fuel_Injector_Pulse_Width_A_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xCD252);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_A_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_A_ECT___\n");
}

MakeNameEx(0xCC590, "Cranking_Fuel_Injector_Pulse_Width_A_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCD272, "Cranking_Fuel_Injector_Pulse_Width_B_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xCD272);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_B_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_B_ECT___\n");
}

MakeNameEx(0xCC590, "Cranking_Fuel_Injector_Pulse_Width_B_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCD292, "Cranking_Fuel_Injector_Pulse_Width_C_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xCD292);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_C_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_C_ECT___\n");
}

MakeNameEx(0xCC590, "Cranking_Fuel_Injector_Pulse_Width_C_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCD2B2, "Cranking_Fuel_Injector_Pulse_Width_D_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xCD2B2);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_D_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_D_ECT___\n");
}

MakeNameEx(0xCC590, "Cranking_Fuel_Injector_Pulse_Width_D_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCD2D2, "Cranking_Fuel_Injector_Pulse_Width_E_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xCD2D2);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_E_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_E_ECT___\n");
}

MakeNameEx(0xCC590, "Cranking_Fuel_Injector_Pulse_Width_E_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCD2F2, "Cranking_Fuel_Injector_Pulse_Width_F_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xCD2F2);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_F_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_F_ECT___\n");
}

MakeNameEx(0xCC590, "Cranking_Fuel_Injector_Pulse_Width_F_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCF670, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM___", SN_CHECK);
referenceAddress = DfirstB(0xCF670);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM___", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM___\n");
}

MakeNameEx(0xCF640, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_X_AXIS___", SN_CHECK);
MakeNameEx(0xCF654, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCF61C, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM___", SN_CHECK);
referenceAddress = DfirstB(0xCF61C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM___", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM___\n");
}

MakeNameEx(0xCF5EC, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_X_AXIS___", SN_CHECK);
MakeNameEx(0xCF600, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCC7D4, "Cranking_Fuel_IPW_Compensation_MAP___", SN_CHECK);
referenceAddress = DfirstB(0xCC7D4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_MAP___", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_MAP___\n");
}

MakeNameEx(0xCC7AC, "Cranking_Fuel_IPW_Compensation_MAP_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCC808, "Cranking_Fuel_IPW_Compensation_Accelerator___", SN_CHECK);
referenceAddress = DfirstB(0xCC808);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Accelerator___", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Accelerator___\n");
}

MakeNameEx(0xCC7E0, "Cranking_Fuel_IPW_Compensation_Accelerator_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCC828, "Cranking_Fuel_IPW_Compensation_IAT___", SN_CHECK);
referenceAddress = DfirstB(0xCC828);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_IAT___", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_IAT___\n");
}

MakeNameEx(0xCC814, "Cranking_Fuel_IPW_Compensation_IAT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCECBC, "Throttle_Tipin_Enrichment_A___", SN_CHECK);
referenceAddress = DfirstB(0xCECBC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment_A___", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment_A___\n");
}

MakeNameEx(0xCEC74, "Throttle_Tipin_Enrichment_A_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCED28, "Throttle_Tipin_Enrichment_B___", SN_CHECK);
referenceAddress = DfirstB(0xCED28);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment_B___", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment_B___\n");
}

MakeNameEx(0xCECE0, "Throttle_Tipin_Enrichment_B_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCC410, "Minimum_Tipin_Enrichment_Activation___", SN_CHECK);
MakeNameEx(0xCC40C, "Minimum_Tipin_Enrichment_Activation_Throttle___", SN_CHECK);
MakeNameEx(0xCD0B8, "Tipin_Enrichment_Compensation_Boost_Error___", SN_CHECK);
referenceAddress = DfirstB(0xCD0B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_Boost_Error___", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_Boost_Error___\n");
}

MakeNameEx(0xCD094, "Tipin_Enrichment_Compensation_Boost_Error_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCD084, "Tipin_Enrichment_Compensation_RPM___", SN_CHECK);
referenceAddress = DfirstB(0xCD084);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_RPM___", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_RPM___\n");
}

MakeNameEx(0xCD044, "Tipin_Enrichment_Compensation_RPM_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCD0C1, "Tipin_Enrichment_Compensation_A_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xCD0C1);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_A_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_A_ECT___\n");
}

MakeNameEx(0xCC590, "Tipin_Enrichment_Compensation_A_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCED4C, "Tipin_Enrichment_Compensation_B_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xCED4C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_B_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_B_ECT___\n");
}

MakeNameEx(0xCC590, "Tipin_Enrichment_Compensation_B_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCED6C, "Tipin_Enrichment_Compensation_C_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xCED6C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_C_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_C_ECT___\n");
}

MakeNameEx(0xCC590, "Tipin_Enrichment_Compensation_C_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCEDAC, "Tipin_Enrichment_Compensation_D_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xCEDAC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_D_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_D_ECT___\n");
}

MakeNameEx(0xCC5D0, "Tipin_Enrichment_Compensation_D_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCC414, "Tipin_Enrichment_Compensation_D_ECT_Activation___", SN_CHECK);
MakeNameEx(0xCD0D1, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xCD0D1);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT___\n");
}

MakeNameEx(0xCC590, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCD0E1, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xCD0E1);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT___\n");
}

MakeNameEx(0xCC590, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCBB88, "Tipin_Enrichment_Applied_Counter_Reset___", SN_CHECK);
MakeNameEx(0xCEDCC, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xCEDCC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT___\n");
}

MakeNameEx(0xCC590, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCEDEC, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xCEDEC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT___\n");
}

MakeNameEx(0xCC590, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCBB89, "Tipin_Throttle_Cumulative_Reset___", SN_CHECK);
MakeNameEx(0xCF8C8, "Min_Primary_Base_Enrichment_1_Cruise___", SN_CHECK);
referenceAddress = DfirstB(0xCF8C8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_Cruise___", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_Cruise___\n");
}

MakeNameEx(0xCC590, "Min_Primary_Base_Enrichment_1_Cruise_X_AXIS___", SN_CHECK);
MakeNameEx(0xCF8A4, "Min_Primary_Base_Enrichment_1_Cruise_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCF824, "Min_Primary_Base_Enrichment_1_NonCruise___", SN_CHECK);
referenceAddress = DfirstB(0xCF824);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonCruise___", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonCruise___\n");
}

MakeNameEx(0xCC590, "Min_Primary_Base_Enrichment_1_NonCruise_X_AXIS___", SN_CHECK);
MakeNameEx(0xCF804, "Min_Primary_Base_Enrichment_1_NonCruise_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCC88D, "Min_Primary_Base_Enrichment_1_NonPrimary_OL____", SN_CHECK);
referenceAddress = DfirstB(0xCC88D);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonPrimary_OL____", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonPrimary_OL____\n");
}

MakeNameEx(0xCC590, "Min_Primary_Base_Enrichment_1_NonPrimary_OL_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCBFD4, "AF_Learning_1_Limits___", SN_CHECK);
MakeNameEx(0xCBFE4, "AF_Learning_1_Airflow_Ranges___", SN_CHECK);
MakeNameEx(0xC30D8, "MAF_Limit_Maximum___", SN_CHECK);
MakeNameEx(0xD88A4, "MAF_Sensor_Scaling___", SN_CHECK);
referenceAddress = DfirstB(0xD88A4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_MAF_Sensor_Scaling___", SN_CHECK);
}
else
{
    Message("No reference to MAF_Sensor_Scaling___\n");
}

MakeNameEx(0xD87CC, "MAF_Sensor_Scaling_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC3B28, "MAF_Compensation_IAT___", SN_CHECK);
referenceAddress = DfirstB(0xC3B28);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_MAF_Compensation_IAT___", SN_CHECK);
}
else
{
    Message("No reference to MAF_Compensation_IAT___\n");
}

MakeNameEx(0xC3AF4, "MAF_Compensation_IAT_X_AXIS___", SN_CHECK);
MakeNameEx(0xC3B08, "MAF_Compensation_IAT_Y_AXIS___", SN_CHECK);
MakeNameEx(0x20208, "Engine_Load_Limit_A_Maximum___", SN_CHECK);
MakeNameEx(0xC35C0, "Engine_Load_Limit_B_Maximum_RPM___", SN_CHECK);
referenceAddress = DfirstB(0xC35C0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Limit_B_Maximum_RPM___", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Limit_B_Maximum_RPM___\n");
}

MakeNameEx(0xC35B8, "Engine_Load_Limit_B_Maximum_RPM_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC3BB4, "Engine_Load_Compensation_Cruise_MP___", SN_CHECK);
referenceAddress = DfirstB(0xC3BB4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Compensation_Cruise_MP___", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Compensation_Cruise_MP___\n");
}

MakeNameEx(0xC3B50, "Engine_Load_Compensation_Cruise_MP_X_AXIS___", SN_CHECK);
MakeNameEx(0xC3B7C, "Engine_Load_Compensation_Cruise_MP_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC3CB4, "Engine_Load_Compensation_NonCruise_MP___", SN_CHECK);
referenceAddress = DfirstB(0xC3CB4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Compensation_NonCruise_MP___", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Compensation_NonCruise_MP___\n");
}

MakeNameEx(0xC3C50, "Engine_Load_Compensation_NonCruise_MP_X_AXIS___", SN_CHECK);
MakeNameEx(0xC3C7C, "Engine_Load_Compensation_NonCruise_MP_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD4488, "Base_Timing_Primary_Cruise___", SN_CHECK);
referenceAddress = DfirstB(0xD4488);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Primary_Cruise___", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Primary_Cruise___\n");
}

MakeNameEx(0xD43FC, "Base_Timing_Primary_Cruise_X_AXIS___", SN_CHECK);
MakeNameEx(0xD4440, "Base_Timing_Primary_Cruise_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD4808, "Base_Timing_Reference_Cruise_AVCS_related___", SN_CHECK);
referenceAddress = DfirstB(0xD4808);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Reference_Cruise_AVCS_related___", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Reference_Cruise_AVCS_related___\n");
}

MakeNameEx(0xD477C, "Base_Timing_Reference_Cruise_AVCS_related_X_AXIS___", SN_CHECK);
MakeNameEx(0xD47C0, "Base_Timing_Reference_Cruise_AVCS_related_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD4648, "Base_Timing_Primary_NonCruise___", SN_CHECK);
referenceAddress = DfirstB(0xD4648);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Primary_NonCruise___", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Primary_NonCruise___\n");
}

MakeNameEx(0xD45BC, "Base_Timing_Primary_NonCruise_X_AXIS___", SN_CHECK);
MakeNameEx(0xD4600, "Base_Timing_Primary_NonCruise_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD49C8, "Base_Timing_Reference_NonCruise_AVCS_related___", SN_CHECK);
referenceAddress = DfirstB(0xD49C8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Reference_NonCruise_AVCS_related___", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Reference_NonCruise_AVCS_related___\n");
}

MakeNameEx(0xD493C, "Base_Timing_Reference_NonCruise_AVCS_related_X_AXIS___", SN_CHECK);
MakeNameEx(0xD4980, "Base_Timing_Reference_NonCruise_AVCS_related_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD3022, "Base_Timing_Idle_A_InGear___", SN_CHECK);
referenceAddress = DfirstB(0xD3022);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_A_InGear___", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_A_InGear___\n");
}

MakeNameEx(0xD2E08, "Base_Timing_Idle_A_InGear_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD3032, "Base_Timing_Idle_B_InGear___", SN_CHECK);
referenceAddress = DfirstB(0xD3032);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_B_InGear___", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_B_InGear___\n");
}

MakeNameEx(0xD2E08, "Base_Timing_Idle_B_InGear_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD3042, "Base_Timing_Idle_A_Neutral___", SN_CHECK);
referenceAddress = DfirstB(0xD3042);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_A_Neutral___", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_A_Neutral___\n");
}

MakeNameEx(0xD2E08, "Base_Timing_Idle_A_Neutral_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD3052, "Base_Timing_Idle_B_Neutral___", SN_CHECK);
referenceAddress = DfirstB(0xD3052);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_B_Neutral___", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_B_Neutral___\n");
}

MakeNameEx(0xD2E08, "Base_Timing_Idle_B_Neutral_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD3019, "Base_Timing_Idle_Minimum___", SN_CHECK);
referenceAddress = DfirstB(0xD3019);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_Minimum___", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_Minimum___\n");
}

MakeNameEx(0xD2E88, "Base_Timing_Idle_Minimum_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD29B4, "Base_Timing_Idle_Minimum_Vehicle_Speed_Enable___", SN_CHECK);
MakeNameEx(0xD5570, "Knock_Correction_Advance_Max_Cruise___", SN_CHECK);
referenceAddress = DfirstB(0xD5570);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_Cruise___", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_Cruise___\n");
}

MakeNameEx(0xD54E4, "Knock_Correction_Advance_Max_Cruise_X_AXIS___", SN_CHECK);
MakeNameEx(0xD5528, "Knock_Correction_Advance_Max_Cruise_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD5730, "Knock_Correction_Advance_Max_NonCruise___", SN_CHECK);
referenceAddress = DfirstB(0xD5730);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_NonCruise___", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_NonCruise___\n");
}

MakeNameEx(0xD56A4, "Knock_Correction_Advance_Max_NonCruise_X_AXIS___", SN_CHECK);
MakeNameEx(0xD56E8, "Knock_Correction_Advance_Max_NonCruise_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD3104, "Timing_Compensation_A_IAT___", SN_CHECK);
referenceAddress = DfirstB(0xD3104);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_A_IAT___", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_A_IAT___\n");
}

MakeNameEx(0xD30C4, "Timing_Compensation_A_IAT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD4B3C, "Timing_Compensation_A_IAT_Activation___", SN_CHECK);
referenceAddress = DfirstB(0xD4B3C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_A_IAT_Activation___", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_A_IAT_Activation___\n");
}

MakeNameEx(0xD4AFC, "Timing_Compensation_A_IAT_Activation_X_AXIS___", SN_CHECK);
MakeNameEx(0xD4B1C, "Timing_Compensation_A_IAT_Activation_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD36D4, "Timing_Compensation_B_IAT___", SN_CHECK);
referenceAddress = DfirstB(0xD36D4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_B_IAT___", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_B_IAT___\n");
}

MakeNameEx(0xD3694, "Timing_Compensation_B_IAT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD2B70, "Timing_Compensation_B_IAT_IAM_Activation___", SN_CHECK);
MakeNameEx(0xD2B54, "Timing_Compensation_B_IAT_Max_Additive___", SN_CHECK);
MakeNameEx(0xD30A2, "Timing_Compensation_Imm_Cruise_A_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xD30A2);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_Cruise_A_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_Cruise_A_ECT___\n");
}

MakeNameEx(0xD2E08, "Timing_Compensation_Imm_Cruise_A_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD30B2, "Timing_Compensation_Imm_Cruise_B_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xD30B2);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_Cruise_B_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_Cruise_B_ECT___\n");
}

MakeNameEx(0xD2E08, "Timing_Compensation_Imm_Cruise_B_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD3082, "Timing_Compensation_Imm_NonCruise_A_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xD3082);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_NonCruise_A_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_NonCruise_A_ECT___\n");
}

MakeNameEx(0xD2E08, "Timing_Compensation_Imm_NonCruise_A_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD3092, "Timing_Compensation_Imm_NonCruise_B_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xD3092);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_NonCruise_B_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_NonCruise_B_ECT___\n");
}

MakeNameEx(0xD2E08, "Timing_Compensation_Imm_NonCruise_B_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD511C, "Timing_Compensation_Per_Cylinder_A___", SN_CHECK);
referenceAddress = DfirstB(0xD511C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_A___", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_A___\n");
}

MakeNameEx(0xD50D0, "Timing_Compensation_Per_Cylinder_A_X_AXIS___", SN_CHECK);
MakeNameEx(0xD5108, "Timing_Compensation_Per_Cylinder_A_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD51B0, "Timing_Compensation_Per_Cylinder_B___", SN_CHECK);
referenceAddress = DfirstB(0xD51B0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_B___", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_B___\n");
}

MakeNameEx(0xD5164, "Timing_Compensation_Per_Cylinder_B_X_AXIS___", SN_CHECK);
MakeNameEx(0xD519C, "Timing_Compensation_Per_Cylinder_B_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD5244, "Timing_Compensation_Per_Cylinder_C___", SN_CHECK);
referenceAddress = DfirstB(0xD5244);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_C___", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_C___\n");
}

MakeNameEx(0xD51F8, "Timing_Compensation_Per_Cylinder_C_X_AXIS___", SN_CHECK);
MakeNameEx(0xD5230, "Timing_Compensation_Per_Cylinder_C_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD52DC, "Timing_Compensation_Per_Cylinder_D___", SN_CHECK);
referenceAddress = DfirstB(0xD52DC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_D___", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_D___\n");
}

MakeNameEx(0xD528C, "Timing_Compensation_Per_Cylinder_D_X_AXIS___", SN_CHECK);
MakeNameEx(0xD52C4, "Timing_Compensation_Per_Cylinder_D_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD2C18, "Timing_Comp_Minimum_Load_Per_Cylinder___", SN_CHECK);
MakeNameEx(0xD2C14, "Timing_Comp_Maximum_RPM_Per_Cylinder___", SN_CHECK);
MakeNameEx(0xD2C1C, "Timing_Comp_Minimum_Coolant_Temp_Per_Cylinder___", SN_CHECK);
MakeNameEx(0xD2C28, "Feedback_Correction_Range_RPM___", SN_CHECK);
MakeNameEx(0xD2C20, "Feedback_Correction_Minimum_Load___", SN_CHECK);
MakeNameEx(0xD2C48, "Feedback_Correction_Retard_Value___", SN_CHECK);
MakeNameEx(0xD2C44, "Feedback_Correction_Retard_Limit___", SN_CHECK);
MakeNameEx(0xD2C4C, "Feedback_Correction_Negative_Advance_Value___", SN_CHECK);
MakeNameEx(0xD28B8, "Feedback_Correction_Negative_Advance_Delay___", SN_CHECK);
MakeNameEx(0xD2C54, "Extended_Feedback_Correction_High_RPM_Compensation___", SN_CHECK);
MakeNameEx(0xD2DE8, "Fine_Correction_Range_RPM___", SN_CHECK);
MakeNameEx(0xD2DF8, "Fine_Correction_Range_Load___", SN_CHECK);
MakeNameEx(0xD2D88, "Fine_Correction_Rows_RPM___", SN_CHECK);
MakeNameEx(0xD2DA4, "Fine_Correction_Columns_Load___", SN_CHECK);
MakeNameEx(0xD2DCC, "Fine_Correction_Retard_Value___", SN_CHECK);
MakeNameEx(0xD2DC8, "Fine_Correction_Retard_Limit___", SN_CHECK);
MakeNameEx(0xD2DC4, "Fine_Correction_Advance_Value___", SN_CHECK);
MakeNameEx(0xD2DC0, "Fine_Correction_Advance_Limit___", SN_CHECK);
MakeNameEx(0xD28C8, "Fine_Correction_Advance_Delay___", SN_CHECK);
MakeNameEx(0xD2D38, "Rough_Correction_Range_RPM___", SN_CHECK);
MakeNameEx(0xD2D48, "Rough_Correction_Range_Load___", SN_CHECK);
MakeNameEx(0xD2D58, "Rough_Correction_Minimum_KC_Advance_Map_Value___", SN_CHECK);
MakeNameEx(0xD3A00, "Rough_Correction_Learning_Delay_Increasing____", SN_CHECK);
referenceAddress = DfirstB(0xD3A00);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Rough_Correction_Learning_Delay_Increasing____", SN_CHECK);
}
else
{
    Message("No reference to Rough_Correction_Learning_Delay_Increasing____\n");
}

MakeNameEx(0xD39D8, "Rough_Correction_Learning_Delay_Increasing_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD2D5C, "Advance_Multiplier_Initial___", SN_CHECK);
MakeNameEx(0xD2D60, "Advance_Multiplier_Step_Value___", SN_CHECK);
MakeNameEx(0xDA574, "Intake_Cam_Advance_Angle_Cruise_AVCS___", SN_CHECK);
referenceAddress = DfirstB(0xDA574);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_Cruise_AVCS___", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_Cruise_AVCS___\n");
}

MakeNameEx(0xDA4EC, "Intake_Cam_Advance_Angle_Cruise_AVCS_X_AXIS___", SN_CHECK);
MakeNameEx(0xDA534, "Intake_Cam_Advance_Angle_Cruise_AVCS_Y_AXIS___", SN_CHECK);
MakeNameEx(0xDA83C, "Intake_Cam_Advance_Angle_NonCruise_AVCS___", SN_CHECK);
referenceAddress = DfirstB(0xDA83C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_NonCruise_AVCS___", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_NonCruise_AVCS___\n");
}

MakeNameEx(0xDA7B4, "Intake_Cam_Advance_Angle_NonCruise_AVCS_X_AXIS___", SN_CHECK);
MakeNameEx(0xDA7FC, "Intake_Cam_Advance_Angle_NonCruise_AVCS_Y_AXIS___", SN_CHECK);
MakeNameEx(0xF9EE0, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport___", SN_CHECK);
referenceAddress = DfirstB(0xF9EE0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport___", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport___\n");
}

MakeNameEx(0xF9E60, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_X_AXIS___", SN_CHECK);
MakeNameEx(0xF9E9C, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Y_AXIS___", SN_CHECK);
MakeNameEx(0xFA160, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp___", SN_CHECK);
referenceAddress = DfirstB(0xFA160);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp___", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp___\n");
}

MakeNameEx(0xFA0E0, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp_X_AXIS___", SN_CHECK);
MakeNameEx(0xFA11C, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp_Y_AXIS___", SN_CHECK);
MakeNameEx(0xFA3E0, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent___", SN_CHECK);
referenceAddress = DfirstB(0xFA3E0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent___", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent___\n");
}

MakeNameEx(0xFA360, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent_X_AXIS___", SN_CHECK);
MakeNameEx(0xFA39C, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent_Y_AXIS___", SN_CHECK);
MakeNameEx(0xF9054, "Requested_Torque_Base_RPM___", SN_CHECK);
referenceAddress = DfirstB(0xF9054);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Base_RPM___", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Base_RPM___\n");
}

MakeNameEx(0xF9014, "Requested_Torque_Base_RPM_Y_AXIS___", SN_CHECK);
MakeNameEx(0xF9504, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio___", SN_CHECK);
referenceAddress = DfirstB(0xF9504);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio___", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio___\n");
}

MakeNameEx(0xF9484, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_X_AXIS___", SN_CHECK);
MakeNameEx(0xF94C4, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_Y_AXIS___", SN_CHECK);
MakeNameEx(0xF9784, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio___", SN_CHECK);
referenceAddress = DfirstB(0xF9784);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio___", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio___\n");
}

MakeNameEx(0xF9704, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_X_AXIS___", SN_CHECK);
MakeNameEx(0xF9744, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_Y_AXIS___", SN_CHECK);
MakeNameEx(0xF9A04, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio___", SN_CHECK);
referenceAddress = DfirstB(0xF9A04);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio___", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio___\n");
}

MakeNameEx(0xF9984, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_X_AXIS___", SN_CHECK);
MakeNameEx(0xF99C4, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_Y_AXIS___", SN_CHECK);
MakeNameEx(0xF9C88, "Requested_Torque_Limit_A_Per_GearEngine_Speed___", SN_CHECK);
referenceAddress = DfirstB(0xF9C88);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Limit_A_Per_GearEngine_Speed___", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Limit_A_Per_GearEngine_Speed___\n");
}

MakeNameEx(0xF9C30, "Requested_Torque_Limit_A_Per_GearEngine_Speed_X_AXIS___", SN_CHECK);
MakeNameEx(0xF9C70, "Requested_Torque_Limit_A_Per_GearEngine_Speed_Y_AXIS___", SN_CHECK);
MakeNameEx(0xF9DA0, "Requested_Torque_Limit_B_Per_GearEngine_Speed___", SN_CHECK);
referenceAddress = DfirstB(0xF9DA0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Limit_B_Per_GearEngine_Speed___", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Limit_B_Per_GearEngine_Speed___\n");
}

MakeNameEx(0xF9D48, "Requested_Torque_Limit_B_Per_GearEngine_Speed_X_AXIS___", SN_CHECK);
MakeNameEx(0xF9D88, "Requested_Torque_Limit_B_Per_GearEngine_Speed_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCC46C, "Rev_Limit_Fuel_Cut___", SN_CHECK);
MakeNameEx(0xCC484, "Rev_Limit_Fuel_Resume_Boost___", SN_CHECK);
MakeNameEx(0xCC48C, "Speed_Limiting_Enable_Fuel_Cut___", SN_CHECK);
MakeNameEx(0xCC494, "Speed_Limiting_Disable_Fuel_Cut___", SN_CHECK);
MakeNameEx(0xF8E48, "Speed_Limiting_A_Throttle_SIDRIVE_SportSport_Sharp___", SN_CHECK);
MakeNameEx(0xF8E60, "Speed_Limiting_B_Throttle_SIDRIVE_SportSport_Sharp___", SN_CHECK);
MakeNameEx(0xF8E54, "Speed_Limiting_Throttle_SIDRIVE_Intelligent___", SN_CHECK);
MakeNameEx(0xD8C2C, "Fuel_Temp_Sensor_Scaling___", SN_CHECK);
referenceAddress = DfirstB(0xD8C2C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Fuel_Temp_Sensor_Scaling___", SN_CHECK);
}
else
{
    Message("No reference to Fuel_Temp_Sensor_Scaling___\n");
}

MakeNameEx(0xD8BB4, "Fuel_Temp_Sensor_Scaling_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD8B3C, "Intake_Temp_Sensor_Scaling___", SN_CHECK);
referenceAddress = DfirstB(0xD8B3C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Intake_Temp_Sensor_Scaling___", SN_CHECK);
}
else
{
    Message("No reference to Intake_Temp_Sensor_Scaling___\n");
}

MakeNameEx(0xD8AC4, "Intake_Temp_Sensor_Scaling_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD8A54, "Coolant_Temp_Sensor_Scaling___", SN_CHECK);
referenceAddress = DfirstB(0xD8A54);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Coolant_Temp_Sensor_Scaling___", SN_CHECK);
}
else
{
    Message("No reference to Coolant_Temp_Sensor_Scaling___\n");
}

MakeNameEx(0xD89E4, "Coolant_Temp_Sensor_Scaling_Y_AXIS___", SN_CHECK);
MakeNameEx(0x4B45C, "Fuel_Pump_Duty___", SN_CHECK);
MakeNameEx(0xD8F34, "Radiator_Fan_Modes_A_ECT___", SN_CHECK);
MakeNameEx(0xD8F44, "Radiator_Fan_Modes_B_ECT___", SN_CHECK);
MakeNameEx(0xD8F54, "Radiator_Fan_Modes_Veh_Speed___", SN_CHECK);
MakeNameEx(0xC344C, "Gear_Determination_Thresholds_A___", SN_CHECK);
MakeNameEx(0xC3460, "Gear_Determination_Thresholds_B___", SN_CHECK);
MakeNameEx(0xC3474, "Gear_Determination_Thresholds_C___", SN_CHECK);
MakeNameEx(0xD6B6C, "Idle_Speed_Target_A___", SN_CHECK);
referenceAddress = DfirstB(0xD6B6C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_A___", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_A___\n");
}

MakeNameEx(0xD6400, "Idle_Speed_Target_A_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD6BAC, "Idle_Speed_Target_B___", SN_CHECK);
referenceAddress = DfirstB(0xD6BAC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_B___", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_B___\n");
}

MakeNameEx(0xD6400, "Idle_Speed_Target_B_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD6BEC, "Idle_Speed_Target_C___", SN_CHECK);
referenceAddress = DfirstB(0xD6BEC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_C___", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_C___\n");
}

MakeNameEx(0xD6400, "Idle_Speed_Target_C_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD6C8C, "Idle_Speed_Target_D___", SN_CHECK);
referenceAddress = DfirstB(0xD6C8C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_D___", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_D___\n");
}

MakeNameEx(0xD6400, "Idle_Speed_Target_D_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD8DE8, "Ignition_Dwell___", SN_CHECK);
referenceAddress = DfirstB(0xD8DE8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Ignition_Dwell___", SN_CHECK);
}
else
{
    Message("No reference to Ignition_Dwell___\n");
}

MakeNameEx(0xD8D94, "Ignition_Dwell_X_AXIS___", SN_CHECK);
MakeNameEx(0xD8DD4, "Ignition_Dwell_Y_AXIS___", SN_CHECK);
MakeNameEx(0x98CA2, "P0000_PASS_CODE_NO_DTC_DETECTED___", SN_CHECK);
MakeNameEx(0x98C85, "P0011_CAMSHAFT_POS_TIMING_OVERADVANCED_1___", SN_CHECK);
MakeNameEx(0x98D13, "P0016_CRANKSHAFTCAMSHAFT_CORRELATION_1A___", SN_CHECK);
MakeNameEx(0x98D12, "P0018_CRANKSHAFTCAMSHAFT_CORRELATION_2A___", SN_CHECK);
MakeNameEx(0x98C86, "P0021_CAMSHAFT_POS_TIMING_OVERADVANCED_2___", SN_CHECK);
MakeNameEx(0x98CC6, "P0030_FRONT_O2_SENSOR_RANGEPERF___", SN_CHECK);
MakeNameEx(0x98CB1, "P0031_FRONT_O2_SENSOR_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x98CAF, "P0032_FRONT_O2_SENSOR_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x98CB0, "P0037_REAR_O2_SENSOR_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x98CAE, "P0038_REAR_O2_SENSOR_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x98CC1, "P0068_MAP_SENSOR_RANGEPERF___", SN_CHECK);
MakeNameEx(0x98CC2, "P0101_MAF_SENSOR_RANGEPERF___", SN_CHECK);
MakeNameEx(0x98C61, "P0102_MAF_SENSOR_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x98C62, "P0103_MAF_SENSOR_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x98CB2, "P0107_MAP_SENSOR_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x98CB3, "P0108_MAP_SENSOR_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x98CAD, "P0111_IAT_SENSOR_RANGEPERF___", SN_CHECK);
MakeNameEx(0x98CAB, "P0112_IAT_SENSOR_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x98CAC, "P0113_IAT_SENSOR_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x98C6A, "P0117_COOLANT_TEMP_SENSOR_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x98C6B, "P0118_COOLANT_TEMP_SENSOR_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x98C68, "P0122_TPS_A_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x98C69, "P0123_TPS_A_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x98C6D, "P0125_INSUFFICIENT_COOLANT_TEMP_FUELING___", SN_CHECK);
MakeNameEx(0x98CFB, "P0126_INSUFFICIENT_COOLANT_TEMP_OPERATION___", SN_CHECK);
MakeNameEx(0x98CB8, "P0128_THERMOSTAT_MALFUNCTION___", SN_CHECK);
MakeNameEx(0x98CA5, "P0131_FRONT_O2_SENSOR_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x98CA7, "P0132_FRONT_O2_SENSOR_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x98CC4, "P0134_FRONT_O2_SENSOR_NO_ACTIVITY___", SN_CHECK);
MakeNameEx(0x98CA4, "P0137_REAR_O2_SENSOR_LOW_VOLTAGE___", SN_CHECK);
MakeNameEx(0x98CA9, "P0138_REAR_O2_SENSOR_HIGH_VOLTAGE___", SN_CHECK);
MakeNameEx(0x98D0E, "P0140_REAR_O2_SENSOR_NO_ACTIVITY___", SN_CHECK);
MakeNameEx(0x98C8E, "P0141_REAR_O2_SENSOR_MALFUNCTION___", SN_CHECK);
MakeNameEx(0x98D3E, "P014C_O2_SENSOR_SLOW_RESPONSE_RICH_TO_LEAN_B1_S1___", SN_CHECK);
MakeNameEx(0x98D3D, "P014D_O2_SENSOR_SLOW_RESPONSE_LEAN_TO_RICH_B1_S1___", SN_CHECK);
MakeNameEx(0x98D3A, "P015A_O2_SENSOR_DELAYED_RESPONSE_RICH_TO_LEAN_B1_S1___", SN_CHECK);
MakeNameEx(0x98C99, "P0171_SYSTEM_TOO_LEAN___", SN_CHECK);
MakeNameEx(0x98C9A, "P0172_SYSTEM_TOO_RICH___", SN_CHECK);
MakeNameEx(0x98CCD, "P0222_TPS_B_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x98CCE, "P0223_TPS_B_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x98CC0, "P0230_FUEL_PUMP_PRIMARY_CIRCUIT___", SN_CHECK);
MakeNameEx(0x98CBF, "P0244_WASTEGATE_SOLENOID_A_RANGEPERF___", SN_CHECK);
MakeNameEx(0x98CBD, "P0245_WASTEGATE_SOLENOID_A_LOW___", SN_CHECK);
MakeNameEx(0x98CBE, "P0246_WASTEGATE_SOLENOID_A_HIGH___", SN_CHECK);
MakeNameEx(0x98C9B, "P0301_MISFIRE_CYLINDER_1___", SN_CHECK);
MakeNameEx(0x98C9C, "P0302_MISFIRE_CYLINDER_2___", SN_CHECK);
MakeNameEx(0x98C9D, "P0303_MISFIRE_CYLINDER_3___", SN_CHECK);
MakeNameEx(0x98C9E, "P0304_MISFIRE_CYLINDER_4___", SN_CHECK);
MakeNameEx(0x98C66, "P0327_KNOCK_SENSOR_1_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x98C67, "P0328_KNOCK_SENSOR_1_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x98C5C, "P0335_CRANKSHAFT_POS_SENSOR_A_MALFUNCTION___", SN_CHECK);
MakeNameEx(0x98C5D, "P0336_CRANKSHAFT_POS_SENSOR_A_RANGEPERF___", SN_CHECK);
MakeNameEx(0x98CE0, "P0340_CAMSHAFT_POS_SENSOR_A_MALFUNCTION___", SN_CHECK);
MakeNameEx(0x98CDF, "P0345_CAMSHAFT_POS_SENSOR_A_BANK_2___", SN_CHECK);
MakeNameEx(0x98D08, "P0410_SECONDARY_AIR_PUMP_SYSTEM___", SN_CHECK);
MakeNameEx(0x98D07, "P0411_SECONDARY_AIR_PUMP_INCORRECT_FLOW___", SN_CHECK);
MakeNameEx(0x98D0C, "P0413_SECONDARY_AIR_PUMP_A_OPEN___", SN_CHECK);
MakeNameEx(0x98D10, "P0414_SECONDARY_AIR_PUMP_A_SHORTED___", SN_CHECK);
MakeNameEx(0x98D1A, "P0416_SECONDARY_AIR_PUMP_B_OPEN___", SN_CHECK);
MakeNameEx(0x98D19, "P0417_SECONDARY_AIR_PUMP_B_SHORTED___", SN_CHECK);
MakeNameEx(0x98D0D, "P0418_SECONDARY_AIR_PUMP_RELAY_A___", SN_CHECK);
MakeNameEx(0x98C95, "P0420_CAT_EFFICIENCY_BELOW_THRESHOLD___", SN_CHECK);
MakeNameEx(0x98D44, "P0441_EVAP_INCORRECT_PURGE_FLOW___", SN_CHECK);
MakeNameEx(0x98D43, "P0451_EVAP_PRESSURE_SENSOR_RANGEPERF___", SN_CHECK);
MakeNameEx(0x98D36, "P0452_EVAP_PRESSURE_SENSOR_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x98D35, "P0453_EVAP_PRESSURE_SENSOR_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x98D42, "P0455_EVAP_EMISSION_CONTROL_SYSTEM_LEAK_DETECTED_GROSS_LEAK___", SN_CHECK);
MakeNameEx(0x98C97, "P0456_EVAP_LEAK_DETECTED_VERY_SMALL___", SN_CHECK);
MakeNameEx(0x98C89, "P0458_EVAP_PURGE_VALVE_CIRCUIT_LOW___", SN_CHECK);
MakeNameEx(0x98C8A, "P0459_EVAP_PURGE_VALVE_CIRCUIT_HIGH___", SN_CHECK);
MakeNameEx(0x98C70, "P0461_FUEL_LEVEL_SENSOR_RANGEPERF___", SN_CHECK);
MakeNameEx(0x98C6E, "P0462_FUEL_LEVEL_SENSOR_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x98C6F, "P0463_FUEL_LEVEL_SENSOR_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x98C63, "P0500_VEHICLE_SPEED_SENSOR_A___", SN_CHECK);
MakeNameEx(0x98C83, "P0506_IDLE_CONTROL_RPM_LOWER_THAN_EXPECTED___", SN_CHECK);
MakeNameEx(0x98C84, "P0507_IDLE_CONTROL_RPM_HIGH_THAN_EXPECTED___", SN_CHECK);
MakeNameEx(0x98D30, "P050A_COLD_START_IDLE_AIR_CONTROL_SYSTEM_PERFORMANCE___", SN_CHECK);
MakeNameEx(0x98D2F, "P050B_COLD_START_IGNITION_TIMING_PERFORMANCE___", SN_CHECK);
MakeNameEx(0x98C72, "P0512_STARTER_REQUEST_CIRCUIT___", SN_CHECK);
MakeNameEx(0x98C60, "P0604_CONTROL_MODULE_RAM_ERROR___", SN_CHECK);
MakeNameEx(0x98CE1, "P0605_CONTROL_MODULE_ROM_ERROR___", SN_CHECK);
MakeNameEx(0x98CD5, "P0607_CONTROL_MODULE_PERFORMANCE___", SN_CHECK);
MakeNameEx(0x98CD4, "P0638_THROTTLE_ACTUATOR_RANGEPERF___", SN_CHECK);
MakeNameEx(0x98C76, "P0851_NEUTRAL_SWITCH_INPUT_LOW___", SN_CHECK);
MakeNameEx(0x98C7A, "P0852_NEUTRAL_SWITCH_INPUT_HIGH___", SN_CHECK);
MakeNameEx(0x98C91, "P1152_FRONT_O2_SENSOR_RANGEPERF_LOW_B1_S1___", SN_CHECK);
MakeNameEx(0x98C92, "P1153_FRONT_O2_SENSOR_RANGEPERF_HIGH_B1_S1___", SN_CHECK);
MakeNameEx(0x98CCF, "P1160_ABNORMAL_RETURN_SPRING___", SN_CHECK);
MakeNameEx(0x98C87, "P1400_FUEL_TANK_PRESSURE_SOL_LOW___", SN_CHECK);
MakeNameEx(0x98D14, "P1410_SECONDARY_AIR_PUMP_VALVE_STUCK_OPEN___", SN_CHECK);
MakeNameEx(0x98D11, "P1418_SECONDARY_AIR_PUMP_CIRCUIT_SHORTED___", SN_CHECK);
MakeNameEx(0x98C88, "P1420_FUEL_TANK_PRESSURE_SOL_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x98D41, "P1449_EVAPORATIVE_EMISSION_CONT_SYS_AIR_FILTER_CLOG___", SN_CHECK);
MakeNameEx(0x98D40, "P1451_EVAPORATIVE_EMISSION_CONT_SYS___", SN_CHECK);
MakeNameEx(0x98D3F, "P1458_CANISTER_PURGE_CONTROL_SOLENOID_VALVE_2_LOW___", SN_CHECK);
MakeNameEx(0x98D49, "P1459_CANISTER_PURGE_CONTROL_SOLENOID_VALVE_2_HIGH___", SN_CHECK);
MakeNameEx(0x98CB9, "P1491_PCV_BLOWBY_FUNCTION_PROBLEM___", SN_CHECK);
MakeNameEx(0x98C71, "P1518_STARTER_SWITCH_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x98D1F, "P1519_IMRC_STUCK_CLOSED___", SN_CHECK);
MakeNameEx(0x98D1E, "P1520_IMRC_CIRCUIT_MALFUNCTION___", SN_CHECK);
MakeNameEx(0x98CBA, "P1560_BACKUP_VOLTAGE_MALFUNCTION___", SN_CHECK);
MakeNameEx(0x98D1D, "P1616_SBDS_INTERACTIVE_CODES___", SN_CHECK);
MakeNameEx(0x98CF6, "P2004_TGV_INTAKE_MANIFOLD_RUNNER_1_STUCK_OPEN___", SN_CHECK);
MakeNameEx(0x98CF8, "P2005_TGV_INTAKE_MANIFOLD_RUNNER_2_STUCK_OPEN___", SN_CHECK);
MakeNameEx(0x98CF7, "P2006_TGV_INTAKE_MANIFOLD_RUNNER_1_STUCK_CLOSED___", SN_CHECK);
MakeNameEx(0x98CF9, "P2007_TGV_INTAKE_MANIFOLD_RUNNER_2_STUCK_CLOSED___", SN_CHECK);
MakeNameEx(0x98D04, "P2008_TGV_INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_OPEN___", SN_CHECK);
MakeNameEx(0x98D02, "P2009_TGV_INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_LOW___", SN_CHECK);
MakeNameEx(0x98D05, "P2011_TGV_INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_OPEN___", SN_CHECK);
MakeNameEx(0x98D03, "P2012_TGV_INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_LOW___", SN_CHECK);
MakeNameEx(0x98CFE, "P2016_TGV_INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_LOW___", SN_CHECK);
MakeNameEx(0x98CFF, "P2017_TGV_INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_HIGH___", SN_CHECK);
MakeNameEx(0x98D00, "P2021_TGV_INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_LOW___", SN_CHECK);
MakeNameEx(0x98D01, "P2022_TGV_INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_HIGH___", SN_CHECK);
MakeNameEx(0x98CE9, "P2088_OCV_SOLENOID_A1_CIRCUIT_OPEN___", SN_CHECK);
MakeNameEx(0x98CE8, "P2089_OCV_SOLENOID_A1_CIRCUIT_SHORT___", SN_CHECK);
MakeNameEx(0x98CE7, "P2092_OCV_SOLENOID_A2_CIRCUIT_OPEN___", SN_CHECK);
MakeNameEx(0x98CE6, "P2093_OCV_SOLENOID_A2_CIRCUIT_SHORT___", SN_CHECK);
MakeNameEx(0x98CD3, "P2096_POST_CATALYST_TOO_LEAN_B1___", SN_CHECK);
MakeNameEx(0x98CDC, "P2097_POST_CATALYST_TOO_RICH_B1___", SN_CHECK);
MakeNameEx(0x98CD2, "P2101_THROTTLE_ACTUATOR_CIRCUIT_RANGEPERF___", SN_CHECK);
MakeNameEx(0x98CD0, "P2102_THROTTLE_ACTUATOR_CIRCUIT_LOW___", SN_CHECK);
MakeNameEx(0x98CD1, "P2103_THROTTLE_ACTUATOR_CIRCUIT_HIGH___", SN_CHECK);
MakeNameEx(0x98CCC, "P2109_TPS_A_MINIMUM_STOP_PERF___", SN_CHECK);
MakeNameEx(0x98CD9, "P2122_TPS_D_CIRCUIT_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x98CDA, "P2123_TPS_D_CIRCUIT_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x98CD7, "P2127_TPS_E_CIRCUIT_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x98CD8, "P2128_TPS_E_CIRCUIT_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x98CDB, "P2135_TPS_AB_VOLTAGE___", SN_CHECK);
MakeNameEx(0x98CD6, "P2138_TPS_DE_VOLTAGE___", SN_CHECK);
MakeNameEx(0x98D46, "P219A_BANK_1_AFR_IMBALANCE___", SN_CHECK);
MakeNameEx(0x98D34, "P2401_EVAP_LEAK_DETECTION_PUMP_CONTROL_CIRCUIT_LOW___", SN_CHECK);
MakeNameEx(0x98D48, "P2402_EVAP_LEAK_DETECTION_PUMP_CONTROL_CIRCUIT_HIGH___", SN_CHECK);
MakeNameEx(0x98D33, "P2419_EVAP_SWITCHING_VALVE_LOW___", SN_CHECK);
MakeNameEx(0x98D32, "P2420_EVAP_SWITCHING_VALVE_HIGH___", SN_CHECK);
MakeNameEx(0x98D09, "P2431_SECONDARY_AIR_PUMP_CIRCUIT_RANGEPERF___", SN_CHECK);
MakeNameEx(0x98D0B, "P2432_SECONDARY_AIR_PUMP_CIRCUIT_LOW___", SN_CHECK);
MakeNameEx(0x98D0A, "P2433_SECONDARY_AIR_PUMP_CIRCUIT_HIGH___", SN_CHECK);
MakeNameEx(0x98D18, "P2440_SECONDARY_AIR_PUMP_VALVE_1_STUCK_OPEN___", SN_CHECK);
MakeNameEx(0x98D17, "P2441_SECONDARY_AIR_PUMP_VALVE_1_STUCK_CLOSED___", SN_CHECK);
MakeNameEx(0x98D16, "P2442_SECONDARY_AIR_PUMP_VALVE_2_STUCK_OPEN___", SN_CHECK);
MakeNameEx(0x98D15, "P2443_SECONDARY_AIR_PUMP_2_STUCK_CLOSED___", SN_CHECK);
MakeNameEx(0x98D06, "P2444_SECONDARY_AIR_PUMP_1_STUCK_ON_B1___", SN_CHECK);
MakeNameEx(0x98D2D, "U0073_CAN_COMMUNICATION_BUS_A_OFF___", SN_CHECK);
MakeNameEx(0x98D2A, "U0101_CAN_LOST_COMMUNICATION_WITH_TCM___", SN_CHECK);
MakeNameEx(0x98D2C, "U0122_CAN_LOST_COMMUNICATION_WITH_VDC___", SN_CHECK);
MakeNameEx(0x98D28, "U0140_CAN_LOST_COMMUNICATION_WITH_BIU___", SN_CHECK);
MakeNameEx(0x98D29, "U0402_CAN_INVALID_DATA_RECEIVED_FROM_TCM___", SN_CHECK);
MakeNameEx(0x98D2B, "U0416_CAN_INVALID_DATA_RECEIVED_FROM_VDC___", SN_CHECK);
MakeNameEx(0x98D27, "U0422_CAN_INVALID_DATA_RECEIVED_FROM_BIU___", SN_CHECK);
}   // end of Tables

static StdParams ()
{
Message("--- Now marking StdParams ---\n");
auto addr;
MakeUnknown(0x00063248, 4, DOUNK_SIMPLE);
MakeDword(0x00063248);
MakeNameEx(0x00063248, "PtrSsmGet_Engine_Load_Relative_P1___", SN_CHECK);
addr = Dword(0x00063248);
MakeNameEx(addr, "SsmGet_Engine_Load_Relative_P1___", SN_CHECK);

MakeUnknown(0x0006324C, 4, DOUNK_SIMPLE);
MakeDword(0x0006324C);
MakeNameEx(0x0006324C, "PtrSsmGet_Coolant_Temperature_P2___", SN_CHECK);
addr = Dword(0x0006324C);
MakeNameEx(addr, "SsmGet_Coolant_Temperature_P2___", SN_CHECK);

MakeUnknown(0x00063250, 4, DOUNK_SIMPLE);
MakeDword(0x00063250);
MakeNameEx(0x00063250, "PtrSsmGet_AF_Correction_1_P3___", SN_CHECK);
addr = Dword(0x00063250);
MakeNameEx(addr, "SsmGet_AF_Correction_1_P3___", SN_CHECK);

MakeUnknown(0x00063254, 4, DOUNK_SIMPLE);
MakeDword(0x00063254);
MakeNameEx(0x00063254, "PtrSsmGet_AF_Learning_1_P4___", SN_CHECK);
addr = Dword(0x00063254);
MakeNameEx(addr, "SsmGet_AF_Learning_1_P4___", SN_CHECK);

MakeUnknown(0x00063258, 4, DOUNK_SIMPLE);
MakeDword(0x00063258);
MakeNameEx(0x00063258, "PtrSsmGet_AF_Correction_2_P5___", SN_CHECK);
addr = Dword(0x00063258);
MakeNameEx(addr, "SsmGet_AF_Correction_2_P5___", SN_CHECK);

MakeUnknown(0x0006325C, 4, DOUNK_SIMPLE);
MakeDword(0x0006325C);
MakeNameEx(0x0006325C, "PtrSsmGet_AF_Learning_2_P6___", SN_CHECK);
addr = Dword(0x0006325C);
MakeNameEx(addr, "SsmGet_AF_Learning_2_P6___", SN_CHECK);

MakeUnknown(0x00063260, 4, DOUNK_SIMPLE);
MakeDword(0x00063260);
MakeNameEx(0x00063260, "PtrSsmGet_Manifold_Absolute_Pressure_P7___", SN_CHECK);
addr = Dword(0x00063260);
MakeNameEx(addr, "SsmGet_Manifold_Absolute_Pressure_P7___", SN_CHECK);

MakeUnknown(0x00063264, 4, DOUNK_SIMPLE);
MakeDword(0x00063264);
MakeNameEx(0x00063264, "PtrSsmGet_Engine_Speed_P8___", SN_CHECK);
addr = Dword(0x00063264);
MakeNameEx(addr, "SsmGet_Engine_Speed_P8___", SN_CHECK);

MakeUnknown(0x0006326C, 4, DOUNK_SIMPLE);
MakeDword(0x0006326C);
MakeNameEx(0x0006326C, "PtrSsmGet_Vehicle_Speed_P9___", SN_CHECK);
addr = Dword(0x0006326C);
MakeNameEx(addr, "SsmGet_Vehicle_Speed_P9___", SN_CHECK);

MakeUnknown(0x00063270, 4, DOUNK_SIMPLE);
MakeDword(0x00063270);
MakeNameEx(0x00063270, "PtrSsmGet_Ignition_Total_Timing_P10___", SN_CHECK);
addr = Dword(0x00063270);
MakeNameEx(addr, "SsmGet_Ignition_Total_Timing_P10___", SN_CHECK);

MakeUnknown(0x00063274, 4, DOUNK_SIMPLE);
MakeDword(0x00063274);
MakeNameEx(0x00063274, "PtrSsmGet_Intake_Air_Temperature_P11___", SN_CHECK);
addr = Dword(0x00063274);
MakeNameEx(addr, "SsmGet_Intake_Air_Temperature_P11___", SN_CHECK);

MakeUnknown(0x00063278, 4, DOUNK_SIMPLE);
MakeDword(0x00063278);
MakeNameEx(0x00063278, "PtrSsmGet_Mass_Airflow_P12___", SN_CHECK);
addr = Dword(0x00063278);
MakeNameEx(addr, "SsmGet_Mass_Airflow_P12___", SN_CHECK);

MakeUnknown(0x00063280, 4, DOUNK_SIMPLE);
MakeDword(0x00063280);
MakeNameEx(0x00063280, "PtrSsmGet_Throttle_Opening_Angle_P13___", SN_CHECK);
addr = Dword(0x00063280);
MakeNameEx(addr, "SsmGet_Throttle_Opening_Angle_P13___", SN_CHECK);

MakeUnknown(0x00063284, 4, DOUNK_SIMPLE);
MakeDword(0x00063284);
MakeNameEx(0x00063284, "PtrSsmGet_Front_O2_Sensor_1_P14___", SN_CHECK);
addr = Dword(0x00063284);
MakeNameEx(addr, "SsmGet_Front_O2_Sensor_1_P14___", SN_CHECK);

MakeUnknown(0x0006328C, 4, DOUNK_SIMPLE);
MakeDword(0x0006328C);
MakeNameEx(0x0006328C, "PtrSsmGet_Rear_O2_Sensor_P15___", SN_CHECK);
addr = Dword(0x0006328C);
MakeNameEx(addr, "SsmGet_Rear_O2_Sensor_P15___", SN_CHECK);

MakeUnknown(0x00063294, 4, DOUNK_SIMPLE);
MakeDword(0x00063294);
MakeNameEx(0x00063294, "PtrSsmGet_Front_O2_Sensor_2_P16___", SN_CHECK);
addr = Dword(0x00063294);
MakeNameEx(addr, "SsmGet_Front_O2_Sensor_2_P16___", SN_CHECK);

MakeUnknown(0x0006329C, 4, DOUNK_SIMPLE);
MakeDword(0x0006329C);
MakeNameEx(0x0006329C, "PtrSsmGet_Battery_Voltage_P17___", SN_CHECK);
addr = Dword(0x0006329C);
MakeNameEx(addr, "SsmGet_Battery_Voltage_P17___", SN_CHECK);

MakeUnknown(0x000632A0, 4, DOUNK_SIMPLE);
MakeDword(0x000632A0);
MakeNameEx(0x000632A0, "PtrSsmGet_Mass_Airflow_Sensor_Voltage_P18___", SN_CHECK);
addr = Dword(0x000632A0);
MakeNameEx(addr, "SsmGet_Mass_Airflow_Sensor_Voltage_P18___", SN_CHECK);

MakeUnknown(0x000632A4, 4, DOUNK_SIMPLE);
MakeDword(0x000632A4);
MakeNameEx(0x000632A4, "PtrSsmGet_Throttle_Sensor_Voltage_P19___", SN_CHECK);
addr = Dword(0x000632A4);
MakeNameEx(addr, "SsmGet_Throttle_Sensor_Voltage_P19___", SN_CHECK);

MakeUnknown(0x000632A8, 4, DOUNK_SIMPLE);
MakeDword(0x000632A8);
MakeNameEx(0x000632A8, "PtrSsmGet_Differential_Pressure_Sensor_Voltage_P20___", SN_CHECK);
addr = Dword(0x000632A8);
MakeNameEx(addr, "SsmGet_Differential_Pressure_Sensor_Voltage_P20___", SN_CHECK);

MakeUnknown(0x000632AC, 4, DOUNK_SIMPLE);
MakeDword(0x000632AC);
MakeNameEx(0x000632AC, "PtrSsmGet_Fuel_Injector_1_Pulse_Width_P21___", SN_CHECK);
addr = Dword(0x000632AC);
MakeNameEx(addr, "SsmGet_Fuel_Injector_1_Pulse_Width_P21___", SN_CHECK);

MakeUnknown(0x000632B0, 4, DOUNK_SIMPLE);
MakeDword(0x000632B0);
MakeNameEx(0x000632B0, "PtrSsmGet_Fuel_Injector_2_Pulse_Width_P22___", SN_CHECK);
addr = Dword(0x000632B0);
MakeNameEx(addr, "SsmGet_Fuel_Injector_2_Pulse_Width_P22___", SN_CHECK);

MakeUnknown(0x000632B4, 4, DOUNK_SIMPLE);
MakeDword(0x000632B4);
MakeNameEx(0x000632B4, "PtrSsmGet_Knock_Correction_Advance_P23___", SN_CHECK);
addr = Dword(0x000632B4);
MakeNameEx(addr, "SsmGet_Knock_Correction_Advance_P23___", SN_CHECK);

MakeUnknown(0x000632B8, 4, DOUNK_SIMPLE);
MakeDword(0x000632B8);
MakeNameEx(0x000632B8, "PtrSsmGet_Atmospheric_Pressure_P24___", SN_CHECK);
addr = Dword(0x000632B8);
MakeNameEx(addr, "SsmGet_Atmospheric_Pressure_P24___", SN_CHECK);

MakeUnknown(0x000632BC, 4, DOUNK_SIMPLE);
MakeDword(0x000632BC);
MakeNameEx(0x000632BC, "PtrSsmGet_Manifold_Relative_Pressure_P25___", SN_CHECK);
addr = Dword(0x000632BC);
MakeNameEx(addr, "SsmGet_Manifold_Relative_Pressure_P25___", SN_CHECK);

MakeUnknown(0x000632C0, 4, DOUNK_SIMPLE);
MakeDword(0x000632C0);
MakeNameEx(0x000632C0, "PtrSsmGet_Pressure_Differential_Sensor_P26___", SN_CHECK);
addr = Dword(0x000632C0);
MakeNameEx(addr, "SsmGet_Pressure_Differential_Sensor_P26___", SN_CHECK);

MakeUnknown(0x000632C4, 4, DOUNK_SIMPLE);
MakeDword(0x000632C4);
MakeNameEx(0x000632C4, "PtrSsmGet_Fuel_Tank_Pressure_P27___", SN_CHECK);
addr = Dword(0x000632C4);
MakeNameEx(addr, "SsmGet_Fuel_Tank_Pressure_P27___", SN_CHECK);

MakeUnknown(0x000632C8, 4, DOUNK_SIMPLE);
MakeDword(0x000632C8);
MakeNameEx(0x000632C8, "PtrSsmGet_CO_Adjustment_P28___", SN_CHECK);
addr = Dword(0x000632C8);
MakeNameEx(addr, "SsmGet_CO_Adjustment_P28___", SN_CHECK);

MakeUnknown(0x000632CC, 4, DOUNK_SIMPLE);
MakeDword(0x000632CC);
MakeNameEx(0x000632CC, "PtrSsmGet_Learned_Ignition_Timing_P29___", SN_CHECK);
addr = Dword(0x000632CC);
MakeNameEx(addr, "SsmGet_Learned_Ignition_Timing_P29___", SN_CHECK);

MakeUnknown(0x000632D0, 4, DOUNK_SIMPLE);
MakeDword(0x000632D0);
MakeNameEx(0x000632D0, "PtrSsmGet_Accelerator_Pedal_Angle_P30___", SN_CHECK);
addr = Dword(0x000632D0);
MakeNameEx(addr, "SsmGet_Accelerator_Pedal_Angle_P30___", SN_CHECK);

MakeUnknown(0x000632D4, 4, DOUNK_SIMPLE);
MakeDword(0x000632D4);
MakeNameEx(0x000632D4, "PtrSsmGet_Fuel_Temperature_P31___", SN_CHECK);
addr = Dword(0x000632D4);
MakeNameEx(addr, "SsmGet_Fuel_Temperature_P31___", SN_CHECK);

MakeUnknown(0x000632D8, 4, DOUNK_SIMPLE);
MakeDword(0x000632D8);
MakeNameEx(0x000632D8, "PtrSsmGet_Front_O2_Heater_Current_1_P32___", SN_CHECK);
addr = Dword(0x000632D8);
MakeNameEx(addr, "SsmGet_Front_O2_Heater_Current_1_P32___", SN_CHECK);

MakeUnknown(0x000632DC, 4, DOUNK_SIMPLE);
MakeDword(0x000632DC);
MakeNameEx(0x000632DC, "PtrSsmGet_Rear_O2_Heater_Current_P33___", SN_CHECK);
addr = Dword(0x000632DC);
MakeNameEx(addr, "SsmGet_Rear_O2_Heater_Current_P33___", SN_CHECK);

MakeUnknown(0x000632E0, 4, DOUNK_SIMPLE);
MakeDword(0x000632E0);
MakeNameEx(0x000632E0, "PtrSsmGet_Front_O2_Heater_Current_2_P34___", SN_CHECK);
addr = Dword(0x000632E0);
MakeNameEx(addr, "SsmGet_Front_O2_Heater_Current_2_P34___", SN_CHECK);

MakeUnknown(0x000632E4, 4, DOUNK_SIMPLE);
MakeDword(0x000632E4);
MakeNameEx(0x000632E4, "PtrSsmGet_Fuel_Level_P35___", SN_CHECK);
addr = Dword(0x000632E4);
MakeNameEx(addr, "SsmGet_Fuel_Level_P35___", SN_CHECK);

MakeUnknown(0x000632EC, 4, DOUNK_SIMPLE);
MakeDword(0x000632EC);
MakeNameEx(0x000632EC, "PtrSsmGet_Primary_Wastegate_Duty_Cycle_P36___", SN_CHECK);
addr = Dword(0x000632EC);
MakeNameEx(addr, "SsmGet_Primary_Wastegate_Duty_Cycle_P36___", SN_CHECK);

MakeUnknown(0x000632F0, 4, DOUNK_SIMPLE);
MakeDword(0x000632F0);
MakeNameEx(0x000632F0, "PtrSsmGet_Secondary_Wastegate_Duty_Cycle_P37___", SN_CHECK);
addr = Dword(0x000632F0);
MakeNameEx(addr, "SsmGet_Secondary_Wastegate_Duty_Cycle_P37___", SN_CHECK);

MakeUnknown(0x000632F4, 4, DOUNK_SIMPLE);
MakeDword(0x000632F4);
MakeNameEx(0x000632F4, "PtrSsmGet_CPC_Valve_Duty_Ratio_P38___", SN_CHECK);
addr = Dword(0x000632F4);
MakeNameEx(addr, "SsmGet_CPC_Valve_Duty_Ratio_P38___", SN_CHECK);

MakeUnknown(0x000632F8, 4, DOUNK_SIMPLE);
MakeDword(0x000632F8);
MakeNameEx(0x000632F8, "PtrSsmGet_Tumble_Valve_Position_Sensor_Right_P39___", SN_CHECK);
addr = Dword(0x000632F8);
MakeNameEx(addr, "SsmGet_Tumble_Valve_Position_Sensor_Right_P39___", SN_CHECK);

MakeUnknown(0x000632FC, 4, DOUNK_SIMPLE);
MakeDword(0x000632FC);
MakeNameEx(0x000632FC, "PtrSsmGet_Tumble_Valve_Position_Sensor_Left_P40___", SN_CHECK);
addr = Dword(0x000632FC);
MakeNameEx(addr, "SsmGet_Tumble_Valve_Position_Sensor_Left_P40___", SN_CHECK);

MakeUnknown(0x00063300, 4, DOUNK_SIMPLE);
MakeDword(0x00063300);
MakeNameEx(0x00063300, "PtrSsmGet_Idle_Speed_Control_Valve_Duty_Ratio_P41___", SN_CHECK);
addr = Dword(0x00063300);
MakeNameEx(addr, "SsmGet_Idle_Speed_Control_Valve_Duty_Ratio_P41___", SN_CHECK);

MakeUnknown(0x00063304, 4, DOUNK_SIMPLE);
MakeDword(0x00063304);
MakeNameEx(0x00063304, "PtrSsmGet_AF_Lean_Correction_P42___", SN_CHECK);
addr = Dword(0x00063304);
MakeNameEx(addr, "SsmGet_AF_Lean_Correction_P42___", SN_CHECK);

MakeUnknown(0x00063308, 4, DOUNK_SIMPLE);
MakeDword(0x00063308);
MakeNameEx(0x00063308, "PtrSsmGet_AF_Heater_Duty_P43___", SN_CHECK);
addr = Dword(0x00063308);
MakeNameEx(addr, "SsmGet_AF_Heater_Duty_P43___", SN_CHECK);

MakeUnknown(0x0006330C, 4, DOUNK_SIMPLE);
MakeDword(0x0006330C);
MakeNameEx(0x0006330C, "PtrSsmGet_Idle_Speed_Control_Valve_Step_P44___", SN_CHECK);
addr = Dword(0x0006330C);
MakeNameEx(addr, "SsmGet_Idle_Speed_Control_Valve_Step_P44___", SN_CHECK);

MakeUnknown(0x00063310, 4, DOUNK_SIMPLE);
MakeDword(0x00063310);
MakeNameEx(0x00063310, "PtrSsmGet_Number_of_Exh_Gas_Recirc_Steps_P45___", SN_CHECK);
addr = Dword(0x00063310);
MakeNameEx(addr, "SsmGet_Number_of_Exh_Gas_Recirc_Steps_P45___", SN_CHECK);

MakeUnknown(0x00063314, 4, DOUNK_SIMPLE);
MakeDword(0x00063314);
MakeNameEx(0x00063314, "PtrSsmGet_Alternator_Duty_P46___", SN_CHECK);
addr = Dword(0x00063314);
MakeNameEx(addr, "SsmGet_Alternator_Duty_P46___", SN_CHECK);

MakeUnknown(0x00063318, 4, DOUNK_SIMPLE);
MakeDword(0x00063318);
MakeNameEx(0x00063318, "PtrSsmGet_Fuel_Pump_Duty_P47___", SN_CHECK);
addr = Dword(0x00063318);
MakeNameEx(addr, "SsmGet_Fuel_Pump_Duty_P47___", SN_CHECK);

MakeUnknown(0x0006331C, 4, DOUNK_SIMPLE);
MakeDword(0x0006331C);
MakeNameEx(0x0006331C, "PtrSsmGet_Intake_VVT_Advance_Angle_Right_P48___", SN_CHECK);
addr = Dword(0x0006331C);
MakeNameEx(addr, "SsmGet_Intake_VVT_Advance_Angle_Right_P48___", SN_CHECK);

MakeUnknown(0x00063320, 4, DOUNK_SIMPLE);
MakeDword(0x00063320);
MakeNameEx(0x00063320, "PtrSsmGet_Intake_VVT_Advance_Angle_Left_P49___", SN_CHECK);
addr = Dword(0x00063320);
MakeNameEx(addr, "SsmGet_Intake_VVT_Advance_Angle_Left_P49___", SN_CHECK);

MakeUnknown(0x00063324, 4, DOUNK_SIMPLE);
MakeDword(0x00063324);
MakeNameEx(0x00063324, "PtrSsmGet_Intake_OCV_Duty_Right_P50___", SN_CHECK);
addr = Dword(0x00063324);
MakeNameEx(addr, "SsmGet_Intake_OCV_Duty_Right_P50___", SN_CHECK);

MakeUnknown(0x00063328, 4, DOUNK_SIMPLE);
MakeDword(0x00063328);
MakeNameEx(0x00063328, "PtrSsmGet_Intake_OCV_Duty_Left_P51___", SN_CHECK);
addr = Dword(0x00063328);
MakeNameEx(addr, "SsmGet_Intake_OCV_Duty_Left_P51___", SN_CHECK);

MakeUnknown(0x0006332C, 4, DOUNK_SIMPLE);
MakeDword(0x0006332C);
MakeNameEx(0x0006332C, "PtrSsmGet_Intake_OCV_Current_Right_P52___", SN_CHECK);
addr = Dword(0x0006332C);
MakeNameEx(addr, "SsmGet_Intake_OCV_Current_Right_P52___", SN_CHECK);

MakeUnknown(0x00063330, 4, DOUNK_SIMPLE);
MakeDword(0x00063330);
MakeNameEx(0x00063330, "PtrSsmGet_Intake_OCV_Current_Left_P53___", SN_CHECK);
addr = Dword(0x00063330);
MakeNameEx(addr, "SsmGet_Intake_OCV_Current_Left_P53___", SN_CHECK);

MakeUnknown(0x00063334, 4, DOUNK_SIMPLE);
MakeDword(0x00063334);
MakeNameEx(0x00063334, "PtrSsmGet_AF_Sensor_1_Current_P54___", SN_CHECK);
addr = Dword(0x00063334);
MakeNameEx(addr, "SsmGet_AF_Sensor_1_Current_P54___", SN_CHECK);

MakeUnknown(0x00063338, 4, DOUNK_SIMPLE);
MakeDword(0x00063338);
MakeNameEx(0x00063338, "PtrSsmGet_AF_Sensor_2_Current_P55___", SN_CHECK);
addr = Dword(0x00063338);
MakeNameEx(addr, "SsmGet_AF_Sensor_2_Current_P55___", SN_CHECK);

MakeUnknown(0x0006333C, 4, DOUNK_SIMPLE);
MakeDword(0x0006333C);
MakeNameEx(0x0006333C, "PtrSsmGet_AF_Sensor_1_Resistance_P56___", SN_CHECK);
addr = Dword(0x0006333C);
MakeNameEx(addr, "SsmGet_AF_Sensor_1_Resistance_P56___", SN_CHECK);

MakeUnknown(0x00063340, 4, DOUNK_SIMPLE);
MakeDword(0x00063340);
MakeNameEx(0x00063340, "PtrSsmGet_AF_Sensor_2_Resistance_P57___", SN_CHECK);
addr = Dword(0x00063340);
MakeNameEx(addr, "SsmGet_AF_Sensor_2_Resistance_P57___", SN_CHECK);

MakeUnknown(0x00063344, 4, DOUNK_SIMPLE);
MakeDword(0x00063344);
MakeNameEx(0x00063344, "PtrSsmGet_AF_Sensor_1_P58___", SN_CHECK);
addr = Dword(0x00063344);
MakeNameEx(addr, "SsmGet_AF_Sensor_1_P58___", SN_CHECK);

MakeUnknown(0x00063348, 4, DOUNK_SIMPLE);
MakeDword(0x00063348);
MakeNameEx(0x00063348, "PtrSsmGet_AF_Sensor_2_P59___", SN_CHECK);
addr = Dword(0x00063348);
MakeNameEx(addr, "SsmGet_AF_Sensor_2_P59___", SN_CHECK);

MakeUnknown(0x00063354, 4, DOUNK_SIMPLE);
MakeDword(0x00063354);
MakeNameEx(0x00063354, "PtrSsmGet_Gear_Position_P60___", SN_CHECK);
addr = Dword(0x00063354);
MakeNameEx(addr, "SsmGet_Gear_Position_P60___", SN_CHECK);

MakeUnknown(0x00063378, 4, DOUNK_SIMPLE);
MakeDword(0x00063378);
MakeNameEx(0x00063378, "PtrSsmGet_AF_Sensor_1_Heater_Current_P61___", SN_CHECK);
addr = Dword(0x00063378);
MakeNameEx(addr, "SsmGet_AF_Sensor_1_Heater_Current_P61___", SN_CHECK);

MakeUnknown(0x0006337C, 4, DOUNK_SIMPLE);
MakeDword(0x0006337C);
MakeNameEx(0x0006337C, "PtrSsmGet_AF_Sensor_2_Heater_Current_P62___", SN_CHECK);
addr = Dword(0x0006337C);
MakeNameEx(addr, "SsmGet_AF_Sensor_2_Heater_Current_P62___", SN_CHECK);

MakeUnknown(0x00063564, 4, DOUNK_SIMPLE);
MakeDword(0x00063564);
MakeNameEx(0x00063564, "PtrSsmGet_Roughness_Monitor_Cylinder_1_P63___", SN_CHECK);
addr = Dword(0x00063564);
MakeNameEx(addr, "SsmGet_Roughness_Monitor_Cylinder_1_P63___", SN_CHECK);

MakeUnknown(0x00063568, 4, DOUNK_SIMPLE);
MakeDword(0x00063568);
MakeNameEx(0x00063568, "PtrSsmGet_Roughness_Monitor_Cylinder_2_P64___", SN_CHECK);
addr = Dword(0x00063568);
MakeNameEx(addr, "SsmGet_Roughness_Monitor_Cylinder_2_P64___", SN_CHECK);

MakeUnknown(0x0006356C, 4, DOUNK_SIMPLE);
MakeDword(0x0006356C);
MakeNameEx(0x0006356C, "PtrSsmGet_AF_Correction_3_16bit_ECU_P65___", SN_CHECK);
addr = Dword(0x0006356C);
MakeNameEx(addr, "SsmGet_AF_Correction_3_16bit_ECU_P65___", SN_CHECK);

MakeUnknown(0x00063570, 4, DOUNK_SIMPLE);
MakeDword(0x00063570);
MakeNameEx(0x00063570, "PtrSsmGet_AF_Learning_3_P66___", SN_CHECK);
addr = Dword(0x00063570);
MakeNameEx(addr, "SsmGet_AF_Learning_3_P66___", SN_CHECK);

MakeUnknown(0x00063574, 4, DOUNK_SIMPLE);
MakeDword(0x00063574);
MakeNameEx(0x00063574, "PtrSsmGet_Rear_O2_Heater_Voltage_P67___", SN_CHECK);
addr = Dword(0x00063574);
MakeNameEx(addr, "SsmGet_Rear_O2_Heater_Voltage_P67___", SN_CHECK);

MakeUnknown(0x00063578, 4, DOUNK_SIMPLE);
MakeDword(0x00063578);
MakeNameEx(0x00063578, "PtrSsmGet_AF_Adjustment_Voltage_P68___", SN_CHECK);
addr = Dword(0x00063578);
MakeNameEx(addr, "SsmGet_AF_Adjustment_Voltage_P68___", SN_CHECK);

MakeUnknown(0x0006358C, 4, DOUNK_SIMPLE);
MakeDword(0x0006358C);
MakeNameEx(0x0006358C, "PtrSsmGet_Roughness_Monitor_Cylinder_3_P69___", SN_CHECK);
addr = Dword(0x0006358C);
MakeNameEx(addr, "SsmGet_Roughness_Monitor_Cylinder_3_P69___", SN_CHECK);

MakeUnknown(0x00063590, 4, DOUNK_SIMPLE);
MakeDword(0x00063590);
MakeNameEx(0x00063590, "PtrSsmGet_Roughness_Monitor_Cylinder_4_P70___", SN_CHECK);
addr = Dword(0x00063590);
MakeNameEx(addr, "SsmGet_Roughness_Monitor_Cylinder_4_P70___", SN_CHECK);

MakeUnknown(0x00063614, 4, DOUNK_SIMPLE);
MakeDword(0x00063614);
MakeNameEx(0x00063614, "PtrSsmGet_Throttle_Motor_Duty_P71___", SN_CHECK);
addr = Dword(0x00063614);
MakeNameEx(addr, "SsmGet_Throttle_Motor_Duty_P71___", SN_CHECK);

MakeUnknown(0x00063618, 4, DOUNK_SIMPLE);
MakeDword(0x00063618);
MakeNameEx(0x00063618, "PtrSsmGet_Throttle_Motor_Voltage_P72___", SN_CHECK);
addr = Dword(0x00063618);
MakeNameEx(addr, "SsmGet_Throttle_Motor_Voltage_P72___", SN_CHECK);

MakeUnknown(0x0006362C, 4, DOUNK_SIMPLE);
MakeDword(0x0006362C);
MakeNameEx(0x0006362C, "PtrSsmGet_Sub_Throttle_Sensor_P73___", SN_CHECK);
addr = Dword(0x0006362C);
MakeNameEx(addr, "SsmGet_Sub_Throttle_Sensor_P73___", SN_CHECK);

MakeUnknown(0x00063630, 4, DOUNK_SIMPLE);
MakeDword(0x00063630);
MakeNameEx(0x00063630, "PtrSsmGet_Main_Throttle_Sensor_P74___", SN_CHECK);
addr = Dword(0x00063630);
MakeNameEx(addr, "SsmGet_Main_Throttle_Sensor_P74___", SN_CHECK);

MakeUnknown(0x00063634, 4, DOUNK_SIMPLE);
MakeDword(0x00063634);
MakeNameEx(0x00063634, "PtrSsmGet_Sub_Accelerator_Sensor_P75___", SN_CHECK);
addr = Dword(0x00063634);
MakeNameEx(addr, "SsmGet_Sub_Accelerator_Sensor_P75___", SN_CHECK);

MakeUnknown(0x00063638, 4, DOUNK_SIMPLE);
MakeDword(0x00063638);
MakeNameEx(0x00063638, "PtrSsmGet_Main_Accelerator_Sensor_P76___", SN_CHECK);
addr = Dword(0x00063638);
MakeNameEx(addr, "SsmGet_Main_Accelerator_Sensor_P76___", SN_CHECK);

MakeUnknown(0x0006363C, 4, DOUNK_SIMPLE);
MakeDword(0x0006363C);
MakeNameEx(0x0006363C, "PtrSsmGet_Brake_Booster_Pressure_P77___", SN_CHECK);
addr = Dword(0x0006363C);
MakeNameEx(addr, "SsmGet_Brake_Booster_Pressure_P77___", SN_CHECK);

MakeUnknown(0x00063640, 4, DOUNK_SIMPLE);
MakeDword(0x00063640);
MakeNameEx(0x00063640, "PtrSsmGet_Fuel_Pressure_High_P78___", SN_CHECK);
addr = Dword(0x00063640);
MakeNameEx(addr, "SsmGet_Fuel_Pressure_High_P78___", SN_CHECK);

MakeUnknown(0x00063644, 4, DOUNK_SIMPLE);
MakeDword(0x00063644);
MakeNameEx(0x00063644, "PtrSsmGet_Exhaust_Gas_Temperature_P79___", SN_CHECK);
addr = Dword(0x00063644);
MakeNameEx(addr, "SsmGet_Exhaust_Gas_Temperature_P79___", SN_CHECK);

MakeUnknown(0x0006364C, 4, DOUNK_SIMPLE);
MakeDword(0x0006364C);
MakeNameEx(0x0006364C, "PtrSsmGet_Cold_Start_Injector_Air_Pump_P80___", SN_CHECK);
addr = Dword(0x0006364C);
MakeNameEx(addr, "SsmGet_Cold_Start_Injector_Air_Pump_P80___", SN_CHECK);

MakeUnknown(0x00063650, 4, DOUNK_SIMPLE);
MakeDword(0x00063650);
MakeNameEx(0x00063650, "PtrSsmGet_SCV_Step_P81___", SN_CHECK);
addr = Dword(0x00063650);
MakeNameEx(addr, "SsmGet_SCV_Step_P81___", SN_CHECK);

MakeUnknown(0x00063654, 4, DOUNK_SIMPLE);
MakeDword(0x00063654);
MakeNameEx(0x00063654, "PtrSsmGet_Memorised_Cruise_Speed_P82___", SN_CHECK);
addr = Dword(0x00063654);
MakeNameEx(addr, "SsmGet_Memorised_Cruise_Speed_P82___", SN_CHECK);

MakeUnknown(0x0006368C, 4, DOUNK_SIMPLE);
MakeDword(0x0006368C);
MakeNameEx(0x0006368C, "PtrSsmGet_Exhaust_VVT_Advance_Angle_Right_P83___", SN_CHECK);
addr = Dword(0x0006368C);
MakeNameEx(addr, "SsmGet_Exhaust_VVT_Advance_Angle_Right_P83___", SN_CHECK);

MakeUnknown(0x00063690, 4, DOUNK_SIMPLE);
MakeDword(0x00063690);
MakeNameEx(0x00063690, "PtrSsmGet_Exhaust_VVT_Advance_Angle_Left_P84___", SN_CHECK);
addr = Dword(0x00063690);
MakeNameEx(addr, "SsmGet_Exhaust_VVT_Advance_Angle_Left_P84___", SN_CHECK);

MakeUnknown(0x00063694, 4, DOUNK_SIMPLE);
MakeDword(0x00063694);
MakeNameEx(0x00063694, "PtrSsmGet_Exhaust_OCV_Duty_Right_P85___", SN_CHECK);
addr = Dword(0x00063694);
MakeNameEx(addr, "SsmGet_Exhaust_OCV_Duty_Right_P85___", SN_CHECK);

MakeUnknown(0x00063698, 4, DOUNK_SIMPLE);
MakeDword(0x00063698);
MakeNameEx(0x00063698, "PtrSsmGet_Exhaust_OCV_Duty_Left_P86___", SN_CHECK);
addr = Dword(0x00063698);
MakeNameEx(addr, "SsmGet_Exhaust_OCV_Duty_Left_P86___", SN_CHECK);

MakeUnknown(0x0006369C, 4, DOUNK_SIMPLE);
MakeDword(0x0006369C);
MakeNameEx(0x0006369C, "PtrSsmGet_Exhaust_OCV_Current_Right_P87___", SN_CHECK);
addr = Dword(0x0006369C);
MakeNameEx(addr, "SsmGet_Exhaust_OCV_Current_Right_P87___", SN_CHECK);

MakeUnknown(0x000636A0, 4, DOUNK_SIMPLE);
MakeDword(0x000636A0);
MakeNameEx(0x000636A0, "PtrSsmGet_Exhaust_OCV_Current_Left_P88___", SN_CHECK);
addr = Dword(0x000636A0);
MakeNameEx(addr, "SsmGet_Exhaust_OCV_Current_Left_P88___", SN_CHECK);

MakeUnknown(0x0006356C, 4, DOUNK_SIMPLE);
MakeDword(0x0006356C);
MakeNameEx(0x0006356C, "PtrSsmGet_AF_Correction_3_32bit_ECU_P89___", SN_CHECK);
addr = Dword(0x0006356C);
MakeNameEx(addr, "SsmGet_AF_Correction_3_32bit_ECU_P89___", SN_CHECK);

MakeUnknown(0x00063610, 4, DOUNK_SIMPLE);
MakeDword(0x00063610);
MakeNameEx(0x00063610, "PtrSsmGet_IAM_P90___", SN_CHECK);
addr = Dword(0x00063610);
MakeNameEx(addr, "SsmGet_IAM_P90___", SN_CHECK);

MakeUnknown(0x00063890, 4, DOUNK_SIMPLE);
MakeDword(0x00063890);
MakeNameEx(0x00063890, "PtrSsmGet_Fine_Learning_Knock_Correction_P91___", SN_CHECK);
addr = Dword(0x00063890);
MakeNameEx(addr, "SsmGet_Fine_Learning_Knock_Correction_P91___", SN_CHECK);

MakeUnknown(0x000632E8, 4, DOUNK_SIMPLE);
MakeDword(0x000632E8);
MakeNameEx(0x000632E8, "PtrSsmGet_Radiator_Fan_Control_P92___", SN_CHECK);
addr = Dword(0x000632E8);
MakeNameEx(addr, "SsmGet_Radiator_Fan_Control_P92___", SN_CHECK);

MakeUnknown(0x000637D4, 4, DOUNK_SIMPLE);
MakeDword(0x000637D4);
MakeNameEx(0x000637D4, "PtrSsmGet_SIDrive_Mode_P114___", SN_CHECK);
addr = Dword(0x000637D4);
MakeNameEx(addr, "SsmGet_SIDrive_Mode_P114___", SN_CHECK);

MakeUnknown(0x000637D8, 4, DOUNK_SIMPLE);
MakeDword(0x000637D8);
MakeNameEx(0x000637D8, "PtrSsmGet_Throttle_Sensor_Closed_Voltage_P115___", SN_CHECK);
addr = Dword(0x000637D8);
MakeNameEx(addr, "SsmGet_Throttle_Sensor_Closed_Voltage_P115___", SN_CHECK);

MakeUnknown(0x00063648, 4, DOUNK_SIMPLE);
MakeDword(0x00063648);
MakeNameEx(0x00063648, "PtrSsmGet_Exhaust_Gas_Temperature_2_P116___", SN_CHECK);
addr = Dword(0x00063648);
MakeNameEx(addr, "SsmGet_Exhaust_Gas_Temperature_2_P116___", SN_CHECK);

MakeUnknown(0x00063658, 4, DOUNK_SIMPLE);
MakeDword(0x00063658);
MakeNameEx(0x00063658, "PtrSsmGet_AirFuel_Correction_4_P117___", SN_CHECK);
addr = Dword(0x00063658);
MakeNameEx(addr, "SsmGet_AirFuel_Correction_4_P117___", SN_CHECK);

MakeUnknown(0x0006365C, 4, DOUNK_SIMPLE);
MakeDword(0x0006365C);
MakeNameEx(0x0006365C, "PtrSsmGet_AirFuel_Learning_4_P118___", SN_CHECK);
addr = Dword(0x0006365C);
MakeNameEx(addr, "SsmGet_AirFuel_Learning_4_P118___", SN_CHECK);

MakeUnknown(0x00063660, 4, DOUNK_SIMPLE);
MakeDword(0x00063660);
MakeNameEx(0x00063660, "PtrSsmGet_Fuel_Level_Sensor_Resistance_P119___", SN_CHECK);
addr = Dword(0x00063660);
MakeNameEx(addr, "SsmGet_Fuel_Level_Sensor_Resistance_P119___", SN_CHECK);

MakeUnknown(0x00063664, 4, DOUNK_SIMPLE);
MakeDword(0x00063664);
MakeNameEx(0x00063664, "PtrSsmGet_Estimated_odometer_P120___", SN_CHECK);
addr = Dword(0x00063664);
MakeNameEx(addr, "SsmGet_Estimated_odometer_P120___", SN_CHECK);

MakeUnknown(0x000637F4, 4, DOUNK_SIMPLE);
MakeDword(0x000637F4);
MakeNameEx(0x000637F4, "PtrSsmGet_Fuel_Tank_Air_Pressure_P121___", SN_CHECK);
addr = Dword(0x000637F4);
MakeNameEx(addr, "SsmGet_Fuel_Tank_Air_Pressure_P121___", SN_CHECK);

MakeUnknown(0x00063678, 4, DOUNK_SIMPLE);
MakeDword(0x00063678);
MakeNameEx(0x00063678, "PtrSsmGet_Oil_Temperature_P122___", SN_CHECK);
addr = Dword(0x00063678);
MakeNameEx(addr, "SsmGet_Oil_Temperature_P122___", SN_CHECK);

MakeUnknown(0x0006367C, 4, DOUNK_SIMPLE);
MakeDword(0x0006367C);
MakeNameEx(0x0006367C, "PtrSsmGet_Oil_Switching_Solenoid_Valve_OSV_Duty_Right_P123___", SN_CHECK);
addr = Dword(0x0006367C);
MakeNameEx(addr, "SsmGet_Oil_Switching_Solenoid_Valve_OSV_Duty_Right_P123___", SN_CHECK);

MakeUnknown(0x00063680, 4, DOUNK_SIMPLE);
MakeDword(0x00063680);
MakeNameEx(0x00063680, "PtrSsmGet_Oil_Switching_Solenoid_Valve_OSV_Duty_Left_P124___", SN_CHECK);
addr = Dword(0x00063680);
MakeNameEx(addr, "SsmGet_Oil_Switching_Solenoid_Valve_OSV_Duty_Left_P124___", SN_CHECK);

MakeUnknown(0x00063684, 4, DOUNK_SIMPLE);
MakeDword(0x00063684);
MakeNameEx(0x00063684, "PtrSsmGet_Oil_Switching_Solenoid_Valve_OSV_Current_Right_P125___", SN_CHECK);
addr = Dword(0x00063684);
MakeNameEx(addr, "SsmGet_Oil_Switching_Solenoid_Valve_OSV_Current_Right_P125___", SN_CHECK);

MakeUnknown(0x00063688, 4, DOUNK_SIMPLE);
MakeDword(0x00063688);
MakeNameEx(0x00063688, "PtrSsmGet_Oil_Switching_Solenoid_Valve_OSV_Current_Left_P126___", SN_CHECK);
addr = Dword(0x00063688);
MakeNameEx(addr, "SsmGet_Oil_Switching_Solenoid_Valve_OSV_Current_Left_P126___", SN_CHECK);

MakeUnknown(0x000636A4, 4, DOUNK_SIMPLE);
MakeDword(0x000636A4);
MakeNameEx(0x000636A4, "PtrSsmGet_VVL_Lift_Mode_P127___", SN_CHECK);
addr = Dword(0x000636A4);
MakeNameEx(addr, "SsmGet_VVL_Lift_Mode_P127___", SN_CHECK);

MakeUnknown(0x000635E8, 4, DOUNK_SIMPLE);
MakeDword(0x000635E8);
MakeNameEx(0x000635E8, "PtrSsmGet_Roughness_Monitor_Cylinder_5_P151___", SN_CHECK);
addr = Dword(0x000635E8);
MakeNameEx(addr, "SsmGet_Roughness_Monitor_Cylinder_5_P151___", SN_CHECK);

MakeUnknown(0x0006360C, 4, DOUNK_SIMPLE);
MakeDword(0x0006360C);
MakeNameEx(0x0006360C, "PtrSsmGet_Roughness_Monitor_Cylinder_6_P152___", SN_CHECK);
addr = Dword(0x0006360C);
MakeNameEx(addr, "SsmGet_Roughness_Monitor_Cylinder_6_P152___", SN_CHECK);

MakeUnknown(0x00063610, 4, DOUNK_SIMPLE);
MakeDword(0x00063610);
MakeNameEx(0x00063610, "PtrSsmGet_Learned_Ignition_Timing_Correction_P153___", SN_CHECK);
addr = Dword(0x00063610);
MakeNameEx(addr, "SsmGet_Learned_Ignition_Timing_Correction_P153___", SN_CHECK);

MakeUnknown(0x00063894, 4, DOUNK_SIMPLE);
MakeDword(0x00063894);
MakeNameEx(0x00063894, "PtrSsmGet_Fuel_Tank_Pressure_P154___", SN_CHECK);
addr = Dword(0x00063894);
MakeNameEx(addr, "SsmGet_Fuel_Tank_Pressure_P154___", SN_CHECK);

MakeUnknown(0x000639B0, 4, DOUNK_SIMPLE);
MakeDword(0x000639B0);
MakeNameEx(0x000639B0, "PtrSsmGet_Main_Injection_Period_P155___", SN_CHECK);
addr = Dword(0x000639B0);
MakeNameEx(addr, "SsmGet_Main_Injection_Period_P155___", SN_CHECK);

MakeUnknown(0x000639B4, 4, DOUNK_SIMPLE);
MakeDword(0x000639B4);
MakeNameEx(0x000639B4, "PtrSsmGet_Final_Injection_Amount_P156___", SN_CHECK);
addr = Dword(0x000639B4);
MakeNameEx(addr, "SsmGet_Final_Injection_Amount_P156___", SN_CHECK);

MakeUnknown(0x000639BC, 4, DOUNK_SIMPLE);
MakeDword(0x000639BC);
MakeNameEx(0x000639BC, "PtrSsmGet_Number_of_Times_Injected_P157___", SN_CHECK);
addr = Dword(0x000639BC);
MakeNameEx(addr, "SsmGet_Number_of_Times_Injected_P157___", SN_CHECK);

MakeUnknown(0x000639C0, 4, DOUNK_SIMPLE);
MakeDword(0x000639C0);
MakeNameEx(0x000639C0, "PtrSsmGet_Target_Intake_Manifold_Pressure_P158___", SN_CHECK);
addr = Dword(0x000639C0);
MakeNameEx(addr, "SsmGet_Target_Intake_Manifold_Pressure_P158___", SN_CHECK);

MakeUnknown(0x000639C4, 4, DOUNK_SIMPLE);
MakeDword(0x000639C4);
MakeNameEx(0x000639C4, "PtrSsmGet_Target_Intake_Air_Amount_P159___", SN_CHECK);
addr = Dword(0x000639C4);
MakeNameEx(addr, "SsmGet_Target_Intake_Air_Amount_P159___", SN_CHECK);

MakeUnknown(0x000639C8, 4, DOUNK_SIMPLE);
MakeDword(0x000639C8);
MakeNameEx(0x000639C8, "PtrSsmGet_Air_Mass_P160___", SN_CHECK);
addr = Dword(0x000639C8);
MakeNameEx(addr, "SsmGet_Air_Mass_P160___", SN_CHECK);

MakeUnknown(0x000639CC, 4, DOUNK_SIMPLE);
MakeDword(0x000639CC);
MakeNameEx(0x000639CC, "PtrSsmGet_Exhaust_Gas_Recirculation_EGR_Target_Valve_Opening_Angle_P161___", SN_CHECK);
addr = Dword(0x000639CC);
MakeNameEx(addr, "SsmGet_Exhaust_Gas_Recirculation_EGR_Target_Valve_Opening_Angle_P161___", SN_CHECK);

MakeUnknown(0x000639D0, 4, DOUNK_SIMPLE);
MakeDword(0x000639D0);
MakeNameEx(0x000639D0, "PtrSsmGet_Exhaust_Gas_Recirculation_EGR_Valve_Opening_Angle_P162___", SN_CHECK);
addr = Dword(0x000639D0);
MakeNameEx(addr, "SsmGet_Exhaust_Gas_Recirculation_EGR_Valve_Opening_Angle_P162___", SN_CHECK);

MakeUnknown(0x000639D4, 4, DOUNK_SIMPLE);
MakeDword(0x000639D4);
MakeNameEx(0x000639D4, "PtrSsmGet_Exhaust_Gas_Recirculation_EGR_Duty_P163___", SN_CHECK);
addr = Dword(0x000639D4);
MakeNameEx(addr, "SsmGet_Exhaust_Gas_Recirculation_EGR_Duty_P163___", SN_CHECK);

MakeUnknown(0x000639D8, 4, DOUNK_SIMPLE);
MakeDword(0x000639D8);
MakeNameEx(0x000639D8, "PtrSsmGet_Common_Rail_Target_Pressure_P164___", SN_CHECK);
addr = Dword(0x000639D8);
MakeNameEx(addr, "SsmGet_Common_Rail_Target_Pressure_P164___", SN_CHECK);

MakeUnknown(0x000639DC, 4, DOUNK_SIMPLE);
MakeDword(0x000639DC);
MakeNameEx(0x000639DC, "PtrSsmGet_Common_Rail_Pressure_P165___", SN_CHECK);
addr = Dword(0x000639DC);
MakeNameEx(addr, "SsmGet_Common_Rail_Pressure_P165___", SN_CHECK);

MakeUnknown(0x000639E0, 4, DOUNK_SIMPLE);
MakeDword(0x000639E0);
MakeNameEx(0x000639E0, "PtrSsmGet_Intake_Air_Temperature_combined_P166___", SN_CHECK);
addr = Dword(0x000639E0);
MakeNameEx(addr, "SsmGet_Intake_Air_Temperature_combined_P166___", SN_CHECK);

MakeUnknown(0x000639E4, 4, DOUNK_SIMPLE);
MakeDword(0x000639E4);
MakeNameEx(0x000639E4, "PtrSsmGet_Target_Engine_Speed_P167___", SN_CHECK);
addr = Dword(0x000639E4);
MakeNameEx(addr, "SsmGet_Target_Engine_Speed_P167___", SN_CHECK);

MakeUnknown(0x000639EC, 4, DOUNK_SIMPLE);
MakeDword(0x000639EC);
MakeNameEx(0x000639EC, "PtrSsmGet_Boost_Pressure_Feedback_P168___", SN_CHECK);
addr = Dword(0x000639EC);
MakeNameEx(addr, "SsmGet_Boost_Pressure_Feedback_P168___", SN_CHECK);

MakeUnknown(0x00063A00, 4, DOUNK_SIMPLE);
MakeDword(0x00063A00);
MakeNameEx(0x00063A00, "PtrSsmGet_Electric_Power_Steering_Current_P169___", SN_CHECK);
addr = Dword(0x00063A00);
MakeNameEx(addr, "SsmGet_Electric_Power_Steering_Current_P169___", SN_CHECK);

MakeUnknown(0x00063A04, 4, DOUNK_SIMPLE);
MakeDword(0x00063A04);
MakeNameEx(0x00063A04, "PtrSsmGet_Fuel_Pump_Suction_Control_Valve_Current_Target_P170___", SN_CHECK);
addr = Dword(0x00063A04);
MakeNameEx(addr, "SsmGet_Fuel_Pump_Suction_Control_Valve_Current_Target_P170___", SN_CHECK);

MakeUnknown(0x00063A0C, 4, DOUNK_SIMPLE);
MakeDword(0x00063A0C);
MakeNameEx(0x00063A0C, "PtrSsmGet_Fuel_Pump_Suction_Control_Valve_Current_Actual_P175___", SN_CHECK);
addr = Dword(0x00063A0C);
MakeNameEx(addr, "SsmGet_Fuel_Pump_Suction_Control_Valve_Current_Actual_P175___", SN_CHECK);

MakeUnknown(0x00063A14, 4, DOUNK_SIMPLE);
MakeDword(0x00063A14);
MakeNameEx(0x00063A14, "PtrSsmGet_Mileage_after_Injector_Learning_P176___", SN_CHECK);
addr = Dword(0x00063A14);
MakeNameEx(addr, "SsmGet_Mileage_after_Injector_Learning_P176___", SN_CHECK);

MakeUnknown(0x00063A3C, 4, DOUNK_SIMPLE);
MakeDword(0x00063A3C);
MakeNameEx(0x00063A3C, "PtrSsmGet_Mileage_after_Injector_Replacement_P177___", SN_CHECK);
addr = Dword(0x00063A3C);
MakeNameEx(addr, "SsmGet_Mileage_after_Injector_Replacement_P177___", SN_CHECK);

MakeUnknown(0x00063BEC, 4, DOUNK_SIMPLE);
MakeDword(0x00063BEC);
MakeNameEx(0x00063BEC, "PtrSsmGet_Interior_Heater_P178___", SN_CHECK);
addr = Dword(0x00063BEC);
MakeNameEx(addr, "SsmGet_Interior_Heater_P178___", SN_CHECK);

MakeUnknown(0x00063BA0, 4, DOUNK_SIMPLE);
MakeDword(0x00063BA0);
MakeNameEx(0x00063BA0, "PtrSsmGet_Quantity_Correction_Cylinder_1_P179___", SN_CHECK);
addr = Dword(0x00063BA0);
MakeNameEx(addr, "SsmGet_Quantity_Correction_Cylinder_1_P179___", SN_CHECK);

MakeUnknown(0x00063BA4, 4, DOUNK_SIMPLE);
MakeDword(0x00063BA4);
MakeNameEx(0x00063BA4, "PtrSsmGet_Quantity_Correction_Cylinder_2_P180___", SN_CHECK);
addr = Dword(0x00063BA4);
MakeNameEx(addr, "SsmGet_Quantity_Correction_Cylinder_2_P180___", SN_CHECK);

MakeUnknown(0x00063BA8, 4, DOUNK_SIMPLE);
MakeDword(0x00063BA8);
MakeNameEx(0x00063BA8, "PtrSsmGet_Quantity_Correction_Cylinder_3_P181___", SN_CHECK);
addr = Dword(0x00063BA8);
MakeNameEx(addr, "SsmGet_Quantity_Correction_Cylinder_3_P181___", SN_CHECK);

MakeUnknown(0x00063BAC, 4, DOUNK_SIMPLE);
MakeDword(0x00063BAC);
MakeNameEx(0x00063BAC, "PtrSsmGet_Quantity_Correction_Cylinder_4_P182___", SN_CHECK);
addr = Dword(0x00063BAC);
MakeNameEx(addr, "SsmGet_Quantity_Correction_Cylinder_4_P182___", SN_CHECK);

MakeUnknown(0x00063BF0, 4, DOUNK_SIMPLE);
MakeDword(0x00063BF0);
MakeNameEx(0x00063BF0, "PtrSsmGet_Battery_Current_P183___", SN_CHECK);
addr = Dword(0x00063BF0);
MakeNameEx(addr, "SsmGet_Battery_Current_P183___", SN_CHECK);

MakeUnknown(0x00063BF8, 4, DOUNK_SIMPLE);
MakeDword(0x00063BF8);
MakeNameEx(0x00063BF8, "PtrSsmGet_Battery_Temperature_P184___", SN_CHECK);
addr = Dword(0x00063BF8);
MakeNameEx(addr, "SsmGet_Battery_Temperature_P184___", SN_CHECK);

MakeUnknown(0x00063BF4, 4, DOUNK_SIMPLE);
MakeDword(0x00063BF4);
MakeNameEx(0x00063BF4, "PtrSsmGet_Alternator_Control_Mode_P185___", SN_CHECK);
addr = Dword(0x00063BF4);
MakeNameEx(addr, "SsmGet_Alternator_Control_Mode_P185___", SN_CHECK);

MakeUnknown(0x00063C00, 4, DOUNK_SIMPLE);
MakeDword(0x00063C00);
MakeNameEx(0x00063C00, "PtrSsmGet_Cumulative_Ash_Ratio_P186___", SN_CHECK);
addr = Dword(0x00063C00);
MakeNameEx(addr, "SsmGet_Cumulative_Ash_Ratio_P186___", SN_CHECK);

MakeUnknown(0x00063C04, 4, DOUNK_SIMPLE);
MakeDword(0x00063C04);
MakeNameEx(0x00063C04, "PtrSsmGet_Pressure_Difference_between_Diesel_Particulate_Filter_DPF_Inlet_and_Outlet_P187___", SN_CHECK);
addr = Dword(0x00063C04);
MakeNameEx(addr, "SsmGet_Pressure_Difference_between_Diesel_Particulate_Filter_DPF_Inlet_and_Outlet_P187___", SN_CHECK);

MakeUnknown(0x00063C08, 4, DOUNK_SIMPLE);
MakeDword(0x00063C08);
MakeNameEx(0x00063C08, "PtrSsmGet_Exhaust_Gas_Temperature_at_Catalyst_Inlet_P188___", SN_CHECK);
addr = Dword(0x00063C08);
MakeNameEx(addr, "SsmGet_Exhaust_Gas_Temperature_at_Catalyst_Inlet_P188___", SN_CHECK);

MakeUnknown(0x00063C0C, 4, DOUNK_SIMPLE);
MakeDword(0x00063C0C);
MakeNameEx(0x00063C0C, "PtrSsmGet_Exhaust_Gas_Temperature_at_Diesel_Particulate_Filter_DPF_Inlet_P189___", SN_CHECK);
addr = Dword(0x00063C0C);
MakeNameEx(addr, "SsmGet_Exhaust_Gas_Temperature_at_Diesel_Particulate_Filter_DPF_Inlet_P189___", SN_CHECK);

MakeUnknown(0x00063C10, 4, DOUNK_SIMPLE);
MakeDword(0x00063C10);
MakeNameEx(0x00063C10, "PtrSsmGet_Estimated_Catalyst_Temperature_P190___", SN_CHECK);
addr = Dword(0x00063C10);
MakeNameEx(addr, "SsmGet_Estimated_Catalyst_Temperature_P190___", SN_CHECK);

MakeUnknown(0x00063C14, 4, DOUNK_SIMPLE);
MakeDword(0x00063C14);
MakeNameEx(0x00063C14, "PtrSsmGet_Estimated_Temperature_of_the_Diesel_Particulate_Filter_DPF_P191___", SN_CHECK);
addr = Dword(0x00063C14);
MakeNameEx(addr, "SsmGet_Estimated_Temperature_of_the_Diesel_Particulate_Filter_DPF_P191___", SN_CHECK);

MakeUnknown(0x00063C18, 4, DOUNK_SIMPLE);
MakeDword(0x00063C18);
MakeNameEx(0x00063C18, "PtrSsmGet_Soot_Accumulation_Ratio_P192___", SN_CHECK);
addr = Dword(0x00063C18);
MakeNameEx(addr, "SsmGet_Soot_Accumulation_Ratio_P192___", SN_CHECK);

MakeUnknown(0x00063C1C, 4, DOUNK_SIMPLE);
MakeDword(0x00063C1C);
MakeNameEx(0x00063C1C, "PtrSsmGet_Oil_Dilution_Ratio_P193___", SN_CHECK);
addr = Dword(0x00063C1C);
MakeNameEx(addr, "SsmGet_Oil_Dilution_Ratio_P193___", SN_CHECK);

MakeUnknown(0x00063C8C, 4, DOUNK_SIMPLE);
MakeDword(0x00063C8C);
MakeNameEx(0x00063C8C, "PtrSsmGet_Accumulated_Count_of_Overspeed_Instances_Very_High_RPM_P198___", SN_CHECK);
addr = Dword(0x00063C8C);
MakeNameEx(addr, "SsmGet_Accumulated_Count_of_Overspeed_Instances_Very_High_RPM_P198___", SN_CHECK);

MakeUnknown(0x00063C90, 4, DOUNK_SIMPLE);
MakeDword(0x00063C90);
MakeNameEx(0x00063C90, "PtrSsmGet_Accumulated_Count_of_Overspeed_Instances_High_RPM_P199___", SN_CHECK);
addr = Dword(0x00063C90);
MakeNameEx(addr, "SsmGet_Accumulated_Count_of_Overspeed_Instances_High_RPM_P199___", SN_CHECK);

MakeUnknown(0x00063AA8, 4, DOUNK_SIMPLE);
MakeDword(0x00063AA8);
MakeNameEx(0x00063AA8, "PtrSsmGet_Actual_Common_Rail_Pressure_Time_Synchronized_P204___", SN_CHECK);
addr = Dword(0x00063AA8);
MakeNameEx(addr, "SsmGet_Actual_Common_Rail_Pressure_Time_Synchronized_P204___", SN_CHECK);

MakeUnknown(0x00063C94, 4, DOUNK_SIMPLE);
MakeDword(0x00063C94);
MakeNameEx(0x00063C94, "PtrSsmGet_Estimated_Distance_to_Oil_Change_P205___", SN_CHECK);
addr = Dword(0x00063C94);
MakeNameEx(addr, "SsmGet_Estimated_Distance_to_Oil_Change_P205___", SN_CHECK);

MakeUnknown(0x00063C98, 4, DOUNK_SIMPLE);
MakeDword(0x00063C98);
MakeNameEx(0x00063C98, "PtrSsmGet_Running_Distance_since_last_Diesel_Particulate_Filter_DPF_Regeneration_P206___", SN_CHECK);
addr = Dword(0x00063C98);
MakeNameEx(addr, "SsmGet_Running_Distance_since_last_Diesel_Particulate_Filter_DPF_Regeneration_P206___", SN_CHECK);

MakeUnknown(0x00063CA0, 4, DOUNK_SIMPLE);
MakeDword(0x00063CA0);
MakeNameEx(0x00063CA0, "PtrSsmGet_Diesel_Particulate_Filter_DPF_Regeneration_Count_P207___", SN_CHECK);
addr = Dword(0x00063CA0);
MakeNameEx(addr, "SsmGet_Diesel_Particulate_Filter_DPF_Regeneration_Count_P207___", SN_CHECK);

MakeUnknown(0x00063B20, 4, DOUNK_SIMPLE);
MakeDword(0x00063B20);
MakeNameEx(0x00063B20, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_11_P208___", SN_CHECK);
addr = Dword(0x00063B20);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_11_P208___", SN_CHECK);

MakeUnknown(0x00063B24, 4, DOUNK_SIMPLE);
MakeDword(0x00063B24);
MakeNameEx(0x00063B24, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_12_P209___", SN_CHECK);
addr = Dword(0x00063B24);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_12_P209___", SN_CHECK);

MakeUnknown(0x00063B28, 4, DOUNK_SIMPLE);
MakeDword(0x00063B28);
MakeNameEx(0x00063B28, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_13_P210___", SN_CHECK);
addr = Dword(0x00063B28);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_13_P210___", SN_CHECK);

MakeUnknown(0x00063B2C, 4, DOUNK_SIMPLE);
MakeDword(0x00063B2C);
MakeNameEx(0x00063B2C, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_14_P211___", SN_CHECK);
addr = Dword(0x00063B2C);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_14_P211___", SN_CHECK);

MakeUnknown(0x00063B30, 4, DOUNK_SIMPLE);
MakeDword(0x00063B30);
MakeNameEx(0x00063B30, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_21_P212___", SN_CHECK);
addr = Dword(0x00063B30);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_21_P212___", SN_CHECK);

MakeUnknown(0x00063B34, 4, DOUNK_SIMPLE);
MakeDword(0x00063B34);
MakeNameEx(0x00063B34, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_22_P213___", SN_CHECK);
addr = Dword(0x00063B34);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_22_P213___", SN_CHECK);

MakeUnknown(0x00063B38, 4, DOUNK_SIMPLE);
MakeDword(0x00063B38);
MakeNameEx(0x00063B38, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_23_P214___", SN_CHECK);
addr = Dword(0x00063B38);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_23_P214___", SN_CHECK);

MakeUnknown(0x00063B3C, 4, DOUNK_SIMPLE);
MakeDword(0x00063B3C);
MakeNameEx(0x00063B3C, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_24_P215___", SN_CHECK);
addr = Dword(0x00063B3C);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_24_P215___", SN_CHECK);

MakeUnknown(0x00063B40, 4, DOUNK_SIMPLE);
MakeDword(0x00063B40);
MakeNameEx(0x00063B40, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_31_P216___", SN_CHECK);
addr = Dword(0x00063B40);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_31_P216___", SN_CHECK);

MakeUnknown(0x00063B44, 4, DOUNK_SIMPLE);
MakeDword(0x00063B44);
MakeNameEx(0x00063B44, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_32_P217___", SN_CHECK);
addr = Dword(0x00063B44);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_32_P217___", SN_CHECK);

MakeUnknown(0x00063B48, 4, DOUNK_SIMPLE);
MakeDword(0x00063B48);
MakeNameEx(0x00063B48, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_33_P218___", SN_CHECK);
addr = Dword(0x00063B48);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_33_P218___", SN_CHECK);

MakeUnknown(0x00063B4C, 4, DOUNK_SIMPLE);
MakeDword(0x00063B4C);
MakeNameEx(0x00063B4C, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_34_P219___", SN_CHECK);
addr = Dword(0x00063B4C);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_34_P219___", SN_CHECK);

MakeUnknown(0x00063B50, 4, DOUNK_SIMPLE);
MakeDword(0x00063B50);
MakeNameEx(0x00063B50, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_41_P220___", SN_CHECK);
addr = Dword(0x00063B50);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_41_P220___", SN_CHECK);

MakeUnknown(0x00063B54, 4, DOUNK_SIMPLE);
MakeDword(0x00063B54);
MakeNameEx(0x00063B54, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_42_P221___", SN_CHECK);
addr = Dword(0x00063B54);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_42_P221___", SN_CHECK);

MakeUnknown(0x00063B58, 4, DOUNK_SIMPLE);
MakeDword(0x00063B58);
MakeNameEx(0x00063B58, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_43_P222___", SN_CHECK);
addr = Dword(0x00063B58);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_43_P222___", SN_CHECK);

MakeUnknown(0x00063B5C, 4, DOUNK_SIMPLE);
MakeDword(0x00063B5C);
MakeNameEx(0x00063B5C, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_44_P223___", SN_CHECK);
addr = Dword(0x00063B5C);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_44_P223___", SN_CHECK);

MakeUnknown(0x00063B60, 4, DOUNK_SIMPLE);
MakeDword(0x00063B60);
MakeNameEx(0x00063B60, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_51_P224___", SN_CHECK);
addr = Dword(0x00063B60);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_51_P224___", SN_CHECK);

MakeUnknown(0x00063B64, 4, DOUNK_SIMPLE);
MakeDword(0x00063B64);
MakeNameEx(0x00063B64, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_52_P225___", SN_CHECK);
addr = Dword(0x00063B64);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_52_P225___", SN_CHECK);

MakeUnknown(0x00063B68, 4, DOUNK_SIMPLE);
MakeDword(0x00063B68);
MakeNameEx(0x00063B68, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_53_P226___", SN_CHECK);
addr = Dword(0x00063B68);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_53_P226___", SN_CHECK);

MakeUnknown(0x00063B6C, 4, DOUNK_SIMPLE);
MakeDword(0x00063B6C);
MakeNameEx(0x00063B6C, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_54_P227___", SN_CHECK);
addr = Dword(0x00063B6C);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_54_P227___", SN_CHECK);

MakeUnknown(0x00063B0C, 4, DOUNK_SIMPLE);
MakeDword(0x00063B0C);
MakeNameEx(0x00063B0C, "PtrSsmGet_Individual_Pump_Difference_Learning_Value_P228___", SN_CHECK);
addr = Dword(0x00063B0C);
MakeNameEx(addr, "SsmGet_Individual_Pump_Difference_Learning_Value_P228___", SN_CHECK);

MakeUnknown(0x00063B88, 4, DOUNK_SIMPLE);
MakeDword(0x00063B88);
MakeNameEx(0x00063B88, "PtrSsmGet_Final_Main_Injection_Period_P229___", SN_CHECK);
addr = Dword(0x00063B88);
MakeNameEx(addr, "SsmGet_Final_Main_Injection_Period_P229___", SN_CHECK);

MakeUnknown(0x00063B80, 4, DOUNK_SIMPLE);
MakeDword(0x00063B80);
MakeNameEx(0x00063B80, "PtrSsmGet_PreInjection_Final_Period_P233___", SN_CHECK);
addr = Dword(0x00063B80);
MakeNameEx(addr, "SsmGet_PreInjection_Final_Period_P233___", SN_CHECK);

MakeUnknown(0x00063AE8, 4, DOUNK_SIMPLE);
MakeDword(0x00063AE8);
MakeNameEx(0x00063AE8, "PtrSsmGet_PreInjection_Amount_P234___", SN_CHECK);
addr = Dword(0x00063AE8);
MakeNameEx(addr, "SsmGet_PreInjection_Amount_P234___", SN_CHECK);

MakeUnknown(0x00063AF0, 4, DOUNK_SIMPLE);
MakeDword(0x00063AF0);
MakeNameEx(0x00063AF0, "PtrSsmGet_PreInjection_Interval_P235___", SN_CHECK);
addr = Dword(0x00063AF0);
MakeNameEx(addr, "SsmGet_PreInjection_Interval_P235___", SN_CHECK);

MakeUnknown(0x00063CB4, 4, DOUNK_SIMPLE);
MakeDword(0x00063CB4);
MakeNameEx(0x00063CB4, "PtrSsmGet_Cumulative_oil_diesel_entry_P236___", SN_CHECK);
addr = Dword(0x00063CB4);
MakeNameEx(addr, "SsmGet_Cumulative_oil_diesel_entry_P236___", SN_CHECK);

MakeUnknown(0x00063AF4, 4, DOUNK_SIMPLE);
MakeDword(0x00063AF4);
MakeNameEx(0x00063AF4, "PtrSsmGet_Final_Initial_Torque_P238___", SN_CHECK);
addr = Dword(0x00063AF4);
MakeNameEx(addr, "SsmGet_Final_Initial_Torque_P238___", SN_CHECK);

MakeUnknown(0x000633E8, 4, DOUNK_SIMPLE);
MakeDword(0x000633E8);
MakeNameEx(0x000633E8, "PtrSsmGet_Global_Timing_User_Adjustment_Value_P239___", SN_CHECK);
addr = Dword(0x000633E8);
MakeNameEx(addr, "SsmGet_Global_Timing_User_Adjustment_Value_P239___", SN_CHECK);

MakeUnknown(0x000633EC, 4, DOUNK_SIMPLE);
MakeDword(0x000633EC);
MakeNameEx(0x000633EC, "PtrSsmGet_Engine_Idle_Speed_User_Adjustment_AC_off_P240___", SN_CHECK);
addr = Dword(0x000633EC);
MakeNameEx(addr, "SsmGet_Engine_Idle_Speed_User_Adjustment_AC_off_P240___", SN_CHECK);

MakeUnknown(0x000633F0, 4, DOUNK_SIMPLE);
MakeDword(0x000633F0);
MakeNameEx(0x000633F0, "PtrSsmGet_Engine_Idle_Speed_User_Adjustment_AC_on_P241___", SN_CHECK);
addr = Dword(0x000633F0);
MakeNameEx(addr, "SsmGet_Engine_Idle_Speed_User_Adjustment_AC_on_P241___", SN_CHECK);

MakeUnknown(0x0006364C, 4, DOUNK_SIMPLE);
MakeDword(0x0006364C);
MakeNameEx(0x0006364C, "PtrSsmGet_Secondary_Air_Piping_Pressure_P244___", SN_CHECK);
addr = Dword(0x0006364C);
MakeNameEx(addr, "SsmGet_Secondary_Air_Piping_Pressure_P244___", SN_CHECK);

MakeUnknown(0x00063834, 4, DOUNK_SIMPLE);
MakeDword(0x00063834);
MakeNameEx(0x00063834, "PtrSsmGet_Secondary_Air_Flow_P245___", SN_CHECK);
addr = Dword(0x00063834);
MakeNameEx(addr, "SsmGet_Secondary_Air_Flow_P245___", SN_CHECK);

// Switch Bit Position Name format: Switches_b7_b6_b5_b4_b3_b2_b1_b0
MakeUnknown(0x000633B0, 4, DOUNK_SIMPLE);
MakeDword(0x000633B0);
MakeNameEx(0x000633B0, "PtrSsmGet_Switches_x_1_2_3_x_69_70_71___", SN_CHECK);
addr = Dword(0x000633B0);
MakeNameEx(addr, "SsmGet_Switches_x_1_2_3_x_69_70_71___", SN_CHECK);

MakeUnknown(0x000633B4, 4, DOUNK_SIMPLE);
MakeDword(0x000633B4);
MakeNameEx(0x000633B4, "PtrSsmGet_Switches_4_5_x_6_7_8_9_x___", SN_CHECK);
addr = Dword(0x000633B4);
MakeNameEx(addr, "SsmGet_Switches_4_5_x_6_7_8_9_x___", SN_CHECK);

MakeUnknown(0x000633B8, 4, DOUNK_SIMPLE);
MakeDword(0x000633B8);
MakeNameEx(0x000633B8, "PtrSsmGet_Switches_10_11_12_13_14_15_16_17___", SN_CHECK);
addr = Dword(0x000633B8);
MakeNameEx(addr, "SsmGet_Switches_10_11_12_13_14_15_16_17___", SN_CHECK);

MakeUnknown(0x000633BC, 4, DOUNK_SIMPLE);
MakeDword(0x000633BC);
MakeNameEx(0x000633BC, "PtrSsmGet_Switches_18_19_20_21_22_23_24_25___", SN_CHECK);
addr = Dword(0x000633BC);
MakeNameEx(addr, "SsmGet_Switches_18_19_20_21_22_23_24_25___", SN_CHECK);

MakeUnknown(0x000633C0, 4, DOUNK_SIMPLE);
MakeDword(0x000633C0);
MakeNameEx(0x000633C0, "PtrSsmGet_Switches_26_27_28_29_30_31_32_33___", SN_CHECK);
addr = Dword(0x000633C0);
MakeNameEx(addr, "SsmGet_Switches_26_27_28_29_30_31_32_33___", SN_CHECK);

MakeUnknown(0x000633C4, 4, DOUNK_SIMPLE);
MakeDword(0x000633C4);
MakeNameEx(0x000633C4, "PtrSsmGet_Switches_34_35_36_37_38_39_40_41___", SN_CHECK);
addr = Dword(0x000633C4);
MakeNameEx(addr, "SsmGet_Switches_34_35_36_37_38_39_40_41___", SN_CHECK);

MakeUnknown(0x000633C8, 4, DOUNK_SIMPLE);
MakeDword(0x000633C8);
MakeNameEx(0x000633C8, "PtrSsmGet_Switches_42_43_44_45_46_47_48_49___", SN_CHECK);
addr = Dword(0x000633C8);
MakeNameEx(addr, "SsmGet_Switches_42_43_44_45_46_47_48_49___", SN_CHECK);

MakeUnknown(0x000633CC, 4, DOUNK_SIMPLE);
MakeDword(0x000633CC);
MakeNameEx(0x000633CC, "PtrSsmGet_Switches_72_73_74_75_50_51_52_53___", SN_CHECK);
addr = Dword(0x000633CC);
MakeNameEx(addr, "SsmGet_Switches_72_73_74_75_50_51_52_53___", SN_CHECK);

MakeUnknown(0x000633D0, 4, DOUNK_SIMPLE);
MakeDword(0x000633D0);
MakeNameEx(0x000633D0, "PtrSsmGet_Switches_54_55_56_57_58_59_60_61___", SN_CHECK);
addr = Dword(0x000633D0);
MakeNameEx(addr, "SsmGet_Switches_54_55_56_57_58_59_60_61___", SN_CHECK);

MakeUnknown(0x000636AC, 4, DOUNK_SIMPLE);
MakeDword(0x000636AC);
MakeNameEx(0x000636AC, "PtrSsmGet_Switches_130_62_131_x_x_x_x_x___", SN_CHECK);
addr = Dword(0x000636AC);
MakeNameEx(addr, "SsmGet_Switches_130_62_131_x_x_x_x_x___", SN_CHECK);

MakeUnknown(0x000636B0, 4, DOUNK_SIMPLE);
MakeDword(0x000636B0);
MakeNameEx(0x000636B0, "PtrSsmGet_Switches_63_64_65_66_67_132_68_133___", SN_CHECK);
addr = Dword(0x000636B0);
MakeNameEx(addr, "SsmGet_Switches_63_64_65_66_67_132_68_133___", SN_CHECK);

MakeUnknown(0x000633D4, 4, DOUNK_SIMPLE);
MakeDword(0x000633D4);
MakeNameEx(0x000633D4, "PtrSsmGet_Switches_x_x_x_x_x_x_82_x___", SN_CHECK);
addr = Dword(0x000633D4);
MakeNameEx(addr, "SsmGet_Switches_x_x_x_x_x_x_82_x___", SN_CHECK);

MakeUnknown(0x000633E4, 4, DOUNK_SIMPLE);
MakeDword(0x000633E4);
MakeNameEx(0x000633E4, "PtrSsmGet_Switches_108_x_x_x_x_x_x_x___", SN_CHECK);
addr = Dword(0x000633E4);
MakeNameEx(addr, "SsmGet_Switches_108_x_x_x_x_x_x_x___", SN_CHECK);

MakeUnknown(0x00063588, 4, DOUNK_SIMPLE);
MakeDword(0x00063588);
MakeNameEx(0x00063588, "PtrSsmGet_Switches_148_149_x_150_151_152_153_154___", SN_CHECK);
addr = Dword(0x00063588);
MakeNameEx(addr, "SsmGet_Switches_148_149_x_150_151_152_153_154___", SN_CHECK);

MakeUnknown(0x00063884, 4, DOUNK_SIMPLE);
MakeDword(0x00063884);
MakeNameEx(0x00063884, "PtrSsmGet_Switches_155_156_157_x_x_x_x_x___", SN_CHECK);
addr = Dword(0x00063884);
MakeNameEx(addr, "SsmGet_Switches_155_156_157_x_x_x_x_x___", SN_CHECK);

MakeUnknown(0x00063888, 4, DOUNK_SIMPLE);
MakeDword(0x00063888);
MakeNameEx(0x00063888, "PtrSsmGet_Switches_158_159_160_161_162_163_164_165___", SN_CHECK);
addr = Dword(0x00063888);
MakeNameEx(addr, "SsmGet_Switches_158_159_160_161_162_163_164_165___", SN_CHECK);

MakeUnknown(0x00063964, 4, DOUNK_SIMPLE);
MakeDword(0x00063964);
MakeNameEx(0x00063964, "PtrSsmGet_Switches_168_169_170_171_172_x_x_x___", SN_CHECK);
addr = Dword(0x00063964);
MakeNameEx(addr, "SsmGet_Switches_168_169_170_171_172_x_x_x___", SN_CHECK);

}   // end of StdParams

static ExtParams ()
{
Message("--- Now marking ExtParams ---\n");
MakeNameEx(0xFFFF3268, "E_IAM_4byteExt____E31", SN_CHECK);
MakeUnknown(0xFFFF3268, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF3268);
MakeNameEx(0xFFFF63F0, "E_Engine_Load_4ByteExt____E32", SN_CHECK);
MakeUnknown(0xFFFF63F0, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF63F0);
MakeNameEx(0xFFFFAED9, "E_CLOL_FuelingExt____E33", SN_CHECK);
MakeUnknown(0xFFFFAED9, 1, DOUNK_SIMPLE);
MakeByte(0xFFFFAED9);
MakeNameEx(0xFFFF5CAC, "E_Turbo_Dynamics_Integral_4byteExt____E34", SN_CHECK);
MakeUnknown(0xFFFF5CAC, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF5CAC);
MakeNameEx(0xFFFF5C9C, "E_Boost_ErrorExt____E35", SN_CHECK);
MakeUnknown(0xFFFF5C9C, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF5C9C);
MakeNameEx(0xFFFF5CA4, "E_Target_Boost_4byteExt____E36", SN_CHECK);
MakeUnknown(0xFFFF5CA4, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF5CA4);
MakeNameEx(0xFFFF5CA8, "E_Turbo_Dynamics_Proportional_4byteExt____E37", SN_CHECK);
MakeUnknown(0xFFFF5CA8, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF5CA8);
MakeNameEx(0xFFFF62D8, "E_Throttle_Plate_Opening_Angle_4byteExt____E38", SN_CHECK);
MakeUnknown(0xFFFF62D8, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF62D8);
MakeNameEx(0xFFFF81B0, "E_Feedback_Knock_Correction_4byteExt____E39", SN_CHECK);
MakeUnknown(0xFFFF81B0, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF81B0);
MakeNameEx(0xFFFF8220, "E_Knock_Correction_Advance_IAM_onlyExt____E40", SN_CHECK);
MakeUnknown(0xFFFF8220, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF8220);
MakeNameEx(0xFFFF824C, "E_Fine_Learning_Knock_Correction_4byteExt____E41", SN_CHECK);
MakeUnknown(0xFFFF824C, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF824C);
MakeNameEx(0xFFFF31A0, "E_AF_Learning_1_A_StoredExt____E44", SN_CHECK);
MakeUnknown(0xFFFF31A0, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF31A0);
MakeNameEx(0xFFFF31A8, "E_AF_Learning_1_B_StoredExt____E45", SN_CHECK);
MakeUnknown(0xFFFF31A8, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF31A8);
MakeNameEx(0xFFFF31B0, "E_AF_Learning_1_C_StoredExt____E46", SN_CHECK);
MakeUnknown(0xFFFF31B0, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF31B0);
MakeNameEx(0xFFFF31B8, "E_AF_Learning_1_D_StoredExt____E47", SN_CHECK);
MakeUnknown(0xFFFF31B8, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF31B8);
MakeNameEx(0xFFFF7860, "E_AF_Learning_1_4byteExt____E48", SN_CHECK);
MakeUnknown(0xFFFF7860, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF7860);
MakeNameEx(0xFFFF8934, "E_Idle_Speed_Map_SelectionExt____E49", SN_CHECK);
MakeUnknown(0xFFFF8934, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF8934);
MakeNameEx(0xFFFF732C, "E_Fuel_Injector_1_Latency_4byteExt____E50", SN_CHECK);
MakeUnknown(0xFFFF732C, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF732C);
MakeNameEx(0xFFFF6208, "E_Manifold_Absolute_Pressure_4byteExt____E51", SN_CHECK);
MakeUnknown(0xFFFF6208, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF6208);
MakeNameEx(0xFFFF6208, "E_Manifold_Relative_Sea_Level_Pressure_4byteExt____E52", SN_CHECK);
MakeUnknown(0xFFFF6208, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF6208);
MakeNameEx(0xFFFF7EF0, "E_Ignition_Base_TimingExt____E53", SN_CHECK);
MakeUnknown(0xFFFF7EF0, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF7EF0);
MakeNameEx(0xFFFF62E0, "E_Tipin_ThrottleExt____E54", SN_CHECK);
MakeUnknown(0xFFFF62E0, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF62E0);
MakeNameEx(0xFFFF7C18, "E_Tipin_Enrichment_Last_CalculatedExt____E55", SN_CHECK);
MakeUnknown(0xFFFF7C18, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF7C18);
MakeNameEx(0xFFFF851C, "E_Requested_TorqueExt____E56", SN_CHECK);
MakeUnknown(0xFFFF851C, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF851C);
MakeNameEx(0xFFFF8514, "E_Target_Throttle_Plate_PositionExt____E57", SN_CHECK);
MakeUnknown(0xFFFF8514, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF8514);
MakeNameEx(0xFFFF8258, "E_Fine_Learning_Table_OffsetExt____E58", SN_CHECK);
MakeUnknown(0xFFFF8258, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF8258);
MakeNameEx(0xFFFF6809, "E_Gear_CalculatedExt____E59", SN_CHECK);
MakeUnknown(0xFFFF6809, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF6809);
MakeNameEx(0xFFFF7D78, "E_Fuel_Injector_1_Pulse_Width_4byteExt____E60", SN_CHECK);
MakeUnknown(0xFFFF7D78, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF7D78);
MakeNameEx(0xFFFF7867, "E_AF_Learning_Airflow_Range_CurrentExt____E61", SN_CHECK);
MakeUnknown(0xFFFF7867, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF7867);
MakeNameEx(0xFFFF5CC0, "E_Primary_Wastegate_Duty_MaximumExt_4byteExt____E77", SN_CHECK);
MakeUnknown(0xFFFF5CC0, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF5CC0);
MakeNameEx(0xFFFF76B4, "E_AF_Correction_1_4byteExt____E81", SN_CHECK);
MakeUnknown(0xFFFF76B4, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF76B4);
MakeNameEx(0xFFFF684E, "E_AF_Correction_1_2byteExtExt____E82", SN_CHECK);
MakeUnknown(0xFFFF684E, 2, DOUNK_SIMPLE);
MakeWord(0xFFFF684E);
MakeNameEx(0xFFFF6852, "E_AF_Learning_1_2byteExtExt____E83", SN_CHECK);
MakeUnknown(0xFFFF6852, 2, DOUNK_SIMPLE);
MakeWord(0xFFFF6852);
MakeNameEx(0xFFFF7970, "E_Primary_Open_Loop_Map_Enrichment_4byteExt____E84", SN_CHECK);
MakeUnknown(0xFFFF7970, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF7970);
MakeNameEx(0xFFFF6858, "E_Primary_Open_Loop_Map_Enrichment_2byteExtExt____E85", SN_CHECK);
MakeUnknown(0xFFFF6858, 2, DOUNK_SIMPLE);
MakeWord(0xFFFF6858);
MakeNameEx(0xFFFF6869, "E_Engine_Load_1byteExtExt____E86", SN_CHECK);
MakeUnknown(0xFFFF6869, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF6869);
MakeNameEx(0xFFFF6834, "E_Manifold_Absolute_Pressure_2byteExtExt____E88", SN_CHECK);
MakeUnknown(0xFFFF6834, 2, DOUNK_SIMPLE);
MakeWord(0xFFFF6834);
MakeNameEx(0xFFFF6834, "E_Manifold_Relative_Sea_Level_Pressure_2byteExtExt____E89", SN_CHECK);
MakeUnknown(0xFFFF6834, 2, DOUNK_SIMPLE);
MakeWord(0xFFFF6834);
MakeNameEx(0xFFFF6864, "E_Target_Boost_2byteExtExt____E90", SN_CHECK);
MakeUnknown(0xFFFF6864, 2, DOUNK_SIMPLE);
MakeWord(0xFFFF6864);
MakeNameEx(0xFFFF6534, "E_AF_Sensor_1_4byteExt____E91", SN_CHECK);
MakeUnknown(0xFFFF6534, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF6534);
MakeNameEx(0xFFFF683C, "E_AF_Sensor_1_2byteExtExt____E92", SN_CHECK);
MakeUnknown(0xFFFF683C, 2, DOUNK_SIMPLE);
MakeWord(0xFFFF683C);
MakeNameEx(0xFFFF6836, "E_Throttle_Plate_Opening_Angle_2byteExtExt____E93", SN_CHECK);
MakeUnknown(0xFFFF6836, 2, DOUNK_SIMPLE);
MakeWord(0xFFFF6836);
MakeNameEx(0xFFFF6873, "E_Feedback_Knock_Correction_1byteExtExt____E94", SN_CHECK);
MakeUnknown(0xFFFF6873, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF6873);
MakeNameEx(0xFFFF6876, "E_Fine_Learning_Knock_Correction_1byteExtExt____E95", SN_CHECK);
MakeUnknown(0xFFFF6876, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF6876);
MakeNameEx(0xFFFF6875, "E_IAM_1byteExtExt____E96", SN_CHECK);
MakeUnknown(0xFFFF6875, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF6875);
MakeNameEx(0xFFFF687F, "E_Primary_WGDC_Maximum_1byteExtExt____E112", SN_CHECK);
MakeUnknown(0xFFFF687F, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF687F);
MakeNameEx(0xFFFF620C, "E_Manifold_Relative_Pressure_4byteExt____E113", SN_CHECK);
MakeUnknown(0xFFFF620C, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF620C);
MakeNameEx(0xFFFF8218, "E_Knock_Correction_Advance_Max_PrimaryExt____E118", SN_CHECK);
MakeUnknown(0xFFFF8218, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF8218);
MakeNameEx(0xFFFF5CA0, "E_Target_Boost_Relative_4byteExt____E120", SN_CHECK);
MakeUnknown(0xFFFF5CA0, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF5CA0);
MakeNameEx(0xFFFF77A8, "E_Closed_Loop_Fueling_Target_4byteExt____E121", SN_CHECK);
MakeUnknown(0xFFFF77A8, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF77A8);
MakeNameEx(0xFFFF6850, "E_Closed_Loop_Fueling_Target_2byteExt____E122", SN_CHECK);
MakeUnknown(0xFFFF6850, 2, DOUNK_SIMPLE);
MakeWord(0xFFFF6850);
MakeNameEx(0xFFFF72EC, "E_Final_Fueling_Base_4byteExt____E123", SN_CHECK);
MakeUnknown(0xFFFF72EC, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF72EC);
MakeNameEx(0xFFFF684A, "E_Final_Fueling_Base_2byteExt____E124", SN_CHECK);
MakeUnknown(0xFFFF684A, 2, DOUNK_SIMPLE);
MakeWord(0xFFFF684A);
MakeNameEx(0xFFFF7F50, "E_Timing_Compensation_IAT_A_4byteExt____E125", SN_CHECK);
MakeUnknown(0xFFFF7F50, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF7F50);
MakeNameEx(0xFFFF9054, "E_Map_Ratio_1_PrimaryExt____E152", SN_CHECK);
MakeUnknown(0xFFFF9054, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF9054);
}   // end of ExtParams

