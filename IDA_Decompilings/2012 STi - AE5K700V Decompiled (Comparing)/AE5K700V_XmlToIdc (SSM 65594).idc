///////////////////////////////////////////////////////////////////////////////
// All definitions for ecu: AE5K700V with SSM read vector base 65594
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

MakeNameEx(0xC12D8, "Target_Boost_X_Axis", SN_CHECK);
MakeNameEx(0xC1304, "Target_Boost_Y_Axis", SN_CHECK);
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

MakeNameEx(0xC0C14, "Target_Boost_Compensation_ECT_Y_Axis", SN_CHECK);
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

MakeNameEx(0xC0E24, "Target_Boost_Compensation_IAT_Y_Axis", SN_CHECK);
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

MakeNameEx(0xC0E94, "Target_Boost_Compensation_Atm_Pressure_X_Axis", SN_CHECK);
MakeNameEx(0xC0EAC, "Target_Boost_Compensation_Atm_Pressure_Y_Axis", SN_CHECK);
MakeNameEx(0xD19EC, "Boost_Limit_Fuel_Cut_", SN_CHECK);
referenceAddress = DfirstB(0xD19EC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Boost_Limit_Fuel_Cut_", SN_CHECK);
}
else
{
    Message("No reference to Boost_Limit_Fuel_Cut_\n");
}

MakeNameEx(0xD19BC, "Boost_Limit_Fuel_Cut_X_Axis", SN_CHECK);
MakeNameEx(0xD19D4, "Boost_Limit_Fuel_Cut_Y_Axis", SN_CHECK);
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

MakeNameEx(0xC10E0, "Initial_Wastegate_Duty_X_Axis", SN_CHECK);
MakeNameEx(0xC111C, "Initial_Wastegate_Duty_Y_Axis", SN_CHECK);
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

MakeNameEx(0xC0EE8, "Max_Wastegate_Duty_X_Axis", SN_CHECK);
MakeNameEx(0xC0F24, "Max_Wastegate_Duty_Y_Axis", SN_CHECK);
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

MakeNameEx(0xC0C54, "InitialMax_Wastegate_Duty_Compensation_IAT_Y_Axis", SN_CHECK);
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

MakeNameEx(0xC0C14, "InitialMax_Wastegate_Duty_Compensation_ECT_Y_Axis", SN_CHECK);
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

MakeNameEx(0xC0E54, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_X_Axis", SN_CHECK);
MakeNameEx(0xC0E6C, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_Y_Axis", SN_CHECK);
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

MakeNameEx(0xC0D04, "Turbo_Dynamics_Proportional_Y_Axis", SN_CHECK);
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

MakeNameEx(0xC0D74, "Turbo_Dynamics_Integral_Positive_Y_Axis", SN_CHECK);
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

MakeNameEx(0xC0D3C, "Turbo_Dynamics_Integral_Negative_Y_Axis", SN_CHECK);
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

MakeNameEx(0xC0C54, "TD_Proportional_Compensation_IAT_Y_Axis", SN_CHECK);
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

MakeNameEx(0xC0C54, "TD_Integral_Positive_Compensation_IAT_Y_Axis", SN_CHECK);
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

MakeNameEx(0xC0C54, "TD_Integral_Negative_Compensation_IAT_Y_Axis", SN_CHECK);
MakeNameEx(0xC0BE8, "TD_Activation_Thresholds_RPM", SN_CHECK);
MakeNameEx(0xC0BD4, "TD_Activation_Thresholds_Target_Boost_", SN_CHECK);
MakeNameEx(0xC0BF0, "TD_Integral_Cumulative_Range_WGDC_Correction", SN_CHECK);
MakeNameEx(0xC0BDC, "TD_Integral_Negative_Activation_Boost_Error", SN_CHECK);
MakeNameEx(0xC0BE0, "TD_Integral_Positive_Activation_Boost_Error", SN_CHECK);
MakeNameEx(0xC0BE4, "TD_Integral_Negative_Activation_Wastegate_Duty", SN_CHECK);
MakeNameEx(0xD7C90, "Manifold_Pressure_Sensor_Scaling_", SN_CHECK);
MakeNameEx(0xD7C42, "Manifold_Pressure_Sensor_Limits_CEL", SN_CHECK);
MakeNameEx(0xD7BF9, "Manifold_Pressure_Sensor_CEL_Delays", SN_CHECK);
MakeNameEx(0xCF244, "Primary_Open_Loop_Fueling", SN_CHECK);
referenceAddress = DfirstB(0xCF244);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling\n");
}

MakeNameEx(0xCF1B8, "Primary_Open_Loop_Fueling_X_Axis", SN_CHECK);
MakeNameEx(0xCF1FC, "Primary_Open_Loop_Fueling_Y_Axis", SN_CHECK);
MakeNameEx(0xCF404, "Primary_Open_Loop_Fueling_Failsafe", SN_CHECK);
referenceAddress = DfirstB(0xCF404);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Failsafe", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Failsafe\n");
}

MakeNameEx(0xCF378, "Primary_Open_Loop_Fueling_Failsafe_X_Axis", SN_CHECK);
MakeNameEx(0xCF3BC, "Primary_Open_Loop_Fueling_Failsafe_Y_Axis", SN_CHECK);
MakeNameEx(0xCB6A4, "Primary_Open_Loop_Fuel_Map_Switch_IAM", SN_CHECK);
MakeNameEx(0xCB6A8, "Minimum_Active_Primary_Open_Loop_Enrichment", SN_CHECK);
MakeNameEx(0xCC2D4, "Minimum_Primary_Open_Loop_Enrichment_Throttle", SN_CHECK);
referenceAddress = DfirstB(0xCC2D4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Throttle", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Throttle\n");
}

MakeNameEx(0xCC2BC, "Minimum_Primary_Open_Loop_Enrichment_Throttle_Y_Axis", SN_CHECK);
MakeNameEx(0xCC2F4, "Minimum_Primary_Open_Loop_Enrichment_Accelerator", SN_CHECK);
referenceAddress = DfirstB(0xCC2F4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Accelerator", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Accelerator\n");
}

MakeNameEx(0xCC2DC, "Minimum_Primary_Open_Loop_Enrichment_Accelerator_Y_Axis", SN_CHECK);
MakeNameEx(0xCDBE0, "Primary_Open_Loop_Fueling_Compensation_ECT", SN_CHECK);
referenceAddress = DfirstB(0xCDBE0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_ECT", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_ECT\n");
}

MakeNameEx(0xCBB58, "Primary_Open_Loop_Fueling_Compensation_ECT_Y_Axis", SN_CHECK);
MakeNameEx(0xCC264, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_", SN_CHECK);
referenceAddress = DfirstB(0xCC264);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_\n");
}

MakeNameEx(0xCC24C, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_Y_Axis", SN_CHECK);
MakeNameEx(0xD7F58, "Front_Oxygen_Sensor_Scaling", SN_CHECK);
referenceAddress = DfirstB(0xD7F58);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Scaling", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Scaling\n");
}

MakeNameEx(0xD7F24, "Front_Oxygen_Sensor_Scaling_Y_Axis", SN_CHECK);
MakeNameEx(0x21AC0, "Front_Oxygen_Sensor_Rich_Limit", SN_CHECK);
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

MakeNameEx(0xC36B0, "Front_Oxygen_Sensor_Compensation_Atm_Pressure_Y_Axis", SN_CHECK);
MakeNameEx(0xD09E4, "CL_Fueling_Target_Compensation_A_Load", SN_CHECK);
referenceAddress = DfirstB(0xD09E4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_A_Load", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_A_Load\n");
}

MakeNameEx(0xD0990, "CL_Fueling_Target_Compensation_A_Load_X_Axis", SN_CHECK);
MakeNameEx(0xD09BC, "CL_Fueling_Target_Compensation_A_Load_Y_Axis", SN_CHECK);
MakeNameEx(0xD0C54, "CL_Fueling_Target_Compensation_B_Load", SN_CHECK);
referenceAddress = DfirstB(0xD0C54);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_B_Load", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_B_Load\n");
}

MakeNameEx(0xD0BF0, "CL_Fueling_Target_Compensation_B_Load_X_Axis", SN_CHECK);
MakeNameEx(0xD0C24, "CL_Fueling_Target_Compensation_B_Load_Y_Axis", SN_CHECK);
MakeNameEx(0xD08C4, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT", SN_CHECK);
referenceAddress = DfirstB(0xD08C4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Imm_Cruise_ECT", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Imm_Cruise_ECT\n");
}

MakeNameEx(0xCBB58, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_X_Axis", SN_CHECK);
MakeNameEx(0xD08B8, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_Y_Axis", SN_CHECK);
MakeNameEx(0xD0930, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT", SN_CHECK);
referenceAddress = DfirstB(0xD0930);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Imm_NonCruise_ECT", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Imm_NonCruise_ECT\n");
}

MakeNameEx(0xCBB58, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_X_Axis", SN_CHECK);
MakeNameEx(0xD0924, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_Y_Axis", SN_CHECK);
MakeNameEx(0xCB4E0, "CL_Fueling_Target_Compensation_ECT_Disable", SN_CHECK);
MakeNameEx(0xCB1B4, "CL_to_OL_Delay_", SN_CHECK);
MakeNameEx(0xCB1AE, "CL_to_OL_DelaySwitch_SIDRIVE_Intelligent", SN_CHECK);
MakeNameEx(0xCC2AC, "CL_to_OL_Transition_with_Delay_Throttle", SN_CHECK);
referenceAddress = DfirstB(0xCC2AC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Throttle", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Throttle\n");
}

MakeNameEx(0xCC26C, "CL_to_OL_Transition_with_Delay_Throttle_Y_Axis", SN_CHECK);
MakeNameEx(0xCB6B0, "CL_to_OL_Transition_with_Delay_Throttle_Hysteresis", SN_CHECK);
MakeNameEx(0xCDB0C, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width", SN_CHECK);
referenceAddress = DfirstB(0xCDB0C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Base_Pulse_Width", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Base_Pulse_Width\n");
}

MakeNameEx(0xCDACC, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width_Y_Axis", SN_CHECK);
MakeNameEx(0xCB6AC, "CL_to_OL_Transition_with_Delay_BPW_Hysteresis", SN_CHECK);
MakeNameEx(0xCDB54, "CL_to_OL_Transition_Counter_Step_Value_MAF", SN_CHECK);
referenceAddress = DfirstB(0xCDB54);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_Counter_Step_Value_MAF", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_Counter_Step_Value_MAF\n");
}

MakeNameEx(0xCDB2C, "CL_to_OL_Transition_Counter_Step_Value_MAF_Y_Axis", SN_CHECK);
MakeNameEx(0xCB710, "CL_Delay_Maximum_Throttle", SN_CHECK);
MakeNameEx(0xCB72C, "CL_Delay_Maximum_Vehicle_Speed", SN_CHECK);
MakeNameEx(0xCB6B4, "CL_Delay_Minimum_ECT", SN_CHECK);
MakeNameEx(0xCB73C, "CL_Delay_Maximum_Engine_Load", SN_CHECK);
MakeNameEx(0xCB1AC, "CL_Delay_Engine_Load_Counter_Threshold", SN_CHECK);
MakeNameEx(0xCB6B8, "CL_Delay_Maximum_Engine_Speed_Per_Gear", SN_CHECK);
MakeNameEx(0xCB6E0, "CL_Delay_Maximum_Engine_Speed_Neutral", SN_CHECK);
MakeNameEx(0xD0580, "Injector_Latency_", SN_CHECK);
referenceAddress = DfirstB(0xD0580);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Injector_Latency_", SN_CHECK);
}
else
{
    Message("No reference to Injector_Latency_\n");
}

MakeNameEx(0xD0560, "Injector_Latency_X_Axis", SN_CHECK);
MakeNameEx(0xD0574, "Injector_Latency_Y_Axis", SN_CHECK);
MakeNameEx(0xCB350, "Injector_Flow_Scaling", SN_CHECK);
MakeNameEx(0xCFCFC, "Per_Injector_Pulse_Width_Compensation_A", SN_CHECK);
referenceAddress = DfirstB(0xCFCFC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_A", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_A\n");
}

MakeNameEx(0xCFC74, "Per_Injector_Pulse_Width_Compensation_A_X_Axis", SN_CHECK);
MakeNameEx(0xCFCB8, "Per_Injector_Pulse_Width_Compensation_A_Y_Axis", SN_CHECK);
MakeNameEx(0xCFEA8, "Per_Injector_Pulse_Width_Compensation_B", SN_CHECK);
referenceAddress = DfirstB(0xCFEA8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_B", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_B\n");
}

MakeNameEx(0xCFE20, "Per_Injector_Pulse_Width_Compensation_B_X_Axis", SN_CHECK);
MakeNameEx(0xCFE64, "Per_Injector_Pulse_Width_Compensation_B_Y_Axis", SN_CHECK);
MakeNameEx(0xD0054, "Per_Injector_Pulse_Width_Compensation_C", SN_CHECK);
referenceAddress = DfirstB(0xD0054);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_C", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_C\n");
}

MakeNameEx(0xCFFCC, "Per_Injector_Pulse_Width_Compensation_C_X_Axis", SN_CHECK);
MakeNameEx(0xD0010, "Per_Injector_Pulse_Width_Compensation_C_Y_Axis", SN_CHECK);
MakeNameEx(0xD0200, "Per_Injector_Pulse_Width_Compensation_D", SN_CHECK);
referenceAddress = DfirstB(0xD0200);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_D", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_D\n");
}

MakeNameEx(0xD0178, "Per_Injector_Pulse_Width_Compensation_D_X_Axis", SN_CHECK);
MakeNameEx(0xD01BC, "Per_Injector_Pulse_Width_Compensation_D_Y_Axis", SN_CHECK);
MakeNameEx(0xCC81A, "Cranking_Fuel_Injector_Pulse_Width_A_ECT", SN_CHECK);
referenceAddress = DfirstB(0xCC81A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_A_ECT", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_A_ECT\n");
}

MakeNameEx(0xCBB58, "Cranking_Fuel_Injector_Pulse_Width_A_ECT_Y_Axis", SN_CHECK);
MakeNameEx(0xCC83A, "Cranking_Fuel_Injector_Pulse_Width_B_ECT", SN_CHECK);
referenceAddress = DfirstB(0xCC83A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_B_ECT", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_B_ECT\n");
}

MakeNameEx(0xCBB58, "Cranking_Fuel_Injector_Pulse_Width_B_ECT_Y_Axis", SN_CHECK);
MakeNameEx(0xCC85A, "Cranking_Fuel_Injector_Pulse_Width_C_ECT", SN_CHECK);
referenceAddress = DfirstB(0xCC85A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_C_ECT", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_C_ECT\n");
}

MakeNameEx(0xCBB58, "Cranking_Fuel_Injector_Pulse_Width_C_ECT_Y_Axis", SN_CHECK);
MakeNameEx(0xCC87A, "Cranking_Fuel_Injector_Pulse_Width_D_ECT", SN_CHECK);
referenceAddress = DfirstB(0xCC87A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_D_ECT", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_D_ECT\n");
}

MakeNameEx(0xCBB58, "Cranking_Fuel_Injector_Pulse_Width_D_ECT_Y_Axis", SN_CHECK);
MakeNameEx(0xCC89A, "Cranking_Fuel_Injector_Pulse_Width_E_ECT", SN_CHECK);
referenceAddress = DfirstB(0xCC89A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_E_ECT", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_E_ECT\n");
}

MakeNameEx(0xCBB58, "Cranking_Fuel_Injector_Pulse_Width_E_ECT_Y_Axis", SN_CHECK);
MakeNameEx(0xCC8BA, "Cranking_Fuel_Injector_Pulse_Width_F_ECT", SN_CHECK);
referenceAddress = DfirstB(0xCC8BA);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_F_ECT", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_F_ECT\n");
}

MakeNameEx(0xCBB58, "Cranking_Fuel_Injector_Pulse_Width_F_ECT_Y_Axis", SN_CHECK);
MakeNameEx(0xCEC18, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM", SN_CHECK);
referenceAddress = DfirstB(0xCEC18);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM\n");
}

MakeNameEx(0xCEBE8, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_X_Axis", SN_CHECK);
MakeNameEx(0xCEBFC, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_Y_Axis", SN_CHECK);
MakeNameEx(0xCEBC4, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM", SN_CHECK);
referenceAddress = DfirstB(0xCEBC4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM\n");
}

MakeNameEx(0xCEB94, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_X_Axis", SN_CHECK);
MakeNameEx(0xCEBA8, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_Y_Axis", SN_CHECK);
MakeNameEx(0xCBD9C, "Cranking_Fuel_IPW_Compensation_MAP", SN_CHECK);
referenceAddress = DfirstB(0xCBD9C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_MAP", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_MAP\n");
}

MakeNameEx(0xCBD74, "Cranking_Fuel_IPW_Compensation_MAP_Y_Axis", SN_CHECK);
MakeNameEx(0xCBDD0, "Cranking_Fuel_IPW_Compensation_Accelerator", SN_CHECK);
referenceAddress = DfirstB(0xCBDD0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Accelerator", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Accelerator\n");
}

MakeNameEx(0xCBDA8, "Cranking_Fuel_IPW_Compensation_Accelerator_Y_Axis", SN_CHECK);
MakeNameEx(0xCBDF0, "Cranking_Fuel_IPW_Compensation_IAT", SN_CHECK);
referenceAddress = DfirstB(0xCBDF0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_IAT", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_IAT\n");
}

MakeNameEx(0xCBDDC, "Cranking_Fuel_IPW_Compensation_IAT_Y_Axis", SN_CHECK);
MakeNameEx(0xCE264, "Throttle_Tipin_Enrichment_A", SN_CHECK);
referenceAddress = DfirstB(0xCE264);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment_A", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment_A\n");
}

MakeNameEx(0xCE21C, "Throttle_Tipin_Enrichment_A_Y_Axis", SN_CHECK);
MakeNameEx(0xCE2D0, "Throttle_Tipin_Enrichment_B", SN_CHECK);
referenceAddress = DfirstB(0xCE2D0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment_B", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment_B\n");
}

MakeNameEx(0xCE288, "Throttle_Tipin_Enrichment_B_Y_Axis", SN_CHECK);
MakeNameEx(0xCB9D8, "Minimum_Tipin_Enrichment_Activation", SN_CHECK);
MakeNameEx(0xCB9D4, "Minimum_Tipin_Enrichment_Activation_Throttle", SN_CHECK);
MakeNameEx(0xCC680, "Tipin_Enrichment_Compensation_Boost_Error", SN_CHECK);
referenceAddress = DfirstB(0xCC680);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_Boost_Error", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_Boost_Error\n");
}

MakeNameEx(0xCC65C, "Tipin_Enrichment_Compensation_Boost_Error_Y_Axis", SN_CHECK);
MakeNameEx(0xCC64C, "Tipin_Enrichment_Compensation_RPM", SN_CHECK);
referenceAddress = DfirstB(0xCC64C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_RPM", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_RPM\n");
}

MakeNameEx(0xCC60C, "Tipin_Enrichment_Compensation_RPM_Y_Axis", SN_CHECK);
MakeNameEx(0xCC689, "Tipin_Enrichment_Compensation_A_ECT", SN_CHECK);
referenceAddress = DfirstB(0xCC689);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_A_ECT", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_A_ECT\n");
}

MakeNameEx(0xCBB58, "Tipin_Enrichment_Compensation_A_ECT_Y_Axis", SN_CHECK);
MakeNameEx(0xCE2F4, "Tipin_Enrichment_Compensation_B_ECT", SN_CHECK);
referenceAddress = DfirstB(0xCE2F4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_B_ECT", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_B_ECT\n");
}

MakeNameEx(0xCBB58, "Tipin_Enrichment_Compensation_B_ECT_Y_Axis", SN_CHECK);
MakeNameEx(0xCE314, "Tipin_Enrichment_Compensation_C_ECT", SN_CHECK);
referenceAddress = DfirstB(0xCE314);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_C_ECT", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_C_ECT\n");
}

MakeNameEx(0xCBB58, "Tipin_Enrichment_Compensation_C_ECT_Y_Axis", SN_CHECK);
MakeNameEx(0xCE354, "Tipin_Enrichment_Compensation_D_ECT", SN_CHECK);
referenceAddress = DfirstB(0xCE354);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_D_ECT", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_D_ECT\n");
}

MakeNameEx(0xCBB98, "Tipin_Enrichment_Compensation_D_ECT_Y_Axis", SN_CHECK);
MakeNameEx(0xCB9DC, "Tipin_Enrichment_Compensation_D_ECT_Activation", SN_CHECK);
MakeNameEx(0xCC699, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT", SN_CHECK);
referenceAddress = DfirstB(0xCC699);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT\n");
}

MakeNameEx(0xCBB58, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT_Y_Axis", SN_CHECK);
MakeNameEx(0xCC6A9, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT", SN_CHECK);
referenceAddress = DfirstB(0xCC6A9);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT\n");
}

MakeNameEx(0xCBB58, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT_Y_Axis", SN_CHECK);
MakeNameEx(0xCB15B, "Tipin_Enrichment_Applied_Counter_Reset", SN_CHECK);
MakeNameEx(0xCE374, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT", SN_CHECK);
referenceAddress = DfirstB(0xCE374);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT\n");
}

MakeNameEx(0xCBB58, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT_Y_Axis", SN_CHECK);
MakeNameEx(0xCE394, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT", SN_CHECK);
referenceAddress = DfirstB(0xCE394);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT\n");
}

MakeNameEx(0xCBB58, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT_Y_Axis", SN_CHECK);
MakeNameEx(0xCB15C, "Tipin_Throttle_Cumulative_Reset", SN_CHECK);
MakeNameEx(0xCEE70, "Min_Primary_Base_Enrichment_1_Cruise", SN_CHECK);
referenceAddress = DfirstB(0xCEE70);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_Cruise", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_Cruise\n");
}

MakeNameEx(0xCBB58, "Min_Primary_Base_Enrichment_1_Cruise_X_Axis", SN_CHECK);
MakeNameEx(0xCEE4C, "Min_Primary_Base_Enrichment_1_Cruise_Y_Axis", SN_CHECK);
MakeNameEx(0xCEDCC, "Min_Primary_Base_Enrichment_1_NonCruise", SN_CHECK);
referenceAddress = DfirstB(0xCEDCC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonCruise", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonCruise\n");
}

MakeNameEx(0xCBB58, "Min_Primary_Base_Enrichment_1_NonCruise_X_Axis", SN_CHECK);
MakeNameEx(0xCEDAC, "Min_Primary_Base_Enrichment_1_NonCruise_Y_Axis", SN_CHECK);
MakeNameEx(0xCBE55, "Min_Primary_Base_Enrichment_1_NonPrimary_OL_", SN_CHECK);
referenceAddress = DfirstB(0xCBE55);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonPrimary_OL_", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonPrimary_OL_\n");
}

MakeNameEx(0xCBB58, "Min_Primary_Base_Enrichment_1_NonPrimary_OL_Y_Axis", SN_CHECK);
MakeNameEx(0xCB59C, "AF_Learning_1_Limits", SN_CHECK);
MakeNameEx(0xCB5AC, "AF_Learning_1_Airflow_Ranges", SN_CHECK);
MakeNameEx(0xC30D8, "MAF_Limit_Maximum", SN_CHECK);
MakeNameEx(0xD7E4C, "MAF_Sensor_Scaling", SN_CHECK);
referenceAddress = DfirstB(0xD7E4C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_MAF_Sensor_Scaling", SN_CHECK);
}
else
{
    Message("No reference to MAF_Sensor_Scaling\n");
}

MakeNameEx(0xD7D74, "MAF_Sensor_Scaling_Y_Axis", SN_CHECK);
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

MakeNameEx(0xC3AF4, "MAF_Compensation_IAT_X_Axis", SN_CHECK);
MakeNameEx(0xC3B08, "MAF_Compensation_IAT_Y_Axis", SN_CHECK);
MakeNameEx(0x20198, "Engine_Load_Limit_A_Maximum", SN_CHECK);
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

MakeNameEx(0xC35B8, "Engine_Load_Limit_B_Maximum_RPM_Y_Axis", SN_CHECK);
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

MakeNameEx(0xC3B50, "Engine_Load_Compensation_Cruise_MP_X_Axis", SN_CHECK);
MakeNameEx(0xC3B7C, "Engine_Load_Compensation_Cruise_MP_Y_Axis", SN_CHECK);
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

MakeNameEx(0xC3C50, "Engine_Load_Compensation_NonCruise_MP_X_Axis", SN_CHECK);
MakeNameEx(0xC3C7C, "Engine_Load_Compensation_NonCruise_MP_Y_Axis", SN_CHECK);
MakeNameEx(0xD3A30, "Base_Timing_Primary_Cruise", SN_CHECK);
referenceAddress = DfirstB(0xD3A30);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Primary_Cruise", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Primary_Cruise\n");
}

MakeNameEx(0xD39A4, "Base_Timing_Primary_Cruise_X_Axis", SN_CHECK);
MakeNameEx(0xD39E8, "Base_Timing_Primary_Cruise_Y_Axis", SN_CHECK);
MakeNameEx(0xD3DB0, "Base_Timing_Reference_Cruise_AVCS_related", SN_CHECK);
referenceAddress = DfirstB(0xD3DB0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Reference_Cruise_AVCS_related", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Reference_Cruise_AVCS_related\n");
}

MakeNameEx(0xD3D24, "Base_Timing_Reference_Cruise_AVCS_related_X_Axis", SN_CHECK);
MakeNameEx(0xD3D68, "Base_Timing_Reference_Cruise_AVCS_related_Y_Axis", SN_CHECK);
MakeNameEx(0xD3BF0, "Base_Timing_Primary_NonCruise", SN_CHECK);
referenceAddress = DfirstB(0xD3BF0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Primary_NonCruise", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Primary_NonCruise\n");
}

MakeNameEx(0xD3B64, "Base_Timing_Primary_NonCruise_X_Axis", SN_CHECK);
MakeNameEx(0xD3BA8, "Base_Timing_Primary_NonCruise_Y_Axis", SN_CHECK);
MakeNameEx(0xD3F70, "Base_Timing_Reference_NonCruise_AVCS_related", SN_CHECK);
referenceAddress = DfirstB(0xD3F70);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Reference_NonCruise_AVCS_related", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Reference_NonCruise_AVCS_related\n");
}

MakeNameEx(0xD3EE4, "Base_Timing_Reference_NonCruise_AVCS_related_X_Axis", SN_CHECK);
MakeNameEx(0xD3F28, "Base_Timing_Reference_NonCruise_AVCS_related_Y_Axis", SN_CHECK);
MakeNameEx(0xD25CA, "Base_Timing_Idle_A_InGear", SN_CHECK);
referenceAddress = DfirstB(0xD25CA);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_A_InGear", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_A_InGear\n");
}

MakeNameEx(0xD23B0, "Base_Timing_Idle_A_InGear_Y_Axis", SN_CHECK);
MakeNameEx(0xD25DA, "Base_Timing_Idle_B_InGear", SN_CHECK);
referenceAddress = DfirstB(0xD25DA);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_B_InGear", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_B_InGear\n");
}

MakeNameEx(0xD23B0, "Base_Timing_Idle_B_InGear_Y_Axis", SN_CHECK);
MakeNameEx(0xD25EA, "Base_Timing_Idle_A_Neutral", SN_CHECK);
referenceAddress = DfirstB(0xD25EA);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_A_Neutral", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_A_Neutral\n");
}

MakeNameEx(0xD23B0, "Base_Timing_Idle_A_Neutral_Y_Axis", SN_CHECK);
MakeNameEx(0xD25FA, "Base_Timing_Idle_B_Neutral", SN_CHECK);
referenceAddress = DfirstB(0xD25FA);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_B_Neutral", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_B_Neutral\n");
}

MakeNameEx(0xD23B0, "Base_Timing_Idle_B_Neutral_Y_Axis", SN_CHECK);
MakeNameEx(0xD25C1, "Base_Timing_Idle_Minimum", SN_CHECK);
referenceAddress = DfirstB(0xD25C1);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_Minimum", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_Minimum\n");
}

MakeNameEx(0xD2430, "Base_Timing_Idle_Minimum_Y_Axis", SN_CHECK);
MakeNameEx(0xD1F5C, "Base_Timing_Idle_Minimum_Vehicle_Speed_Enable", SN_CHECK);
MakeNameEx(0xD4B18, "Knock_Correction_Advance_Max_Cruise", SN_CHECK);
referenceAddress = DfirstB(0xD4B18);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_Cruise", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_Cruise\n");
}

MakeNameEx(0xD4A8C, "Knock_Correction_Advance_Max_Cruise_X_Axis", SN_CHECK);
MakeNameEx(0xD4AD0, "Knock_Correction_Advance_Max_Cruise_Y_Axis", SN_CHECK);
MakeNameEx(0xD4CD8, "Knock_Correction_Advance_Max_NonCruise", SN_CHECK);
referenceAddress = DfirstB(0xD4CD8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_NonCruise", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_NonCruise\n");
}

MakeNameEx(0xD4C4C, "Knock_Correction_Advance_Max_NonCruise_X_Axis", SN_CHECK);
MakeNameEx(0xD4C90, "Knock_Correction_Advance_Max_NonCruise_Y_Axis", SN_CHECK);
MakeNameEx(0xD26AC, "Timing_Compensation_A_IAT", SN_CHECK);
referenceAddress = DfirstB(0xD26AC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_A_IAT", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_A_IAT\n");
}

MakeNameEx(0xD266C, "Timing_Compensation_A_IAT_Y_Axis", SN_CHECK);
MakeNameEx(0xD40E4, "Timing_Compensation_A_IAT_Activation", SN_CHECK);
referenceAddress = DfirstB(0xD40E4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_A_IAT_Activation", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_A_IAT_Activation\n");
}

MakeNameEx(0xD40A4, "Timing_Compensation_A_IAT_Activation_X_Axis", SN_CHECK);
MakeNameEx(0xD40C4, "Timing_Compensation_A_IAT_Activation_Y_Axis", SN_CHECK);
MakeNameEx(0xD2C7C, "Timing_Compensation_B_IAT", SN_CHECK);
referenceAddress = DfirstB(0xD2C7C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_B_IAT", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_B_IAT\n");
}

MakeNameEx(0xD2C3C, "Timing_Compensation_B_IAT_Y_Axis", SN_CHECK);
MakeNameEx(0xD2118, "Timing_Compensation_B_IAT_IAM_Activation", SN_CHECK);
MakeNameEx(0xD20FC, "Timing_Compensation_B_IAT_Max_Additive", SN_CHECK);
MakeNameEx(0xD264A, "Timing_Compensation_Imm_Cruise_A_ECT", SN_CHECK);
referenceAddress = DfirstB(0xD264A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_Cruise_A_ECT", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_Cruise_A_ECT\n");
}

MakeNameEx(0xD23B0, "Timing_Compensation_Imm_Cruise_A_ECT_Y_Axis", SN_CHECK);
MakeNameEx(0xD265A, "Timing_Compensation_Imm_Cruise_B_ECT", SN_CHECK);
referenceAddress = DfirstB(0xD265A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_Cruise_B_ECT", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_Cruise_B_ECT\n");
}

MakeNameEx(0xD23B0, "Timing_Compensation_Imm_Cruise_B_ECT_Y_Axis", SN_CHECK);
MakeNameEx(0xD262A, "Timing_Compensation_Imm_NonCruise_A_ECT", SN_CHECK);
referenceAddress = DfirstB(0xD262A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_NonCruise_A_ECT", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_NonCruise_A_ECT\n");
}

MakeNameEx(0xD23B0, "Timing_Compensation_Imm_NonCruise_A_ECT_Y_Axis", SN_CHECK);
MakeNameEx(0xD263A, "Timing_Compensation_Imm_NonCruise_B_ECT", SN_CHECK);
referenceAddress = DfirstB(0xD263A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_NonCruise_B_ECT", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_NonCruise_B_ECT\n");
}

MakeNameEx(0xD23B0, "Timing_Compensation_Imm_NonCruise_B_ECT_Y_Axis", SN_CHECK);
MakeNameEx(0xD46C4, "Timing_Compensation_Per_Cylinder_A", SN_CHECK);
referenceAddress = DfirstB(0xD46C4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_A", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_A\n");
}

MakeNameEx(0xD4678, "Timing_Compensation_Per_Cylinder_A_X_Axis", SN_CHECK);
MakeNameEx(0xD46B0, "Timing_Compensation_Per_Cylinder_A_Y_Axis", SN_CHECK);
MakeNameEx(0xD4758, "Timing_Compensation_Per_Cylinder_B", SN_CHECK);
referenceAddress = DfirstB(0xD4758);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_B", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_B\n");
}

MakeNameEx(0xD470C, "Timing_Compensation_Per_Cylinder_B_X_Axis", SN_CHECK);
MakeNameEx(0xD4744, "Timing_Compensation_Per_Cylinder_B_Y_Axis", SN_CHECK);
MakeNameEx(0xD47EC, "Timing_Compensation_Per_Cylinder_C", SN_CHECK);
referenceAddress = DfirstB(0xD47EC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_C", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_C\n");
}

MakeNameEx(0xD47A0, "Timing_Compensation_Per_Cylinder_C_X_Axis", SN_CHECK);
MakeNameEx(0xD47D8, "Timing_Compensation_Per_Cylinder_C_Y_Axis", SN_CHECK);
MakeNameEx(0xD4884, "Timing_Compensation_Per_Cylinder_D", SN_CHECK);
referenceAddress = DfirstB(0xD4884);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_D", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_D\n");
}

MakeNameEx(0xD4834, "Timing_Compensation_Per_Cylinder_D_X_Axis", SN_CHECK);
MakeNameEx(0xD486C, "Timing_Compensation_Per_Cylinder_D_Y_Axis", SN_CHECK);
MakeNameEx(0xD21C0, "Timing_Comp_Minimum_Load_Per_Cylinder", SN_CHECK);
MakeNameEx(0xD21BC, "Timing_Comp_Maximum_RPM_Per_Cylinder", SN_CHECK);
MakeNameEx(0xD21C4, "Timing_Comp_Minimum_Coolant_Temp_Per_Cylinder", SN_CHECK);
MakeNameEx(0xD21D0, "Feedback_Correction_Range_RPM", SN_CHECK);
MakeNameEx(0xD21C8, "Feedback_Correction_Minimum_Load", SN_CHECK);
MakeNameEx(0xD21F0, "Feedback_Correction_Retard_Value", SN_CHECK);
MakeNameEx(0xD21EC, "Feedback_Correction_Retard_Limit", SN_CHECK);
MakeNameEx(0xD21F4, "Feedback_Correction_Negative_Advance_Value", SN_CHECK);
MakeNameEx(0xD1E60, "Feedback_Correction_Negative_Advance_Delay", SN_CHECK);
MakeNameEx(0xD21FC, "Extended_Feedback_Correction_High_RPM_Compensation", SN_CHECK);
MakeNameEx(0xD2390, "Fine_Correction_Range_RPM", SN_CHECK);
MakeNameEx(0xD23A0, "Fine_Correction_Range_Load", SN_CHECK);
MakeNameEx(0xD2330, "Fine_Correction_Rows_RPM", SN_CHECK);
MakeNameEx(0xD234C, "Fine_Correction_Columns_Load", SN_CHECK);
MakeNameEx(0xD2374, "Fine_Correction_Retard_Value", SN_CHECK);
MakeNameEx(0xD2370, "Fine_Correction_Retard_Limit", SN_CHECK);
MakeNameEx(0xD236C, "Fine_Correction_Advance_Value", SN_CHECK);
MakeNameEx(0xD2368, "Fine_Correction_Advance_Limit", SN_CHECK);
MakeNameEx(0xD1E70, "Fine_Correction_Advance_Delay", SN_CHECK);
MakeNameEx(0xD22E0, "Rough_Correction_Range_RPM", SN_CHECK);
MakeNameEx(0xD22F0, "Rough_Correction_Range_Load", SN_CHECK);
MakeNameEx(0xD2300, "Rough_Correction_Minimum_KC_Advance_Map_Value", SN_CHECK);
MakeNameEx(0xD2FA8, "Rough_Correction_Learning_Delay_Increasing_", SN_CHECK);
referenceAddress = DfirstB(0xD2FA8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Rough_Correction_Learning_Delay_Increasing_", SN_CHECK);
}
else
{
    Message("No reference to Rough_Correction_Learning_Delay_Increasing_\n");
}

MakeNameEx(0xD2F80, "Rough_Correction_Learning_Delay_Increasing_Y_Axis", SN_CHECK);
MakeNameEx(0xD2304, "Advance_Multiplier_Initial", SN_CHECK);
MakeNameEx(0xD2308, "Advance_Multiplier_Step_Value", SN_CHECK);
MakeNameEx(0xD9B1C, "Intake_Cam_Advance_Angle_Cruise_AVCS", SN_CHECK);
referenceAddress = DfirstB(0xD9B1C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_Cruise_AVCS", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_Cruise_AVCS\n");
}

MakeNameEx(0xD9A94, "Intake_Cam_Advance_Angle_Cruise_AVCS_X_Axis", SN_CHECK);
MakeNameEx(0xD9ADC, "Intake_Cam_Advance_Angle_Cruise_AVCS_Y_Axis", SN_CHECK);
MakeNameEx(0xD9DE4, "Intake_Cam_Advance_Angle_NonCruise_AVCS", SN_CHECK);
referenceAddress = DfirstB(0xD9DE4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_NonCruise_AVCS", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_NonCruise_AVCS\n");
}

MakeNameEx(0xD9D5C, "Intake_Cam_Advance_Angle_NonCruise_AVCS_X_Axis", SN_CHECK);
MakeNameEx(0xD9DA4, "Intake_Cam_Advance_Angle_NonCruise_AVCS_Y_Axis", SN_CHECK);
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

MakeNameEx(0xF9E60, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_X_Axis", SN_CHECK);
MakeNameEx(0xF9E9C, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Y_Axis", SN_CHECK);
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

MakeNameEx(0xFA0E0, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp_X_Axis", SN_CHECK);
MakeNameEx(0xFA11C, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp_Y_Axis", SN_CHECK);
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

MakeNameEx(0xFA360, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent_X_Axis", SN_CHECK);
MakeNameEx(0xFA39C, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent_Y_Axis", SN_CHECK);
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

MakeNameEx(0xF9014, "Requested_Torque_Base_RPM_Y_Axis", SN_CHECK);
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

MakeNameEx(0xF9484, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_X_Axis", SN_CHECK);
MakeNameEx(0xF94C4, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_Y_Axis", SN_CHECK);
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

MakeNameEx(0xF9704, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_X_Axis", SN_CHECK);
MakeNameEx(0xF9744, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_Y_Axis", SN_CHECK);
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

MakeNameEx(0xF9984, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_X_Axis", SN_CHECK);
MakeNameEx(0xF99C4, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_Y_Axis", SN_CHECK);
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

MakeNameEx(0xF9C30, "Requested_Torque_Limit_A_Per_GearEngine_Speed_X_Axis", SN_CHECK);
MakeNameEx(0xF9C70, "Requested_Torque_Limit_A_Per_GearEngine_Speed_Y_Axis", SN_CHECK);
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

MakeNameEx(0xF9D48, "Requested_Torque_Limit_B_Per_GearEngine_Speed_X_Axis", SN_CHECK);
MakeNameEx(0xF9D88, "Requested_Torque_Limit_B_Per_GearEngine_Speed_Y_Axis", SN_CHECK);
MakeNameEx(0xCBA34, "Rev_Limit_A", SN_CHECK);
MakeNameEx(0xCBA3C, "Rev_Limit_B", SN_CHECK);
MakeNameEx(0xCBA4C, "Rev_Limit_Fuel_Resume_Boost", SN_CHECK);
MakeNameEx(0xCBA54, "Speed_Limiting_Enable_Fuel_Cut", SN_CHECK);
MakeNameEx(0xCBA5C, "Speed_Limiting_Disable_Fuel_Cut", SN_CHECK);
MakeNameEx(0xF8E48, "Speed_Limiting_A_Throttle_SIDRIVE_SportSport_Sharp", SN_CHECK);
MakeNameEx(0xF8E60, "Speed_Limiting_B_Throttle_SIDRIVE_SportSport_Sharp", SN_CHECK);
MakeNameEx(0xF8E54, "Speed_Limiting_Throttle_SIDRIVE_Intelligent", SN_CHECK);
MakeNameEx(0xD81D4, "Fuel_Temp_Sensor_Scaling", SN_CHECK);
referenceAddress = DfirstB(0xD81D4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Fuel_Temp_Sensor_Scaling", SN_CHECK);
}
else
{
    Message("No reference to Fuel_Temp_Sensor_Scaling\n");
}

MakeNameEx(0xD815C, "Fuel_Temp_Sensor_Scaling_Y_Axis", SN_CHECK);
MakeNameEx(0xD80E4, "Intake_Temp_Sensor_Scaling", SN_CHECK);
referenceAddress = DfirstB(0xD80E4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Intake_Temp_Sensor_Scaling", SN_CHECK);
}
else
{
    Message("No reference to Intake_Temp_Sensor_Scaling\n");
}

MakeNameEx(0xD806C, "Intake_Temp_Sensor_Scaling_Y_Axis", SN_CHECK);
MakeNameEx(0xD7FFC, "Coolant_Temp_Sensor_Scaling", SN_CHECK);
referenceAddress = DfirstB(0xD7FFC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Coolant_Temp_Sensor_Scaling", SN_CHECK);
}
else
{
    Message("No reference to Coolant_Temp_Sensor_Scaling\n");
}

MakeNameEx(0xD7F8C, "Coolant_Temp_Sensor_Scaling_Y_Axis", SN_CHECK);
MakeNameEx(0x4ADCC, "Fuel_Pump_Duty_Cycle", SN_CHECK);
MakeNameEx(0xD84DC, "Radiator_Fan_Modes_A_ECT", SN_CHECK);
MakeNameEx(0xD84EC, "Radiator_Fan_Modes_B_ECT", SN_CHECK);
MakeNameEx(0xD84FC, "Radiator_Fan_Modes_Veh_Speed", SN_CHECK);
MakeNameEx(0xC344C, "Gear_Determination_Thresholds_A", SN_CHECK);
MakeNameEx(0xC3460, "Gear_Determination_Thresholds_B", SN_CHECK);
MakeNameEx(0xC3474, "Gear_Determination_Thresholds_C", SN_CHECK);
MakeNameEx(0xD6114, "Idle_Speed_Target_A", SN_CHECK);
referenceAddress = DfirstB(0xD6114);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_A", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_A\n");
}

MakeNameEx(0xD59A8, "Idle_Speed_Target_A_Y_Axis", SN_CHECK);
MakeNameEx(0xD6154, "Idle_Speed_Target_B", SN_CHECK);
referenceAddress = DfirstB(0xD6154);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_B", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_B\n");
}

MakeNameEx(0xD59A8, "Idle_Speed_Target_B_Y_Axis", SN_CHECK);
MakeNameEx(0xD6194, "Idle_Speed_Target_C", SN_CHECK);
referenceAddress = DfirstB(0xD6194);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_C", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_C\n");
}

MakeNameEx(0xD59A8, "Idle_Speed_Target_C_Y_Axis", SN_CHECK);
MakeNameEx(0xD6234, "Idle_Speed_Target_D", SN_CHECK);
referenceAddress = DfirstB(0xD6234);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_D", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_D\n");
}

MakeNameEx(0xD59A8, "Idle_Speed_Target_D_Y_Axis", SN_CHECK);
MakeNameEx(0xD8390, "Ignition_Dwell", SN_CHECK);
referenceAddress = DfirstB(0xD8390);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Ignition_Dwell", SN_CHECK);
}
else
{
    Message("No reference to Ignition_Dwell\n");
}

MakeNameEx(0xD833C, "Ignition_Dwell_X_Axis", SN_CHECK);
MakeNameEx(0xD837C, "Ignition_Dwell_Y_Axis", SN_CHECK);
MakeNameEx(0xFFB80, "Checksum_Fix", SN_CHECK);
MakeNameEx(0xA0E2C, "Force_Pass_Readiness_Monitors_", SN_CHECK);
MakeNameEx(0x943F6, "P0000_PASS_CODE_NO_DTC_DETECTED", SN_CHECK);
MakeNameEx(0x943F7, "P0000_PASS_CODE_NO_DTC_DETECTED_", SN_CHECK);
MakeNameEx(0x943D9, "P0011_CAMSHAFT_POS_TIMING_OVERADVANCED_1", SN_CHECK);
MakeNameEx(0x94467, "P0016_CRANKSHAFTCAMSHAFT_CORRELATION_1A", SN_CHECK);
MakeNameEx(0x94466, "P0018_CRANKSHAFTCAMSHAFT_CORRELATION_2A", SN_CHECK);
MakeNameEx(0x943DA, "P0021_CAMSHAFT_POS_TIMING_OVERADVANCED_2", SN_CHECK);
MakeNameEx(0x9441A, "P0030_FRONT_O2_SENSOR_RANGEPERF", SN_CHECK);
MakeNameEx(0x94405, "P0031_FRONT_O2_SENSOR_LOW_INPUT", SN_CHECK);
MakeNameEx(0x94403, "P0032_FRONT_O2_SENSOR_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x94404, "P0037_REAR_O2_SENSOR_LOW_INPUT", SN_CHECK);
MakeNameEx(0x94402, "P0038_REAR_O2_SENSOR_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x94415, "P0068_MAP_SENSOR_RANGEPERF", SN_CHECK);
MakeNameEx(0x94416, "P0101_MAF_SENSOR_RANGEPERF", SN_CHECK);
MakeNameEx(0x943B5, "P0102_MAF_SENSOR_LOW_INPUT", SN_CHECK);
MakeNameEx(0x943B6, "P0103_MAF_SENSOR_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x94406, "P0107_MAP_SENSOR_LOW_INPUT", SN_CHECK);
MakeNameEx(0x94407, "P0108_MAP_SENSOR_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x94401, "P0111_IAT_SENSOR_RANGEPERF", SN_CHECK);
MakeNameEx(0x943FF, "P0112_IAT_SENSOR_LOW_INPUT", SN_CHECK);
MakeNameEx(0x94400, "P0113_IAT_SENSOR_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x943BE, "P0117_COOLANT_TEMP_SENSOR_LOW_INPUT", SN_CHECK);
MakeNameEx(0x943BF, "P0118_COOLANT_TEMP_SENSOR_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x943BC, "P0122_TPS_A_LOW_INPUT", SN_CHECK);
MakeNameEx(0x943BD, "P0123_TPS_A_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x943C1, "P0125_INSUFFICIENT_COOLANT_TEMP_FUELING", SN_CHECK);
MakeNameEx(0x9444F, "P0126_INSUFFICIENT_COOLANT_TEMP_OPERATION", SN_CHECK);
MakeNameEx(0x9440C, "P0128_THERMOSTAT_MALFUNCTION", SN_CHECK);
MakeNameEx(0x943F9, "P0131_FRONT_O2_SENSOR_LOW_INPUT", SN_CHECK);
MakeNameEx(0x943FB, "P0132_FRONT_O2_SENSOR_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x943E3, "P0133_FRONT_O2_SENSOR_SLOW_RESPONSE", SN_CHECK);
MakeNameEx(0x94418, "P0134_FRONT_O2_SENSOR_NO_ACTIVITY", SN_CHECK);
MakeNameEx(0x943F8, "P0137_REAR_O2_SENSOR_LOW_VOLTAGE", SN_CHECK);
MakeNameEx(0x943FD, "P0138_REAR_O2_SENSOR_HIGH_VOLTAGE", SN_CHECK);
MakeNameEx(0x944A5, "P013A_O2_SENSOR_SLOW_RESPONSE_RICH_TO_LEAN_B1_S2", SN_CHECK);
MakeNameEx(0x944A4, "P013B_O2_SENSOR_SLOW_RESPONSE_LEAN_TO_RICH_B1_S2", SN_CHECK);
MakeNameEx(0x944A1, "P013E_O2_SENSOR_DELAYED_RESPONSE_RICH_TO_LEAN_B1_S2", SN_CHECK);
MakeNameEx(0x944A0, "P013F_O2_SENSOR_DELAYED_RESPONSE_LEAN_TO_RICH_B1_S2", SN_CHECK);
MakeNameEx(0x94462, "P0140_REAR_O2_SENSOR_NO_ACTIVITY", SN_CHECK);
MakeNameEx(0x943E2, "P0141_REAR_O2_SENSOR_MALFUNCTION", SN_CHECK);
MakeNameEx(0x943ED, "P0171_SYSTEM_TOO_LEAN", SN_CHECK);
MakeNameEx(0x943EE, "P0172_SYSTEM_TOO_RICH", SN_CHECK);
MakeNameEx(0x94477, "P0201_INJECTOR_CIRCUIT_MALFUNCTION_CYLINDER_1", SN_CHECK);
MakeNameEx(0x9447A, "P0202_INJECTOR_CIRCUIT_MALFUNCTION_CYLINDER_2", SN_CHECK);
MakeNameEx(0x94479, "P0203_INJECTOR_CIRCUIT_MALFUNCTION_CYLINDER_3", SN_CHECK);
MakeNameEx(0x94478, "P0204_INJECTOR_CIRCUIT_MALFUNCTION_CYLINDER_4", SN_CHECK);
MakeNameEx(0x94421, "P0222_TPS_B_LOW_INPUT", SN_CHECK);
MakeNameEx(0x94422, "P0223_TPS_B_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x94414, "P0230_FUEL_PUMP_PRIMARY_CIRCUIT", SN_CHECK);
MakeNameEx(0x94413, "P0244_WASTEGATE_SOLENOID_A_RANGEPERF", SN_CHECK);
MakeNameEx(0x94411, "P0245_WASTEGATE_SOLENOID_A_LOW", SN_CHECK);
MakeNameEx(0x94412, "P0246_WASTEGATE_SOLENOID_A_HIGH", SN_CHECK);
MakeNameEx(0x943EF, "P0301_MISFIRE_CYLINDER_1", SN_CHECK);
MakeNameEx(0x943F0, "P0302_MISFIRE_CYLINDER_2", SN_CHECK);
MakeNameEx(0x943F1, "P0303_MISFIRE_CYLINDER_3", SN_CHECK);
MakeNameEx(0x943F2, "P0304_MISFIRE_CYLINDER_4", SN_CHECK);
MakeNameEx(0x943BA, "P0327_KNOCK_SENSOR_1_LOW_INPUT", SN_CHECK);
MakeNameEx(0x943BB, "P0328_KNOCK_SENSOR_1_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x943B0, "P0335_CRANKSHAFT_POS_SENSOR_A_MALFUNCTION", SN_CHECK);
MakeNameEx(0x943B1, "P0336_CRANKSHAFT_POS_SENSOR_A_RANGEPERF", SN_CHECK);
MakeNameEx(0x94434, "P0340_CAMSHAFT_POS_SENSOR_A_MALFUNCTION", SN_CHECK);
MakeNameEx(0x94433, "P0345_CAMSHAFT_POS_SENSOR_A_BANK_2", SN_CHECK);
MakeNameEx(0x944AB, "P0351_IGNITION_COIL_A_PRIMARYSECONDARY_CIRCUIT_MALFUNCTION", SN_CHECK);
MakeNameEx(0x944AA, "P0352_IGNITION_COIL_B_PRIMARYSECONDARY_CIRCUIT_MALFUNCTION", SN_CHECK);
MakeNameEx(0x944A9, "P0353_IGNITION_COIL_C_PRIMARYSECONDARY_CIRCUIT_MALFUNCTION", SN_CHECK);
MakeNameEx(0x944A8, "P0354_IGNITION_COIL_D_PRIMARYSECONDARY_CIRCUIT_MALFUNCTION", SN_CHECK);
MakeNameEx(0x9445C, "P0410_SECONDARY_AIR_PUMP_SYSTEM", SN_CHECK);
MakeNameEx(0x9445B, "P0411_SECONDARY_AIR_PUMP_INCORRECT_FLOW", SN_CHECK);
MakeNameEx(0x94460, "P0413_SECONDARY_AIR_PUMP_A_OPEN", SN_CHECK);
MakeNameEx(0x94464, "P0414_SECONDARY_AIR_PUMP_A_SHORTED", SN_CHECK);
MakeNameEx(0x9446E, "P0416_SECONDARY_AIR_PUMP_B_OPEN", SN_CHECK);
MakeNameEx(0x9446D, "P0417_SECONDARY_AIR_PUMP_B_SHORTED", SN_CHECK);
MakeNameEx(0x94461, "P0418_SECONDARY_AIR_PUMP_RELAY_A", SN_CHECK);
MakeNameEx(0x943E9, "P0420_CAT_EFFICIENCY_BELOW_THRESHOLD", SN_CHECK);
MakeNameEx(0x94498, "P0441_EVAP_INCORRECT_PURGE_FLOW", SN_CHECK);
MakeNameEx(0x94497, "P0451_EVAP_PRESSURE_SENSOR_RANGEPERF", SN_CHECK);
MakeNameEx(0x9448A, "P0452_EVAP_PRESSURE_SENSOR_LOW_INPUT", SN_CHECK);
MakeNameEx(0x94489, "P0453_EVAP_PRESSURE_SENSOR_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x94496, "P0455_EVAP_EMISSION_CONTROL_SYSTEM_LEAK_DETECTED_GROSS_LEAK", SN_CHECK);
MakeNameEx(0x943EB, "P0456_EVAP_LEAK_DETECTED_VERY_SMALL", SN_CHECK);
MakeNameEx(0x943DD, "P0458_EVAP_PURGE_VALVE_CIRCUIT_LOW", SN_CHECK);
MakeNameEx(0x943DE, "P0459_EVAP_PURGE_VALVE_CIRCUIT_HIGH", SN_CHECK);
MakeNameEx(0x943C4, "P0461_FUEL_LEVEL_SENSOR_RANGEPERF", SN_CHECK);
MakeNameEx(0x943C2, "P0462_FUEL_LEVEL_SENSOR_LOW_INPUT", SN_CHECK);
MakeNameEx(0x943C3, "P0463_FUEL_LEVEL_SENSOR_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x943B7, "P0500_VEHICLE_SPEED_SENSOR_A", SN_CHECK);
MakeNameEx(0x943D7, "P0506_IDLE_CONTROL_RPM_LOWER_THAN_EXPECTED", SN_CHECK);
MakeNameEx(0x943D8, "P0507_IDLE_CONTROL_RPM_HIGH_THAN_EXPECTED", SN_CHECK);
MakeNameEx(0x94484, "P050A_COLD_START_IDLE_AIR_CONTROL_SYSTEM_PERFORMANCE", SN_CHECK);
MakeNameEx(0x94483, "P050B_COLD_START_IGNITION_TIMING_PERFORMANCE", SN_CHECK);
MakeNameEx(0x943C6, "P0512_STARTER_REQUEST_CIRCUIT", SN_CHECK);
MakeNameEx(0x943B4, "P0604_CONTROL_MODULE_RAM_ERROR", SN_CHECK);
MakeNameEx(0x94435, "P0605_CONTROL_MODULE_ROM_ERROR", SN_CHECK);
MakeNameEx(0x94429, "P0607_CONTROL_MODULE_PERFORMANCE", SN_CHECK);
MakeNameEx(0x94428, "P0638_THROTTLE_ACTUATOR_RANGEPERF", SN_CHECK);
MakeNameEx(0x943CA, "P0851_NEUTRAL_SWITCH_INPUT_LOW", SN_CHECK);
MakeNameEx(0x943CE, "P0852_NEUTRAL_SWITCH_INPUT_HIGH", SN_CHECK);
MakeNameEx(0x943E5, "P1152_FRONT_O2_SENSOR_RANGEPERF_LOW_B1_S1", SN_CHECK);
MakeNameEx(0x943E6, "P1153_FRONT_O2_SENSOR_RANGEPERF_HIGH_B1_S1", SN_CHECK);
MakeNameEx(0x94423, "P1160_ABNORMAL_RETURN_SPRING", SN_CHECK);
MakeNameEx(0x943DB, "P1400_FUEL_TANK_PRESSURE_SOL_LOW", SN_CHECK);
MakeNameEx(0x94468, "P1410_SECONDARY_AIR_PUMP_VALVE_STUCK_OPEN", SN_CHECK);
MakeNameEx(0x94465, "P1418_SECONDARY_AIR_PUMP_CIRCUIT_SHORTED", SN_CHECK);
MakeNameEx(0x943DC, "P1420_FUEL_TANK_PRESSURE_SOL_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x94495, "P1449_EVAPORATIVE_EMISSION_CONT_SYS_AIR_FILTER_CLOG", SN_CHECK);
MakeNameEx(0x94494, "P1451_EVAPORATIVE_EMISSION_CONT_SYS", SN_CHECK);
MakeNameEx(0x94493, "P1458_CANISTER_PURGE_CONTROL_SOLENOID_VALVE_2_LOW", SN_CHECK);
MakeNameEx(0x9449D, "P1459_CANISTER_PURGE_CONTROL_SOLENOID_VALVE_2_HIGH", SN_CHECK);
MakeNameEx(0x9440D, "P1491_PCV_BLOWBY_FUNCTION_PROBLEM", SN_CHECK);
MakeNameEx(0x943C5, "P1518_STARTER_SWITCH_LOW_INPUT", SN_CHECK);
MakeNameEx(0x94473, "P1519_IMRC_STUCK_CLOSED", SN_CHECK);
MakeNameEx(0x94472, "P1520_IMRC_CIRCUIT_MALFUNCTION", SN_CHECK);
MakeNameEx(0x9440E, "P1560_BACKUP_VOLTAGE_MALFUNCTION", SN_CHECK);
MakeNameEx(0x94471, "P1616_SBDS_INTERACTIVE_CODES", SN_CHECK);
MakeNameEx(0x9444A, "P2004_TGV_INTAKE_MANIFOLD_RUNNER_1_STUCK_OPEN", SN_CHECK);
MakeNameEx(0x9444C, "P2005_TGV_INTAKE_MANIFOLD_RUNNER_2_STUCK_OPEN", SN_CHECK);
MakeNameEx(0x9444B, "P2006_TGV_INTAKE_MANIFOLD_RUNNER_1_STUCK_CLOSED", SN_CHECK);
MakeNameEx(0x9444D, "P2007_TGV_INTAKE_MANIFOLD_RUNNER_2_STUCK_CLOSED", SN_CHECK);
MakeNameEx(0x94458, "P2008_TGV_INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_OPEN", SN_CHECK);
MakeNameEx(0x94456, "P2009_TGV_INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_LOW", SN_CHECK);
MakeNameEx(0x94459, "P2011_TGV_INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_OPEN", SN_CHECK);
MakeNameEx(0x94457, "P2012_TGV_INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_LOW", SN_CHECK);
MakeNameEx(0x94452, "P2016_TGV_INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_LOW", SN_CHECK);
MakeNameEx(0x94453, "P2017_TGV_INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_HIGH", SN_CHECK);
MakeNameEx(0x94454, "P2021_TGV_INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_LOW", SN_CHECK);
MakeNameEx(0x94455, "P2022_TGV_INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_HIGH", SN_CHECK);
MakeNameEx(0x9443D, "P2088_OCV_SOLENOID_A1_CIRCUIT_OPEN", SN_CHECK);
MakeNameEx(0x9443C, "P2089_OCV_SOLENOID_A1_CIRCUIT_SHORT", SN_CHECK);
MakeNameEx(0x9443B, "P2092_OCV_SOLENOID_A2_CIRCUIT_OPEN", SN_CHECK);
MakeNameEx(0x9443A, "P2093_OCV_SOLENOID_A2_CIRCUIT_SHORT", SN_CHECK);
MakeNameEx(0x94427, "P2096_POST_CATALYST_TOO_LEAN_B1", SN_CHECK);
MakeNameEx(0x94430, "P2097_POST_CATALYST_TOO_RICH_B1", SN_CHECK);
MakeNameEx(0x94426, "P2101_THROTTLE_ACTUATOR_CIRCUIT_RANGEPERF", SN_CHECK);
MakeNameEx(0x94424, "P2102_THROTTLE_ACTUATOR_CIRCUIT_LOW", SN_CHECK);
MakeNameEx(0x94425, "P2103_THROTTLE_ACTUATOR_CIRCUIT_HIGH", SN_CHECK);
MakeNameEx(0x94420, "P2109_TPS_A_MINIMUM_STOP_PERF", SN_CHECK);
MakeNameEx(0x9442D, "P2122_TPS_D_CIRCUIT_LOW_INPUT", SN_CHECK);
MakeNameEx(0x9442E, "P2123_TPS_D_CIRCUIT_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x9442B, "P2127_TPS_E_CIRCUIT_LOW_INPUT", SN_CHECK);
MakeNameEx(0x9442C, "P2128_TPS_E_CIRCUIT_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x9442F, "P2135_TPS_AB_VOLTAGE", SN_CHECK);
MakeNameEx(0x9442A, "P2138_TPS_DE_VOLTAGE", SN_CHECK);
MakeNameEx(0x9449A, "P219A_BANK_1_AFR_IMBALANCE", SN_CHECK);
MakeNameEx(0x94488, "P2401_EVAP_LEAK_DETECTION_PUMP_CONTROL_CIRCUIT_LOW", SN_CHECK);
MakeNameEx(0x9449C, "P2402_EVAP_LEAK_DETECTION_PUMP_CONTROL_CIRCUIT_HIGH", SN_CHECK);
MakeNameEx(0x9449B, "P2404_EVAP_LEAK_DETECTION_PUMP_SENSE_CIRCUIT_RANGEPERF", SN_CHECK);
MakeNameEx(0x94487, "P2419_EVAP_SWITCHING_VALVE_LOW", SN_CHECK);
MakeNameEx(0x94486, "P2420_EVAP_SWITCHING_VALVE_HIGH", SN_CHECK);
MakeNameEx(0x9445D, "P2431_SECONDARY_AIR_PUMP_CIRCUIT_RANGEPERF", SN_CHECK);
MakeNameEx(0x9445F, "P2432_SECONDARY_AIR_PUMP_CIRCUIT_LOW", SN_CHECK);
MakeNameEx(0x9445E, "P2433_SECONDARY_AIR_PUMP_CIRCUIT_HIGH", SN_CHECK);
MakeNameEx(0x9446C, "P2440_SECONDARY_AIR_PUMP_VALVE_1_STUCK_OPEN", SN_CHECK);
MakeNameEx(0x9446B, "P2441_SECONDARY_AIR_PUMP_VALVE_1_STUCK_CLOSED", SN_CHECK);
MakeNameEx(0x9446A, "P2442_SECONDARY_AIR_PUMP_VALVE_2_STUCK_OPEN", SN_CHECK);
MakeNameEx(0x94469, "P2443_SECONDARY_AIR_PUMP_2_STUCK_CLOSED", SN_CHECK);
MakeNameEx(0x9445A, "P2444_SECONDARY_AIR_PUMP_1_STUCK_ON_B1", SN_CHECK);
MakeNameEx(0x94485, "P2610_ECMPCM_INTERNAL_ENGINE_OFF_TIMER_PERFORMANCE", SN_CHECK);
MakeNameEx(0x94481, "U0073_CAN_COMMUNICATION_BUS_A_OFF", SN_CHECK);
MakeNameEx(0x9447E, "U0101_CAN_LOST_COMMUNICATION_WITH_TCM", SN_CHECK);
MakeNameEx(0x94480, "U0122_CAN_LOST_COMMUNICATION_WITH_VDC", SN_CHECK);
MakeNameEx(0x9447C, "U0140_CAN_LOST_COMMUNICATION_WITH_BIU", SN_CHECK);
MakeNameEx(0x9447D, "U0402_CAN_INVALID_DATA_RECEIVED_FROM_TCM", SN_CHECK);
MakeNameEx(0x9447F, "U0416_CAN_INVALID_DATA_RECEIVED_FROM_VDC", SN_CHECK);
MakeNameEx(0x9447B, "U0422_CAN_INVALID_DATA_RECEIVED_FROM_BIU", SN_CHECK);
MakeNameEx(0xD556C, "Ignition_Dwell_", SN_CHECK);
referenceAddress = DfirstB(0xD556C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Ignition_Dwell_", SN_CHECK);
}
else
{
    Message("No reference to Ignition_Dwell_\n");
}

MakeNameEx(0xD5518, "Ignition_Dwell_X_AXIS", SN_CHECK);
MakeNameEx(0xD5558, "Ignition_Dwell_Y_AXIS", SN_CHECK);
MakeNameEx(0xDD470, "Requested_Torque_Limit_A_Per_GearEngine_Speed_", SN_CHECK);
referenceAddress = DfirstB(0xDD470);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Limit_A_Per_GearEngine_Speed_", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Limit_A_Per_GearEngine_Speed_\n");
}

MakeNameEx(0xDD418, "Requested_Torque_Limit_A_Per_GearEngine_Speed_X_AXIS", SN_CHECK);
MakeNameEx(0xDD458, "Requested_Torque_Limit_A_Per_GearEngine_Speed_Y_AXIS", SN_CHECK);
MakeNameEx(0xDD588, "Requested_Torque_Limit_B_Per_GearEngine_Speed_", SN_CHECK);
referenceAddress = DfirstB(0xDD588);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Limit_B_Per_GearEngine_Speed_", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Limit_B_Per_GearEngine_Speed_\n");
}

MakeNameEx(0xDD530, "Requested_Torque_Limit_B_Per_GearEngine_Speed_X_AXIS", SN_CHECK);
MakeNameEx(0xDD570, "Requested_Torque_Limit_B_Per_GearEngine_Speed_Y_AXIS", SN_CHECK);
MakeNameEx(0x45328, "Fuel_Pump_Duty", SN_CHECK);
MakeNameEx(0xC0D14, "Target_Boost__", SN_CHECK);
referenceAddress = DfirstB(0xC0D14);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Boost__", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost__\n");
}

MakeNameEx(0xC0CAC, "Target_Boost_X_AXIS", SN_CHECK);
MakeNameEx(0xC0CD8, "Target_Boost_Y_AXIS", SN_CHECK);
MakeNameEx(0xC06C8, "Target_Boost_Compensation_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xC06C8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_ECT_\n");
}

MakeNameEx(0xC05E8, "Target_Boost_Compensation_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xC05E0, "Target_Boost_Compensation_1st_Gear_", SN_CHECK);
MakeNameEx(0xC05DC, "Target_Boost_Compensation_1st_Gear_Speed_Disable_", SN_CHECK);
MakeNameEx(0xC0810, "Target_Boost_Compensation_IAT__", SN_CHECK);
referenceAddress = DfirstB(0xC0810);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_IAT__", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_IAT__\n");
}

MakeNameEx(0xC07F8, "Target_Boost_Compensation_IAT_Y_AXIS", SN_CHECK);
MakeNameEx(0xC0898, "Target_Boost_Compensation_Atm_Pressure__", SN_CHECK);
referenceAddress = DfirstB(0xC0898);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_Atm_Pressure__", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_Atm_Pressure__\n");
}

MakeNameEx(0xC0868, "Target_Boost_Compensation_Atm_Pressure_X_AXIS", SN_CHECK);
MakeNameEx(0xC0880, "Target_Boost_Compensation_Atm_Pressure_Y_AXIS", SN_CHECK);
MakeNameEx(0xCEE54, "Boost_Limit_Fuel_Cut__", SN_CHECK);
referenceAddress = DfirstB(0xCEE54);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Boost_Limit_Fuel_Cut__", SN_CHECK);
}
else
{
    Message("No reference to Boost_Limit_Fuel_Cut__\n");
}

MakeNameEx(0xCEE24, "Boost_Limit_Fuel_Cut_X_AXIS", SN_CHECK);
MakeNameEx(0xCEE3C, "Boost_Limit_Fuel_Cut_Y_AXIS", SN_CHECK);
MakeNameEx(0xC05D0, "Boost_Control_Disable_IAM_", SN_CHECK);
MakeNameEx(0xC05CC, "Boost_Control_Disable_Fine_Correction_", SN_CHECK);
MakeNameEx(0xC0581, "Boost_Control_Disable_Delay_Fine_Correction_", SN_CHECK);
MakeNameEx(0xC0B24, "Initial_Wastegate_Duty__", SN_CHECK);
referenceAddress = DfirstB(0xC0B24);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Initial_Wastegate_Duty__", SN_CHECK);
}
else
{
    Message("No reference to Initial_Wastegate_Duty__\n");
}

MakeNameEx(0xC0AB4, "Initial_Wastegate_Duty_X_AXIS", SN_CHECK);
MakeNameEx(0xC0AF0, "Initial_Wastegate_Duty_Y_AXIS", SN_CHECK);
MakeNameEx(0xC092C, "Max_Wastegate_Duty__", SN_CHECK);
referenceAddress = DfirstB(0xC092C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Max_Wastegate_Duty__", SN_CHECK);
}
else
{
    Message("No reference to Max_Wastegate_Duty__\n");
}

MakeNameEx(0xC08BC, "Max_Wastegate_Duty_X_AXIS", SN_CHECK);
MakeNameEx(0xC08F8, "Max_Wastegate_Duty_Y_AXIS", SN_CHECK);
MakeNameEx(0x13D98, "Max_Wastegate_Duty_Limit_PostCompensation_", SN_CHECK);
MakeNameEx(0xC0668, "InitialMax_Wastegate_Duty_Compensation_IAT_", SN_CHECK);
referenceAddress = DfirstB(0xC0668);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_IAT_", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_IAT_\n");
}

MakeNameEx(0xC0628, "InitialMax_Wastegate_Duty_Compensation_IAT_Y_AXIS", SN_CHECK);
MakeNameEx(0xC0688, "InitialMax_Wastegate_Duty_Compensation_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xC0688);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_ECT_", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_ECT_\n");
}

MakeNameEx(0xC05E8, "InitialMax_Wastegate_Duty_Compensation_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xC0850, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_", SN_CHECK);
referenceAddress = DfirstB(0xC0850);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_\n");
}

MakeNameEx(0xC0828, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_X_AXIS", SN_CHECK);
MakeNameEx(0xC0840, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_Y_AXIS", SN_CHECK);
MakeNameEx(0xC06FC, "Turbo_Dynamics_Proportional_", SN_CHECK);
referenceAddress = DfirstB(0xC06FC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Proportional_", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Proportional_\n");
}

MakeNameEx(0xC06D8, "Turbo_Dynamics_Proportional_Y_AXIS", SN_CHECK);
MakeNameEx(0xC076C, "Turbo_Dynamics_Integral_Positive_", SN_CHECK);
referenceAddress = DfirstB(0xC076C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Integral_Positive_", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Integral_Positive_\n");
}

MakeNameEx(0xC0748, "Turbo_Dynamics_Integral_Positive_Y_AXIS", SN_CHECK);
MakeNameEx(0xC0734, "Turbo_Dynamics_Integral_Negative_", SN_CHECK);
referenceAddress = DfirstB(0xC0734);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Integral_Negative_", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Integral_Negative_\n");
}

MakeNameEx(0xC0710, "Turbo_Dynamics_Integral_Negative_Y_AXIS", SN_CHECK);
MakeNameEx(0xC0698, "TD_Proportional_Compensation_IAT_", SN_CHECK);
referenceAddress = DfirstB(0xC0698);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Proportional_Compensation_IAT_", SN_CHECK);
}
else
{
    Message("No reference to TD_Proportional_Compensation_IAT_\n");
}

MakeNameEx(0xC0628, "TD_Proportional_Compensation_IAT_Y_AXIS", SN_CHECK);
MakeNameEx(0xC06B8, "TD_Integral_Positive_Compensation_IAT_", SN_CHECK);
referenceAddress = DfirstB(0xC06B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Integral_Positive_Compensation_IAT_", SN_CHECK);
}
else
{
    Message("No reference to TD_Integral_Positive_Compensation_IAT_\n");
}

MakeNameEx(0xC0628, "TD_Integral_Positive_Compensation_IAT_Y_AXIS", SN_CHECK);
MakeNameEx(0xC06A8, "TD_Integral_Negative_Compensation_IAT_", SN_CHECK);
referenceAddress = DfirstB(0xC06A8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Integral_Negative_Compensation_IAT_", SN_CHECK);
}
else
{
    Message("No reference to TD_Integral_Negative_Compensation_IAT_\n");
}

MakeNameEx(0xC0628, "TD_Integral_Negative_Compensation_IAT_Y_AXIS", SN_CHECK);
MakeNameEx(0xC05BC, "TD_Activation_Thresholds_RPM_", SN_CHECK);
MakeNameEx(0xC05A8, "TD_Activation_Thresholds_Target_Boost__", SN_CHECK);
MakeNameEx(0xC05C4, "TD_Integral_Cumulative_Range_WGDC_Correction_", SN_CHECK);
MakeNameEx(0xC05B0, "TD_Integral_Negative_Activation_Boost_Error_", SN_CHECK);
MakeNameEx(0xC05B4, "TD_Integral_Positive_Activation_Boost_Error_", SN_CHECK);
MakeNameEx(0xC05B8, "TD_Integral_Negative_Activation_Wastegate_Duty_", SN_CHECK);
MakeNameEx(0xD4EA4, "Manifold_Pressure_Sensor_Scaling__", SN_CHECK);
MakeNameEx(0xD4E44, "Manifold_Pressure_Sensor_Limits_CEL_", SN_CHECK);
MakeNameEx(0xC3BF6, "Manifold_Pressure_Sensor_CEL_Delays_", SN_CHECK);
MakeNameEx(0xCC784, "Primary_Open_Loop_Fueling_", SN_CHECK);
referenceAddress = DfirstB(0xCC784);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_\n");
}

MakeNameEx(0xCC6F8, "Primary_Open_Loop_Fueling_X_AXIS", SN_CHECK);
MakeNameEx(0xCC73C, "Primary_Open_Loop_Fueling_Y_AXIS", SN_CHECK);
MakeNameEx(0xCC944, "Primary_Open_Loop_Fueling_Failsafe_", SN_CHECK);
referenceAddress = DfirstB(0xCC944);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Failsafe_", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Failsafe_\n");
}

MakeNameEx(0xCC8B8, "Primary_Open_Loop_Fueling_Failsafe_X_AXIS", SN_CHECK);
MakeNameEx(0xCC8FC, "Primary_Open_Loop_Fueling_Failsafe_Y_AXIS", SN_CHECK);
MakeNameEx(0xC8C68, "Primary_Open_Loop_Fuel_Map_Switch_IAM_", SN_CHECK);
MakeNameEx(0xC8C6C, "Minimum_Active_Primary_Open_Loop_Enrichment_", SN_CHECK);
MakeNameEx(0xC9814, "Minimum_Primary_Open_Loop_Enrichment_Throttle_", SN_CHECK);
referenceAddress = DfirstB(0xC9814);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Throttle_", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Throttle_\n");
}

MakeNameEx(0xC97FC, "Minimum_Primary_Open_Loop_Enrichment_Throttle_Y_AXIS", SN_CHECK);
MakeNameEx(0xC9834, "Minimum_Primary_Open_Loop_Enrichment_Accelerator_", SN_CHECK);
referenceAddress = DfirstB(0xC9834);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Accelerator_", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Accelerator_\n");
}

MakeNameEx(0xC981C, "Minimum_Primary_Open_Loop_Enrichment_Accelerator_Y_AXIS", SN_CHECK);
MakeNameEx(0xCB130, "Primary_Open_Loop_Fueling_Compensation_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xCB130);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_ECT_\n");
}

MakeNameEx(0xC9098, "Primary_Open_Loop_Fueling_Compensation_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xC97A4, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation__", SN_CHECK);
referenceAddress = DfirstB(0xC97A4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_Timing_Compensation__", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_Timing_Compensation__\n");
}

MakeNameEx(0xC978C, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_Y_AXIS", SN_CHECK);
MakeNameEx(0xD53F4, "Front_Oxygen_Sensor_Scaling_", SN_CHECK);
referenceAddress = DfirstB(0xD53F4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Scaling_", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Scaling_\n");
}

MakeNameEx(0xD53C0, "Front_Oxygen_Sensor_Scaling_Y_AXIS", SN_CHECK);
MakeNameEx(0x2135C, "Front_Oxygen_Sensor_Rich_Limit_", SN_CHECK);
MakeNameEx(0xC3038, "Front_Oxygen_Sensor_Compensation_Atm_Pressure_", SN_CHECK);
referenceAddress = DfirstB(0xC3038);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Compensation_Atm_Pressure_", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Compensation_Atm_Pressure_\n");
}

MakeNameEx(0xC3028, "Front_Oxygen_Sensor_Compensation_Atm_Pressure_Y_AXIS", SN_CHECK);
MakeNameEx(0xCDF24, "CL_Fueling_Target_Compensation_A_Load_", SN_CHECK);
referenceAddress = DfirstB(0xCDF24);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_A_Load_", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_A_Load_\n");
}

MakeNameEx(0xCDED0, "CL_Fueling_Target_Compensation_A_Load_X_AXIS", SN_CHECK);
MakeNameEx(0xCDEFC, "CL_Fueling_Target_Compensation_A_Load_Y_AXIS", SN_CHECK);
MakeNameEx(0xCE184, "CL_Fueling_Target_Compensation_B_Load_", SN_CHECK);
referenceAddress = DfirstB(0xCE184);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_B_Load_", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_B_Load_\n");
}

MakeNameEx(0xCE130, "CL_Fueling_Target_Compensation_B_Load_X_AXIS", SN_CHECK);
MakeNameEx(0xCE15C, "CL_Fueling_Target_Compensation_B_Load_Y_AXIS", SN_CHECK);
MakeNameEx(0xCDE04, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xCDE04);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Imm_Cruise_ECT_", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Imm_Cruise_ECT_\n");
}

MakeNameEx(0xC9098, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_X_AXIS", SN_CHECK);
MakeNameEx(0xCDDF8, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xCDE70, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xCDE70);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_\n");
}

MakeNameEx(0xC9098, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_X_AXIS", SN_CHECK);
MakeNameEx(0xCDE64, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xC8778, "CL_to_OL_Delay__", SN_CHECK);
MakeNameEx(0xC97EC, "CL_to_OL_Transition_with_Delay_Throttle_", SN_CHECK);
referenceAddress = DfirstB(0xC97EC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Throttle_", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Throttle_\n");
}

MakeNameEx(0xC97AC, "CL_to_OL_Transition_with_Delay_Throttle_Y_AXIS", SN_CHECK);
MakeNameEx(0xC8C74, "CL_to_OL_Transition_with_Delay_Throttle_Hysteresis_", SN_CHECK);
MakeNameEx(0xCB05C, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width_", SN_CHECK);
referenceAddress = DfirstB(0xCB05C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Base_Pulse_Width_", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Base_Pulse_Width_\n");
}

MakeNameEx(0xCB01C, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width_Y_AXIS", SN_CHECK);
MakeNameEx(0xC8C70, "CL_to_OL_Transition_with_Delay_BPW_Hysteresis_", SN_CHECK);
MakeNameEx(0xCB0A4, "CL_to_OL_Transition_Counter_Step_Value_MAF_", SN_CHECK);
referenceAddress = DfirstB(0xCB0A4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_Counter_Step_Value_MAF_", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_Counter_Step_Value_MAF_\n");
}

MakeNameEx(0xCB07C, "CL_to_OL_Transition_Counter_Step_Value_MAF_Y_AXIS", SN_CHECK);
MakeNameEx(0xC8CD4, "CL_Delay_Maximum_Throttle_", SN_CHECK);
MakeNameEx(0xC8CF0, "CL_Delay_Maximum_Vehicle_Speed_", SN_CHECK);
MakeNameEx(0xC8C78, "CL_Delay_Minimum_ECT_", SN_CHECK);
MakeNameEx(0xC8D00, "CL_Delay_Maximum_Engine_Load_", SN_CHECK);
MakeNameEx(0xC8770, "CL_Delay_Engine_Load_Counter_Threshold_", SN_CHECK);
MakeNameEx(0xC8C7C, "CL_Delay_Maximum_Engine_Speed_Per_Gear_", SN_CHECK);
MakeNameEx(0xC8CA4, "CL_Delay_Maximum_Engine_Speed_Neutral_", SN_CHECK);
MakeNameEx(0xCDAC0, "Injector_Latency__", SN_CHECK);
referenceAddress = DfirstB(0xCDAC0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Injector_Latency__", SN_CHECK);
}
else
{
    Message("No reference to Injector_Latency__\n");
}

MakeNameEx(0xCDAA0, "Injector_Latency_X_AXIS", SN_CHECK);
MakeNameEx(0xCDAB4, "Injector_Latency_Y_AXIS", SN_CHECK);
MakeNameEx(0xC893C, "Injector_Flow_Scaling_", SN_CHECK);
MakeNameEx(0xCD23C, "Per_Injector_Pulse_Width_Compensation_A_", SN_CHECK);
referenceAddress = DfirstB(0xCD23C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_A_", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_A_\n");
}

MakeNameEx(0xCD1B4, "Per_Injector_Pulse_Width_Compensation_A_X_AXIS", SN_CHECK);
MakeNameEx(0xCD1F8, "Per_Injector_Pulse_Width_Compensation_A_Y_AXIS", SN_CHECK);
MakeNameEx(0xCD3E8, "Per_Injector_Pulse_Width_Compensation_B_", SN_CHECK);
referenceAddress = DfirstB(0xCD3E8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_B_", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_B_\n");
}

MakeNameEx(0xCD360, "Per_Injector_Pulse_Width_Compensation_B_X_AXIS", SN_CHECK);
MakeNameEx(0xCD3A4, "Per_Injector_Pulse_Width_Compensation_B_Y_AXIS", SN_CHECK);
MakeNameEx(0xCD594, "Per_Injector_Pulse_Width_Compensation_C_", SN_CHECK);
referenceAddress = DfirstB(0xCD594);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_C_", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_C_\n");
}

MakeNameEx(0xCD50C, "Per_Injector_Pulse_Width_Compensation_C_X_AXIS", SN_CHECK);
MakeNameEx(0xCD550, "Per_Injector_Pulse_Width_Compensation_C_Y_AXIS", SN_CHECK);
MakeNameEx(0xCD740, "Per_Injector_Pulse_Width_Compensation_D_", SN_CHECK);
referenceAddress = DfirstB(0xCD740);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_D_", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_D_\n");
}

MakeNameEx(0xCD6B8, "Per_Injector_Pulse_Width_Compensation_D_X_AXIS", SN_CHECK);
MakeNameEx(0xCD6FC, "Per_Injector_Pulse_Width_Compensation_D_Y_AXIS", SN_CHECK);
MakeNameEx(0xC9D5A, "Cranking_Fuel_Injector_Pulse_Width_A_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xC9D5A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_A_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_A_ECT_\n");
}

MakeNameEx(0xC9098, "Cranking_Fuel_Injector_Pulse_Width_A_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xC9D7A, "Cranking_Fuel_Injector_Pulse_Width_B_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xC9D7A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_B_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_B_ECT_\n");
}

MakeNameEx(0xC9098, "Cranking_Fuel_Injector_Pulse_Width_B_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xC9D9A, "Cranking_Fuel_Injector_Pulse_Width_C_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xC9D9A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_C_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_C_ECT_\n");
}

MakeNameEx(0xC9098, "Cranking_Fuel_Injector_Pulse_Width_C_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xC9DBA, "Cranking_Fuel_Injector_Pulse_Width_D_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xC9DBA);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_D_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_D_ECT_\n");
}

MakeNameEx(0xC9098, "Cranking_Fuel_Injector_Pulse_Width_D_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xC9DDA, "Cranking_Fuel_Injector_Pulse_Width_E_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xC9DDA);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_E_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_E_ECT_\n");
}

MakeNameEx(0xC9098, "Cranking_Fuel_Injector_Pulse_Width_E_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xC9DFA, "Cranking_Fuel_Injector_Pulse_Width_F_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xC9DFA);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_F_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_F_ECT_\n");
}

MakeNameEx(0xC9098, "Cranking_Fuel_Injector_Pulse_Width_F_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xCC158, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_", SN_CHECK);
referenceAddress = DfirstB(0xCC158);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_\n");
}

MakeNameEx(0xCC128, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_X_AXIS", SN_CHECK);
MakeNameEx(0xCC13C, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_Y_AXIS", SN_CHECK);
MakeNameEx(0xCC104, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_", SN_CHECK);
referenceAddress = DfirstB(0xCC104);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_\n");
}

MakeNameEx(0xCC0D4, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_X_AXIS", SN_CHECK);
MakeNameEx(0xCC0E8, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_Y_AXIS", SN_CHECK);
MakeNameEx(0xC92DC, "Cranking_Fuel_IPW_Compensation_MAP_", SN_CHECK);
referenceAddress = DfirstB(0xC92DC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_MAP_", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_MAP_\n");
}

MakeNameEx(0xC92B4, "Cranking_Fuel_IPW_Compensation_MAP_Y_AXIS", SN_CHECK);
MakeNameEx(0xC9310, "Cranking_Fuel_IPW_Compensation_Accelerator_", SN_CHECK);
referenceAddress = DfirstB(0xC9310);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Accelerator_", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Accelerator_\n");
}

MakeNameEx(0xC92E8, "Cranking_Fuel_IPW_Compensation_Accelerator_Y_AXIS", SN_CHECK);
MakeNameEx(0xC9330, "Cranking_Fuel_IPW_Compensation_IAT_", SN_CHECK);
referenceAddress = DfirstB(0xC9330);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_IAT_", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_IAT_\n");
}

MakeNameEx(0xC931C, "Cranking_Fuel_IPW_Compensation_IAT_Y_AXIS", SN_CHECK);
MakeNameEx(0xCB7B4, "Throttle_Tipin_Enrichment_A_", SN_CHECK);
referenceAddress = DfirstB(0xCB7B4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment_A_", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment_A_\n");
}

MakeNameEx(0xCB76C, "Throttle_Tipin_Enrichment_A_Y_AXIS", SN_CHECK);
MakeNameEx(0xCB820, "Throttle_Tipin_Enrichment_B_", SN_CHECK);
referenceAddress = DfirstB(0xCB820);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment_B_", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment_B_\n");
}

MakeNameEx(0xCB7D8, "Throttle_Tipin_Enrichment_B_Y_AXIS", SN_CHECK);
MakeNameEx(0xC8F90, "Minimum_Tipin_Enrichment_Activation_", SN_CHECK);
MakeNameEx(0xC8F8C, "Minimum_Tipin_Enrichment_Activation_Throttle_", SN_CHECK);
MakeNameEx(0xC9BC0, "Tipin_Enrichment_Compensation_Boost_Error_", SN_CHECK);
referenceAddress = DfirstB(0xC9BC0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_Boost_Error_", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_Boost_Error_\n");
}

MakeNameEx(0xC9B9C, "Tipin_Enrichment_Compensation_Boost_Error_Y_AXIS", SN_CHECK);
MakeNameEx(0xC9B8C, "Tipin_Enrichment_Compensation_RPM_", SN_CHECK);
referenceAddress = DfirstB(0xC9B8C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_RPM_", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_RPM_\n");
}

MakeNameEx(0xC9B4C, "Tipin_Enrichment_Compensation_RPM_Y_AXIS", SN_CHECK);
MakeNameEx(0xC9BC9, "Tipin_Enrichment_Compensation_A_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xC9BC9);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_A_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_A_ECT_\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Compensation_A_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xCB844, "Tipin_Enrichment_Compensation_B_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xCB844);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_B_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_B_ECT_\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Compensation_B_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xCB864, "Tipin_Enrichment_Compensation_C_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xCB864);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_C_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_C_ECT_\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Compensation_C_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xCB8A4, "Tipin_Enrichment_Compensation_D_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xCB8A4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_D_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_D_ECT_\n");
}

MakeNameEx(0xC90D8, "Tipin_Enrichment_Compensation_D_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xC8F94, "Tipin_Enrichment_Compensation_D_ECT_Activation_", SN_CHECK);
MakeNameEx(0xC9BD9, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xC9BD9);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT_\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xC9BE9, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xC9BE9);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT_\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xC8722, "Tipin_Enrichment_Applied_Counter_Reset_", SN_CHECK);
MakeNameEx(0xCB8C4, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xCB8C4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT_\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xCB8E4, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xCB8E4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT_\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xC8723, "Tipin_Throttle_Cumulative_Reset_", SN_CHECK);
MakeNameEx(0xCC3B0, "Min_Primary_Base_Enrichment_1_Cruise_", SN_CHECK);
referenceAddress = DfirstB(0xCC3B0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_Cruise_", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_Cruise_\n");
}

MakeNameEx(0xC9098, "Min_Primary_Base_Enrichment_1_Cruise_X_AXIS", SN_CHECK);
MakeNameEx(0xCC38C, "Min_Primary_Base_Enrichment_1_Cruise_Y_AXIS", SN_CHECK);
MakeNameEx(0xCC30C, "Min_Primary_Base_Enrichment_1_NonCruise_", SN_CHECK);
referenceAddress = DfirstB(0xCC30C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonCruise_", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonCruise_\n");
}

MakeNameEx(0xC9098, "Min_Primary_Base_Enrichment_1_NonCruise_X_AXIS", SN_CHECK);
MakeNameEx(0xCC2EC, "Min_Primary_Base_Enrichment_1_NonCruise_Y_AXIS", SN_CHECK);
MakeNameEx(0xC9395, "Min_Primary_Base_Enrichment_1_NonPrimary_OL__", SN_CHECK);
referenceAddress = DfirstB(0xC9395);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonPrimary_OL__", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonPrimary_OL__\n");
}

MakeNameEx(0xC9098, "Min_Primary_Base_Enrichment_1_NonPrimary_OL_Y_AXIS", SN_CHECK);
MakeNameEx(0xC8B70, "AF_Learning_1_Limits_", SN_CHECK);
MakeNameEx(0xC8B80, "AF_Learning_1_Airflow_Ranges_", SN_CHECK);
MakeNameEx(0xC2B94, "MAF_Limit_Maximum_", SN_CHECK);
MakeNameEx(0xD52E8, "MAF_Sensor_Scaling_", SN_CHECK);
referenceAddress = DfirstB(0xD52E8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_MAF_Sensor_Scaling_", SN_CHECK);
}
else
{
    Message("No reference to MAF_Sensor_Scaling_\n");
}

MakeNameEx(0xD5210, "MAF_Sensor_Scaling_Y_AXIS", SN_CHECK);
MakeNameEx(0xC330C, "MAF_Compensation_IAT_", SN_CHECK);
referenceAddress = DfirstB(0xC330C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_MAF_Compensation_IAT_", SN_CHECK);
}
else
{
    Message("No reference to MAF_Compensation_IAT_\n");
}

MakeNameEx(0xC32D8, "MAF_Compensation_IAT_X_AXIS", SN_CHECK);
MakeNameEx(0xC32EC, "MAF_Compensation_IAT_Y_AXIS", SN_CHECK);
MakeNameEx(0x1FC08, "Engine_Load_Limit_A_Maximum_", SN_CHECK);
MakeNameEx(0xC2F38, "Engine_Load_Limit_B_Maximum_RPM_", SN_CHECK);
referenceAddress = DfirstB(0xC2F38);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Limit_B_Maximum_RPM_", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Limit_B_Maximum_RPM_\n");
}

MakeNameEx(0xC2F30, "Engine_Load_Limit_B_Maximum_RPM_Y_AXIS", SN_CHECK);
MakeNameEx(0xC3398, "Engine_Load_Compensation_Cruise_MP_", SN_CHECK);
referenceAddress = DfirstB(0xC3398);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Compensation_Cruise_MP_", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Compensation_Cruise_MP_\n");
}

MakeNameEx(0xC3334, "Engine_Load_Compensation_Cruise_MP_X_AXIS", SN_CHECK);
MakeNameEx(0xC3360, "Engine_Load_Compensation_Cruise_MP_Y_AXIS", SN_CHECK);
MakeNameEx(0xC3498, "Engine_Load_Compensation_NonCruise_MP_", SN_CHECK);
referenceAddress = DfirstB(0xC3498);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Compensation_NonCruise_MP_", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Compensation_NonCruise_MP_\n");
}

MakeNameEx(0xC3434, "Engine_Load_Compensation_NonCruise_MP_X_AXIS", SN_CHECK);
MakeNameEx(0xC3460, "Engine_Load_Compensation_NonCruise_MP_Y_AXIS", SN_CHECK);
MakeNameEx(0xD15B8, "Base_Timing_Primary_Cruise_", SN_CHECK);
referenceAddress = DfirstB(0xD15B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Primary_Cruise_", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Primary_Cruise_\n");
}

MakeNameEx(0xD152C, "Base_Timing_Primary_Cruise_X_AXIS", SN_CHECK);
MakeNameEx(0xD1570, "Base_Timing_Primary_Cruise_Y_AXIS", SN_CHECK);
MakeNameEx(0xD1938, "Base_Timing_Reference_Cruise_AVCS_related_", SN_CHECK);
referenceAddress = DfirstB(0xD1938);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Reference_Cruise_AVCS_related_", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Reference_Cruise_AVCS_related_\n");
}

MakeNameEx(0xD18AC, "Base_Timing_Reference_Cruise_AVCS_related_X_AXIS", SN_CHECK);
MakeNameEx(0xD18F0, "Base_Timing_Reference_Cruise_AVCS_related_Y_AXIS", SN_CHECK);
MakeNameEx(0xD1778, "Base_Timing_Primary_NonCruise_", SN_CHECK);
referenceAddress = DfirstB(0xD1778);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Primary_NonCruise_", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Primary_NonCruise_\n");
}

MakeNameEx(0xD16EC, "Base_Timing_Primary_NonCruise_X_AXIS", SN_CHECK);
MakeNameEx(0xD1730, "Base_Timing_Primary_NonCruise_Y_AXIS", SN_CHECK);
MakeNameEx(0xD1AF8, "Base_Timing_Reference_NonCruise_AVCS_related_", SN_CHECK);
referenceAddress = DfirstB(0xD1AF8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Reference_NonCruise_AVCS_related_", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Reference_NonCruise_AVCS_related_\n");
}

MakeNameEx(0xD1A6C, "Base_Timing_Reference_NonCruise_AVCS_related_X_AXIS", SN_CHECK);
MakeNameEx(0xD1AB0, "Base_Timing_Reference_NonCruise_AVCS_related_Y_AXIS", SN_CHECK);
MakeNameEx(0xCFA46, "Base_Timing_Idle_A_InGear_", SN_CHECK);
referenceAddress = DfirstB(0xCFA46);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_A_InGear_", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_A_InGear_\n");
}

MakeNameEx(0xCF7F0, "Base_Timing_Idle_A_InGear_Y_AXIS", SN_CHECK);
MakeNameEx(0xCFA56, "Base_Timing_Idle_B_InGear_", SN_CHECK);
referenceAddress = DfirstB(0xCFA56);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_B_InGear_", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_B_InGear_\n");
}

MakeNameEx(0xCF7F0, "Base_Timing_Idle_B_InGear_Y_AXIS", SN_CHECK);
MakeNameEx(0xCFA66, "Base_Timing_Idle_A_Neutral_", SN_CHECK);
referenceAddress = DfirstB(0xCFA66);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_A_Neutral_", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_A_Neutral_\n");
}

MakeNameEx(0xCF7F0, "Base_Timing_Idle_A_Neutral_Y_AXIS", SN_CHECK);
MakeNameEx(0xCFA76, "Base_Timing_Idle_B_Neutral_", SN_CHECK);
referenceAddress = DfirstB(0xCFA76);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_B_Neutral_", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_B_Neutral_\n");
}

MakeNameEx(0xCF7F0, "Base_Timing_Idle_B_Neutral_Y_AXIS", SN_CHECK);
MakeNameEx(0xCFA3D, "Base_Timing_Idle_Minimum_", SN_CHECK);
referenceAddress = DfirstB(0xCFA3D);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_Minimum_", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_Minimum_\n");
}

MakeNameEx(0xCF870, "Base_Timing_Idle_Minimum_Y_AXIS", SN_CHECK);
MakeNameEx(0xCF5EC, "Base_Timing_Idle_Minimum_Vehicle_Speed_Enable_", SN_CHECK);
MakeNameEx(0xD11B4, "Knock_Correction_Advance_Max_Cruise_", SN_CHECK);
referenceAddress = DfirstB(0xD11B4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_Cruise_", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_Cruise_\n");
}

MakeNameEx(0xD1128, "Knock_Correction_Advance_Max_Cruise_X_AXIS", SN_CHECK);
MakeNameEx(0xD116C, "Knock_Correction_Advance_Max_Cruise_Y_AXIS", SN_CHECK);
MakeNameEx(0xD1374, "Knock_Correction_Advance_Max_NonCruise_", SN_CHECK);
referenceAddress = DfirstB(0xD1374);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_NonCruise_", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_NonCruise_\n");
}

MakeNameEx(0xD12E8, "Knock_Correction_Advance_Max_NonCruise_X_AXIS", SN_CHECK);
MakeNameEx(0xD132C, "Knock_Correction_Advance_Max_NonCruise_Y_AXIS", SN_CHECK);
MakeNameEx(0xCFB28, "Timing_Compensation_A_IAT_", SN_CHECK);
referenceAddress = DfirstB(0xCFB28);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_A_IAT_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_A_IAT_\n");
}

MakeNameEx(0xCFAE8, "Timing_Compensation_A_IAT_Y_AXIS", SN_CHECK);
MakeNameEx(0xD1C6C, "Timing_Compensation_A_IAT_Activation_", SN_CHECK);
referenceAddress = DfirstB(0xD1C6C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_A_IAT_Activation_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_A_IAT_Activation_\n");
}

MakeNameEx(0xD1C2C, "Timing_Compensation_A_IAT_Activation_X_AXIS", SN_CHECK);
MakeNameEx(0xD1C4C, "Timing_Compensation_A_IAT_Activation_Y_AXIS", SN_CHECK);
MakeNameEx(0xD0120, "Timing_Compensation_B_IAT_", SN_CHECK);
referenceAddress = DfirstB(0xD0120);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_B_IAT_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_B_IAT_\n");
}

MakeNameEx(0xD00E0, "Timing_Compensation_B_IAT_Y_AXIS", SN_CHECK);
MakeNameEx(0xCF798, "Timing_Compensation_B_IAT_IAM_Activation_", SN_CHECK);
MakeNameEx(0xCF77C, "Timing_Compensation_B_IAT_Max_Additive_", SN_CHECK);
MakeNameEx(0xCFAC6, "Timing_Compensation_Imm_Cruise_A_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xCFAC6);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_Cruise_A_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_Cruise_A_ECT_\n");
}

MakeNameEx(0xCF7F0, "Timing_Compensation_Imm_Cruise_A_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xCFAD6, "Timing_Compensation_Imm_Cruise_B_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xCFAD6);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_Cruise_B_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_Cruise_B_ECT_\n");
}

MakeNameEx(0xCF7F0, "Timing_Compensation_Imm_Cruise_B_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xCFAA6, "Timing_Compensation_Imm_NonCruise_A_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xCFAA6);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_NonCruise_A_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_NonCruise_A_ECT_\n");
}

MakeNameEx(0xCF7F0, "Timing_Compensation_Imm_NonCruise_A_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xCFAB6, "Timing_Compensation_Imm_NonCruise_B_ECT_", SN_CHECK);
referenceAddress = DfirstB(0xCFAB6);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_NonCruise_B_ECT_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_NonCruise_B_ECT_\n");
}

MakeNameEx(0xCF7F0, "Timing_Compensation_Imm_NonCruise_B_ECT_Y_AXIS", SN_CHECK);
MakeNameEx(0xD0D60, "Timing_Compensation_Per_Cylinder_A_", SN_CHECK);
referenceAddress = DfirstB(0xD0D60);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_A_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_A_\n");
}

MakeNameEx(0xD0D14, "Timing_Compensation_Per_Cylinder_A_X_AXIS", SN_CHECK);
MakeNameEx(0xD0D4C, "Timing_Compensation_Per_Cylinder_A_Y_AXIS", SN_CHECK);
MakeNameEx(0xD0DF4, "Timing_Compensation_Per_Cylinder_B_", SN_CHECK);
referenceAddress = DfirstB(0xD0DF4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_B_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_B_\n");
}

MakeNameEx(0xD0DA8, "Timing_Compensation_Per_Cylinder_B_X_AXIS", SN_CHECK);
MakeNameEx(0xD0DE0, "Timing_Compensation_Per_Cylinder_B_Y_AXIS", SN_CHECK);
MakeNameEx(0xD0E88, "Timing_Compensation_Per_Cylinder_C_", SN_CHECK);
referenceAddress = DfirstB(0xD0E88);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_C_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_C_\n");
}

MakeNameEx(0xD0E3C, "Timing_Compensation_Per_Cylinder_C_X_AXIS", SN_CHECK);
MakeNameEx(0xD0E74, "Timing_Compensation_Per_Cylinder_C_Y_AXIS", SN_CHECK);
MakeNameEx(0xD0F20, "Timing_Compensation_Per_Cylinder_D_", SN_CHECK);
referenceAddress = DfirstB(0xD0F20);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_D_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_D_\n");
}

MakeNameEx(0xD0ED0, "Timing_Compensation_Per_Cylinder_D_X_AXIS", SN_CHECK);
MakeNameEx(0xD0F08, "Timing_Compensation_Per_Cylinder_D_Y_AXIS", SN_CHECK);
MakeNameEx(0xCF314, "Timing_Comp_Minimum_Load_Per_Cylinder_", SN_CHECK);
MakeNameEx(0xCF310, "Timing_Comp_Maximum_RPM_Per_Cylinder_", SN_CHECK);
MakeNameEx(0xCF318, "Timing_Comp_Minimum_Coolant_Temp_Per_Cylinder_", SN_CHECK);
MakeNameEx(0xCF324, "Feedback_Correction_Range_RPM_", SN_CHECK);
MakeNameEx(0xCF31C, "Feedback_Correction_Minimum_Load_", SN_CHECK);
MakeNameEx(0xCF344, "Feedback_Correction_Retard_Value_", SN_CHECK);
MakeNameEx(0xCF340, "Feedback_Correction_Retard_Limit_", SN_CHECK);
MakeNameEx(0xCF348, "Feedback_Correction_Negative_Advance_Value_", SN_CHECK);
MakeNameEx(0xCF286, "Feedback_Correction_Negative_Advance_Delay_", SN_CHECK);
MakeNameEx(0xCF350, "Extended_Feedback_Correction_High_RPM_Compensation_", SN_CHECK);
MakeNameEx(0xCF4E4, "Fine_Correction_Range_RPM_", SN_CHECK);
MakeNameEx(0xCF4F4, "Fine_Correction_Range_Load_", SN_CHECK);
MakeNameEx(0xCF484, "Fine_Correction_Rows_RPM_", SN_CHECK);
MakeNameEx(0xCF4A0, "Fine_Correction_Columns_Load_", SN_CHECK);
MakeNameEx(0xCF4C8, "Fine_Correction_Retard_Value_", SN_CHECK);
MakeNameEx(0xCF4C4, "Fine_Correction_Retard_Limit_", SN_CHECK);
MakeNameEx(0xCF4C0, "Fine_Correction_Advance_Value_", SN_CHECK);
MakeNameEx(0xCF4BC, "Fine_Correction_Advance_Limit_", SN_CHECK);
MakeNameEx(0xCF296, "Fine_Correction_Advance_Delay_", SN_CHECK);
MakeNameEx(0xCF434, "Rough_Correction_Range_RPM_", SN_CHECK);
MakeNameEx(0xCF444, "Rough_Correction_Range_Load_", SN_CHECK);
MakeNameEx(0xCF454, "Rough_Correction_Minimum_KC_Advance_Map_Value_", SN_CHECK);
MakeNameEx(0xD0310, "Rough_Correction_Learning_Delay_Increasing__", SN_CHECK);
referenceAddress = DfirstB(0xD0310);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Rough_Correction_Learning_Delay_Increasing__", SN_CHECK);
}
else
{
    Message("No reference to Rough_Correction_Learning_Delay_Increasing__\n");
}

MakeNameEx(0xD02E8, "Rough_Correction_Learning_Delay_Increasing_Y_AXIS", SN_CHECK);
MakeNameEx(0xCF458, "Advance_Multiplier_Initial_", SN_CHECK);
MakeNameEx(0xCF45C, "Advance_Multiplier_Step_Value_", SN_CHECK);
MakeNameEx(0xD6F08, "Intake_Cam_Advance_Angle_Cruise_AVCS_", SN_CHECK);
referenceAddress = DfirstB(0xD6F08);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_Cruise_AVCS_", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_Cruise_AVCS_\n");
}

MakeNameEx(0xD6E80, "Intake_Cam_Advance_Angle_Cruise_AVCS_X_AXIS", SN_CHECK);
MakeNameEx(0xD6EC8, "Intake_Cam_Advance_Angle_Cruise_AVCS_Y_AXIS", SN_CHECK);
MakeNameEx(0xD71D0, "Intake_Cam_Advance_Angle_NonCruise_AVCS_", SN_CHECK);
referenceAddress = DfirstB(0xD71D0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_NonCruise_AVCS_", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_NonCruise_AVCS_\n");
}

MakeNameEx(0xD7148, "Intake_Cam_Advance_Angle_NonCruise_AVCS_X_AXIS", SN_CHECK);
MakeNameEx(0xD7190, "Intake_Cam_Advance_Angle_NonCruise_AVCS_Y_AXIS", SN_CHECK);
MakeNameEx(0xDD6C8, "Requested_Torque_A_Accelerator_Pedal", SN_CHECK);
referenceAddress = DfirstB(0xDD6C8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_A_Accelerator_Pedal", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_A_Accelerator_Pedal\n");
}

MakeNameEx(0xDD648, "Requested_Torque_A_Accelerator_Pedal_X_AXIS", SN_CHECK);
MakeNameEx(0xDD684, "Requested_Torque_A_Accelerator_Pedal_Y_AXIS", SN_CHECK);
MakeNameEx(0xDD948, "Requested_Torque_B_Accelerator_Pedal", SN_CHECK);
referenceAddress = DfirstB(0xDD948);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_B_Accelerator_Pedal", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_B_Accelerator_Pedal\n");
}

MakeNameEx(0xDD8C8, "Requested_Torque_B_Accelerator_Pedal_X_AXIS", SN_CHECK);
MakeNameEx(0xDD904, "Requested_Torque_B_Accelerator_Pedal_Y_AXIS", SN_CHECK);
MakeNameEx(0xDDBC8, "Requested_Torque_C_Accelerator_Pedal", SN_CHECK);
referenceAddress = DfirstB(0xDDBC8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_C_Accelerator_Pedal", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_C_Accelerator_Pedal\n");
}

MakeNameEx(0xDDB48, "Requested_Torque_C_Accelerator_Pedal_X_AXIS", SN_CHECK);
MakeNameEx(0xDDB84, "Requested_Torque_C_Accelerator_Pedal_Y_AXIS", SN_CHECK);
MakeNameEx(0xDC83C, "Requested_Torque_Base_RPM_", SN_CHECK);
referenceAddress = DfirstB(0xDC83C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Base_RPM_", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Base_RPM_\n");
}

MakeNameEx(0xDC7FC, "Requested_Torque_Base_RPM_Y_AXIS", SN_CHECK);
MakeNameEx(0xDCCEC, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_", SN_CHECK);
referenceAddress = DfirstB(0xDCCEC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_\n");
}

MakeNameEx(0xDCC6C, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_X_AXIS", SN_CHECK);
MakeNameEx(0xDCCAC, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_Y_AXIS", SN_CHECK);
MakeNameEx(0xDCF6C, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_", SN_CHECK);
referenceAddress = DfirstB(0xDCF6C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_\n");
}

MakeNameEx(0xDCEEC, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_X_AXIS", SN_CHECK);
MakeNameEx(0xDCF2C, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_Y_AXIS", SN_CHECK);
MakeNameEx(0xDD1EC, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_", SN_CHECK);
referenceAddress = DfirstB(0xDD1EC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_\n");
}

MakeNameEx(0xDD16C, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_X_AXIS", SN_CHECK);
MakeNameEx(0xDD1AC, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_Y_AXIS", SN_CHECK);
MakeNameEx(0xC8FEC, "Rev_Limit_Fuel_Cut", SN_CHECK);
MakeNameEx(0xC8FF4, "Rev_Limit_Fuel_Resume_Boost_", SN_CHECK);
MakeNameEx(0xC903C, "Speed_Limiting_Enable_Fuel_Cut_", SN_CHECK);
MakeNameEx(0xC9044, "Speed_Limiting_Disable_Fuel_Cut_", SN_CHECK);
MakeNameEx(0xDC644, "Speed_Limiting_A_Throttle", SN_CHECK);
MakeNameEx(0xDC65C, "Speed_Limiting_B_Throttle", SN_CHECK);
MakeNameEx(0xD5198, "Fuel_Temp_Sensor_Scaling_", SN_CHECK);
referenceAddress = DfirstB(0xD5198);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Fuel_Temp_Sensor_Scaling_", SN_CHECK);
}
else
{
    Message("No reference to Fuel_Temp_Sensor_Scaling_\n");
}

MakeNameEx(0xD5120, "Fuel_Temp_Sensor_Scaling_Y_AXIS", SN_CHECK);
MakeNameEx(0xD5028, "Intake_Temp_Sensor_Scaling_", SN_CHECK);
referenceAddress = DfirstB(0xD5028);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Intake_Temp_Sensor_Scaling_", SN_CHECK);
}
else
{
    Message("No reference to Intake_Temp_Sensor_Scaling_\n");
}

MakeNameEx(0xD4FB0, "Intake_Temp_Sensor_Scaling_Y_AXIS", SN_CHECK);
MakeNameEx(0xD4F40, "Coolant_Temp_Sensor_Scaling_", SN_CHECK);
referenceAddress = DfirstB(0xD4F40);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Coolant_Temp_Sensor_Scaling_", SN_CHECK);
}
else
{
    Message("No reference to Coolant_Temp_Sensor_Scaling_\n");
}

MakeNameEx(0xD4ED0, "Coolant_Temp_Sensor_Scaling_Y_AXIS", SN_CHECK);
MakeNameEx(0xD56B8, "Radiator_Fan_Modes_A_ECT_", SN_CHECK);
MakeNameEx(0xD56C8, "Radiator_Fan_Modes_B_ECT_", SN_CHECK);
MakeNameEx(0xD56D8, "Radiator_Fan_Modes_Veh_Speed_", SN_CHECK);
MakeNameEx(0xC2D8C, "Gear_Determination_Thresholds_A_", SN_CHECK);
MakeNameEx(0xC2DA0, "Gear_Determination_Thresholds_B_", SN_CHECK);
MakeNameEx(0xC2DB4, "Gear_Determination_Thresholds_C_", SN_CHECK);
MakeNameEx(0xD33B8, "Idle_Speed_Target_A_", SN_CHECK);
referenceAddress = DfirstB(0xD33B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_A_", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_A_\n");
}

MakeNameEx(0xD2D6C, "Idle_Speed_Target_A_Y_AXIS", SN_CHECK);
MakeNameEx(0xD33F8, "Idle_Speed_Target_B_", SN_CHECK);
referenceAddress = DfirstB(0xD33F8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_B_", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_B_\n");
}

MakeNameEx(0xD2D6C, "Idle_Speed_Target_B_Y_AXIS", SN_CHECK);
MakeNameEx(0xD3438, "Idle_Speed_Target_C_", SN_CHECK);
referenceAddress = DfirstB(0xD3438);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_C_", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_C_\n");
}

MakeNameEx(0xD2D6C, "Idle_Speed_Target_C_Y_AXIS", SN_CHECK);
MakeNameEx(0x92AD8, "Force_Pass_Readiness_Monitors__", SN_CHECK);
MakeNameEx(0x878F3, "P0000_PASS_CODE_NO_DTC_DETECTED__", SN_CHECK);
MakeNameEx(0x878D7, "P0011_CAMSHAFT_POS_TIMING_OVERADVANCED_1_", SN_CHECK);
MakeNameEx(0x8796A, "P0016_CRANKSHAFTCAMSHAFT_CORRELATION_1A_", SN_CHECK);
MakeNameEx(0x87969, "P0018_CRANKSHAFTCAMSHAFT_CORRELATION_2A_", SN_CHECK);
MakeNameEx(0x878D8, "P0021_CAMSHAFT_POS_TIMING_OVERADVANCED_2_", SN_CHECK);
MakeNameEx(0x87918, "P0030_FRONT_O2_SENSOR_RANGEPERF_", SN_CHECK);
MakeNameEx(0x87902, "P0031_FRONT_O2_SENSOR_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x87900, "P0032_FRONT_O2_SENSOR_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x87901, "P0037_REAR_O2_SENSOR_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x878FF, "P0038_REAR_O2_SENSOR_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x87913, "P0068_MAP_SENSOR_RANGEPERF_", SN_CHECK);
MakeNameEx(0x87914, "P0101_MAF_SENSOR_RANGEPERF_", SN_CHECK);
MakeNameEx(0x878B1, "P0102_MAF_SENSOR_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x878B2, "P0103_MAF_SENSOR_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x87903, "P0107_MAP_SENSOR_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x87904, "P0108_MAP_SENSOR_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x878FE, "P0111_IAT_SENSOR_RANGEPERF_", SN_CHECK);
MakeNameEx(0x878FC, "P0112_IAT_SENSOR_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x878FD, "P0113_IAT_SENSOR_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x878BA, "P0117_COOLANT_TEMP_SENSOR_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x878BB, "P0118_COOLANT_TEMP_SENSOR_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x878B8, "P0122_TPS_A_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x878B9, "P0123_TPS_A_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x878BD, "P0125_INSUFFICIENT_COOLANT_TEMP_FUELING_", SN_CHECK);
MakeNameEx(0x87951, "P0126_INSUFFICIENT_COOLANT_TEMP_OPERATION_", SN_CHECK);
MakeNameEx(0x87909, "P0128_THERMOSTAT_MALFUNCTION_", SN_CHECK);
MakeNameEx(0x878F6, "P0131_FRONT_O2_SENSOR_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x878F8, "P0132_FRONT_O2_SENSOR_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x878E0, "P0133_FRONT_O2_SENSOR_SLOW_RESPONSE_", SN_CHECK);
MakeNameEx(0x87916, "P0134_FRONT_O2_SENSOR_NO_ACTIVITY_", SN_CHECK);
MakeNameEx(0x878F5, "P0137_REAR_O2_SENSOR_LOW_VOLTAGE_", SN_CHECK);
MakeNameEx(0x878FA, "P0138_REAR_O2_SENSOR_HIGH_VOLTAGE_", SN_CHECK);
MakeNameEx(0x878E1, "P0139_REAR_O2_SENSOR_SLOW_RESPONSE", SN_CHECK);
MakeNameEx(0x87964, "P0140_REAR_O2_SENSOR_NO_ACTIVITY_", SN_CHECK);
MakeNameEx(0x878EA, "P0171_SYSTEM_TOO_LEAN_", SN_CHECK);
MakeNameEx(0x878EB, "P0172_SYSTEM_TOO_RICH_", SN_CHECK);
MakeNameEx(0x878C9, "P0181_FUEL_TEMP_SENSOR_A_RANGEPERF", SN_CHECK);
MakeNameEx(0x878C7, "P0182_FUEL_TEMP_SENSOR_A_LOW_INPUT", SN_CHECK);
MakeNameEx(0x878C8, "P0183_FUEL_TEMP_SENSOR_A_HIGH_INPUT", SN_CHECK);
MakeNameEx(0x87920, "P0222_TPS_B_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x87921, "P0223_TPS_B_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x87912, "P0230_FUEL_PUMP_PRIMARY_CIRCUIT_", SN_CHECK);
MakeNameEx(0x87910, "P0244_WASTEGATE_SOLENOID_A_RANGEPERF_", SN_CHECK);
MakeNameEx(0x8790E, "P0245_WASTEGATE_SOLENOID_A_LOW_", SN_CHECK);
MakeNameEx(0x8790F, "P0246_WASTEGATE_SOLENOID_A_HIGH_", SN_CHECK);
MakeNameEx(0x878EC, "P0301_MISFIRE_CYLINDER_1_", SN_CHECK);
MakeNameEx(0x878ED, "P0302_MISFIRE_CYLINDER_2_", SN_CHECK);
MakeNameEx(0x878EE, "P0303_MISFIRE_CYLINDER_3_", SN_CHECK);
MakeNameEx(0x878EF, "P0304_MISFIRE_CYLINDER_4_", SN_CHECK);
MakeNameEx(0x878B6, "P0327_KNOCK_SENSOR_1_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x878B7, "P0328_KNOCK_SENSOR_1_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x878AC, "P0335_CRANKSHAFT_POS_SENSOR_A_MALFUNCTION_", SN_CHECK);
MakeNameEx(0x878AD, "P0336_CRANKSHAFT_POS_SENSOR_A_RANGEPERF_", SN_CHECK);
MakeNameEx(0x87934, "P0340_CAMSHAFT_POS_SENSOR_A_MALFUNCTION_", SN_CHECK);
MakeNameEx(0x87933, "P0345_CAMSHAFT_POS_SENSOR_A_BANK_2_", SN_CHECK);
MakeNameEx(0x8795E, "P0410_SECONDARY_AIR_PUMP_SYSTEM_", SN_CHECK);
MakeNameEx(0x8795D, "P0411_SECONDARY_AIR_PUMP_INCORRECT_FLOW_", SN_CHECK);
MakeNameEx(0x87962, "P0413_SECONDARY_AIR_PUMP_A_OPEN_", SN_CHECK);
MakeNameEx(0x87967, "P0414_SECONDARY_AIR_PUMP_A_SHORTED_", SN_CHECK);
MakeNameEx(0x87971, "P0416_SECONDARY_AIR_PUMP_B_OPEN_", SN_CHECK);
MakeNameEx(0x87970, "P0417_SECONDARY_AIR_PUMP_B_SHORTED_", SN_CHECK);
MakeNameEx(0x87963, "P0418_SECONDARY_AIR_PUMP_RELAY_A_", SN_CHECK);
MakeNameEx(0x878E6, "P0420_CAT_EFFICIENCY_BELOW_THRESHOLD_", SN_CHECK);
MakeNameEx(0x87977, "P0441_EVAP_INCORRECT_PURGE_FLOW_", SN_CHECK);
MakeNameEx(0x878E7, "P0442_EVAP_LEAK_DETECTED_SMALL", SN_CHECK);
MakeNameEx(0x878DE, "P0447_EVAP_VENT_CONTROL_CIRCUIT_OPEN", SN_CHECK);
MakeNameEx(0x878DF, "P0448_EVAP_VENT_CONTROL_CIRCUIT_SHORTED", SN_CHECK);
MakeNameEx(0x878C5, "P0451_EVAP_PRESSURE_SENSOR_RANGEPERF_", SN_CHECK);
MakeNameEx(0x878C3, "P0452_EVAP_PRESSURE_SENSOR_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x878C4, "P0453_EVAP_PRESSURE_SENSOR_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x878E8, "P0456_EVAP_LEAK_DETECTED_VERY_SMALL_", SN_CHECK);
MakeNameEx(0x878F2, "P0457_EVAP_LEAK_DETECTED_FUEL_CAP", SN_CHECK);
MakeNameEx(0x878DB, "P0458_EVAP_PURGE_VALVE_CIRCUIT_LOW_", SN_CHECK);
MakeNameEx(0x878DC, "P0459_EVAP_PURGE_VALVE_CIRCUIT_HIGH_", SN_CHECK);
MakeNameEx(0x878C0, "P0461_FUEL_LEVEL_SENSOR_RANGEPERF_", SN_CHECK);
MakeNameEx(0x878BE, "P0462_FUEL_LEVEL_SENSOR_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x878BF, "P0463_FUEL_LEVEL_SENSOR_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x878BC, "P0464_FUEL_LEVEL_SENSOR_INTERMITTENT", SN_CHECK);
MakeNameEx(0x878B3, "P0500_VEHICLE_SPEED_SENSOR_A_", SN_CHECK);
MakeNameEx(0x878D3, "P0506_IDLE_CONTROL_RPM_LOWER_THAN_EXPECTED_", SN_CHECK);
MakeNameEx(0x878D4, "P0507_IDLE_CONTROL_RPM_HIGH_THAN_EXPECTED_", SN_CHECK);
MakeNameEx(0x878C2, "P0512_STARTER_REQUEST_CIRCUIT_", SN_CHECK);
MakeNameEx(0x87930, "P0600_SERIAL_COMMUNICATION_LINK", SN_CHECK);
MakeNameEx(0x878B0, "P0604_CONTROL_MODULE_RAM_ERROR_", SN_CHECK);
MakeNameEx(0x87935, "P0605_CONTROL_MODULE_ROM_ERROR_", SN_CHECK);
MakeNameEx(0x87928, "P0607_CONTROL_MODULE_PERFORMANCE_", SN_CHECK);
MakeNameEx(0x87927, "P0638_THROTTLE_ACTUATOR_RANGEPERF_", SN_CHECK);
MakeNameEx(0x87941, "P0700_TRANSMISSION_CONTROL_SYSTEM", SN_CHECK);
MakeNameEx(0x878C6, "P0851_NEUTRAL_SWITCH_INPUT_LOW_", SN_CHECK);
MakeNameEx(0x878CA, "P0852_NEUTRAL_SWITCH_INPUT_HIGH_", SN_CHECK);
MakeNameEx(0x878E2, "P1152_FRONT_O2_SENSOR_RANGEPERF_LOW_B1_S1_", SN_CHECK);
MakeNameEx(0x878E3, "P1153_FRONT_O2_SENSOR_RANGEPERF_HIGH_B1_S1_", SN_CHECK);
MakeNameEx(0x87922, "P1160_ABNORMAL_RETURN_SPRING_", SN_CHECK);
MakeNameEx(0x878D9, "P1400_FUEL_TANK_PRESSURE_SOL_LOW_", SN_CHECK);
MakeNameEx(0x8796B, "P1410_SECONDARY_AIR_PUMP_VALVE_STUCK_OPEN_", SN_CHECK);
MakeNameEx(0x87968, "P1418_SECONDARY_AIR_PUMP_CIRCUIT_SHORTED_", SN_CHECK);
MakeNameEx(0x878DA, "P1420_FUEL_TANK_PRESSURE_SOL_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x878DD, "P1443_VENT_CONTROL_SOLENOID_FUNCTION_PROBLEM", SN_CHECK);
MakeNameEx(0x8790A, "P1491_PCV_BLOWBY_FUNCTION_PROBLEM_", SN_CHECK);
MakeNameEx(0x87976, "P1519_IMRC_STUCK_CLOSED_", SN_CHECK);
MakeNameEx(0x87975, "P1520_IMRC_CIRCUIT_MALFUNCTION_", SN_CHECK);
MakeNameEx(0x8790B, "P1560_BACKUP_VOLTAGE_MALFUNCTION_", SN_CHECK);
MakeNameEx(0x87966, "P1602_CONTROL_MODULE_PROGRAMMING_ERROR", SN_CHECK);
MakeNameEx(0x87974, "P1616_SBDS_INTERACTIVE_CODES_", SN_CHECK);
MakeNameEx(0x8794C, "P2004_TGV_INTAKE_MANIFOLD_RUNNER_1_STUCK_OPEN_", SN_CHECK);
MakeNameEx(0x8794E, "P2005_TGV_INTAKE_MANIFOLD_RUNNER_2_STUCK_OPEN_", SN_CHECK);
MakeNameEx(0x8794D, "P2006_TGV_INTAKE_MANIFOLD_RUNNER_1_STUCK_CLOSED_", SN_CHECK);
MakeNameEx(0x8794F, "P2007_TGV_INTAKE_MANIFOLD_RUNNER_2_STUCK_CLOSED_", SN_CHECK);
MakeNameEx(0x8795A, "P2008_TGV_INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_OPEN_", SN_CHECK);
MakeNameEx(0x87958, "P2009_TGV_INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_LOW_", SN_CHECK);
MakeNameEx(0x8795B, "P2011_TGV_INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_OPEN_", SN_CHECK);
MakeNameEx(0x87959, "P2012_TGV_INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_LOW_", SN_CHECK);
MakeNameEx(0x87954, "P2016_TGV_INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_LOW_", SN_CHECK);
MakeNameEx(0x87955, "P2017_TGV_INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_HIGH_", SN_CHECK);
MakeNameEx(0x87956, "P2021_TGV_INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_LOW_", SN_CHECK);
MakeNameEx(0x87957, "P2022_TGV_INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_HIGH_", SN_CHECK);
MakeNameEx(0x8793D, "P2088_OCV_SOLENOID_A1_CIRCUIT_OPEN_", SN_CHECK);
MakeNameEx(0x8793C, "P2089_OCV_SOLENOID_A1_CIRCUIT_SHORT_", SN_CHECK);
MakeNameEx(0x8793B, "P2092_OCV_SOLENOID_A2_CIRCUIT_OPEN_", SN_CHECK);
MakeNameEx(0x8793A, "P2093_OCV_SOLENOID_A2_CIRCUIT_SHORT_", SN_CHECK);
MakeNameEx(0x87926, "P2096_POST_CATALYST_TOO_LEAN_B1_", SN_CHECK);
MakeNameEx(0x8792F, "P2097_POST_CATALYST_TOO_RICH_B1_", SN_CHECK);
MakeNameEx(0x87925, "P2101_THROTTLE_ACTUATOR_CIRCUIT_RANGEPERF_", SN_CHECK);
MakeNameEx(0x87923, "P2102_THROTTLE_ACTUATOR_CIRCUIT_LOW_", SN_CHECK);
MakeNameEx(0x87924, "P2103_THROTTLE_ACTUATOR_CIRCUIT_HIGH_", SN_CHECK);
MakeNameEx(0x8791F, "P2109_TPS_A_MINIMUM_STOP_PERF_", SN_CHECK);
MakeNameEx(0x8792C, "P2122_TPS_D_CIRCUIT_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x8792D, "P2123_TPS_D_CIRCUIT_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x8792A, "P2127_TPS_E_CIRCUIT_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x8792B, "P2128_TPS_E_CIRCUIT_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x8792E, "P2135_TPS_AB_VOLTAGE_", SN_CHECK);
MakeNameEx(0x87929, "P2138_TPS_DE_VOLTAGE_", SN_CHECK);
MakeNameEx(0x87978, "P2419_EVAP_SWITCHING_VALVE_LOW_", SN_CHECK);
MakeNameEx(0x87979, "P2420_EVAP_SWITCHING_VALVE_HIGH_", SN_CHECK);
MakeNameEx(0x8795F, "P2431_SECONDARY_AIR_PUMP_CIRCUIT_RANGEPERF_", SN_CHECK);
MakeNameEx(0x87961, "P2432_SECONDARY_AIR_PUMP_CIRCUIT_LOW_", SN_CHECK);
MakeNameEx(0x87960, "P2433_SECONDARY_AIR_PUMP_CIRCUIT_HIGH_", SN_CHECK);
MakeNameEx(0x8796F, "P2440_SECONDARY_AIR_PUMP_VALVE_1_STUCK_OPEN_", SN_CHECK);
MakeNameEx(0x8796E, "P2441_SECONDARY_AIR_PUMP_VALVE_1_STUCK_CLOSED_", SN_CHECK);
MakeNameEx(0x8796D, "P2442_SECONDARY_AIR_PUMP_VALVE_2_STUCK_OPEN_", SN_CHECK);
MakeNameEx(0x8796C, "P2443_SECONDARY_AIR_PUMP_2_STUCK_CLOSED_", SN_CHECK);
MakeNameEx(0x8795C, "P2444_SECONDARY_AIR_PUMP_1_STUCK_ON_B1_", SN_CHECK);
MakeNameEx(0xD556C, "Ignition_Dwell__", SN_CHECK);
referenceAddress = DfirstB(0xD556C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Ignition_Dwell__", SN_CHECK);
}
else
{
    Message("No reference to Ignition_Dwell__\n");
}

MakeNameEx(0xD5518, "Ignition_Dwell_X_AXIS_", SN_CHECK);
MakeNameEx(0xD5558, "Ignition_Dwell_Y_AXIS_", SN_CHECK);
MakeNameEx(0xDD470, "Requested_Torque_Limit_A_Per_GearEngine_Speed__", SN_CHECK);
referenceAddress = DfirstB(0xDD470);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Limit_A_Per_GearEngine_Speed__", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Limit_A_Per_GearEngine_Speed__\n");
}

MakeNameEx(0xDD418, "Requested_Torque_Limit_A_Per_GearEngine_Speed_X_AXIS_", SN_CHECK);
MakeNameEx(0xDD458, "Requested_Torque_Limit_A_Per_GearEngine_Speed_Y_AXIS_", SN_CHECK);
MakeNameEx(0xDD588, "Requested_Torque_Limit_B_Per_GearEngine_Speed__", SN_CHECK);
referenceAddress = DfirstB(0xDD588);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Limit_B_Per_GearEngine_Speed__", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Limit_B_Per_GearEngine_Speed__\n");
}

MakeNameEx(0xDD530, "Requested_Torque_Limit_B_Per_GearEngine_Speed_X_AXIS_", SN_CHECK);
MakeNameEx(0xDD570, "Requested_Torque_Limit_B_Per_GearEngine_Speed_Y_AXIS_", SN_CHECK);
MakeNameEx(0x45328, "Fuel_Pump_Duty_", SN_CHECK);
MakeNameEx(0xC0D14, "Target_Boost___", SN_CHECK);
referenceAddress = DfirstB(0xC0D14);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Boost___", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost___\n");
}

MakeNameEx(0xC0CAC, "Target_Boost_X_AXIS_", SN_CHECK);
MakeNameEx(0xC0CD8, "Target_Boost_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC06C8, "Target_Boost_Compensation_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xC06C8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_ECT__\n");
}

MakeNameEx(0xC05E8, "Target_Boost_Compensation_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC05E0, "Target_Boost_Compensation_1st_Gear__", SN_CHECK);
MakeNameEx(0xC05DC, "Target_Boost_Compensation_1st_Gear_Speed_Disable__", SN_CHECK);
MakeNameEx(0xC0810, "Target_Boost_Compensation_IAT___", SN_CHECK);
referenceAddress = DfirstB(0xC0810);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_IAT___", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_IAT___\n");
}

MakeNameEx(0xC07F8, "Target_Boost_Compensation_IAT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC0898, "Target_Boost_Compensation_Atm_Pressure___", SN_CHECK);
referenceAddress = DfirstB(0xC0898);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_Atm_Pressure___", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_Atm_Pressure___\n");
}

MakeNameEx(0xC0868, "Target_Boost_Compensation_Atm_Pressure_X_AXIS_", SN_CHECK);
MakeNameEx(0xC0880, "Target_Boost_Compensation_Atm_Pressure_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCEE54, "Boost_Limit_Fuel_Cut___", SN_CHECK);
referenceAddress = DfirstB(0xCEE54);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Boost_Limit_Fuel_Cut___", SN_CHECK);
}
else
{
    Message("No reference to Boost_Limit_Fuel_Cut___\n");
}

MakeNameEx(0xCEE24, "Boost_Limit_Fuel_Cut_X_AXIS_", SN_CHECK);
MakeNameEx(0xCEE3C, "Boost_Limit_Fuel_Cut_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC05D0, "Boost_Control_Disable_IAM__", SN_CHECK);
MakeNameEx(0xC05CC, "Boost_Control_Disable_Fine_Correction__", SN_CHECK);
MakeNameEx(0xC0581, "Boost_Control_Disable_Delay_Fine_Correction__", SN_CHECK);
MakeNameEx(0xC0B24, "Initial_Wastegate_Duty___", SN_CHECK);
referenceAddress = DfirstB(0xC0B24);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Initial_Wastegate_Duty___", SN_CHECK);
}
else
{
    Message("No reference to Initial_Wastegate_Duty___\n");
}

MakeNameEx(0xC0AB4, "Initial_Wastegate_Duty_X_AXIS_", SN_CHECK);
MakeNameEx(0xC0AF0, "Initial_Wastegate_Duty_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC092C, "Max_Wastegate_Duty___", SN_CHECK);
referenceAddress = DfirstB(0xC092C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Max_Wastegate_Duty___", SN_CHECK);
}
else
{
    Message("No reference to Max_Wastegate_Duty___\n");
}

MakeNameEx(0xC08BC, "Max_Wastegate_Duty_X_AXIS_", SN_CHECK);
MakeNameEx(0xC08F8, "Max_Wastegate_Duty_Y_AXIS_", SN_CHECK);
MakeNameEx(0x13D98, "Max_Wastegate_Duty_Limit_PostCompensation__", SN_CHECK);
MakeNameEx(0xC0668, "InitialMax_Wastegate_Duty_Compensation_IAT__", SN_CHECK);
referenceAddress = DfirstB(0xC0668);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_IAT__", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_IAT__\n");
}

MakeNameEx(0xC0628, "InitialMax_Wastegate_Duty_Compensation_IAT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC0688, "InitialMax_Wastegate_Duty_Compensation_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xC0688);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_ECT__", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_ECT__\n");
}

MakeNameEx(0xC05E8, "InitialMax_Wastegate_Duty_Compensation_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC0850, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure__", SN_CHECK);
referenceAddress = DfirstB(0xC0850);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_Atm_Pressure__", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_Atm_Pressure__\n");
}

MakeNameEx(0xC0828, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_X_AXIS_", SN_CHECK);
MakeNameEx(0xC0840, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC06FC, "Turbo_Dynamics_Proportional__", SN_CHECK);
referenceAddress = DfirstB(0xC06FC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Proportional__", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Proportional__\n");
}

MakeNameEx(0xC06D8, "Turbo_Dynamics_Proportional_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC076C, "Turbo_Dynamics_Integral_Positive__", SN_CHECK);
referenceAddress = DfirstB(0xC076C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Integral_Positive__", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Integral_Positive__\n");
}

MakeNameEx(0xC0748, "Turbo_Dynamics_Integral_Positive_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC0734, "Turbo_Dynamics_Integral_Negative__", SN_CHECK);
referenceAddress = DfirstB(0xC0734);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Integral_Negative__", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Integral_Negative__\n");
}

MakeNameEx(0xC0710, "Turbo_Dynamics_Integral_Negative_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC0698, "TD_Proportional_Compensation_IAT__", SN_CHECK);
referenceAddress = DfirstB(0xC0698);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Proportional_Compensation_IAT__", SN_CHECK);
}
else
{
    Message("No reference to TD_Proportional_Compensation_IAT__\n");
}

MakeNameEx(0xC0628, "TD_Proportional_Compensation_IAT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC06B8, "TD_Integral_Positive_Compensation_IAT__", SN_CHECK);
referenceAddress = DfirstB(0xC06B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Integral_Positive_Compensation_IAT__", SN_CHECK);
}
else
{
    Message("No reference to TD_Integral_Positive_Compensation_IAT__\n");
}

MakeNameEx(0xC0628, "TD_Integral_Positive_Compensation_IAT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC06A8, "TD_Integral_Negative_Compensation_IAT__", SN_CHECK);
referenceAddress = DfirstB(0xC06A8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Integral_Negative_Compensation_IAT__", SN_CHECK);
}
else
{
    Message("No reference to TD_Integral_Negative_Compensation_IAT__\n");
}

MakeNameEx(0xC0628, "TD_Integral_Negative_Compensation_IAT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC05BC, "TD_Activation_Thresholds_RPM__", SN_CHECK);
MakeNameEx(0xC05A8, "TD_Activation_Thresholds_Target_Boost___", SN_CHECK);
MakeNameEx(0xC05C4, "TD_Integral_Cumulative_Range_WGDC_Correction__", SN_CHECK);
MakeNameEx(0xC05B0, "TD_Integral_Negative_Activation_Boost_Error__", SN_CHECK);
MakeNameEx(0xC05B4, "TD_Integral_Positive_Activation_Boost_Error__", SN_CHECK);
MakeNameEx(0xC05B8, "TD_Integral_Negative_Activation_Wastegate_Duty__", SN_CHECK);
MakeNameEx(0xD4EA4, "Manifold_Pressure_Sensor_Scaling___", SN_CHECK);
MakeNameEx(0xD4E44, "Manifold_Pressure_Sensor_Limits_CEL__", SN_CHECK);
MakeNameEx(0xC3BF6, "Manifold_Pressure_Sensor_CEL_Delays__", SN_CHECK);
MakeNameEx(0xCC784, "Primary_Open_Loop_Fueling__", SN_CHECK);
referenceAddress = DfirstB(0xCC784);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling__", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling__\n");
}

MakeNameEx(0xCC6F8, "Primary_Open_Loop_Fueling_X_AXIS_", SN_CHECK);
MakeNameEx(0xCC73C, "Primary_Open_Loop_Fueling_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCC944, "Primary_Open_Loop_Fueling_Failsafe__", SN_CHECK);
referenceAddress = DfirstB(0xCC944);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Failsafe__", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Failsafe__\n");
}

MakeNameEx(0xCC8B8, "Primary_Open_Loop_Fueling_Failsafe_X_AXIS_", SN_CHECK);
MakeNameEx(0xCC8FC, "Primary_Open_Loop_Fueling_Failsafe_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC8C68, "Primary_Open_Loop_Fuel_Map_Switch_IAM__", SN_CHECK);
MakeNameEx(0xC8C6C, "Minimum_Active_Primary_Open_Loop_Enrichment__", SN_CHECK);
MakeNameEx(0xC9814, "Minimum_Primary_Open_Loop_Enrichment_Throttle__", SN_CHECK);
referenceAddress = DfirstB(0xC9814);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Throttle__", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Throttle__\n");
}

MakeNameEx(0xC97FC, "Minimum_Primary_Open_Loop_Enrichment_Throttle_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC9834, "Minimum_Primary_Open_Loop_Enrichment_Accelerator__", SN_CHECK);
referenceAddress = DfirstB(0xC9834);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Accelerator__", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Accelerator__\n");
}

MakeNameEx(0xC981C, "Minimum_Primary_Open_Loop_Enrichment_Accelerator_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCB130, "Primary_Open_Loop_Fueling_Compensation_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xCB130);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_ECT__\n");
}

MakeNameEx(0xC9098, "Primary_Open_Loop_Fueling_Compensation_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC97A4, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation___", SN_CHECK);
referenceAddress = DfirstB(0xC97A4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_Timing_Compensation___", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_Timing_Compensation___\n");
}

MakeNameEx(0xC978C, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD53F4, "Front_Oxygen_Sensor_Scaling__", SN_CHECK);
referenceAddress = DfirstB(0xD53F4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Scaling__", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Scaling__\n");
}

MakeNameEx(0xD53C0, "Front_Oxygen_Sensor_Scaling_Y_AXIS_", SN_CHECK);
MakeNameEx(0x2135C, "Front_Oxygen_Sensor_Rich_Limit__", SN_CHECK);
MakeNameEx(0xC3038, "Front_Oxygen_Sensor_Compensation_Atm_Pressure__", SN_CHECK);
referenceAddress = DfirstB(0xC3038);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Compensation_Atm_Pressure__", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Compensation_Atm_Pressure__\n");
}

MakeNameEx(0xC3028, "Front_Oxygen_Sensor_Compensation_Atm_Pressure_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCDF24, "CL_Fueling_Target_Compensation_A_Load__", SN_CHECK);
referenceAddress = DfirstB(0xCDF24);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_A_Load__", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_A_Load__\n");
}

MakeNameEx(0xCDED0, "CL_Fueling_Target_Compensation_A_Load_X_AXIS_", SN_CHECK);
MakeNameEx(0xCDEFC, "CL_Fueling_Target_Compensation_A_Load_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCE184, "CL_Fueling_Target_Compensation_B_Load__", SN_CHECK);
referenceAddress = DfirstB(0xCE184);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_B_Load__", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_B_Load__\n");
}

MakeNameEx(0xCE130, "CL_Fueling_Target_Compensation_B_Load_X_AXIS_", SN_CHECK);
MakeNameEx(0xCE15C, "CL_Fueling_Target_Compensation_B_Load_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCDE04, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xCDE04);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Imm_Cruise_ECT__", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Imm_Cruise_ECT__\n");
}

MakeNameEx(0xC9098, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_X_AXIS_", SN_CHECK);
MakeNameEx(0xCDDF8, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCDE70, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xCDE70);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Imm_NonCruise_ECT__", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Imm_NonCruise_ECT__\n");
}

MakeNameEx(0xC9098, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_X_AXIS_", SN_CHECK);
MakeNameEx(0xCDE64, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC8778, "CL_to_OL_Delay___", SN_CHECK);
MakeNameEx(0xC97EC, "CL_to_OL_Transition_with_Delay_Throttle__", SN_CHECK);
referenceAddress = DfirstB(0xC97EC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Throttle__", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Throttle__\n");
}

MakeNameEx(0xC97AC, "CL_to_OL_Transition_with_Delay_Throttle_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC8C74, "CL_to_OL_Transition_with_Delay_Throttle_Hysteresis__", SN_CHECK);
MakeNameEx(0xCB05C, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width__", SN_CHECK);
referenceAddress = DfirstB(0xCB05C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Base_Pulse_Width__", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Base_Pulse_Width__\n");
}

MakeNameEx(0xCB01C, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC8C70, "CL_to_OL_Transition_with_Delay_BPW_Hysteresis__", SN_CHECK);
MakeNameEx(0xCB0A4, "CL_to_OL_Transition_Counter_Step_Value_MAF__", SN_CHECK);
referenceAddress = DfirstB(0xCB0A4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_Counter_Step_Value_MAF__", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_Counter_Step_Value_MAF__\n");
}

MakeNameEx(0xCB07C, "CL_to_OL_Transition_Counter_Step_Value_MAF_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC8CD4, "CL_Delay_Maximum_Throttle__", SN_CHECK);
MakeNameEx(0xC8CF0, "CL_Delay_Maximum_Vehicle_Speed__", SN_CHECK);
MakeNameEx(0xC8C78, "CL_Delay_Minimum_ECT__", SN_CHECK);
MakeNameEx(0xC8D00, "CL_Delay_Maximum_Engine_Load__", SN_CHECK);
MakeNameEx(0xC8770, "CL_Delay_Engine_Load_Counter_Threshold__", SN_CHECK);
MakeNameEx(0xC8C7C, "CL_Delay_Maximum_Engine_Speed_Per_Gear__", SN_CHECK);
MakeNameEx(0xC8CA4, "CL_Delay_Maximum_Engine_Speed_Neutral__", SN_CHECK);
MakeNameEx(0xCDAC0, "Injector_Latency___", SN_CHECK);
referenceAddress = DfirstB(0xCDAC0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Injector_Latency___", SN_CHECK);
}
else
{
    Message("No reference to Injector_Latency___\n");
}

MakeNameEx(0xCDAA0, "Injector_Latency_X_AXIS_", SN_CHECK);
MakeNameEx(0xCDAB4, "Injector_Latency_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC893C, "Injector_Flow_Scaling__", SN_CHECK);
MakeNameEx(0xCD23C, "Per_Injector_Pulse_Width_Compensation_A__", SN_CHECK);
referenceAddress = DfirstB(0xCD23C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_A__", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_A__\n");
}

MakeNameEx(0xCD1B4, "Per_Injector_Pulse_Width_Compensation_A_X_AXIS_", SN_CHECK);
MakeNameEx(0xCD1F8, "Per_Injector_Pulse_Width_Compensation_A_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCD3E8, "Per_Injector_Pulse_Width_Compensation_B__", SN_CHECK);
referenceAddress = DfirstB(0xCD3E8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_B__", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_B__\n");
}

MakeNameEx(0xCD360, "Per_Injector_Pulse_Width_Compensation_B_X_AXIS_", SN_CHECK);
MakeNameEx(0xCD3A4, "Per_Injector_Pulse_Width_Compensation_B_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCD594, "Per_Injector_Pulse_Width_Compensation_C__", SN_CHECK);
referenceAddress = DfirstB(0xCD594);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_C__", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_C__\n");
}

MakeNameEx(0xCD50C, "Per_Injector_Pulse_Width_Compensation_C_X_AXIS_", SN_CHECK);
MakeNameEx(0xCD550, "Per_Injector_Pulse_Width_Compensation_C_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCD740, "Per_Injector_Pulse_Width_Compensation_D__", SN_CHECK);
referenceAddress = DfirstB(0xCD740);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_D__", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_D__\n");
}

MakeNameEx(0xCD6B8, "Per_Injector_Pulse_Width_Compensation_D_X_AXIS_", SN_CHECK);
MakeNameEx(0xCD6FC, "Per_Injector_Pulse_Width_Compensation_D_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC9D5A, "Cranking_Fuel_Injector_Pulse_Width_A_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xC9D5A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_A_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_A_ECT__\n");
}

MakeNameEx(0xC9098, "Cranking_Fuel_Injector_Pulse_Width_A_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC9D7A, "Cranking_Fuel_Injector_Pulse_Width_B_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xC9D7A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_B_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_B_ECT__\n");
}

MakeNameEx(0xC9098, "Cranking_Fuel_Injector_Pulse_Width_B_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC9D9A, "Cranking_Fuel_Injector_Pulse_Width_C_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xC9D9A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_C_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_C_ECT__\n");
}

MakeNameEx(0xC9098, "Cranking_Fuel_Injector_Pulse_Width_C_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC9DBA, "Cranking_Fuel_Injector_Pulse_Width_D_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xC9DBA);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_D_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_D_ECT__\n");
}

MakeNameEx(0xC9098, "Cranking_Fuel_Injector_Pulse_Width_D_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC9DDA, "Cranking_Fuel_Injector_Pulse_Width_E_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xC9DDA);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_E_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_E_ECT__\n");
}

MakeNameEx(0xC9098, "Cranking_Fuel_Injector_Pulse_Width_E_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC9DFA, "Cranking_Fuel_Injector_Pulse_Width_F_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xC9DFA);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_F_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_F_ECT__\n");
}

MakeNameEx(0xC9098, "Cranking_Fuel_Injector_Pulse_Width_F_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCC158, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM__", SN_CHECK);
referenceAddress = DfirstB(0xCC158);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM__", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM__\n");
}

MakeNameEx(0xCC128, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_X_AXIS_", SN_CHECK);
MakeNameEx(0xCC13C, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCC104, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM__", SN_CHECK);
referenceAddress = DfirstB(0xCC104);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM__", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM__\n");
}

MakeNameEx(0xCC0D4, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_X_AXIS_", SN_CHECK);
MakeNameEx(0xCC0E8, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC92DC, "Cranking_Fuel_IPW_Compensation_MAP__", SN_CHECK);
referenceAddress = DfirstB(0xC92DC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_MAP__", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_MAP__\n");
}

MakeNameEx(0xC92B4, "Cranking_Fuel_IPW_Compensation_MAP_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC9310, "Cranking_Fuel_IPW_Compensation_Accelerator__", SN_CHECK);
referenceAddress = DfirstB(0xC9310);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Accelerator__", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Accelerator__\n");
}

MakeNameEx(0xC92E8, "Cranking_Fuel_IPW_Compensation_Accelerator_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC9330, "Cranking_Fuel_IPW_Compensation_IAT__", SN_CHECK);
referenceAddress = DfirstB(0xC9330);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_IAT__", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_IAT__\n");
}

MakeNameEx(0xC931C, "Cranking_Fuel_IPW_Compensation_IAT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCB7B4, "Throttle_Tipin_Enrichment_A__", SN_CHECK);
referenceAddress = DfirstB(0xCB7B4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment_A__", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment_A__\n");
}

MakeNameEx(0xCB76C, "Throttle_Tipin_Enrichment_A_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCB820, "Throttle_Tipin_Enrichment_B__", SN_CHECK);
referenceAddress = DfirstB(0xCB820);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment_B__", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment_B__\n");
}

MakeNameEx(0xCB7D8, "Throttle_Tipin_Enrichment_B_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC8F90, "Minimum_Tipin_Enrichment_Activation__", SN_CHECK);
MakeNameEx(0xC8F8C, "Minimum_Tipin_Enrichment_Activation_Throttle__", SN_CHECK);
MakeNameEx(0xC9BC0, "Tipin_Enrichment_Compensation_Boost_Error__", SN_CHECK);
referenceAddress = DfirstB(0xC9BC0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_Boost_Error__", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_Boost_Error__\n");
}

MakeNameEx(0xC9B9C, "Tipin_Enrichment_Compensation_Boost_Error_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC9B8C, "Tipin_Enrichment_Compensation_RPM__", SN_CHECK);
referenceAddress = DfirstB(0xC9B8C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_RPM__", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_RPM__\n");
}

MakeNameEx(0xC9B4C, "Tipin_Enrichment_Compensation_RPM_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC9BC9, "Tipin_Enrichment_Compensation_A_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xC9BC9);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_A_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_A_ECT__\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Compensation_A_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCB844, "Tipin_Enrichment_Compensation_B_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xCB844);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_B_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_B_ECT__\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Compensation_B_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCB864, "Tipin_Enrichment_Compensation_C_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xCB864);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_C_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_C_ECT__\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Compensation_C_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCB8A4, "Tipin_Enrichment_Compensation_D_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xCB8A4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_D_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_D_ECT__\n");
}

MakeNameEx(0xC90D8, "Tipin_Enrichment_Compensation_D_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC8F94, "Tipin_Enrichment_Compensation_D_ECT_Activation__", SN_CHECK);
MakeNameEx(0xC9BD9, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xC9BD9);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT__\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC9BE9, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xC9BE9);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT__\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC8722, "Tipin_Enrichment_Applied_Counter_Reset__", SN_CHECK);
MakeNameEx(0xCB8C4, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xCB8C4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT__\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCB8E4, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xCB8E4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT__\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC8723, "Tipin_Throttle_Cumulative_Reset__", SN_CHECK);
MakeNameEx(0xCC3B0, "Min_Primary_Base_Enrichment_1_Cruise__", SN_CHECK);
referenceAddress = DfirstB(0xCC3B0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_Cruise__", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_Cruise__\n");
}

MakeNameEx(0xC9098, "Min_Primary_Base_Enrichment_1_Cruise_X_AXIS_", SN_CHECK);
MakeNameEx(0xCC38C, "Min_Primary_Base_Enrichment_1_Cruise_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCC30C, "Min_Primary_Base_Enrichment_1_NonCruise__", SN_CHECK);
referenceAddress = DfirstB(0xCC30C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonCruise__", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonCruise__\n");
}

MakeNameEx(0xC9098, "Min_Primary_Base_Enrichment_1_NonCruise_X_AXIS_", SN_CHECK);
MakeNameEx(0xCC2EC, "Min_Primary_Base_Enrichment_1_NonCruise_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC9395, "Min_Primary_Base_Enrichment_1_NonPrimary_OL___", SN_CHECK);
referenceAddress = DfirstB(0xC9395);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonPrimary_OL___", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonPrimary_OL___\n");
}

MakeNameEx(0xC9098, "Min_Primary_Base_Enrichment_1_NonPrimary_OL_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC8B70, "AF_Learning_1_Limits__", SN_CHECK);
MakeNameEx(0xC8B80, "AF_Learning_1_Airflow_Ranges__", SN_CHECK);
MakeNameEx(0xC2B94, "MAF_Limit_Maximum__", SN_CHECK);
MakeNameEx(0xD52E8, "MAF_Sensor_Scaling__", SN_CHECK);
referenceAddress = DfirstB(0xD52E8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_MAF_Sensor_Scaling__", SN_CHECK);
}
else
{
    Message("No reference to MAF_Sensor_Scaling__\n");
}

MakeNameEx(0xD5210, "MAF_Sensor_Scaling_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC330C, "MAF_Compensation_IAT__", SN_CHECK);
referenceAddress = DfirstB(0xC330C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_MAF_Compensation_IAT__", SN_CHECK);
}
else
{
    Message("No reference to MAF_Compensation_IAT__\n");
}

MakeNameEx(0xC32D8, "MAF_Compensation_IAT_X_AXIS_", SN_CHECK);
MakeNameEx(0xC32EC, "MAF_Compensation_IAT_Y_AXIS_", SN_CHECK);
MakeNameEx(0x1FC08, "Engine_Load_Limit_A_Maximum__", SN_CHECK);
MakeNameEx(0xC2F38, "Engine_Load_Limit_B_Maximum_RPM__", SN_CHECK);
referenceAddress = DfirstB(0xC2F38);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Limit_B_Maximum_RPM__", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Limit_B_Maximum_RPM__\n");
}

MakeNameEx(0xC2F30, "Engine_Load_Limit_B_Maximum_RPM_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC3398, "Engine_Load_Compensation_Cruise_MP__", SN_CHECK);
referenceAddress = DfirstB(0xC3398);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Compensation_Cruise_MP__", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Compensation_Cruise_MP__\n");
}

MakeNameEx(0xC3334, "Engine_Load_Compensation_Cruise_MP_X_AXIS_", SN_CHECK);
MakeNameEx(0xC3360, "Engine_Load_Compensation_Cruise_MP_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC3498, "Engine_Load_Compensation_NonCruise_MP__", SN_CHECK);
referenceAddress = DfirstB(0xC3498);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Compensation_NonCruise_MP__", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Compensation_NonCruise_MP__\n");
}

MakeNameEx(0xC3434, "Engine_Load_Compensation_NonCruise_MP_X_AXIS_", SN_CHECK);
MakeNameEx(0xC3460, "Engine_Load_Compensation_NonCruise_MP_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD15B8, "Base_Timing_Primary_Cruise__", SN_CHECK);
referenceAddress = DfirstB(0xD15B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Primary_Cruise__", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Primary_Cruise__\n");
}

MakeNameEx(0xD152C, "Base_Timing_Primary_Cruise_X_AXIS_", SN_CHECK);
MakeNameEx(0xD1570, "Base_Timing_Primary_Cruise_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD1938, "Base_Timing_Reference_Cruise_AVCS_related__", SN_CHECK);
referenceAddress = DfirstB(0xD1938);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Reference_Cruise_AVCS_related__", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Reference_Cruise_AVCS_related__\n");
}

MakeNameEx(0xD18AC, "Base_Timing_Reference_Cruise_AVCS_related_X_AXIS_", SN_CHECK);
MakeNameEx(0xD18F0, "Base_Timing_Reference_Cruise_AVCS_related_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD1778, "Base_Timing_Primary_NonCruise__", SN_CHECK);
referenceAddress = DfirstB(0xD1778);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Primary_NonCruise__", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Primary_NonCruise__\n");
}

MakeNameEx(0xD16EC, "Base_Timing_Primary_NonCruise_X_AXIS_", SN_CHECK);
MakeNameEx(0xD1730, "Base_Timing_Primary_NonCruise_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD1AF8, "Base_Timing_Reference_NonCruise_AVCS_related__", SN_CHECK);
referenceAddress = DfirstB(0xD1AF8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Reference_NonCruise_AVCS_related__", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Reference_NonCruise_AVCS_related__\n");
}

MakeNameEx(0xD1A6C, "Base_Timing_Reference_NonCruise_AVCS_related_X_AXIS_", SN_CHECK);
MakeNameEx(0xD1AB0, "Base_Timing_Reference_NonCruise_AVCS_related_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCFA46, "Base_Timing_Idle_A_InGear__", SN_CHECK);
referenceAddress = DfirstB(0xCFA46);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_A_InGear__", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_A_InGear__\n");
}

MakeNameEx(0xCF7F0, "Base_Timing_Idle_A_InGear_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCFA56, "Base_Timing_Idle_B_InGear__", SN_CHECK);
referenceAddress = DfirstB(0xCFA56);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_B_InGear__", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_B_InGear__\n");
}

MakeNameEx(0xCF7F0, "Base_Timing_Idle_B_InGear_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCFA66, "Base_Timing_Idle_A_Neutral__", SN_CHECK);
referenceAddress = DfirstB(0xCFA66);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_A_Neutral__", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_A_Neutral__\n");
}

MakeNameEx(0xCF7F0, "Base_Timing_Idle_A_Neutral_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCFA76, "Base_Timing_Idle_B_Neutral__", SN_CHECK);
referenceAddress = DfirstB(0xCFA76);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_B_Neutral__", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_B_Neutral__\n");
}

MakeNameEx(0xCF7F0, "Base_Timing_Idle_B_Neutral_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCFA3D, "Base_Timing_Idle_Minimum__", SN_CHECK);
referenceAddress = DfirstB(0xCFA3D);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_Minimum__", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_Minimum__\n");
}

MakeNameEx(0xCF870, "Base_Timing_Idle_Minimum_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCF5EC, "Base_Timing_Idle_Minimum_Vehicle_Speed_Enable__", SN_CHECK);
MakeNameEx(0xD11B4, "Knock_Correction_Advance_Max_Cruise__", SN_CHECK);
referenceAddress = DfirstB(0xD11B4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_Cruise__", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_Cruise__\n");
}

MakeNameEx(0xD1128, "Knock_Correction_Advance_Max_Cruise_X_AXIS_", SN_CHECK);
MakeNameEx(0xD116C, "Knock_Correction_Advance_Max_Cruise_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD1374, "Knock_Correction_Advance_Max_NonCruise__", SN_CHECK);
referenceAddress = DfirstB(0xD1374);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_NonCruise__", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_NonCruise__\n");
}

MakeNameEx(0xD12E8, "Knock_Correction_Advance_Max_NonCruise_X_AXIS_", SN_CHECK);
MakeNameEx(0xD132C, "Knock_Correction_Advance_Max_NonCruise_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCFB28, "Timing_Compensation_A_IAT__", SN_CHECK);
referenceAddress = DfirstB(0xCFB28);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_A_IAT__", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_A_IAT__\n");
}

MakeNameEx(0xCFAE8, "Timing_Compensation_A_IAT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD1C6C, "Timing_Compensation_A_IAT_Activation__", SN_CHECK);
referenceAddress = DfirstB(0xD1C6C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_A_IAT_Activation__", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_A_IAT_Activation__\n");
}

MakeNameEx(0xD1C2C, "Timing_Compensation_A_IAT_Activation_X_AXIS_", SN_CHECK);
MakeNameEx(0xD1C4C, "Timing_Compensation_A_IAT_Activation_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD0120, "Timing_Compensation_B_IAT__", SN_CHECK);
referenceAddress = DfirstB(0xD0120);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_B_IAT__", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_B_IAT__\n");
}

MakeNameEx(0xD00E0, "Timing_Compensation_B_IAT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCF798, "Timing_Compensation_B_IAT_IAM_Activation__", SN_CHECK);
MakeNameEx(0xCF77C, "Timing_Compensation_B_IAT_Max_Additive__", SN_CHECK);
MakeNameEx(0xCFAC6, "Timing_Compensation_Imm_Cruise_A_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xCFAC6);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_Cruise_A_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_Cruise_A_ECT__\n");
}

MakeNameEx(0xCF7F0, "Timing_Compensation_Imm_Cruise_A_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCFAD6, "Timing_Compensation_Imm_Cruise_B_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xCFAD6);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_Cruise_B_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_Cruise_B_ECT__\n");
}

MakeNameEx(0xCF7F0, "Timing_Compensation_Imm_Cruise_B_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCFAA6, "Timing_Compensation_Imm_NonCruise_A_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xCFAA6);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_NonCruise_A_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_NonCruise_A_ECT__\n");
}

MakeNameEx(0xCF7F0, "Timing_Compensation_Imm_NonCruise_A_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCFAB6, "Timing_Compensation_Imm_NonCruise_B_ECT__", SN_CHECK);
referenceAddress = DfirstB(0xCFAB6);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_NonCruise_B_ECT__", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_NonCruise_B_ECT__\n");
}

MakeNameEx(0xCF7F0, "Timing_Compensation_Imm_NonCruise_B_ECT_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD0D60, "Timing_Compensation_Per_Cylinder_A__", SN_CHECK);
referenceAddress = DfirstB(0xD0D60);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_A__", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_A__\n");
}

MakeNameEx(0xD0D14, "Timing_Compensation_Per_Cylinder_A_X_AXIS_", SN_CHECK);
MakeNameEx(0xD0D4C, "Timing_Compensation_Per_Cylinder_A_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD0DF4, "Timing_Compensation_Per_Cylinder_B__", SN_CHECK);
referenceAddress = DfirstB(0xD0DF4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_B__", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_B__\n");
}

MakeNameEx(0xD0DA8, "Timing_Compensation_Per_Cylinder_B_X_AXIS_", SN_CHECK);
MakeNameEx(0xD0DE0, "Timing_Compensation_Per_Cylinder_B_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD0E88, "Timing_Compensation_Per_Cylinder_C__", SN_CHECK);
referenceAddress = DfirstB(0xD0E88);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_C__", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_C__\n");
}

MakeNameEx(0xD0E3C, "Timing_Compensation_Per_Cylinder_C_X_AXIS_", SN_CHECK);
MakeNameEx(0xD0E74, "Timing_Compensation_Per_Cylinder_C_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD0F20, "Timing_Compensation_Per_Cylinder_D__", SN_CHECK);
referenceAddress = DfirstB(0xD0F20);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_D__", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_D__\n");
}

MakeNameEx(0xD0ED0, "Timing_Compensation_Per_Cylinder_D_X_AXIS_", SN_CHECK);
MakeNameEx(0xD0F08, "Timing_Compensation_Per_Cylinder_D_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCF314, "Timing_Comp_Minimum_Load_Per_Cylinder__", SN_CHECK);
MakeNameEx(0xCF310, "Timing_Comp_Maximum_RPM_Per_Cylinder__", SN_CHECK);
MakeNameEx(0xCF318, "Timing_Comp_Minimum_Coolant_Temp_Per_Cylinder__", SN_CHECK);
MakeNameEx(0xCF324, "Feedback_Correction_Range_RPM__", SN_CHECK);
MakeNameEx(0xCF31C, "Feedback_Correction_Minimum_Load__", SN_CHECK);
MakeNameEx(0xCF344, "Feedback_Correction_Retard_Value__", SN_CHECK);
MakeNameEx(0xCF340, "Feedback_Correction_Retard_Limit__", SN_CHECK);
MakeNameEx(0xCF348, "Feedback_Correction_Negative_Advance_Value__", SN_CHECK);
MakeNameEx(0xCF286, "Feedback_Correction_Negative_Advance_Delay__", SN_CHECK);
MakeNameEx(0xCF350, "Extended_Feedback_Correction_High_RPM_Compensation__", SN_CHECK);
MakeNameEx(0xCF4E4, "Fine_Correction_Range_RPM__", SN_CHECK);
MakeNameEx(0xCF4F4, "Fine_Correction_Range_Load__", SN_CHECK);
MakeNameEx(0xCF484, "Fine_Correction_Rows_RPM__", SN_CHECK);
MakeNameEx(0xCF4A0, "Fine_Correction_Columns_Load__", SN_CHECK);
MakeNameEx(0xCF4C8, "Fine_Correction_Retard_Value__", SN_CHECK);
MakeNameEx(0xCF4C4, "Fine_Correction_Retard_Limit__", SN_CHECK);
MakeNameEx(0xCF4C0, "Fine_Correction_Advance_Value__", SN_CHECK);
MakeNameEx(0xCF4BC, "Fine_Correction_Advance_Limit__", SN_CHECK);
MakeNameEx(0xCF296, "Fine_Correction_Advance_Delay__", SN_CHECK);
MakeNameEx(0xCF434, "Rough_Correction_Range_RPM__", SN_CHECK);
MakeNameEx(0xCF444, "Rough_Correction_Range_Load__", SN_CHECK);
MakeNameEx(0xCF454, "Rough_Correction_Minimum_KC_Advance_Map_Value__", SN_CHECK);
MakeNameEx(0xD0310, "Rough_Correction_Learning_Delay_Increasing___", SN_CHECK);
referenceAddress = DfirstB(0xD0310);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Rough_Correction_Learning_Delay_Increasing___", SN_CHECK);
}
else
{
    Message("No reference to Rough_Correction_Learning_Delay_Increasing___\n");
}

MakeNameEx(0xD02E8, "Rough_Correction_Learning_Delay_Increasing_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCF458, "Advance_Multiplier_Initial__", SN_CHECK);
MakeNameEx(0xCF45C, "Advance_Multiplier_Step_Value__", SN_CHECK);
MakeNameEx(0xD6F08, "Intake_Cam_Advance_Angle_Cruise_AVCS__", SN_CHECK);
referenceAddress = DfirstB(0xD6F08);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_Cruise_AVCS__", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_Cruise_AVCS__\n");
}

MakeNameEx(0xD6E80, "Intake_Cam_Advance_Angle_Cruise_AVCS_X_AXIS_", SN_CHECK);
MakeNameEx(0xD6EC8, "Intake_Cam_Advance_Angle_Cruise_AVCS_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD71D0, "Intake_Cam_Advance_Angle_NonCruise_AVCS__", SN_CHECK);
referenceAddress = DfirstB(0xD71D0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_NonCruise_AVCS__", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_NonCruise_AVCS__\n");
}

MakeNameEx(0xD7148, "Intake_Cam_Advance_Angle_NonCruise_AVCS_X_AXIS_", SN_CHECK);
MakeNameEx(0xD7190, "Intake_Cam_Advance_Angle_NonCruise_AVCS_Y_AXIS_", SN_CHECK);
MakeNameEx(0xDD6C8, "Requested_Torque_A_Accelerator_Pedal_", SN_CHECK);
referenceAddress = DfirstB(0xDD6C8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_A_Accelerator_Pedal_", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_A_Accelerator_Pedal_\n");
}

MakeNameEx(0xDD648, "Requested_Torque_A_Accelerator_Pedal_X_AXIS_", SN_CHECK);
MakeNameEx(0xDD684, "Requested_Torque_A_Accelerator_Pedal_Y_AXIS_", SN_CHECK);
MakeNameEx(0xDD948, "Requested_Torque_B_Accelerator_Pedal_", SN_CHECK);
referenceAddress = DfirstB(0xDD948);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_B_Accelerator_Pedal_", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_B_Accelerator_Pedal_\n");
}

MakeNameEx(0xDD8C8, "Requested_Torque_B_Accelerator_Pedal_X_AXIS_", SN_CHECK);
MakeNameEx(0xDD904, "Requested_Torque_B_Accelerator_Pedal_Y_AXIS_", SN_CHECK);
MakeNameEx(0xDDBC8, "Requested_Torque_C_Accelerator_Pedal_", SN_CHECK);
referenceAddress = DfirstB(0xDDBC8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_C_Accelerator_Pedal_", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_C_Accelerator_Pedal_\n");
}

MakeNameEx(0xDDB48, "Requested_Torque_C_Accelerator_Pedal_X_AXIS_", SN_CHECK);
MakeNameEx(0xDDB84, "Requested_Torque_C_Accelerator_Pedal_Y_AXIS_", SN_CHECK);
MakeNameEx(0xDC83C, "Requested_Torque_Base_RPM__", SN_CHECK);
referenceAddress = DfirstB(0xDC83C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Base_RPM__", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Base_RPM__\n");
}

MakeNameEx(0xDC7FC, "Requested_Torque_Base_RPM_Y_AXIS_", SN_CHECK);
MakeNameEx(0xDCCEC, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio__", SN_CHECK);
referenceAddress = DfirstB(0xDCCEC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio__", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio__\n");
}

MakeNameEx(0xDCC6C, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_X_AXIS_", SN_CHECK);
MakeNameEx(0xDCCAC, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_Y_AXIS_", SN_CHECK);
MakeNameEx(0xDCF6C, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio__", SN_CHECK);
referenceAddress = DfirstB(0xDCF6C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio__", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio__\n");
}

MakeNameEx(0xDCEEC, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_X_AXIS_", SN_CHECK);
MakeNameEx(0xDCF2C, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_Y_AXIS_", SN_CHECK);
MakeNameEx(0xDD1EC, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio__", SN_CHECK);
referenceAddress = DfirstB(0xDD1EC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio__", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio__\n");
}

MakeNameEx(0xDD16C, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_X_AXIS_", SN_CHECK);
MakeNameEx(0xDD1AC, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_Y_AXIS_", SN_CHECK);
MakeNameEx(0xC8FEC, "Rev_Limit_Fuel_Cut_", SN_CHECK);
MakeNameEx(0xC8FF4, "Rev_Limit_Fuel_Resume_Boost__", SN_CHECK);
MakeNameEx(0xC903C, "Speed_Limiting_Enable_Fuel_Cut__", SN_CHECK);
MakeNameEx(0xC9044, "Speed_Limiting_Disable_Fuel_Cut__", SN_CHECK);
MakeNameEx(0xDC644, "Speed_Limiting_A_Throttle_", SN_CHECK);
MakeNameEx(0xDC65C, "Speed_Limiting_B_Throttle_", SN_CHECK);
MakeNameEx(0xD5198, "Fuel_Temp_Sensor_Scaling__", SN_CHECK);
referenceAddress = DfirstB(0xD5198);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Fuel_Temp_Sensor_Scaling__", SN_CHECK);
}
else
{
    Message("No reference to Fuel_Temp_Sensor_Scaling__\n");
}

MakeNameEx(0xD5120, "Fuel_Temp_Sensor_Scaling_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD5028, "Intake_Temp_Sensor_Scaling__", SN_CHECK);
referenceAddress = DfirstB(0xD5028);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Intake_Temp_Sensor_Scaling__", SN_CHECK);
}
else
{
    Message("No reference to Intake_Temp_Sensor_Scaling__\n");
}

MakeNameEx(0xD4FB0, "Intake_Temp_Sensor_Scaling_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD4F40, "Coolant_Temp_Sensor_Scaling__", SN_CHECK);
referenceAddress = DfirstB(0xD4F40);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Coolant_Temp_Sensor_Scaling__", SN_CHECK);
}
else
{
    Message("No reference to Coolant_Temp_Sensor_Scaling__\n");
}

MakeNameEx(0xD4ED0, "Coolant_Temp_Sensor_Scaling_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD56B8, "Radiator_Fan_Modes_A_ECT__", SN_CHECK);
MakeNameEx(0xD56C8, "Radiator_Fan_Modes_B_ECT__", SN_CHECK);
MakeNameEx(0xD56D8, "Radiator_Fan_Modes_Veh_Speed__", SN_CHECK);
MakeNameEx(0xC2D8C, "Gear_Determination_Thresholds_A__", SN_CHECK);
MakeNameEx(0xC2DA0, "Gear_Determination_Thresholds_B__", SN_CHECK);
MakeNameEx(0xC2DB4, "Gear_Determination_Thresholds_C__", SN_CHECK);
MakeNameEx(0xD33B8, "Idle_Speed_Target_A__", SN_CHECK);
referenceAddress = DfirstB(0xD33B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_A__", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_A__\n");
}

MakeNameEx(0xD2D6C, "Idle_Speed_Target_A_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD33F8, "Idle_Speed_Target_B__", SN_CHECK);
referenceAddress = DfirstB(0xD33F8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_B__", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_B__\n");
}

MakeNameEx(0xD2D6C, "Idle_Speed_Target_B_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD3438, "Idle_Speed_Target_C__", SN_CHECK);
referenceAddress = DfirstB(0xD3438);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_C__", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_C__\n");
}

MakeNameEx(0xD2D6C, "Idle_Speed_Target_C_Y_AXIS_", SN_CHECK);
MakeNameEx(0x92AD8, "Force_Pass_Readiness_Monitors___", SN_CHECK);
MakeNameEx(0x878F3, "P0000_PASS_CODE_NO_DTC_DETECTED___", SN_CHECK);
MakeNameEx(0x878D7, "P0011_CAMSHAFT_POS_TIMING_OVERADVANCED_1__", SN_CHECK);
MakeNameEx(0x8796A, "P0016_CRANKSHAFTCAMSHAFT_CORRELATION_1A__", SN_CHECK);
MakeNameEx(0x87969, "P0018_CRANKSHAFTCAMSHAFT_CORRELATION_2A__", SN_CHECK);
MakeNameEx(0x878D8, "P0021_CAMSHAFT_POS_TIMING_OVERADVANCED_2__", SN_CHECK);
MakeNameEx(0x87918, "P0030_FRONT_O2_SENSOR_RANGEPERF__", SN_CHECK);
MakeNameEx(0x87902, "P0031_FRONT_O2_SENSOR_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x87900, "P0032_FRONT_O2_SENSOR_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x87901, "P0037_REAR_O2_SENSOR_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x878FF, "P0038_REAR_O2_SENSOR_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x87913, "P0068_MAP_SENSOR_RANGEPERF__", SN_CHECK);
MakeNameEx(0x87914, "P0101_MAF_SENSOR_RANGEPERF__", SN_CHECK);
MakeNameEx(0x878B1, "P0102_MAF_SENSOR_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x878B2, "P0103_MAF_SENSOR_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x87903, "P0107_MAP_SENSOR_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x87904, "P0108_MAP_SENSOR_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x878FE, "P0111_IAT_SENSOR_RANGEPERF__", SN_CHECK);
MakeNameEx(0x878FC, "P0112_IAT_SENSOR_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x878FD, "P0113_IAT_SENSOR_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x878BA, "P0117_COOLANT_TEMP_SENSOR_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x878BB, "P0118_COOLANT_TEMP_SENSOR_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x878B8, "P0122_TPS_A_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x878B9, "P0123_TPS_A_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x878BD, "P0125_INSUFFICIENT_COOLANT_TEMP_FUELING__", SN_CHECK);
MakeNameEx(0x87951, "P0126_INSUFFICIENT_COOLANT_TEMP_OPERATION__", SN_CHECK);
MakeNameEx(0x87909, "P0128_THERMOSTAT_MALFUNCTION__", SN_CHECK);
MakeNameEx(0x878F6, "P0131_FRONT_O2_SENSOR_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x878F8, "P0132_FRONT_O2_SENSOR_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x878E0, "P0133_FRONT_O2_SENSOR_SLOW_RESPONSE__", SN_CHECK);
MakeNameEx(0x87916, "P0134_FRONT_O2_SENSOR_NO_ACTIVITY__", SN_CHECK);
MakeNameEx(0x878F5, "P0137_REAR_O2_SENSOR_LOW_VOLTAGE__", SN_CHECK);
MakeNameEx(0x878FA, "P0138_REAR_O2_SENSOR_HIGH_VOLTAGE__", SN_CHECK);
MakeNameEx(0x878E1, "P0139_REAR_O2_SENSOR_SLOW_RESPONSE_", SN_CHECK);
MakeNameEx(0x87964, "P0140_REAR_O2_SENSOR_NO_ACTIVITY__", SN_CHECK);
MakeNameEx(0x878EA, "P0171_SYSTEM_TOO_LEAN__", SN_CHECK);
MakeNameEx(0x878EB, "P0172_SYSTEM_TOO_RICH__", SN_CHECK);
MakeNameEx(0x878C9, "P0181_FUEL_TEMP_SENSOR_A_RANGEPERF_", SN_CHECK);
MakeNameEx(0x878C7, "P0182_FUEL_TEMP_SENSOR_A_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x878C8, "P0183_FUEL_TEMP_SENSOR_A_HIGH_INPUT_", SN_CHECK);
MakeNameEx(0x87920, "P0222_TPS_B_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x87921, "P0223_TPS_B_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x87912, "P0230_FUEL_PUMP_PRIMARY_CIRCUIT__", SN_CHECK);
MakeNameEx(0x87910, "P0244_WASTEGATE_SOLENOID_A_RANGEPERF__", SN_CHECK);
MakeNameEx(0x8790E, "P0245_WASTEGATE_SOLENOID_A_LOW__", SN_CHECK);
MakeNameEx(0x8790F, "P0246_WASTEGATE_SOLENOID_A_HIGH__", SN_CHECK);
MakeNameEx(0x878EC, "P0301_MISFIRE_CYLINDER_1__", SN_CHECK);
MakeNameEx(0x878ED, "P0302_MISFIRE_CYLINDER_2__", SN_CHECK);
MakeNameEx(0x878EE, "P0303_MISFIRE_CYLINDER_3__", SN_CHECK);
MakeNameEx(0x878EF, "P0304_MISFIRE_CYLINDER_4__", SN_CHECK);
MakeNameEx(0x878B6, "P0327_KNOCK_SENSOR_1_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x878B7, "P0328_KNOCK_SENSOR_1_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x878AC, "P0335_CRANKSHAFT_POS_SENSOR_A_MALFUNCTION__", SN_CHECK);
MakeNameEx(0x878AD, "P0336_CRANKSHAFT_POS_SENSOR_A_RANGEPERF__", SN_CHECK);
MakeNameEx(0x87934, "P0340_CAMSHAFT_POS_SENSOR_A_MALFUNCTION__", SN_CHECK);
MakeNameEx(0x87933, "P0345_CAMSHAFT_POS_SENSOR_A_BANK_2__", SN_CHECK);
MakeNameEx(0x8795E, "P0410_SECONDARY_AIR_PUMP_SYSTEM__", SN_CHECK);
MakeNameEx(0x8795D, "P0411_SECONDARY_AIR_PUMP_INCORRECT_FLOW__", SN_CHECK);
MakeNameEx(0x87962, "P0413_SECONDARY_AIR_PUMP_A_OPEN__", SN_CHECK);
MakeNameEx(0x87967, "P0414_SECONDARY_AIR_PUMP_A_SHORTED__", SN_CHECK);
MakeNameEx(0x87971, "P0416_SECONDARY_AIR_PUMP_B_OPEN__", SN_CHECK);
MakeNameEx(0x87970, "P0417_SECONDARY_AIR_PUMP_B_SHORTED__", SN_CHECK);
MakeNameEx(0x87963, "P0418_SECONDARY_AIR_PUMP_RELAY_A__", SN_CHECK);
MakeNameEx(0x878E6, "P0420_CAT_EFFICIENCY_BELOW_THRESHOLD__", SN_CHECK);
MakeNameEx(0x87977, "P0441_EVAP_INCORRECT_PURGE_FLOW__", SN_CHECK);
MakeNameEx(0x878E7, "P0442_EVAP_LEAK_DETECTED_SMALL_", SN_CHECK);
MakeNameEx(0x878DE, "P0447_EVAP_VENT_CONTROL_CIRCUIT_OPEN_", SN_CHECK);
MakeNameEx(0x878DF, "P0448_EVAP_VENT_CONTROL_CIRCUIT_SHORTED_", SN_CHECK);
MakeNameEx(0x878C5, "P0451_EVAP_PRESSURE_SENSOR_RANGEPERF__", SN_CHECK);
MakeNameEx(0x878C3, "P0452_EVAP_PRESSURE_SENSOR_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x878C4, "P0453_EVAP_PRESSURE_SENSOR_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x878E8, "P0456_EVAP_LEAK_DETECTED_VERY_SMALL__", SN_CHECK);
MakeNameEx(0x878F2, "P0457_EVAP_LEAK_DETECTED_FUEL_CAP_", SN_CHECK);
MakeNameEx(0x878DB, "P0458_EVAP_PURGE_VALVE_CIRCUIT_LOW__", SN_CHECK);
MakeNameEx(0x878DC, "P0459_EVAP_PURGE_VALVE_CIRCUIT_HIGH__", SN_CHECK);
MakeNameEx(0x878C0, "P0461_FUEL_LEVEL_SENSOR_RANGEPERF__", SN_CHECK);
MakeNameEx(0x878BE, "P0462_FUEL_LEVEL_SENSOR_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x878BF, "P0463_FUEL_LEVEL_SENSOR_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x878BC, "P0464_FUEL_LEVEL_SENSOR_INTERMITTENT_", SN_CHECK);
MakeNameEx(0x878B3, "P0500_VEHICLE_SPEED_SENSOR_A__", SN_CHECK);
MakeNameEx(0x878D3, "P0506_IDLE_CONTROL_RPM_LOWER_THAN_EXPECTED__", SN_CHECK);
MakeNameEx(0x878D4, "P0507_IDLE_CONTROL_RPM_HIGH_THAN_EXPECTED__", SN_CHECK);
MakeNameEx(0x878C2, "P0512_STARTER_REQUEST_CIRCUIT__", SN_CHECK);
MakeNameEx(0x87930, "P0600_SERIAL_COMMUNICATION_LINK_", SN_CHECK);
MakeNameEx(0x878B0, "P0604_CONTROL_MODULE_RAM_ERROR__", SN_CHECK);
MakeNameEx(0x87935, "P0605_CONTROL_MODULE_ROM_ERROR__", SN_CHECK);
MakeNameEx(0x87928, "P0607_CONTROL_MODULE_PERFORMANCE__", SN_CHECK);
MakeNameEx(0x87927, "P0638_THROTTLE_ACTUATOR_RANGEPERF__", SN_CHECK);
MakeNameEx(0x87941, "P0700_TRANSMISSION_CONTROL_SYSTEM_", SN_CHECK);
MakeNameEx(0x878C6, "P0851_NEUTRAL_SWITCH_INPUT_LOW__", SN_CHECK);
MakeNameEx(0x878CA, "P0852_NEUTRAL_SWITCH_INPUT_HIGH__", SN_CHECK);
MakeNameEx(0x878E2, "P1152_FRONT_O2_SENSOR_RANGEPERF_LOW_B1_S1__", SN_CHECK);
MakeNameEx(0x878E3, "P1153_FRONT_O2_SENSOR_RANGEPERF_HIGH_B1_S1__", SN_CHECK);
MakeNameEx(0x87922, "P1160_ABNORMAL_RETURN_SPRING__", SN_CHECK);
MakeNameEx(0x878D9, "P1400_FUEL_TANK_PRESSURE_SOL_LOW__", SN_CHECK);
MakeNameEx(0x8796B, "P1410_SECONDARY_AIR_PUMP_VALVE_STUCK_OPEN__", SN_CHECK);
MakeNameEx(0x87968, "P1418_SECONDARY_AIR_PUMP_CIRCUIT_SHORTED__", SN_CHECK);
MakeNameEx(0x878DA, "P1420_FUEL_TANK_PRESSURE_SOL_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x878DD, "P1443_VENT_CONTROL_SOLENOID_FUNCTION_PROBLEM_", SN_CHECK);
MakeNameEx(0x8790A, "P1491_PCV_BLOWBY_FUNCTION_PROBLEM__", SN_CHECK);
MakeNameEx(0x87976, "P1519_IMRC_STUCK_CLOSED__", SN_CHECK);
MakeNameEx(0x87975, "P1520_IMRC_CIRCUIT_MALFUNCTION__", SN_CHECK);
MakeNameEx(0x8790B, "P1560_BACKUP_VOLTAGE_MALFUNCTION__", SN_CHECK);
MakeNameEx(0x87966, "P1602_CONTROL_MODULE_PROGRAMMING_ERROR_", SN_CHECK);
MakeNameEx(0x87974, "P1616_SBDS_INTERACTIVE_CODES__", SN_CHECK);
MakeNameEx(0x8794C, "P2004_TGV_INTAKE_MANIFOLD_RUNNER_1_STUCK_OPEN__", SN_CHECK);
MakeNameEx(0x8794E, "P2005_TGV_INTAKE_MANIFOLD_RUNNER_2_STUCK_OPEN__", SN_CHECK);
MakeNameEx(0x8794D, "P2006_TGV_INTAKE_MANIFOLD_RUNNER_1_STUCK_CLOSED__", SN_CHECK);
MakeNameEx(0x8794F, "P2007_TGV_INTAKE_MANIFOLD_RUNNER_2_STUCK_CLOSED__", SN_CHECK);
MakeNameEx(0x8795A, "P2008_TGV_INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_OPEN__", SN_CHECK);
MakeNameEx(0x87958, "P2009_TGV_INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_LOW__", SN_CHECK);
MakeNameEx(0x8795B, "P2011_TGV_INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_OPEN__", SN_CHECK);
MakeNameEx(0x87959, "P2012_TGV_INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_LOW__", SN_CHECK);
MakeNameEx(0x87954, "P2016_TGV_INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_LOW__", SN_CHECK);
MakeNameEx(0x87955, "P2017_TGV_INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_HIGH__", SN_CHECK);
MakeNameEx(0x87956, "P2021_TGV_INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_LOW__", SN_CHECK);
MakeNameEx(0x87957, "P2022_TGV_INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_HIGH__", SN_CHECK);
MakeNameEx(0x8793D, "P2088_OCV_SOLENOID_A1_CIRCUIT_OPEN__", SN_CHECK);
MakeNameEx(0x8793C, "P2089_OCV_SOLENOID_A1_CIRCUIT_SHORT__", SN_CHECK);
MakeNameEx(0x8793B, "P2092_OCV_SOLENOID_A2_CIRCUIT_OPEN__", SN_CHECK);
MakeNameEx(0x8793A, "P2093_OCV_SOLENOID_A2_CIRCUIT_SHORT__", SN_CHECK);
MakeNameEx(0x87926, "P2096_POST_CATALYST_TOO_LEAN_B1__", SN_CHECK);
MakeNameEx(0x8792F, "P2097_POST_CATALYST_TOO_RICH_B1__", SN_CHECK);
MakeNameEx(0x87925, "P2101_THROTTLE_ACTUATOR_CIRCUIT_RANGEPERF__", SN_CHECK);
MakeNameEx(0x87923, "P2102_THROTTLE_ACTUATOR_CIRCUIT_LOW__", SN_CHECK);
MakeNameEx(0x87924, "P2103_THROTTLE_ACTUATOR_CIRCUIT_HIGH__", SN_CHECK);
MakeNameEx(0x8791F, "P2109_TPS_A_MINIMUM_STOP_PERF__", SN_CHECK);
MakeNameEx(0x8792C, "P2122_TPS_D_CIRCUIT_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x8792D, "P2123_TPS_D_CIRCUIT_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x8792A, "P2127_TPS_E_CIRCUIT_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x8792B, "P2128_TPS_E_CIRCUIT_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x8792E, "P2135_TPS_AB_VOLTAGE__", SN_CHECK);
MakeNameEx(0x87929, "P2138_TPS_DE_VOLTAGE__", SN_CHECK);
MakeNameEx(0x87978, "P2419_EVAP_SWITCHING_VALVE_LOW__", SN_CHECK);
MakeNameEx(0x87979, "P2420_EVAP_SWITCHING_VALVE_HIGH__", SN_CHECK);
MakeNameEx(0x8795F, "P2431_SECONDARY_AIR_PUMP_CIRCUIT_RANGEPERF__", SN_CHECK);
MakeNameEx(0x87961, "P2432_SECONDARY_AIR_PUMP_CIRCUIT_LOW__", SN_CHECK);
MakeNameEx(0x87960, "P2433_SECONDARY_AIR_PUMP_CIRCUIT_HIGH__", SN_CHECK);
MakeNameEx(0x8796F, "P2440_SECONDARY_AIR_PUMP_VALVE_1_STUCK_OPEN__", SN_CHECK);
MakeNameEx(0x8796E, "P2441_SECONDARY_AIR_PUMP_VALVE_1_STUCK_CLOSED__", SN_CHECK);
MakeNameEx(0x8796D, "P2442_SECONDARY_AIR_PUMP_VALVE_2_STUCK_OPEN__", SN_CHECK);
MakeNameEx(0x8796C, "P2443_SECONDARY_AIR_PUMP_2_STUCK_CLOSED__", SN_CHECK);
MakeNameEx(0x8795C, "P2444_SECONDARY_AIR_PUMP_1_STUCK_ON_B1__", SN_CHECK);
MakeNameEx(0xD556C, "Ignition_Dwell___", SN_CHECK);
referenceAddress = DfirstB(0xD556C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Ignition_Dwell___", SN_CHECK);
}
else
{
    Message("No reference to Ignition_Dwell___\n");
}

MakeNameEx(0xD5518, "Ignition_Dwell_X_AXIS__", SN_CHECK);
MakeNameEx(0xD5558, "Ignition_Dwell_Y_AXIS__", SN_CHECK);
MakeNameEx(0xDD470, "Requested_Torque_Limit_A_Per_GearEngine_Speed___", SN_CHECK);
referenceAddress = DfirstB(0xDD470);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Limit_A_Per_GearEngine_Speed___", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Limit_A_Per_GearEngine_Speed___\n");
}

MakeNameEx(0xDD418, "Requested_Torque_Limit_A_Per_GearEngine_Speed_X_AXIS__", SN_CHECK);
MakeNameEx(0xDD458, "Requested_Torque_Limit_A_Per_GearEngine_Speed_Y_AXIS__", SN_CHECK);
MakeNameEx(0xDD588, "Requested_Torque_Limit_B_Per_GearEngine_Speed___", SN_CHECK);
referenceAddress = DfirstB(0xDD588);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Limit_B_Per_GearEngine_Speed___", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Limit_B_Per_GearEngine_Speed___\n");
}

MakeNameEx(0xDD530, "Requested_Torque_Limit_B_Per_GearEngine_Speed_X_AXIS__", SN_CHECK);
MakeNameEx(0xDD570, "Requested_Torque_Limit_B_Per_GearEngine_Speed_Y_AXIS__", SN_CHECK);
MakeNameEx(0x45328, "Fuel_Pump_Duty__", SN_CHECK);
MakeNameEx(0xC0D14, "Target_Boost____", SN_CHECK);
referenceAddress = DfirstB(0xC0D14);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Boost____", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost____\n");
}

MakeNameEx(0xC0CAC, "Target_Boost_X_AXIS__", SN_CHECK);
MakeNameEx(0xC0CD8, "Target_Boost_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC06C8, "Target_Boost_Compensation_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xC06C8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_ECT___\n");
}

MakeNameEx(0xC05E8, "Target_Boost_Compensation_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC05E0, "Target_Boost_Compensation_1st_Gear___", SN_CHECK);
MakeNameEx(0xC05DC, "Target_Boost_Compensation_1st_Gear_Speed_Disable___", SN_CHECK);
MakeNameEx(0xC0810, "Target_Boost_Compensation_IAT____", SN_CHECK);
referenceAddress = DfirstB(0xC0810);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_IAT____", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_IAT____\n");
}

MakeNameEx(0xC07F8, "Target_Boost_Compensation_IAT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC0898, "Target_Boost_Compensation_Atm_Pressure____", SN_CHECK);
referenceAddress = DfirstB(0xC0898);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_Atm_Pressure____", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_Atm_Pressure____\n");
}

MakeNameEx(0xC0868, "Target_Boost_Compensation_Atm_Pressure_X_AXIS__", SN_CHECK);
MakeNameEx(0xC0880, "Target_Boost_Compensation_Atm_Pressure_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCEE54, "Boost_Limit_Fuel_Cut____", SN_CHECK);
referenceAddress = DfirstB(0xCEE54);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Boost_Limit_Fuel_Cut____", SN_CHECK);
}
else
{
    Message("No reference to Boost_Limit_Fuel_Cut____\n");
}

MakeNameEx(0xCEE24, "Boost_Limit_Fuel_Cut_X_AXIS__", SN_CHECK);
MakeNameEx(0xCEE3C, "Boost_Limit_Fuel_Cut_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC05D0, "Boost_Control_Disable_IAM___", SN_CHECK);
MakeNameEx(0xC05CC, "Boost_Control_Disable_Fine_Correction___", SN_CHECK);
MakeNameEx(0xC0581, "Boost_Control_Disable_Delay_Fine_Correction___", SN_CHECK);
MakeNameEx(0xC0B24, "Initial_Wastegate_Duty____", SN_CHECK);
referenceAddress = DfirstB(0xC0B24);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Initial_Wastegate_Duty____", SN_CHECK);
}
else
{
    Message("No reference to Initial_Wastegate_Duty____\n");
}

MakeNameEx(0xC0AB4, "Initial_Wastegate_Duty_X_AXIS__", SN_CHECK);
MakeNameEx(0xC0AF0, "Initial_Wastegate_Duty_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC092C, "Max_Wastegate_Duty____", SN_CHECK);
referenceAddress = DfirstB(0xC092C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Max_Wastegate_Duty____", SN_CHECK);
}
else
{
    Message("No reference to Max_Wastegate_Duty____\n");
}

MakeNameEx(0xC08BC, "Max_Wastegate_Duty_X_AXIS__", SN_CHECK);
MakeNameEx(0xC08F8, "Max_Wastegate_Duty_Y_AXIS__", SN_CHECK);
MakeNameEx(0x13D98, "Max_Wastegate_Duty_Limit_PostCompensation___", SN_CHECK);
MakeNameEx(0xC0668, "InitialMax_Wastegate_Duty_Compensation_IAT___", SN_CHECK);
referenceAddress = DfirstB(0xC0668);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_IAT___", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_IAT___\n");
}

MakeNameEx(0xC0628, "InitialMax_Wastegate_Duty_Compensation_IAT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC0688, "InitialMax_Wastegate_Duty_Compensation_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xC0688);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_ECT___", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_ECT___\n");
}

MakeNameEx(0xC05E8, "InitialMax_Wastegate_Duty_Compensation_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC0850, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure___", SN_CHECK);
referenceAddress = DfirstB(0xC0850);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_Atm_Pressure___", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_Atm_Pressure___\n");
}

MakeNameEx(0xC0828, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_X_AXIS__", SN_CHECK);
MakeNameEx(0xC0840, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC06FC, "Turbo_Dynamics_Proportional___", SN_CHECK);
referenceAddress = DfirstB(0xC06FC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Proportional___", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Proportional___\n");
}

MakeNameEx(0xC06D8, "Turbo_Dynamics_Proportional_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC076C, "Turbo_Dynamics_Integral_Positive___", SN_CHECK);
referenceAddress = DfirstB(0xC076C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Integral_Positive___", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Integral_Positive___\n");
}

MakeNameEx(0xC0748, "Turbo_Dynamics_Integral_Positive_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC0734, "Turbo_Dynamics_Integral_Negative___", SN_CHECK);
referenceAddress = DfirstB(0xC0734);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Integral_Negative___", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Integral_Negative___\n");
}

MakeNameEx(0xC0710, "Turbo_Dynamics_Integral_Negative_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC0698, "TD_Proportional_Compensation_IAT___", SN_CHECK);
referenceAddress = DfirstB(0xC0698);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Proportional_Compensation_IAT___", SN_CHECK);
}
else
{
    Message("No reference to TD_Proportional_Compensation_IAT___\n");
}

MakeNameEx(0xC0628, "TD_Proportional_Compensation_IAT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC06B8, "TD_Integral_Positive_Compensation_IAT___", SN_CHECK);
referenceAddress = DfirstB(0xC06B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Integral_Positive_Compensation_IAT___", SN_CHECK);
}
else
{
    Message("No reference to TD_Integral_Positive_Compensation_IAT___\n");
}

MakeNameEx(0xC0628, "TD_Integral_Positive_Compensation_IAT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC06A8, "TD_Integral_Negative_Compensation_IAT___", SN_CHECK);
referenceAddress = DfirstB(0xC06A8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Integral_Negative_Compensation_IAT___", SN_CHECK);
}
else
{
    Message("No reference to TD_Integral_Negative_Compensation_IAT___\n");
}

MakeNameEx(0xC0628, "TD_Integral_Negative_Compensation_IAT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC05BC, "TD_Activation_Thresholds_RPM___", SN_CHECK);
MakeNameEx(0xC05A8, "TD_Activation_Thresholds_Target_Boost____", SN_CHECK);
MakeNameEx(0xC05C4, "TD_Integral_Cumulative_Range_WGDC_Correction___", SN_CHECK);
MakeNameEx(0xC05B0, "TD_Integral_Negative_Activation_Boost_Error___", SN_CHECK);
MakeNameEx(0xC05B4, "TD_Integral_Positive_Activation_Boost_Error___", SN_CHECK);
MakeNameEx(0xC05B8, "TD_Integral_Negative_Activation_Wastegate_Duty___", SN_CHECK);
MakeNameEx(0xD4EA4, "Manifold_Pressure_Sensor_Scaling____", SN_CHECK);
MakeNameEx(0xD4E44, "Manifold_Pressure_Sensor_Limits_CEL___", SN_CHECK);
MakeNameEx(0xC3BF6, "Manifold_Pressure_Sensor_CEL_Delays___", SN_CHECK);
MakeNameEx(0xCC784, "Primary_Open_Loop_Fueling___", SN_CHECK);
referenceAddress = DfirstB(0xCC784);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling___", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling___\n");
}

MakeNameEx(0xCC6F8, "Primary_Open_Loop_Fueling_X_AXIS__", SN_CHECK);
MakeNameEx(0xCC73C, "Primary_Open_Loop_Fueling_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCC944, "Primary_Open_Loop_Fueling_Failsafe___", SN_CHECK);
referenceAddress = DfirstB(0xCC944);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Failsafe___", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Failsafe___\n");
}

MakeNameEx(0xCC8B8, "Primary_Open_Loop_Fueling_Failsafe_X_AXIS__", SN_CHECK);
MakeNameEx(0xCC8FC, "Primary_Open_Loop_Fueling_Failsafe_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC8C68, "Primary_Open_Loop_Fuel_Map_Switch_IAM___", SN_CHECK);
MakeNameEx(0xC8C6C, "Minimum_Active_Primary_Open_Loop_Enrichment___", SN_CHECK);
MakeNameEx(0xC9814, "Minimum_Primary_Open_Loop_Enrichment_Throttle___", SN_CHECK);
referenceAddress = DfirstB(0xC9814);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Throttle___", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Throttle___\n");
}

MakeNameEx(0xC97FC, "Minimum_Primary_Open_Loop_Enrichment_Throttle_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC9834, "Minimum_Primary_Open_Loop_Enrichment_Accelerator___", SN_CHECK);
referenceAddress = DfirstB(0xC9834);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Accelerator___", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Accelerator___\n");
}

MakeNameEx(0xC981C, "Minimum_Primary_Open_Loop_Enrichment_Accelerator_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCB130, "Primary_Open_Loop_Fueling_Compensation_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xCB130);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_ECT___\n");
}

MakeNameEx(0xC9098, "Primary_Open_Loop_Fueling_Compensation_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC97A4, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation____", SN_CHECK);
referenceAddress = DfirstB(0xC97A4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_Timing_Compensation____", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_Timing_Compensation____\n");
}

MakeNameEx(0xC978C, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD53F4, "Front_Oxygen_Sensor_Scaling___", SN_CHECK);
referenceAddress = DfirstB(0xD53F4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Scaling___", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Scaling___\n");
}

MakeNameEx(0xD53C0, "Front_Oxygen_Sensor_Scaling_Y_AXIS__", SN_CHECK);
MakeNameEx(0x2135C, "Front_Oxygen_Sensor_Rich_Limit___", SN_CHECK);
MakeNameEx(0xC3038, "Front_Oxygen_Sensor_Compensation_Atm_Pressure___", SN_CHECK);
referenceAddress = DfirstB(0xC3038);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Compensation_Atm_Pressure___", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Compensation_Atm_Pressure___\n");
}

MakeNameEx(0xC3028, "Front_Oxygen_Sensor_Compensation_Atm_Pressure_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCDF24, "CL_Fueling_Target_Compensation_A_Load___", SN_CHECK);
referenceAddress = DfirstB(0xCDF24);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_A_Load___", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_A_Load___\n");
}

MakeNameEx(0xCDED0, "CL_Fueling_Target_Compensation_A_Load_X_AXIS__", SN_CHECK);
MakeNameEx(0xCDEFC, "CL_Fueling_Target_Compensation_A_Load_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCE184, "CL_Fueling_Target_Compensation_B_Load___", SN_CHECK);
referenceAddress = DfirstB(0xCE184);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_B_Load___", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_B_Load___\n");
}

MakeNameEx(0xCE130, "CL_Fueling_Target_Compensation_B_Load_X_AXIS__", SN_CHECK);
MakeNameEx(0xCE15C, "CL_Fueling_Target_Compensation_B_Load_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCDE04, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xCDE04);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Imm_Cruise_ECT___", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Imm_Cruise_ECT___\n");
}

MakeNameEx(0xC9098, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_X_AXIS__", SN_CHECK);
MakeNameEx(0xCDDF8, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCDE70, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xCDE70);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Imm_NonCruise_ECT___", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Imm_NonCruise_ECT___\n");
}

MakeNameEx(0xC9098, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_X_AXIS__", SN_CHECK);
MakeNameEx(0xCDE64, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC8778, "CL_to_OL_Delay____", SN_CHECK);
MakeNameEx(0xC97EC, "CL_to_OL_Transition_with_Delay_Throttle___", SN_CHECK);
referenceAddress = DfirstB(0xC97EC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Throttle___", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Throttle___\n");
}

MakeNameEx(0xC97AC, "CL_to_OL_Transition_with_Delay_Throttle_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC8C74, "CL_to_OL_Transition_with_Delay_Throttle_Hysteresis___", SN_CHECK);
MakeNameEx(0xCB05C, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width___", SN_CHECK);
referenceAddress = DfirstB(0xCB05C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Base_Pulse_Width___", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Base_Pulse_Width___\n");
}

MakeNameEx(0xCB01C, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC8C70, "CL_to_OL_Transition_with_Delay_BPW_Hysteresis___", SN_CHECK);
MakeNameEx(0xCB0A4, "CL_to_OL_Transition_Counter_Step_Value_MAF___", SN_CHECK);
referenceAddress = DfirstB(0xCB0A4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_Counter_Step_Value_MAF___", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_Counter_Step_Value_MAF___\n");
}

MakeNameEx(0xCB07C, "CL_to_OL_Transition_Counter_Step_Value_MAF_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC8CD4, "CL_Delay_Maximum_Throttle___", SN_CHECK);
MakeNameEx(0xC8CF0, "CL_Delay_Maximum_Vehicle_Speed___", SN_CHECK);
MakeNameEx(0xC8C78, "CL_Delay_Minimum_ECT___", SN_CHECK);
MakeNameEx(0xC8D00, "CL_Delay_Maximum_Engine_Load___", SN_CHECK);
MakeNameEx(0xC8770, "CL_Delay_Engine_Load_Counter_Threshold___", SN_CHECK);
MakeNameEx(0xC8C7C, "CL_Delay_Maximum_Engine_Speed_Per_Gear___", SN_CHECK);
MakeNameEx(0xC8CA4, "CL_Delay_Maximum_Engine_Speed_Neutral___", SN_CHECK);
MakeNameEx(0xCDAC0, "Injector_Latency____", SN_CHECK);
referenceAddress = DfirstB(0xCDAC0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Injector_Latency____", SN_CHECK);
}
else
{
    Message("No reference to Injector_Latency____\n");
}

MakeNameEx(0xCDAA0, "Injector_Latency_X_AXIS__", SN_CHECK);
MakeNameEx(0xCDAB4, "Injector_Latency_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC893C, "Injector_Flow_Scaling___", SN_CHECK);
MakeNameEx(0xCD23C, "Per_Injector_Pulse_Width_Compensation_A___", SN_CHECK);
referenceAddress = DfirstB(0xCD23C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_A___", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_A___\n");
}

MakeNameEx(0xCD1B4, "Per_Injector_Pulse_Width_Compensation_A_X_AXIS__", SN_CHECK);
MakeNameEx(0xCD1F8, "Per_Injector_Pulse_Width_Compensation_A_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCD3E8, "Per_Injector_Pulse_Width_Compensation_B___", SN_CHECK);
referenceAddress = DfirstB(0xCD3E8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_B___", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_B___\n");
}

MakeNameEx(0xCD360, "Per_Injector_Pulse_Width_Compensation_B_X_AXIS__", SN_CHECK);
MakeNameEx(0xCD3A4, "Per_Injector_Pulse_Width_Compensation_B_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCD594, "Per_Injector_Pulse_Width_Compensation_C___", SN_CHECK);
referenceAddress = DfirstB(0xCD594);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_C___", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_C___\n");
}

MakeNameEx(0xCD50C, "Per_Injector_Pulse_Width_Compensation_C_X_AXIS__", SN_CHECK);
MakeNameEx(0xCD550, "Per_Injector_Pulse_Width_Compensation_C_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCD740, "Per_Injector_Pulse_Width_Compensation_D___", SN_CHECK);
referenceAddress = DfirstB(0xCD740);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_D___", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_D___\n");
}

MakeNameEx(0xCD6B8, "Per_Injector_Pulse_Width_Compensation_D_X_AXIS__", SN_CHECK);
MakeNameEx(0xCD6FC, "Per_Injector_Pulse_Width_Compensation_D_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC9D5A, "Cranking_Fuel_Injector_Pulse_Width_A_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xC9D5A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_A_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_A_ECT___\n");
}

MakeNameEx(0xC9098, "Cranking_Fuel_Injector_Pulse_Width_A_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC9D7A, "Cranking_Fuel_Injector_Pulse_Width_B_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xC9D7A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_B_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_B_ECT___\n");
}

MakeNameEx(0xC9098, "Cranking_Fuel_Injector_Pulse_Width_B_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC9D9A, "Cranking_Fuel_Injector_Pulse_Width_C_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xC9D9A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_C_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_C_ECT___\n");
}

MakeNameEx(0xC9098, "Cranking_Fuel_Injector_Pulse_Width_C_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC9DBA, "Cranking_Fuel_Injector_Pulse_Width_D_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xC9DBA);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_D_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_D_ECT___\n");
}

MakeNameEx(0xC9098, "Cranking_Fuel_Injector_Pulse_Width_D_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC9DDA, "Cranking_Fuel_Injector_Pulse_Width_E_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xC9DDA);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_E_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_E_ECT___\n");
}

MakeNameEx(0xC9098, "Cranking_Fuel_Injector_Pulse_Width_E_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC9DFA, "Cranking_Fuel_Injector_Pulse_Width_F_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xC9DFA);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_F_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_F_ECT___\n");
}

MakeNameEx(0xC9098, "Cranking_Fuel_Injector_Pulse_Width_F_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCC158, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM___", SN_CHECK);
referenceAddress = DfirstB(0xCC158);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM___", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM___\n");
}

MakeNameEx(0xCC128, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_X_AXIS__", SN_CHECK);
MakeNameEx(0xCC13C, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCC104, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM___", SN_CHECK);
referenceAddress = DfirstB(0xCC104);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM___", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM___\n");
}

MakeNameEx(0xCC0D4, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_X_AXIS__", SN_CHECK);
MakeNameEx(0xCC0E8, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC92DC, "Cranking_Fuel_IPW_Compensation_MAP___", SN_CHECK);
referenceAddress = DfirstB(0xC92DC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_MAP___", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_MAP___\n");
}

MakeNameEx(0xC92B4, "Cranking_Fuel_IPW_Compensation_MAP_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC9310, "Cranking_Fuel_IPW_Compensation_Accelerator___", SN_CHECK);
referenceAddress = DfirstB(0xC9310);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Accelerator___", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Accelerator___\n");
}

MakeNameEx(0xC92E8, "Cranking_Fuel_IPW_Compensation_Accelerator_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC9330, "Cranking_Fuel_IPW_Compensation_IAT___", SN_CHECK);
referenceAddress = DfirstB(0xC9330);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_IAT___", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_IAT___\n");
}

MakeNameEx(0xC931C, "Cranking_Fuel_IPW_Compensation_IAT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCB7B4, "Throttle_Tipin_Enrichment_A___", SN_CHECK);
referenceAddress = DfirstB(0xCB7B4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment_A___", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment_A___\n");
}

MakeNameEx(0xCB76C, "Throttle_Tipin_Enrichment_A_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCB820, "Throttle_Tipin_Enrichment_B___", SN_CHECK);
referenceAddress = DfirstB(0xCB820);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment_B___", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment_B___\n");
}

MakeNameEx(0xCB7D8, "Throttle_Tipin_Enrichment_B_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC8F90, "Minimum_Tipin_Enrichment_Activation___", SN_CHECK);
MakeNameEx(0xC8F8C, "Minimum_Tipin_Enrichment_Activation_Throttle___", SN_CHECK);
MakeNameEx(0xC9BC0, "Tipin_Enrichment_Compensation_Boost_Error___", SN_CHECK);
referenceAddress = DfirstB(0xC9BC0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_Boost_Error___", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_Boost_Error___\n");
}

MakeNameEx(0xC9B9C, "Tipin_Enrichment_Compensation_Boost_Error_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC9B8C, "Tipin_Enrichment_Compensation_RPM___", SN_CHECK);
referenceAddress = DfirstB(0xC9B8C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_RPM___", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_RPM___\n");
}

MakeNameEx(0xC9B4C, "Tipin_Enrichment_Compensation_RPM_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC9BC9, "Tipin_Enrichment_Compensation_A_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xC9BC9);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_A_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_A_ECT___\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Compensation_A_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCB844, "Tipin_Enrichment_Compensation_B_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xCB844);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_B_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_B_ECT___\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Compensation_B_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCB864, "Tipin_Enrichment_Compensation_C_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xCB864);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_C_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_C_ECT___\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Compensation_C_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCB8A4, "Tipin_Enrichment_Compensation_D_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xCB8A4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_D_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_D_ECT___\n");
}

MakeNameEx(0xC90D8, "Tipin_Enrichment_Compensation_D_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC8F94, "Tipin_Enrichment_Compensation_D_ECT_Activation___", SN_CHECK);
MakeNameEx(0xC9BD9, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xC9BD9);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT___\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC9BE9, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xC9BE9);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT___\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC8722, "Tipin_Enrichment_Applied_Counter_Reset___", SN_CHECK);
MakeNameEx(0xCB8C4, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xCB8C4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT___\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCB8E4, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xCB8E4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT___\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC8723, "Tipin_Throttle_Cumulative_Reset___", SN_CHECK);
MakeNameEx(0xCC3B0, "Min_Primary_Base_Enrichment_1_Cruise___", SN_CHECK);
referenceAddress = DfirstB(0xCC3B0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_Cruise___", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_Cruise___\n");
}

MakeNameEx(0xC9098, "Min_Primary_Base_Enrichment_1_Cruise_X_AXIS__", SN_CHECK);
MakeNameEx(0xCC38C, "Min_Primary_Base_Enrichment_1_Cruise_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCC30C, "Min_Primary_Base_Enrichment_1_NonCruise___", SN_CHECK);
referenceAddress = DfirstB(0xCC30C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonCruise___", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonCruise___\n");
}

MakeNameEx(0xC9098, "Min_Primary_Base_Enrichment_1_NonCruise_X_AXIS__", SN_CHECK);
MakeNameEx(0xCC2EC, "Min_Primary_Base_Enrichment_1_NonCruise_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC9395, "Min_Primary_Base_Enrichment_1_NonPrimary_OL____", SN_CHECK);
referenceAddress = DfirstB(0xC9395);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonPrimary_OL____", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonPrimary_OL____\n");
}

MakeNameEx(0xC9098, "Min_Primary_Base_Enrichment_1_NonPrimary_OL_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC8B70, "AF_Learning_1_Limits___", SN_CHECK);
MakeNameEx(0xC8B80, "AF_Learning_1_Airflow_Ranges___", SN_CHECK);
MakeNameEx(0xC2B94, "MAF_Limit_Maximum___", SN_CHECK);
MakeNameEx(0xD52E8, "MAF_Sensor_Scaling___", SN_CHECK);
referenceAddress = DfirstB(0xD52E8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_MAF_Sensor_Scaling___", SN_CHECK);
}
else
{
    Message("No reference to MAF_Sensor_Scaling___\n");
}

MakeNameEx(0xD5210, "MAF_Sensor_Scaling_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC330C, "MAF_Compensation_IAT___", SN_CHECK);
referenceAddress = DfirstB(0xC330C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_MAF_Compensation_IAT___", SN_CHECK);
}
else
{
    Message("No reference to MAF_Compensation_IAT___\n");
}

MakeNameEx(0xC32D8, "MAF_Compensation_IAT_X_AXIS__", SN_CHECK);
MakeNameEx(0xC32EC, "MAF_Compensation_IAT_Y_AXIS__", SN_CHECK);
MakeNameEx(0x1FC08, "Engine_Load_Limit_A_Maximum___", SN_CHECK);
MakeNameEx(0xC2F38, "Engine_Load_Limit_B_Maximum_RPM___", SN_CHECK);
referenceAddress = DfirstB(0xC2F38);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Limit_B_Maximum_RPM___", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Limit_B_Maximum_RPM___\n");
}

MakeNameEx(0xC2F30, "Engine_Load_Limit_B_Maximum_RPM_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC3398, "Engine_Load_Compensation_Cruise_MP___", SN_CHECK);
referenceAddress = DfirstB(0xC3398);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Compensation_Cruise_MP___", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Compensation_Cruise_MP___\n");
}

MakeNameEx(0xC3334, "Engine_Load_Compensation_Cruise_MP_X_AXIS__", SN_CHECK);
MakeNameEx(0xC3360, "Engine_Load_Compensation_Cruise_MP_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC3498, "Engine_Load_Compensation_NonCruise_MP___", SN_CHECK);
referenceAddress = DfirstB(0xC3498);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Compensation_NonCruise_MP___", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Compensation_NonCruise_MP___\n");
}

MakeNameEx(0xC3434, "Engine_Load_Compensation_NonCruise_MP_X_AXIS__", SN_CHECK);
MakeNameEx(0xC3460, "Engine_Load_Compensation_NonCruise_MP_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD15B8, "Base_Timing_Primary_Cruise___", SN_CHECK);
referenceAddress = DfirstB(0xD15B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Primary_Cruise___", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Primary_Cruise___\n");
}

MakeNameEx(0xD152C, "Base_Timing_Primary_Cruise_X_AXIS__", SN_CHECK);
MakeNameEx(0xD1570, "Base_Timing_Primary_Cruise_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD1938, "Base_Timing_Reference_Cruise_AVCS_related___", SN_CHECK);
referenceAddress = DfirstB(0xD1938);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Reference_Cruise_AVCS_related___", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Reference_Cruise_AVCS_related___\n");
}

MakeNameEx(0xD18AC, "Base_Timing_Reference_Cruise_AVCS_related_X_AXIS__", SN_CHECK);
MakeNameEx(0xD18F0, "Base_Timing_Reference_Cruise_AVCS_related_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD1778, "Base_Timing_Primary_NonCruise___", SN_CHECK);
referenceAddress = DfirstB(0xD1778);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Primary_NonCruise___", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Primary_NonCruise___\n");
}

MakeNameEx(0xD16EC, "Base_Timing_Primary_NonCruise_X_AXIS__", SN_CHECK);
MakeNameEx(0xD1730, "Base_Timing_Primary_NonCruise_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD1AF8, "Base_Timing_Reference_NonCruise_AVCS_related___", SN_CHECK);
referenceAddress = DfirstB(0xD1AF8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Reference_NonCruise_AVCS_related___", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Reference_NonCruise_AVCS_related___\n");
}

MakeNameEx(0xD1A6C, "Base_Timing_Reference_NonCruise_AVCS_related_X_AXIS__", SN_CHECK);
MakeNameEx(0xD1AB0, "Base_Timing_Reference_NonCruise_AVCS_related_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCFA46, "Base_Timing_Idle_A_InGear___", SN_CHECK);
referenceAddress = DfirstB(0xCFA46);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_A_InGear___", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_A_InGear___\n");
}

MakeNameEx(0xCF7F0, "Base_Timing_Idle_A_InGear_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCFA56, "Base_Timing_Idle_B_InGear___", SN_CHECK);
referenceAddress = DfirstB(0xCFA56);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_B_InGear___", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_B_InGear___\n");
}

MakeNameEx(0xCF7F0, "Base_Timing_Idle_B_InGear_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCFA66, "Base_Timing_Idle_A_Neutral___", SN_CHECK);
referenceAddress = DfirstB(0xCFA66);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_A_Neutral___", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_A_Neutral___\n");
}

MakeNameEx(0xCF7F0, "Base_Timing_Idle_A_Neutral_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCFA76, "Base_Timing_Idle_B_Neutral___", SN_CHECK);
referenceAddress = DfirstB(0xCFA76);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_B_Neutral___", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_B_Neutral___\n");
}

MakeNameEx(0xCF7F0, "Base_Timing_Idle_B_Neutral_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCFA3D, "Base_Timing_Idle_Minimum___", SN_CHECK);
referenceAddress = DfirstB(0xCFA3D);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_Minimum___", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_Minimum___\n");
}

MakeNameEx(0xCF870, "Base_Timing_Idle_Minimum_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCF5EC, "Base_Timing_Idle_Minimum_Vehicle_Speed_Enable___", SN_CHECK);
MakeNameEx(0xD11B4, "Knock_Correction_Advance_Max_Cruise___", SN_CHECK);
referenceAddress = DfirstB(0xD11B4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_Cruise___", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_Cruise___\n");
}

MakeNameEx(0xD1128, "Knock_Correction_Advance_Max_Cruise_X_AXIS__", SN_CHECK);
MakeNameEx(0xD116C, "Knock_Correction_Advance_Max_Cruise_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD1374, "Knock_Correction_Advance_Max_NonCruise___", SN_CHECK);
referenceAddress = DfirstB(0xD1374);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_NonCruise___", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_NonCruise___\n");
}

MakeNameEx(0xD12E8, "Knock_Correction_Advance_Max_NonCruise_X_AXIS__", SN_CHECK);
MakeNameEx(0xD132C, "Knock_Correction_Advance_Max_NonCruise_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCFB28, "Timing_Compensation_A_IAT___", SN_CHECK);
referenceAddress = DfirstB(0xCFB28);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_A_IAT___", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_A_IAT___\n");
}

MakeNameEx(0xCFAE8, "Timing_Compensation_A_IAT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD1C6C, "Timing_Compensation_A_IAT_Activation___", SN_CHECK);
referenceAddress = DfirstB(0xD1C6C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_A_IAT_Activation___", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_A_IAT_Activation___\n");
}

MakeNameEx(0xD1C2C, "Timing_Compensation_A_IAT_Activation_X_AXIS__", SN_CHECK);
MakeNameEx(0xD1C4C, "Timing_Compensation_A_IAT_Activation_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD0120, "Timing_Compensation_B_IAT___", SN_CHECK);
referenceAddress = DfirstB(0xD0120);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_B_IAT___", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_B_IAT___\n");
}

MakeNameEx(0xD00E0, "Timing_Compensation_B_IAT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCF798, "Timing_Compensation_B_IAT_IAM_Activation___", SN_CHECK);
MakeNameEx(0xCF77C, "Timing_Compensation_B_IAT_Max_Additive___", SN_CHECK);
MakeNameEx(0xCFAC6, "Timing_Compensation_Imm_Cruise_A_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xCFAC6);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_Cruise_A_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_Cruise_A_ECT___\n");
}

MakeNameEx(0xCF7F0, "Timing_Compensation_Imm_Cruise_A_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCFAD6, "Timing_Compensation_Imm_Cruise_B_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xCFAD6);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_Cruise_B_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_Cruise_B_ECT___\n");
}

MakeNameEx(0xCF7F0, "Timing_Compensation_Imm_Cruise_B_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCFAA6, "Timing_Compensation_Imm_NonCruise_A_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xCFAA6);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_NonCruise_A_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_NonCruise_A_ECT___\n");
}

MakeNameEx(0xCF7F0, "Timing_Compensation_Imm_NonCruise_A_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCFAB6, "Timing_Compensation_Imm_NonCruise_B_ECT___", SN_CHECK);
referenceAddress = DfirstB(0xCFAB6);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_NonCruise_B_ECT___", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_NonCruise_B_ECT___\n");
}

MakeNameEx(0xCF7F0, "Timing_Compensation_Imm_NonCruise_B_ECT_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD0D60, "Timing_Compensation_Per_Cylinder_A___", SN_CHECK);
referenceAddress = DfirstB(0xD0D60);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_A___", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_A___\n");
}

MakeNameEx(0xD0D14, "Timing_Compensation_Per_Cylinder_A_X_AXIS__", SN_CHECK);
MakeNameEx(0xD0D4C, "Timing_Compensation_Per_Cylinder_A_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD0DF4, "Timing_Compensation_Per_Cylinder_B___", SN_CHECK);
referenceAddress = DfirstB(0xD0DF4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_B___", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_B___\n");
}

MakeNameEx(0xD0DA8, "Timing_Compensation_Per_Cylinder_B_X_AXIS__", SN_CHECK);
MakeNameEx(0xD0DE0, "Timing_Compensation_Per_Cylinder_B_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD0E88, "Timing_Compensation_Per_Cylinder_C___", SN_CHECK);
referenceAddress = DfirstB(0xD0E88);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_C___", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_C___\n");
}

MakeNameEx(0xD0E3C, "Timing_Compensation_Per_Cylinder_C_X_AXIS__", SN_CHECK);
MakeNameEx(0xD0E74, "Timing_Compensation_Per_Cylinder_C_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD0F20, "Timing_Compensation_Per_Cylinder_D___", SN_CHECK);
referenceAddress = DfirstB(0xD0F20);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_D___", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_D___\n");
}

MakeNameEx(0xD0ED0, "Timing_Compensation_Per_Cylinder_D_X_AXIS__", SN_CHECK);
MakeNameEx(0xD0F08, "Timing_Compensation_Per_Cylinder_D_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCF314, "Timing_Comp_Minimum_Load_Per_Cylinder___", SN_CHECK);
MakeNameEx(0xCF310, "Timing_Comp_Maximum_RPM_Per_Cylinder___", SN_CHECK);
MakeNameEx(0xCF318, "Timing_Comp_Minimum_Coolant_Temp_Per_Cylinder___", SN_CHECK);
MakeNameEx(0xCF324, "Feedback_Correction_Range_RPM___", SN_CHECK);
MakeNameEx(0xCF31C, "Feedback_Correction_Minimum_Load___", SN_CHECK);
MakeNameEx(0xCF344, "Feedback_Correction_Retard_Value___", SN_CHECK);
MakeNameEx(0xCF340, "Feedback_Correction_Retard_Limit___", SN_CHECK);
MakeNameEx(0xCF348, "Feedback_Correction_Negative_Advance_Value___", SN_CHECK);
MakeNameEx(0xCF286, "Feedback_Correction_Negative_Advance_Delay___", SN_CHECK);
MakeNameEx(0xCF350, "Extended_Feedback_Correction_High_RPM_Compensation___", SN_CHECK);
MakeNameEx(0xCF4E4, "Fine_Correction_Range_RPM___", SN_CHECK);
MakeNameEx(0xCF4F4, "Fine_Correction_Range_Load___", SN_CHECK);
MakeNameEx(0xCF484, "Fine_Correction_Rows_RPM___", SN_CHECK);
MakeNameEx(0xCF4A0, "Fine_Correction_Columns_Load___", SN_CHECK);
MakeNameEx(0xCF4C8, "Fine_Correction_Retard_Value___", SN_CHECK);
MakeNameEx(0xCF4C4, "Fine_Correction_Retard_Limit___", SN_CHECK);
MakeNameEx(0xCF4C0, "Fine_Correction_Advance_Value___", SN_CHECK);
MakeNameEx(0xCF4BC, "Fine_Correction_Advance_Limit___", SN_CHECK);
MakeNameEx(0xCF296, "Fine_Correction_Advance_Delay___", SN_CHECK);
MakeNameEx(0xCF434, "Rough_Correction_Range_RPM___", SN_CHECK);
MakeNameEx(0xCF444, "Rough_Correction_Range_Load___", SN_CHECK);
MakeNameEx(0xCF454, "Rough_Correction_Minimum_KC_Advance_Map_Value___", SN_CHECK);
MakeNameEx(0xD0310, "Rough_Correction_Learning_Delay_Increasing____", SN_CHECK);
referenceAddress = DfirstB(0xD0310);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Rough_Correction_Learning_Delay_Increasing____", SN_CHECK);
}
else
{
    Message("No reference to Rough_Correction_Learning_Delay_Increasing____\n");
}

MakeNameEx(0xD02E8, "Rough_Correction_Learning_Delay_Increasing_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCF458, "Advance_Multiplier_Initial___", SN_CHECK);
MakeNameEx(0xCF45C, "Advance_Multiplier_Step_Value___", SN_CHECK);
MakeNameEx(0xD6F08, "Intake_Cam_Advance_Angle_Cruise_AVCS___", SN_CHECK);
referenceAddress = DfirstB(0xD6F08);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_Cruise_AVCS___", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_Cruise_AVCS___\n");
}

MakeNameEx(0xD6E80, "Intake_Cam_Advance_Angle_Cruise_AVCS_X_AXIS__", SN_CHECK);
MakeNameEx(0xD6EC8, "Intake_Cam_Advance_Angle_Cruise_AVCS_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD71D0, "Intake_Cam_Advance_Angle_NonCruise_AVCS___", SN_CHECK);
referenceAddress = DfirstB(0xD71D0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_NonCruise_AVCS___", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_NonCruise_AVCS___\n");
}

MakeNameEx(0xD7148, "Intake_Cam_Advance_Angle_NonCruise_AVCS_X_AXIS__", SN_CHECK);
MakeNameEx(0xD7190, "Intake_Cam_Advance_Angle_NonCruise_AVCS_Y_AXIS__", SN_CHECK);
MakeNameEx(0xDD6C8, "Requested_Torque_A_Accelerator_Pedal__", SN_CHECK);
referenceAddress = DfirstB(0xDD6C8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_A_Accelerator_Pedal__", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_A_Accelerator_Pedal__\n");
}

MakeNameEx(0xDD648, "Requested_Torque_A_Accelerator_Pedal_X_AXIS__", SN_CHECK);
MakeNameEx(0xDD684, "Requested_Torque_A_Accelerator_Pedal_Y_AXIS__", SN_CHECK);
MakeNameEx(0xDD948, "Requested_Torque_B_Accelerator_Pedal__", SN_CHECK);
referenceAddress = DfirstB(0xDD948);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_B_Accelerator_Pedal__", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_B_Accelerator_Pedal__\n");
}

MakeNameEx(0xDD8C8, "Requested_Torque_B_Accelerator_Pedal_X_AXIS__", SN_CHECK);
MakeNameEx(0xDD904, "Requested_Torque_B_Accelerator_Pedal_Y_AXIS__", SN_CHECK);
MakeNameEx(0xDDBC8, "Requested_Torque_C_Accelerator_Pedal__", SN_CHECK);
referenceAddress = DfirstB(0xDDBC8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_C_Accelerator_Pedal__", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_C_Accelerator_Pedal__\n");
}

MakeNameEx(0xDDB48, "Requested_Torque_C_Accelerator_Pedal_X_AXIS__", SN_CHECK);
MakeNameEx(0xDDB84, "Requested_Torque_C_Accelerator_Pedal_Y_AXIS__", SN_CHECK);
MakeNameEx(0xDC83C, "Requested_Torque_Base_RPM___", SN_CHECK);
referenceAddress = DfirstB(0xDC83C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Base_RPM___", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Base_RPM___\n");
}

MakeNameEx(0xDC7FC, "Requested_Torque_Base_RPM_Y_AXIS__", SN_CHECK);
MakeNameEx(0xDCCEC, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio___", SN_CHECK);
referenceAddress = DfirstB(0xDCCEC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio___", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio___\n");
}

MakeNameEx(0xDCC6C, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_X_AXIS__", SN_CHECK);
MakeNameEx(0xDCCAC, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_Y_AXIS__", SN_CHECK);
MakeNameEx(0xDCF6C, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio___", SN_CHECK);
referenceAddress = DfirstB(0xDCF6C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio___", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio___\n");
}

MakeNameEx(0xDCEEC, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_X_AXIS__", SN_CHECK);
MakeNameEx(0xDCF2C, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_Y_AXIS__", SN_CHECK);
MakeNameEx(0xDD1EC, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio___", SN_CHECK);
referenceAddress = DfirstB(0xDD1EC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio___", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio___\n");
}

MakeNameEx(0xDD16C, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_X_AXIS__", SN_CHECK);
MakeNameEx(0xDD1AC, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_Y_AXIS__", SN_CHECK);
MakeNameEx(0xC8FEC, "Rev_Limit_Fuel_Cut__", SN_CHECK);
MakeNameEx(0xC8FF4, "Rev_Limit_Fuel_Resume_Boost___", SN_CHECK);
MakeNameEx(0xC903C, "Speed_Limiting_Enable_Fuel_Cut___", SN_CHECK);
MakeNameEx(0xC9044, "Speed_Limiting_Disable_Fuel_Cut___", SN_CHECK);
MakeNameEx(0xDC644, "Speed_Limiting_A_Throttle__", SN_CHECK);
MakeNameEx(0xDC65C, "Speed_Limiting_B_Throttle__", SN_CHECK);
MakeNameEx(0xD5198, "Fuel_Temp_Sensor_Scaling___", SN_CHECK);
referenceAddress = DfirstB(0xD5198);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Fuel_Temp_Sensor_Scaling___", SN_CHECK);
}
else
{
    Message("No reference to Fuel_Temp_Sensor_Scaling___\n");
}

MakeNameEx(0xD5120, "Fuel_Temp_Sensor_Scaling_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD5028, "Intake_Temp_Sensor_Scaling___", SN_CHECK);
referenceAddress = DfirstB(0xD5028);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Intake_Temp_Sensor_Scaling___", SN_CHECK);
}
else
{
    Message("No reference to Intake_Temp_Sensor_Scaling___\n");
}

MakeNameEx(0xD4FB0, "Intake_Temp_Sensor_Scaling_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD4F40, "Coolant_Temp_Sensor_Scaling___", SN_CHECK);
referenceAddress = DfirstB(0xD4F40);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Coolant_Temp_Sensor_Scaling___", SN_CHECK);
}
else
{
    Message("No reference to Coolant_Temp_Sensor_Scaling___\n");
}

MakeNameEx(0xD4ED0, "Coolant_Temp_Sensor_Scaling_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD56B8, "Radiator_Fan_Modes_A_ECT___", SN_CHECK);
MakeNameEx(0xD56C8, "Radiator_Fan_Modes_B_ECT___", SN_CHECK);
MakeNameEx(0xD56D8, "Radiator_Fan_Modes_Veh_Speed___", SN_CHECK);
MakeNameEx(0xC2D8C, "Gear_Determination_Thresholds_A___", SN_CHECK);
MakeNameEx(0xC2DA0, "Gear_Determination_Thresholds_B___", SN_CHECK);
MakeNameEx(0xC2DB4, "Gear_Determination_Thresholds_C___", SN_CHECK);
MakeNameEx(0xD33B8, "Idle_Speed_Target_A___", SN_CHECK);
referenceAddress = DfirstB(0xD33B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_A___", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_A___\n");
}

MakeNameEx(0xD2D6C, "Idle_Speed_Target_A_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD33F8, "Idle_Speed_Target_B___", SN_CHECK);
referenceAddress = DfirstB(0xD33F8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_B___", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_B___\n");
}

MakeNameEx(0xD2D6C, "Idle_Speed_Target_B_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD3438, "Idle_Speed_Target_C___", SN_CHECK);
referenceAddress = DfirstB(0xD3438);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_C___", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_C___\n");
}

MakeNameEx(0xD2D6C, "Idle_Speed_Target_C_Y_AXIS__", SN_CHECK);
MakeNameEx(0x92AD8, "Force_Pass_Readiness_Monitors____", SN_CHECK);
MakeNameEx(0x878F3, "P0000_PASS_CODE_NO_DTC_DETECTED____", SN_CHECK);
MakeNameEx(0x878D7, "P0011_CAMSHAFT_POS_TIMING_OVERADVANCED_1___", SN_CHECK);
MakeNameEx(0x8796A, "P0016_CRANKSHAFTCAMSHAFT_CORRELATION_1A___", SN_CHECK);
MakeNameEx(0x87969, "P0018_CRANKSHAFTCAMSHAFT_CORRELATION_2A___", SN_CHECK);
MakeNameEx(0x878D8, "P0021_CAMSHAFT_POS_TIMING_OVERADVANCED_2___", SN_CHECK);
MakeNameEx(0x87918, "P0030_FRONT_O2_SENSOR_RANGEPERF___", SN_CHECK);
MakeNameEx(0x87902, "P0031_FRONT_O2_SENSOR_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x87900, "P0032_FRONT_O2_SENSOR_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x87901, "P0037_REAR_O2_SENSOR_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x878FF, "P0038_REAR_O2_SENSOR_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x87913, "P0068_MAP_SENSOR_RANGEPERF___", SN_CHECK);
MakeNameEx(0x87914, "P0101_MAF_SENSOR_RANGEPERF___", SN_CHECK);
MakeNameEx(0x878B1, "P0102_MAF_SENSOR_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x878B2, "P0103_MAF_SENSOR_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x87903, "P0107_MAP_SENSOR_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x87904, "P0108_MAP_SENSOR_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x878FE, "P0111_IAT_SENSOR_RANGEPERF___", SN_CHECK);
MakeNameEx(0x878FC, "P0112_IAT_SENSOR_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x878FD, "P0113_IAT_SENSOR_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x878BA, "P0117_COOLANT_TEMP_SENSOR_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x878BB, "P0118_COOLANT_TEMP_SENSOR_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x878B8, "P0122_TPS_A_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x878B9, "P0123_TPS_A_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x878BD, "P0125_INSUFFICIENT_COOLANT_TEMP_FUELING___", SN_CHECK);
MakeNameEx(0x87951, "P0126_INSUFFICIENT_COOLANT_TEMP_OPERATION___", SN_CHECK);
MakeNameEx(0x87909, "P0128_THERMOSTAT_MALFUNCTION___", SN_CHECK);
MakeNameEx(0x878F6, "P0131_FRONT_O2_SENSOR_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x878F8, "P0132_FRONT_O2_SENSOR_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x878E0, "P0133_FRONT_O2_SENSOR_SLOW_RESPONSE___", SN_CHECK);
MakeNameEx(0x87916, "P0134_FRONT_O2_SENSOR_NO_ACTIVITY___", SN_CHECK);
MakeNameEx(0x878F5, "P0137_REAR_O2_SENSOR_LOW_VOLTAGE___", SN_CHECK);
MakeNameEx(0x878FA, "P0138_REAR_O2_SENSOR_HIGH_VOLTAGE___", SN_CHECK);
MakeNameEx(0x878E1, "P0139_REAR_O2_SENSOR_SLOW_RESPONSE__", SN_CHECK);
MakeNameEx(0x87964, "P0140_REAR_O2_SENSOR_NO_ACTIVITY___", SN_CHECK);
MakeNameEx(0x878EA, "P0171_SYSTEM_TOO_LEAN___", SN_CHECK);
MakeNameEx(0x878EB, "P0172_SYSTEM_TOO_RICH___", SN_CHECK);
MakeNameEx(0x878C9, "P0181_FUEL_TEMP_SENSOR_A_RANGEPERF__", SN_CHECK);
MakeNameEx(0x878C7, "P0182_FUEL_TEMP_SENSOR_A_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x878C8, "P0183_FUEL_TEMP_SENSOR_A_HIGH_INPUT__", SN_CHECK);
MakeNameEx(0x87920, "P0222_TPS_B_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x87921, "P0223_TPS_B_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x87912, "P0230_FUEL_PUMP_PRIMARY_CIRCUIT___", SN_CHECK);
MakeNameEx(0x87910, "P0244_WASTEGATE_SOLENOID_A_RANGEPERF___", SN_CHECK);
MakeNameEx(0x8790E, "P0245_WASTEGATE_SOLENOID_A_LOW___", SN_CHECK);
MakeNameEx(0x8790F, "P0246_WASTEGATE_SOLENOID_A_HIGH___", SN_CHECK);
MakeNameEx(0x878EC, "P0301_MISFIRE_CYLINDER_1___", SN_CHECK);
MakeNameEx(0x878ED, "P0302_MISFIRE_CYLINDER_2___", SN_CHECK);
MakeNameEx(0x878EE, "P0303_MISFIRE_CYLINDER_3___", SN_CHECK);
MakeNameEx(0x878EF, "P0304_MISFIRE_CYLINDER_4___", SN_CHECK);
MakeNameEx(0x878B6, "P0327_KNOCK_SENSOR_1_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x878B7, "P0328_KNOCK_SENSOR_1_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x878AC, "P0335_CRANKSHAFT_POS_SENSOR_A_MALFUNCTION___", SN_CHECK);
MakeNameEx(0x878AD, "P0336_CRANKSHAFT_POS_SENSOR_A_RANGEPERF___", SN_CHECK);
MakeNameEx(0x87934, "P0340_CAMSHAFT_POS_SENSOR_A_MALFUNCTION___", SN_CHECK);
MakeNameEx(0x87933, "P0345_CAMSHAFT_POS_SENSOR_A_BANK_2___", SN_CHECK);
MakeNameEx(0x8795E, "P0410_SECONDARY_AIR_PUMP_SYSTEM___", SN_CHECK);
MakeNameEx(0x8795D, "P0411_SECONDARY_AIR_PUMP_INCORRECT_FLOW___", SN_CHECK);
MakeNameEx(0x87962, "P0413_SECONDARY_AIR_PUMP_A_OPEN___", SN_CHECK);
MakeNameEx(0x87967, "P0414_SECONDARY_AIR_PUMP_A_SHORTED___", SN_CHECK);
MakeNameEx(0x87971, "P0416_SECONDARY_AIR_PUMP_B_OPEN___", SN_CHECK);
MakeNameEx(0x87970, "P0417_SECONDARY_AIR_PUMP_B_SHORTED___", SN_CHECK);
MakeNameEx(0x87963, "P0418_SECONDARY_AIR_PUMP_RELAY_A___", SN_CHECK);
MakeNameEx(0x878E6, "P0420_CAT_EFFICIENCY_BELOW_THRESHOLD___", SN_CHECK);
MakeNameEx(0x87977, "P0441_EVAP_INCORRECT_PURGE_FLOW___", SN_CHECK);
MakeNameEx(0x878E7, "P0442_EVAP_LEAK_DETECTED_SMALL__", SN_CHECK);
MakeNameEx(0x878DE, "P0447_EVAP_VENT_CONTROL_CIRCUIT_OPEN__", SN_CHECK);
MakeNameEx(0x878DF, "P0448_EVAP_VENT_CONTROL_CIRCUIT_SHORTED__", SN_CHECK);
MakeNameEx(0x878C5, "P0451_EVAP_PRESSURE_SENSOR_RANGEPERF___", SN_CHECK);
MakeNameEx(0x878C3, "P0452_EVAP_PRESSURE_SENSOR_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x878C4, "P0453_EVAP_PRESSURE_SENSOR_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x878E8, "P0456_EVAP_LEAK_DETECTED_VERY_SMALL___", SN_CHECK);
MakeNameEx(0x878F2, "P0457_EVAP_LEAK_DETECTED_FUEL_CAP__", SN_CHECK);
MakeNameEx(0x878DB, "P0458_EVAP_PURGE_VALVE_CIRCUIT_LOW___", SN_CHECK);
MakeNameEx(0x878DC, "P0459_EVAP_PURGE_VALVE_CIRCUIT_HIGH___", SN_CHECK);
MakeNameEx(0x878C0, "P0461_FUEL_LEVEL_SENSOR_RANGEPERF___", SN_CHECK);
MakeNameEx(0x878BE, "P0462_FUEL_LEVEL_SENSOR_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x878BF, "P0463_FUEL_LEVEL_SENSOR_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x878BC, "P0464_FUEL_LEVEL_SENSOR_INTERMITTENT__", SN_CHECK);
MakeNameEx(0x878B3, "P0500_VEHICLE_SPEED_SENSOR_A___", SN_CHECK);
MakeNameEx(0x878D3, "P0506_IDLE_CONTROL_RPM_LOWER_THAN_EXPECTED___", SN_CHECK);
MakeNameEx(0x878D4, "P0507_IDLE_CONTROL_RPM_HIGH_THAN_EXPECTED___", SN_CHECK);
MakeNameEx(0x878C2, "P0512_STARTER_REQUEST_CIRCUIT___", SN_CHECK);
MakeNameEx(0x87930, "P0600_SERIAL_COMMUNICATION_LINK__", SN_CHECK);
MakeNameEx(0x878B0, "P0604_CONTROL_MODULE_RAM_ERROR___", SN_CHECK);
MakeNameEx(0x87935, "P0605_CONTROL_MODULE_ROM_ERROR___", SN_CHECK);
MakeNameEx(0x87928, "P0607_CONTROL_MODULE_PERFORMANCE___", SN_CHECK);
MakeNameEx(0x87927, "P0638_THROTTLE_ACTUATOR_RANGEPERF___", SN_CHECK);
MakeNameEx(0x87941, "P0700_TRANSMISSION_CONTROL_SYSTEM__", SN_CHECK);
MakeNameEx(0x878C6, "P0851_NEUTRAL_SWITCH_INPUT_LOW___", SN_CHECK);
MakeNameEx(0x878CA, "P0852_NEUTRAL_SWITCH_INPUT_HIGH___", SN_CHECK);
MakeNameEx(0x878E2, "P1152_FRONT_O2_SENSOR_RANGEPERF_LOW_B1_S1___", SN_CHECK);
MakeNameEx(0x878E3, "P1153_FRONT_O2_SENSOR_RANGEPERF_HIGH_B1_S1___", SN_CHECK);
MakeNameEx(0x87922, "P1160_ABNORMAL_RETURN_SPRING___", SN_CHECK);
MakeNameEx(0x878D9, "P1400_FUEL_TANK_PRESSURE_SOL_LOW___", SN_CHECK);
MakeNameEx(0x8796B, "P1410_SECONDARY_AIR_PUMP_VALVE_STUCK_OPEN___", SN_CHECK);
MakeNameEx(0x87968, "P1418_SECONDARY_AIR_PUMP_CIRCUIT_SHORTED___", SN_CHECK);
MakeNameEx(0x878DA, "P1420_FUEL_TANK_PRESSURE_SOL_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x878DD, "P1443_VENT_CONTROL_SOLENOID_FUNCTION_PROBLEM__", SN_CHECK);
MakeNameEx(0x8790A, "P1491_PCV_BLOWBY_FUNCTION_PROBLEM___", SN_CHECK);
MakeNameEx(0x87976, "P1519_IMRC_STUCK_CLOSED___", SN_CHECK);
MakeNameEx(0x87975, "P1520_IMRC_CIRCUIT_MALFUNCTION___", SN_CHECK);
MakeNameEx(0x8790B, "P1560_BACKUP_VOLTAGE_MALFUNCTION___", SN_CHECK);
MakeNameEx(0x87966, "P1602_CONTROL_MODULE_PROGRAMMING_ERROR__", SN_CHECK);
MakeNameEx(0x87974, "P1616_SBDS_INTERACTIVE_CODES___", SN_CHECK);
MakeNameEx(0x8794C, "P2004_TGV_INTAKE_MANIFOLD_RUNNER_1_STUCK_OPEN___", SN_CHECK);
MakeNameEx(0x8794E, "P2005_TGV_INTAKE_MANIFOLD_RUNNER_2_STUCK_OPEN___", SN_CHECK);
MakeNameEx(0x8794D, "P2006_TGV_INTAKE_MANIFOLD_RUNNER_1_STUCK_CLOSED___", SN_CHECK);
MakeNameEx(0x8794F, "P2007_TGV_INTAKE_MANIFOLD_RUNNER_2_STUCK_CLOSED___", SN_CHECK);
MakeNameEx(0x8795A, "P2008_TGV_INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_OPEN___", SN_CHECK);
MakeNameEx(0x87958, "P2009_TGV_INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_LOW___", SN_CHECK);
MakeNameEx(0x8795B, "P2011_TGV_INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_OPEN___", SN_CHECK);
MakeNameEx(0x87959, "P2012_TGV_INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_LOW___", SN_CHECK);
MakeNameEx(0x87954, "P2016_TGV_INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_LOW___", SN_CHECK);
MakeNameEx(0x87955, "P2017_TGV_INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_HIGH___", SN_CHECK);
MakeNameEx(0x87956, "P2021_TGV_INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_LOW___", SN_CHECK);
MakeNameEx(0x87957, "P2022_TGV_INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_HIGH___", SN_CHECK);
MakeNameEx(0x8793D, "P2088_OCV_SOLENOID_A1_CIRCUIT_OPEN___", SN_CHECK);
MakeNameEx(0x8793C, "P2089_OCV_SOLENOID_A1_CIRCUIT_SHORT___", SN_CHECK);
MakeNameEx(0x8793B, "P2092_OCV_SOLENOID_A2_CIRCUIT_OPEN___", SN_CHECK);
MakeNameEx(0x8793A, "P2093_OCV_SOLENOID_A2_CIRCUIT_SHORT___", SN_CHECK);
MakeNameEx(0x87926, "P2096_POST_CATALYST_TOO_LEAN_B1___", SN_CHECK);
MakeNameEx(0x8792F, "P2097_POST_CATALYST_TOO_RICH_B1___", SN_CHECK);
MakeNameEx(0x87925, "P2101_THROTTLE_ACTUATOR_CIRCUIT_RANGEPERF___", SN_CHECK);
MakeNameEx(0x87923, "P2102_THROTTLE_ACTUATOR_CIRCUIT_LOW___", SN_CHECK);
MakeNameEx(0x87924, "P2103_THROTTLE_ACTUATOR_CIRCUIT_HIGH___", SN_CHECK);
MakeNameEx(0x8791F, "P2109_TPS_A_MINIMUM_STOP_PERF___", SN_CHECK);
MakeNameEx(0x8792C, "P2122_TPS_D_CIRCUIT_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x8792D, "P2123_TPS_D_CIRCUIT_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x8792A, "P2127_TPS_E_CIRCUIT_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x8792B, "P2128_TPS_E_CIRCUIT_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x8792E, "P2135_TPS_AB_VOLTAGE___", SN_CHECK);
MakeNameEx(0x87929, "P2138_TPS_DE_VOLTAGE___", SN_CHECK);
MakeNameEx(0x87978, "P2419_EVAP_SWITCHING_VALVE_LOW___", SN_CHECK);
MakeNameEx(0x87979, "P2420_EVAP_SWITCHING_VALVE_HIGH___", SN_CHECK);
MakeNameEx(0x8795F, "P2431_SECONDARY_AIR_PUMP_CIRCUIT_RANGEPERF___", SN_CHECK);
MakeNameEx(0x87961, "P2432_SECONDARY_AIR_PUMP_CIRCUIT_LOW___", SN_CHECK);
MakeNameEx(0x87960, "P2433_SECONDARY_AIR_PUMP_CIRCUIT_HIGH___", SN_CHECK);
MakeNameEx(0x8796F, "P2440_SECONDARY_AIR_PUMP_VALVE_1_STUCK_OPEN___", SN_CHECK);
MakeNameEx(0x8796E, "P2441_SECONDARY_AIR_PUMP_VALVE_1_STUCK_CLOSED___", SN_CHECK);
MakeNameEx(0x8796D, "P2442_SECONDARY_AIR_PUMP_VALVE_2_STUCK_OPEN___", SN_CHECK);
MakeNameEx(0x8796C, "P2443_SECONDARY_AIR_PUMP_2_STUCK_CLOSED___", SN_CHECK);
MakeNameEx(0x8795C, "P2444_SECONDARY_AIR_PUMP_1_STUCK_ON_B1___", SN_CHECK);
MakeNameEx(0xD556C, "Ignition_Dwell____", SN_CHECK);
referenceAddress = DfirstB(0xD556C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Ignition_Dwell____", SN_CHECK);
}
else
{
    Message("No reference to Ignition_Dwell____\n");
}

MakeNameEx(0xD5518, "Ignition_Dwell_X_AXIS___", SN_CHECK);
MakeNameEx(0xD5558, "Ignition_Dwell_Y_AXIS___", SN_CHECK);
MakeNameEx(0xDD470, "Requested_Torque_Limit_A_Per_GearEngine_Speed____", SN_CHECK);
referenceAddress = DfirstB(0xDD470);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Limit_A_Per_GearEngine_Speed____", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Limit_A_Per_GearEngine_Speed____\n");
}

MakeNameEx(0xDD418, "Requested_Torque_Limit_A_Per_GearEngine_Speed_X_AXIS___", SN_CHECK);
MakeNameEx(0xDD458, "Requested_Torque_Limit_A_Per_GearEngine_Speed_Y_AXIS___", SN_CHECK);
MakeNameEx(0xDD588, "Requested_Torque_Limit_B_Per_GearEngine_Speed____", SN_CHECK);
referenceAddress = DfirstB(0xDD588);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Limit_B_Per_GearEngine_Speed____", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Limit_B_Per_GearEngine_Speed____\n");
}

MakeNameEx(0xDD530, "Requested_Torque_Limit_B_Per_GearEngine_Speed_X_AXIS___", SN_CHECK);
MakeNameEx(0xDD570, "Requested_Torque_Limit_B_Per_GearEngine_Speed_Y_AXIS___", SN_CHECK);
MakeNameEx(0x45328, "Fuel_Pump_Duty___", SN_CHECK);
MakeNameEx(0xC0D14, "Target_Boost_____", SN_CHECK);
referenceAddress = DfirstB(0xC0D14);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Boost_____", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_____\n");
}

MakeNameEx(0xC0CAC, "Target_Boost_X_AXIS___", SN_CHECK);
MakeNameEx(0xC0CD8, "Target_Boost_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC06C8, "Target_Boost_Compensation_ECT____", SN_CHECK);
referenceAddress = DfirstB(0xC06C8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_ECT____", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_ECT____\n");
}

MakeNameEx(0xC05E8, "Target_Boost_Compensation_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC05E0, "Target_Boost_Compensation_1st_Gear____", SN_CHECK);
MakeNameEx(0xC05DC, "Target_Boost_Compensation_1st_Gear_Speed_Disable____", SN_CHECK);
MakeNameEx(0xC0810, "Target_Boost_Compensation_IAT_____", SN_CHECK);
referenceAddress = DfirstB(0xC0810);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_IAT_____", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_IAT_____\n");
}

MakeNameEx(0xC07F8, "Target_Boost_Compensation_IAT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC0898, "Target_Boost_Compensation_Atm_Pressure_____", SN_CHECK);
referenceAddress = DfirstB(0xC0898);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_Atm_Pressure_____", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_Atm_Pressure_____\n");
}

MakeNameEx(0xC0868, "Target_Boost_Compensation_Atm_Pressure_X_AXIS___", SN_CHECK);
MakeNameEx(0xC0880, "Target_Boost_Compensation_Atm_Pressure_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCEE54, "Boost_Limit_Fuel_Cut_____", SN_CHECK);
referenceAddress = DfirstB(0xCEE54);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Boost_Limit_Fuel_Cut_____", SN_CHECK);
}
else
{
    Message("No reference to Boost_Limit_Fuel_Cut_____\n");
}

MakeNameEx(0xCEE24, "Boost_Limit_Fuel_Cut_X_AXIS___", SN_CHECK);
MakeNameEx(0xCEE3C, "Boost_Limit_Fuel_Cut_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC05D0, "Boost_Control_Disable_IAM____", SN_CHECK);
MakeNameEx(0xC05CC, "Boost_Control_Disable_Fine_Correction____", SN_CHECK);
MakeNameEx(0xC0581, "Boost_Control_Disable_Delay_Fine_Correction____", SN_CHECK);
MakeNameEx(0xC0B24, "Initial_Wastegate_Duty_____", SN_CHECK);
referenceAddress = DfirstB(0xC0B24);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Initial_Wastegate_Duty_____", SN_CHECK);
}
else
{
    Message("No reference to Initial_Wastegate_Duty_____\n");
}

MakeNameEx(0xC0AB4, "Initial_Wastegate_Duty_X_AXIS___", SN_CHECK);
MakeNameEx(0xC0AF0, "Initial_Wastegate_Duty_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC092C, "Max_Wastegate_Duty_____", SN_CHECK);
referenceAddress = DfirstB(0xC092C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Max_Wastegate_Duty_____", SN_CHECK);
}
else
{
    Message("No reference to Max_Wastegate_Duty_____\n");
}

MakeNameEx(0xC08BC, "Max_Wastegate_Duty_X_AXIS___", SN_CHECK);
MakeNameEx(0xC08F8, "Max_Wastegate_Duty_Y_AXIS___", SN_CHECK);
MakeNameEx(0x13D98, "Max_Wastegate_Duty_Limit_PostCompensation____", SN_CHECK);
MakeNameEx(0xC0668, "InitialMax_Wastegate_Duty_Compensation_IAT____", SN_CHECK);
referenceAddress = DfirstB(0xC0668);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_IAT____", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_IAT____\n");
}

MakeNameEx(0xC0628, "InitialMax_Wastegate_Duty_Compensation_IAT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC0688, "InitialMax_Wastegate_Duty_Compensation_ECT____", SN_CHECK);
referenceAddress = DfirstB(0xC0688);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_ECT____", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_ECT____\n");
}

MakeNameEx(0xC05E8, "InitialMax_Wastegate_Duty_Compensation_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC0850, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure____", SN_CHECK);
referenceAddress = DfirstB(0xC0850);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_Atm_Pressure____", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_Atm_Pressure____\n");
}

MakeNameEx(0xC0828, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_X_AXIS___", SN_CHECK);
MakeNameEx(0xC0840, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC06FC, "Turbo_Dynamics_Proportional____", SN_CHECK);
referenceAddress = DfirstB(0xC06FC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Proportional____", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Proportional____\n");
}

MakeNameEx(0xC06D8, "Turbo_Dynamics_Proportional_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC076C, "Turbo_Dynamics_Integral_Positive____", SN_CHECK);
referenceAddress = DfirstB(0xC076C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Integral_Positive____", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Integral_Positive____\n");
}

MakeNameEx(0xC0748, "Turbo_Dynamics_Integral_Positive_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC0734, "Turbo_Dynamics_Integral_Negative____", SN_CHECK);
referenceAddress = DfirstB(0xC0734);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Integral_Negative____", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Integral_Negative____\n");
}

MakeNameEx(0xC0710, "Turbo_Dynamics_Integral_Negative_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC0698, "TD_Proportional_Compensation_IAT____", SN_CHECK);
referenceAddress = DfirstB(0xC0698);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Proportional_Compensation_IAT____", SN_CHECK);
}
else
{
    Message("No reference to TD_Proportional_Compensation_IAT____\n");
}

MakeNameEx(0xC0628, "TD_Proportional_Compensation_IAT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC06B8, "TD_Integral_Positive_Compensation_IAT____", SN_CHECK);
referenceAddress = DfirstB(0xC06B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Integral_Positive_Compensation_IAT____", SN_CHECK);
}
else
{
    Message("No reference to TD_Integral_Positive_Compensation_IAT____\n");
}

MakeNameEx(0xC0628, "TD_Integral_Positive_Compensation_IAT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC06A8, "TD_Integral_Negative_Compensation_IAT____", SN_CHECK);
referenceAddress = DfirstB(0xC06A8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Integral_Negative_Compensation_IAT____", SN_CHECK);
}
else
{
    Message("No reference to TD_Integral_Negative_Compensation_IAT____\n");
}

MakeNameEx(0xC0628, "TD_Integral_Negative_Compensation_IAT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC05BC, "TD_Activation_Thresholds_RPM____", SN_CHECK);
MakeNameEx(0xC05A8, "TD_Activation_Thresholds_Target_Boost_____", SN_CHECK);
MakeNameEx(0xC05C4, "TD_Integral_Cumulative_Range_WGDC_Correction____", SN_CHECK);
MakeNameEx(0xC05B0, "TD_Integral_Negative_Activation_Boost_Error____", SN_CHECK);
MakeNameEx(0xC05B4, "TD_Integral_Positive_Activation_Boost_Error____", SN_CHECK);
MakeNameEx(0xC05B8, "TD_Integral_Negative_Activation_Wastegate_Duty____", SN_CHECK);
MakeNameEx(0xD4EA4, "Manifold_Pressure_Sensor_Scaling_____", SN_CHECK);
MakeNameEx(0xD4E44, "Manifold_Pressure_Sensor_Limits_CEL____", SN_CHECK);
MakeNameEx(0xC3BF6, "Manifold_Pressure_Sensor_CEL_Delays____", SN_CHECK);
MakeNameEx(0xCC784, "Primary_Open_Loop_Fueling____", SN_CHECK);
referenceAddress = DfirstB(0xCC784);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling____", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling____\n");
}

MakeNameEx(0xCC6F8, "Primary_Open_Loop_Fueling_X_AXIS___", SN_CHECK);
MakeNameEx(0xCC73C, "Primary_Open_Loop_Fueling_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCC944, "Primary_Open_Loop_Fueling_Failsafe____", SN_CHECK);
referenceAddress = DfirstB(0xCC944);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Failsafe____", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Failsafe____\n");
}

MakeNameEx(0xCC8B8, "Primary_Open_Loop_Fueling_Failsafe_X_AXIS___", SN_CHECK);
MakeNameEx(0xCC8FC, "Primary_Open_Loop_Fueling_Failsafe_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC8C68, "Primary_Open_Loop_Fuel_Map_Switch_IAM____", SN_CHECK);
MakeNameEx(0xC8C6C, "Minimum_Active_Primary_Open_Loop_Enrichment____", SN_CHECK);
MakeNameEx(0xC9814, "Minimum_Primary_Open_Loop_Enrichment_Throttle____", SN_CHECK);
referenceAddress = DfirstB(0xC9814);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Throttle____", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Throttle____\n");
}

MakeNameEx(0xC97FC, "Minimum_Primary_Open_Loop_Enrichment_Throttle_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC9834, "Minimum_Primary_Open_Loop_Enrichment_Accelerator____", SN_CHECK);
referenceAddress = DfirstB(0xC9834);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Accelerator____", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Accelerator____\n");
}

MakeNameEx(0xC981C, "Minimum_Primary_Open_Loop_Enrichment_Accelerator_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCB130, "Primary_Open_Loop_Fueling_Compensation_ECT____", SN_CHECK);
referenceAddress = DfirstB(0xCB130);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_ECT____", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_ECT____\n");
}

MakeNameEx(0xC9098, "Primary_Open_Loop_Fueling_Compensation_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC97A4, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_____", SN_CHECK);
referenceAddress = DfirstB(0xC97A4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_____", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_____\n");
}

MakeNameEx(0xC978C, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD53F4, "Front_Oxygen_Sensor_Scaling____", SN_CHECK);
referenceAddress = DfirstB(0xD53F4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Scaling____", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Scaling____\n");
}

MakeNameEx(0xD53C0, "Front_Oxygen_Sensor_Scaling_Y_AXIS___", SN_CHECK);
MakeNameEx(0x2135C, "Front_Oxygen_Sensor_Rich_Limit____", SN_CHECK);
MakeNameEx(0xC3038, "Front_Oxygen_Sensor_Compensation_Atm_Pressure____", SN_CHECK);
referenceAddress = DfirstB(0xC3038);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Compensation_Atm_Pressure____", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Compensation_Atm_Pressure____\n");
}

MakeNameEx(0xC3028, "Front_Oxygen_Sensor_Compensation_Atm_Pressure_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCDF24, "CL_Fueling_Target_Compensation_A_Load____", SN_CHECK);
referenceAddress = DfirstB(0xCDF24);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_A_Load____", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_A_Load____\n");
}

MakeNameEx(0xCDED0, "CL_Fueling_Target_Compensation_A_Load_X_AXIS___", SN_CHECK);
MakeNameEx(0xCDEFC, "CL_Fueling_Target_Compensation_A_Load_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCE184, "CL_Fueling_Target_Compensation_B_Load____", SN_CHECK);
referenceAddress = DfirstB(0xCE184);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_B_Load____", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_B_Load____\n");
}

MakeNameEx(0xCE130, "CL_Fueling_Target_Compensation_B_Load_X_AXIS___", SN_CHECK);
MakeNameEx(0xCE15C, "CL_Fueling_Target_Compensation_B_Load_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCDE04, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT____", SN_CHECK);
referenceAddress = DfirstB(0xCDE04);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Imm_Cruise_ECT____", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Imm_Cruise_ECT____\n");
}

MakeNameEx(0xC9098, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_X_AXIS___", SN_CHECK);
MakeNameEx(0xCDDF8, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCDE70, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT____", SN_CHECK);
referenceAddress = DfirstB(0xCDE70);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Imm_NonCruise_ECT____", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Imm_NonCruise_ECT____\n");
}

MakeNameEx(0xC9098, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_X_AXIS___", SN_CHECK);
MakeNameEx(0xCDE64, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC8778, "CL_to_OL_Delay_____", SN_CHECK);
MakeNameEx(0xC97EC, "CL_to_OL_Transition_with_Delay_Throttle____", SN_CHECK);
referenceAddress = DfirstB(0xC97EC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Throttle____", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Throttle____\n");
}

MakeNameEx(0xC97AC, "CL_to_OL_Transition_with_Delay_Throttle_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC8C74, "CL_to_OL_Transition_with_Delay_Throttle_Hysteresis____", SN_CHECK);
MakeNameEx(0xCB05C, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width____", SN_CHECK);
referenceAddress = DfirstB(0xCB05C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Base_Pulse_Width____", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Base_Pulse_Width____\n");
}

MakeNameEx(0xCB01C, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC8C70, "CL_to_OL_Transition_with_Delay_BPW_Hysteresis____", SN_CHECK);
MakeNameEx(0xCB0A4, "CL_to_OL_Transition_Counter_Step_Value_MAF____", SN_CHECK);
referenceAddress = DfirstB(0xCB0A4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_Counter_Step_Value_MAF____", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_Counter_Step_Value_MAF____\n");
}

MakeNameEx(0xCB07C, "CL_to_OL_Transition_Counter_Step_Value_MAF_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC8CD4, "CL_Delay_Maximum_Throttle____", SN_CHECK);
MakeNameEx(0xC8CF0, "CL_Delay_Maximum_Vehicle_Speed____", SN_CHECK);
MakeNameEx(0xC8C78, "CL_Delay_Minimum_ECT____", SN_CHECK);
MakeNameEx(0xC8D00, "CL_Delay_Maximum_Engine_Load____", SN_CHECK);
MakeNameEx(0xC8770, "CL_Delay_Engine_Load_Counter_Threshold____", SN_CHECK);
MakeNameEx(0xC8C7C, "CL_Delay_Maximum_Engine_Speed_Per_Gear____", SN_CHECK);
MakeNameEx(0xC8CA4, "CL_Delay_Maximum_Engine_Speed_Neutral____", SN_CHECK);
MakeNameEx(0xCDAC0, "Injector_Latency_____", SN_CHECK);
referenceAddress = DfirstB(0xCDAC0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Injector_Latency_____", SN_CHECK);
}
else
{
    Message("No reference to Injector_Latency_____\n");
}

MakeNameEx(0xCDAA0, "Injector_Latency_X_AXIS___", SN_CHECK);
MakeNameEx(0xCDAB4, "Injector_Latency_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC893C, "Injector_Flow_Scaling____", SN_CHECK);
MakeNameEx(0xCD23C, "Per_Injector_Pulse_Width_Compensation_A____", SN_CHECK);
referenceAddress = DfirstB(0xCD23C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_A____", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_A____\n");
}

MakeNameEx(0xCD1B4, "Per_Injector_Pulse_Width_Compensation_A_X_AXIS___", SN_CHECK);
MakeNameEx(0xCD1F8, "Per_Injector_Pulse_Width_Compensation_A_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCD3E8, "Per_Injector_Pulse_Width_Compensation_B____", SN_CHECK);
referenceAddress = DfirstB(0xCD3E8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_B____", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_B____\n");
}

MakeNameEx(0xCD360, "Per_Injector_Pulse_Width_Compensation_B_X_AXIS___", SN_CHECK);
MakeNameEx(0xCD3A4, "Per_Injector_Pulse_Width_Compensation_B_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCD594, "Per_Injector_Pulse_Width_Compensation_C____", SN_CHECK);
referenceAddress = DfirstB(0xCD594);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_C____", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_C____\n");
}

MakeNameEx(0xCD50C, "Per_Injector_Pulse_Width_Compensation_C_X_AXIS___", SN_CHECK);
MakeNameEx(0xCD550, "Per_Injector_Pulse_Width_Compensation_C_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCD740, "Per_Injector_Pulse_Width_Compensation_D____", SN_CHECK);
referenceAddress = DfirstB(0xCD740);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_D____", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_D____\n");
}

MakeNameEx(0xCD6B8, "Per_Injector_Pulse_Width_Compensation_D_X_AXIS___", SN_CHECK);
MakeNameEx(0xCD6FC, "Per_Injector_Pulse_Width_Compensation_D_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC9D5A, "Cranking_Fuel_Injector_Pulse_Width_A_ECT____", SN_CHECK);
referenceAddress = DfirstB(0xC9D5A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_A_ECT____", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_A_ECT____\n");
}

MakeNameEx(0xC9098, "Cranking_Fuel_Injector_Pulse_Width_A_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC9D7A, "Cranking_Fuel_Injector_Pulse_Width_B_ECT____", SN_CHECK);
referenceAddress = DfirstB(0xC9D7A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_B_ECT____", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_B_ECT____\n");
}

MakeNameEx(0xC9098, "Cranking_Fuel_Injector_Pulse_Width_B_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC9D9A, "Cranking_Fuel_Injector_Pulse_Width_C_ECT____", SN_CHECK);
referenceAddress = DfirstB(0xC9D9A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_C_ECT____", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_C_ECT____\n");
}

MakeNameEx(0xC9098, "Cranking_Fuel_Injector_Pulse_Width_C_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC9DBA, "Cranking_Fuel_Injector_Pulse_Width_D_ECT____", SN_CHECK);
referenceAddress = DfirstB(0xC9DBA);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_D_ECT____", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_D_ECT____\n");
}

MakeNameEx(0xC9098, "Cranking_Fuel_Injector_Pulse_Width_D_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC9DDA, "Cranking_Fuel_Injector_Pulse_Width_E_ECT____", SN_CHECK);
referenceAddress = DfirstB(0xC9DDA);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_E_ECT____", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_E_ECT____\n");
}

MakeNameEx(0xC9098, "Cranking_Fuel_Injector_Pulse_Width_E_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC9DFA, "Cranking_Fuel_Injector_Pulse_Width_F_ECT____", SN_CHECK);
referenceAddress = DfirstB(0xC9DFA);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_F_ECT____", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_F_ECT____\n");
}

MakeNameEx(0xC9098, "Cranking_Fuel_Injector_Pulse_Width_F_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCC158, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM____", SN_CHECK);
referenceAddress = DfirstB(0xCC158);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM____", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM____\n");
}

MakeNameEx(0xCC128, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_X_AXIS___", SN_CHECK);
MakeNameEx(0xCC13C, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCC104, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM____", SN_CHECK);
referenceAddress = DfirstB(0xCC104);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM____", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM____\n");
}

MakeNameEx(0xCC0D4, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_X_AXIS___", SN_CHECK);
MakeNameEx(0xCC0E8, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC92DC, "Cranking_Fuel_IPW_Compensation_MAP____", SN_CHECK);
referenceAddress = DfirstB(0xC92DC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_MAP____", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_MAP____\n");
}

MakeNameEx(0xC92B4, "Cranking_Fuel_IPW_Compensation_MAP_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC9310, "Cranking_Fuel_IPW_Compensation_Accelerator____", SN_CHECK);
referenceAddress = DfirstB(0xC9310);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Accelerator____", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Accelerator____\n");
}

MakeNameEx(0xC92E8, "Cranking_Fuel_IPW_Compensation_Accelerator_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC9330, "Cranking_Fuel_IPW_Compensation_IAT____", SN_CHECK);
referenceAddress = DfirstB(0xC9330);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_IAT____", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_IAT____\n");
}

MakeNameEx(0xC931C, "Cranking_Fuel_IPW_Compensation_IAT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCB7B4, "Throttle_Tipin_Enrichment_A____", SN_CHECK);
referenceAddress = DfirstB(0xCB7B4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment_A____", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment_A____\n");
}

MakeNameEx(0xCB76C, "Throttle_Tipin_Enrichment_A_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCB820, "Throttle_Tipin_Enrichment_B____", SN_CHECK);
referenceAddress = DfirstB(0xCB820);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment_B____", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment_B____\n");
}

MakeNameEx(0xCB7D8, "Throttle_Tipin_Enrichment_B_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC8F90, "Minimum_Tipin_Enrichment_Activation____", SN_CHECK);
MakeNameEx(0xC8F8C, "Minimum_Tipin_Enrichment_Activation_Throttle____", SN_CHECK);
MakeNameEx(0xC9BC0, "Tipin_Enrichment_Compensation_Boost_Error____", SN_CHECK);
referenceAddress = DfirstB(0xC9BC0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_Boost_Error____", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_Boost_Error____\n");
}

MakeNameEx(0xC9B9C, "Tipin_Enrichment_Compensation_Boost_Error_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC9B8C, "Tipin_Enrichment_Compensation_RPM____", SN_CHECK);
referenceAddress = DfirstB(0xC9B8C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_RPM____", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_RPM____\n");
}

MakeNameEx(0xC9B4C, "Tipin_Enrichment_Compensation_RPM_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC9BC9, "Tipin_Enrichment_Compensation_A_ECT____", SN_CHECK);
referenceAddress = DfirstB(0xC9BC9);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_A_ECT____", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_A_ECT____\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Compensation_A_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCB844, "Tipin_Enrichment_Compensation_B_ECT____", SN_CHECK);
referenceAddress = DfirstB(0xCB844);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_B_ECT____", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_B_ECT____\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Compensation_B_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCB864, "Tipin_Enrichment_Compensation_C_ECT____", SN_CHECK);
referenceAddress = DfirstB(0xCB864);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_C_ECT____", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_C_ECT____\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Compensation_C_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCB8A4, "Tipin_Enrichment_Compensation_D_ECT____", SN_CHECK);
referenceAddress = DfirstB(0xCB8A4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_D_ECT____", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_D_ECT____\n");
}

MakeNameEx(0xC90D8, "Tipin_Enrichment_Compensation_D_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC8F94, "Tipin_Enrichment_Compensation_D_ECT_Activation____", SN_CHECK);
MakeNameEx(0xC9BD9, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT____", SN_CHECK);
referenceAddress = DfirstB(0xC9BD9);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT____", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT____\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC9BE9, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT____", SN_CHECK);
referenceAddress = DfirstB(0xC9BE9);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT____", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT____\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC8722, "Tipin_Enrichment_Applied_Counter_Reset____", SN_CHECK);
MakeNameEx(0xCB8C4, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT____", SN_CHECK);
referenceAddress = DfirstB(0xCB8C4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT____", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT____\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCB8E4, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT____", SN_CHECK);
referenceAddress = DfirstB(0xCB8E4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT____", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT____\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC8723, "Tipin_Throttle_Cumulative_Reset____", SN_CHECK);
MakeNameEx(0xCC3B0, "Min_Primary_Base_Enrichment_1_Cruise____", SN_CHECK);
referenceAddress = DfirstB(0xCC3B0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_Cruise____", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_Cruise____\n");
}

MakeNameEx(0xC9098, "Min_Primary_Base_Enrichment_1_Cruise_X_AXIS___", SN_CHECK);
MakeNameEx(0xCC38C, "Min_Primary_Base_Enrichment_1_Cruise_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCC30C, "Min_Primary_Base_Enrichment_1_NonCruise____", SN_CHECK);
referenceAddress = DfirstB(0xCC30C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonCruise____", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonCruise____\n");
}

MakeNameEx(0xC9098, "Min_Primary_Base_Enrichment_1_NonCruise_X_AXIS___", SN_CHECK);
MakeNameEx(0xCC2EC, "Min_Primary_Base_Enrichment_1_NonCruise_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC9395, "Min_Primary_Base_Enrichment_1_NonPrimary_OL_____", SN_CHECK);
referenceAddress = DfirstB(0xC9395);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonPrimary_OL_____", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonPrimary_OL_____\n");
}

MakeNameEx(0xC9098, "Min_Primary_Base_Enrichment_1_NonPrimary_OL_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC8B70, "AF_Learning_1_Limits____", SN_CHECK);
MakeNameEx(0xC8B80, "AF_Learning_1_Airflow_Ranges____", SN_CHECK);
MakeNameEx(0xC2B94, "MAF_Limit_Maximum____", SN_CHECK);
MakeNameEx(0xD52E8, "MAF_Sensor_Scaling____", SN_CHECK);
referenceAddress = DfirstB(0xD52E8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_MAF_Sensor_Scaling____", SN_CHECK);
}
else
{
    Message("No reference to MAF_Sensor_Scaling____\n");
}

MakeNameEx(0xD5210, "MAF_Sensor_Scaling_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC330C, "MAF_Compensation_IAT____", SN_CHECK);
referenceAddress = DfirstB(0xC330C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_MAF_Compensation_IAT____", SN_CHECK);
}
else
{
    Message("No reference to MAF_Compensation_IAT____\n");
}

MakeNameEx(0xC32D8, "MAF_Compensation_IAT_X_AXIS___", SN_CHECK);
MakeNameEx(0xC32EC, "MAF_Compensation_IAT_Y_AXIS___", SN_CHECK);
MakeNameEx(0x1FC08, "Engine_Load_Limit_A_Maximum____", SN_CHECK);
MakeNameEx(0xC2F38, "Engine_Load_Limit_B_Maximum_RPM____", SN_CHECK);
referenceAddress = DfirstB(0xC2F38);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Limit_B_Maximum_RPM____", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Limit_B_Maximum_RPM____\n");
}

MakeNameEx(0xC2F30, "Engine_Load_Limit_B_Maximum_RPM_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC3398, "Engine_Load_Compensation_Cruise_MP____", SN_CHECK);
referenceAddress = DfirstB(0xC3398);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Compensation_Cruise_MP____", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Compensation_Cruise_MP____\n");
}

MakeNameEx(0xC3334, "Engine_Load_Compensation_Cruise_MP_X_AXIS___", SN_CHECK);
MakeNameEx(0xC3360, "Engine_Load_Compensation_Cruise_MP_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC3498, "Engine_Load_Compensation_NonCruise_MP____", SN_CHECK);
referenceAddress = DfirstB(0xC3498);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Compensation_NonCruise_MP____", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Compensation_NonCruise_MP____\n");
}

MakeNameEx(0xC3434, "Engine_Load_Compensation_NonCruise_MP_X_AXIS___", SN_CHECK);
MakeNameEx(0xC3460, "Engine_Load_Compensation_NonCruise_MP_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD15B8, "Base_Timing_Primary_Cruise____", SN_CHECK);
referenceAddress = DfirstB(0xD15B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Primary_Cruise____", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Primary_Cruise____\n");
}

MakeNameEx(0xD152C, "Base_Timing_Primary_Cruise_X_AXIS___", SN_CHECK);
MakeNameEx(0xD1570, "Base_Timing_Primary_Cruise_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD1938, "Base_Timing_Reference_Cruise_AVCS_related____", SN_CHECK);
referenceAddress = DfirstB(0xD1938);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Reference_Cruise_AVCS_related____", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Reference_Cruise_AVCS_related____\n");
}

MakeNameEx(0xD18AC, "Base_Timing_Reference_Cruise_AVCS_related_X_AXIS___", SN_CHECK);
MakeNameEx(0xD18F0, "Base_Timing_Reference_Cruise_AVCS_related_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD1778, "Base_Timing_Primary_NonCruise____", SN_CHECK);
referenceAddress = DfirstB(0xD1778);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Primary_NonCruise____", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Primary_NonCruise____\n");
}

MakeNameEx(0xD16EC, "Base_Timing_Primary_NonCruise_X_AXIS___", SN_CHECK);
MakeNameEx(0xD1730, "Base_Timing_Primary_NonCruise_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD1AF8, "Base_Timing_Reference_NonCruise_AVCS_related____", SN_CHECK);
referenceAddress = DfirstB(0xD1AF8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Reference_NonCruise_AVCS_related____", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Reference_NonCruise_AVCS_related____\n");
}

MakeNameEx(0xD1A6C, "Base_Timing_Reference_NonCruise_AVCS_related_X_AXIS___", SN_CHECK);
MakeNameEx(0xD1AB0, "Base_Timing_Reference_NonCruise_AVCS_related_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCFA46, "Base_Timing_Idle_A_InGear____", SN_CHECK);
referenceAddress = DfirstB(0xCFA46);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_A_InGear____", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_A_InGear____\n");
}

MakeNameEx(0xCF7F0, "Base_Timing_Idle_A_InGear_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCFA56, "Base_Timing_Idle_B_InGear____", SN_CHECK);
referenceAddress = DfirstB(0xCFA56);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_B_InGear____", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_B_InGear____\n");
}

MakeNameEx(0xCF7F0, "Base_Timing_Idle_B_InGear_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCFA66, "Base_Timing_Idle_A_Neutral____", SN_CHECK);
referenceAddress = DfirstB(0xCFA66);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_A_Neutral____", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_A_Neutral____\n");
}

MakeNameEx(0xCF7F0, "Base_Timing_Idle_A_Neutral_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCFA76, "Base_Timing_Idle_B_Neutral____", SN_CHECK);
referenceAddress = DfirstB(0xCFA76);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_B_Neutral____", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_B_Neutral____\n");
}

MakeNameEx(0xCF7F0, "Base_Timing_Idle_B_Neutral_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCFA3D, "Base_Timing_Idle_Minimum____", SN_CHECK);
referenceAddress = DfirstB(0xCFA3D);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_Minimum____", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_Minimum____\n");
}

MakeNameEx(0xCF870, "Base_Timing_Idle_Minimum_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCF5EC, "Base_Timing_Idle_Minimum_Vehicle_Speed_Enable____", SN_CHECK);
MakeNameEx(0xD11B4, "Knock_Correction_Advance_Max_Cruise____", SN_CHECK);
referenceAddress = DfirstB(0xD11B4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_Cruise____", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_Cruise____\n");
}

MakeNameEx(0xD1128, "Knock_Correction_Advance_Max_Cruise_X_AXIS___", SN_CHECK);
MakeNameEx(0xD116C, "Knock_Correction_Advance_Max_Cruise_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD1374, "Knock_Correction_Advance_Max_NonCruise____", SN_CHECK);
referenceAddress = DfirstB(0xD1374);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_NonCruise____", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_NonCruise____\n");
}

MakeNameEx(0xD12E8, "Knock_Correction_Advance_Max_NonCruise_X_AXIS___", SN_CHECK);
MakeNameEx(0xD132C, "Knock_Correction_Advance_Max_NonCruise_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCFB28, "Timing_Compensation_A_IAT____", SN_CHECK);
referenceAddress = DfirstB(0xCFB28);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_A_IAT____", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_A_IAT____\n");
}

MakeNameEx(0xCFAE8, "Timing_Compensation_A_IAT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD1C6C, "Timing_Compensation_A_IAT_Activation____", SN_CHECK);
referenceAddress = DfirstB(0xD1C6C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_A_IAT_Activation____", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_A_IAT_Activation____\n");
}

MakeNameEx(0xD1C2C, "Timing_Compensation_A_IAT_Activation_X_AXIS___", SN_CHECK);
MakeNameEx(0xD1C4C, "Timing_Compensation_A_IAT_Activation_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD0120, "Timing_Compensation_B_IAT____", SN_CHECK);
referenceAddress = DfirstB(0xD0120);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_B_IAT____", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_B_IAT____\n");
}

MakeNameEx(0xD00E0, "Timing_Compensation_B_IAT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCF798, "Timing_Compensation_B_IAT_IAM_Activation____", SN_CHECK);
MakeNameEx(0xCF77C, "Timing_Compensation_B_IAT_Max_Additive____", SN_CHECK);
MakeNameEx(0xCFAC6, "Timing_Compensation_Imm_Cruise_A_ECT____", SN_CHECK);
referenceAddress = DfirstB(0xCFAC6);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_Cruise_A_ECT____", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_Cruise_A_ECT____\n");
}

MakeNameEx(0xCF7F0, "Timing_Compensation_Imm_Cruise_A_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCFAD6, "Timing_Compensation_Imm_Cruise_B_ECT____", SN_CHECK);
referenceAddress = DfirstB(0xCFAD6);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_Cruise_B_ECT____", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_Cruise_B_ECT____\n");
}

MakeNameEx(0xCF7F0, "Timing_Compensation_Imm_Cruise_B_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCFAA6, "Timing_Compensation_Imm_NonCruise_A_ECT____", SN_CHECK);
referenceAddress = DfirstB(0xCFAA6);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_NonCruise_A_ECT____", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_NonCruise_A_ECT____\n");
}

MakeNameEx(0xCF7F0, "Timing_Compensation_Imm_NonCruise_A_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCFAB6, "Timing_Compensation_Imm_NonCruise_B_ECT____", SN_CHECK);
referenceAddress = DfirstB(0xCFAB6);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_NonCruise_B_ECT____", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_NonCruise_B_ECT____\n");
}

MakeNameEx(0xCF7F0, "Timing_Compensation_Imm_NonCruise_B_ECT_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD0D60, "Timing_Compensation_Per_Cylinder_A____", SN_CHECK);
referenceAddress = DfirstB(0xD0D60);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_A____", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_A____\n");
}

MakeNameEx(0xD0D14, "Timing_Compensation_Per_Cylinder_A_X_AXIS___", SN_CHECK);
MakeNameEx(0xD0D4C, "Timing_Compensation_Per_Cylinder_A_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD0DF4, "Timing_Compensation_Per_Cylinder_B____", SN_CHECK);
referenceAddress = DfirstB(0xD0DF4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_B____", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_B____\n");
}

MakeNameEx(0xD0DA8, "Timing_Compensation_Per_Cylinder_B_X_AXIS___", SN_CHECK);
MakeNameEx(0xD0DE0, "Timing_Compensation_Per_Cylinder_B_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD0E88, "Timing_Compensation_Per_Cylinder_C____", SN_CHECK);
referenceAddress = DfirstB(0xD0E88);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_C____", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_C____\n");
}

MakeNameEx(0xD0E3C, "Timing_Compensation_Per_Cylinder_C_X_AXIS___", SN_CHECK);
MakeNameEx(0xD0E74, "Timing_Compensation_Per_Cylinder_C_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD0F20, "Timing_Compensation_Per_Cylinder_D____", SN_CHECK);
referenceAddress = DfirstB(0xD0F20);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_D____", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_D____\n");
}

MakeNameEx(0xD0ED0, "Timing_Compensation_Per_Cylinder_D_X_AXIS___", SN_CHECK);
MakeNameEx(0xD0F08, "Timing_Compensation_Per_Cylinder_D_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCF314, "Timing_Comp_Minimum_Load_Per_Cylinder____", SN_CHECK);
MakeNameEx(0xCF310, "Timing_Comp_Maximum_RPM_Per_Cylinder____", SN_CHECK);
MakeNameEx(0xCF318, "Timing_Comp_Minimum_Coolant_Temp_Per_Cylinder____", SN_CHECK);
MakeNameEx(0xCF324, "Feedback_Correction_Range_RPM____", SN_CHECK);
MakeNameEx(0xCF31C, "Feedback_Correction_Minimum_Load____", SN_CHECK);
MakeNameEx(0xCF344, "Feedback_Correction_Retard_Value____", SN_CHECK);
MakeNameEx(0xCF340, "Feedback_Correction_Retard_Limit____", SN_CHECK);
MakeNameEx(0xCF348, "Feedback_Correction_Negative_Advance_Value____", SN_CHECK);
MakeNameEx(0xCF286, "Feedback_Correction_Negative_Advance_Delay____", SN_CHECK);
MakeNameEx(0xCF350, "Extended_Feedback_Correction_High_RPM_Compensation____", SN_CHECK);
MakeNameEx(0xCF4E4, "Fine_Correction_Range_RPM____", SN_CHECK);
MakeNameEx(0xCF4F4, "Fine_Correction_Range_Load____", SN_CHECK);
MakeNameEx(0xCF484, "Fine_Correction_Rows_RPM____", SN_CHECK);
MakeNameEx(0xCF4A0, "Fine_Correction_Columns_Load____", SN_CHECK);
MakeNameEx(0xCF4C8, "Fine_Correction_Retard_Value____", SN_CHECK);
MakeNameEx(0xCF4C4, "Fine_Correction_Retard_Limit____", SN_CHECK);
MakeNameEx(0xCF4C0, "Fine_Correction_Advance_Value____", SN_CHECK);
MakeNameEx(0xCF4BC, "Fine_Correction_Advance_Limit____", SN_CHECK);
MakeNameEx(0xCF296, "Fine_Correction_Advance_Delay____", SN_CHECK);
MakeNameEx(0xCF434, "Rough_Correction_Range_RPM____", SN_CHECK);
MakeNameEx(0xCF444, "Rough_Correction_Range_Load____", SN_CHECK);
MakeNameEx(0xCF454, "Rough_Correction_Minimum_KC_Advance_Map_Value____", SN_CHECK);
MakeNameEx(0xD0310, "Rough_Correction_Learning_Delay_Increasing_____", SN_CHECK);
referenceAddress = DfirstB(0xD0310);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Rough_Correction_Learning_Delay_Increasing_____", SN_CHECK);
}
else
{
    Message("No reference to Rough_Correction_Learning_Delay_Increasing_____\n");
}

MakeNameEx(0xD02E8, "Rough_Correction_Learning_Delay_Increasing_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCF458, "Advance_Multiplier_Initial____", SN_CHECK);
MakeNameEx(0xCF45C, "Advance_Multiplier_Step_Value____", SN_CHECK);
MakeNameEx(0xD6F08, "Intake_Cam_Advance_Angle_Cruise_AVCS____", SN_CHECK);
referenceAddress = DfirstB(0xD6F08);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_Cruise_AVCS____", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_Cruise_AVCS____\n");
}

MakeNameEx(0xD6E80, "Intake_Cam_Advance_Angle_Cruise_AVCS_X_AXIS___", SN_CHECK);
MakeNameEx(0xD6EC8, "Intake_Cam_Advance_Angle_Cruise_AVCS_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD71D0, "Intake_Cam_Advance_Angle_NonCruise_AVCS____", SN_CHECK);
referenceAddress = DfirstB(0xD71D0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_NonCruise_AVCS____", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_NonCruise_AVCS____\n");
}

MakeNameEx(0xD7148, "Intake_Cam_Advance_Angle_NonCruise_AVCS_X_AXIS___", SN_CHECK);
MakeNameEx(0xD7190, "Intake_Cam_Advance_Angle_NonCruise_AVCS_Y_AXIS___", SN_CHECK);
MakeNameEx(0xDD6C8, "Requested_Torque_A_Accelerator_Pedal___", SN_CHECK);
referenceAddress = DfirstB(0xDD6C8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_A_Accelerator_Pedal___", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_A_Accelerator_Pedal___\n");
}

MakeNameEx(0xDD648, "Requested_Torque_A_Accelerator_Pedal_X_AXIS___", SN_CHECK);
MakeNameEx(0xDD684, "Requested_Torque_A_Accelerator_Pedal_Y_AXIS___", SN_CHECK);
MakeNameEx(0xDD948, "Requested_Torque_B_Accelerator_Pedal___", SN_CHECK);
referenceAddress = DfirstB(0xDD948);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_B_Accelerator_Pedal___", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_B_Accelerator_Pedal___\n");
}

MakeNameEx(0xDD8C8, "Requested_Torque_B_Accelerator_Pedal_X_AXIS___", SN_CHECK);
MakeNameEx(0xDD904, "Requested_Torque_B_Accelerator_Pedal_Y_AXIS___", SN_CHECK);
MakeNameEx(0xDDBC8, "Requested_Torque_C_Accelerator_Pedal___", SN_CHECK);
referenceAddress = DfirstB(0xDDBC8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_C_Accelerator_Pedal___", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_C_Accelerator_Pedal___\n");
}

MakeNameEx(0xDDB48, "Requested_Torque_C_Accelerator_Pedal_X_AXIS___", SN_CHECK);
MakeNameEx(0xDDB84, "Requested_Torque_C_Accelerator_Pedal_Y_AXIS___", SN_CHECK);
MakeNameEx(0xDC83C, "Requested_Torque_Base_RPM____", SN_CHECK);
referenceAddress = DfirstB(0xDC83C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Base_RPM____", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Base_RPM____\n");
}

MakeNameEx(0xDC7FC, "Requested_Torque_Base_RPM_Y_AXIS___", SN_CHECK);
MakeNameEx(0xDCCEC, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio____", SN_CHECK);
referenceAddress = DfirstB(0xDCCEC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio____", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio____\n");
}

MakeNameEx(0xDCC6C, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_X_AXIS___", SN_CHECK);
MakeNameEx(0xDCCAC, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_Y_AXIS___", SN_CHECK);
MakeNameEx(0xDCF6C, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio____", SN_CHECK);
referenceAddress = DfirstB(0xDCF6C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio____", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio____\n");
}

MakeNameEx(0xDCEEC, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_X_AXIS___", SN_CHECK);
MakeNameEx(0xDCF2C, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_Y_AXIS___", SN_CHECK);
MakeNameEx(0xDD1EC, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio____", SN_CHECK);
referenceAddress = DfirstB(0xDD1EC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio____", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio____\n");
}

MakeNameEx(0xDD16C, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_X_AXIS___", SN_CHECK);
MakeNameEx(0xDD1AC, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_Y_AXIS___", SN_CHECK);
MakeNameEx(0xC8FEC, "Rev_Limit_Fuel_Cut___", SN_CHECK);
MakeNameEx(0xC8FF4, "Rev_Limit_Fuel_Resume_Boost____", SN_CHECK);
MakeNameEx(0xC903C, "Speed_Limiting_Enable_Fuel_Cut____", SN_CHECK);
MakeNameEx(0xC9044, "Speed_Limiting_Disable_Fuel_Cut____", SN_CHECK);
MakeNameEx(0xDC644, "Speed_Limiting_A_Throttle___", SN_CHECK);
MakeNameEx(0xDC65C, "Speed_Limiting_B_Throttle___", SN_CHECK);
MakeNameEx(0xD5198, "Fuel_Temp_Sensor_Scaling____", SN_CHECK);
referenceAddress = DfirstB(0xD5198);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Fuel_Temp_Sensor_Scaling____", SN_CHECK);
}
else
{
    Message("No reference to Fuel_Temp_Sensor_Scaling____\n");
}

MakeNameEx(0xD5120, "Fuel_Temp_Sensor_Scaling_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD5028, "Intake_Temp_Sensor_Scaling____", SN_CHECK);
referenceAddress = DfirstB(0xD5028);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Intake_Temp_Sensor_Scaling____", SN_CHECK);
}
else
{
    Message("No reference to Intake_Temp_Sensor_Scaling____\n");
}

MakeNameEx(0xD4FB0, "Intake_Temp_Sensor_Scaling_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD4F40, "Coolant_Temp_Sensor_Scaling____", SN_CHECK);
referenceAddress = DfirstB(0xD4F40);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Coolant_Temp_Sensor_Scaling____", SN_CHECK);
}
else
{
    Message("No reference to Coolant_Temp_Sensor_Scaling____\n");
}

MakeNameEx(0xD4ED0, "Coolant_Temp_Sensor_Scaling_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD56B8, "Radiator_Fan_Modes_A_ECT____", SN_CHECK);
MakeNameEx(0xD56C8, "Radiator_Fan_Modes_B_ECT____", SN_CHECK);
MakeNameEx(0xD56D8, "Radiator_Fan_Modes_Veh_Speed____", SN_CHECK);
MakeNameEx(0xC2D8C, "Gear_Determination_Thresholds_A____", SN_CHECK);
MakeNameEx(0xC2DA0, "Gear_Determination_Thresholds_B____", SN_CHECK);
MakeNameEx(0xC2DB4, "Gear_Determination_Thresholds_C____", SN_CHECK);
MakeNameEx(0xD33B8, "Idle_Speed_Target_A____", SN_CHECK);
referenceAddress = DfirstB(0xD33B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_A____", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_A____\n");
}

MakeNameEx(0xD2D6C, "Idle_Speed_Target_A_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD33F8, "Idle_Speed_Target_B____", SN_CHECK);
referenceAddress = DfirstB(0xD33F8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_B____", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_B____\n");
}

MakeNameEx(0xD2D6C, "Idle_Speed_Target_B_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD3438, "Idle_Speed_Target_C____", SN_CHECK);
referenceAddress = DfirstB(0xD3438);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_C____", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_C____\n");
}

MakeNameEx(0xD2D6C, "Idle_Speed_Target_C_Y_AXIS___", SN_CHECK);
MakeNameEx(0x92AD8, "Force_Pass_Readiness_Monitors_____", SN_CHECK);
MakeNameEx(0x878F3, "P0000_PASS_CODE_NO_DTC_DETECTED_____", SN_CHECK);
MakeNameEx(0x878D7, "P0011_CAMSHAFT_POS_TIMING_OVERADVANCED_1____", SN_CHECK);
MakeNameEx(0x8796A, "P0016_CRANKSHAFTCAMSHAFT_CORRELATION_1A____", SN_CHECK);
MakeNameEx(0x87969, "P0018_CRANKSHAFTCAMSHAFT_CORRELATION_2A____", SN_CHECK);
MakeNameEx(0x878D8, "P0021_CAMSHAFT_POS_TIMING_OVERADVANCED_2____", SN_CHECK);
MakeNameEx(0x87918, "P0030_FRONT_O2_SENSOR_RANGEPERF____", SN_CHECK);
MakeNameEx(0x87902, "P0031_FRONT_O2_SENSOR_LOW_INPUT____", SN_CHECK);
MakeNameEx(0x87900, "P0032_FRONT_O2_SENSOR_HIGH_INPUT____", SN_CHECK);
MakeNameEx(0x87901, "P0037_REAR_O2_SENSOR_LOW_INPUT____", SN_CHECK);
MakeNameEx(0x878FF, "P0038_REAR_O2_SENSOR_HIGH_INPUT____", SN_CHECK);
MakeNameEx(0x87913, "P0068_MAP_SENSOR_RANGEPERF____", SN_CHECK);
MakeNameEx(0x87914, "P0101_MAF_SENSOR_RANGEPERF____", SN_CHECK);
MakeNameEx(0x878B1, "P0102_MAF_SENSOR_LOW_INPUT____", SN_CHECK);
MakeNameEx(0x878B2, "P0103_MAF_SENSOR_HIGH_INPUT____", SN_CHECK);
MakeNameEx(0x87903, "P0107_MAP_SENSOR_LOW_INPUT____", SN_CHECK);
MakeNameEx(0x87904, "P0108_MAP_SENSOR_HIGH_INPUT____", SN_CHECK);
MakeNameEx(0x878FE, "P0111_IAT_SENSOR_RANGEPERF____", SN_CHECK);
MakeNameEx(0x878FC, "P0112_IAT_SENSOR_LOW_INPUT____", SN_CHECK);
MakeNameEx(0x878FD, "P0113_IAT_SENSOR_HIGH_INPUT____", SN_CHECK);
MakeNameEx(0x878BA, "P0117_COOLANT_TEMP_SENSOR_LOW_INPUT____", SN_CHECK);
MakeNameEx(0x878BB, "P0118_COOLANT_TEMP_SENSOR_HIGH_INPUT____", SN_CHECK);
MakeNameEx(0x878B8, "P0122_TPS_A_LOW_INPUT____", SN_CHECK);
MakeNameEx(0x878B9, "P0123_TPS_A_HIGH_INPUT____", SN_CHECK);
MakeNameEx(0x878BD, "P0125_INSUFFICIENT_COOLANT_TEMP_FUELING____", SN_CHECK);
MakeNameEx(0x87951, "P0126_INSUFFICIENT_COOLANT_TEMP_OPERATION____", SN_CHECK);
MakeNameEx(0x87909, "P0128_THERMOSTAT_MALFUNCTION____", SN_CHECK);
MakeNameEx(0x878F6, "P0131_FRONT_O2_SENSOR_LOW_INPUT____", SN_CHECK);
MakeNameEx(0x878F8, "P0132_FRONT_O2_SENSOR_HIGH_INPUT____", SN_CHECK);
MakeNameEx(0x878E0, "P0133_FRONT_O2_SENSOR_SLOW_RESPONSE____", SN_CHECK);
MakeNameEx(0x87916, "P0134_FRONT_O2_SENSOR_NO_ACTIVITY____", SN_CHECK);
MakeNameEx(0x878F5, "P0137_REAR_O2_SENSOR_LOW_VOLTAGE____", SN_CHECK);
MakeNameEx(0x878FA, "P0138_REAR_O2_SENSOR_HIGH_VOLTAGE____", SN_CHECK);
MakeNameEx(0x878E1, "P0139_REAR_O2_SENSOR_SLOW_RESPONSE___", SN_CHECK);
MakeNameEx(0x87964, "P0140_REAR_O2_SENSOR_NO_ACTIVITY____", SN_CHECK);
MakeNameEx(0x878EA, "P0171_SYSTEM_TOO_LEAN____", SN_CHECK);
MakeNameEx(0x878EB, "P0172_SYSTEM_TOO_RICH____", SN_CHECK);
MakeNameEx(0x878C9, "P0181_FUEL_TEMP_SENSOR_A_RANGEPERF___", SN_CHECK);
MakeNameEx(0x878C7, "P0182_FUEL_TEMP_SENSOR_A_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x878C8, "P0183_FUEL_TEMP_SENSOR_A_HIGH_INPUT___", SN_CHECK);
MakeNameEx(0x87920, "P0222_TPS_B_LOW_INPUT____", SN_CHECK);
MakeNameEx(0x87921, "P0223_TPS_B_HIGH_INPUT____", SN_CHECK);
MakeNameEx(0x87912, "P0230_FUEL_PUMP_PRIMARY_CIRCUIT____", SN_CHECK);
MakeNameEx(0x87910, "P0244_WASTEGATE_SOLENOID_A_RANGEPERF____", SN_CHECK);
MakeNameEx(0x8790E, "P0245_WASTEGATE_SOLENOID_A_LOW____", SN_CHECK);
MakeNameEx(0x8790F, "P0246_WASTEGATE_SOLENOID_A_HIGH____", SN_CHECK);
MakeNameEx(0x878EC, "P0301_MISFIRE_CYLINDER_1____", SN_CHECK);
MakeNameEx(0x878ED, "P0302_MISFIRE_CYLINDER_2____", SN_CHECK);
MakeNameEx(0x878EE, "P0303_MISFIRE_CYLINDER_3____", SN_CHECK);
MakeNameEx(0x878EF, "P0304_MISFIRE_CYLINDER_4____", SN_CHECK);
MakeNameEx(0x878B6, "P0327_KNOCK_SENSOR_1_LOW_INPUT____", SN_CHECK);
MakeNameEx(0x878B7, "P0328_KNOCK_SENSOR_1_HIGH_INPUT____", SN_CHECK);
MakeNameEx(0x878AC, "P0335_CRANKSHAFT_POS_SENSOR_A_MALFUNCTION____", SN_CHECK);
MakeNameEx(0x878AD, "P0336_CRANKSHAFT_POS_SENSOR_A_RANGEPERF____", SN_CHECK);
MakeNameEx(0x87934, "P0340_CAMSHAFT_POS_SENSOR_A_MALFUNCTION____", SN_CHECK);
MakeNameEx(0x87933, "P0345_CAMSHAFT_POS_SENSOR_A_BANK_2____", SN_CHECK);
MakeNameEx(0x8795E, "P0410_SECONDARY_AIR_PUMP_SYSTEM____", SN_CHECK);
MakeNameEx(0x8795D, "P0411_SECONDARY_AIR_PUMP_INCORRECT_FLOW____", SN_CHECK);
MakeNameEx(0x87962, "P0413_SECONDARY_AIR_PUMP_A_OPEN____", SN_CHECK);
MakeNameEx(0x87967, "P0414_SECONDARY_AIR_PUMP_A_SHORTED____", SN_CHECK);
MakeNameEx(0x87971, "P0416_SECONDARY_AIR_PUMP_B_OPEN____", SN_CHECK);
MakeNameEx(0x87970, "P0417_SECONDARY_AIR_PUMP_B_SHORTED____", SN_CHECK);
MakeNameEx(0x87963, "P0418_SECONDARY_AIR_PUMP_RELAY_A____", SN_CHECK);
MakeNameEx(0x878E6, "P0420_CAT_EFFICIENCY_BELOW_THRESHOLD____", SN_CHECK);
MakeNameEx(0x87977, "P0441_EVAP_INCORRECT_PURGE_FLOW____", SN_CHECK);
MakeNameEx(0x878E7, "P0442_EVAP_LEAK_DETECTED_SMALL___", SN_CHECK);
MakeNameEx(0x878DE, "P0447_EVAP_VENT_CONTROL_CIRCUIT_OPEN___", SN_CHECK);
MakeNameEx(0x878DF, "P0448_EVAP_VENT_CONTROL_CIRCUIT_SHORTED___", SN_CHECK);
MakeNameEx(0x878C5, "P0451_EVAP_PRESSURE_SENSOR_RANGEPERF____", SN_CHECK);
MakeNameEx(0x878C3, "P0452_EVAP_PRESSURE_SENSOR_LOW_INPUT____", SN_CHECK);
MakeNameEx(0x878C4, "P0453_EVAP_PRESSURE_SENSOR_HIGH_INPUT____", SN_CHECK);
MakeNameEx(0x878E8, "P0456_EVAP_LEAK_DETECTED_VERY_SMALL____", SN_CHECK);
MakeNameEx(0x878F2, "P0457_EVAP_LEAK_DETECTED_FUEL_CAP___", SN_CHECK);
MakeNameEx(0x878DB, "P0458_EVAP_PURGE_VALVE_CIRCUIT_LOW____", SN_CHECK);
MakeNameEx(0x878DC, "P0459_EVAP_PURGE_VALVE_CIRCUIT_HIGH____", SN_CHECK);
MakeNameEx(0x878C0, "P0461_FUEL_LEVEL_SENSOR_RANGEPERF____", SN_CHECK);
MakeNameEx(0x878BE, "P0462_FUEL_LEVEL_SENSOR_LOW_INPUT____", SN_CHECK);
MakeNameEx(0x878BF, "P0463_FUEL_LEVEL_SENSOR_HIGH_INPUT____", SN_CHECK);
MakeNameEx(0x878BC, "P0464_FUEL_LEVEL_SENSOR_INTERMITTENT___", SN_CHECK);
MakeNameEx(0x878B3, "P0500_VEHICLE_SPEED_SENSOR_A____", SN_CHECK);
MakeNameEx(0x878D3, "P0506_IDLE_CONTROL_RPM_LOWER_THAN_EXPECTED____", SN_CHECK);
MakeNameEx(0x878D4, "P0507_IDLE_CONTROL_RPM_HIGH_THAN_EXPECTED____", SN_CHECK);
MakeNameEx(0x878C2, "P0512_STARTER_REQUEST_CIRCUIT____", SN_CHECK);
MakeNameEx(0x87930, "P0600_SERIAL_COMMUNICATION_LINK___", SN_CHECK);
MakeNameEx(0x878B0, "P0604_CONTROL_MODULE_RAM_ERROR____", SN_CHECK);
MakeNameEx(0x87935, "P0605_CONTROL_MODULE_ROM_ERROR____", SN_CHECK);
MakeNameEx(0x87928, "P0607_CONTROL_MODULE_PERFORMANCE____", SN_CHECK);
MakeNameEx(0x87927, "P0638_THROTTLE_ACTUATOR_RANGEPERF____", SN_CHECK);
MakeNameEx(0x87941, "P0700_TRANSMISSION_CONTROL_SYSTEM___", SN_CHECK);
MakeNameEx(0x878C6, "P0851_NEUTRAL_SWITCH_INPUT_LOW____", SN_CHECK);
MakeNameEx(0x878CA, "P0852_NEUTRAL_SWITCH_INPUT_HIGH____", SN_CHECK);
MakeNameEx(0x878E2, "P1152_FRONT_O2_SENSOR_RANGEPERF_LOW_B1_S1____", SN_CHECK);
MakeNameEx(0x878E3, "P1153_FRONT_O2_SENSOR_RANGEPERF_HIGH_B1_S1____", SN_CHECK);
MakeNameEx(0x87922, "P1160_ABNORMAL_RETURN_SPRING____", SN_CHECK);
MakeNameEx(0x878D9, "P1400_FUEL_TANK_PRESSURE_SOL_LOW____", SN_CHECK);
MakeNameEx(0x8796B, "P1410_SECONDARY_AIR_PUMP_VALVE_STUCK_OPEN____", SN_CHECK);
MakeNameEx(0x87968, "P1418_SECONDARY_AIR_PUMP_CIRCUIT_SHORTED____", SN_CHECK);
MakeNameEx(0x878DA, "P1420_FUEL_TANK_PRESSURE_SOL_HIGH_INPUT____", SN_CHECK);
MakeNameEx(0x878DD, "P1443_VENT_CONTROL_SOLENOID_FUNCTION_PROBLEM___", SN_CHECK);
MakeNameEx(0x8790A, "P1491_PCV_BLOWBY_FUNCTION_PROBLEM____", SN_CHECK);
MakeNameEx(0x87976, "P1519_IMRC_STUCK_CLOSED____", SN_CHECK);
MakeNameEx(0x87975, "P1520_IMRC_CIRCUIT_MALFUNCTION____", SN_CHECK);
MakeNameEx(0x8790B, "P1560_BACKUP_VOLTAGE_MALFUNCTION____", SN_CHECK);
MakeNameEx(0x87966, "P1602_CONTROL_MODULE_PROGRAMMING_ERROR___", SN_CHECK);
MakeNameEx(0x87974, "P1616_SBDS_INTERACTIVE_CODES____", SN_CHECK);
MakeNameEx(0x8794C, "P2004_TGV_INTAKE_MANIFOLD_RUNNER_1_STUCK_OPEN____", SN_CHECK);
MakeNameEx(0x8794E, "P2005_TGV_INTAKE_MANIFOLD_RUNNER_2_STUCK_OPEN____", SN_CHECK);
MakeNameEx(0x8794D, "P2006_TGV_INTAKE_MANIFOLD_RUNNER_1_STUCK_CLOSED____", SN_CHECK);
MakeNameEx(0x8794F, "P2007_TGV_INTAKE_MANIFOLD_RUNNER_2_STUCK_CLOSED____", SN_CHECK);
MakeNameEx(0x8795A, "P2008_TGV_INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_OPEN____", SN_CHECK);
MakeNameEx(0x87958, "P2009_TGV_INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_LOW____", SN_CHECK);
MakeNameEx(0x8795B, "P2011_TGV_INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_OPEN____", SN_CHECK);
MakeNameEx(0x87959, "P2012_TGV_INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_LOW____", SN_CHECK);
MakeNameEx(0x87954, "P2016_TGV_INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_LOW____", SN_CHECK);
MakeNameEx(0x87955, "P2017_TGV_INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_HIGH____", SN_CHECK);
MakeNameEx(0x87956, "P2021_TGV_INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_LOW____", SN_CHECK);
MakeNameEx(0x87957, "P2022_TGV_INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_HIGH____", SN_CHECK);
MakeNameEx(0x8793D, "P2088_OCV_SOLENOID_A1_CIRCUIT_OPEN____", SN_CHECK);
MakeNameEx(0x8793C, "P2089_OCV_SOLENOID_A1_CIRCUIT_SHORT____", SN_CHECK);
MakeNameEx(0x8793B, "P2092_OCV_SOLENOID_A2_CIRCUIT_OPEN____", SN_CHECK);
MakeNameEx(0x8793A, "P2093_OCV_SOLENOID_A2_CIRCUIT_SHORT____", SN_CHECK);
MakeNameEx(0x87926, "P2096_POST_CATALYST_TOO_LEAN_B1____", SN_CHECK);
MakeNameEx(0x8792F, "P2097_POST_CATALYST_TOO_RICH_B1____", SN_CHECK);
MakeNameEx(0x87925, "P2101_THROTTLE_ACTUATOR_CIRCUIT_RANGEPERF____", SN_CHECK);
MakeNameEx(0x87923, "P2102_THROTTLE_ACTUATOR_CIRCUIT_LOW____", SN_CHECK);
MakeNameEx(0x87924, "P2103_THROTTLE_ACTUATOR_CIRCUIT_HIGH____", SN_CHECK);
MakeNameEx(0x8791F, "P2109_TPS_A_MINIMUM_STOP_PERF____", SN_CHECK);
MakeNameEx(0x8792C, "P2122_TPS_D_CIRCUIT_LOW_INPUT____", SN_CHECK);
MakeNameEx(0x8792D, "P2123_TPS_D_CIRCUIT_HIGH_INPUT____", SN_CHECK);
MakeNameEx(0x8792A, "P2127_TPS_E_CIRCUIT_LOW_INPUT____", SN_CHECK);
MakeNameEx(0x8792B, "P2128_TPS_E_CIRCUIT_HIGH_INPUT____", SN_CHECK);
MakeNameEx(0x8792E, "P2135_TPS_AB_VOLTAGE____", SN_CHECK);
MakeNameEx(0x87929, "P2138_TPS_DE_VOLTAGE____", SN_CHECK);
MakeNameEx(0x87978, "P2419_EVAP_SWITCHING_VALVE_LOW____", SN_CHECK);
MakeNameEx(0x87979, "P2420_EVAP_SWITCHING_VALVE_HIGH____", SN_CHECK);
MakeNameEx(0x8795F, "P2431_SECONDARY_AIR_PUMP_CIRCUIT_RANGEPERF____", SN_CHECK);
MakeNameEx(0x87961, "P2432_SECONDARY_AIR_PUMP_CIRCUIT_LOW____", SN_CHECK);
MakeNameEx(0x87960, "P2433_SECONDARY_AIR_PUMP_CIRCUIT_HIGH____", SN_CHECK);
MakeNameEx(0x8796F, "P2440_SECONDARY_AIR_PUMP_VALVE_1_STUCK_OPEN____", SN_CHECK);
MakeNameEx(0x8796E, "P2441_SECONDARY_AIR_PUMP_VALVE_1_STUCK_CLOSED____", SN_CHECK);
MakeNameEx(0x8796D, "P2442_SECONDARY_AIR_PUMP_VALVE_2_STUCK_OPEN____", SN_CHECK);
MakeNameEx(0x8796C, "P2443_SECONDARY_AIR_PUMP_2_STUCK_CLOSED____", SN_CHECK);
MakeNameEx(0x8795C, "P2444_SECONDARY_AIR_PUMP_1_STUCK_ON_B1____", SN_CHECK);
MakeNameEx(0xD556C, "Ignition_Dwell_____", SN_CHECK);
referenceAddress = DfirstB(0xD556C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Ignition_Dwell_____", SN_CHECK);
}
else
{
    Message("No reference to Ignition_Dwell_____\n");
}

MakeNameEx(0xD5518, "Ignition_Dwell_X_AXIS____", SN_CHECK);
MakeNameEx(0xD5558, "Ignition_Dwell_Y_AXIS____", SN_CHECK);
MakeNameEx(0xDD470, "Requested_Torque_Limit_A_Per_GearEngine_Speed_____", SN_CHECK);
referenceAddress = DfirstB(0xDD470);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Limit_A_Per_GearEngine_Speed_____", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Limit_A_Per_GearEngine_Speed_____\n");
}

MakeNameEx(0xDD418, "Requested_Torque_Limit_A_Per_GearEngine_Speed_X_AXIS____", SN_CHECK);
MakeNameEx(0xDD458, "Requested_Torque_Limit_A_Per_GearEngine_Speed_Y_AXIS____", SN_CHECK);
MakeNameEx(0xDD588, "Requested_Torque_Limit_B_Per_GearEngine_Speed_____", SN_CHECK);
referenceAddress = DfirstB(0xDD588);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Limit_B_Per_GearEngine_Speed_____", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Limit_B_Per_GearEngine_Speed_____\n");
}

MakeNameEx(0xDD530, "Requested_Torque_Limit_B_Per_GearEngine_Speed_X_AXIS____", SN_CHECK);
MakeNameEx(0xDD570, "Requested_Torque_Limit_B_Per_GearEngine_Speed_Y_AXIS____", SN_CHECK);
MakeNameEx(0x45328, "Fuel_Pump_Duty____", SN_CHECK);
MakeNameEx(0xC0D14, "Target_Boost______", SN_CHECK);
referenceAddress = DfirstB(0xC0D14);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Boost______", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost______\n");
}

MakeNameEx(0xC0CAC, "Target_Boost_X_AXIS____", SN_CHECK);
MakeNameEx(0xC0CD8, "Target_Boost_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC06C8, "Target_Boost_Compensation_ECT_____", SN_CHECK);
referenceAddress = DfirstB(0xC06C8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_ECT_____", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_ECT_____\n");
}

MakeNameEx(0xC05E8, "Target_Boost_Compensation_ECT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC05E0, "Target_Boost_Compensation_1st_Gear_____", SN_CHECK);
MakeNameEx(0xC05DC, "Target_Boost_Compensation_1st_Gear_Speed_Disable_____", SN_CHECK);
MakeNameEx(0xC0810, "Target_Boost_Compensation_IAT______", SN_CHECK);
referenceAddress = DfirstB(0xC0810);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_IAT______", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_IAT______\n");
}

MakeNameEx(0xC07F8, "Target_Boost_Compensation_IAT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC0898, "Target_Boost_Compensation_Atm_Pressure______", SN_CHECK);
referenceAddress = DfirstB(0xC0898);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_Atm_Pressure______", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_Atm_Pressure______\n");
}

MakeNameEx(0xC0868, "Target_Boost_Compensation_Atm_Pressure_X_AXIS____", SN_CHECK);
MakeNameEx(0xC0880, "Target_Boost_Compensation_Atm_Pressure_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCEE54, "Boost_Limit_Fuel_Cut______", SN_CHECK);
referenceAddress = DfirstB(0xCEE54);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Boost_Limit_Fuel_Cut______", SN_CHECK);
}
else
{
    Message("No reference to Boost_Limit_Fuel_Cut______\n");
}

MakeNameEx(0xCEE24, "Boost_Limit_Fuel_Cut_X_AXIS____", SN_CHECK);
MakeNameEx(0xCEE3C, "Boost_Limit_Fuel_Cut_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC05D0, "Boost_Control_Disable_IAM_____", SN_CHECK);
MakeNameEx(0xC05CC, "Boost_Control_Disable_Fine_Correction_____", SN_CHECK);
MakeNameEx(0xC0581, "Boost_Control_Disable_Delay_Fine_Correction_____", SN_CHECK);
MakeNameEx(0xC0B24, "Initial_Wastegate_Duty______", SN_CHECK);
referenceAddress = DfirstB(0xC0B24);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Initial_Wastegate_Duty______", SN_CHECK);
}
else
{
    Message("No reference to Initial_Wastegate_Duty______\n");
}

MakeNameEx(0xC0AB4, "Initial_Wastegate_Duty_X_AXIS____", SN_CHECK);
MakeNameEx(0xC0AF0, "Initial_Wastegate_Duty_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC092C, "Max_Wastegate_Duty______", SN_CHECK);
referenceAddress = DfirstB(0xC092C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Max_Wastegate_Duty______", SN_CHECK);
}
else
{
    Message("No reference to Max_Wastegate_Duty______\n");
}

MakeNameEx(0xC08BC, "Max_Wastegate_Duty_X_AXIS____", SN_CHECK);
MakeNameEx(0xC08F8, "Max_Wastegate_Duty_Y_AXIS____", SN_CHECK);
MakeNameEx(0x13D98, "Max_Wastegate_Duty_Limit_PostCompensation_____", SN_CHECK);
MakeNameEx(0xC0668, "InitialMax_Wastegate_Duty_Compensation_IAT_____", SN_CHECK);
referenceAddress = DfirstB(0xC0668);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_IAT_____", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_IAT_____\n");
}

MakeNameEx(0xC0628, "InitialMax_Wastegate_Duty_Compensation_IAT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC0688, "InitialMax_Wastegate_Duty_Compensation_ECT_____", SN_CHECK);
referenceAddress = DfirstB(0xC0688);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_ECT_____", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_ECT_____\n");
}

MakeNameEx(0xC05E8, "InitialMax_Wastegate_Duty_Compensation_ECT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC0850, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_____", SN_CHECK);
referenceAddress = DfirstB(0xC0850);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_____", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_____\n");
}

MakeNameEx(0xC0828, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_X_AXIS____", SN_CHECK);
MakeNameEx(0xC0840, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC06FC, "Turbo_Dynamics_Proportional_____", SN_CHECK);
referenceAddress = DfirstB(0xC06FC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Proportional_____", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Proportional_____\n");
}

MakeNameEx(0xC06D8, "Turbo_Dynamics_Proportional_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC076C, "Turbo_Dynamics_Integral_Positive_____", SN_CHECK);
referenceAddress = DfirstB(0xC076C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Integral_Positive_____", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Integral_Positive_____\n");
}

MakeNameEx(0xC0748, "Turbo_Dynamics_Integral_Positive_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC0734, "Turbo_Dynamics_Integral_Negative_____", SN_CHECK);
referenceAddress = DfirstB(0xC0734);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Integral_Negative_____", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Integral_Negative_____\n");
}

MakeNameEx(0xC0710, "Turbo_Dynamics_Integral_Negative_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC0698, "TD_Proportional_Compensation_IAT_____", SN_CHECK);
referenceAddress = DfirstB(0xC0698);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Proportional_Compensation_IAT_____", SN_CHECK);
}
else
{
    Message("No reference to TD_Proportional_Compensation_IAT_____\n");
}

MakeNameEx(0xC0628, "TD_Proportional_Compensation_IAT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC06B8, "TD_Integral_Positive_Compensation_IAT_____", SN_CHECK);
referenceAddress = DfirstB(0xC06B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Integral_Positive_Compensation_IAT_____", SN_CHECK);
}
else
{
    Message("No reference to TD_Integral_Positive_Compensation_IAT_____\n");
}

MakeNameEx(0xC0628, "TD_Integral_Positive_Compensation_IAT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC06A8, "TD_Integral_Negative_Compensation_IAT_____", SN_CHECK);
referenceAddress = DfirstB(0xC06A8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Integral_Negative_Compensation_IAT_____", SN_CHECK);
}
else
{
    Message("No reference to TD_Integral_Negative_Compensation_IAT_____\n");
}

MakeNameEx(0xC0628, "TD_Integral_Negative_Compensation_IAT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC05BC, "TD_Activation_Thresholds_RPM_____", SN_CHECK);
MakeNameEx(0xC05A8, "TD_Activation_Thresholds_Target_Boost______", SN_CHECK);
MakeNameEx(0xC05C4, "TD_Integral_Cumulative_Range_WGDC_Correction_____", SN_CHECK);
MakeNameEx(0xC05B0, "TD_Integral_Negative_Activation_Boost_Error_____", SN_CHECK);
MakeNameEx(0xC05B4, "TD_Integral_Positive_Activation_Boost_Error_____", SN_CHECK);
MakeNameEx(0xC05B8, "TD_Integral_Negative_Activation_Wastegate_Duty_____", SN_CHECK);
MakeNameEx(0xD4EA4, "Manifold_Pressure_Sensor_Scaling______", SN_CHECK);
MakeNameEx(0xD4E44, "Manifold_Pressure_Sensor_Limits_CEL_____", SN_CHECK);
MakeNameEx(0xC3BF6, "Manifold_Pressure_Sensor_CEL_Delays_____", SN_CHECK);
MakeNameEx(0xCC784, "Primary_Open_Loop_Fueling_____", SN_CHECK);
referenceAddress = DfirstB(0xCC784);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_____", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_____\n");
}

MakeNameEx(0xCC6F8, "Primary_Open_Loop_Fueling_X_AXIS____", SN_CHECK);
MakeNameEx(0xCC73C, "Primary_Open_Loop_Fueling_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCC944, "Primary_Open_Loop_Fueling_Failsafe_____", SN_CHECK);
referenceAddress = DfirstB(0xCC944);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Failsafe_____", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Failsafe_____\n");
}

MakeNameEx(0xCC8B8, "Primary_Open_Loop_Fueling_Failsafe_X_AXIS____", SN_CHECK);
MakeNameEx(0xCC8FC, "Primary_Open_Loop_Fueling_Failsafe_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC8C68, "Primary_Open_Loop_Fuel_Map_Switch_IAM_____", SN_CHECK);
MakeNameEx(0xC8C6C, "Minimum_Active_Primary_Open_Loop_Enrichment_____", SN_CHECK);
MakeNameEx(0xC9814, "Minimum_Primary_Open_Loop_Enrichment_Throttle_____", SN_CHECK);
referenceAddress = DfirstB(0xC9814);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Throttle_____", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Throttle_____\n");
}

MakeNameEx(0xC97FC, "Minimum_Primary_Open_Loop_Enrichment_Throttle_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC9834, "Minimum_Primary_Open_Loop_Enrichment_Accelerator_____", SN_CHECK);
referenceAddress = DfirstB(0xC9834);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Accelerator_____", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Accelerator_____\n");
}

MakeNameEx(0xC981C, "Minimum_Primary_Open_Loop_Enrichment_Accelerator_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCB130, "Primary_Open_Loop_Fueling_Compensation_ECT_____", SN_CHECK);
referenceAddress = DfirstB(0xCB130);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_ECT_____", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_ECT_____\n");
}

MakeNameEx(0xC9098, "Primary_Open_Loop_Fueling_Compensation_ECT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC97A4, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation______", SN_CHECK);
referenceAddress = DfirstB(0xC97A4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_Timing_Compensation______", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_Timing_Compensation______\n");
}

MakeNameEx(0xC978C, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_Y_AXIS____", SN_CHECK);
MakeNameEx(0xD53F4, "Front_Oxygen_Sensor_Scaling_____", SN_CHECK);
referenceAddress = DfirstB(0xD53F4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Scaling_____", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Scaling_____\n");
}

MakeNameEx(0xD53C0, "Front_Oxygen_Sensor_Scaling_Y_AXIS____", SN_CHECK);
MakeNameEx(0x2135C, "Front_Oxygen_Sensor_Rich_Limit_____", SN_CHECK);
MakeNameEx(0xC3038, "Front_Oxygen_Sensor_Compensation_Atm_Pressure_____", SN_CHECK);
referenceAddress = DfirstB(0xC3038);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Compensation_Atm_Pressure_____", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Compensation_Atm_Pressure_____\n");
}

MakeNameEx(0xC3028, "Front_Oxygen_Sensor_Compensation_Atm_Pressure_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCDF24, "CL_Fueling_Target_Compensation_A_Load_____", SN_CHECK);
referenceAddress = DfirstB(0xCDF24);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_A_Load_____", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_A_Load_____\n");
}

MakeNameEx(0xCDED0, "CL_Fueling_Target_Compensation_A_Load_X_AXIS____", SN_CHECK);
MakeNameEx(0xCDEFC, "CL_Fueling_Target_Compensation_A_Load_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCE184, "CL_Fueling_Target_Compensation_B_Load_____", SN_CHECK);
referenceAddress = DfirstB(0xCE184);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_B_Load_____", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_B_Load_____\n");
}

MakeNameEx(0xCE130, "CL_Fueling_Target_Compensation_B_Load_X_AXIS____", SN_CHECK);
MakeNameEx(0xCE15C, "CL_Fueling_Target_Compensation_B_Load_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCDE04, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_____", SN_CHECK);
referenceAddress = DfirstB(0xCDE04);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Imm_Cruise_ECT_____", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Imm_Cruise_ECT_____\n");
}

MakeNameEx(0xC9098, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_X_AXIS____", SN_CHECK);
MakeNameEx(0xCDDF8, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCDE70, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_____", SN_CHECK);
referenceAddress = DfirstB(0xCDE70);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_____", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_____\n");
}

MakeNameEx(0xC9098, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_X_AXIS____", SN_CHECK);
MakeNameEx(0xCDE64, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC8778, "CL_to_OL_Delay______", SN_CHECK);
MakeNameEx(0xC97EC, "CL_to_OL_Transition_with_Delay_Throttle_____", SN_CHECK);
referenceAddress = DfirstB(0xC97EC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Throttle_____", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Throttle_____\n");
}

MakeNameEx(0xC97AC, "CL_to_OL_Transition_with_Delay_Throttle_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC8C74, "CL_to_OL_Transition_with_Delay_Throttle_Hysteresis_____", SN_CHECK);
MakeNameEx(0xCB05C, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width_____", SN_CHECK);
referenceAddress = DfirstB(0xCB05C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Base_Pulse_Width_____", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Base_Pulse_Width_____\n");
}

MakeNameEx(0xCB01C, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC8C70, "CL_to_OL_Transition_with_Delay_BPW_Hysteresis_____", SN_CHECK);
MakeNameEx(0xCB0A4, "CL_to_OL_Transition_Counter_Step_Value_MAF_____", SN_CHECK);
referenceAddress = DfirstB(0xCB0A4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_Counter_Step_Value_MAF_____", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_Counter_Step_Value_MAF_____\n");
}

MakeNameEx(0xCB07C, "CL_to_OL_Transition_Counter_Step_Value_MAF_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC8CD4, "CL_Delay_Maximum_Throttle_____", SN_CHECK);
MakeNameEx(0xC8CF0, "CL_Delay_Maximum_Vehicle_Speed_____", SN_CHECK);
MakeNameEx(0xC8C78, "CL_Delay_Minimum_ECT_____", SN_CHECK);
MakeNameEx(0xC8D00, "CL_Delay_Maximum_Engine_Load_____", SN_CHECK);
MakeNameEx(0xC8770, "CL_Delay_Engine_Load_Counter_Threshold_____", SN_CHECK);
MakeNameEx(0xC8C7C, "CL_Delay_Maximum_Engine_Speed_Per_Gear_____", SN_CHECK);
MakeNameEx(0xC8CA4, "CL_Delay_Maximum_Engine_Speed_Neutral_____", SN_CHECK);
MakeNameEx(0xCDAC0, "Injector_Latency______", SN_CHECK);
referenceAddress = DfirstB(0xCDAC0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Injector_Latency______", SN_CHECK);
}
else
{
    Message("No reference to Injector_Latency______\n");
}

MakeNameEx(0xCDAA0, "Injector_Latency_X_AXIS____", SN_CHECK);
MakeNameEx(0xCDAB4, "Injector_Latency_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC893C, "Injector_Flow_Scaling_____", SN_CHECK);
MakeNameEx(0xCD23C, "Per_Injector_Pulse_Width_Compensation_A_____", SN_CHECK);
referenceAddress = DfirstB(0xCD23C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_A_____", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_A_____\n");
}

MakeNameEx(0xCD1B4, "Per_Injector_Pulse_Width_Compensation_A_X_AXIS____", SN_CHECK);
MakeNameEx(0xCD1F8, "Per_Injector_Pulse_Width_Compensation_A_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCD3E8, "Per_Injector_Pulse_Width_Compensation_B_____", SN_CHECK);
referenceAddress = DfirstB(0xCD3E8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_B_____", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_B_____\n");
}

MakeNameEx(0xCD360, "Per_Injector_Pulse_Width_Compensation_B_X_AXIS____", SN_CHECK);
MakeNameEx(0xCD3A4, "Per_Injector_Pulse_Width_Compensation_B_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCD594, "Per_Injector_Pulse_Width_Compensation_C_____", SN_CHECK);
referenceAddress = DfirstB(0xCD594);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_C_____", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_C_____\n");
}

MakeNameEx(0xCD50C, "Per_Injector_Pulse_Width_Compensation_C_X_AXIS____", SN_CHECK);
MakeNameEx(0xCD550, "Per_Injector_Pulse_Width_Compensation_C_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCD740, "Per_Injector_Pulse_Width_Compensation_D_____", SN_CHECK);
referenceAddress = DfirstB(0xCD740);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_D_____", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_D_____\n");
}

MakeNameEx(0xCD6B8, "Per_Injector_Pulse_Width_Compensation_D_X_AXIS____", SN_CHECK);
MakeNameEx(0xCD6FC, "Per_Injector_Pulse_Width_Compensation_D_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC9D5A, "Cranking_Fuel_Injector_Pulse_Width_A_ECT_____", SN_CHECK);
referenceAddress = DfirstB(0xC9D5A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_A_ECT_____", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_A_ECT_____\n");
}

MakeNameEx(0xC9098, "Cranking_Fuel_Injector_Pulse_Width_A_ECT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC9D7A, "Cranking_Fuel_Injector_Pulse_Width_B_ECT_____", SN_CHECK);
referenceAddress = DfirstB(0xC9D7A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_B_ECT_____", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_B_ECT_____\n");
}

MakeNameEx(0xC9098, "Cranking_Fuel_Injector_Pulse_Width_B_ECT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC9D9A, "Cranking_Fuel_Injector_Pulse_Width_C_ECT_____", SN_CHECK);
referenceAddress = DfirstB(0xC9D9A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_C_ECT_____", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_C_ECT_____\n");
}

MakeNameEx(0xC9098, "Cranking_Fuel_Injector_Pulse_Width_C_ECT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC9DBA, "Cranking_Fuel_Injector_Pulse_Width_D_ECT_____", SN_CHECK);
referenceAddress = DfirstB(0xC9DBA);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_D_ECT_____", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_D_ECT_____\n");
}

MakeNameEx(0xC9098, "Cranking_Fuel_Injector_Pulse_Width_D_ECT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC9DDA, "Cranking_Fuel_Injector_Pulse_Width_E_ECT_____", SN_CHECK);
referenceAddress = DfirstB(0xC9DDA);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_E_ECT_____", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_E_ECT_____\n");
}

MakeNameEx(0xC9098, "Cranking_Fuel_Injector_Pulse_Width_E_ECT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC9DFA, "Cranking_Fuel_Injector_Pulse_Width_F_ECT_____", SN_CHECK);
referenceAddress = DfirstB(0xC9DFA);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_F_ECT_____", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_F_ECT_____\n");
}

MakeNameEx(0xC9098, "Cranking_Fuel_Injector_Pulse_Width_F_ECT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCC158, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_____", SN_CHECK);
referenceAddress = DfirstB(0xCC158);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_____", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_____\n");
}

MakeNameEx(0xCC128, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_X_AXIS____", SN_CHECK);
MakeNameEx(0xCC13C, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCC104, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_____", SN_CHECK);
referenceAddress = DfirstB(0xCC104);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_____", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_____\n");
}

MakeNameEx(0xCC0D4, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_X_AXIS____", SN_CHECK);
MakeNameEx(0xCC0E8, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC92DC, "Cranking_Fuel_IPW_Compensation_MAP_____", SN_CHECK);
referenceAddress = DfirstB(0xC92DC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_MAP_____", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_MAP_____\n");
}

MakeNameEx(0xC92B4, "Cranking_Fuel_IPW_Compensation_MAP_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC9310, "Cranking_Fuel_IPW_Compensation_Accelerator_____", SN_CHECK);
referenceAddress = DfirstB(0xC9310);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Accelerator_____", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Accelerator_____\n");
}

MakeNameEx(0xC92E8, "Cranking_Fuel_IPW_Compensation_Accelerator_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC9330, "Cranking_Fuel_IPW_Compensation_IAT_____", SN_CHECK);
referenceAddress = DfirstB(0xC9330);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_IAT_____", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_IAT_____\n");
}

MakeNameEx(0xC931C, "Cranking_Fuel_IPW_Compensation_IAT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCB7B4, "Throttle_Tipin_Enrichment_A_____", SN_CHECK);
referenceAddress = DfirstB(0xCB7B4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment_A_____", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment_A_____\n");
}

MakeNameEx(0xCB76C, "Throttle_Tipin_Enrichment_A_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCB820, "Throttle_Tipin_Enrichment_B_____", SN_CHECK);
referenceAddress = DfirstB(0xCB820);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment_B_____", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment_B_____\n");
}

MakeNameEx(0xCB7D8, "Throttle_Tipin_Enrichment_B_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC8F90, "Minimum_Tipin_Enrichment_Activation_____", SN_CHECK);
MakeNameEx(0xC8F8C, "Minimum_Tipin_Enrichment_Activation_Throttle_____", SN_CHECK);
MakeNameEx(0xC9BC0, "Tipin_Enrichment_Compensation_Boost_Error_____", SN_CHECK);
referenceAddress = DfirstB(0xC9BC0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_Boost_Error_____", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_Boost_Error_____\n");
}

MakeNameEx(0xC9B9C, "Tipin_Enrichment_Compensation_Boost_Error_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC9B8C, "Tipin_Enrichment_Compensation_RPM_____", SN_CHECK);
referenceAddress = DfirstB(0xC9B8C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_RPM_____", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_RPM_____\n");
}

MakeNameEx(0xC9B4C, "Tipin_Enrichment_Compensation_RPM_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC9BC9, "Tipin_Enrichment_Compensation_A_ECT_____", SN_CHECK);
referenceAddress = DfirstB(0xC9BC9);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_A_ECT_____", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_A_ECT_____\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Compensation_A_ECT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCB844, "Tipin_Enrichment_Compensation_B_ECT_____", SN_CHECK);
referenceAddress = DfirstB(0xCB844);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_B_ECT_____", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_B_ECT_____\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Compensation_B_ECT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCB864, "Tipin_Enrichment_Compensation_C_ECT_____", SN_CHECK);
referenceAddress = DfirstB(0xCB864);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_C_ECT_____", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_C_ECT_____\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Compensation_C_ECT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCB8A4, "Tipin_Enrichment_Compensation_D_ECT_____", SN_CHECK);
referenceAddress = DfirstB(0xCB8A4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_D_ECT_____", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_D_ECT_____\n");
}

MakeNameEx(0xC90D8, "Tipin_Enrichment_Compensation_D_ECT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC8F94, "Tipin_Enrichment_Compensation_D_ECT_Activation_____", SN_CHECK);
MakeNameEx(0xC9BD9, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT_____", SN_CHECK);
referenceAddress = DfirstB(0xC9BD9);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT_____", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT_____\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC9BE9, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT_____", SN_CHECK);
referenceAddress = DfirstB(0xC9BE9);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT_____", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT_____\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC8722, "Tipin_Enrichment_Applied_Counter_Reset_____", SN_CHECK);
MakeNameEx(0xCB8C4, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT_____", SN_CHECK);
referenceAddress = DfirstB(0xCB8C4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT_____", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT_____\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCB8E4, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT_____", SN_CHECK);
referenceAddress = DfirstB(0xCB8E4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT_____", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT_____\n");
}

MakeNameEx(0xC9098, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC8723, "Tipin_Throttle_Cumulative_Reset_____", SN_CHECK);
MakeNameEx(0xCC3B0, "Min_Primary_Base_Enrichment_1_Cruise_____", SN_CHECK);
referenceAddress = DfirstB(0xCC3B0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_Cruise_____", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_Cruise_____\n");
}

MakeNameEx(0xC9098, "Min_Primary_Base_Enrichment_1_Cruise_X_AXIS____", SN_CHECK);
MakeNameEx(0xCC38C, "Min_Primary_Base_Enrichment_1_Cruise_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCC30C, "Min_Primary_Base_Enrichment_1_NonCruise_____", SN_CHECK);
referenceAddress = DfirstB(0xCC30C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonCruise_____", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonCruise_____\n");
}

MakeNameEx(0xC9098, "Min_Primary_Base_Enrichment_1_NonCruise_X_AXIS____", SN_CHECK);
MakeNameEx(0xCC2EC, "Min_Primary_Base_Enrichment_1_NonCruise_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC9395, "Min_Primary_Base_Enrichment_1_NonPrimary_OL______", SN_CHECK);
referenceAddress = DfirstB(0xC9395);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonPrimary_OL______", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonPrimary_OL______\n");
}

MakeNameEx(0xC9098, "Min_Primary_Base_Enrichment_1_NonPrimary_OL_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC8B70, "AF_Learning_1_Limits_____", SN_CHECK);
MakeNameEx(0xC8B80, "AF_Learning_1_Airflow_Ranges_____", SN_CHECK);
MakeNameEx(0xC2B94, "MAF_Limit_Maximum_____", SN_CHECK);
MakeNameEx(0xD52E8, "MAF_Sensor_Scaling_____", SN_CHECK);
referenceAddress = DfirstB(0xD52E8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_MAF_Sensor_Scaling_____", SN_CHECK);
}
else
{
    Message("No reference to MAF_Sensor_Scaling_____\n");
}

MakeNameEx(0xD5210, "MAF_Sensor_Scaling_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC330C, "MAF_Compensation_IAT_____", SN_CHECK);
referenceAddress = DfirstB(0xC330C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_MAF_Compensation_IAT_____", SN_CHECK);
}
else
{
    Message("No reference to MAF_Compensation_IAT_____\n");
}

MakeNameEx(0xC32D8, "MAF_Compensation_IAT_X_AXIS____", SN_CHECK);
MakeNameEx(0xC32EC, "MAF_Compensation_IAT_Y_AXIS____", SN_CHECK);
MakeNameEx(0x1FC08, "Engine_Load_Limit_A_Maximum_____", SN_CHECK);
MakeNameEx(0xC2F38, "Engine_Load_Limit_B_Maximum_RPM_____", SN_CHECK);
referenceAddress = DfirstB(0xC2F38);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Limit_B_Maximum_RPM_____", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Limit_B_Maximum_RPM_____\n");
}

MakeNameEx(0xC2F30, "Engine_Load_Limit_B_Maximum_RPM_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC3398, "Engine_Load_Compensation_Cruise_MP_____", SN_CHECK);
referenceAddress = DfirstB(0xC3398);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Compensation_Cruise_MP_____", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Compensation_Cruise_MP_____\n");
}

MakeNameEx(0xC3334, "Engine_Load_Compensation_Cruise_MP_X_AXIS____", SN_CHECK);
MakeNameEx(0xC3360, "Engine_Load_Compensation_Cruise_MP_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC3498, "Engine_Load_Compensation_NonCruise_MP_____", SN_CHECK);
referenceAddress = DfirstB(0xC3498);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Compensation_NonCruise_MP_____", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Compensation_NonCruise_MP_____\n");
}

MakeNameEx(0xC3434, "Engine_Load_Compensation_NonCruise_MP_X_AXIS____", SN_CHECK);
MakeNameEx(0xC3460, "Engine_Load_Compensation_NonCruise_MP_Y_AXIS____", SN_CHECK);
MakeNameEx(0xD15B8, "Base_Timing_Primary_Cruise_____", SN_CHECK);
referenceAddress = DfirstB(0xD15B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Primary_Cruise_____", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Primary_Cruise_____\n");
}

MakeNameEx(0xD152C, "Base_Timing_Primary_Cruise_X_AXIS____", SN_CHECK);
MakeNameEx(0xD1570, "Base_Timing_Primary_Cruise_Y_AXIS____", SN_CHECK);
MakeNameEx(0xD1938, "Base_Timing_Reference_Cruise_AVCS_related_____", SN_CHECK);
referenceAddress = DfirstB(0xD1938);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Reference_Cruise_AVCS_related_____", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Reference_Cruise_AVCS_related_____\n");
}

MakeNameEx(0xD18AC, "Base_Timing_Reference_Cruise_AVCS_related_X_AXIS____", SN_CHECK);
MakeNameEx(0xD18F0, "Base_Timing_Reference_Cruise_AVCS_related_Y_AXIS____", SN_CHECK);
MakeNameEx(0xD1778, "Base_Timing_Primary_NonCruise_____", SN_CHECK);
referenceAddress = DfirstB(0xD1778);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Primary_NonCruise_____", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Primary_NonCruise_____\n");
}

MakeNameEx(0xD16EC, "Base_Timing_Primary_NonCruise_X_AXIS____", SN_CHECK);
MakeNameEx(0xD1730, "Base_Timing_Primary_NonCruise_Y_AXIS____", SN_CHECK);
MakeNameEx(0xD1AF8, "Base_Timing_Reference_NonCruise_AVCS_related_____", SN_CHECK);
referenceAddress = DfirstB(0xD1AF8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Reference_NonCruise_AVCS_related_____", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Reference_NonCruise_AVCS_related_____\n");
}

MakeNameEx(0xD1A6C, "Base_Timing_Reference_NonCruise_AVCS_related_X_AXIS____", SN_CHECK);
MakeNameEx(0xD1AB0, "Base_Timing_Reference_NonCruise_AVCS_related_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCFA46, "Base_Timing_Idle_A_InGear_____", SN_CHECK);
referenceAddress = DfirstB(0xCFA46);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_A_InGear_____", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_A_InGear_____\n");
}

MakeNameEx(0xCF7F0, "Base_Timing_Idle_A_InGear_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCFA56, "Base_Timing_Idle_B_InGear_____", SN_CHECK);
referenceAddress = DfirstB(0xCFA56);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_B_InGear_____", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_B_InGear_____\n");
}

MakeNameEx(0xCF7F0, "Base_Timing_Idle_B_InGear_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCFA66, "Base_Timing_Idle_A_Neutral_____", SN_CHECK);
referenceAddress = DfirstB(0xCFA66);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_A_Neutral_____", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_A_Neutral_____\n");
}

MakeNameEx(0xCF7F0, "Base_Timing_Idle_A_Neutral_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCFA76, "Base_Timing_Idle_B_Neutral_____", SN_CHECK);
referenceAddress = DfirstB(0xCFA76);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_B_Neutral_____", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_B_Neutral_____\n");
}

MakeNameEx(0xCF7F0, "Base_Timing_Idle_B_Neutral_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCFA3D, "Base_Timing_Idle_Minimum_____", SN_CHECK);
referenceAddress = DfirstB(0xCFA3D);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_Minimum_____", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_Minimum_____\n");
}

MakeNameEx(0xCF870, "Base_Timing_Idle_Minimum_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCF5EC, "Base_Timing_Idle_Minimum_Vehicle_Speed_Enable_____", SN_CHECK);
MakeNameEx(0xD11B4, "Knock_Correction_Advance_Max_Cruise_____", SN_CHECK);
referenceAddress = DfirstB(0xD11B4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_Cruise_____", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_Cruise_____\n");
}

MakeNameEx(0xD1128, "Knock_Correction_Advance_Max_Cruise_X_AXIS____", SN_CHECK);
MakeNameEx(0xD116C, "Knock_Correction_Advance_Max_Cruise_Y_AXIS____", SN_CHECK);
MakeNameEx(0xD1374, "Knock_Correction_Advance_Max_NonCruise_____", SN_CHECK);
referenceAddress = DfirstB(0xD1374);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_NonCruise_____", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_NonCruise_____\n");
}

MakeNameEx(0xD12E8, "Knock_Correction_Advance_Max_NonCruise_X_AXIS____", SN_CHECK);
MakeNameEx(0xD132C, "Knock_Correction_Advance_Max_NonCruise_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCFB28, "Timing_Compensation_A_IAT_____", SN_CHECK);
referenceAddress = DfirstB(0xCFB28);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_A_IAT_____", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_A_IAT_____\n");
}

MakeNameEx(0xCFAE8, "Timing_Compensation_A_IAT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xD1C6C, "Timing_Compensation_A_IAT_Activation_____", SN_CHECK);
referenceAddress = DfirstB(0xD1C6C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_A_IAT_Activation_____", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_A_IAT_Activation_____\n");
}

MakeNameEx(0xD1C2C, "Timing_Compensation_A_IAT_Activation_X_AXIS____", SN_CHECK);
MakeNameEx(0xD1C4C, "Timing_Compensation_A_IAT_Activation_Y_AXIS____", SN_CHECK);
MakeNameEx(0xD0120, "Timing_Compensation_B_IAT_____", SN_CHECK);
referenceAddress = DfirstB(0xD0120);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_B_IAT_____", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_B_IAT_____\n");
}

MakeNameEx(0xD00E0, "Timing_Compensation_B_IAT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCF798, "Timing_Compensation_B_IAT_IAM_Activation_____", SN_CHECK);
MakeNameEx(0xCF77C, "Timing_Compensation_B_IAT_Max_Additive_____", SN_CHECK);
MakeNameEx(0xCFAC6, "Timing_Compensation_Imm_Cruise_A_ECT_____", SN_CHECK);
referenceAddress = DfirstB(0xCFAC6);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_Cruise_A_ECT_____", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_Cruise_A_ECT_____\n");
}

MakeNameEx(0xCF7F0, "Timing_Compensation_Imm_Cruise_A_ECT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCFAD6, "Timing_Compensation_Imm_Cruise_B_ECT_____", SN_CHECK);
referenceAddress = DfirstB(0xCFAD6);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_Cruise_B_ECT_____", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_Cruise_B_ECT_____\n");
}

MakeNameEx(0xCF7F0, "Timing_Compensation_Imm_Cruise_B_ECT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCFAA6, "Timing_Compensation_Imm_NonCruise_A_ECT_____", SN_CHECK);
referenceAddress = DfirstB(0xCFAA6);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_NonCruise_A_ECT_____", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_NonCruise_A_ECT_____\n");
}

MakeNameEx(0xCF7F0, "Timing_Compensation_Imm_NonCruise_A_ECT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCFAB6, "Timing_Compensation_Imm_NonCruise_B_ECT_____", SN_CHECK);
referenceAddress = DfirstB(0xCFAB6);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_NonCruise_B_ECT_____", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_NonCruise_B_ECT_____\n");
}

MakeNameEx(0xCF7F0, "Timing_Compensation_Imm_NonCruise_B_ECT_Y_AXIS____", SN_CHECK);
MakeNameEx(0xD0D60, "Timing_Compensation_Per_Cylinder_A_____", SN_CHECK);
referenceAddress = DfirstB(0xD0D60);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_A_____", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_A_____\n");
}

MakeNameEx(0xD0D14, "Timing_Compensation_Per_Cylinder_A_X_AXIS____", SN_CHECK);
MakeNameEx(0xD0D4C, "Timing_Compensation_Per_Cylinder_A_Y_AXIS____", SN_CHECK);
MakeNameEx(0xD0DF4, "Timing_Compensation_Per_Cylinder_B_____", SN_CHECK);
referenceAddress = DfirstB(0xD0DF4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_B_____", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_B_____\n");
}

MakeNameEx(0xD0DA8, "Timing_Compensation_Per_Cylinder_B_X_AXIS____", SN_CHECK);
MakeNameEx(0xD0DE0, "Timing_Compensation_Per_Cylinder_B_Y_AXIS____", SN_CHECK);
MakeNameEx(0xD0E88, "Timing_Compensation_Per_Cylinder_C_____", SN_CHECK);
referenceAddress = DfirstB(0xD0E88);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_C_____", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_C_____\n");
}

MakeNameEx(0xD0E3C, "Timing_Compensation_Per_Cylinder_C_X_AXIS____", SN_CHECK);
MakeNameEx(0xD0E74, "Timing_Compensation_Per_Cylinder_C_Y_AXIS____", SN_CHECK);
MakeNameEx(0xD0F20, "Timing_Compensation_Per_Cylinder_D_____", SN_CHECK);
referenceAddress = DfirstB(0xD0F20);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_D_____", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_D_____\n");
}

MakeNameEx(0xD0ED0, "Timing_Compensation_Per_Cylinder_D_X_AXIS____", SN_CHECK);
MakeNameEx(0xD0F08, "Timing_Compensation_Per_Cylinder_D_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCF314, "Timing_Comp_Minimum_Load_Per_Cylinder_____", SN_CHECK);
MakeNameEx(0xCF310, "Timing_Comp_Maximum_RPM_Per_Cylinder_____", SN_CHECK);
MakeNameEx(0xCF318, "Timing_Comp_Minimum_Coolant_Temp_Per_Cylinder_____", SN_CHECK);
MakeNameEx(0xCF324, "Feedback_Correction_Range_RPM_____", SN_CHECK);
MakeNameEx(0xCF31C, "Feedback_Correction_Minimum_Load_____", SN_CHECK);
MakeNameEx(0xCF344, "Feedback_Correction_Retard_Value_____", SN_CHECK);
MakeNameEx(0xCF340, "Feedback_Correction_Retard_Limit_____", SN_CHECK);
MakeNameEx(0xCF348, "Feedback_Correction_Negative_Advance_Value_____", SN_CHECK);
MakeNameEx(0xCF286, "Feedback_Correction_Negative_Advance_Delay_____", SN_CHECK);
MakeNameEx(0xCF350, "Extended_Feedback_Correction_High_RPM_Compensation_____", SN_CHECK);
MakeNameEx(0xCF4E4, "Fine_Correction_Range_RPM_____", SN_CHECK);
MakeNameEx(0xCF4F4, "Fine_Correction_Range_Load_____", SN_CHECK);
MakeNameEx(0xCF484, "Fine_Correction_Rows_RPM_____", SN_CHECK);
MakeNameEx(0xCF4A0, "Fine_Correction_Columns_Load_____", SN_CHECK);
MakeNameEx(0xCF4C8, "Fine_Correction_Retard_Value_____", SN_CHECK);
MakeNameEx(0xCF4C4, "Fine_Correction_Retard_Limit_____", SN_CHECK);
MakeNameEx(0xCF4C0, "Fine_Correction_Advance_Value_____", SN_CHECK);
MakeNameEx(0xCF4BC, "Fine_Correction_Advance_Limit_____", SN_CHECK);
MakeNameEx(0xCF296, "Fine_Correction_Advance_Delay_____", SN_CHECK);
MakeNameEx(0xCF434, "Rough_Correction_Range_RPM_____", SN_CHECK);
MakeNameEx(0xCF444, "Rough_Correction_Range_Load_____", SN_CHECK);
MakeNameEx(0xCF454, "Rough_Correction_Minimum_KC_Advance_Map_Value_____", SN_CHECK);
MakeNameEx(0xD0310, "Rough_Correction_Learning_Delay_Increasing______", SN_CHECK);
referenceAddress = DfirstB(0xD0310);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Rough_Correction_Learning_Delay_Increasing______", SN_CHECK);
}
else
{
    Message("No reference to Rough_Correction_Learning_Delay_Increasing______\n");
}

MakeNameEx(0xD02E8, "Rough_Correction_Learning_Delay_Increasing_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCF458, "Advance_Multiplier_Initial_____", SN_CHECK);
MakeNameEx(0xCF45C, "Advance_Multiplier_Step_Value_____", SN_CHECK);
MakeNameEx(0xD6F08, "Intake_Cam_Advance_Angle_Cruise_AVCS_____", SN_CHECK);
referenceAddress = DfirstB(0xD6F08);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_Cruise_AVCS_____", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_Cruise_AVCS_____\n");
}

MakeNameEx(0xD6E80, "Intake_Cam_Advance_Angle_Cruise_AVCS_X_AXIS____", SN_CHECK);
MakeNameEx(0xD6EC8, "Intake_Cam_Advance_Angle_Cruise_AVCS_Y_AXIS____", SN_CHECK);
MakeNameEx(0xD71D0, "Intake_Cam_Advance_Angle_NonCruise_AVCS_____", SN_CHECK);
referenceAddress = DfirstB(0xD71D0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_NonCruise_AVCS_____", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_NonCruise_AVCS_____\n");
}

MakeNameEx(0xD7148, "Intake_Cam_Advance_Angle_NonCruise_AVCS_X_AXIS____", SN_CHECK);
MakeNameEx(0xD7190, "Intake_Cam_Advance_Angle_NonCruise_AVCS_Y_AXIS____", SN_CHECK);
MakeNameEx(0xDD6C8, "Requested_Torque_A_Accelerator_Pedal____", SN_CHECK);
referenceAddress = DfirstB(0xDD6C8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_A_Accelerator_Pedal____", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_A_Accelerator_Pedal____\n");
}

MakeNameEx(0xDD648, "Requested_Torque_A_Accelerator_Pedal_X_AXIS____", SN_CHECK);
MakeNameEx(0xDD684, "Requested_Torque_A_Accelerator_Pedal_Y_AXIS____", SN_CHECK);
MakeNameEx(0xDD948, "Requested_Torque_B_Accelerator_Pedal____", SN_CHECK);
referenceAddress = DfirstB(0xDD948);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_B_Accelerator_Pedal____", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_B_Accelerator_Pedal____\n");
}

MakeNameEx(0xDD8C8, "Requested_Torque_B_Accelerator_Pedal_X_AXIS____", SN_CHECK);
MakeNameEx(0xDD904, "Requested_Torque_B_Accelerator_Pedal_Y_AXIS____", SN_CHECK);
MakeNameEx(0xDDBC8, "Requested_Torque_C_Accelerator_Pedal____", SN_CHECK);
referenceAddress = DfirstB(0xDDBC8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_C_Accelerator_Pedal____", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_C_Accelerator_Pedal____\n");
}

MakeNameEx(0xDDB48, "Requested_Torque_C_Accelerator_Pedal_X_AXIS____", SN_CHECK);
MakeNameEx(0xDDB84, "Requested_Torque_C_Accelerator_Pedal_Y_AXIS____", SN_CHECK);
MakeNameEx(0xDC83C, "Requested_Torque_Base_RPM_____", SN_CHECK);
referenceAddress = DfirstB(0xDC83C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Base_RPM_____", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Base_RPM_____\n");
}

MakeNameEx(0xDC7FC, "Requested_Torque_Base_RPM_Y_AXIS____", SN_CHECK);
MakeNameEx(0xDCCEC, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_____", SN_CHECK);
referenceAddress = DfirstB(0xDCCEC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_____", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_____\n");
}

MakeNameEx(0xDCC6C, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_X_AXIS____", SN_CHECK);
MakeNameEx(0xDCCAC, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_Y_AXIS____", SN_CHECK);
MakeNameEx(0xDCF6C, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_____", SN_CHECK);
referenceAddress = DfirstB(0xDCF6C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_____", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_____\n");
}

MakeNameEx(0xDCEEC, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_X_AXIS____", SN_CHECK);
MakeNameEx(0xDCF2C, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_Y_AXIS____", SN_CHECK);
MakeNameEx(0xDD1EC, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_____", SN_CHECK);
referenceAddress = DfirstB(0xDD1EC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_____", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_____\n");
}

MakeNameEx(0xDD16C, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_X_AXIS____", SN_CHECK);
MakeNameEx(0xDD1AC, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_Y_AXIS____", SN_CHECK);
MakeNameEx(0xC8FEC, "Rev_Limit_Fuel_Cut____", SN_CHECK);
MakeNameEx(0xC8FF4, "Rev_Limit_Fuel_Resume_Boost_____", SN_CHECK);
MakeNameEx(0xC903C, "Speed_Limiting_Enable_Fuel_Cut_____", SN_CHECK);
MakeNameEx(0xC9044, "Speed_Limiting_Disable_Fuel_Cut_____", SN_CHECK);
MakeNameEx(0xDC644, "Speed_Limiting_A_Throttle____", SN_CHECK);
MakeNameEx(0xDC65C, "Speed_Limiting_B_Throttle____", SN_CHECK);
MakeNameEx(0xD5198, "Fuel_Temp_Sensor_Scaling_____", SN_CHECK);
referenceAddress = DfirstB(0xD5198);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Fuel_Temp_Sensor_Scaling_____", SN_CHECK);
}
else
{
    Message("No reference to Fuel_Temp_Sensor_Scaling_____\n");
}

MakeNameEx(0xD5120, "Fuel_Temp_Sensor_Scaling_Y_AXIS____", SN_CHECK);
MakeNameEx(0xD5028, "Intake_Temp_Sensor_Scaling_____", SN_CHECK);
referenceAddress = DfirstB(0xD5028);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Intake_Temp_Sensor_Scaling_____", SN_CHECK);
}
else
{
    Message("No reference to Intake_Temp_Sensor_Scaling_____\n");
}

MakeNameEx(0xD4FB0, "Intake_Temp_Sensor_Scaling_Y_AXIS____", SN_CHECK);
MakeNameEx(0xD4F40, "Coolant_Temp_Sensor_Scaling_____", SN_CHECK);
referenceAddress = DfirstB(0xD4F40);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Coolant_Temp_Sensor_Scaling_____", SN_CHECK);
}
else
{
    Message("No reference to Coolant_Temp_Sensor_Scaling_____\n");
}

MakeNameEx(0xD4ED0, "Coolant_Temp_Sensor_Scaling_Y_AXIS____", SN_CHECK);
MakeNameEx(0xD56B8, "Radiator_Fan_Modes_A_ECT_____", SN_CHECK);
MakeNameEx(0xD56C8, "Radiator_Fan_Modes_B_ECT_____", SN_CHECK);
MakeNameEx(0xD56D8, "Radiator_Fan_Modes_Veh_Speed_____", SN_CHECK);
MakeNameEx(0xC2D8C, "Gear_Determination_Thresholds_A_____", SN_CHECK);
MakeNameEx(0xC2DA0, "Gear_Determination_Thresholds_B_____", SN_CHECK);
MakeNameEx(0xC2DB4, "Gear_Determination_Thresholds_C_____", SN_CHECK);
MakeNameEx(0xD33B8, "Idle_Speed_Target_A_____", SN_CHECK);
referenceAddress = DfirstB(0xD33B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_A_____", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_A_____\n");
}

MakeNameEx(0xD2D6C, "Idle_Speed_Target_A_Y_AXIS____", SN_CHECK);
MakeNameEx(0xD33F8, "Idle_Speed_Target_B_____", SN_CHECK);
referenceAddress = DfirstB(0xD33F8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_B_____", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_B_____\n");
}

MakeNameEx(0xD2D6C, "Idle_Speed_Target_B_Y_AXIS____", SN_CHECK);
MakeNameEx(0xD3438, "Idle_Speed_Target_C_____", SN_CHECK);
referenceAddress = DfirstB(0xD3438);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_C_____", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_C_____\n");
}

MakeNameEx(0xD2D6C, "Idle_Speed_Target_C_Y_AXIS____", SN_CHECK);
MakeNameEx(0x92AD8, "Force_Pass_Readiness_Monitors______", SN_CHECK);
MakeNameEx(0x878F3, "P0000_PASS_CODE_NO_DTC_DETECTED______", SN_CHECK);
MakeNameEx(0x878D7, "P0011_CAMSHAFT_POS_TIMING_OVERADVANCED_1_____", SN_CHECK);
MakeNameEx(0x8796A, "P0016_CRANKSHAFTCAMSHAFT_CORRELATION_1A_____", SN_CHECK);
MakeNameEx(0x87969, "P0018_CRANKSHAFTCAMSHAFT_CORRELATION_2A_____", SN_CHECK);
MakeNameEx(0x878D8, "P0021_CAMSHAFT_POS_TIMING_OVERADVANCED_2_____", SN_CHECK);
MakeNameEx(0x87918, "P0030_FRONT_O2_SENSOR_RANGEPERF_____", SN_CHECK);
MakeNameEx(0x87902, "P0031_FRONT_O2_SENSOR_LOW_INPUT_____", SN_CHECK);
MakeNameEx(0x87900, "P0032_FRONT_O2_SENSOR_HIGH_INPUT_____", SN_CHECK);
MakeNameEx(0x87901, "P0037_REAR_O2_SENSOR_LOW_INPUT_____", SN_CHECK);
MakeNameEx(0x878FF, "P0038_REAR_O2_SENSOR_HIGH_INPUT_____", SN_CHECK);
MakeNameEx(0x87913, "P0068_MAP_SENSOR_RANGEPERF_____", SN_CHECK);
MakeNameEx(0x87914, "P0101_MAF_SENSOR_RANGEPERF_____", SN_CHECK);
MakeNameEx(0x878B1, "P0102_MAF_SENSOR_LOW_INPUT_____", SN_CHECK);
MakeNameEx(0x878B2, "P0103_MAF_SENSOR_HIGH_INPUT_____", SN_CHECK);
MakeNameEx(0x87903, "P0107_MAP_SENSOR_LOW_INPUT_____", SN_CHECK);
MakeNameEx(0x87904, "P0108_MAP_SENSOR_HIGH_INPUT_____", SN_CHECK);
MakeNameEx(0x878FE, "P0111_IAT_SENSOR_RANGEPERF_____", SN_CHECK);
MakeNameEx(0x878FC, "P0112_IAT_SENSOR_LOW_INPUT_____", SN_CHECK);
MakeNameEx(0x878FD, "P0113_IAT_SENSOR_HIGH_INPUT_____", SN_CHECK);
MakeNameEx(0x878BA, "P0117_COOLANT_TEMP_SENSOR_LOW_INPUT_____", SN_CHECK);
MakeNameEx(0x878BB, "P0118_COOLANT_TEMP_SENSOR_HIGH_INPUT_____", SN_CHECK);
MakeNameEx(0x878B8, "P0122_TPS_A_LOW_INPUT_____", SN_CHECK);
MakeNameEx(0x878B9, "P0123_TPS_A_HIGH_INPUT_____", SN_CHECK);
MakeNameEx(0x878BD, "P0125_INSUFFICIENT_COOLANT_TEMP_FUELING_____", SN_CHECK);
MakeNameEx(0x87951, "P0126_INSUFFICIENT_COOLANT_TEMP_OPERATION_____", SN_CHECK);
MakeNameEx(0x87909, "P0128_THERMOSTAT_MALFUNCTION_____", SN_CHECK);
MakeNameEx(0x878F6, "P0131_FRONT_O2_SENSOR_LOW_INPUT_____", SN_CHECK);
MakeNameEx(0x878F8, "P0132_FRONT_O2_SENSOR_HIGH_INPUT_____", SN_CHECK);
MakeNameEx(0x878E0, "P0133_FRONT_O2_SENSOR_SLOW_RESPONSE_____", SN_CHECK);
MakeNameEx(0x87916, "P0134_FRONT_O2_SENSOR_NO_ACTIVITY_____", SN_CHECK);
MakeNameEx(0x878F5, "P0137_REAR_O2_SENSOR_LOW_VOLTAGE_____", SN_CHECK);
MakeNameEx(0x878FA, "P0138_REAR_O2_SENSOR_HIGH_VOLTAGE_____", SN_CHECK);
MakeNameEx(0x878E1, "P0139_REAR_O2_SENSOR_SLOW_RESPONSE____", SN_CHECK);
MakeNameEx(0x87964, "P0140_REAR_O2_SENSOR_NO_ACTIVITY_____", SN_CHECK);
MakeNameEx(0x878EA, "P0171_SYSTEM_TOO_LEAN_____", SN_CHECK);
MakeNameEx(0x878EB, "P0172_SYSTEM_TOO_RICH_____", SN_CHECK);
MakeNameEx(0x878C9, "P0181_FUEL_TEMP_SENSOR_A_RANGEPERF____", SN_CHECK);
MakeNameEx(0x878C7, "P0182_FUEL_TEMP_SENSOR_A_LOW_INPUT____", SN_CHECK);
MakeNameEx(0x878C8, "P0183_FUEL_TEMP_SENSOR_A_HIGH_INPUT____", SN_CHECK);
MakeNameEx(0x87920, "P0222_TPS_B_LOW_INPUT_____", SN_CHECK);
MakeNameEx(0x87921, "P0223_TPS_B_HIGH_INPUT_____", SN_CHECK);
MakeNameEx(0x87912, "P0230_FUEL_PUMP_PRIMARY_CIRCUIT_____", SN_CHECK);
MakeNameEx(0x87910, "P0244_WASTEGATE_SOLENOID_A_RANGEPERF_____", SN_CHECK);
MakeNameEx(0x8790E, "P0245_WASTEGATE_SOLENOID_A_LOW_____", SN_CHECK);
MakeNameEx(0x8790F, "P0246_WASTEGATE_SOLENOID_A_HIGH_____", SN_CHECK);
MakeNameEx(0x878EC, "P0301_MISFIRE_CYLINDER_1_____", SN_CHECK);
MakeNameEx(0x878ED, "P0302_MISFIRE_CYLINDER_2_____", SN_CHECK);
MakeNameEx(0x878EE, "P0303_MISFIRE_CYLINDER_3_____", SN_CHECK);
MakeNameEx(0x878EF, "P0304_MISFIRE_CYLINDER_4_____", SN_CHECK);
MakeNameEx(0x878B6, "P0327_KNOCK_SENSOR_1_LOW_INPUT_____", SN_CHECK);
MakeNameEx(0x878B7, "P0328_KNOCK_SENSOR_1_HIGH_INPUT_____", SN_CHECK);
MakeNameEx(0x878AC, "P0335_CRANKSHAFT_POS_SENSOR_A_MALFUNCTION_____", SN_CHECK);
MakeNameEx(0x878AD, "P0336_CRANKSHAFT_POS_SENSOR_A_RANGEPERF_____", SN_CHECK);
MakeNameEx(0x87934, "P0340_CAMSHAFT_POS_SENSOR_A_MALFUNCTION_____", SN_CHECK);
MakeNameEx(0x87933, "P0345_CAMSHAFT_POS_SENSOR_A_BANK_2_____", SN_CHECK);
MakeNameEx(0x8795E, "P0410_SECONDARY_AIR_PUMP_SYSTEM_____", SN_CHECK);
MakeNameEx(0x8795D, "P0411_SECONDARY_AIR_PUMP_INCORRECT_FLOW_____", SN_CHECK);
MakeNameEx(0x87962, "P0413_SECONDARY_AIR_PUMP_A_OPEN_____", SN_CHECK);
MakeNameEx(0x87967, "P0414_SECONDARY_AIR_PUMP_A_SHORTED_____", SN_CHECK);
MakeNameEx(0x87971, "P0416_SECONDARY_AIR_PUMP_B_OPEN_____", SN_CHECK);
MakeNameEx(0x87970, "P0417_SECONDARY_AIR_PUMP_B_SHORTED_____", SN_CHECK);
MakeNameEx(0x87963, "P0418_SECONDARY_AIR_PUMP_RELAY_A_____", SN_CHECK);
MakeNameEx(0x878E6, "P0420_CAT_EFFICIENCY_BELOW_THRESHOLD_____", SN_CHECK);
MakeNameEx(0x87977, "P0441_EVAP_INCORRECT_PURGE_FLOW_____", SN_CHECK);
MakeNameEx(0x878E7, "P0442_EVAP_LEAK_DETECTED_SMALL____", SN_CHECK);
MakeNameEx(0x878DE, "P0447_EVAP_VENT_CONTROL_CIRCUIT_OPEN____", SN_CHECK);
MakeNameEx(0x878DF, "P0448_EVAP_VENT_CONTROL_CIRCUIT_SHORTED____", SN_CHECK);
MakeNameEx(0x878C5, "P0451_EVAP_PRESSURE_SENSOR_RANGEPERF_____", SN_CHECK);
MakeNameEx(0x878C3, "P0452_EVAP_PRESSURE_SENSOR_LOW_INPUT_____", SN_CHECK);
MakeNameEx(0x878C4, "P0453_EVAP_PRESSURE_SENSOR_HIGH_INPUT_____", SN_CHECK);
MakeNameEx(0x878E8, "P0456_EVAP_LEAK_DETECTED_VERY_SMALL_____", SN_CHECK);
MakeNameEx(0x878F2, "P0457_EVAP_LEAK_DETECTED_FUEL_CAP____", SN_CHECK);
MakeNameEx(0x878DB, "P0458_EVAP_PURGE_VALVE_CIRCUIT_LOW_____", SN_CHECK);
MakeNameEx(0x878DC, "P0459_EVAP_PURGE_VALVE_CIRCUIT_HIGH_____", SN_CHECK);
MakeNameEx(0x878C0, "P0461_FUEL_LEVEL_SENSOR_RANGEPERF_____", SN_CHECK);
MakeNameEx(0x878BE, "P0462_FUEL_LEVEL_SENSOR_LOW_INPUT_____", SN_CHECK);
MakeNameEx(0x878BF, "P0463_FUEL_LEVEL_SENSOR_HIGH_INPUT_____", SN_CHECK);
MakeNameEx(0x878BC, "P0464_FUEL_LEVEL_SENSOR_INTERMITTENT____", SN_CHECK);
MakeNameEx(0x878B3, "P0500_VEHICLE_SPEED_SENSOR_A_____", SN_CHECK);
MakeNameEx(0x878D3, "P0506_IDLE_CONTROL_RPM_LOWER_THAN_EXPECTED_____", SN_CHECK);
MakeNameEx(0x878D4, "P0507_IDLE_CONTROL_RPM_HIGH_THAN_EXPECTED_____", SN_CHECK);
MakeNameEx(0x878C2, "P0512_STARTER_REQUEST_CIRCUIT_____", SN_CHECK);
MakeNameEx(0x87930, "P0600_SERIAL_COMMUNICATION_LINK____", SN_CHECK);
MakeNameEx(0x878B0, "P0604_CONTROL_MODULE_RAM_ERROR_____", SN_CHECK);
MakeNameEx(0x87935, "P0605_CONTROL_MODULE_ROM_ERROR_____", SN_CHECK);
MakeNameEx(0x87928, "P0607_CONTROL_MODULE_PERFORMANCE_____", SN_CHECK);
MakeNameEx(0x87927, "P0638_THROTTLE_ACTUATOR_RANGEPERF_____", SN_CHECK);
MakeNameEx(0x87941, "P0700_TRANSMISSION_CONTROL_SYSTEM____", SN_CHECK);
MakeNameEx(0x878C6, "P0851_NEUTRAL_SWITCH_INPUT_LOW_____", SN_CHECK);
MakeNameEx(0x878CA, "P0852_NEUTRAL_SWITCH_INPUT_HIGH_____", SN_CHECK);
MakeNameEx(0x878E2, "P1152_FRONT_O2_SENSOR_RANGEPERF_LOW_B1_S1_____", SN_CHECK);
MakeNameEx(0x878E3, "P1153_FRONT_O2_SENSOR_RANGEPERF_HIGH_B1_S1_____", SN_CHECK);
MakeNameEx(0x87922, "P1160_ABNORMAL_RETURN_SPRING_____", SN_CHECK);
MakeNameEx(0x878D9, "P1400_FUEL_TANK_PRESSURE_SOL_LOW_____", SN_CHECK);
MakeNameEx(0x8796B, "P1410_SECONDARY_AIR_PUMP_VALVE_STUCK_OPEN_____", SN_CHECK);
MakeNameEx(0x87968, "P1418_SECONDARY_AIR_PUMP_CIRCUIT_SHORTED_____", SN_CHECK);
MakeNameEx(0x878DA, "P1420_FUEL_TANK_PRESSURE_SOL_HIGH_INPUT_____", SN_CHECK);
MakeNameEx(0x878DD, "P1443_VENT_CONTROL_SOLENOID_FUNCTION_PROBLEM____", SN_CHECK);
MakeNameEx(0x8790A, "P1491_PCV_BLOWBY_FUNCTION_PROBLEM_____", SN_CHECK);
MakeNameEx(0x87976, "P1519_IMRC_STUCK_CLOSED_____", SN_CHECK);
MakeNameEx(0x87975, "P1520_IMRC_CIRCUIT_MALFUNCTION_____", SN_CHECK);
MakeNameEx(0x8790B, "P1560_BACKUP_VOLTAGE_MALFUNCTION_____", SN_CHECK);
MakeNameEx(0x87966, "P1602_CONTROL_MODULE_PROGRAMMING_ERROR____", SN_CHECK);
MakeNameEx(0x87974, "P1616_SBDS_INTERACTIVE_CODES_____", SN_CHECK);
MakeNameEx(0x8794C, "P2004_TGV_INTAKE_MANIFOLD_RUNNER_1_STUCK_OPEN_____", SN_CHECK);
MakeNameEx(0x8794E, "P2005_TGV_INTAKE_MANIFOLD_RUNNER_2_STUCK_OPEN_____", SN_CHECK);
MakeNameEx(0x8794D, "P2006_TGV_INTAKE_MANIFOLD_RUNNER_1_STUCK_CLOSED_____", SN_CHECK);
MakeNameEx(0x8794F, "P2007_TGV_INTAKE_MANIFOLD_RUNNER_2_STUCK_CLOSED_____", SN_CHECK);
MakeNameEx(0x8795A, "P2008_TGV_INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_OPEN_____", SN_CHECK);
MakeNameEx(0x87958, "P2009_TGV_INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_LOW_____", SN_CHECK);
MakeNameEx(0x8795B, "P2011_TGV_INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_OPEN_____", SN_CHECK);
MakeNameEx(0x87959, "P2012_TGV_INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_LOW_____", SN_CHECK);
MakeNameEx(0x87954, "P2016_TGV_INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_LOW_____", SN_CHECK);
MakeNameEx(0x87955, "P2017_TGV_INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_HIGH_____", SN_CHECK);
MakeNameEx(0x87956, "P2021_TGV_INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_LOW_____", SN_CHECK);
MakeNameEx(0x87957, "P2022_TGV_INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_HIGH_____", SN_CHECK);
MakeNameEx(0x8793D, "P2088_OCV_SOLENOID_A1_CIRCUIT_OPEN_____", SN_CHECK);
MakeNameEx(0x8793C, "P2089_OCV_SOLENOID_A1_CIRCUIT_SHORT_____", SN_CHECK);
MakeNameEx(0x8793B, "P2092_OCV_SOLENOID_A2_CIRCUIT_OPEN_____", SN_CHECK);
MakeNameEx(0x8793A, "P2093_OCV_SOLENOID_A2_CIRCUIT_SHORT_____", SN_CHECK);
MakeNameEx(0x87926, "P2096_POST_CATALYST_TOO_LEAN_B1_____", SN_CHECK);
MakeNameEx(0x8792F, "P2097_POST_CATALYST_TOO_RICH_B1_____", SN_CHECK);
MakeNameEx(0x87925, "P2101_THROTTLE_ACTUATOR_CIRCUIT_RANGEPERF_____", SN_CHECK);
MakeNameEx(0x87923, "P2102_THROTTLE_ACTUATOR_CIRCUIT_LOW_____", SN_CHECK);
MakeNameEx(0x87924, "P2103_THROTTLE_ACTUATOR_CIRCUIT_HIGH_____", SN_CHECK);
MakeNameEx(0x8791F, "P2109_TPS_A_MINIMUM_STOP_PERF_____", SN_CHECK);
MakeNameEx(0x8792C, "P2122_TPS_D_CIRCUIT_LOW_INPUT_____", SN_CHECK);
MakeNameEx(0x8792D, "P2123_TPS_D_CIRCUIT_HIGH_INPUT_____", SN_CHECK);
MakeNameEx(0x8792A, "P2127_TPS_E_CIRCUIT_LOW_INPUT_____", SN_CHECK);
MakeNameEx(0x8792B, "P2128_TPS_E_CIRCUIT_HIGH_INPUT_____", SN_CHECK);
MakeNameEx(0x8792E, "P2135_TPS_AB_VOLTAGE_____", SN_CHECK);
MakeNameEx(0x87929, "P2138_TPS_DE_VOLTAGE_____", SN_CHECK);
MakeNameEx(0x87978, "P2419_EVAP_SWITCHING_VALVE_LOW_____", SN_CHECK);
MakeNameEx(0x87979, "P2420_EVAP_SWITCHING_VALVE_HIGH_____", SN_CHECK);
MakeNameEx(0x8795F, "P2431_SECONDARY_AIR_PUMP_CIRCUIT_RANGEPERF_____", SN_CHECK);
MakeNameEx(0x87961, "P2432_SECONDARY_AIR_PUMP_CIRCUIT_LOW_____", SN_CHECK);
MakeNameEx(0x87960, "P2433_SECONDARY_AIR_PUMP_CIRCUIT_HIGH_____", SN_CHECK);
MakeNameEx(0x8796F, "P2440_SECONDARY_AIR_PUMP_VALVE_1_STUCK_OPEN_____", SN_CHECK);
MakeNameEx(0x8796E, "P2441_SECONDARY_AIR_PUMP_VALVE_1_STUCK_CLOSED_____", SN_CHECK);
MakeNameEx(0x8796D, "P2442_SECONDARY_AIR_PUMP_VALVE_2_STUCK_OPEN_____", SN_CHECK);
MakeNameEx(0x8796C, "P2443_SECONDARY_AIR_PUMP_2_STUCK_CLOSED_____", SN_CHECK);
MakeNameEx(0x8795C, "P2444_SECONDARY_AIR_PUMP_1_STUCK_ON_B1_____", SN_CHECK);
MakeNameEx(0xC1038, "Target_Boost_______", SN_CHECK);
referenceAddress = DfirstB(0xC1038);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Boost_______", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_______\n");
}

MakeNameEx(0xC0FC8, "Target_Boost_X_AXIS_____", SN_CHECK);
MakeNameEx(0xC1000, "Target_Boost_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xC0B4C, "Target_Boost_Compensation_ECT______", SN_CHECK);
referenceAddress = DfirstB(0xC0B4C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_ECT______", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_ECT______\n");
}

MakeNameEx(0xC0A6C, "Target_Boost_Compensation_ECT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xC0A64, "Target_Boost_Compensation_1st_Gear______", SN_CHECK);
MakeNameEx(0xC0A60, "Target_Boost_Compensation_1st_Gear_Speed_Disable______", SN_CHECK);
MakeNameEx(0xC0CA8, "Target_Boost_Compensation_IAT_______", SN_CHECK);
referenceAddress = DfirstB(0xC0CA8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_IAT_______", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_IAT_______\n");
}

MakeNameEx(0xC0C7C, "Target_Boost_Compensation_IAT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xC0D44, "Target_Boost_Compensation_Atm_Pressure_______", SN_CHECK);
referenceAddress = DfirstB(0xC0D44);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_Atm_Pressure_______", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_Atm_Pressure_______\n");
}

MakeNameEx(0xC0D14, "Target_Boost_Compensation_Atm_Pressure_X_AXIS_____", SN_CHECK);
MakeNameEx(0xC0D2C, "Target_Boost_Compensation_Atm_Pressure_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD31FC, "Boost_Limit_Fuel_Cut_______", SN_CHECK);
referenceAddress = DfirstB(0xD31FC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Boost_Limit_Fuel_Cut_______", SN_CHECK);
}
else
{
    Message("No reference to Boost_Limit_Fuel_Cut_______\n");
}

MakeNameEx(0xD31CC, "Boost_Limit_Fuel_Cut_X_AXIS_____", SN_CHECK);
MakeNameEx(0xD31E4, "Boost_Limit_Fuel_Cut_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xC0A54, "Boost_Control_Disable_IAM______", SN_CHECK);
MakeNameEx(0xC0A50, "Boost_Control_Disable_Fine_Correction______", SN_CHECK);
MakeNameEx(0xC0A05, "Boost_Control_Disable_Delay_Fine_Correction______", SN_CHECK);
MakeNameEx(0xC0EEC, "Initial_Wastegate_Duty_______", SN_CHECK);
referenceAddress = DfirstB(0xC0EEC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Initial_Wastegate_Duty_______", SN_CHECK);
}
else
{
    Message("No reference to Initial_Wastegate_Duty_______\n");
}

MakeNameEx(0xC0E98, "Initial_Wastegate_Duty_X_AXIS_____", SN_CHECK);
MakeNameEx(0xC0EC4, "Initial_Wastegate_Duty_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xC0DBC, "Max_Wastegate_Duty_______", SN_CHECK);
referenceAddress = DfirstB(0xC0DBC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Max_Wastegate_Duty_______", SN_CHECK);
}
else
{
    Message("No reference to Max_Wastegate_Duty_______\n");
}

MakeNameEx(0xC0D68, "Max_Wastegate_Duty_X_AXIS_____", SN_CHECK);
MakeNameEx(0xC0D94, "Max_Wastegate_Duty_Y_AXIS_____", SN_CHECK);
MakeNameEx(0x13F3C, "Max_Wastegate_Duty_Limit_PostCompensation______", SN_CHECK);
MakeNameEx(0xC0AEC, "InitialMax_Wastegate_Duty_Compensation_IAT______", SN_CHECK);
referenceAddress = DfirstB(0xC0AEC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_IAT______", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_IAT______\n");
}

MakeNameEx(0xC0AAC, "InitialMax_Wastegate_Duty_Compensation_IAT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xC0B0C, "InitialMax_Wastegate_Duty_Compensation_ECT______", SN_CHECK);
referenceAddress = DfirstB(0xC0B0C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_ECT______", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_ECT______\n");
}

MakeNameEx(0xC0A6C, "InitialMax_Wastegate_Duty_Compensation_ECT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xC0CFC, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure______", SN_CHECK);
referenceAddress = DfirstB(0xC0CFC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_Atm_Pressure______", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_Atm_Pressure______\n");
}

MakeNameEx(0xC0CD4, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_X_AXIS_____", SN_CHECK);
MakeNameEx(0xC0CEC, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xC0B80, "Turbo_Dynamics_Proportional______", SN_CHECK);
referenceAddress = DfirstB(0xC0B80);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Proportional______", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Proportional______\n");
}

MakeNameEx(0xC0B5C, "Turbo_Dynamics_Proportional_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xC0BF0, "Turbo_Dynamics_Integral_Positive______", SN_CHECK);
referenceAddress = DfirstB(0xC0BF0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Integral_Positive______", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Integral_Positive______\n");
}

MakeNameEx(0xC0BCC, "Turbo_Dynamics_Integral_Positive_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xC0BB8, "Turbo_Dynamics_Integral_Negative______", SN_CHECK);
referenceAddress = DfirstB(0xC0BB8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Integral_Negative______", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Integral_Negative______\n");
}

MakeNameEx(0xC0B94, "Turbo_Dynamics_Integral_Negative_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xC0B1C, "TD_Proportional_Compensation_IAT______", SN_CHECK);
referenceAddress = DfirstB(0xC0B1C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Proportional_Compensation_IAT______", SN_CHECK);
}
else
{
    Message("No reference to TD_Proportional_Compensation_IAT______\n");
}

MakeNameEx(0xC0AAC, "TD_Proportional_Compensation_IAT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xC0B3C, "TD_Integral_Positive_Compensation_IAT______", SN_CHECK);
referenceAddress = DfirstB(0xC0B3C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Integral_Positive_Compensation_IAT______", SN_CHECK);
}
else
{
    Message("No reference to TD_Integral_Positive_Compensation_IAT______\n");
}

MakeNameEx(0xC0AAC, "TD_Integral_Positive_Compensation_IAT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xC0B2C, "TD_Integral_Negative_Compensation_IAT______", SN_CHECK);
referenceAddress = DfirstB(0xC0B2C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Integral_Negative_Compensation_IAT______", SN_CHECK);
}
else
{
    Message("No reference to TD_Integral_Negative_Compensation_IAT______\n");
}

MakeNameEx(0xC0AAC, "TD_Integral_Negative_Compensation_IAT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xC0A40, "TD_Activation_Thresholds_RPM______", SN_CHECK);
MakeNameEx(0xC0A2C, "TD_Activation_Thresholds_Target_Boost_______", SN_CHECK);
MakeNameEx(0xC0A48, "TD_Integral_Cumulative_Range_WGDC_Correction______", SN_CHECK);
MakeNameEx(0xC0A34, "TD_Integral_Negative_Activation_Boost_Error______", SN_CHECK);
MakeNameEx(0xC0A38, "TD_Integral_Positive_Activation_Boost_Error______", SN_CHECK);
MakeNameEx(0xC0A3C, "TD_Integral_Negative_Activation_Wastegate_Duty______", SN_CHECK);
MakeNameEx(0xD9B50, "Manifold_Pressure_Sensor_Scaling_______", SN_CHECK);
MakeNameEx(0xD9AB2, "Manifold_Pressure_Sensor_Limits_CEL______", SN_CHECK);
MakeNameEx(0xD9A66, "Manifold_Pressure_Sensor_CEL_Delays______", SN_CHECK);
MakeNameEx(0xD0E78, "Primary_Open_Loop_Fueling_KCA_Additive_B_Low", SN_CHECK);
referenceAddress = DfirstB(0xD0E78);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_KCA_Additive_B_Low", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_KCA_Additive_B_Low\n");
}

MakeNameEx(0xD0DE4, "Primary_Open_Loop_Fueling_KCA_Additive_B_Low_X_AXIS", SN_CHECK);
MakeNameEx(0xD0E30, "Primary_Open_Loop_Fueling_KCA_Additive_B_Low_Y_AXIS", SN_CHECK);
MakeNameEx(0xD0A8C, "Primary_Open_Loop_Fueling_KCA_Additive_B_High", SN_CHECK);
referenceAddress = DfirstB(0xD0A8C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_KCA_Additive_B_High", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_KCA_Additive_B_High\n");
}

MakeNameEx(0xD09F8, "Primary_Open_Loop_Fueling_KCA_Additive_B_High_X_AXIS", SN_CHECK);
MakeNameEx(0xD0A44, "Primary_Open_Loop_Fueling_KCA_Additive_B_High_Y_AXIS", SN_CHECK);
MakeNameEx(0xD0C78, "Primary_Open_Loop_Fueling_Failsafe______", SN_CHECK);
referenceAddress = DfirstB(0xD0C78);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Failsafe______", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Failsafe______\n");
}

MakeNameEx(0xD0BE4, "Primary_Open_Loop_Fueling_Failsafe_X_AXIS_____", SN_CHECK);
MakeNameEx(0xD0C30, "Primary_Open_Loop_Fueling_Failsafe_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD1064, "Primary_Open_Loop_Fueling_KCA_Alternate_Mode", SN_CHECK);
referenceAddress = DfirstB(0xD1064);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_KCA_Alternate_Mode", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_KCA_Alternate_Mode\n");
}

MakeNameEx(0xD0FD0, "Primary_Open_Loop_Fueling_KCA_Alternate_Mode_X_AXIS", SN_CHECK);
MakeNameEx(0xD101C, "Primary_Open_Loop_Fueling_KCA_Alternate_Mode_Y_AXIS", SN_CHECK);
MakeNameEx(0xD1250, "Primary_Open_Loop_Fueling_Failsafe_KCA_Alternate_Mode", SN_CHECK);
referenceAddress = DfirstB(0xD1250);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Failsafe_KCA_Alternate_Mode", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Failsafe_KCA_Alternate_Mode\n");
}

MakeNameEx(0xD11BC, "Primary_Open_Loop_Fueling_Failsafe_KCA_Alternate_Mode_X_AXIS", SN_CHECK);
MakeNameEx(0xD1208, "Primary_Open_Loop_Fueling_Failsafe_KCA_Alternate_Mode_Y_AXIS", SN_CHECK);
MakeNameEx(0xCCDC8, "Primary_Open_Loop_Fuel_Map_Switch_IAM______", SN_CHECK);
MakeNameEx(0xCCDCC, "Minimum_Active_Primary_Open_Loop_Enrichment______", SN_CHECK);
MakeNameEx(0xCD9BC, "Minimum_Primary_Open_Loop_Enrichment_Throttle______", SN_CHECK);
referenceAddress = DfirstB(0xCD9BC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Throttle______", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Throttle______\n");
}

MakeNameEx(0xCD9A4, "Minimum_Primary_Open_Loop_Enrichment_Throttle_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCD9E0, "Minimum_Primary_Open_Loop_Enrichment_Accelerator______", SN_CHECK);
referenceAddress = DfirstB(0xCD9E0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Accelerator______", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Accelerator______\n");
}

MakeNameEx(0xCD9C4, "Minimum_Primary_Open_Loop_Enrichment_Accelerator_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCF2F4, "Primary_Open_Loop_Fueling_Compensation_ECT______", SN_CHECK);
referenceAddress = DfirstB(0xCF2F4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_ECT______", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_ECT______\n");
}

MakeNameEx(0xCD280, "Primary_Open_Loop_Fueling_Compensation_ECT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCD94C, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_______", SN_CHECK);
referenceAddress = DfirstB(0xCD94C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_______", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_______\n");
}

MakeNameEx(0xCD934, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD9DEC, "Front_Oxygen_Sensor_Scaling______", SN_CHECK);
referenceAddress = DfirstB(0xD9DEC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Scaling______", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Scaling______\n");
}

MakeNameEx(0xD9DB8, "Front_Oxygen_Sensor_Scaling_Y_AXIS_____", SN_CHECK);
MakeNameEx(0x2208C, "Front_Oxygen_Sensor_Rich_Limit______", SN_CHECK);
MakeNameEx(0xC3300, "Front_Oxygen_Sensor_Compensation_Atm_Pressure______", SN_CHECK);
referenceAddress = DfirstB(0xC3300);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Compensation_Atm_Pressure______", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Compensation_Atm_Pressure______\n");
}

MakeNameEx(0xC32F0, "Front_Oxygen_Sensor_Compensation_Atm_Pressure_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD21D4, "CL_Fueling_Target_Compensation_A_Load______", SN_CHECK);
referenceAddress = DfirstB(0xD21D4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_A_Load______", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_A_Load______\n");
}

MakeNameEx(0xD2178, "CL_Fueling_Target_Compensation_A_Load_X_AXIS_____", SN_CHECK);
MakeNameEx(0xD21A8, "CL_Fueling_Target_Compensation_A_Load_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD24AC, "CL_Fueling_Target_Compensation_B_Load______", SN_CHECK);
referenceAddress = DfirstB(0xD24AC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_B_Load______", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_B_Load______\n");
}

MakeNameEx(0xD2440, "CL_Fueling_Target_Compensation_B_Load_X_AXIS_____", SN_CHECK);
MakeNameEx(0xD2478, "CL_Fueling_Target_Compensation_B_Load_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD20AC, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT______", SN_CHECK);
referenceAddress = DfirstB(0xD20AC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Imm_Cruise_ECT______", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Imm_Cruise_ECT______\n");
}

MakeNameEx(0xCD280, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_X_AXIS_____", SN_CHECK);
MakeNameEx(0xD20A0, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD2118, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT______", SN_CHECK);
referenceAddress = DfirstB(0xD2118);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Imm_NonCruise_ECT______", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Imm_NonCruise_ECT______\n");
}

MakeNameEx(0xCD280, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_X_AXIS_____", SN_CHECK);
MakeNameEx(0xD210C, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCCBF8, "CL_Fueling_Target_Compensation_ECT_Disable_", SN_CHECK);
MakeNameEx(0xCC8CE, "CL_to_OL_Delay_______", SN_CHECK);
MakeNameEx(0xCC8C8, "CL_to_OL_DelaySwitch_SIDRIVE_Intelligent_", SN_CHECK);
MakeNameEx(0xCD994, "CL_to_OL_Transition_with_Delay_Throttle______", SN_CHECK);
referenceAddress = DfirstB(0xCD994);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Throttle______", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Throttle______\n");
}

MakeNameEx(0xCD954, "CL_to_OL_Transition_with_Delay_Throttle_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCCDD4, "CL_to_OL_Transition_with_Delay_Throttle_Hysteresis______", SN_CHECK);
MakeNameEx(0xCF220, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width______", SN_CHECK);
referenceAddress = DfirstB(0xCF220);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Base_Pulse_Width______", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Base_Pulse_Width______\n");
}

MakeNameEx(0xCF1E0, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCCDD0, "CL_to_OL_Transition_with_Delay_BPW_Hysteresis______", SN_CHECK);
MakeNameEx(0xCF268, "CL_to_OL_Transition_Counter_Step_Value_MAF______", SN_CHECK);
referenceAddress = DfirstB(0xCF268);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_Counter_Step_Value_MAF______", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_Counter_Step_Value_MAF______\n");
}

MakeNameEx(0xCF240, "CL_to_OL_Transition_Counter_Step_Value_MAF_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCCE34, "CL_Delay_Maximum_Throttle______", SN_CHECK);
MakeNameEx(0xCCE50, "CL_Delay_Maximum_Vehicle_Speed______", SN_CHECK);
MakeNameEx(0xCCDD8, "CL_Delay_Minimum_ECT______", SN_CHECK);
MakeNameEx(0xCCE60, "CL_Delay_Maximum_Engine_Load______", SN_CHECK);
MakeNameEx(0xCC8C6, "CL_Delay_Engine_Load_Counter_Threshold______", SN_CHECK);
MakeNameEx(0xCCDDC, "CL_Delay_Maximum_Engine_Speed_Per_Gear______", SN_CHECK);
MakeNameEx(0xCCE04, "CL_Delay_Maximum_Engine_Speed_Neutral______", SN_CHECK);
MakeNameEx(0xD1C6C, "Injector_Latency_______", SN_CHECK);
referenceAddress = DfirstB(0xD1C6C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Injector_Latency_______", SN_CHECK);
}
else
{
    Message("No reference to Injector_Latency_______\n");
}

MakeNameEx(0xD1C4C, "Injector_Latency_X_AXIS_____", SN_CHECK);
MakeNameEx(0xD1C60, "Injector_Latency_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCCA68, "Injector_Flow_Scaling______", SN_CHECK);
MakeNameEx(0xD1490, "Per_Injector_Pulse_Width_Compensation_A______", SN_CHECK);
referenceAddress = DfirstB(0xD1490);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_A______", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_A______\n");
}

MakeNameEx(0xD1410, "Per_Injector_Pulse_Width_Compensation_A_X_AXIS_____", SN_CHECK);
MakeNameEx(0xD1450, "Per_Injector_Pulse_Width_Compensation_A_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD1610, "Per_Injector_Pulse_Width_Compensation_B______", SN_CHECK);
referenceAddress = DfirstB(0xD1610);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_B______", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_B______\n");
}

MakeNameEx(0xD1590, "Per_Injector_Pulse_Width_Compensation_B_X_AXIS_____", SN_CHECK);
MakeNameEx(0xD15D0, "Per_Injector_Pulse_Width_Compensation_B_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD1790, "Per_Injector_Pulse_Width_Compensation_C______", SN_CHECK);
referenceAddress = DfirstB(0xD1790);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_C______", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_C______\n");
}

MakeNameEx(0xD1710, "Per_Injector_Pulse_Width_Compensation_C_X_AXIS_____", SN_CHECK);
MakeNameEx(0xD1750, "Per_Injector_Pulse_Width_Compensation_C_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD1910, "Per_Injector_Pulse_Width_Compensation_D______", SN_CHECK);
referenceAddress = DfirstB(0xD1910);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_D______", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_D______\n");
}

MakeNameEx(0xD1890, "Per_Injector_Pulse_Width_Compensation_D_X_AXIS_____", SN_CHECK);
MakeNameEx(0xD18D0, "Per_Injector_Pulse_Width_Compensation_D_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCDF06, "Cranking_Fuel_Injector_Pulse_Width_A_ECT______", SN_CHECK);
referenceAddress = DfirstB(0xCDF06);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_A_ECT______", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_A_ECT______\n");
}

MakeNameEx(0xCD280, "Cranking_Fuel_Injector_Pulse_Width_A_ECT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCDF26, "Cranking_Fuel_Injector_Pulse_Width_B_ECT______", SN_CHECK);
referenceAddress = DfirstB(0xCDF26);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_B_ECT______", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_B_ECT______\n");
}

MakeNameEx(0xCD280, "Cranking_Fuel_Injector_Pulse_Width_B_ECT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCDF46, "Cranking_Fuel_Injector_Pulse_Width_C_ECT______", SN_CHECK);
referenceAddress = DfirstB(0xCDF46);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_C_ECT______", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_C_ECT______\n");
}

MakeNameEx(0xCD280, "Cranking_Fuel_Injector_Pulse_Width_C_ECT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCDF66, "Cranking_Fuel_Injector_Pulse_Width_D_ECT______", SN_CHECK);
referenceAddress = DfirstB(0xCDF66);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_D_ECT______", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_D_ECT______\n");
}

MakeNameEx(0xCD280, "Cranking_Fuel_Injector_Pulse_Width_D_ECT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCDF86, "Cranking_Fuel_Injector_Pulse_Width_E_ECT______", SN_CHECK);
referenceAddress = DfirstB(0xCDF86);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_E_ECT______", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_E_ECT______\n");
}

MakeNameEx(0xCD280, "Cranking_Fuel_Injector_Pulse_Width_E_ECT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCDFA6, "Cranking_Fuel_Injector_Pulse_Width_F_ECT______", SN_CHECK);
referenceAddress = DfirstB(0xCDFA6);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_F_ECT______", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_F_ECT______\n");
}

MakeNameEx(0xCD280, "Cranking_Fuel_Injector_Pulse_Width_F_ECT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD042C, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM______", SN_CHECK);
referenceAddress = DfirstB(0xD042C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM______", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM______\n");
}

MakeNameEx(0xD03FC, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_X_AXIS_____", SN_CHECK);
MakeNameEx(0xD0410, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD03D8, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM______", SN_CHECK);
referenceAddress = DfirstB(0xD03D8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM______", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM______\n");
}

MakeNameEx(0xD03A8, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_X_AXIS_____", SN_CHECK);
MakeNameEx(0xD03BC, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCD484, "Cranking_Fuel_IPW_Compensation_MAP______", SN_CHECK);
referenceAddress = DfirstB(0xCD484);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_MAP______", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_MAP______\n");
}

MakeNameEx(0xCD45C, "Cranking_Fuel_IPW_Compensation_MAP_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCD4B8, "Cranking_Fuel_IPW_Compensation_Accelerator______", SN_CHECK);
referenceAddress = DfirstB(0xCD4B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Accelerator______", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Accelerator______\n");
}

MakeNameEx(0xCD490, "Cranking_Fuel_IPW_Compensation_Accelerator_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCD4D8, "Cranking_Fuel_IPW_Compensation_IAT______", SN_CHECK);
referenceAddress = DfirstB(0xCD4D8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_IAT______", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_IAT______\n");
}

MakeNameEx(0xCD4C4, "Cranking_Fuel_IPW_Compensation_IAT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCFA78, "Throttle_Tipin_Enrichment_A______", SN_CHECK);
referenceAddress = DfirstB(0xCFA78);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment_A______", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment_A______\n");
}

MakeNameEx(0xCFA30, "Throttle_Tipin_Enrichment_A_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCFAE4, "Throttle_Tipin_Enrichment_B______", SN_CHECK);
referenceAddress = DfirstB(0xCFAE4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment_B______", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment_B______\n");
}

MakeNameEx(0xCFA9C, "Throttle_Tipin_Enrichment_B_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCD110, "Minimum_Tipin_Enrichment_Activation______", SN_CHECK);
MakeNameEx(0xCD10C, "Minimum_Tipin_Enrichment_Activation_Throttle______", SN_CHECK);
MakeNameEx(0xCDD6C, "Tipin_Enrichment_Compensation_Boost_Error______", SN_CHECK);
referenceAddress = DfirstB(0xCDD6C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_Boost_Error______", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_Boost_Error______\n");
}

MakeNameEx(0xCDD48, "Tipin_Enrichment_Compensation_Boost_Error_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCDD38, "Tipin_Enrichment_Compensation_RPM______", SN_CHECK);
referenceAddress = DfirstB(0xCDD38);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_RPM______", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_RPM______\n");
}

MakeNameEx(0xCDCF8, "Tipin_Enrichment_Compensation_RPM_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCDD75, "Tipin_Enrichment_Compensation_A_ECT______", SN_CHECK);
referenceAddress = DfirstB(0xCDD75);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_A_ECT______", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_A_ECT______\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Compensation_A_ECT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCFB08, "Tipin_Enrichment_Compensation_B_ECT______", SN_CHECK);
referenceAddress = DfirstB(0xCFB08);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_B_ECT______", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_B_ECT______\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Compensation_B_ECT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCFB28, "Tipin_Enrichment_Compensation_C_ECT______", SN_CHECK);
referenceAddress = DfirstB(0xCFB28);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_C_ECT______", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_C_ECT______\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Compensation_C_ECT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCFB68, "Tipin_Enrichment_Compensation_D_ECT______", SN_CHECK);
referenceAddress = DfirstB(0xCFB68);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_D_ECT______", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_D_ECT______\n");
}

MakeNameEx(0xCD2C0, "Tipin_Enrichment_Compensation_D_ECT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCD114, "Tipin_Enrichment_Compensation_D_ECT_Activation______", SN_CHECK);
MakeNameEx(0xCDD85, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT______", SN_CHECK);
referenceAddress = DfirstB(0xCDD85);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT______", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT______\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCDD95, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT______", SN_CHECK);
referenceAddress = DfirstB(0xCDD95);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT______", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT______\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCC874, "Tipin_Enrichment_Applied_Counter_Reset______", SN_CHECK);
MakeNameEx(0xCFB88, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT______", SN_CHECK);
referenceAddress = DfirstB(0xCFB88);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT______", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT______\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCFBA8, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT______", SN_CHECK);
referenceAddress = DfirstB(0xCFBA8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT______", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT______\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCC875, "Tipin_Throttle_Cumulative_Reset______", SN_CHECK);
MakeNameEx(0xD0684, "Min_Primary_Base_Enrichment_1_Cruise______", SN_CHECK);
referenceAddress = DfirstB(0xD0684);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_Cruise______", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_Cruise______\n");
}

MakeNameEx(0xCD280, "Min_Primary_Base_Enrichment_1_Cruise_X_AXIS_____", SN_CHECK);
MakeNameEx(0xD0660, "Min_Primary_Base_Enrichment_1_Cruise_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD05E0, "Min_Primary_Base_Enrichment_1_NonCruise______", SN_CHECK);
referenceAddress = DfirstB(0xD05E0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonCruise______", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonCruise______\n");
}

MakeNameEx(0xCD280, "Min_Primary_Base_Enrichment_1_NonCruise_X_AXIS_____", SN_CHECK);
MakeNameEx(0xD05C0, "Min_Primary_Base_Enrichment_1_NonCruise_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCD53D, "Min_Primary_Base_Enrichment_1_NonPrimary_OL_______", SN_CHECK);
referenceAddress = DfirstB(0xCD53D);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonPrimary_OL_______", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonPrimary_OL_______\n");
}

MakeNameEx(0xCD280, "Min_Primary_Base_Enrichment_1_NonPrimary_OL_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCCCC0, "AF_Learning_1_Limits______", SN_CHECK);
MakeNameEx(0xCCCD0, "AF_Learning_1_Airflow_Ranges______", SN_CHECK);
MakeNameEx(0xC2D18, "MAF_Limit_Maximum______", SN_CHECK);
MakeNameEx(0xD9CE0, "MAF_Sensor_Scaling______", SN_CHECK);
referenceAddress = DfirstB(0xD9CE0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_MAF_Sensor_Scaling______", SN_CHECK);
}
else
{
    Message("No reference to MAF_Sensor_Scaling______\n");
}

MakeNameEx(0xD9C08, "MAF_Sensor_Scaling_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xC3768, "MAF_Compensation_IAT______", SN_CHECK);
referenceAddress = DfirstB(0xC3768);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_MAF_Compensation_IAT______", SN_CHECK);
}
else
{
    Message("No reference to MAF_Compensation_IAT______\n");
}

MakeNameEx(0xC3734, "MAF_Compensation_IAT_X_AXIS_____", SN_CHECK);
MakeNameEx(0xC3748, "MAF_Compensation_IAT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0x205E8, "Engine_Load_Limit_A_Maximum______", SN_CHECK);
MakeNameEx(0xC3200, "Engine_Load_Limit_B_Maximum_RPM______", SN_CHECK);
referenceAddress = DfirstB(0xC3200);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Limit_B_Maximum_RPM______", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Limit_B_Maximum_RPM______\n");
}

MakeNameEx(0xC31F8, "Engine_Load_Limit_B_Maximum_RPM_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xC3818, "Engine_Load_Compensation_Cruise_MP______", SN_CHECK);
referenceAddress = DfirstB(0xC3818);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Compensation_Cruise_MP______", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Compensation_Cruise_MP______\n");
}

MakeNameEx(0xC3790, "Engine_Load_Compensation_Cruise_MP_X_AXIS_____", SN_CHECK);
MakeNameEx(0xC37BC, "Engine_Load_Compensation_Cruise_MP_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xC3998, "Engine_Load_Compensation_NonCruise_MP______", SN_CHECK);
referenceAddress = DfirstB(0xC3998);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Compensation_NonCruise_MP______", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Compensation_NonCruise_MP______\n");
}

MakeNameEx(0xC3918, "Engine_Load_Compensation_NonCruise_MP_X_AXIS_____", SN_CHECK);
MakeNameEx(0xC3944, "Engine_Load_Compensation_NonCruise_MP_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD5240, "Base_Timing_Primary_Cruise______", SN_CHECK);
referenceAddress = DfirstB(0xD5240);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Primary_Cruise______", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Primary_Cruise______\n");
}

MakeNameEx(0xD51AC, "Base_Timing_Primary_Cruise_X_AXIS_____", SN_CHECK);
MakeNameEx(0xD51F8, "Base_Timing_Primary_Cruise_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD5618, "Base_Timing_Reference_Cruise_AVCS_related______", SN_CHECK);
referenceAddress = DfirstB(0xD5618);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Reference_Cruise_AVCS_related______", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Reference_Cruise_AVCS_related______\n");
}

MakeNameEx(0xD5584, "Base_Timing_Reference_Cruise_AVCS_related_X_AXIS_____", SN_CHECK);
MakeNameEx(0xD55D0, "Base_Timing_Reference_Cruise_AVCS_related_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD542C, "Base_Timing_Primary_NonCruise______", SN_CHECK);
referenceAddress = DfirstB(0xD542C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Primary_NonCruise______", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Primary_NonCruise______\n");
}

MakeNameEx(0xD5398, "Base_Timing_Primary_NonCruise_X_AXIS_____", SN_CHECK);
MakeNameEx(0xD53E4, "Base_Timing_Primary_NonCruise_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD5804, "Base_Timing_Reference_NonCruise_AVCS_related______", SN_CHECK);
referenceAddress = DfirstB(0xD5804);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Reference_NonCruise_AVCS_related______", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Reference_NonCruise_AVCS_related______\n");
}

MakeNameEx(0xD5770, "Base_Timing_Reference_NonCruise_AVCS_related_X_AXIS_____", SN_CHECK);
MakeNameEx(0xD57BC, "Base_Timing_Reference_NonCruise_AVCS_related_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD3DEA, "Base_Timing_Idle_A_InGear______", SN_CHECK);
referenceAddress = DfirstB(0xD3DEA);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_A_InGear______", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_A_InGear______\n");
}

MakeNameEx(0xD3BD0, "Base_Timing_Idle_A_InGear_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD3DFA, "Base_Timing_Idle_B_InGear______", SN_CHECK);
referenceAddress = DfirstB(0xD3DFA);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_B_InGear______", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_B_InGear______\n");
}

MakeNameEx(0xD3BD0, "Base_Timing_Idle_B_InGear_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD3E0A, "Base_Timing_Idle_A_Neutral______", SN_CHECK);
referenceAddress = DfirstB(0xD3E0A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_A_Neutral______", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_A_Neutral______\n");
}

MakeNameEx(0xD3BD0, "Base_Timing_Idle_A_Neutral_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD3E1A, "Base_Timing_Idle_B_Neutral______", SN_CHECK);
referenceAddress = DfirstB(0xD3E1A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_B_Neutral______", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_B_Neutral______\n");
}

MakeNameEx(0xD3BD0, "Base_Timing_Idle_B_Neutral_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD3DE1, "Base_Timing_Idle_Minimum______", SN_CHECK);
referenceAddress = DfirstB(0xD3DE1);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_Minimum______", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_Minimum______\n");
}

MakeNameEx(0xD3C50, "Base_Timing_Idle_Minimum_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD3770, "Base_Timing_Idle_Minimum_Vehicle_Speed_Enable______", SN_CHECK);
MakeNameEx(0xD616C, "Knock_Correction_Advance_Max_Additive_A_Knock_Conditions_IAM", SN_CHECK);
referenceAddress = DfirstB(0xD616C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_Additive_A_Knock_Conditions_IAM", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_Additive_A_Knock_Conditions_IAM\n");
}

MakeNameEx(0xD60D8, "Knock_Correction_Advance_Max_Additive_A_Knock_Conditions_IAM_X_AXIS", SN_CHECK);
MakeNameEx(0xD6124, "Knock_Correction_Advance_Max_Additive_A_Knock_Conditions_IAM_Y_AXIS", SN_CHECK);
MakeNameEx(0xD6730, "Knock_Correction_Advance_Max_Additive_B_Knock_Conditions", SN_CHECK);
referenceAddress = DfirstB(0xD6730);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_Additive_B_Knock_Conditions", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_Additive_B_Knock_Conditions\n");
}

MakeNameEx(0xD669C, "Knock_Correction_Advance_Max_Additive_B_Knock_Conditions_X_AXIS", SN_CHECK);
MakeNameEx(0xD66E8, "Knock_Correction_Advance_Max_Additive_B_Knock_Conditions_Y_AXIS", SN_CHECK);
MakeNameEx(0xD6358, "Knock_Correction_Advance_Max_Primary_Cruise_IAM", SN_CHECK);
referenceAddress = DfirstB(0xD6358);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_Primary_Cruise_IAM", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_Primary_Cruise_IAM\n");
}

MakeNameEx(0xD62C4, "Knock_Correction_Advance_Max_Primary_Cruise_IAM_X_AXIS", SN_CHECK);
MakeNameEx(0xD6310, "Knock_Correction_Advance_Max_Primary_Cruise_IAM_Y_AXIS", SN_CHECK);
MakeNameEx(0xD6544, "Knock_Correction_Advance_Max_Primary_NonCruise_IAM", SN_CHECK);
referenceAddress = DfirstB(0xD6544);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_Primary_NonCruise_IAM", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_Primary_NonCruise_IAM\n");
}

MakeNameEx(0xD64B0, "Knock_Correction_Advance_Max_Primary_NonCruise_IAM_X_AXIS", SN_CHECK);
MakeNameEx(0xD64FC, "Knock_Correction_Advance_Max_Primary_NonCruise_IAM_Y_AXIS", SN_CHECK);
MakeNameEx(0xD3637, "Knock_Correction_Advance_Alternate_Mode_", SN_CHECK);
MakeNameEx(0xD3AD8, "Knock_Correction_Advance_Additive_Range_RPM", SN_CHECK);
MakeNameEx(0xD3ECC, "Timing_Compensation_A_IAT______", SN_CHECK);
referenceAddress = DfirstB(0xD3ECC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_A_IAT______", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_A_IAT______\n");
}

MakeNameEx(0xD3E8C, "Timing_Compensation_A_IAT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD599C, "Timing_Compensation_A_IAT_Activation______", SN_CHECK);
referenceAddress = DfirstB(0xD599C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_A_IAT_Activation______", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_A_IAT_Activation______\n");
}

MakeNameEx(0xD595C, "Timing_Compensation_A_IAT_Activation_X_AXIS_____", SN_CHECK);
MakeNameEx(0xD597C, "Timing_Compensation_A_IAT_Activation_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD4474, "Timing_Compensation_B_IAT______", SN_CHECK);
referenceAddress = DfirstB(0xD4474);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_B_IAT______", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_B_IAT______\n");
}

MakeNameEx(0xD4434, "Timing_Compensation_B_IAT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD3930, "Timing_Compensation_B_IAT_IAM_Activation______", SN_CHECK);
MakeNameEx(0xD3914, "Timing_Compensation_B_IAT_Max_Additive______", SN_CHECK);
MakeNameEx(0xD3E6A, "Timing_Compensation_Imm_Cruise_A_ECT______", SN_CHECK);
referenceAddress = DfirstB(0xD3E6A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_Cruise_A_ECT______", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_Cruise_A_ECT______\n");
}

MakeNameEx(0xD3BD0, "Timing_Compensation_Imm_Cruise_A_ECT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD3E7A, "Timing_Compensation_Imm_Cruise_B_ECT______", SN_CHECK);
referenceAddress = DfirstB(0xD3E7A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_Cruise_B_ECT______", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_Cruise_B_ECT______\n");
}

MakeNameEx(0xD3BD0, "Timing_Compensation_Imm_Cruise_B_ECT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD3E4A, "Timing_Compensation_Imm_NonCruise_A_ECT______", SN_CHECK);
referenceAddress = DfirstB(0xD3E4A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_NonCruise_A_ECT______", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_NonCruise_A_ECT______\n");
}

MakeNameEx(0xD3BD0, "Timing_Compensation_Imm_NonCruise_A_ECT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD3E5A, "Timing_Compensation_Imm_NonCruise_B_ECT______", SN_CHECK);
referenceAddress = DfirstB(0xD3E5A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_NonCruise_B_ECT______", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_NonCruise_B_ECT______\n");
}

MakeNameEx(0xD3BD0, "Timing_Compensation_Imm_NonCruise_B_ECT_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD5F00, "Timing_Compensation_Per_Cylinder_A______", SN_CHECK);
referenceAddress = DfirstB(0xD5F00);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_A______", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_A______\n");
}

MakeNameEx(0xD5EB8, "Timing_Compensation_Per_Cylinder_A_X_AXIS_____", SN_CHECK);
MakeNameEx(0xD5EF0, "Timing_Compensation_Per_Cylinder_A_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD5F80, "Timing_Compensation_Per_Cylinder_B______", SN_CHECK);
referenceAddress = DfirstB(0xD5F80);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_B______", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_B______\n");
}

MakeNameEx(0xD5F38, "Timing_Compensation_Per_Cylinder_B_X_AXIS_____", SN_CHECK);
MakeNameEx(0xD5F70, "Timing_Compensation_Per_Cylinder_B_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD6000, "Timing_Compensation_Per_Cylinder_C______", SN_CHECK);
referenceAddress = DfirstB(0xD6000);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_C______", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_C______\n");
}

MakeNameEx(0xD5FB8, "Timing_Compensation_Per_Cylinder_C_X_AXIS_____", SN_CHECK);
MakeNameEx(0xD5FF0, "Timing_Compensation_Per_Cylinder_C_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD6080, "Timing_Compensation_Per_Cylinder_D______", SN_CHECK);
referenceAddress = DfirstB(0xD6080);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_D______", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_D______\n");
}

MakeNameEx(0xD6038, "Timing_Compensation_Per_Cylinder_D_X_AXIS_____", SN_CHECK);
MakeNameEx(0xD6070, "Timing_Compensation_Per_Cylinder_D_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD39D8, "Timing_Comp_Minimum_Load_Per_Cylinder______", SN_CHECK);
MakeNameEx(0xD39D4, "Timing_Comp_Maximum_RPM_Per_Cylinder______", SN_CHECK);
MakeNameEx(0xD39DC, "Timing_Comp_Minimum_Coolant_Temp_Per_Cylinder______", SN_CHECK);
MakeNameEx(0xD5E0C, "Timing_Compensation_Per_Gear_1st", SN_CHECK);
referenceAddress = DfirstB(0xD5E0C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Gear_1st", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Gear_1st\n");
}

MakeNameEx(0xD5DF0, "Timing_Compensation_Per_Gear_1st_X_AXIS", SN_CHECK);
MakeNameEx(0xD5E00, "Timing_Compensation_Per_Gear_1st_Y_AXIS", SN_CHECK);
MakeNameEx(0xD5E34, "Timing_Compensation_Per_Gear_2nd", SN_CHECK);
referenceAddress = DfirstB(0xD5E34);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Gear_2nd", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Gear_2nd\n");
}

MakeNameEx(0xD5E18, "Timing_Compensation_Per_Gear_2nd_X_AXIS", SN_CHECK);
MakeNameEx(0xD5E28, "Timing_Compensation_Per_Gear_2nd_Y_AXIS", SN_CHECK);
MakeNameEx(0xD5E5C, "Timing_Compensation_Per_Gear_3rd", SN_CHECK);
referenceAddress = DfirstB(0xD5E5C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Gear_3rd", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Gear_3rd\n");
}

MakeNameEx(0xD5E40, "Timing_Compensation_Per_Gear_3rd_X_AXIS", SN_CHECK);
MakeNameEx(0xD5E50, "Timing_Compensation_Per_Gear_3rd_Y_AXIS", SN_CHECK);
MakeNameEx(0xD5E84, "Timing_Compensation_Per_Gear_4th", SN_CHECK);
referenceAddress = DfirstB(0xD5E84);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Gear_4th", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Gear_4th\n");
}

MakeNameEx(0xD5E68, "Timing_Compensation_Per_Gear_4th_X_AXIS", SN_CHECK);
MakeNameEx(0xD5E78, "Timing_Compensation_Per_Gear_4th_Y_AXIS", SN_CHECK);
MakeNameEx(0xD5EAC, "Timing_Compensation_Per_Gear_5th", SN_CHECK);
referenceAddress = DfirstB(0xD5EAC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Gear_5th", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Gear_5th\n");
}

MakeNameEx(0xD5E90, "Timing_Compensation_Per_Gear_5th_X_AXIS", SN_CHECK);
MakeNameEx(0xD5EA0, "Timing_Compensation_Per_Gear_5th_Y_AXIS", SN_CHECK);
MakeNameEx(0xD3974, "Timing_Compensation_Per_Gear_Activation_RPM", SN_CHECK);
MakeNameEx(0xD397C, "Timing_Compensation_Per_Gear_Activation_Load", SN_CHECK);
MakeNameEx(0xD39E8, "Feedback_Correction_Range_RPM______", SN_CHECK);
MakeNameEx(0xD39E0, "Feedback_Correction_Minimum_Load______", SN_CHECK);
MakeNameEx(0xD3A08, "Feedback_Correction_Retard_Value______", SN_CHECK);
MakeNameEx(0xD3A04, "Feedback_Correction_Retard_Limit______", SN_CHECK);
MakeNameEx(0xD3A0C, "Feedback_Correction_Negative_Advance_Value______", SN_CHECK);
MakeNameEx(0xD3672, "Feedback_Correction_Negative_Advance_Delay______", SN_CHECK);
MakeNameEx(0xD3A14, "Extended_Feedback_Correction_High_RPM_Compensation______", SN_CHECK);
MakeNameEx(0xD3BB0, "Fine_Correction_Range_RPM______", SN_CHECK);
MakeNameEx(0xD3BC0, "Fine_Correction_Range_Load______", SN_CHECK);
MakeNameEx(0xD3B50, "Fine_Correction_Rows_RPM______", SN_CHECK);
MakeNameEx(0xD3B6C, "Fine_Correction_Columns_Load______", SN_CHECK);
MakeNameEx(0xD3B94, "Fine_Correction_Retard_Value______", SN_CHECK);
MakeNameEx(0xD3B90, "Fine_Correction_Retard_Limit______", SN_CHECK);
MakeNameEx(0xD3B8C, "Fine_Correction_Advance_Value______", SN_CHECK);
MakeNameEx(0xD3B88, "Fine_Correction_Advance_Limit______", SN_CHECK);
MakeNameEx(0xD3682, "Fine_Correction_Advance_Delay______", SN_CHECK);
MakeNameEx(0xD3AF8, "Rough_Correction_Range_RPM______", SN_CHECK);
MakeNameEx(0xD3B08, "Rough_Correction_Range_Load______", SN_CHECK);
MakeNameEx(0xD3B18, "Rough_Correction_Minimum_KC_Advance_Map_Value______", SN_CHECK);
MakeNameEx(0xD47A0, "Rough_Correction_Learning_Delay_Increasing_______", SN_CHECK);
referenceAddress = DfirstB(0xD47A0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Rough_Correction_Learning_Delay_Increasing_______", SN_CHECK);
}
else
{
    Message("No reference to Rough_Correction_Learning_Delay_Increasing_______\n");
}

MakeNameEx(0xD4778, "Rough_Correction_Learning_Delay_Increasing_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD3B1C, "Advance_Multiplier_Initial______", SN_CHECK);
MakeNameEx(0xD3B20, "Advance_Multiplier_Step_Value______", SN_CHECK);
MakeNameEx(0xDBEC8, "Intake_Cam_Advance_Angle_Cruise_AVCS______", SN_CHECK);
referenceAddress = DfirstB(0xDBEC8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_Cruise_AVCS______", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_Cruise_AVCS______\n");
}

MakeNameEx(0xDBE34, "Intake_Cam_Advance_Angle_Cruise_AVCS_X_AXIS_____", SN_CHECK);
MakeNameEx(0xDBE80, "Intake_Cam_Advance_Angle_Cruise_AVCS_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xDC208, "Intake_Cam_Advance_Angle_NonCruise_AVCS______", SN_CHECK);
referenceAddress = DfirstB(0xDC208);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_NonCruise_AVCS______", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_NonCruise_AVCS______\n");
}

MakeNameEx(0xDC174, "Intake_Cam_Advance_Angle_NonCruise_AVCS_X_AXIS_____", SN_CHECK);
MakeNameEx(0xDC1C0, "Intake_Cam_Advance_Angle_NonCruise_AVCS_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xDC548, "Intake_Cam_Advance_Angle_ECT_Related", SN_CHECK);
referenceAddress = DfirstB(0xDC548);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_ECT_Related", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_ECT_Related\n");
}

MakeNameEx(0xDC4B4, "Intake_Cam_Advance_Angle_ECT_Related_X_AXIS", SN_CHECK);
MakeNameEx(0xDC500, "Intake_Cam_Advance_Angle_ECT_Related_Y_AXIS", SN_CHECK);
MakeNameEx(0xDB43A, "Intake_Cam_Advance_Angle_ECT_Related_Multiplier", SN_CHECK);
referenceAddress = DfirstB(0xDB43A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_ECT_Related_Multiplier", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_ECT_Related_Multiplier\n");
}

MakeNameEx(0xDB264, "Intake_Cam_Advance_Angle_ECT_Related_Multiplier_Y_AXIS", SN_CHECK);
MakeNameEx(0xDCC38, "Exhaust_Cam_Retard_Angle_Cruise_AVCS", SN_CHECK);
referenceAddress = DfirstB(0xDCC38);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Exhaust_Cam_Retard_Angle_Cruise_AVCS", SN_CHECK);
}
else
{
    Message("No reference to Exhaust_Cam_Retard_Angle_Cruise_AVCS\n");
}

MakeNameEx(0xDCBA4, "Exhaust_Cam_Retard_Angle_Cruise_AVCS_X_AXIS", SN_CHECK);
MakeNameEx(0xDCBF0, "Exhaust_Cam_Retard_Angle_Cruise_AVCS_Y_AXIS", SN_CHECK);
MakeNameEx(0xDCF78, "Exhaust_Cam_Retard_Angle_NonCruise_AVCS", SN_CHECK);
referenceAddress = DfirstB(0xDCF78);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Exhaust_Cam_Retard_Angle_NonCruise_AVCS", SN_CHECK);
}
else
{
    Message("No reference to Exhaust_Cam_Retard_Angle_NonCruise_AVCS\n");
}

MakeNameEx(0xDCEE4, "Exhaust_Cam_Retard_Angle_NonCruise_AVCS_X_AXIS", SN_CHECK);
MakeNameEx(0xDCF30, "Exhaust_Cam_Retard_Angle_NonCruise_AVCS_Y_AXIS", SN_CHECK);
MakeNameEx(0xDD2B8, "Exhaust_Cam_Retard_Angle_ECT_Related", SN_CHECK);
referenceAddress = DfirstB(0xDD2B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Exhaust_Cam_Retard_Angle_ECT_Related", SN_CHECK);
}
else
{
    Message("No reference to Exhaust_Cam_Retard_Angle_ECT_Related\n");
}

MakeNameEx(0xDD224, "Exhaust_Cam_Retard_Angle_ECT_Related_X_AXIS", SN_CHECK);
MakeNameEx(0xDD270, "Exhaust_Cam_Retard_Angle_ECT_Related_Y_AXIS", SN_CHECK);
MakeNameEx(0xDB53C, "Exhaust_Cam_Retard_Angle_ECT_Related_Multiplier", SN_CHECK);
referenceAddress = DfirstB(0xDB53C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Exhaust_Cam_Retard_Angle_ECT_Related_Multiplier", SN_CHECK);
}
else
{
    Message("No reference to Exhaust_Cam_Retard_Angle_ECT_Related_Multiplier\n");
}

MakeNameEx(0xDB264, "Exhaust_Cam_Retard_Angle_ECT_Related_Multiplier_Y_AXIS", SN_CHECK);
MakeNameEx(0xFA070, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_", SN_CHECK);
referenceAddress = DfirstB(0xFA070);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_\n");
}

MakeNameEx(0xF9FEC, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_X_AXIS", SN_CHECK);
MakeNameEx(0xFA02C, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Y_AXIS", SN_CHECK);
MakeNameEx(0xFA314, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp_", SN_CHECK);
referenceAddress = DfirstB(0xFA314);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp_", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp_\n");
}

MakeNameEx(0xFA290, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp_X_AXIS", SN_CHECK);
MakeNameEx(0xFA2D0, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp_Y_AXIS", SN_CHECK);
MakeNameEx(0xFA5B8, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent_", SN_CHECK);
referenceAddress = DfirstB(0xFA5B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent_", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent_\n");
}

MakeNameEx(0xFA534, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent_X_AXIS", SN_CHECK);
MakeNameEx(0xFA574, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent_Y_AXIS", SN_CHECK);
MakeNameEx(0xF900C, "Requested_Torque_Base_RPM______", SN_CHECK);
referenceAddress = DfirstB(0xF900C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Base_RPM______", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Base_RPM______\n");
}

MakeNameEx(0xF8FCC, "Requested_Torque_Base_RPM_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xF94D8, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio______", SN_CHECK);
referenceAddress = DfirstB(0xF94D8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio______", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio______\n");
}

MakeNameEx(0xF943C, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_X_AXIS_____", SN_CHECK);
MakeNameEx(0xF9498, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xF9854, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio______", SN_CHECK);
referenceAddress = DfirstB(0xF9854);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio______", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio______\n");
}

MakeNameEx(0xF97B8, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_X_AXIS_____", SN_CHECK);
MakeNameEx(0xF9814, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xF9BD0, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio______", SN_CHECK);
referenceAddress = DfirstB(0xF9BD0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio______", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio______\n");
}

MakeNameEx(0xF9B34, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_X_AXIS_____", SN_CHECK);
MakeNameEx(0xF9B90, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xF9F24, "Requested_Torque_Limit_A_Per_GearEngine_Speed______", SN_CHECK);
referenceAddress = DfirstB(0xF9F24);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Limit_A_Per_GearEngine_Speed______", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Limit_A_Per_GearEngine_Speed______\n");
}

MakeNameEx(0xF9EDC, "Requested_Torque_Limit_A_Per_GearEngine_Speed_X_AXIS_____", SN_CHECK);
MakeNameEx(0xF9F1C, "Requested_Torque_Limit_A_Per_GearEngine_Speed_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xF9FAC, "Requested_Torque_Limit_B_Per_GearEngine_Speed______", SN_CHECK);
referenceAddress = DfirstB(0xF9FAC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Limit_B_Per_GearEngine_Speed______", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Limit_B_Per_GearEngine_Speed______\n");
}

MakeNameEx(0xF9F64, "Requested_Torque_Limit_B_Per_GearEngine_Speed_X_AXIS_____", SN_CHECK);
MakeNameEx(0xF9FA4, "Requested_Torque_Limit_B_Per_GearEngine_Speed_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xCD16C, "Rev_Limit_Fuel_Cut_____", SN_CHECK);
MakeNameEx(0xCD174, "Rev_Limit_Fuel_Resume_Boost______", SN_CHECK);
MakeNameEx(0xCD178, "Speed_Limiting_Enable_Fuel_Cut______", SN_CHECK);
MakeNameEx(0xCD180, "Speed_Limiting_Disable_Fuel_Cut______", SN_CHECK);
MakeNameEx(0xF8E54, "Speed_Limiting_A_Throttle_SIDRIVE_SportSport_Sharp_", SN_CHECK);
MakeNameEx(0xF8E60, "Speed_Limiting_B_Throttle_SIDRIVE_SportSport_Sharp_", SN_CHECK);
MakeNameEx(0xF8E6C, "Speed_Limiting_Throttle_SIDRIVE_Intelligent_", SN_CHECK);
MakeNameEx(0xDA068, "Fuel_Temp_Sensor_Scaling______", SN_CHECK);
referenceAddress = DfirstB(0xDA068);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Fuel_Temp_Sensor_Scaling______", SN_CHECK);
}
else
{
    Message("No reference to Fuel_Temp_Sensor_Scaling______\n");
}

MakeNameEx(0xD9FF0, "Fuel_Temp_Sensor_Scaling_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD9F78, "Intake_Temp_Sensor_Scaling______", SN_CHECK);
referenceAddress = DfirstB(0xD9F78);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Intake_Temp_Sensor_Scaling______", SN_CHECK);
}
else
{
    Message("No reference to Intake_Temp_Sensor_Scaling______\n");
}

MakeNameEx(0xD9F00, "Intake_Temp_Sensor_Scaling_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD9E90, "Coolant_Temp_Sensor_Scaling______", SN_CHECK);
referenceAddress = DfirstB(0xD9E90);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Coolant_Temp_Sensor_Scaling______", SN_CHECK);
}
else
{
    Message("No reference to Coolant_Temp_Sensor_Scaling______\n");
}

MakeNameEx(0xD9E20, "Coolant_Temp_Sensor_Scaling_Y_AXIS_____", SN_CHECK);
MakeNameEx(0x4BCD8, "Fuel_Pump_Duty_____", SN_CHECK);
MakeNameEx(0xDA460, "Radiator_Fan_Modes_A_ECT______", SN_CHECK);
MakeNameEx(0xDA470, "Radiator_Fan_Modes_B_ECT______", SN_CHECK);
MakeNameEx(0xDA480, "Radiator_Fan_Modes_Veh_Speed______", SN_CHECK);
MakeNameEx(0xC308C, "Gear_Determination_Thresholds_A______", SN_CHECK);
MakeNameEx(0xC30A0, "Gear_Determination_Thresholds_B______", SN_CHECK);
MakeNameEx(0xC30B4, "Gear_Determination_Thresholds_C______", SN_CHECK);
MakeNameEx(0xD7CEE, "Idle_Speed_Target_A______", SN_CHECK);
referenceAddress = DfirstB(0xD7CEE);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_A______", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_A______\n");
}

MakeNameEx(0xD7448, "Idle_Speed_Target_A_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD7D2E, "Idle_Speed_Target_B______", SN_CHECK);
referenceAddress = DfirstB(0xD7D2E);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_B______", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_B______\n");
}

MakeNameEx(0xD7448, "Idle_Speed_Target_B_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD7D6E, "Idle_Speed_Target_C______", SN_CHECK);
referenceAddress = DfirstB(0xD7D6E);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_C______", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_C______\n");
}

MakeNameEx(0xD7448, "Idle_Speed_Target_C_Y_AXIS_____", SN_CHECK);
MakeNameEx(0xD7DAE, "Idle_Speed_Target_D_", SN_CHECK);
referenceAddress = DfirstB(0xD7DAE);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_D_", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_D_\n");
}

MakeNameEx(0xD7448, "Idle_Speed_Target_D_Y_AXIS", SN_CHECK);
MakeNameEx(0xA9160, "Force_Pass_Readiness_Monitors_______", SN_CHECK);
MakeNameEx(0xDA314, "Ignition_Dwell______", SN_CHECK);
referenceAddress = DfirstB(0xDA314);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Ignition_Dwell______", SN_CHECK);
}
else
{
    Message("No reference to Ignition_Dwell______\n");
}

MakeNameEx(0xDA2C0, "Ignition_Dwell_X_AXIS_____", SN_CHECK);
MakeNameEx(0xDA300, "Ignition_Dwell_Y_AXIS_____", SN_CHECK);
MakeNameEx(0x9C5DA, "P0000_PASS_CODE_NO_DTC_DETECTED_______", SN_CHECK);
MakeNameEx(0x9C5BD, "P0011_CAMSHAFT_POS_TIMING_OVERADVANCED_1______", SN_CHECK);
MakeNameEx(0x9C654, "P0014_EXHAUST_AVCS_SYSTEM_1_RANGEPERF", SN_CHECK);
MakeNameEx(0x9C64B, "P0016_CRANKSHAFTCAMSHAFT_CORRELATION_1A______", SN_CHECK);
MakeNameEx(0x9C65A, "P0017_CRANKCAM_TIMING_B_FAILURE_1", SN_CHECK);
MakeNameEx(0x9C64A, "P0018_CRANKSHAFTCAMSHAFT_CORRELATION_2A______", SN_CHECK);
MakeNameEx(0x9C659, "P0019_CRANKCAM_TIMING_B_FAILURE_2", SN_CHECK);
MakeNameEx(0x9C5BE, "P0021_CAMSHAFT_POS_TIMING_OVERADVANCED_2______", SN_CHECK);
MakeNameEx(0x9C653, "P0024_EXHAUST_AVCS_SYSTEM_2_RANGEPERF", SN_CHECK);
MakeNameEx(0x9C5FE, "P0030_FRONT_O2_SENSOR_RANGEPERF______", SN_CHECK);
MakeNameEx(0x9C5E9, "P0031_FRONT_O2_SENSOR_LOW_INPUT______", SN_CHECK);
MakeNameEx(0x9C5E7, "P0032_FRONT_O2_SENSOR_HIGH_INPUT______", SN_CHECK);
MakeNameEx(0x9C5E8, "P0037_REAR_O2_SENSOR_LOW_INPUT______", SN_CHECK);
MakeNameEx(0x9C5E6, "P0038_REAR_O2_SENSOR_HIGH_INPUT______", SN_CHECK);
MakeNameEx(0x9C5F9, "P0068_MAP_SENSOR_RANGEPERF______", SN_CHECK);
MakeNameEx(0x9C5FA, "P0101_MAF_SENSOR_RANGEPERF______", SN_CHECK);
MakeNameEx(0x9C599, "P0102_MAF_SENSOR_LOW_INPUT______", SN_CHECK);
MakeNameEx(0x9C59A, "P0103_MAF_SENSOR_HIGH_INPUT______", SN_CHECK);
MakeNameEx(0x9C5EA, "P0107_MAP_SENSOR_LOW_INPUT______", SN_CHECK);
MakeNameEx(0x9C5EB, "P0108_MAP_SENSOR_HIGH_INPUT______", SN_CHECK);
MakeNameEx(0x9C5E5, "P0111_IAT_SENSOR_RANGEPERF______", SN_CHECK);
MakeNameEx(0x9C5E3, "P0112_IAT_SENSOR_LOW_INPUT______", SN_CHECK);
MakeNameEx(0x9C5E4, "P0113_IAT_SENSOR_HIGH_INPUT______", SN_CHECK);
MakeNameEx(0x9C5A2, "P0117_COOLANT_TEMP_SENSOR_LOW_INPUT______", SN_CHECK);
MakeNameEx(0x9C5A3, "P0118_COOLANT_TEMP_SENSOR_HIGH_INPUT______", SN_CHECK);
MakeNameEx(0x9C5A0, "P0122_TPS_A_LOW_INPUT______", SN_CHECK);
MakeNameEx(0x9C5A1, "P0123_TPS_A_HIGH_INPUT______", SN_CHECK);
MakeNameEx(0x9C5A5, "P0125_INSUFFICIENT_COOLANT_TEMP_FUELING______", SN_CHECK);
MakeNameEx(0x9C633, "P0126_INSUFFICIENT_COOLANT_TEMP_OPERATION______", SN_CHECK);
MakeNameEx(0x9C5F0, "P0128_THERMOSTAT_MALFUNCTION______", SN_CHECK);
MakeNameEx(0x9C5DD, "P0131_FRONT_O2_SENSOR_LOW_INPUT______", SN_CHECK);
MakeNameEx(0x9C5DF, "P0132_FRONT_O2_SENSOR_HIGH_INPUT______", SN_CHECK);
MakeNameEx(0x9C5FC, "P0134_FRONT_O2_SENSOR_NO_ACTIVITY______", SN_CHECK);
MakeNameEx(0x9C5DC, "P0137_REAR_O2_SENSOR_LOW_VOLTAGE______", SN_CHECK);
MakeNameEx(0x9C5E1, "P0138_REAR_O2_SENSOR_HIGH_VOLTAGE______", SN_CHECK);
MakeNameEx(0x9C646, "P0140_REAR_O2_SENSOR_NO_ACTIVITY______", SN_CHECK);
MakeNameEx(0x9C5C6, "P0141_REAR_O2_SENSOR_MALFUNCTION_", SN_CHECK);
MakeNameEx(0x9C676, "P014C_O2_SENSOR_SLOW_RESPONSE_RICH_TO_LEAN_B1_S1", SN_CHECK);
MakeNameEx(0x9C675, "P014D_O2_SENSOR_SLOW_RESPONSE_LEAN_TO_RICH_B1_S1", SN_CHECK);
MakeNameEx(0x9C672, "P015A_O2_SENSOR_DELAYED_RESPONSE_RICH_TO_LEAN_B1_S1", SN_CHECK);
MakeNameEx(0x9C5D1, "P0171_SYSTEM_TOO_LEAN______", SN_CHECK);
MakeNameEx(0x9C5D2, "P0172_SYSTEM_TOO_RICH______", SN_CHECK);
MakeNameEx(0x9C605, "P0222_TPS_B_LOW_INPUT______", SN_CHECK);
MakeNameEx(0x9C606, "P0223_TPS_B_HIGH_INPUT______", SN_CHECK);
MakeNameEx(0x9C5F8, "P0230_FUEL_PUMP_PRIMARY_CIRCUIT______", SN_CHECK);
MakeNameEx(0x9C5F7, "P0244_WASTEGATE_SOLENOID_A_RANGEPERF______", SN_CHECK);
MakeNameEx(0x9C5F5, "P0245_WASTEGATE_SOLENOID_A_LOW______", SN_CHECK);
MakeNameEx(0x9C5F6, "P0246_WASTEGATE_SOLENOID_A_HIGH______", SN_CHECK);
MakeNameEx(0x9C5D3, "P0301_MISFIRE_CYLINDER_1______", SN_CHECK);
MakeNameEx(0x9C5D4, "P0302_MISFIRE_CYLINDER_2______", SN_CHECK);
MakeNameEx(0x9C5D5, "P0303_MISFIRE_CYLINDER_3______", SN_CHECK);
MakeNameEx(0x9C5D6, "P0304_MISFIRE_CYLINDER_4______", SN_CHECK);
MakeNameEx(0x9C59E, "P0327_KNOCK_SENSOR_1_LOW_INPUT______", SN_CHECK);
MakeNameEx(0x9C59F, "P0328_KNOCK_SENSOR_1_HIGH_INPUT______", SN_CHECK);
MakeNameEx(0x9C594, "P0335_CRANKSHAFT_POS_SENSOR_A_MALFUNCTION______", SN_CHECK);
MakeNameEx(0x9C595, "P0336_CRANKSHAFT_POS_SENSOR_A_RANGEPERF______", SN_CHECK);
MakeNameEx(0x9C618, "P0340_CAMSHAFT_POS_SENSOR_A_MALFUNCTION______", SN_CHECK);
MakeNameEx(0x9C617, "P0345_CAMSHAFT_POS_SENSOR_A_BANK_2______", SN_CHECK);
MakeNameEx(0x9C616, "P0365_CAMSHAFT_POS_SENSOR_B_BANK_1", SN_CHECK);
MakeNameEx(0x9C615, "P0390_CAMSHAFT_POS_SENSOR_B_BANK_2", SN_CHECK);
MakeNameEx(0x9C640, "P0410_SECONDARY_AIR_PUMP_SYSTEM______", SN_CHECK);
MakeNameEx(0x9C63F, "P0411_SECONDARY_AIR_PUMP_INCORRECT_FLOW______", SN_CHECK);
MakeNameEx(0x9C644, "P0413_SECONDARY_AIR_PUMP_A_OPEN______", SN_CHECK);
MakeNameEx(0x9C648, "P0414_SECONDARY_AIR_PUMP_A_SHORTED______", SN_CHECK);
MakeNameEx(0x9C652, "P0416_SECONDARY_AIR_PUMP_B_OPEN______", SN_CHECK);
MakeNameEx(0x9C651, "P0417_SECONDARY_AIR_PUMP_B_SHORTED______", SN_CHECK);
MakeNameEx(0x9C645, "P0418_SECONDARY_AIR_PUMP_RELAY_A______", SN_CHECK);
MakeNameEx(0x9C5CD, "P0420_CAT_EFFICIENCY_BELOW_THRESHOLD______", SN_CHECK);
MakeNameEx(0x9C67C, "P0441_EVAP_INCORRECT_PURGE_FLOW______", SN_CHECK);
MakeNameEx(0x9C67B, "P0451_EVAP_PRESSURE_SENSOR_RANGEPERF______", SN_CHECK);
MakeNameEx(0x9C66E, "P0452_EVAP_PRESSURE_SENSOR_LOW_INPUT______", SN_CHECK);
MakeNameEx(0x9C66D, "P0453_EVAP_PRESSURE_SENSOR_HIGH_INPUT______", SN_CHECK);
MakeNameEx(0x9C67A, "P0455_EVAP_EMISSION_CONTROL_SYSTEM_LEAK_DETECTED_GROSS_LEAK_", SN_CHECK);
MakeNameEx(0x9C5CF, "P0456_EVAP_LEAK_DETECTED_VERY_SMALL______", SN_CHECK);
MakeNameEx(0x9C5C1, "P0458_EVAP_PURGE_VALVE_CIRCUIT_LOW______", SN_CHECK);
MakeNameEx(0x9C5C2, "P0459_EVAP_PURGE_VALVE_CIRCUIT_HIGH______", SN_CHECK);
MakeNameEx(0x9C5A8, "P0461_FUEL_LEVEL_SENSOR_RANGEPERF______", SN_CHECK);
MakeNameEx(0x9C5A6, "P0462_FUEL_LEVEL_SENSOR_LOW_INPUT______", SN_CHECK);
MakeNameEx(0x9C5A7, "P0463_FUEL_LEVEL_SENSOR_HIGH_INPUT______", SN_CHECK);
MakeNameEx(0x9C59B, "P0500_VEHICLE_SPEED_SENSOR_A______", SN_CHECK);
MakeNameEx(0x9C5BB, "P0506_IDLE_CONTROL_RPM_LOWER_THAN_EXPECTED______", SN_CHECK);
MakeNameEx(0x9C5BC, "P0507_IDLE_CONTROL_RPM_HIGH_THAN_EXPECTED______", SN_CHECK);
MakeNameEx(0x9C668, "P050A_COLD_START_IDLE_AIR_CONTROL_SYSTEM_PERFORMANCE_", SN_CHECK);
MakeNameEx(0x9C667, "P050B_COLD_START_IGNITION_TIMING_PERFORMANCE_", SN_CHECK);
MakeNameEx(0x9C5AA, "P0512_STARTER_REQUEST_CIRCUIT______", SN_CHECK);
MakeNameEx(0x9C598, "P0604_CONTROL_MODULE_RAM_ERROR______", SN_CHECK);
MakeNameEx(0x9C619, "P0605_CONTROL_MODULE_ROM_ERROR______", SN_CHECK);
MakeNameEx(0x9C60D, "P0607_CONTROL_MODULE_PERFORMANCE______", SN_CHECK);
MakeNameEx(0x9C60C, "P0638_THROTTLE_ACTUATOR_RANGEPERF______", SN_CHECK);
MakeNameEx(0x9C5AE, "P0851_NEUTRAL_SWITCH_INPUT_LOW______", SN_CHECK);
MakeNameEx(0x9C5B2, "P0852_NEUTRAL_SWITCH_INPUT_HIGH______", SN_CHECK);
MakeNameEx(0x9C5C9, "P1152_FRONT_O2_SENSOR_RANGEPERF_LOW_B1_S1______", SN_CHECK);
MakeNameEx(0x9C5CA, "P1153_FRONT_O2_SENSOR_RANGEPERF_HIGH_B1_S1______", SN_CHECK);
MakeNameEx(0x9C607, "P1160_ABNORMAL_RETURN_SPRING______", SN_CHECK);
MakeNameEx(0x9C5BF, "P1400_FUEL_TANK_PRESSURE_SOL_LOW______", SN_CHECK);
MakeNameEx(0x9C64C, "P1410_SECONDARY_AIR_PUMP_VALVE_STUCK_OPEN______", SN_CHECK);
MakeNameEx(0x9C649, "P1418_SECONDARY_AIR_PUMP_CIRCUIT_SHORTED______", SN_CHECK);
MakeNameEx(0x9C5C0, "P1420_FUEL_TANK_PRESSURE_SOL_HIGH_INPUT______", SN_CHECK);
MakeNameEx(0x9C679, "P1449_EVAPORATIVE_EMISSION_CONT_SYS_AIR_FILTER_CLOG_", SN_CHECK);
MakeNameEx(0x9C678, "P1451_EVAPORATIVE_EMISSION_CONT_SYS_", SN_CHECK);
MakeNameEx(0x9C677, "P1458_CANISTER_PURGE_CONTROL_SOLENOID_VALVE_2_LOW_", SN_CHECK);
MakeNameEx(0x9C681, "P1459_CANISTER_PURGE_CONTROL_SOLENOID_VALVE_2_HIGH_", SN_CHECK);
MakeNameEx(0x9C5F1, "P1491_PCV_BLOWBY_FUNCTION_PROBLEM______", SN_CHECK);
MakeNameEx(0x9C5A9, "P1518_STARTER_SWITCH_LOW_INPUT_", SN_CHECK);
MakeNameEx(0x9C657, "P1519_IMRC_STUCK_CLOSED______", SN_CHECK);
MakeNameEx(0x9C656, "P1520_IMRC_CIRCUIT_MALFUNCTION______", SN_CHECK);
MakeNameEx(0x9C5F2, "P1560_BACKUP_VOLTAGE_MALFUNCTION______", SN_CHECK);
MakeNameEx(0x9C655, "P1616_SBDS_INTERACTIVE_CODES______", SN_CHECK);
MakeNameEx(0x9C62E, "P2004_TGV_INTAKE_MANIFOLD_RUNNER_1_STUCK_OPEN______", SN_CHECK);
MakeNameEx(0x9C630, "P2005_TGV_INTAKE_MANIFOLD_RUNNER_2_STUCK_OPEN______", SN_CHECK);
MakeNameEx(0x9C62F, "P2006_TGV_INTAKE_MANIFOLD_RUNNER_1_STUCK_CLOSED______", SN_CHECK);
MakeNameEx(0x9C631, "P2007_TGV_INTAKE_MANIFOLD_RUNNER_2_STUCK_CLOSED______", SN_CHECK);
MakeNameEx(0x9C63C, "P2008_TGV_INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_OPEN______", SN_CHECK);
MakeNameEx(0x9C63A, "P2009_TGV_INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_LOW______", SN_CHECK);
MakeNameEx(0x9C63D, "P2011_TGV_INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_OPEN______", SN_CHECK);
MakeNameEx(0x9C63B, "P2012_TGV_INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_LOW______", SN_CHECK);
MakeNameEx(0x9C636, "P2016_TGV_INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_LOW______", SN_CHECK);
MakeNameEx(0x9C637, "P2017_TGV_INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_HIGH______", SN_CHECK);
MakeNameEx(0x9C638, "P2021_TGV_INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_LOW______", SN_CHECK);
MakeNameEx(0x9C639, "P2022_TGV_INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_HIGH______", SN_CHECK);
MakeNameEx(0x9C621, "P2088_OCV_SOLENOID_A1_CIRCUIT_OPEN______", SN_CHECK);
MakeNameEx(0x9C620, "P2089_OCV_SOLENOID_A1_CIRCUIT_SHORT______", SN_CHECK);
MakeNameEx(0x9C61D, "P2090_OCV_SOLENOID_B1_CIRCUIT_OPEN", SN_CHECK);
MakeNameEx(0x9C61C, "P2091_OCV_SOLENOID_B1_CIRCUIT_SHORT", SN_CHECK);
MakeNameEx(0x9C61F, "P2092_OCV_SOLENOID_A2_CIRCUIT_OPEN______", SN_CHECK);
MakeNameEx(0x9C61E, "P2093_OCV_SOLENOID_A2_CIRCUIT_SHORT______", SN_CHECK);
MakeNameEx(0x9C61B, "P2094_OCV_SOLENOID_B2_CIRCUIT_OPEN", SN_CHECK);
MakeNameEx(0x9C61A, "P2095_OCV_SOLENOID_B2_CIRCUIT_SHORT", SN_CHECK);
MakeNameEx(0x9C60B, "P2096_POST_CATALYST_TOO_LEAN_B1______", SN_CHECK);
MakeNameEx(0x9C614, "P2097_POST_CATALYST_TOO_RICH_B1______", SN_CHECK);
MakeNameEx(0x9C60A, "P2101_THROTTLE_ACTUATOR_CIRCUIT_RANGEPERF______", SN_CHECK);
MakeNameEx(0x9C608, "P2102_THROTTLE_ACTUATOR_CIRCUIT_LOW______", SN_CHECK);
MakeNameEx(0x9C609, "P2103_THROTTLE_ACTUATOR_CIRCUIT_HIGH______", SN_CHECK);
MakeNameEx(0x9C604, "P2109_TPS_A_MINIMUM_STOP_PERF______", SN_CHECK);
MakeNameEx(0x9C611, "P2122_TPS_D_CIRCUIT_LOW_INPUT______", SN_CHECK);
MakeNameEx(0x9C612, "P2123_TPS_D_CIRCUIT_HIGH_INPUT______", SN_CHECK);
MakeNameEx(0x9C60F, "P2127_TPS_E_CIRCUIT_LOW_INPUT______", SN_CHECK);
MakeNameEx(0x9C610, "P2128_TPS_E_CIRCUIT_HIGH_INPUT______", SN_CHECK);
MakeNameEx(0x9C613, "P2135_TPS_AB_VOLTAGE______", SN_CHECK);
MakeNameEx(0x9C60E, "P2138_TPS_DE_VOLTAGE______", SN_CHECK);
MakeNameEx(0x9C67E, "P219A_BANK_1_AFR_IMBALANCE_", SN_CHECK);
MakeNameEx(0x9C66C, "P2401_EVAP_LEAK_DETECTION_PUMP_CONTROL_CIRCUIT_LOW_", SN_CHECK);
MakeNameEx(0x9C680, "P2402_EVAP_LEAK_DETECTION_PUMP_CONTROL_CIRCUIT_HIGH_", SN_CHECK);
MakeNameEx(0x9C66B, "P2419_EVAP_SWITCHING_VALVE_LOW______", SN_CHECK);
MakeNameEx(0x9C66A, "P2420_EVAP_SWITCHING_VALVE_HIGH______", SN_CHECK);
MakeNameEx(0x9C641, "P2431_SECONDARY_AIR_PUMP_CIRCUIT_RANGEPERF______", SN_CHECK);
MakeNameEx(0x9C643, "P2432_SECONDARY_AIR_PUMP_CIRCUIT_LOW______", SN_CHECK);
MakeNameEx(0x9C642, "P2433_SECONDARY_AIR_PUMP_CIRCUIT_HIGH______", SN_CHECK);
MakeNameEx(0x9C650, "P2440_SECONDARY_AIR_PUMP_VALVE_1_STUCK_OPEN______", SN_CHECK);
MakeNameEx(0x9C64F, "P2441_SECONDARY_AIR_PUMP_VALVE_1_STUCK_CLOSED______", SN_CHECK);
MakeNameEx(0x9C64E, "P2442_SECONDARY_AIR_PUMP_VALVE_2_STUCK_OPEN______", SN_CHECK);
MakeNameEx(0x9C64D, "P2443_SECONDARY_AIR_PUMP_2_STUCK_CLOSED______", SN_CHECK);
MakeNameEx(0x9C63E, "P2444_SECONDARY_AIR_PUMP_1_STUCK_ON_B1______", SN_CHECK);
MakeNameEx(0x9C665, "U0073_CAN_COMMUNICATION_BUS_A_OFF_", SN_CHECK);
MakeNameEx(0x9C662, "U0101_CAN_LOST_COMMUNICATION_WITH_TCM_", SN_CHECK);
MakeNameEx(0x9C664, "U0122_CAN_LOST_COMMUNICATION_WITH_VDC_", SN_CHECK);
MakeNameEx(0x9C660, "U0140_CAN_LOST_COMMUNICATION_WITH_BIU_", SN_CHECK);
MakeNameEx(0x9C661, "U0402_CAN_INVALID_DATA_RECEIVED_FROM_TCM_", SN_CHECK);
MakeNameEx(0x9C663, "U0416_CAN_INVALID_DATA_RECEIVED_FROM_VDC_", SN_CHECK);
MakeNameEx(0x9C65F, "U0422_CAN_INVALID_DATA_RECEIVED_FROM_BIU_", SN_CHECK);
MakeNameEx(0xC1038, "Target_Boost________", SN_CHECK);
referenceAddress = DfirstB(0xC1038);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Boost________", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost________\n");
}

MakeNameEx(0xC0FC8, "Target_Boost_X_AXIS______", SN_CHECK);
MakeNameEx(0xC1000, "Target_Boost_Y_AXIS______", SN_CHECK);
MakeNameEx(0xC0B4C, "Target_Boost_Compensation_ECT_______", SN_CHECK);
referenceAddress = DfirstB(0xC0B4C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_ECT_______", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_ECT_______\n");
}

MakeNameEx(0xC0A6C, "Target_Boost_Compensation_ECT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xC0A64, "Target_Boost_Compensation_1st_Gear_______", SN_CHECK);
MakeNameEx(0xC0A60, "Target_Boost_Compensation_1st_Gear_Speed_Disable_______", SN_CHECK);
MakeNameEx(0xC0CA8, "Target_Boost_Compensation_IAT________", SN_CHECK);
referenceAddress = DfirstB(0xC0CA8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_IAT________", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_IAT________\n");
}

MakeNameEx(0xC0C7C, "Target_Boost_Compensation_IAT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xC0D44, "Target_Boost_Compensation_Atm_Pressure________", SN_CHECK);
referenceAddress = DfirstB(0xC0D44);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_Atm_Pressure________", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_Atm_Pressure________\n");
}

MakeNameEx(0xC0D14, "Target_Boost_Compensation_Atm_Pressure_X_AXIS______", SN_CHECK);
MakeNameEx(0xC0D2C, "Target_Boost_Compensation_Atm_Pressure_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD31FC, "Boost_Limit_Fuel_Cut________", SN_CHECK);
referenceAddress = DfirstB(0xD31FC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Boost_Limit_Fuel_Cut________", SN_CHECK);
}
else
{
    Message("No reference to Boost_Limit_Fuel_Cut________\n");
}

MakeNameEx(0xD31CC, "Boost_Limit_Fuel_Cut_X_AXIS______", SN_CHECK);
MakeNameEx(0xD31E4, "Boost_Limit_Fuel_Cut_Y_AXIS______", SN_CHECK);
MakeNameEx(0xC0A54, "Boost_Control_Disable_IAM_______", SN_CHECK);
MakeNameEx(0xC0A50, "Boost_Control_Disable_Fine_Correction_______", SN_CHECK);
MakeNameEx(0xC0A05, "Boost_Control_Disable_Delay_Fine_Correction_______", SN_CHECK);
MakeNameEx(0xC0EEC, "Initial_Wastegate_Duty________", SN_CHECK);
referenceAddress = DfirstB(0xC0EEC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Initial_Wastegate_Duty________", SN_CHECK);
}
else
{
    Message("No reference to Initial_Wastegate_Duty________\n");
}

MakeNameEx(0xC0E98, "Initial_Wastegate_Duty_X_AXIS______", SN_CHECK);
MakeNameEx(0xC0EC4, "Initial_Wastegate_Duty_Y_AXIS______", SN_CHECK);
MakeNameEx(0xC0DBC, "Max_Wastegate_Duty________", SN_CHECK);
referenceAddress = DfirstB(0xC0DBC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Max_Wastegate_Duty________", SN_CHECK);
}
else
{
    Message("No reference to Max_Wastegate_Duty________\n");
}

MakeNameEx(0xC0D68, "Max_Wastegate_Duty_X_AXIS______", SN_CHECK);
MakeNameEx(0xC0D94, "Max_Wastegate_Duty_Y_AXIS______", SN_CHECK);
MakeNameEx(0x13F3C, "Max_Wastegate_Duty_Limit_PostCompensation_______", SN_CHECK);
MakeNameEx(0xC0AEC, "InitialMax_Wastegate_Duty_Compensation_IAT_______", SN_CHECK);
referenceAddress = DfirstB(0xC0AEC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_IAT_______", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_IAT_______\n");
}

MakeNameEx(0xC0AAC, "InitialMax_Wastegate_Duty_Compensation_IAT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xC0B0C, "InitialMax_Wastegate_Duty_Compensation_ECT_______", SN_CHECK);
referenceAddress = DfirstB(0xC0B0C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_ECT_______", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_ECT_______\n");
}

MakeNameEx(0xC0A6C, "InitialMax_Wastegate_Duty_Compensation_ECT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xC0CFC, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_______", SN_CHECK);
referenceAddress = DfirstB(0xC0CFC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_______", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_______\n");
}

MakeNameEx(0xC0CD4, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_X_AXIS______", SN_CHECK);
MakeNameEx(0xC0CEC, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_Y_AXIS______", SN_CHECK);
MakeNameEx(0xC0B80, "Turbo_Dynamics_Proportional_______", SN_CHECK);
referenceAddress = DfirstB(0xC0B80);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Proportional_______", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Proportional_______\n");
}

MakeNameEx(0xC0B5C, "Turbo_Dynamics_Proportional_Y_AXIS______", SN_CHECK);
MakeNameEx(0xC0BF0, "Turbo_Dynamics_Integral_Positive_______", SN_CHECK);
referenceAddress = DfirstB(0xC0BF0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Integral_Positive_______", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Integral_Positive_______\n");
}

MakeNameEx(0xC0BCC, "Turbo_Dynamics_Integral_Positive_Y_AXIS______", SN_CHECK);
MakeNameEx(0xC0BB8, "Turbo_Dynamics_Integral_Negative_______", SN_CHECK);
referenceAddress = DfirstB(0xC0BB8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Integral_Negative_______", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Integral_Negative_______\n");
}

MakeNameEx(0xC0B94, "Turbo_Dynamics_Integral_Negative_Y_AXIS______", SN_CHECK);
MakeNameEx(0xC0B1C, "TD_Proportional_Compensation_IAT_______", SN_CHECK);
referenceAddress = DfirstB(0xC0B1C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Proportional_Compensation_IAT_______", SN_CHECK);
}
else
{
    Message("No reference to TD_Proportional_Compensation_IAT_______\n");
}

MakeNameEx(0xC0AAC, "TD_Proportional_Compensation_IAT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xC0B3C, "TD_Integral_Positive_Compensation_IAT_______", SN_CHECK);
referenceAddress = DfirstB(0xC0B3C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Integral_Positive_Compensation_IAT_______", SN_CHECK);
}
else
{
    Message("No reference to TD_Integral_Positive_Compensation_IAT_______\n");
}

MakeNameEx(0xC0AAC, "TD_Integral_Positive_Compensation_IAT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xC0B2C, "TD_Integral_Negative_Compensation_IAT_______", SN_CHECK);
referenceAddress = DfirstB(0xC0B2C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Integral_Negative_Compensation_IAT_______", SN_CHECK);
}
else
{
    Message("No reference to TD_Integral_Negative_Compensation_IAT_______\n");
}

MakeNameEx(0xC0AAC, "TD_Integral_Negative_Compensation_IAT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xC0A40, "TD_Activation_Thresholds_RPM_______", SN_CHECK);
MakeNameEx(0xC0A2C, "TD_Activation_Thresholds_Target_Boost________", SN_CHECK);
MakeNameEx(0xC0A48, "TD_Integral_Cumulative_Range_WGDC_Correction_______", SN_CHECK);
MakeNameEx(0xC0A34, "TD_Integral_Negative_Activation_Boost_Error_______", SN_CHECK);
MakeNameEx(0xC0A38, "TD_Integral_Positive_Activation_Boost_Error_______", SN_CHECK);
MakeNameEx(0xC0A3C, "TD_Integral_Negative_Activation_Wastegate_Duty_______", SN_CHECK);
MakeNameEx(0xD9B50, "Manifold_Pressure_Sensor_Scaling________", SN_CHECK);
MakeNameEx(0xD9AB2, "Manifold_Pressure_Sensor_Limits_CEL_______", SN_CHECK);
MakeNameEx(0xD9A66, "Manifold_Pressure_Sensor_CEL_Delays_______", SN_CHECK);
MakeNameEx(0xD0E78, "Primary_Open_Loop_Fueling_KCA_Additive_B_Low_", SN_CHECK);
referenceAddress = DfirstB(0xD0E78);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_KCA_Additive_B_Low_", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_KCA_Additive_B_Low_\n");
}

MakeNameEx(0xD0DE4, "Primary_Open_Loop_Fueling_KCA_Additive_B_Low_X_AXIS_", SN_CHECK);
MakeNameEx(0xD0E30, "Primary_Open_Loop_Fueling_KCA_Additive_B_Low_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD0A8C, "Primary_Open_Loop_Fueling_KCA_Additive_B_High_", SN_CHECK);
referenceAddress = DfirstB(0xD0A8C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_KCA_Additive_B_High_", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_KCA_Additive_B_High_\n");
}

MakeNameEx(0xD09F8, "Primary_Open_Loop_Fueling_KCA_Additive_B_High_X_AXIS_", SN_CHECK);
MakeNameEx(0xD0A44, "Primary_Open_Loop_Fueling_KCA_Additive_B_High_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD0C78, "Primary_Open_Loop_Fueling_Failsafe_______", SN_CHECK);
referenceAddress = DfirstB(0xD0C78);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Failsafe_______", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Failsafe_______\n");
}

MakeNameEx(0xD0BE4, "Primary_Open_Loop_Fueling_Failsafe_X_AXIS______", SN_CHECK);
MakeNameEx(0xD0C30, "Primary_Open_Loop_Fueling_Failsafe_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD1064, "Primary_Open_Loop_Fueling_KCA_Alternate_Mode_", SN_CHECK);
referenceAddress = DfirstB(0xD1064);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_KCA_Alternate_Mode_", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_KCA_Alternate_Mode_\n");
}

MakeNameEx(0xD0FD0, "Primary_Open_Loop_Fueling_KCA_Alternate_Mode_X_AXIS_", SN_CHECK);
MakeNameEx(0xD101C, "Primary_Open_Loop_Fueling_KCA_Alternate_Mode_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD1250, "Primary_Open_Loop_Fueling_Failsafe_KCA_Alternate_Mode_", SN_CHECK);
referenceAddress = DfirstB(0xD1250);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Failsafe_KCA_Alternate_Mode_", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Failsafe_KCA_Alternate_Mode_\n");
}

MakeNameEx(0xD11BC, "Primary_Open_Loop_Fueling_Failsafe_KCA_Alternate_Mode_X_AXIS_", SN_CHECK);
MakeNameEx(0xD1208, "Primary_Open_Loop_Fueling_Failsafe_KCA_Alternate_Mode_Y_AXIS_", SN_CHECK);
MakeNameEx(0xCCDC8, "Primary_Open_Loop_Fuel_Map_Switch_IAM_______", SN_CHECK);
MakeNameEx(0xCCDCC, "Minimum_Active_Primary_Open_Loop_Enrichment_______", SN_CHECK);
MakeNameEx(0xCD9BC, "Minimum_Primary_Open_Loop_Enrichment_Throttle_______", SN_CHECK);
referenceAddress = DfirstB(0xCD9BC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Throttle_______", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Throttle_______\n");
}

MakeNameEx(0xCD9A4, "Minimum_Primary_Open_Loop_Enrichment_Throttle_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCD9E0, "Minimum_Primary_Open_Loop_Enrichment_Accelerator_______", SN_CHECK);
referenceAddress = DfirstB(0xCD9E0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Accelerator_______", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Accelerator_______\n");
}

MakeNameEx(0xCD9C4, "Minimum_Primary_Open_Loop_Enrichment_Accelerator_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCF2F4, "Primary_Open_Loop_Fueling_Compensation_ECT_______", SN_CHECK);
referenceAddress = DfirstB(0xCF2F4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_ECT_______", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_ECT_______\n");
}

MakeNameEx(0xCD280, "Primary_Open_Loop_Fueling_Compensation_ECT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCD94C, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation________", SN_CHECK);
referenceAddress = DfirstB(0xCD94C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_Timing_Compensation________", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_Timing_Compensation________\n");
}

MakeNameEx(0xCD934, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD9DEC, "Front_Oxygen_Sensor_Scaling_______", SN_CHECK);
referenceAddress = DfirstB(0xD9DEC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Scaling_______", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Scaling_______\n");
}

MakeNameEx(0xD9DB8, "Front_Oxygen_Sensor_Scaling_Y_AXIS______", SN_CHECK);
MakeNameEx(0x2208C, "Front_Oxygen_Sensor_Rich_Limit_______", SN_CHECK);
MakeNameEx(0xC3300, "Front_Oxygen_Sensor_Compensation_Atm_Pressure_______", SN_CHECK);
referenceAddress = DfirstB(0xC3300);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Compensation_Atm_Pressure_______", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Compensation_Atm_Pressure_______\n");
}

MakeNameEx(0xC32F0, "Front_Oxygen_Sensor_Compensation_Atm_Pressure_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD21D4, "CL_Fueling_Target_Compensation_A_Load_______", SN_CHECK);
referenceAddress = DfirstB(0xD21D4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_A_Load_______", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_A_Load_______\n");
}

MakeNameEx(0xD2178, "CL_Fueling_Target_Compensation_A_Load_X_AXIS______", SN_CHECK);
MakeNameEx(0xD21A8, "CL_Fueling_Target_Compensation_A_Load_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD24AC, "CL_Fueling_Target_Compensation_B_Load_______", SN_CHECK);
referenceAddress = DfirstB(0xD24AC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_B_Load_______", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_B_Load_______\n");
}

MakeNameEx(0xD2440, "CL_Fueling_Target_Compensation_B_Load_X_AXIS______", SN_CHECK);
MakeNameEx(0xD2478, "CL_Fueling_Target_Compensation_B_Load_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD20AC, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_______", SN_CHECK);
referenceAddress = DfirstB(0xD20AC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Imm_Cruise_ECT_______", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Imm_Cruise_ECT_______\n");
}

MakeNameEx(0xCD280, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_X_AXIS______", SN_CHECK);
MakeNameEx(0xD20A0, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD2118, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_______", SN_CHECK);
referenceAddress = DfirstB(0xD2118);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_______", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_______\n");
}

MakeNameEx(0xCD280, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_X_AXIS______", SN_CHECK);
MakeNameEx(0xD210C, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCCBF8, "CL_Fueling_Target_Compensation_ECT_Disable__", SN_CHECK);
MakeNameEx(0xCC8CE, "CL_to_OL_Delay________", SN_CHECK);
MakeNameEx(0xCC8C8, "CL_to_OL_DelaySwitch_SIDRIVE_Intelligent__", SN_CHECK);
MakeNameEx(0xCD994, "CL_to_OL_Transition_with_Delay_Throttle_______", SN_CHECK);
referenceAddress = DfirstB(0xCD994);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Throttle_______", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Throttle_______\n");
}

MakeNameEx(0xCD954, "CL_to_OL_Transition_with_Delay_Throttle_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCCDD4, "CL_to_OL_Transition_with_Delay_Throttle_Hysteresis_______", SN_CHECK);
MakeNameEx(0xCF220, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width_______", SN_CHECK);
referenceAddress = DfirstB(0xCF220);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Base_Pulse_Width_______", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Base_Pulse_Width_______\n");
}

MakeNameEx(0xCF1E0, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCCDD0, "CL_to_OL_Transition_with_Delay_BPW_Hysteresis_______", SN_CHECK);
MakeNameEx(0xCF268, "CL_to_OL_Transition_Counter_Step_Value_MAF_______", SN_CHECK);
referenceAddress = DfirstB(0xCF268);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_Counter_Step_Value_MAF_______", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_Counter_Step_Value_MAF_______\n");
}

MakeNameEx(0xCF240, "CL_to_OL_Transition_Counter_Step_Value_MAF_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCCE34, "CL_Delay_Maximum_Throttle_______", SN_CHECK);
MakeNameEx(0xCCE50, "CL_Delay_Maximum_Vehicle_Speed_______", SN_CHECK);
MakeNameEx(0xCCDD8, "CL_Delay_Minimum_ECT_______", SN_CHECK);
MakeNameEx(0xCCE60, "CL_Delay_Maximum_Engine_Load_______", SN_CHECK);
MakeNameEx(0xCC8C6, "CL_Delay_Engine_Load_Counter_Threshold_______", SN_CHECK);
MakeNameEx(0xCCDDC, "CL_Delay_Maximum_Engine_Speed_Per_Gear_______", SN_CHECK);
MakeNameEx(0xCCE04, "CL_Delay_Maximum_Engine_Speed_Neutral_______", SN_CHECK);
MakeNameEx(0xD1C6C, "Injector_Latency________", SN_CHECK);
referenceAddress = DfirstB(0xD1C6C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Injector_Latency________", SN_CHECK);
}
else
{
    Message("No reference to Injector_Latency________\n");
}

MakeNameEx(0xD1C4C, "Injector_Latency_X_AXIS______", SN_CHECK);
MakeNameEx(0xD1C60, "Injector_Latency_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCCA68, "Injector_Flow_Scaling_______", SN_CHECK);
MakeNameEx(0xD1490, "Per_Injector_Pulse_Width_Compensation_A_______", SN_CHECK);
referenceAddress = DfirstB(0xD1490);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_A_______", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_A_______\n");
}

MakeNameEx(0xD1410, "Per_Injector_Pulse_Width_Compensation_A_X_AXIS______", SN_CHECK);
MakeNameEx(0xD1450, "Per_Injector_Pulse_Width_Compensation_A_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD1610, "Per_Injector_Pulse_Width_Compensation_B_______", SN_CHECK);
referenceAddress = DfirstB(0xD1610);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_B_______", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_B_______\n");
}

MakeNameEx(0xD1590, "Per_Injector_Pulse_Width_Compensation_B_X_AXIS______", SN_CHECK);
MakeNameEx(0xD15D0, "Per_Injector_Pulse_Width_Compensation_B_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD1790, "Per_Injector_Pulse_Width_Compensation_C_______", SN_CHECK);
referenceAddress = DfirstB(0xD1790);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_C_______", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_C_______\n");
}

MakeNameEx(0xD1710, "Per_Injector_Pulse_Width_Compensation_C_X_AXIS______", SN_CHECK);
MakeNameEx(0xD1750, "Per_Injector_Pulse_Width_Compensation_C_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD1910, "Per_Injector_Pulse_Width_Compensation_D_______", SN_CHECK);
referenceAddress = DfirstB(0xD1910);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_D_______", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_D_______\n");
}

MakeNameEx(0xD1890, "Per_Injector_Pulse_Width_Compensation_D_X_AXIS______", SN_CHECK);
MakeNameEx(0xD18D0, "Per_Injector_Pulse_Width_Compensation_D_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCDF06, "Cranking_Fuel_Injector_Pulse_Width_A_ECT_______", SN_CHECK);
referenceAddress = DfirstB(0xCDF06);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_A_ECT_______", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_A_ECT_______\n");
}

MakeNameEx(0xCD280, "Cranking_Fuel_Injector_Pulse_Width_A_ECT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCDF26, "Cranking_Fuel_Injector_Pulse_Width_B_ECT_______", SN_CHECK);
referenceAddress = DfirstB(0xCDF26);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_B_ECT_______", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_B_ECT_______\n");
}

MakeNameEx(0xCD280, "Cranking_Fuel_Injector_Pulse_Width_B_ECT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCDF46, "Cranking_Fuel_Injector_Pulse_Width_C_ECT_______", SN_CHECK);
referenceAddress = DfirstB(0xCDF46);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_C_ECT_______", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_C_ECT_______\n");
}

MakeNameEx(0xCD280, "Cranking_Fuel_Injector_Pulse_Width_C_ECT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCDF66, "Cranking_Fuel_Injector_Pulse_Width_D_ECT_______", SN_CHECK);
referenceAddress = DfirstB(0xCDF66);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_D_ECT_______", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_D_ECT_______\n");
}

MakeNameEx(0xCD280, "Cranking_Fuel_Injector_Pulse_Width_D_ECT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCDF86, "Cranking_Fuel_Injector_Pulse_Width_E_ECT_______", SN_CHECK);
referenceAddress = DfirstB(0xCDF86);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_E_ECT_______", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_E_ECT_______\n");
}

MakeNameEx(0xCD280, "Cranking_Fuel_Injector_Pulse_Width_E_ECT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCDFA6, "Cranking_Fuel_Injector_Pulse_Width_F_ECT_______", SN_CHECK);
referenceAddress = DfirstB(0xCDFA6);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_F_ECT_______", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_F_ECT_______\n");
}

MakeNameEx(0xCD280, "Cranking_Fuel_Injector_Pulse_Width_F_ECT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD042C, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_______", SN_CHECK);
referenceAddress = DfirstB(0xD042C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_______", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_______\n");
}

MakeNameEx(0xD03FC, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_X_AXIS______", SN_CHECK);
MakeNameEx(0xD0410, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD03D8, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_______", SN_CHECK);
referenceAddress = DfirstB(0xD03D8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_______", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_______\n");
}

MakeNameEx(0xD03A8, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_X_AXIS______", SN_CHECK);
MakeNameEx(0xD03BC, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCD484, "Cranking_Fuel_IPW_Compensation_MAP_______", SN_CHECK);
referenceAddress = DfirstB(0xCD484);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_MAP_______", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_MAP_______\n");
}

MakeNameEx(0xCD45C, "Cranking_Fuel_IPW_Compensation_MAP_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCD4B8, "Cranking_Fuel_IPW_Compensation_Accelerator_______", SN_CHECK);
referenceAddress = DfirstB(0xCD4B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Accelerator_______", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Accelerator_______\n");
}

MakeNameEx(0xCD490, "Cranking_Fuel_IPW_Compensation_Accelerator_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCD4D8, "Cranking_Fuel_IPW_Compensation_IAT_______", SN_CHECK);
referenceAddress = DfirstB(0xCD4D8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_IAT_______", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_IAT_______\n");
}

MakeNameEx(0xCD4C4, "Cranking_Fuel_IPW_Compensation_IAT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCFA78, "Throttle_Tipin_Enrichment_A_______", SN_CHECK);
referenceAddress = DfirstB(0xCFA78);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment_A_______", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment_A_______\n");
}

MakeNameEx(0xCFA30, "Throttle_Tipin_Enrichment_A_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCFAE4, "Throttle_Tipin_Enrichment_B_______", SN_CHECK);
referenceAddress = DfirstB(0xCFAE4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment_B_______", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment_B_______\n");
}

MakeNameEx(0xCFA9C, "Throttle_Tipin_Enrichment_B_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCD110, "Minimum_Tipin_Enrichment_Activation_______", SN_CHECK);
MakeNameEx(0xCD10C, "Minimum_Tipin_Enrichment_Activation_Throttle_______", SN_CHECK);
MakeNameEx(0xCDD6C, "Tipin_Enrichment_Compensation_Boost_Error_______", SN_CHECK);
referenceAddress = DfirstB(0xCDD6C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_Boost_Error_______", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_Boost_Error_______\n");
}

MakeNameEx(0xCDD48, "Tipin_Enrichment_Compensation_Boost_Error_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCDD38, "Tipin_Enrichment_Compensation_RPM_______", SN_CHECK);
referenceAddress = DfirstB(0xCDD38);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_RPM_______", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_RPM_______\n");
}

MakeNameEx(0xCDCF8, "Tipin_Enrichment_Compensation_RPM_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCDD75, "Tipin_Enrichment_Compensation_A_ECT_______", SN_CHECK);
referenceAddress = DfirstB(0xCDD75);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_A_ECT_______", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_A_ECT_______\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Compensation_A_ECT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCFB08, "Tipin_Enrichment_Compensation_B_ECT_______", SN_CHECK);
referenceAddress = DfirstB(0xCFB08);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_B_ECT_______", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_B_ECT_______\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Compensation_B_ECT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCFB28, "Tipin_Enrichment_Compensation_C_ECT_______", SN_CHECK);
referenceAddress = DfirstB(0xCFB28);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_C_ECT_______", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_C_ECT_______\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Compensation_C_ECT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCFB68, "Tipin_Enrichment_Compensation_D_ECT_______", SN_CHECK);
referenceAddress = DfirstB(0xCFB68);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_D_ECT_______", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_D_ECT_______\n");
}

MakeNameEx(0xCD2C0, "Tipin_Enrichment_Compensation_D_ECT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCD114, "Tipin_Enrichment_Compensation_D_ECT_Activation_______", SN_CHECK);
MakeNameEx(0xCDD85, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT_______", SN_CHECK);
referenceAddress = DfirstB(0xCDD85);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT_______", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT_______\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCDD95, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT_______", SN_CHECK);
referenceAddress = DfirstB(0xCDD95);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT_______", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT_______\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCC874, "Tipin_Enrichment_Applied_Counter_Reset_______", SN_CHECK);
MakeNameEx(0xCFB88, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT_______", SN_CHECK);
referenceAddress = DfirstB(0xCFB88);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT_______", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT_______\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCFBA8, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT_______", SN_CHECK);
referenceAddress = DfirstB(0xCFBA8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT_______", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT_______\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCC875, "Tipin_Throttle_Cumulative_Reset_______", SN_CHECK);
MakeNameEx(0xD0684, "Min_Primary_Base_Enrichment_1_Cruise_______", SN_CHECK);
referenceAddress = DfirstB(0xD0684);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_Cruise_______", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_Cruise_______\n");
}

MakeNameEx(0xCD280, "Min_Primary_Base_Enrichment_1_Cruise_X_AXIS______", SN_CHECK);
MakeNameEx(0xD0660, "Min_Primary_Base_Enrichment_1_Cruise_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD05E0, "Min_Primary_Base_Enrichment_1_NonCruise_______", SN_CHECK);
referenceAddress = DfirstB(0xD05E0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonCruise_______", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonCruise_______\n");
}

MakeNameEx(0xCD280, "Min_Primary_Base_Enrichment_1_NonCruise_X_AXIS______", SN_CHECK);
MakeNameEx(0xD05C0, "Min_Primary_Base_Enrichment_1_NonCruise_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCD53D, "Min_Primary_Base_Enrichment_1_NonPrimary_OL________", SN_CHECK);
referenceAddress = DfirstB(0xCD53D);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonPrimary_OL________", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonPrimary_OL________\n");
}

MakeNameEx(0xCD280, "Min_Primary_Base_Enrichment_1_NonPrimary_OL_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCCCC0, "AF_Learning_1_Limits_______", SN_CHECK);
MakeNameEx(0xCCCD0, "AF_Learning_1_Airflow_Ranges_______", SN_CHECK);
MakeNameEx(0xC2D18, "MAF_Limit_Maximum_______", SN_CHECK);
MakeNameEx(0xD9CE0, "MAF_Sensor_Scaling_______", SN_CHECK);
referenceAddress = DfirstB(0xD9CE0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_MAF_Sensor_Scaling_______", SN_CHECK);
}
else
{
    Message("No reference to MAF_Sensor_Scaling_______\n");
}

MakeNameEx(0xD9C08, "MAF_Sensor_Scaling_Y_AXIS______", SN_CHECK);
MakeNameEx(0xC3768, "MAF_Compensation_IAT_______", SN_CHECK);
referenceAddress = DfirstB(0xC3768);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_MAF_Compensation_IAT_______", SN_CHECK);
}
else
{
    Message("No reference to MAF_Compensation_IAT_______\n");
}

MakeNameEx(0xC3734, "MAF_Compensation_IAT_X_AXIS______", SN_CHECK);
MakeNameEx(0xC3748, "MAF_Compensation_IAT_Y_AXIS______", SN_CHECK);
MakeNameEx(0x205E8, "Engine_Load_Limit_A_Maximum_______", SN_CHECK);
MakeNameEx(0xC3200, "Engine_Load_Limit_B_Maximum_RPM_______", SN_CHECK);
referenceAddress = DfirstB(0xC3200);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Limit_B_Maximum_RPM_______", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Limit_B_Maximum_RPM_______\n");
}

MakeNameEx(0xC31F8, "Engine_Load_Limit_B_Maximum_RPM_Y_AXIS______", SN_CHECK);
MakeNameEx(0xC3818, "Engine_Load_Compensation_Cruise_MP_______", SN_CHECK);
referenceAddress = DfirstB(0xC3818);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Compensation_Cruise_MP_______", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Compensation_Cruise_MP_______\n");
}

MakeNameEx(0xC3790, "Engine_Load_Compensation_Cruise_MP_X_AXIS______", SN_CHECK);
MakeNameEx(0xC37BC, "Engine_Load_Compensation_Cruise_MP_Y_AXIS______", SN_CHECK);
MakeNameEx(0xC3998, "Engine_Load_Compensation_NonCruise_MP_______", SN_CHECK);
referenceAddress = DfirstB(0xC3998);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Compensation_NonCruise_MP_______", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Compensation_NonCruise_MP_______\n");
}

MakeNameEx(0xC3918, "Engine_Load_Compensation_NonCruise_MP_X_AXIS______", SN_CHECK);
MakeNameEx(0xC3944, "Engine_Load_Compensation_NonCruise_MP_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD5240, "Base_Timing_Primary_Cruise_______", SN_CHECK);
referenceAddress = DfirstB(0xD5240);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Primary_Cruise_______", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Primary_Cruise_______\n");
}

MakeNameEx(0xD51AC, "Base_Timing_Primary_Cruise_X_AXIS______", SN_CHECK);
MakeNameEx(0xD51F8, "Base_Timing_Primary_Cruise_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD5618, "Base_Timing_Reference_Cruise_AVCS_related_______", SN_CHECK);
referenceAddress = DfirstB(0xD5618);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Reference_Cruise_AVCS_related_______", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Reference_Cruise_AVCS_related_______\n");
}

MakeNameEx(0xD5584, "Base_Timing_Reference_Cruise_AVCS_related_X_AXIS______", SN_CHECK);
MakeNameEx(0xD55D0, "Base_Timing_Reference_Cruise_AVCS_related_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD542C, "Base_Timing_Primary_NonCruise_______", SN_CHECK);
referenceAddress = DfirstB(0xD542C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Primary_NonCruise_______", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Primary_NonCruise_______\n");
}

MakeNameEx(0xD5398, "Base_Timing_Primary_NonCruise_X_AXIS______", SN_CHECK);
MakeNameEx(0xD53E4, "Base_Timing_Primary_NonCruise_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD5804, "Base_Timing_Reference_NonCruise_AVCS_related_______", SN_CHECK);
referenceAddress = DfirstB(0xD5804);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Reference_NonCruise_AVCS_related_______", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Reference_NonCruise_AVCS_related_______\n");
}

MakeNameEx(0xD5770, "Base_Timing_Reference_NonCruise_AVCS_related_X_AXIS______", SN_CHECK);
MakeNameEx(0xD57BC, "Base_Timing_Reference_NonCruise_AVCS_related_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD3DEA, "Base_Timing_Idle_A_InGear_______", SN_CHECK);
referenceAddress = DfirstB(0xD3DEA);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_A_InGear_______", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_A_InGear_______\n");
}

MakeNameEx(0xD3BD0, "Base_Timing_Idle_A_InGear_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD3DFA, "Base_Timing_Idle_B_InGear_______", SN_CHECK);
referenceAddress = DfirstB(0xD3DFA);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_B_InGear_______", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_B_InGear_______\n");
}

MakeNameEx(0xD3BD0, "Base_Timing_Idle_B_InGear_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD3E0A, "Base_Timing_Idle_A_Neutral_______", SN_CHECK);
referenceAddress = DfirstB(0xD3E0A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_A_Neutral_______", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_A_Neutral_______\n");
}

MakeNameEx(0xD3BD0, "Base_Timing_Idle_A_Neutral_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD3E1A, "Base_Timing_Idle_B_Neutral_______", SN_CHECK);
referenceAddress = DfirstB(0xD3E1A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_B_Neutral_______", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_B_Neutral_______\n");
}

MakeNameEx(0xD3BD0, "Base_Timing_Idle_B_Neutral_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD3DE1, "Base_Timing_Idle_Minimum_______", SN_CHECK);
referenceAddress = DfirstB(0xD3DE1);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_Minimum_______", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_Minimum_______\n");
}

MakeNameEx(0xD3C50, "Base_Timing_Idle_Minimum_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD3770, "Base_Timing_Idle_Minimum_Vehicle_Speed_Enable_______", SN_CHECK);
MakeNameEx(0xD616C, "Knock_Correction_Advance_Max_Additive_A_Knock_Conditions_IAM_", SN_CHECK);
referenceAddress = DfirstB(0xD616C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_Additive_A_Knock_Conditions_IAM_", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_Additive_A_Knock_Conditions_IAM_\n");
}

MakeNameEx(0xD60D8, "Knock_Correction_Advance_Max_Additive_A_Knock_Conditions_IAM_X_AXIS_", SN_CHECK);
MakeNameEx(0xD6124, "Knock_Correction_Advance_Max_Additive_A_Knock_Conditions_IAM_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD6730, "Knock_Correction_Advance_Max_Additive_B_Knock_Conditions_", SN_CHECK);
referenceAddress = DfirstB(0xD6730);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_Additive_B_Knock_Conditions_", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_Additive_B_Knock_Conditions_\n");
}

MakeNameEx(0xD669C, "Knock_Correction_Advance_Max_Additive_B_Knock_Conditions_X_AXIS_", SN_CHECK);
MakeNameEx(0xD66E8, "Knock_Correction_Advance_Max_Additive_B_Knock_Conditions_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD6358, "Knock_Correction_Advance_Max_Primary_Cruise_IAM_", SN_CHECK);
referenceAddress = DfirstB(0xD6358);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_Primary_Cruise_IAM_", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_Primary_Cruise_IAM_\n");
}

MakeNameEx(0xD62C4, "Knock_Correction_Advance_Max_Primary_Cruise_IAM_X_AXIS_", SN_CHECK);
MakeNameEx(0xD6310, "Knock_Correction_Advance_Max_Primary_Cruise_IAM_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD6544, "Knock_Correction_Advance_Max_Primary_NonCruise_IAM_", SN_CHECK);
referenceAddress = DfirstB(0xD6544);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_Primary_NonCruise_IAM_", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_Primary_NonCruise_IAM_\n");
}

MakeNameEx(0xD64B0, "Knock_Correction_Advance_Max_Primary_NonCruise_IAM_X_AXIS_", SN_CHECK);
MakeNameEx(0xD64FC, "Knock_Correction_Advance_Max_Primary_NonCruise_IAM_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD3637, "Knock_Correction_Advance_Alternate_Mode__", SN_CHECK);
MakeNameEx(0xD3AD8, "Knock_Correction_Advance_Additive_Range_RPM_", SN_CHECK);
MakeNameEx(0xD3ECC, "Timing_Compensation_A_IAT_______", SN_CHECK);
referenceAddress = DfirstB(0xD3ECC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_A_IAT_______", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_A_IAT_______\n");
}

MakeNameEx(0xD3E8C, "Timing_Compensation_A_IAT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD599C, "Timing_Compensation_A_IAT_Activation_______", SN_CHECK);
referenceAddress = DfirstB(0xD599C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_A_IAT_Activation_______", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_A_IAT_Activation_______\n");
}

MakeNameEx(0xD595C, "Timing_Compensation_A_IAT_Activation_X_AXIS______", SN_CHECK);
MakeNameEx(0xD597C, "Timing_Compensation_A_IAT_Activation_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD4474, "Timing_Compensation_B_IAT_______", SN_CHECK);
referenceAddress = DfirstB(0xD4474);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_B_IAT_______", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_B_IAT_______\n");
}

MakeNameEx(0xD4434, "Timing_Compensation_B_IAT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD3930, "Timing_Compensation_B_IAT_IAM_Activation_______", SN_CHECK);
MakeNameEx(0xD3914, "Timing_Compensation_B_IAT_Max_Additive_______", SN_CHECK);
MakeNameEx(0xD3E6A, "Timing_Compensation_Imm_Cruise_A_ECT_______", SN_CHECK);
referenceAddress = DfirstB(0xD3E6A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_Cruise_A_ECT_______", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_Cruise_A_ECT_______\n");
}

MakeNameEx(0xD3BD0, "Timing_Compensation_Imm_Cruise_A_ECT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD3E7A, "Timing_Compensation_Imm_Cruise_B_ECT_______", SN_CHECK);
referenceAddress = DfirstB(0xD3E7A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_Cruise_B_ECT_______", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_Cruise_B_ECT_______\n");
}

MakeNameEx(0xD3BD0, "Timing_Compensation_Imm_Cruise_B_ECT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD3E4A, "Timing_Compensation_Imm_NonCruise_A_ECT_______", SN_CHECK);
referenceAddress = DfirstB(0xD3E4A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_NonCruise_A_ECT_______", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_NonCruise_A_ECT_______\n");
}

MakeNameEx(0xD3BD0, "Timing_Compensation_Imm_NonCruise_A_ECT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD3E5A, "Timing_Compensation_Imm_NonCruise_B_ECT_______", SN_CHECK);
referenceAddress = DfirstB(0xD3E5A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_NonCruise_B_ECT_______", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_NonCruise_B_ECT_______\n");
}

MakeNameEx(0xD3BD0, "Timing_Compensation_Imm_NonCruise_B_ECT_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD5F00, "Timing_Compensation_Per_Cylinder_A_______", SN_CHECK);
referenceAddress = DfirstB(0xD5F00);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_A_______", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_A_______\n");
}

MakeNameEx(0xD5EB8, "Timing_Compensation_Per_Cylinder_A_X_AXIS______", SN_CHECK);
MakeNameEx(0xD5EF0, "Timing_Compensation_Per_Cylinder_A_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD5F80, "Timing_Compensation_Per_Cylinder_B_______", SN_CHECK);
referenceAddress = DfirstB(0xD5F80);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_B_______", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_B_______\n");
}

MakeNameEx(0xD5F38, "Timing_Compensation_Per_Cylinder_B_X_AXIS______", SN_CHECK);
MakeNameEx(0xD5F70, "Timing_Compensation_Per_Cylinder_B_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD6000, "Timing_Compensation_Per_Cylinder_C_______", SN_CHECK);
referenceAddress = DfirstB(0xD6000);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_C_______", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_C_______\n");
}

MakeNameEx(0xD5FB8, "Timing_Compensation_Per_Cylinder_C_X_AXIS______", SN_CHECK);
MakeNameEx(0xD5FF0, "Timing_Compensation_Per_Cylinder_C_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD6080, "Timing_Compensation_Per_Cylinder_D_______", SN_CHECK);
referenceAddress = DfirstB(0xD6080);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_D_______", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_D_______\n");
}

MakeNameEx(0xD6038, "Timing_Compensation_Per_Cylinder_D_X_AXIS______", SN_CHECK);
MakeNameEx(0xD6070, "Timing_Compensation_Per_Cylinder_D_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD39D8, "Timing_Comp_Minimum_Load_Per_Cylinder_______", SN_CHECK);
MakeNameEx(0xD39D4, "Timing_Comp_Maximum_RPM_Per_Cylinder_______", SN_CHECK);
MakeNameEx(0xD39DC, "Timing_Comp_Minimum_Coolant_Temp_Per_Cylinder_______", SN_CHECK);
MakeNameEx(0xD5E0C, "Timing_Compensation_Per_Gear_1st_", SN_CHECK);
referenceAddress = DfirstB(0xD5E0C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Gear_1st_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Gear_1st_\n");
}

MakeNameEx(0xD5DF0, "Timing_Compensation_Per_Gear_1st_X_AXIS_", SN_CHECK);
MakeNameEx(0xD5E00, "Timing_Compensation_Per_Gear_1st_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD5E34, "Timing_Compensation_Per_Gear_2nd_", SN_CHECK);
referenceAddress = DfirstB(0xD5E34);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Gear_2nd_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Gear_2nd_\n");
}

MakeNameEx(0xD5E18, "Timing_Compensation_Per_Gear_2nd_X_AXIS_", SN_CHECK);
MakeNameEx(0xD5E28, "Timing_Compensation_Per_Gear_2nd_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD5E5C, "Timing_Compensation_Per_Gear_3rd_", SN_CHECK);
referenceAddress = DfirstB(0xD5E5C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Gear_3rd_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Gear_3rd_\n");
}

MakeNameEx(0xD5E40, "Timing_Compensation_Per_Gear_3rd_X_AXIS_", SN_CHECK);
MakeNameEx(0xD5E50, "Timing_Compensation_Per_Gear_3rd_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD5E84, "Timing_Compensation_Per_Gear_4th_", SN_CHECK);
referenceAddress = DfirstB(0xD5E84);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Gear_4th_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Gear_4th_\n");
}

MakeNameEx(0xD5E68, "Timing_Compensation_Per_Gear_4th_X_AXIS_", SN_CHECK);
MakeNameEx(0xD5E78, "Timing_Compensation_Per_Gear_4th_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD5EAC, "Timing_Compensation_Per_Gear_5th_", SN_CHECK);
referenceAddress = DfirstB(0xD5EAC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Gear_5th_", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Gear_5th_\n");
}

MakeNameEx(0xD5E90, "Timing_Compensation_Per_Gear_5th_X_AXIS_", SN_CHECK);
MakeNameEx(0xD5EA0, "Timing_Compensation_Per_Gear_5th_Y_AXIS_", SN_CHECK);
MakeNameEx(0xD3974, "Timing_Compensation_Per_Gear_Activation_RPM_", SN_CHECK);
MakeNameEx(0xD397C, "Timing_Compensation_Per_Gear_Activation_Load_", SN_CHECK);
MakeNameEx(0xD39E8, "Feedback_Correction_Range_RPM_______", SN_CHECK);
MakeNameEx(0xD39E0, "Feedback_Correction_Minimum_Load_______", SN_CHECK);
MakeNameEx(0xD3A08, "Feedback_Correction_Retard_Value_______", SN_CHECK);
MakeNameEx(0xD3A04, "Feedback_Correction_Retard_Limit_______", SN_CHECK);
MakeNameEx(0xD3A0C, "Feedback_Correction_Negative_Advance_Value_______", SN_CHECK);
MakeNameEx(0xD3672, "Feedback_Correction_Negative_Advance_Delay_______", SN_CHECK);
MakeNameEx(0xD3A14, "Extended_Feedback_Correction_High_RPM_Compensation_______", SN_CHECK);
MakeNameEx(0xD3BB0, "Fine_Correction_Range_RPM_______", SN_CHECK);
MakeNameEx(0xD3BC0, "Fine_Correction_Range_Load_______", SN_CHECK);
MakeNameEx(0xD3B50, "Fine_Correction_Rows_RPM_______", SN_CHECK);
MakeNameEx(0xD3B6C, "Fine_Correction_Columns_Load_______", SN_CHECK);
MakeNameEx(0xD3B94, "Fine_Correction_Retard_Value_______", SN_CHECK);
MakeNameEx(0xD3B90, "Fine_Correction_Retard_Limit_______", SN_CHECK);
MakeNameEx(0xD3B8C, "Fine_Correction_Advance_Value_______", SN_CHECK);
MakeNameEx(0xD3B88, "Fine_Correction_Advance_Limit_______", SN_CHECK);
MakeNameEx(0xD3682, "Fine_Correction_Advance_Delay_______", SN_CHECK);
MakeNameEx(0xD3AF8, "Rough_Correction_Range_RPM_______", SN_CHECK);
MakeNameEx(0xD3B08, "Rough_Correction_Range_Load_______", SN_CHECK);
MakeNameEx(0xD3B18, "Rough_Correction_Minimum_KC_Advance_Map_Value_______", SN_CHECK);
MakeNameEx(0xD47A0, "Rough_Correction_Learning_Delay_Increasing________", SN_CHECK);
referenceAddress = DfirstB(0xD47A0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Rough_Correction_Learning_Delay_Increasing________", SN_CHECK);
}
else
{
    Message("No reference to Rough_Correction_Learning_Delay_Increasing________\n");
}

MakeNameEx(0xD4778, "Rough_Correction_Learning_Delay_Increasing_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD3B1C, "Advance_Multiplier_Initial_______", SN_CHECK);
MakeNameEx(0xD3B20, "Advance_Multiplier_Step_Value_______", SN_CHECK);
MakeNameEx(0xDBEC8, "Intake_Cam_Advance_Angle_Cruise_AVCS_______", SN_CHECK);
referenceAddress = DfirstB(0xDBEC8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_Cruise_AVCS_______", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_Cruise_AVCS_______\n");
}

MakeNameEx(0xDBE34, "Intake_Cam_Advance_Angle_Cruise_AVCS_X_AXIS______", SN_CHECK);
MakeNameEx(0xDBE80, "Intake_Cam_Advance_Angle_Cruise_AVCS_Y_AXIS______", SN_CHECK);
MakeNameEx(0xDC208, "Intake_Cam_Advance_Angle_NonCruise_AVCS_______", SN_CHECK);
referenceAddress = DfirstB(0xDC208);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_NonCruise_AVCS_______", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_NonCruise_AVCS_______\n");
}

MakeNameEx(0xDC174, "Intake_Cam_Advance_Angle_NonCruise_AVCS_X_AXIS______", SN_CHECK);
MakeNameEx(0xDC1C0, "Intake_Cam_Advance_Angle_NonCruise_AVCS_Y_AXIS______", SN_CHECK);
MakeNameEx(0xDC548, "Intake_Cam_Advance_Angle_ECT_Related_", SN_CHECK);
referenceAddress = DfirstB(0xDC548);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_ECT_Related_", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_ECT_Related_\n");
}

MakeNameEx(0xDC4B4, "Intake_Cam_Advance_Angle_ECT_Related_X_AXIS_", SN_CHECK);
MakeNameEx(0xDC500, "Intake_Cam_Advance_Angle_ECT_Related_Y_AXIS_", SN_CHECK);
MakeNameEx(0xDB43A, "Intake_Cam_Advance_Angle_ECT_Related_Multiplier_", SN_CHECK);
referenceAddress = DfirstB(0xDB43A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_ECT_Related_Multiplier_", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_ECT_Related_Multiplier_\n");
}

MakeNameEx(0xDB264, "Intake_Cam_Advance_Angle_ECT_Related_Multiplier_Y_AXIS_", SN_CHECK);
MakeNameEx(0xDCC38, "Exhaust_Cam_Retard_Angle_Cruise_AVCS_", SN_CHECK);
referenceAddress = DfirstB(0xDCC38);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Exhaust_Cam_Retard_Angle_Cruise_AVCS_", SN_CHECK);
}
else
{
    Message("No reference to Exhaust_Cam_Retard_Angle_Cruise_AVCS_\n");
}

MakeNameEx(0xDCBA4, "Exhaust_Cam_Retard_Angle_Cruise_AVCS_X_AXIS_", SN_CHECK);
MakeNameEx(0xDCBF0, "Exhaust_Cam_Retard_Angle_Cruise_AVCS_Y_AXIS_", SN_CHECK);
MakeNameEx(0xDCF78, "Exhaust_Cam_Retard_Angle_NonCruise_AVCS_", SN_CHECK);
referenceAddress = DfirstB(0xDCF78);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Exhaust_Cam_Retard_Angle_NonCruise_AVCS_", SN_CHECK);
}
else
{
    Message("No reference to Exhaust_Cam_Retard_Angle_NonCruise_AVCS_\n");
}

MakeNameEx(0xDCEE4, "Exhaust_Cam_Retard_Angle_NonCruise_AVCS_X_AXIS_", SN_CHECK);
MakeNameEx(0xDCF30, "Exhaust_Cam_Retard_Angle_NonCruise_AVCS_Y_AXIS_", SN_CHECK);
MakeNameEx(0xDD2B8, "Exhaust_Cam_Retard_Angle_ECT_Related_", SN_CHECK);
referenceAddress = DfirstB(0xDD2B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Exhaust_Cam_Retard_Angle_ECT_Related_", SN_CHECK);
}
else
{
    Message("No reference to Exhaust_Cam_Retard_Angle_ECT_Related_\n");
}

MakeNameEx(0xDD224, "Exhaust_Cam_Retard_Angle_ECT_Related_X_AXIS_", SN_CHECK);
MakeNameEx(0xDD270, "Exhaust_Cam_Retard_Angle_ECT_Related_Y_AXIS_", SN_CHECK);
MakeNameEx(0xDB53C, "Exhaust_Cam_Retard_Angle_ECT_Related_Multiplier_", SN_CHECK);
referenceAddress = DfirstB(0xDB53C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Exhaust_Cam_Retard_Angle_ECT_Related_Multiplier_", SN_CHECK);
}
else
{
    Message("No reference to Exhaust_Cam_Retard_Angle_ECT_Related_Multiplier_\n");
}

MakeNameEx(0xDB264, "Exhaust_Cam_Retard_Angle_ECT_Related_Multiplier_Y_AXIS_", SN_CHECK);
MakeNameEx(0xFA070, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport__", SN_CHECK);
referenceAddress = DfirstB(0xFA070);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport__", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport__\n");
}

MakeNameEx(0xF9FEC, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_X_AXIS_", SN_CHECK);
MakeNameEx(0xFA02C, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Y_AXIS_", SN_CHECK);
MakeNameEx(0xFA314, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp__", SN_CHECK);
referenceAddress = DfirstB(0xFA314);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp__", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp__\n");
}

MakeNameEx(0xFA290, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp_X_AXIS_", SN_CHECK);
MakeNameEx(0xFA2D0, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp_Y_AXIS_", SN_CHECK);
MakeNameEx(0xFA5B8, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent__", SN_CHECK);
referenceAddress = DfirstB(0xFA5B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent__", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent__\n");
}

MakeNameEx(0xFA534, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent_X_AXIS_", SN_CHECK);
MakeNameEx(0xFA574, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent_Y_AXIS_", SN_CHECK);
MakeNameEx(0xF900C, "Requested_Torque_Base_RPM_______", SN_CHECK);
referenceAddress = DfirstB(0xF900C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Base_RPM_______", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Base_RPM_______\n");
}

MakeNameEx(0xF8FCC, "Requested_Torque_Base_RPM_Y_AXIS______", SN_CHECK);
MakeNameEx(0xF94D8, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_______", SN_CHECK);
referenceAddress = DfirstB(0xF94D8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_______", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_______\n");
}

MakeNameEx(0xF943C, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_X_AXIS______", SN_CHECK);
MakeNameEx(0xF9498, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_Y_AXIS______", SN_CHECK);
MakeNameEx(0xF9854, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_______", SN_CHECK);
referenceAddress = DfirstB(0xF9854);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_______", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_______\n");
}

MakeNameEx(0xF97B8, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_X_AXIS______", SN_CHECK);
MakeNameEx(0xF9814, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_Y_AXIS______", SN_CHECK);
MakeNameEx(0xF9BD0, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_______", SN_CHECK);
referenceAddress = DfirstB(0xF9BD0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_______", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_______\n");
}

MakeNameEx(0xF9B34, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_X_AXIS______", SN_CHECK);
MakeNameEx(0xF9B90, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_Y_AXIS______", SN_CHECK);
MakeNameEx(0xF9F24, "Requested_Torque_Limit_A_Per_GearEngine_Speed_______", SN_CHECK);
referenceAddress = DfirstB(0xF9F24);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Limit_A_Per_GearEngine_Speed_______", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Limit_A_Per_GearEngine_Speed_______\n");
}

MakeNameEx(0xF9EDC, "Requested_Torque_Limit_A_Per_GearEngine_Speed_X_AXIS______", SN_CHECK);
MakeNameEx(0xF9F1C, "Requested_Torque_Limit_A_Per_GearEngine_Speed_Y_AXIS______", SN_CHECK);
MakeNameEx(0xF9FAC, "Requested_Torque_Limit_B_Per_GearEngine_Speed_______", SN_CHECK);
referenceAddress = DfirstB(0xF9FAC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Limit_B_Per_GearEngine_Speed_______", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Limit_B_Per_GearEngine_Speed_______\n");
}

MakeNameEx(0xF9F64, "Requested_Torque_Limit_B_Per_GearEngine_Speed_X_AXIS______", SN_CHECK);
MakeNameEx(0xF9FA4, "Requested_Torque_Limit_B_Per_GearEngine_Speed_Y_AXIS______", SN_CHECK);
MakeNameEx(0xCD16C, "Rev_Limit_Fuel_Cut______", SN_CHECK);
MakeNameEx(0xCD174, "Rev_Limit_Fuel_Resume_Boost_______", SN_CHECK);
MakeNameEx(0xCD178, "Speed_Limiting_Enable_Fuel_Cut_______", SN_CHECK);
MakeNameEx(0xCD180, "Speed_Limiting_Disable_Fuel_Cut_______", SN_CHECK);
MakeNameEx(0xF8E54, "Speed_Limiting_A_Throttle_SIDRIVE_SportSport_Sharp__", SN_CHECK);
MakeNameEx(0xF8E60, "Speed_Limiting_B_Throttle_SIDRIVE_SportSport_Sharp__", SN_CHECK);
MakeNameEx(0xF8E6C, "Speed_Limiting_Throttle_SIDRIVE_Intelligent__", SN_CHECK);
MakeNameEx(0xDA068, "Fuel_Temp_Sensor_Scaling_______", SN_CHECK);
referenceAddress = DfirstB(0xDA068);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Fuel_Temp_Sensor_Scaling_______", SN_CHECK);
}
else
{
    Message("No reference to Fuel_Temp_Sensor_Scaling_______\n");
}

MakeNameEx(0xD9FF0, "Fuel_Temp_Sensor_Scaling_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD9F78, "Intake_Temp_Sensor_Scaling_______", SN_CHECK);
referenceAddress = DfirstB(0xD9F78);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Intake_Temp_Sensor_Scaling_______", SN_CHECK);
}
else
{
    Message("No reference to Intake_Temp_Sensor_Scaling_______\n");
}

MakeNameEx(0xD9F00, "Intake_Temp_Sensor_Scaling_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD9E90, "Coolant_Temp_Sensor_Scaling_______", SN_CHECK);
referenceAddress = DfirstB(0xD9E90);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Coolant_Temp_Sensor_Scaling_______", SN_CHECK);
}
else
{
    Message("No reference to Coolant_Temp_Sensor_Scaling_______\n");
}

MakeNameEx(0xD9E20, "Coolant_Temp_Sensor_Scaling_Y_AXIS______", SN_CHECK);
MakeNameEx(0x4BCD8, "Fuel_Pump_Duty______", SN_CHECK);
MakeNameEx(0xDA460, "Radiator_Fan_Modes_A_ECT_______", SN_CHECK);
MakeNameEx(0xDA470, "Radiator_Fan_Modes_B_ECT_______", SN_CHECK);
MakeNameEx(0xDA480, "Radiator_Fan_Modes_Veh_Speed_______", SN_CHECK);
MakeNameEx(0xC308C, "Gear_Determination_Thresholds_A_______", SN_CHECK);
MakeNameEx(0xC30A0, "Gear_Determination_Thresholds_B_______", SN_CHECK);
MakeNameEx(0xC30B4, "Gear_Determination_Thresholds_C_______", SN_CHECK);
MakeNameEx(0xD7CEE, "Idle_Speed_Target_A_______", SN_CHECK);
referenceAddress = DfirstB(0xD7CEE);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_A_______", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_A_______\n");
}

MakeNameEx(0xD7448, "Idle_Speed_Target_A_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD7D2E, "Idle_Speed_Target_B_______", SN_CHECK);
referenceAddress = DfirstB(0xD7D2E);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_B_______", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_B_______\n");
}

MakeNameEx(0xD7448, "Idle_Speed_Target_B_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD7D6E, "Idle_Speed_Target_C_______", SN_CHECK);
referenceAddress = DfirstB(0xD7D6E);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_C_______", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_C_______\n");
}

MakeNameEx(0xD7448, "Idle_Speed_Target_C_Y_AXIS______", SN_CHECK);
MakeNameEx(0xD7DAE, "Idle_Speed_Target_D__", SN_CHECK);
referenceAddress = DfirstB(0xD7DAE);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_D__", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_D__\n");
}

MakeNameEx(0xD7448, "Idle_Speed_Target_D_Y_AXIS_", SN_CHECK);
MakeNameEx(0xA9160, "Force_Pass_Readiness_Monitors________", SN_CHECK);
MakeNameEx(0xDA314, "Ignition_Dwell_______", SN_CHECK);
referenceAddress = DfirstB(0xDA314);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Ignition_Dwell_______", SN_CHECK);
}
else
{
    Message("No reference to Ignition_Dwell_______\n");
}

MakeNameEx(0xDA2C0, "Ignition_Dwell_X_AXIS______", SN_CHECK);
MakeNameEx(0xDA300, "Ignition_Dwell_Y_AXIS______", SN_CHECK);
MakeNameEx(0x9C5DA, "P0000_PASS_CODE_NO_DTC_DETECTED________", SN_CHECK);
MakeNameEx(0x9C5BD, "P0011_CAMSHAFT_POS_TIMING_OVERADVANCED_1_______", SN_CHECK);
MakeNameEx(0x9C654, "P0014_EXHAUST_AVCS_SYSTEM_1_RANGEPERF_", SN_CHECK);
MakeNameEx(0x9C64B, "P0016_CRANKSHAFTCAMSHAFT_CORRELATION_1A_______", SN_CHECK);
MakeNameEx(0x9C65A, "P0017_CRANKCAM_TIMING_B_FAILURE_1_", SN_CHECK);
MakeNameEx(0x9C64A, "P0018_CRANKSHAFTCAMSHAFT_CORRELATION_2A_______", SN_CHECK);
MakeNameEx(0x9C659, "P0019_CRANKCAM_TIMING_B_FAILURE_2_", SN_CHECK);
MakeNameEx(0x9C5BE, "P0021_CAMSHAFT_POS_TIMING_OVERADVANCED_2_______", SN_CHECK);
MakeNameEx(0x9C653, "P0024_EXHAUST_AVCS_SYSTEM_2_RANGEPERF_", SN_CHECK);
MakeNameEx(0x9C5FE, "P0030_FRONT_O2_SENSOR_RANGEPERF_______", SN_CHECK);
MakeNameEx(0x9C5E9, "P0031_FRONT_O2_SENSOR_LOW_INPUT_______", SN_CHECK);
MakeNameEx(0x9C5E7, "P0032_FRONT_O2_SENSOR_HIGH_INPUT_______", SN_CHECK);
MakeNameEx(0x9C5E8, "P0037_REAR_O2_SENSOR_LOW_INPUT_______", SN_CHECK);
MakeNameEx(0x9C5E6, "P0038_REAR_O2_SENSOR_HIGH_INPUT_______", SN_CHECK);
MakeNameEx(0x9C5F9, "P0068_MAP_SENSOR_RANGEPERF_______", SN_CHECK);
MakeNameEx(0x9C5FA, "P0101_MAF_SENSOR_RANGEPERF_______", SN_CHECK);
MakeNameEx(0x9C599, "P0102_MAF_SENSOR_LOW_INPUT_______", SN_CHECK);
MakeNameEx(0x9C59A, "P0103_MAF_SENSOR_HIGH_INPUT_______", SN_CHECK);
MakeNameEx(0x9C5EA, "P0107_MAP_SENSOR_LOW_INPUT_______", SN_CHECK);
MakeNameEx(0x9C5EB, "P0108_MAP_SENSOR_HIGH_INPUT_______", SN_CHECK);
MakeNameEx(0x9C5E5, "P0111_IAT_SENSOR_RANGEPERF_______", SN_CHECK);
MakeNameEx(0x9C5E3, "P0112_IAT_SENSOR_LOW_INPUT_______", SN_CHECK);
MakeNameEx(0x9C5E4, "P0113_IAT_SENSOR_HIGH_INPUT_______", SN_CHECK);
MakeNameEx(0x9C5A2, "P0117_COOLANT_TEMP_SENSOR_LOW_INPUT_______", SN_CHECK);
MakeNameEx(0x9C5A3, "P0118_COOLANT_TEMP_SENSOR_HIGH_INPUT_______", SN_CHECK);
MakeNameEx(0x9C5A0, "P0122_TPS_A_LOW_INPUT_______", SN_CHECK);
MakeNameEx(0x9C5A1, "P0123_TPS_A_HIGH_INPUT_______", SN_CHECK);
MakeNameEx(0x9C5A5, "P0125_INSUFFICIENT_COOLANT_TEMP_FUELING_______", SN_CHECK);
MakeNameEx(0x9C633, "P0126_INSUFFICIENT_COOLANT_TEMP_OPERATION_______", SN_CHECK);
MakeNameEx(0x9C5F0, "P0128_THERMOSTAT_MALFUNCTION_______", SN_CHECK);
MakeNameEx(0x9C5DD, "P0131_FRONT_O2_SENSOR_LOW_INPUT_______", SN_CHECK);
MakeNameEx(0x9C5DF, "P0132_FRONT_O2_SENSOR_HIGH_INPUT_______", SN_CHECK);
MakeNameEx(0x9C5FC, "P0134_FRONT_O2_SENSOR_NO_ACTIVITY_______", SN_CHECK);
MakeNameEx(0x9C5DC, "P0137_REAR_O2_SENSOR_LOW_VOLTAGE_______", SN_CHECK);
MakeNameEx(0x9C5E1, "P0138_REAR_O2_SENSOR_HIGH_VOLTAGE_______", SN_CHECK);
MakeNameEx(0x9C646, "P0140_REAR_O2_SENSOR_NO_ACTIVITY_______", SN_CHECK);
MakeNameEx(0x9C5C6, "P0141_REAR_O2_SENSOR_MALFUNCTION__", SN_CHECK);
MakeNameEx(0x9C676, "P014C_O2_SENSOR_SLOW_RESPONSE_RICH_TO_LEAN_B1_S1_", SN_CHECK);
MakeNameEx(0x9C675, "P014D_O2_SENSOR_SLOW_RESPONSE_LEAN_TO_RICH_B1_S1_", SN_CHECK);
MakeNameEx(0x9C672, "P015A_O2_SENSOR_DELAYED_RESPONSE_RICH_TO_LEAN_B1_S1_", SN_CHECK);
MakeNameEx(0x9C5D1, "P0171_SYSTEM_TOO_LEAN_______", SN_CHECK);
MakeNameEx(0x9C5D2, "P0172_SYSTEM_TOO_RICH_______", SN_CHECK);
MakeNameEx(0x9C605, "P0222_TPS_B_LOW_INPUT_______", SN_CHECK);
MakeNameEx(0x9C606, "P0223_TPS_B_HIGH_INPUT_______", SN_CHECK);
MakeNameEx(0x9C5F8, "P0230_FUEL_PUMP_PRIMARY_CIRCUIT_______", SN_CHECK);
MakeNameEx(0x9C5F7, "P0244_WASTEGATE_SOLENOID_A_RANGEPERF_______", SN_CHECK);
MakeNameEx(0x9C5F5, "P0245_WASTEGATE_SOLENOID_A_LOW_______", SN_CHECK);
MakeNameEx(0x9C5F6, "P0246_WASTEGATE_SOLENOID_A_HIGH_______", SN_CHECK);
MakeNameEx(0x9C5D3, "P0301_MISFIRE_CYLINDER_1_______", SN_CHECK);
MakeNameEx(0x9C5D4, "P0302_MISFIRE_CYLINDER_2_______", SN_CHECK);
MakeNameEx(0x9C5D5, "P0303_MISFIRE_CYLINDER_3_______", SN_CHECK);
MakeNameEx(0x9C5D6, "P0304_MISFIRE_CYLINDER_4_______", SN_CHECK);
MakeNameEx(0x9C59E, "P0327_KNOCK_SENSOR_1_LOW_INPUT_______", SN_CHECK);
MakeNameEx(0x9C59F, "P0328_KNOCK_SENSOR_1_HIGH_INPUT_______", SN_CHECK);
MakeNameEx(0x9C594, "P0335_CRANKSHAFT_POS_SENSOR_A_MALFUNCTION_______", SN_CHECK);
MakeNameEx(0x9C595, "P0336_CRANKSHAFT_POS_SENSOR_A_RANGEPERF_______", SN_CHECK);
MakeNameEx(0x9C618, "P0340_CAMSHAFT_POS_SENSOR_A_MALFUNCTION_______", SN_CHECK);
MakeNameEx(0x9C617, "P0345_CAMSHAFT_POS_SENSOR_A_BANK_2_______", SN_CHECK);
MakeNameEx(0x9C616, "P0365_CAMSHAFT_POS_SENSOR_B_BANK_1_", SN_CHECK);
MakeNameEx(0x9C615, "P0390_CAMSHAFT_POS_SENSOR_B_BANK_2_", SN_CHECK);
MakeNameEx(0x9C640, "P0410_SECONDARY_AIR_PUMP_SYSTEM_______", SN_CHECK);
MakeNameEx(0x9C63F, "P0411_SECONDARY_AIR_PUMP_INCORRECT_FLOW_______", SN_CHECK);
MakeNameEx(0x9C644, "P0413_SECONDARY_AIR_PUMP_A_OPEN_______", SN_CHECK);
MakeNameEx(0x9C648, "P0414_SECONDARY_AIR_PUMP_A_SHORTED_______", SN_CHECK);
MakeNameEx(0x9C652, "P0416_SECONDARY_AIR_PUMP_B_OPEN_______", SN_CHECK);
MakeNameEx(0x9C651, "P0417_SECONDARY_AIR_PUMP_B_SHORTED_______", SN_CHECK);
MakeNameEx(0x9C645, "P0418_SECONDARY_AIR_PUMP_RELAY_A_______", SN_CHECK);
MakeNameEx(0x9C5CD, "P0420_CAT_EFFICIENCY_BELOW_THRESHOLD_______", SN_CHECK);
MakeNameEx(0x9C67C, "P0441_EVAP_INCORRECT_PURGE_FLOW_______", SN_CHECK);
MakeNameEx(0x9C67B, "P0451_EVAP_PRESSURE_SENSOR_RANGEPERF_______", SN_CHECK);
MakeNameEx(0x9C66E, "P0452_EVAP_PRESSURE_SENSOR_LOW_INPUT_______", SN_CHECK);
MakeNameEx(0x9C66D, "P0453_EVAP_PRESSURE_SENSOR_HIGH_INPUT_______", SN_CHECK);
MakeNameEx(0x9C67A, "P0455_EVAP_EMISSION_CONTROL_SYSTEM_LEAK_DETECTED_GROSS_LEAK__", SN_CHECK);
MakeNameEx(0x9C5CF, "P0456_EVAP_LEAK_DETECTED_VERY_SMALL_______", SN_CHECK);
MakeNameEx(0x9C5C1, "P0458_EVAP_PURGE_VALVE_CIRCUIT_LOW_______", SN_CHECK);
MakeNameEx(0x9C5C2, "P0459_EVAP_PURGE_VALVE_CIRCUIT_HIGH_______", SN_CHECK);
MakeNameEx(0x9C5A8, "P0461_FUEL_LEVEL_SENSOR_RANGEPERF_______", SN_CHECK);
MakeNameEx(0x9C5A6, "P0462_FUEL_LEVEL_SENSOR_LOW_INPUT_______", SN_CHECK);
MakeNameEx(0x9C5A7, "P0463_FUEL_LEVEL_SENSOR_HIGH_INPUT_______", SN_CHECK);
MakeNameEx(0x9C59B, "P0500_VEHICLE_SPEED_SENSOR_A_______", SN_CHECK);
MakeNameEx(0x9C5BB, "P0506_IDLE_CONTROL_RPM_LOWER_THAN_EXPECTED_______", SN_CHECK);
MakeNameEx(0x9C5BC, "P0507_IDLE_CONTROL_RPM_HIGH_THAN_EXPECTED_______", SN_CHECK);
MakeNameEx(0x9C668, "P050A_COLD_START_IDLE_AIR_CONTROL_SYSTEM_PERFORMANCE__", SN_CHECK);
MakeNameEx(0x9C667, "P050B_COLD_START_IGNITION_TIMING_PERFORMANCE__", SN_CHECK);
MakeNameEx(0x9C5AA, "P0512_STARTER_REQUEST_CIRCUIT_______", SN_CHECK);
MakeNameEx(0x9C598, "P0604_CONTROL_MODULE_RAM_ERROR_______", SN_CHECK);
MakeNameEx(0x9C619, "P0605_CONTROL_MODULE_ROM_ERROR_______", SN_CHECK);
MakeNameEx(0x9C60D, "P0607_CONTROL_MODULE_PERFORMANCE_______", SN_CHECK);
MakeNameEx(0x9C60C, "P0638_THROTTLE_ACTUATOR_RANGEPERF_______", SN_CHECK);
MakeNameEx(0x9C5AE, "P0851_NEUTRAL_SWITCH_INPUT_LOW_______", SN_CHECK);
MakeNameEx(0x9C5B2, "P0852_NEUTRAL_SWITCH_INPUT_HIGH_______", SN_CHECK);
MakeNameEx(0x9C5C9, "P1152_FRONT_O2_SENSOR_RANGEPERF_LOW_B1_S1_______", SN_CHECK);
MakeNameEx(0x9C5CA, "P1153_FRONT_O2_SENSOR_RANGEPERF_HIGH_B1_S1_______", SN_CHECK);
MakeNameEx(0x9C607, "P1160_ABNORMAL_RETURN_SPRING_______", SN_CHECK);
MakeNameEx(0x9C5BF, "P1400_FUEL_TANK_PRESSURE_SOL_LOW_______", SN_CHECK);
MakeNameEx(0x9C64C, "P1410_SECONDARY_AIR_PUMP_VALVE_STUCK_OPEN_______", SN_CHECK);
MakeNameEx(0x9C649, "P1418_SECONDARY_AIR_PUMP_CIRCUIT_SHORTED_______", SN_CHECK);
MakeNameEx(0x9C5C0, "P1420_FUEL_TANK_PRESSURE_SOL_HIGH_INPUT_______", SN_CHECK);
MakeNameEx(0x9C679, "P1449_EVAPORATIVE_EMISSION_CONT_SYS_AIR_FILTER_CLOG__", SN_CHECK);
MakeNameEx(0x9C678, "P1451_EVAPORATIVE_EMISSION_CONT_SYS__", SN_CHECK);
MakeNameEx(0x9C677, "P1458_CANISTER_PURGE_CONTROL_SOLENOID_VALVE_2_LOW__", SN_CHECK);
MakeNameEx(0x9C681, "P1459_CANISTER_PURGE_CONTROL_SOLENOID_VALVE_2_HIGH__", SN_CHECK);
MakeNameEx(0x9C5F1, "P1491_PCV_BLOWBY_FUNCTION_PROBLEM_______", SN_CHECK);
MakeNameEx(0x9C5A9, "P1518_STARTER_SWITCH_LOW_INPUT__", SN_CHECK);
MakeNameEx(0x9C657, "P1519_IMRC_STUCK_CLOSED_______", SN_CHECK);
MakeNameEx(0x9C656, "P1520_IMRC_CIRCUIT_MALFUNCTION_______", SN_CHECK);
MakeNameEx(0x9C5F2, "P1560_BACKUP_VOLTAGE_MALFUNCTION_______", SN_CHECK);
MakeNameEx(0x9C655, "P1616_SBDS_INTERACTIVE_CODES_______", SN_CHECK);
MakeNameEx(0x9C62E, "P2004_TGV_INTAKE_MANIFOLD_RUNNER_1_STUCK_OPEN_______", SN_CHECK);
MakeNameEx(0x9C630, "P2005_TGV_INTAKE_MANIFOLD_RUNNER_2_STUCK_OPEN_______", SN_CHECK);
MakeNameEx(0x9C62F, "P2006_TGV_INTAKE_MANIFOLD_RUNNER_1_STUCK_CLOSED_______", SN_CHECK);
MakeNameEx(0x9C631, "P2007_TGV_INTAKE_MANIFOLD_RUNNER_2_STUCK_CLOSED_______", SN_CHECK);
MakeNameEx(0x9C63C, "P2008_TGV_INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_OPEN_______", SN_CHECK);
MakeNameEx(0x9C63A, "P2009_TGV_INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_LOW_______", SN_CHECK);
MakeNameEx(0x9C63D, "P2011_TGV_INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_OPEN_______", SN_CHECK);
MakeNameEx(0x9C63B, "P2012_TGV_INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_LOW_______", SN_CHECK);
MakeNameEx(0x9C636, "P2016_TGV_INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_LOW_______", SN_CHECK);
MakeNameEx(0x9C637, "P2017_TGV_INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_HIGH_______", SN_CHECK);
MakeNameEx(0x9C638, "P2021_TGV_INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_LOW_______", SN_CHECK);
MakeNameEx(0x9C639, "P2022_TGV_INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_HIGH_______", SN_CHECK);
MakeNameEx(0x9C621, "P2088_OCV_SOLENOID_A1_CIRCUIT_OPEN_______", SN_CHECK);
MakeNameEx(0x9C620, "P2089_OCV_SOLENOID_A1_CIRCUIT_SHORT_______", SN_CHECK);
MakeNameEx(0x9C61D, "P2090_OCV_SOLENOID_B1_CIRCUIT_OPEN_", SN_CHECK);
MakeNameEx(0x9C61C, "P2091_OCV_SOLENOID_B1_CIRCUIT_SHORT_", SN_CHECK);
MakeNameEx(0x9C61F, "P2092_OCV_SOLENOID_A2_CIRCUIT_OPEN_______", SN_CHECK);
MakeNameEx(0x9C61E, "P2093_OCV_SOLENOID_A2_CIRCUIT_SHORT_______", SN_CHECK);
MakeNameEx(0x9C61B, "P2094_OCV_SOLENOID_B2_CIRCUIT_OPEN_", SN_CHECK);
MakeNameEx(0x9C61A, "P2095_OCV_SOLENOID_B2_CIRCUIT_SHORT_", SN_CHECK);
MakeNameEx(0x9C60B, "P2096_POST_CATALYST_TOO_LEAN_B1_______", SN_CHECK);
MakeNameEx(0x9C614, "P2097_POST_CATALYST_TOO_RICH_B1_______", SN_CHECK);
MakeNameEx(0x9C60A, "P2101_THROTTLE_ACTUATOR_CIRCUIT_RANGEPERF_______", SN_CHECK);
MakeNameEx(0x9C608, "P2102_THROTTLE_ACTUATOR_CIRCUIT_LOW_______", SN_CHECK);
MakeNameEx(0x9C609, "P2103_THROTTLE_ACTUATOR_CIRCUIT_HIGH_______", SN_CHECK);
MakeNameEx(0x9C604, "P2109_TPS_A_MINIMUM_STOP_PERF_______", SN_CHECK);
MakeNameEx(0x9C611, "P2122_TPS_D_CIRCUIT_LOW_INPUT_______", SN_CHECK);
MakeNameEx(0x9C612, "P2123_TPS_D_CIRCUIT_HIGH_INPUT_______", SN_CHECK);
MakeNameEx(0x9C60F, "P2127_TPS_E_CIRCUIT_LOW_INPUT_______", SN_CHECK);
MakeNameEx(0x9C610, "P2128_TPS_E_CIRCUIT_HIGH_INPUT_______", SN_CHECK);
MakeNameEx(0x9C613, "P2135_TPS_AB_VOLTAGE_______", SN_CHECK);
MakeNameEx(0x9C60E, "P2138_TPS_DE_VOLTAGE_______", SN_CHECK);
MakeNameEx(0x9C67E, "P219A_BANK_1_AFR_IMBALANCE__", SN_CHECK);
MakeNameEx(0x9C66C, "P2401_EVAP_LEAK_DETECTION_PUMP_CONTROL_CIRCUIT_LOW__", SN_CHECK);
MakeNameEx(0x9C680, "P2402_EVAP_LEAK_DETECTION_PUMP_CONTROL_CIRCUIT_HIGH__", SN_CHECK);
MakeNameEx(0x9C66B, "P2419_EVAP_SWITCHING_VALVE_LOW_______", SN_CHECK);
MakeNameEx(0x9C66A, "P2420_EVAP_SWITCHING_VALVE_HIGH_______", SN_CHECK);
MakeNameEx(0x9C641, "P2431_SECONDARY_AIR_PUMP_CIRCUIT_RANGEPERF_______", SN_CHECK);
MakeNameEx(0x9C643, "P2432_SECONDARY_AIR_PUMP_CIRCUIT_LOW_______", SN_CHECK);
MakeNameEx(0x9C642, "P2433_SECONDARY_AIR_PUMP_CIRCUIT_HIGH_______", SN_CHECK);
MakeNameEx(0x9C650, "P2440_SECONDARY_AIR_PUMP_VALVE_1_STUCK_OPEN_______", SN_CHECK);
MakeNameEx(0x9C64F, "P2441_SECONDARY_AIR_PUMP_VALVE_1_STUCK_CLOSED_______", SN_CHECK);
MakeNameEx(0x9C64E, "P2442_SECONDARY_AIR_PUMP_VALVE_2_STUCK_OPEN_______", SN_CHECK);
MakeNameEx(0x9C64D, "P2443_SECONDARY_AIR_PUMP_2_STUCK_CLOSED_______", SN_CHECK);
MakeNameEx(0x9C63E, "P2444_SECONDARY_AIR_PUMP_1_STUCK_ON_B1_______", SN_CHECK);
MakeNameEx(0x9C665, "U0073_CAN_COMMUNICATION_BUS_A_OFF__", SN_CHECK);
MakeNameEx(0x9C662, "U0101_CAN_LOST_COMMUNICATION_WITH_TCM__", SN_CHECK);
MakeNameEx(0x9C664, "U0122_CAN_LOST_COMMUNICATION_WITH_VDC__", SN_CHECK);
MakeNameEx(0x9C660, "U0140_CAN_LOST_COMMUNICATION_WITH_BIU__", SN_CHECK);
MakeNameEx(0x9C661, "U0402_CAN_INVALID_DATA_RECEIVED_FROM_TCM__", SN_CHECK);
MakeNameEx(0x9C663, "U0416_CAN_INVALID_DATA_RECEIVED_FROM_VDC__", SN_CHECK);
MakeNameEx(0x9C65F, "U0422_CAN_INVALID_DATA_RECEIVED_FROM_BIU__", SN_CHECK);
MakeNameEx(0xC1038, "Target_Boost_________", SN_CHECK);
referenceAddress = DfirstB(0xC1038);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Boost_________", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_________\n");
}

MakeNameEx(0xC0FC8, "Target_Boost_X_AXIS_______", SN_CHECK);
MakeNameEx(0xC1000, "Target_Boost_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xC0B4C, "Target_Boost_Compensation_ECT________", SN_CHECK);
referenceAddress = DfirstB(0xC0B4C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_ECT________", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_ECT________\n");
}

MakeNameEx(0xC0A6C, "Target_Boost_Compensation_ECT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xC0A64, "Target_Boost_Compensation_1st_Gear________", SN_CHECK);
MakeNameEx(0xC0A60, "Target_Boost_Compensation_1st_Gear_Speed_Disable________", SN_CHECK);
MakeNameEx(0xC0CA8, "Target_Boost_Compensation_IAT_________", SN_CHECK);
referenceAddress = DfirstB(0xC0CA8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_IAT_________", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_IAT_________\n");
}

MakeNameEx(0xC0C7C, "Target_Boost_Compensation_IAT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xC0D44, "Target_Boost_Compensation_Atm_Pressure_________", SN_CHECK);
referenceAddress = DfirstB(0xC0D44);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_Atm_Pressure_________", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_Atm_Pressure_________\n");
}

MakeNameEx(0xC0D14, "Target_Boost_Compensation_Atm_Pressure_X_AXIS_______", SN_CHECK);
MakeNameEx(0xC0D2C, "Target_Boost_Compensation_Atm_Pressure_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD31FC, "Boost_Limit_Fuel_Cut_________", SN_CHECK);
referenceAddress = DfirstB(0xD31FC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Boost_Limit_Fuel_Cut_________", SN_CHECK);
}
else
{
    Message("No reference to Boost_Limit_Fuel_Cut_________\n");
}

MakeNameEx(0xD31CC, "Boost_Limit_Fuel_Cut_X_AXIS_______", SN_CHECK);
MakeNameEx(0xD31E4, "Boost_Limit_Fuel_Cut_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xC0A54, "Boost_Control_Disable_IAM________", SN_CHECK);
MakeNameEx(0xC0A50, "Boost_Control_Disable_Fine_Correction________", SN_CHECK);
MakeNameEx(0xC0A05, "Boost_Control_Disable_Delay_Fine_Correction________", SN_CHECK);
MakeNameEx(0xC0EEC, "Initial_Wastegate_Duty_________", SN_CHECK);
referenceAddress = DfirstB(0xC0EEC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Initial_Wastegate_Duty_________", SN_CHECK);
}
else
{
    Message("No reference to Initial_Wastegate_Duty_________\n");
}

MakeNameEx(0xC0E98, "Initial_Wastegate_Duty_X_AXIS_______", SN_CHECK);
MakeNameEx(0xC0EC4, "Initial_Wastegate_Duty_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xC0DBC, "Max_Wastegate_Duty_________", SN_CHECK);
referenceAddress = DfirstB(0xC0DBC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Max_Wastegate_Duty_________", SN_CHECK);
}
else
{
    Message("No reference to Max_Wastegate_Duty_________\n");
}

MakeNameEx(0xC0D68, "Max_Wastegate_Duty_X_AXIS_______", SN_CHECK);
MakeNameEx(0xC0D94, "Max_Wastegate_Duty_Y_AXIS_______", SN_CHECK);
MakeNameEx(0x13F3C, "Max_Wastegate_Duty_Limit_PostCompensation________", SN_CHECK);
MakeNameEx(0xC0AEC, "InitialMax_Wastegate_Duty_Compensation_IAT________", SN_CHECK);
referenceAddress = DfirstB(0xC0AEC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_IAT________", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_IAT________\n");
}

MakeNameEx(0xC0AAC, "InitialMax_Wastegate_Duty_Compensation_IAT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xC0B0C, "InitialMax_Wastegate_Duty_Compensation_ECT________", SN_CHECK);
referenceAddress = DfirstB(0xC0B0C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_ECT________", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_ECT________\n");
}

MakeNameEx(0xC0A6C, "InitialMax_Wastegate_Duty_Compensation_ECT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xC0CFC, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure________", SN_CHECK);
referenceAddress = DfirstB(0xC0CFC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_Atm_Pressure________", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_Atm_Pressure________\n");
}

MakeNameEx(0xC0CD4, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_X_AXIS_______", SN_CHECK);
MakeNameEx(0xC0CEC, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xC0B80, "Turbo_Dynamics_Proportional________", SN_CHECK);
referenceAddress = DfirstB(0xC0B80);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Proportional________", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Proportional________\n");
}

MakeNameEx(0xC0B5C, "Turbo_Dynamics_Proportional_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xC0BF0, "Turbo_Dynamics_Integral_Positive________", SN_CHECK);
referenceAddress = DfirstB(0xC0BF0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Integral_Positive________", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Integral_Positive________\n");
}

MakeNameEx(0xC0BCC, "Turbo_Dynamics_Integral_Positive_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xC0BB8, "Turbo_Dynamics_Integral_Negative________", SN_CHECK);
referenceAddress = DfirstB(0xC0BB8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Integral_Negative________", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Integral_Negative________\n");
}

MakeNameEx(0xC0B94, "Turbo_Dynamics_Integral_Negative_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xC0B1C, "TD_Proportional_Compensation_IAT________", SN_CHECK);
referenceAddress = DfirstB(0xC0B1C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Proportional_Compensation_IAT________", SN_CHECK);
}
else
{
    Message("No reference to TD_Proportional_Compensation_IAT________\n");
}

MakeNameEx(0xC0AAC, "TD_Proportional_Compensation_IAT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xC0B3C, "TD_Integral_Positive_Compensation_IAT________", SN_CHECK);
referenceAddress = DfirstB(0xC0B3C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Integral_Positive_Compensation_IAT________", SN_CHECK);
}
else
{
    Message("No reference to TD_Integral_Positive_Compensation_IAT________\n");
}

MakeNameEx(0xC0AAC, "TD_Integral_Positive_Compensation_IAT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xC0B2C, "TD_Integral_Negative_Compensation_IAT________", SN_CHECK);
referenceAddress = DfirstB(0xC0B2C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Integral_Negative_Compensation_IAT________", SN_CHECK);
}
else
{
    Message("No reference to TD_Integral_Negative_Compensation_IAT________\n");
}

MakeNameEx(0xC0AAC, "TD_Integral_Negative_Compensation_IAT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xC0A40, "TD_Activation_Thresholds_RPM________", SN_CHECK);
MakeNameEx(0xC0A2C, "TD_Activation_Thresholds_Target_Boost_________", SN_CHECK);
MakeNameEx(0xC0A48, "TD_Integral_Cumulative_Range_WGDC_Correction________", SN_CHECK);
MakeNameEx(0xC0A34, "TD_Integral_Negative_Activation_Boost_Error________", SN_CHECK);
MakeNameEx(0xC0A38, "TD_Integral_Positive_Activation_Boost_Error________", SN_CHECK);
MakeNameEx(0xC0A3C, "TD_Integral_Negative_Activation_Wastegate_Duty________", SN_CHECK);
MakeNameEx(0xD9B50, "Manifold_Pressure_Sensor_Scaling_________", SN_CHECK);
MakeNameEx(0xD9AB2, "Manifold_Pressure_Sensor_Limits_CEL________", SN_CHECK);
MakeNameEx(0xD9A66, "Manifold_Pressure_Sensor_CEL_Delays________", SN_CHECK);
MakeNameEx(0xD0E78, "Primary_Open_Loop_Fueling_KCA_Additive_B_Low__", SN_CHECK);
referenceAddress = DfirstB(0xD0E78);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_KCA_Additive_B_Low__", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_KCA_Additive_B_Low__\n");
}

MakeNameEx(0xD0DE4, "Primary_Open_Loop_Fueling_KCA_Additive_B_Low_X_AXIS__", SN_CHECK);
MakeNameEx(0xD0E30, "Primary_Open_Loop_Fueling_KCA_Additive_B_Low_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD0A8C, "Primary_Open_Loop_Fueling_KCA_Additive_B_High__", SN_CHECK);
referenceAddress = DfirstB(0xD0A8C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_KCA_Additive_B_High__", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_KCA_Additive_B_High__\n");
}

MakeNameEx(0xD09F8, "Primary_Open_Loop_Fueling_KCA_Additive_B_High_X_AXIS__", SN_CHECK);
MakeNameEx(0xD0A44, "Primary_Open_Loop_Fueling_KCA_Additive_B_High_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD0C78, "Primary_Open_Loop_Fueling_Failsafe________", SN_CHECK);
referenceAddress = DfirstB(0xD0C78);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Failsafe________", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Failsafe________\n");
}

MakeNameEx(0xD0BE4, "Primary_Open_Loop_Fueling_Failsafe_X_AXIS_______", SN_CHECK);
MakeNameEx(0xD0C30, "Primary_Open_Loop_Fueling_Failsafe_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD1064, "Primary_Open_Loop_Fueling_KCA_Alternate_Mode__", SN_CHECK);
referenceAddress = DfirstB(0xD1064);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_KCA_Alternate_Mode__", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_KCA_Alternate_Mode__\n");
}

MakeNameEx(0xD0FD0, "Primary_Open_Loop_Fueling_KCA_Alternate_Mode_X_AXIS__", SN_CHECK);
MakeNameEx(0xD101C, "Primary_Open_Loop_Fueling_KCA_Alternate_Mode_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD1250, "Primary_Open_Loop_Fueling_Failsafe_KCA_Alternate_Mode__", SN_CHECK);
referenceAddress = DfirstB(0xD1250);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Failsafe_KCA_Alternate_Mode__", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Failsafe_KCA_Alternate_Mode__\n");
}

MakeNameEx(0xD11BC, "Primary_Open_Loop_Fueling_Failsafe_KCA_Alternate_Mode_X_AXIS__", SN_CHECK);
MakeNameEx(0xD1208, "Primary_Open_Loop_Fueling_Failsafe_KCA_Alternate_Mode_Y_AXIS__", SN_CHECK);
MakeNameEx(0xCCDC8, "Primary_Open_Loop_Fuel_Map_Switch_IAM________", SN_CHECK);
MakeNameEx(0xCCDCC, "Minimum_Active_Primary_Open_Loop_Enrichment________", SN_CHECK);
MakeNameEx(0xCD9BC, "Minimum_Primary_Open_Loop_Enrichment_Throttle________", SN_CHECK);
referenceAddress = DfirstB(0xCD9BC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Throttle________", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Throttle________\n");
}

MakeNameEx(0xCD9A4, "Minimum_Primary_Open_Loop_Enrichment_Throttle_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCD9E0, "Minimum_Primary_Open_Loop_Enrichment_Accelerator________", SN_CHECK);
referenceAddress = DfirstB(0xCD9E0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Accelerator________", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Accelerator________\n");
}

MakeNameEx(0xCD9C4, "Minimum_Primary_Open_Loop_Enrichment_Accelerator_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCF2F4, "Primary_Open_Loop_Fueling_Compensation_ECT________", SN_CHECK);
referenceAddress = DfirstB(0xCF2F4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_ECT________", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_ECT________\n");
}

MakeNameEx(0xCD280, "Primary_Open_Loop_Fueling_Compensation_ECT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCD94C, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_________", SN_CHECK);
referenceAddress = DfirstB(0xCD94C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_________", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_________\n");
}

MakeNameEx(0xCD934, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD9DEC, "Front_Oxygen_Sensor_Scaling________", SN_CHECK);
referenceAddress = DfirstB(0xD9DEC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Scaling________", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Scaling________\n");
}

MakeNameEx(0xD9DB8, "Front_Oxygen_Sensor_Scaling_Y_AXIS_______", SN_CHECK);
MakeNameEx(0x2208C, "Front_Oxygen_Sensor_Rich_Limit________", SN_CHECK);
MakeNameEx(0xC3300, "Front_Oxygen_Sensor_Compensation_Atm_Pressure________", SN_CHECK);
referenceAddress = DfirstB(0xC3300);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Compensation_Atm_Pressure________", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Compensation_Atm_Pressure________\n");
}

MakeNameEx(0xC32F0, "Front_Oxygen_Sensor_Compensation_Atm_Pressure_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD21D4, "CL_Fueling_Target_Compensation_A_Load________", SN_CHECK);
referenceAddress = DfirstB(0xD21D4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_A_Load________", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_A_Load________\n");
}

MakeNameEx(0xD2178, "CL_Fueling_Target_Compensation_A_Load_X_AXIS_______", SN_CHECK);
MakeNameEx(0xD21A8, "CL_Fueling_Target_Compensation_A_Load_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD24AC, "CL_Fueling_Target_Compensation_B_Load________", SN_CHECK);
referenceAddress = DfirstB(0xD24AC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_B_Load________", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_B_Load________\n");
}

MakeNameEx(0xD2440, "CL_Fueling_Target_Compensation_B_Load_X_AXIS_______", SN_CHECK);
MakeNameEx(0xD2478, "CL_Fueling_Target_Compensation_B_Load_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD20AC, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT________", SN_CHECK);
referenceAddress = DfirstB(0xD20AC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Imm_Cruise_ECT________", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Imm_Cruise_ECT________\n");
}

MakeNameEx(0xCD280, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_X_AXIS_______", SN_CHECK);
MakeNameEx(0xD20A0, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD2118, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT________", SN_CHECK);
referenceAddress = DfirstB(0xD2118);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Imm_NonCruise_ECT________", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Imm_NonCruise_ECT________\n");
}

MakeNameEx(0xCD280, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_X_AXIS_______", SN_CHECK);
MakeNameEx(0xD210C, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCCBF8, "CL_Fueling_Target_Compensation_ECT_Disable___", SN_CHECK);
MakeNameEx(0xCC8CE, "CL_to_OL_Delay_________", SN_CHECK);
MakeNameEx(0xCC8C8, "CL_to_OL_DelaySwitch_SIDRIVE_Intelligent___", SN_CHECK);
MakeNameEx(0xCD994, "CL_to_OL_Transition_with_Delay_Throttle________", SN_CHECK);
referenceAddress = DfirstB(0xCD994);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Throttle________", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Throttle________\n");
}

MakeNameEx(0xCD954, "CL_to_OL_Transition_with_Delay_Throttle_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCCDD4, "CL_to_OL_Transition_with_Delay_Throttle_Hysteresis________", SN_CHECK);
MakeNameEx(0xCF220, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width________", SN_CHECK);
referenceAddress = DfirstB(0xCF220);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Base_Pulse_Width________", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Base_Pulse_Width________\n");
}

MakeNameEx(0xCF1E0, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCCDD0, "CL_to_OL_Transition_with_Delay_BPW_Hysteresis________", SN_CHECK);
MakeNameEx(0xCF268, "CL_to_OL_Transition_Counter_Step_Value_MAF________", SN_CHECK);
referenceAddress = DfirstB(0xCF268);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_Counter_Step_Value_MAF________", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_Counter_Step_Value_MAF________\n");
}

MakeNameEx(0xCF240, "CL_to_OL_Transition_Counter_Step_Value_MAF_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCCE34, "CL_Delay_Maximum_Throttle________", SN_CHECK);
MakeNameEx(0xCCE50, "CL_Delay_Maximum_Vehicle_Speed________", SN_CHECK);
MakeNameEx(0xCCDD8, "CL_Delay_Minimum_ECT________", SN_CHECK);
MakeNameEx(0xCCE60, "CL_Delay_Maximum_Engine_Load________", SN_CHECK);
MakeNameEx(0xCC8C6, "CL_Delay_Engine_Load_Counter_Threshold________", SN_CHECK);
MakeNameEx(0xCCDDC, "CL_Delay_Maximum_Engine_Speed_Per_Gear________", SN_CHECK);
MakeNameEx(0xCCE04, "CL_Delay_Maximum_Engine_Speed_Neutral________", SN_CHECK);
MakeNameEx(0xD1C6C, "Injector_Latency_________", SN_CHECK);
referenceAddress = DfirstB(0xD1C6C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Injector_Latency_________", SN_CHECK);
}
else
{
    Message("No reference to Injector_Latency_________\n");
}

MakeNameEx(0xD1C4C, "Injector_Latency_X_AXIS_______", SN_CHECK);
MakeNameEx(0xD1C60, "Injector_Latency_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCCA68, "Injector_Flow_Scaling________", SN_CHECK);
MakeNameEx(0xD1490, "Per_Injector_Pulse_Width_Compensation_A________", SN_CHECK);
referenceAddress = DfirstB(0xD1490);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_A________", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_A________\n");
}

MakeNameEx(0xD1410, "Per_Injector_Pulse_Width_Compensation_A_X_AXIS_______", SN_CHECK);
MakeNameEx(0xD1450, "Per_Injector_Pulse_Width_Compensation_A_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD1610, "Per_Injector_Pulse_Width_Compensation_B________", SN_CHECK);
referenceAddress = DfirstB(0xD1610);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_B________", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_B________\n");
}

MakeNameEx(0xD1590, "Per_Injector_Pulse_Width_Compensation_B_X_AXIS_______", SN_CHECK);
MakeNameEx(0xD15D0, "Per_Injector_Pulse_Width_Compensation_B_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD1790, "Per_Injector_Pulse_Width_Compensation_C________", SN_CHECK);
referenceAddress = DfirstB(0xD1790);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_C________", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_C________\n");
}

MakeNameEx(0xD1710, "Per_Injector_Pulse_Width_Compensation_C_X_AXIS_______", SN_CHECK);
MakeNameEx(0xD1750, "Per_Injector_Pulse_Width_Compensation_C_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD1910, "Per_Injector_Pulse_Width_Compensation_D________", SN_CHECK);
referenceAddress = DfirstB(0xD1910);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_D________", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_D________\n");
}

MakeNameEx(0xD1890, "Per_Injector_Pulse_Width_Compensation_D_X_AXIS_______", SN_CHECK);
MakeNameEx(0xD18D0, "Per_Injector_Pulse_Width_Compensation_D_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCDF06, "Cranking_Fuel_Injector_Pulse_Width_A_ECT________", SN_CHECK);
referenceAddress = DfirstB(0xCDF06);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_A_ECT________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_A_ECT________\n");
}

MakeNameEx(0xCD280, "Cranking_Fuel_Injector_Pulse_Width_A_ECT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCDF26, "Cranking_Fuel_Injector_Pulse_Width_B_ECT________", SN_CHECK);
referenceAddress = DfirstB(0xCDF26);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_B_ECT________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_B_ECT________\n");
}

MakeNameEx(0xCD280, "Cranking_Fuel_Injector_Pulse_Width_B_ECT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCDF46, "Cranking_Fuel_Injector_Pulse_Width_C_ECT________", SN_CHECK);
referenceAddress = DfirstB(0xCDF46);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_C_ECT________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_C_ECT________\n");
}

MakeNameEx(0xCD280, "Cranking_Fuel_Injector_Pulse_Width_C_ECT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCDF66, "Cranking_Fuel_Injector_Pulse_Width_D_ECT________", SN_CHECK);
referenceAddress = DfirstB(0xCDF66);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_D_ECT________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_D_ECT________\n");
}

MakeNameEx(0xCD280, "Cranking_Fuel_Injector_Pulse_Width_D_ECT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCDF86, "Cranking_Fuel_Injector_Pulse_Width_E_ECT________", SN_CHECK);
referenceAddress = DfirstB(0xCDF86);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_E_ECT________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_E_ECT________\n");
}

MakeNameEx(0xCD280, "Cranking_Fuel_Injector_Pulse_Width_E_ECT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCDFA6, "Cranking_Fuel_Injector_Pulse_Width_F_ECT________", SN_CHECK);
referenceAddress = DfirstB(0xCDFA6);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_F_ECT________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_F_ECT________\n");
}

MakeNameEx(0xCD280, "Cranking_Fuel_Injector_Pulse_Width_F_ECT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD042C, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM________", SN_CHECK);
referenceAddress = DfirstB(0xD042C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM________\n");
}

MakeNameEx(0xD03FC, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_X_AXIS_______", SN_CHECK);
MakeNameEx(0xD0410, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD03D8, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM________", SN_CHECK);
referenceAddress = DfirstB(0xD03D8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM________\n");
}

MakeNameEx(0xD03A8, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_X_AXIS_______", SN_CHECK);
MakeNameEx(0xD03BC, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCD484, "Cranking_Fuel_IPW_Compensation_MAP________", SN_CHECK);
referenceAddress = DfirstB(0xCD484);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_MAP________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_MAP________\n");
}

MakeNameEx(0xCD45C, "Cranking_Fuel_IPW_Compensation_MAP_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCD4B8, "Cranking_Fuel_IPW_Compensation_Accelerator________", SN_CHECK);
referenceAddress = DfirstB(0xCD4B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Accelerator________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Accelerator________\n");
}

MakeNameEx(0xCD490, "Cranking_Fuel_IPW_Compensation_Accelerator_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCD4D8, "Cranking_Fuel_IPW_Compensation_IAT________", SN_CHECK);
referenceAddress = DfirstB(0xCD4D8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_IAT________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_IAT________\n");
}

MakeNameEx(0xCD4C4, "Cranking_Fuel_IPW_Compensation_IAT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCFA78, "Throttle_Tipin_Enrichment_A________", SN_CHECK);
referenceAddress = DfirstB(0xCFA78);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment_A________", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment_A________\n");
}

MakeNameEx(0xCFA30, "Throttle_Tipin_Enrichment_A_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCFAE4, "Throttle_Tipin_Enrichment_B________", SN_CHECK);
referenceAddress = DfirstB(0xCFAE4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment_B________", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment_B________\n");
}

MakeNameEx(0xCFA9C, "Throttle_Tipin_Enrichment_B_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCD110, "Minimum_Tipin_Enrichment_Activation________", SN_CHECK);
MakeNameEx(0xCD10C, "Minimum_Tipin_Enrichment_Activation_Throttle________", SN_CHECK);
MakeNameEx(0xCDD6C, "Tipin_Enrichment_Compensation_Boost_Error________", SN_CHECK);
referenceAddress = DfirstB(0xCDD6C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_Boost_Error________", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_Boost_Error________\n");
}

MakeNameEx(0xCDD48, "Tipin_Enrichment_Compensation_Boost_Error_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCDD38, "Tipin_Enrichment_Compensation_RPM________", SN_CHECK);
referenceAddress = DfirstB(0xCDD38);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_RPM________", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_RPM________\n");
}

MakeNameEx(0xCDCF8, "Tipin_Enrichment_Compensation_RPM_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCDD75, "Tipin_Enrichment_Compensation_A_ECT________", SN_CHECK);
referenceAddress = DfirstB(0xCDD75);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_A_ECT________", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_A_ECT________\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Compensation_A_ECT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCFB08, "Tipin_Enrichment_Compensation_B_ECT________", SN_CHECK);
referenceAddress = DfirstB(0xCFB08);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_B_ECT________", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_B_ECT________\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Compensation_B_ECT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCFB28, "Tipin_Enrichment_Compensation_C_ECT________", SN_CHECK);
referenceAddress = DfirstB(0xCFB28);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_C_ECT________", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_C_ECT________\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Compensation_C_ECT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCFB68, "Tipin_Enrichment_Compensation_D_ECT________", SN_CHECK);
referenceAddress = DfirstB(0xCFB68);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_D_ECT________", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_D_ECT________\n");
}

MakeNameEx(0xCD2C0, "Tipin_Enrichment_Compensation_D_ECT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCD114, "Tipin_Enrichment_Compensation_D_ECT_Activation________", SN_CHECK);
MakeNameEx(0xCDD85, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT________", SN_CHECK);
referenceAddress = DfirstB(0xCDD85);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT________", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT________\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCDD95, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT________", SN_CHECK);
referenceAddress = DfirstB(0xCDD95);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT________", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT________\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCC874, "Tipin_Enrichment_Applied_Counter_Reset________", SN_CHECK);
MakeNameEx(0xCFB88, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT________", SN_CHECK);
referenceAddress = DfirstB(0xCFB88);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT________", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT________\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCFBA8, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT________", SN_CHECK);
referenceAddress = DfirstB(0xCFBA8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT________", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT________\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCC875, "Tipin_Throttle_Cumulative_Reset________", SN_CHECK);
MakeNameEx(0xD0684, "Min_Primary_Base_Enrichment_1_Cruise________", SN_CHECK);
referenceAddress = DfirstB(0xD0684);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_Cruise________", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_Cruise________\n");
}

MakeNameEx(0xCD280, "Min_Primary_Base_Enrichment_1_Cruise_X_AXIS_______", SN_CHECK);
MakeNameEx(0xD0660, "Min_Primary_Base_Enrichment_1_Cruise_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD05E0, "Min_Primary_Base_Enrichment_1_NonCruise________", SN_CHECK);
referenceAddress = DfirstB(0xD05E0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonCruise________", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonCruise________\n");
}

MakeNameEx(0xCD280, "Min_Primary_Base_Enrichment_1_NonCruise_X_AXIS_______", SN_CHECK);
MakeNameEx(0xD05C0, "Min_Primary_Base_Enrichment_1_NonCruise_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCD53D, "Min_Primary_Base_Enrichment_1_NonPrimary_OL_________", SN_CHECK);
referenceAddress = DfirstB(0xCD53D);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonPrimary_OL_________", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonPrimary_OL_________\n");
}

MakeNameEx(0xCD280, "Min_Primary_Base_Enrichment_1_NonPrimary_OL_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCCCC0, "AF_Learning_1_Limits________", SN_CHECK);
MakeNameEx(0xCCCD0, "AF_Learning_1_Airflow_Ranges________", SN_CHECK);
MakeNameEx(0xC2D18, "MAF_Limit_Maximum________", SN_CHECK);
MakeNameEx(0xD9CE0, "MAF_Sensor_Scaling________", SN_CHECK);
referenceAddress = DfirstB(0xD9CE0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_MAF_Sensor_Scaling________", SN_CHECK);
}
else
{
    Message("No reference to MAF_Sensor_Scaling________\n");
}

MakeNameEx(0xD9C08, "MAF_Sensor_Scaling_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xC3768, "MAF_Compensation_IAT________", SN_CHECK);
referenceAddress = DfirstB(0xC3768);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_MAF_Compensation_IAT________", SN_CHECK);
}
else
{
    Message("No reference to MAF_Compensation_IAT________\n");
}

MakeNameEx(0xC3734, "MAF_Compensation_IAT_X_AXIS_______", SN_CHECK);
MakeNameEx(0xC3748, "MAF_Compensation_IAT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0x205E8, "Engine_Load_Limit_A_Maximum________", SN_CHECK);
MakeNameEx(0xC3200, "Engine_Load_Limit_B_Maximum_RPM________", SN_CHECK);
referenceAddress = DfirstB(0xC3200);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Limit_B_Maximum_RPM________", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Limit_B_Maximum_RPM________\n");
}

MakeNameEx(0xC31F8, "Engine_Load_Limit_B_Maximum_RPM_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xC3818, "Engine_Load_Compensation_Cruise_MP________", SN_CHECK);
referenceAddress = DfirstB(0xC3818);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Compensation_Cruise_MP________", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Compensation_Cruise_MP________\n");
}

MakeNameEx(0xC3790, "Engine_Load_Compensation_Cruise_MP_X_AXIS_______", SN_CHECK);
MakeNameEx(0xC37BC, "Engine_Load_Compensation_Cruise_MP_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xC3998, "Engine_Load_Compensation_NonCruise_MP________", SN_CHECK);
referenceAddress = DfirstB(0xC3998);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Compensation_NonCruise_MP________", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Compensation_NonCruise_MP________\n");
}

MakeNameEx(0xC3918, "Engine_Load_Compensation_NonCruise_MP_X_AXIS_______", SN_CHECK);
MakeNameEx(0xC3944, "Engine_Load_Compensation_NonCruise_MP_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD5240, "Base_Timing_Primary_Cruise________", SN_CHECK);
referenceAddress = DfirstB(0xD5240);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Primary_Cruise________", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Primary_Cruise________\n");
}

MakeNameEx(0xD51AC, "Base_Timing_Primary_Cruise_X_AXIS_______", SN_CHECK);
MakeNameEx(0xD51F8, "Base_Timing_Primary_Cruise_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD5618, "Base_Timing_Reference_Cruise_AVCS_related________", SN_CHECK);
referenceAddress = DfirstB(0xD5618);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Reference_Cruise_AVCS_related________", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Reference_Cruise_AVCS_related________\n");
}

MakeNameEx(0xD5584, "Base_Timing_Reference_Cruise_AVCS_related_X_AXIS_______", SN_CHECK);
MakeNameEx(0xD55D0, "Base_Timing_Reference_Cruise_AVCS_related_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD542C, "Base_Timing_Primary_NonCruise________", SN_CHECK);
referenceAddress = DfirstB(0xD542C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Primary_NonCruise________", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Primary_NonCruise________\n");
}

MakeNameEx(0xD5398, "Base_Timing_Primary_NonCruise_X_AXIS_______", SN_CHECK);
MakeNameEx(0xD53E4, "Base_Timing_Primary_NonCruise_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD5804, "Base_Timing_Reference_NonCruise_AVCS_related________", SN_CHECK);
referenceAddress = DfirstB(0xD5804);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Reference_NonCruise_AVCS_related________", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Reference_NonCruise_AVCS_related________\n");
}

MakeNameEx(0xD5770, "Base_Timing_Reference_NonCruise_AVCS_related_X_AXIS_______", SN_CHECK);
MakeNameEx(0xD57BC, "Base_Timing_Reference_NonCruise_AVCS_related_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD3DEA, "Base_Timing_Idle_A_InGear________", SN_CHECK);
referenceAddress = DfirstB(0xD3DEA);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_A_InGear________", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_A_InGear________\n");
}

MakeNameEx(0xD3BD0, "Base_Timing_Idle_A_InGear_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD3DFA, "Base_Timing_Idle_B_InGear________", SN_CHECK);
referenceAddress = DfirstB(0xD3DFA);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_B_InGear________", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_B_InGear________\n");
}

MakeNameEx(0xD3BD0, "Base_Timing_Idle_B_InGear_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD3E0A, "Base_Timing_Idle_A_Neutral________", SN_CHECK);
referenceAddress = DfirstB(0xD3E0A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_A_Neutral________", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_A_Neutral________\n");
}

MakeNameEx(0xD3BD0, "Base_Timing_Idle_A_Neutral_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD3E1A, "Base_Timing_Idle_B_Neutral________", SN_CHECK);
referenceAddress = DfirstB(0xD3E1A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_B_Neutral________", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_B_Neutral________\n");
}

MakeNameEx(0xD3BD0, "Base_Timing_Idle_B_Neutral_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD3DE1, "Base_Timing_Idle_Minimum________", SN_CHECK);
referenceAddress = DfirstB(0xD3DE1);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_Minimum________", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_Minimum________\n");
}

MakeNameEx(0xD3C50, "Base_Timing_Idle_Minimum_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD3770, "Base_Timing_Idle_Minimum_Vehicle_Speed_Enable________", SN_CHECK);
MakeNameEx(0xD616C, "Knock_Correction_Advance_Max_Additive_A_Knock_Conditions_IAM__", SN_CHECK);
referenceAddress = DfirstB(0xD616C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_Additive_A_Knock_Conditions_IAM__", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_Additive_A_Knock_Conditions_IAM__\n");
}

MakeNameEx(0xD60D8, "Knock_Correction_Advance_Max_Additive_A_Knock_Conditions_IAM_X_AXIS__", SN_CHECK);
MakeNameEx(0xD6124, "Knock_Correction_Advance_Max_Additive_A_Knock_Conditions_IAM_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD6730, "Knock_Correction_Advance_Max_Additive_B_Knock_Conditions__", SN_CHECK);
referenceAddress = DfirstB(0xD6730);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_Additive_B_Knock_Conditions__", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_Additive_B_Knock_Conditions__\n");
}

MakeNameEx(0xD669C, "Knock_Correction_Advance_Max_Additive_B_Knock_Conditions_X_AXIS__", SN_CHECK);
MakeNameEx(0xD66E8, "Knock_Correction_Advance_Max_Additive_B_Knock_Conditions_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD6358, "Knock_Correction_Advance_Max_Primary_Cruise_IAM__", SN_CHECK);
referenceAddress = DfirstB(0xD6358);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_Primary_Cruise_IAM__", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_Primary_Cruise_IAM__\n");
}

MakeNameEx(0xD62C4, "Knock_Correction_Advance_Max_Primary_Cruise_IAM_X_AXIS__", SN_CHECK);
MakeNameEx(0xD6310, "Knock_Correction_Advance_Max_Primary_Cruise_IAM_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD6544, "Knock_Correction_Advance_Max_Primary_NonCruise_IAM__", SN_CHECK);
referenceAddress = DfirstB(0xD6544);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_Primary_NonCruise_IAM__", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_Primary_NonCruise_IAM__\n");
}

MakeNameEx(0xD64B0, "Knock_Correction_Advance_Max_Primary_NonCruise_IAM_X_AXIS__", SN_CHECK);
MakeNameEx(0xD64FC, "Knock_Correction_Advance_Max_Primary_NonCruise_IAM_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD3637, "Knock_Correction_Advance_Alternate_Mode___", SN_CHECK);
MakeNameEx(0xD3AD8, "Knock_Correction_Advance_Additive_Range_RPM__", SN_CHECK);
MakeNameEx(0xD3ECC, "Timing_Compensation_A_IAT________", SN_CHECK);
referenceAddress = DfirstB(0xD3ECC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_A_IAT________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_A_IAT________\n");
}

MakeNameEx(0xD3E8C, "Timing_Compensation_A_IAT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD599C, "Timing_Compensation_A_IAT_Activation________", SN_CHECK);
referenceAddress = DfirstB(0xD599C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_A_IAT_Activation________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_A_IAT_Activation________\n");
}

MakeNameEx(0xD595C, "Timing_Compensation_A_IAT_Activation_X_AXIS_______", SN_CHECK);
MakeNameEx(0xD597C, "Timing_Compensation_A_IAT_Activation_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD4474, "Timing_Compensation_B_IAT________", SN_CHECK);
referenceAddress = DfirstB(0xD4474);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_B_IAT________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_B_IAT________\n");
}

MakeNameEx(0xD4434, "Timing_Compensation_B_IAT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD3930, "Timing_Compensation_B_IAT_IAM_Activation________", SN_CHECK);
MakeNameEx(0xD3914, "Timing_Compensation_B_IAT_Max_Additive________", SN_CHECK);
MakeNameEx(0xD3E6A, "Timing_Compensation_Imm_Cruise_A_ECT________", SN_CHECK);
referenceAddress = DfirstB(0xD3E6A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_Cruise_A_ECT________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_Cruise_A_ECT________\n");
}

MakeNameEx(0xD3BD0, "Timing_Compensation_Imm_Cruise_A_ECT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD3E7A, "Timing_Compensation_Imm_Cruise_B_ECT________", SN_CHECK);
referenceAddress = DfirstB(0xD3E7A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_Cruise_B_ECT________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_Cruise_B_ECT________\n");
}

MakeNameEx(0xD3BD0, "Timing_Compensation_Imm_Cruise_B_ECT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD3E4A, "Timing_Compensation_Imm_NonCruise_A_ECT________", SN_CHECK);
referenceAddress = DfirstB(0xD3E4A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_NonCruise_A_ECT________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_NonCruise_A_ECT________\n");
}

MakeNameEx(0xD3BD0, "Timing_Compensation_Imm_NonCruise_A_ECT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD3E5A, "Timing_Compensation_Imm_NonCruise_B_ECT________", SN_CHECK);
referenceAddress = DfirstB(0xD3E5A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_NonCruise_B_ECT________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_NonCruise_B_ECT________\n");
}

MakeNameEx(0xD3BD0, "Timing_Compensation_Imm_NonCruise_B_ECT_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD5F00, "Timing_Compensation_Per_Cylinder_A________", SN_CHECK);
referenceAddress = DfirstB(0xD5F00);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_A________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_A________\n");
}

MakeNameEx(0xD5EB8, "Timing_Compensation_Per_Cylinder_A_X_AXIS_______", SN_CHECK);
MakeNameEx(0xD5EF0, "Timing_Compensation_Per_Cylinder_A_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD5F80, "Timing_Compensation_Per_Cylinder_B________", SN_CHECK);
referenceAddress = DfirstB(0xD5F80);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_B________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_B________\n");
}

MakeNameEx(0xD5F38, "Timing_Compensation_Per_Cylinder_B_X_AXIS_______", SN_CHECK);
MakeNameEx(0xD5F70, "Timing_Compensation_Per_Cylinder_B_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD6000, "Timing_Compensation_Per_Cylinder_C________", SN_CHECK);
referenceAddress = DfirstB(0xD6000);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_C________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_C________\n");
}

MakeNameEx(0xD5FB8, "Timing_Compensation_Per_Cylinder_C_X_AXIS_______", SN_CHECK);
MakeNameEx(0xD5FF0, "Timing_Compensation_Per_Cylinder_C_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD6080, "Timing_Compensation_Per_Cylinder_D________", SN_CHECK);
referenceAddress = DfirstB(0xD6080);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_D________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_D________\n");
}

MakeNameEx(0xD6038, "Timing_Compensation_Per_Cylinder_D_X_AXIS_______", SN_CHECK);
MakeNameEx(0xD6070, "Timing_Compensation_Per_Cylinder_D_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD39D8, "Timing_Comp_Minimum_Load_Per_Cylinder________", SN_CHECK);
MakeNameEx(0xD39D4, "Timing_Comp_Maximum_RPM_Per_Cylinder________", SN_CHECK);
MakeNameEx(0xD39DC, "Timing_Comp_Minimum_Coolant_Temp_Per_Cylinder________", SN_CHECK);
MakeNameEx(0xD5E0C, "Timing_Compensation_Per_Gear_1st__", SN_CHECK);
referenceAddress = DfirstB(0xD5E0C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Gear_1st__", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Gear_1st__\n");
}

MakeNameEx(0xD5DF0, "Timing_Compensation_Per_Gear_1st_X_AXIS__", SN_CHECK);
MakeNameEx(0xD5E00, "Timing_Compensation_Per_Gear_1st_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD5E34, "Timing_Compensation_Per_Gear_2nd__", SN_CHECK);
referenceAddress = DfirstB(0xD5E34);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Gear_2nd__", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Gear_2nd__\n");
}

MakeNameEx(0xD5E18, "Timing_Compensation_Per_Gear_2nd_X_AXIS__", SN_CHECK);
MakeNameEx(0xD5E28, "Timing_Compensation_Per_Gear_2nd_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD5E5C, "Timing_Compensation_Per_Gear_3rd__", SN_CHECK);
referenceAddress = DfirstB(0xD5E5C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Gear_3rd__", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Gear_3rd__\n");
}

MakeNameEx(0xD5E40, "Timing_Compensation_Per_Gear_3rd_X_AXIS__", SN_CHECK);
MakeNameEx(0xD5E50, "Timing_Compensation_Per_Gear_3rd_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD5E84, "Timing_Compensation_Per_Gear_4th__", SN_CHECK);
referenceAddress = DfirstB(0xD5E84);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Gear_4th__", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Gear_4th__\n");
}

MakeNameEx(0xD5E68, "Timing_Compensation_Per_Gear_4th_X_AXIS__", SN_CHECK);
MakeNameEx(0xD5E78, "Timing_Compensation_Per_Gear_4th_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD5EAC, "Timing_Compensation_Per_Gear_5th__", SN_CHECK);
referenceAddress = DfirstB(0xD5EAC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Gear_5th__", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Gear_5th__\n");
}

MakeNameEx(0xD5E90, "Timing_Compensation_Per_Gear_5th_X_AXIS__", SN_CHECK);
MakeNameEx(0xD5EA0, "Timing_Compensation_Per_Gear_5th_Y_AXIS__", SN_CHECK);
MakeNameEx(0xD3974, "Timing_Compensation_Per_Gear_Activation_RPM__", SN_CHECK);
MakeNameEx(0xD397C, "Timing_Compensation_Per_Gear_Activation_Load__", SN_CHECK);
MakeNameEx(0xD39E8, "Feedback_Correction_Range_RPM________", SN_CHECK);
MakeNameEx(0xD39E0, "Feedback_Correction_Minimum_Load________", SN_CHECK);
MakeNameEx(0xD3A08, "Feedback_Correction_Retard_Value________", SN_CHECK);
MakeNameEx(0xD3A04, "Feedback_Correction_Retard_Limit________", SN_CHECK);
MakeNameEx(0xD3A0C, "Feedback_Correction_Negative_Advance_Value________", SN_CHECK);
MakeNameEx(0xD3672, "Feedback_Correction_Negative_Advance_Delay________", SN_CHECK);
MakeNameEx(0xD3A14, "Extended_Feedback_Correction_High_RPM_Compensation________", SN_CHECK);
MakeNameEx(0xD3BB0, "Fine_Correction_Range_RPM________", SN_CHECK);
MakeNameEx(0xD3BC0, "Fine_Correction_Range_Load________", SN_CHECK);
MakeNameEx(0xD3B50, "Fine_Correction_Rows_RPM________", SN_CHECK);
MakeNameEx(0xD3B6C, "Fine_Correction_Columns_Load________", SN_CHECK);
MakeNameEx(0xD3B94, "Fine_Correction_Retard_Value________", SN_CHECK);
MakeNameEx(0xD3B90, "Fine_Correction_Retard_Limit________", SN_CHECK);
MakeNameEx(0xD3B8C, "Fine_Correction_Advance_Value________", SN_CHECK);
MakeNameEx(0xD3B88, "Fine_Correction_Advance_Limit________", SN_CHECK);
MakeNameEx(0xD3682, "Fine_Correction_Advance_Delay________", SN_CHECK);
MakeNameEx(0xD3AF8, "Rough_Correction_Range_RPM________", SN_CHECK);
MakeNameEx(0xD3B08, "Rough_Correction_Range_Load________", SN_CHECK);
MakeNameEx(0xD3B18, "Rough_Correction_Minimum_KC_Advance_Map_Value________", SN_CHECK);
MakeNameEx(0xD47A0, "Rough_Correction_Learning_Delay_Increasing_________", SN_CHECK);
referenceAddress = DfirstB(0xD47A0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Rough_Correction_Learning_Delay_Increasing_________", SN_CHECK);
}
else
{
    Message("No reference to Rough_Correction_Learning_Delay_Increasing_________\n");
}

MakeNameEx(0xD4778, "Rough_Correction_Learning_Delay_Increasing_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD3B1C, "Advance_Multiplier_Initial________", SN_CHECK);
MakeNameEx(0xD3B20, "Advance_Multiplier_Step_Value________", SN_CHECK);
MakeNameEx(0xDBEC8, "Intake_Cam_Advance_Angle_Cruise_AVCS________", SN_CHECK);
referenceAddress = DfirstB(0xDBEC8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_Cruise_AVCS________", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_Cruise_AVCS________\n");
}

MakeNameEx(0xDBE34, "Intake_Cam_Advance_Angle_Cruise_AVCS_X_AXIS_______", SN_CHECK);
MakeNameEx(0xDBE80, "Intake_Cam_Advance_Angle_Cruise_AVCS_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xDC208, "Intake_Cam_Advance_Angle_NonCruise_AVCS________", SN_CHECK);
referenceAddress = DfirstB(0xDC208);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_NonCruise_AVCS________", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_NonCruise_AVCS________\n");
}

MakeNameEx(0xDC174, "Intake_Cam_Advance_Angle_NonCruise_AVCS_X_AXIS_______", SN_CHECK);
MakeNameEx(0xDC1C0, "Intake_Cam_Advance_Angle_NonCruise_AVCS_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xDC548, "Intake_Cam_Advance_Angle_ECT_Related__", SN_CHECK);
referenceAddress = DfirstB(0xDC548);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_ECT_Related__", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_ECT_Related__\n");
}

MakeNameEx(0xDC4B4, "Intake_Cam_Advance_Angle_ECT_Related_X_AXIS__", SN_CHECK);
MakeNameEx(0xDC500, "Intake_Cam_Advance_Angle_ECT_Related_Y_AXIS__", SN_CHECK);
MakeNameEx(0xDB43A, "Intake_Cam_Advance_Angle_ECT_Related_Multiplier__", SN_CHECK);
referenceAddress = DfirstB(0xDB43A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_ECT_Related_Multiplier__", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_ECT_Related_Multiplier__\n");
}

MakeNameEx(0xDB264, "Intake_Cam_Advance_Angle_ECT_Related_Multiplier_Y_AXIS__", SN_CHECK);
MakeNameEx(0xDCC38, "Exhaust_Cam_Retard_Angle_Cruise_AVCS__", SN_CHECK);
referenceAddress = DfirstB(0xDCC38);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Exhaust_Cam_Retard_Angle_Cruise_AVCS__", SN_CHECK);
}
else
{
    Message("No reference to Exhaust_Cam_Retard_Angle_Cruise_AVCS__\n");
}

MakeNameEx(0xDCBA4, "Exhaust_Cam_Retard_Angle_Cruise_AVCS_X_AXIS__", SN_CHECK);
MakeNameEx(0xDCBF0, "Exhaust_Cam_Retard_Angle_Cruise_AVCS_Y_AXIS__", SN_CHECK);
MakeNameEx(0xDCF78, "Exhaust_Cam_Retard_Angle_NonCruise_AVCS__", SN_CHECK);
referenceAddress = DfirstB(0xDCF78);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Exhaust_Cam_Retard_Angle_NonCruise_AVCS__", SN_CHECK);
}
else
{
    Message("No reference to Exhaust_Cam_Retard_Angle_NonCruise_AVCS__\n");
}

MakeNameEx(0xDCEE4, "Exhaust_Cam_Retard_Angle_NonCruise_AVCS_X_AXIS__", SN_CHECK);
MakeNameEx(0xDCF30, "Exhaust_Cam_Retard_Angle_NonCruise_AVCS_Y_AXIS__", SN_CHECK);
MakeNameEx(0xDD2B8, "Exhaust_Cam_Retard_Angle_ECT_Related__", SN_CHECK);
referenceAddress = DfirstB(0xDD2B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Exhaust_Cam_Retard_Angle_ECT_Related__", SN_CHECK);
}
else
{
    Message("No reference to Exhaust_Cam_Retard_Angle_ECT_Related__\n");
}

MakeNameEx(0xDD224, "Exhaust_Cam_Retard_Angle_ECT_Related_X_AXIS__", SN_CHECK);
MakeNameEx(0xDD270, "Exhaust_Cam_Retard_Angle_ECT_Related_Y_AXIS__", SN_CHECK);
MakeNameEx(0xDB53C, "Exhaust_Cam_Retard_Angle_ECT_Related_Multiplier__", SN_CHECK);
referenceAddress = DfirstB(0xDB53C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Exhaust_Cam_Retard_Angle_ECT_Related_Multiplier__", SN_CHECK);
}
else
{
    Message("No reference to Exhaust_Cam_Retard_Angle_ECT_Related_Multiplier__\n");
}

MakeNameEx(0xDB264, "Exhaust_Cam_Retard_Angle_ECT_Related_Multiplier_Y_AXIS__", SN_CHECK);
MakeNameEx(0xFA070, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport___", SN_CHECK);
referenceAddress = DfirstB(0xFA070);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport___", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport___\n");
}

MakeNameEx(0xF9FEC, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_X_AXIS__", SN_CHECK);
MakeNameEx(0xFA02C, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Y_AXIS__", SN_CHECK);
MakeNameEx(0xFA314, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp___", SN_CHECK);
referenceAddress = DfirstB(0xFA314);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp___", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp___\n");
}

MakeNameEx(0xFA290, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp_X_AXIS__", SN_CHECK);
MakeNameEx(0xFA2D0, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp_Y_AXIS__", SN_CHECK);
MakeNameEx(0xFA5B8, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent___", SN_CHECK);
referenceAddress = DfirstB(0xFA5B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent___", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent___\n");
}

MakeNameEx(0xFA534, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent_X_AXIS__", SN_CHECK);
MakeNameEx(0xFA574, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent_Y_AXIS__", SN_CHECK);
MakeNameEx(0xF900C, "Requested_Torque_Base_RPM________", SN_CHECK);
referenceAddress = DfirstB(0xF900C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Base_RPM________", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Base_RPM________\n");
}

MakeNameEx(0xF8FCC, "Requested_Torque_Base_RPM_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xF94D8, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio________", SN_CHECK);
referenceAddress = DfirstB(0xF94D8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio________", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio________\n");
}

MakeNameEx(0xF943C, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_X_AXIS_______", SN_CHECK);
MakeNameEx(0xF9498, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xF9854, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio________", SN_CHECK);
referenceAddress = DfirstB(0xF9854);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio________", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio________\n");
}

MakeNameEx(0xF97B8, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_X_AXIS_______", SN_CHECK);
MakeNameEx(0xF9814, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xF9BD0, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio________", SN_CHECK);
referenceAddress = DfirstB(0xF9BD0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio________", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio________\n");
}

MakeNameEx(0xF9B34, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_X_AXIS_______", SN_CHECK);
MakeNameEx(0xF9B90, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xF9F24, "Requested_Torque_Limit_A_Per_GearEngine_Speed________", SN_CHECK);
referenceAddress = DfirstB(0xF9F24);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Limit_A_Per_GearEngine_Speed________", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Limit_A_Per_GearEngine_Speed________\n");
}

MakeNameEx(0xF9EDC, "Requested_Torque_Limit_A_Per_GearEngine_Speed_X_AXIS_______", SN_CHECK);
MakeNameEx(0xF9F1C, "Requested_Torque_Limit_A_Per_GearEngine_Speed_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xF9FAC, "Requested_Torque_Limit_B_Per_GearEngine_Speed________", SN_CHECK);
referenceAddress = DfirstB(0xF9FAC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Limit_B_Per_GearEngine_Speed________", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Limit_B_Per_GearEngine_Speed________\n");
}

MakeNameEx(0xF9F64, "Requested_Torque_Limit_B_Per_GearEngine_Speed_X_AXIS_______", SN_CHECK);
MakeNameEx(0xF9FA4, "Requested_Torque_Limit_B_Per_GearEngine_Speed_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xCD16C, "Rev_Limit_Fuel_Cut_______", SN_CHECK);
MakeNameEx(0xCD174, "Rev_Limit_Fuel_Resume_Boost________", SN_CHECK);
MakeNameEx(0xCD178, "Speed_Limiting_Enable_Fuel_Cut________", SN_CHECK);
MakeNameEx(0xCD180, "Speed_Limiting_Disable_Fuel_Cut________", SN_CHECK);
MakeNameEx(0xF8E54, "Speed_Limiting_A_Throttle_SIDRIVE_SportSport_Sharp___", SN_CHECK);
MakeNameEx(0xF8E60, "Speed_Limiting_B_Throttle_SIDRIVE_SportSport_Sharp___", SN_CHECK);
MakeNameEx(0xF8E6C, "Speed_Limiting_Throttle_SIDRIVE_Intelligent___", SN_CHECK);
MakeNameEx(0xDA068, "Fuel_Temp_Sensor_Scaling________", SN_CHECK);
referenceAddress = DfirstB(0xDA068);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Fuel_Temp_Sensor_Scaling________", SN_CHECK);
}
else
{
    Message("No reference to Fuel_Temp_Sensor_Scaling________\n");
}

MakeNameEx(0xD9FF0, "Fuel_Temp_Sensor_Scaling_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD9F78, "Intake_Temp_Sensor_Scaling________", SN_CHECK);
referenceAddress = DfirstB(0xD9F78);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Intake_Temp_Sensor_Scaling________", SN_CHECK);
}
else
{
    Message("No reference to Intake_Temp_Sensor_Scaling________\n");
}

MakeNameEx(0xD9F00, "Intake_Temp_Sensor_Scaling_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD9E90, "Coolant_Temp_Sensor_Scaling________", SN_CHECK);
referenceAddress = DfirstB(0xD9E90);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Coolant_Temp_Sensor_Scaling________", SN_CHECK);
}
else
{
    Message("No reference to Coolant_Temp_Sensor_Scaling________\n");
}

MakeNameEx(0xD9E20, "Coolant_Temp_Sensor_Scaling_Y_AXIS_______", SN_CHECK);
MakeNameEx(0x4BCD8, "Fuel_Pump_Duty_______", SN_CHECK);
MakeNameEx(0xDA460, "Radiator_Fan_Modes_A_ECT________", SN_CHECK);
MakeNameEx(0xDA470, "Radiator_Fan_Modes_B_ECT________", SN_CHECK);
MakeNameEx(0xDA480, "Radiator_Fan_Modes_Veh_Speed________", SN_CHECK);
MakeNameEx(0xC308C, "Gear_Determination_Thresholds_A________", SN_CHECK);
MakeNameEx(0xC30A0, "Gear_Determination_Thresholds_B________", SN_CHECK);
MakeNameEx(0xC30B4, "Gear_Determination_Thresholds_C________", SN_CHECK);
MakeNameEx(0xD7CEE, "Idle_Speed_Target_A________", SN_CHECK);
referenceAddress = DfirstB(0xD7CEE);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_A________", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_A________\n");
}

MakeNameEx(0xD7448, "Idle_Speed_Target_A_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD7D2E, "Idle_Speed_Target_B________", SN_CHECK);
referenceAddress = DfirstB(0xD7D2E);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_B________", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_B________\n");
}

MakeNameEx(0xD7448, "Idle_Speed_Target_B_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD7D6E, "Idle_Speed_Target_C________", SN_CHECK);
referenceAddress = DfirstB(0xD7D6E);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_C________", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_C________\n");
}

MakeNameEx(0xD7448, "Idle_Speed_Target_C_Y_AXIS_______", SN_CHECK);
MakeNameEx(0xD7DAE, "Idle_Speed_Target_D___", SN_CHECK);
referenceAddress = DfirstB(0xD7DAE);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_D___", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_D___\n");
}

MakeNameEx(0xD7448, "Idle_Speed_Target_D_Y_AXIS__", SN_CHECK);
MakeNameEx(0xA9160, "Force_Pass_Readiness_Monitors_________", SN_CHECK);
MakeNameEx(0xDA314, "Ignition_Dwell________", SN_CHECK);
referenceAddress = DfirstB(0xDA314);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Ignition_Dwell________", SN_CHECK);
}
else
{
    Message("No reference to Ignition_Dwell________\n");
}

MakeNameEx(0xDA2C0, "Ignition_Dwell_X_AXIS_______", SN_CHECK);
MakeNameEx(0xDA300, "Ignition_Dwell_Y_AXIS_______", SN_CHECK);
MakeNameEx(0x9C5DA, "P0000_PASS_CODE_NO_DTC_DETECTED_________", SN_CHECK);
MakeNameEx(0x9C5BD, "P0011_CAMSHAFT_POS_TIMING_OVERADVANCED_1________", SN_CHECK);
MakeNameEx(0x9C654, "P0014_EXHAUST_AVCS_SYSTEM_1_RANGEPERF__", SN_CHECK);
MakeNameEx(0x9C64B, "P0016_CRANKSHAFTCAMSHAFT_CORRELATION_1A________", SN_CHECK);
MakeNameEx(0x9C65A, "P0017_CRANKCAM_TIMING_B_FAILURE_1__", SN_CHECK);
MakeNameEx(0x9C64A, "P0018_CRANKSHAFTCAMSHAFT_CORRELATION_2A________", SN_CHECK);
MakeNameEx(0x9C659, "P0019_CRANKCAM_TIMING_B_FAILURE_2__", SN_CHECK);
MakeNameEx(0x9C5BE, "P0021_CAMSHAFT_POS_TIMING_OVERADVANCED_2________", SN_CHECK);
MakeNameEx(0x9C653, "P0024_EXHAUST_AVCS_SYSTEM_2_RANGEPERF__", SN_CHECK);
MakeNameEx(0x9C5FE, "P0030_FRONT_O2_SENSOR_RANGEPERF________", SN_CHECK);
MakeNameEx(0x9C5E9, "P0031_FRONT_O2_SENSOR_LOW_INPUT________", SN_CHECK);
MakeNameEx(0x9C5E7, "P0032_FRONT_O2_SENSOR_HIGH_INPUT________", SN_CHECK);
MakeNameEx(0x9C5E8, "P0037_REAR_O2_SENSOR_LOW_INPUT________", SN_CHECK);
MakeNameEx(0x9C5E6, "P0038_REAR_O2_SENSOR_HIGH_INPUT________", SN_CHECK);
MakeNameEx(0x9C5F9, "P0068_MAP_SENSOR_RANGEPERF________", SN_CHECK);
MakeNameEx(0x9C5FA, "P0101_MAF_SENSOR_RANGEPERF________", SN_CHECK);
MakeNameEx(0x9C599, "P0102_MAF_SENSOR_LOW_INPUT________", SN_CHECK);
MakeNameEx(0x9C59A, "P0103_MAF_SENSOR_HIGH_INPUT________", SN_CHECK);
MakeNameEx(0x9C5EA, "P0107_MAP_SENSOR_LOW_INPUT________", SN_CHECK);
MakeNameEx(0x9C5EB, "P0108_MAP_SENSOR_HIGH_INPUT________", SN_CHECK);
MakeNameEx(0x9C5E5, "P0111_IAT_SENSOR_RANGEPERF________", SN_CHECK);
MakeNameEx(0x9C5E3, "P0112_IAT_SENSOR_LOW_INPUT________", SN_CHECK);
MakeNameEx(0x9C5E4, "P0113_IAT_SENSOR_HIGH_INPUT________", SN_CHECK);
MakeNameEx(0x9C5A2, "P0117_COOLANT_TEMP_SENSOR_LOW_INPUT________", SN_CHECK);
MakeNameEx(0x9C5A3, "P0118_COOLANT_TEMP_SENSOR_HIGH_INPUT________", SN_CHECK);
MakeNameEx(0x9C5A0, "P0122_TPS_A_LOW_INPUT________", SN_CHECK);
MakeNameEx(0x9C5A1, "P0123_TPS_A_HIGH_INPUT________", SN_CHECK);
MakeNameEx(0x9C5A5, "P0125_INSUFFICIENT_COOLANT_TEMP_FUELING________", SN_CHECK);
MakeNameEx(0x9C633, "P0126_INSUFFICIENT_COOLANT_TEMP_OPERATION________", SN_CHECK);
MakeNameEx(0x9C5F0, "P0128_THERMOSTAT_MALFUNCTION________", SN_CHECK);
MakeNameEx(0x9C5DD, "P0131_FRONT_O2_SENSOR_LOW_INPUT________", SN_CHECK);
MakeNameEx(0x9C5DF, "P0132_FRONT_O2_SENSOR_HIGH_INPUT________", SN_CHECK);
MakeNameEx(0x9C5FC, "P0134_FRONT_O2_SENSOR_NO_ACTIVITY________", SN_CHECK);
MakeNameEx(0x9C5DC, "P0137_REAR_O2_SENSOR_LOW_VOLTAGE________", SN_CHECK);
MakeNameEx(0x9C5E1, "P0138_REAR_O2_SENSOR_HIGH_VOLTAGE________", SN_CHECK);
MakeNameEx(0x9C646, "P0140_REAR_O2_SENSOR_NO_ACTIVITY________", SN_CHECK);
MakeNameEx(0x9C5C6, "P0141_REAR_O2_SENSOR_MALFUNCTION___", SN_CHECK);
MakeNameEx(0x9C676, "P014C_O2_SENSOR_SLOW_RESPONSE_RICH_TO_LEAN_B1_S1__", SN_CHECK);
MakeNameEx(0x9C675, "P014D_O2_SENSOR_SLOW_RESPONSE_LEAN_TO_RICH_B1_S1__", SN_CHECK);
MakeNameEx(0x9C672, "P015A_O2_SENSOR_DELAYED_RESPONSE_RICH_TO_LEAN_B1_S1__", SN_CHECK);
MakeNameEx(0x9C5D1, "P0171_SYSTEM_TOO_LEAN________", SN_CHECK);
MakeNameEx(0x9C5D2, "P0172_SYSTEM_TOO_RICH________", SN_CHECK);
MakeNameEx(0x9C605, "P0222_TPS_B_LOW_INPUT________", SN_CHECK);
MakeNameEx(0x9C606, "P0223_TPS_B_HIGH_INPUT________", SN_CHECK);
MakeNameEx(0x9C5F8, "P0230_FUEL_PUMP_PRIMARY_CIRCUIT________", SN_CHECK);
MakeNameEx(0x9C5F7, "P0244_WASTEGATE_SOLENOID_A_RANGEPERF________", SN_CHECK);
MakeNameEx(0x9C5F5, "P0245_WASTEGATE_SOLENOID_A_LOW________", SN_CHECK);
MakeNameEx(0x9C5F6, "P0246_WASTEGATE_SOLENOID_A_HIGH________", SN_CHECK);
MakeNameEx(0x9C5D3, "P0301_MISFIRE_CYLINDER_1________", SN_CHECK);
MakeNameEx(0x9C5D4, "P0302_MISFIRE_CYLINDER_2________", SN_CHECK);
MakeNameEx(0x9C5D5, "P0303_MISFIRE_CYLINDER_3________", SN_CHECK);
MakeNameEx(0x9C5D6, "P0304_MISFIRE_CYLINDER_4________", SN_CHECK);
MakeNameEx(0x9C59E, "P0327_KNOCK_SENSOR_1_LOW_INPUT________", SN_CHECK);
MakeNameEx(0x9C59F, "P0328_KNOCK_SENSOR_1_HIGH_INPUT________", SN_CHECK);
MakeNameEx(0x9C594, "P0335_CRANKSHAFT_POS_SENSOR_A_MALFUNCTION________", SN_CHECK);
MakeNameEx(0x9C595, "P0336_CRANKSHAFT_POS_SENSOR_A_RANGEPERF________", SN_CHECK);
MakeNameEx(0x9C618, "P0340_CAMSHAFT_POS_SENSOR_A_MALFUNCTION________", SN_CHECK);
MakeNameEx(0x9C617, "P0345_CAMSHAFT_POS_SENSOR_A_BANK_2________", SN_CHECK);
MakeNameEx(0x9C616, "P0365_CAMSHAFT_POS_SENSOR_B_BANK_1__", SN_CHECK);
MakeNameEx(0x9C615, "P0390_CAMSHAFT_POS_SENSOR_B_BANK_2__", SN_CHECK);
MakeNameEx(0x9C640, "P0410_SECONDARY_AIR_PUMP_SYSTEM________", SN_CHECK);
MakeNameEx(0x9C63F, "P0411_SECONDARY_AIR_PUMP_INCORRECT_FLOW________", SN_CHECK);
MakeNameEx(0x9C644, "P0413_SECONDARY_AIR_PUMP_A_OPEN________", SN_CHECK);
MakeNameEx(0x9C648, "P0414_SECONDARY_AIR_PUMP_A_SHORTED________", SN_CHECK);
MakeNameEx(0x9C652, "P0416_SECONDARY_AIR_PUMP_B_OPEN________", SN_CHECK);
MakeNameEx(0x9C651, "P0417_SECONDARY_AIR_PUMP_B_SHORTED________", SN_CHECK);
MakeNameEx(0x9C645, "P0418_SECONDARY_AIR_PUMP_RELAY_A________", SN_CHECK);
MakeNameEx(0x9C5CD, "P0420_CAT_EFFICIENCY_BELOW_THRESHOLD________", SN_CHECK);
MakeNameEx(0x9C67C, "P0441_EVAP_INCORRECT_PURGE_FLOW________", SN_CHECK);
MakeNameEx(0x9C67B, "P0451_EVAP_PRESSURE_SENSOR_RANGEPERF________", SN_CHECK);
MakeNameEx(0x9C66E, "P0452_EVAP_PRESSURE_SENSOR_LOW_INPUT________", SN_CHECK);
MakeNameEx(0x9C66D, "P0453_EVAP_PRESSURE_SENSOR_HIGH_INPUT________", SN_CHECK);
MakeNameEx(0x9C67A, "P0455_EVAP_EMISSION_CONTROL_SYSTEM_LEAK_DETECTED_GROSS_LEAK___", SN_CHECK);
MakeNameEx(0x9C5CF, "P0456_EVAP_LEAK_DETECTED_VERY_SMALL________", SN_CHECK);
MakeNameEx(0x9C5C1, "P0458_EVAP_PURGE_VALVE_CIRCUIT_LOW________", SN_CHECK);
MakeNameEx(0x9C5C2, "P0459_EVAP_PURGE_VALVE_CIRCUIT_HIGH________", SN_CHECK);
MakeNameEx(0x9C5A8, "P0461_FUEL_LEVEL_SENSOR_RANGEPERF________", SN_CHECK);
MakeNameEx(0x9C5A6, "P0462_FUEL_LEVEL_SENSOR_LOW_INPUT________", SN_CHECK);
MakeNameEx(0x9C5A7, "P0463_FUEL_LEVEL_SENSOR_HIGH_INPUT________", SN_CHECK);
MakeNameEx(0x9C59B, "P0500_VEHICLE_SPEED_SENSOR_A________", SN_CHECK);
MakeNameEx(0x9C5BB, "P0506_IDLE_CONTROL_RPM_LOWER_THAN_EXPECTED________", SN_CHECK);
MakeNameEx(0x9C5BC, "P0507_IDLE_CONTROL_RPM_HIGH_THAN_EXPECTED________", SN_CHECK);
MakeNameEx(0x9C668, "P050A_COLD_START_IDLE_AIR_CONTROL_SYSTEM_PERFORMANCE___", SN_CHECK);
MakeNameEx(0x9C667, "P050B_COLD_START_IGNITION_TIMING_PERFORMANCE___", SN_CHECK);
MakeNameEx(0x9C5AA, "P0512_STARTER_REQUEST_CIRCUIT________", SN_CHECK);
MakeNameEx(0x9C598, "P0604_CONTROL_MODULE_RAM_ERROR________", SN_CHECK);
MakeNameEx(0x9C619, "P0605_CONTROL_MODULE_ROM_ERROR________", SN_CHECK);
MakeNameEx(0x9C60D, "P0607_CONTROL_MODULE_PERFORMANCE________", SN_CHECK);
MakeNameEx(0x9C60C, "P0638_THROTTLE_ACTUATOR_RANGEPERF________", SN_CHECK);
MakeNameEx(0x9C5AE, "P0851_NEUTRAL_SWITCH_INPUT_LOW________", SN_CHECK);
MakeNameEx(0x9C5B2, "P0852_NEUTRAL_SWITCH_INPUT_HIGH________", SN_CHECK);
MakeNameEx(0x9C5C9, "P1152_FRONT_O2_SENSOR_RANGEPERF_LOW_B1_S1________", SN_CHECK);
MakeNameEx(0x9C5CA, "P1153_FRONT_O2_SENSOR_RANGEPERF_HIGH_B1_S1________", SN_CHECK);
MakeNameEx(0x9C607, "P1160_ABNORMAL_RETURN_SPRING________", SN_CHECK);
MakeNameEx(0x9C5BF, "P1400_FUEL_TANK_PRESSURE_SOL_LOW________", SN_CHECK);
MakeNameEx(0x9C64C, "P1410_SECONDARY_AIR_PUMP_VALVE_STUCK_OPEN________", SN_CHECK);
MakeNameEx(0x9C649, "P1418_SECONDARY_AIR_PUMP_CIRCUIT_SHORTED________", SN_CHECK);
MakeNameEx(0x9C5C0, "P1420_FUEL_TANK_PRESSURE_SOL_HIGH_INPUT________", SN_CHECK);
MakeNameEx(0x9C679, "P1449_EVAPORATIVE_EMISSION_CONT_SYS_AIR_FILTER_CLOG___", SN_CHECK);
MakeNameEx(0x9C678, "P1451_EVAPORATIVE_EMISSION_CONT_SYS___", SN_CHECK);
MakeNameEx(0x9C677, "P1458_CANISTER_PURGE_CONTROL_SOLENOID_VALVE_2_LOW___", SN_CHECK);
MakeNameEx(0x9C681, "P1459_CANISTER_PURGE_CONTROL_SOLENOID_VALVE_2_HIGH___", SN_CHECK);
MakeNameEx(0x9C5F1, "P1491_PCV_BLOWBY_FUNCTION_PROBLEM________", SN_CHECK);
MakeNameEx(0x9C5A9, "P1518_STARTER_SWITCH_LOW_INPUT___", SN_CHECK);
MakeNameEx(0x9C657, "P1519_IMRC_STUCK_CLOSED________", SN_CHECK);
MakeNameEx(0x9C656, "P1520_IMRC_CIRCUIT_MALFUNCTION________", SN_CHECK);
MakeNameEx(0x9C5F2, "P1560_BACKUP_VOLTAGE_MALFUNCTION________", SN_CHECK);
MakeNameEx(0x9C655, "P1616_SBDS_INTERACTIVE_CODES________", SN_CHECK);
MakeNameEx(0x9C62E, "P2004_TGV_INTAKE_MANIFOLD_RUNNER_1_STUCK_OPEN________", SN_CHECK);
MakeNameEx(0x9C630, "P2005_TGV_INTAKE_MANIFOLD_RUNNER_2_STUCK_OPEN________", SN_CHECK);
MakeNameEx(0x9C62F, "P2006_TGV_INTAKE_MANIFOLD_RUNNER_1_STUCK_CLOSED________", SN_CHECK);
MakeNameEx(0x9C631, "P2007_TGV_INTAKE_MANIFOLD_RUNNER_2_STUCK_CLOSED________", SN_CHECK);
MakeNameEx(0x9C63C, "P2008_TGV_INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_OPEN________", SN_CHECK);
MakeNameEx(0x9C63A, "P2009_TGV_INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_LOW________", SN_CHECK);
MakeNameEx(0x9C63D, "P2011_TGV_INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_OPEN________", SN_CHECK);
MakeNameEx(0x9C63B, "P2012_TGV_INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_LOW________", SN_CHECK);
MakeNameEx(0x9C636, "P2016_TGV_INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_LOW________", SN_CHECK);
MakeNameEx(0x9C637, "P2017_TGV_INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_HIGH________", SN_CHECK);
MakeNameEx(0x9C638, "P2021_TGV_INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_LOW________", SN_CHECK);
MakeNameEx(0x9C639, "P2022_TGV_INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_HIGH________", SN_CHECK);
MakeNameEx(0x9C621, "P2088_OCV_SOLENOID_A1_CIRCUIT_OPEN________", SN_CHECK);
MakeNameEx(0x9C620, "P2089_OCV_SOLENOID_A1_CIRCUIT_SHORT________", SN_CHECK);
MakeNameEx(0x9C61D, "P2090_OCV_SOLENOID_B1_CIRCUIT_OPEN__", SN_CHECK);
MakeNameEx(0x9C61C, "P2091_OCV_SOLENOID_B1_CIRCUIT_SHORT__", SN_CHECK);
MakeNameEx(0x9C61F, "P2092_OCV_SOLENOID_A2_CIRCUIT_OPEN________", SN_CHECK);
MakeNameEx(0x9C61E, "P2093_OCV_SOLENOID_A2_CIRCUIT_SHORT________", SN_CHECK);
MakeNameEx(0x9C61B, "P2094_OCV_SOLENOID_B2_CIRCUIT_OPEN__", SN_CHECK);
MakeNameEx(0x9C61A, "P2095_OCV_SOLENOID_B2_CIRCUIT_SHORT__", SN_CHECK);
MakeNameEx(0x9C60B, "P2096_POST_CATALYST_TOO_LEAN_B1________", SN_CHECK);
MakeNameEx(0x9C614, "P2097_POST_CATALYST_TOO_RICH_B1________", SN_CHECK);
MakeNameEx(0x9C60A, "P2101_THROTTLE_ACTUATOR_CIRCUIT_RANGEPERF________", SN_CHECK);
MakeNameEx(0x9C608, "P2102_THROTTLE_ACTUATOR_CIRCUIT_LOW________", SN_CHECK);
MakeNameEx(0x9C609, "P2103_THROTTLE_ACTUATOR_CIRCUIT_HIGH________", SN_CHECK);
MakeNameEx(0x9C604, "P2109_TPS_A_MINIMUM_STOP_PERF________", SN_CHECK);
MakeNameEx(0x9C611, "P2122_TPS_D_CIRCUIT_LOW_INPUT________", SN_CHECK);
MakeNameEx(0x9C612, "P2123_TPS_D_CIRCUIT_HIGH_INPUT________", SN_CHECK);
MakeNameEx(0x9C60F, "P2127_TPS_E_CIRCUIT_LOW_INPUT________", SN_CHECK);
MakeNameEx(0x9C610, "P2128_TPS_E_CIRCUIT_HIGH_INPUT________", SN_CHECK);
MakeNameEx(0x9C613, "P2135_TPS_AB_VOLTAGE________", SN_CHECK);
MakeNameEx(0x9C60E, "P2138_TPS_DE_VOLTAGE________", SN_CHECK);
MakeNameEx(0x9C67E, "P219A_BANK_1_AFR_IMBALANCE___", SN_CHECK);
MakeNameEx(0x9C66C, "P2401_EVAP_LEAK_DETECTION_PUMP_CONTROL_CIRCUIT_LOW___", SN_CHECK);
MakeNameEx(0x9C680, "P2402_EVAP_LEAK_DETECTION_PUMP_CONTROL_CIRCUIT_HIGH___", SN_CHECK);
MakeNameEx(0x9C66B, "P2419_EVAP_SWITCHING_VALVE_LOW________", SN_CHECK);
MakeNameEx(0x9C66A, "P2420_EVAP_SWITCHING_VALVE_HIGH________", SN_CHECK);
MakeNameEx(0x9C641, "P2431_SECONDARY_AIR_PUMP_CIRCUIT_RANGEPERF________", SN_CHECK);
MakeNameEx(0x9C643, "P2432_SECONDARY_AIR_PUMP_CIRCUIT_LOW________", SN_CHECK);
MakeNameEx(0x9C642, "P2433_SECONDARY_AIR_PUMP_CIRCUIT_HIGH________", SN_CHECK);
MakeNameEx(0x9C650, "P2440_SECONDARY_AIR_PUMP_VALVE_1_STUCK_OPEN________", SN_CHECK);
MakeNameEx(0x9C64F, "P2441_SECONDARY_AIR_PUMP_VALVE_1_STUCK_CLOSED________", SN_CHECK);
MakeNameEx(0x9C64E, "P2442_SECONDARY_AIR_PUMP_VALVE_2_STUCK_OPEN________", SN_CHECK);
MakeNameEx(0x9C64D, "P2443_SECONDARY_AIR_PUMP_2_STUCK_CLOSED________", SN_CHECK);
MakeNameEx(0x9C63E, "P2444_SECONDARY_AIR_PUMP_1_STUCK_ON_B1________", SN_CHECK);
MakeNameEx(0x9C665, "U0073_CAN_COMMUNICATION_BUS_A_OFF___", SN_CHECK);
MakeNameEx(0x9C662, "U0101_CAN_LOST_COMMUNICATION_WITH_TCM___", SN_CHECK);
MakeNameEx(0x9C664, "U0122_CAN_LOST_COMMUNICATION_WITH_VDC___", SN_CHECK);
MakeNameEx(0x9C660, "U0140_CAN_LOST_COMMUNICATION_WITH_BIU___", SN_CHECK);
MakeNameEx(0x9C661, "U0402_CAN_INVALID_DATA_RECEIVED_FROM_TCM___", SN_CHECK);
MakeNameEx(0x9C663, "U0416_CAN_INVALID_DATA_RECEIVED_FROM_VDC___", SN_CHECK);
MakeNameEx(0x9C65F, "U0422_CAN_INVALID_DATA_RECEIVED_FROM_BIU___", SN_CHECK);
MakeNameEx(0xC1038, "Target_Boost__________", SN_CHECK);
referenceAddress = DfirstB(0xC1038);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Boost__________", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost__________\n");
}

MakeNameEx(0xC0FC8, "Target_Boost_X_AXIS________", SN_CHECK);
MakeNameEx(0xC1000, "Target_Boost_Y_AXIS________", SN_CHECK);
MakeNameEx(0xC0B4C, "Target_Boost_Compensation_ECT_________", SN_CHECK);
referenceAddress = DfirstB(0xC0B4C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_ECT_________", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_ECT_________\n");
}

MakeNameEx(0xC0A6C, "Target_Boost_Compensation_ECT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xC0A64, "Target_Boost_Compensation_1st_Gear_________", SN_CHECK);
MakeNameEx(0xC0A60, "Target_Boost_Compensation_1st_Gear_Speed_Disable_________", SN_CHECK);
MakeNameEx(0xC0CA8, "Target_Boost_Compensation_IAT__________", SN_CHECK);
referenceAddress = DfirstB(0xC0CA8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_IAT__________", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_IAT__________\n");
}

MakeNameEx(0xC0C7C, "Target_Boost_Compensation_IAT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xC0D44, "Target_Boost_Compensation_Atm_Pressure__________", SN_CHECK);
referenceAddress = DfirstB(0xC0D44);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_Atm_Pressure__________", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_Atm_Pressure__________\n");
}

MakeNameEx(0xC0D14, "Target_Boost_Compensation_Atm_Pressure_X_AXIS________", SN_CHECK);
MakeNameEx(0xC0D2C, "Target_Boost_Compensation_Atm_Pressure_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD31FC, "Boost_Limit_Fuel_Cut__________", SN_CHECK);
referenceAddress = DfirstB(0xD31FC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Boost_Limit_Fuel_Cut__________", SN_CHECK);
}
else
{
    Message("No reference to Boost_Limit_Fuel_Cut__________\n");
}

MakeNameEx(0xD31CC, "Boost_Limit_Fuel_Cut_X_AXIS________", SN_CHECK);
MakeNameEx(0xD31E4, "Boost_Limit_Fuel_Cut_Y_AXIS________", SN_CHECK);
MakeNameEx(0xC0A54, "Boost_Control_Disable_IAM_________", SN_CHECK);
MakeNameEx(0xC0A50, "Boost_Control_Disable_Fine_Correction_________", SN_CHECK);
MakeNameEx(0xC0A05, "Boost_Control_Disable_Delay_Fine_Correction_________", SN_CHECK);
MakeNameEx(0xC0EEC, "Initial_Wastegate_Duty__________", SN_CHECK);
referenceAddress = DfirstB(0xC0EEC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Initial_Wastegate_Duty__________", SN_CHECK);
}
else
{
    Message("No reference to Initial_Wastegate_Duty__________\n");
}

MakeNameEx(0xC0E98, "Initial_Wastegate_Duty_X_AXIS________", SN_CHECK);
MakeNameEx(0xC0EC4, "Initial_Wastegate_Duty_Y_AXIS________", SN_CHECK);
MakeNameEx(0xC0DBC, "Max_Wastegate_Duty__________", SN_CHECK);
referenceAddress = DfirstB(0xC0DBC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Max_Wastegate_Duty__________", SN_CHECK);
}
else
{
    Message("No reference to Max_Wastegate_Duty__________\n");
}

MakeNameEx(0xC0D68, "Max_Wastegate_Duty_X_AXIS________", SN_CHECK);
MakeNameEx(0xC0D94, "Max_Wastegate_Duty_Y_AXIS________", SN_CHECK);
MakeNameEx(0x13F3C, "Max_Wastegate_Duty_Limit_PostCompensation_________", SN_CHECK);
MakeNameEx(0xC0AEC, "InitialMax_Wastegate_Duty_Compensation_IAT_________", SN_CHECK);
referenceAddress = DfirstB(0xC0AEC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_IAT_________", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_IAT_________\n");
}

MakeNameEx(0xC0AAC, "InitialMax_Wastegate_Duty_Compensation_IAT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xC0B0C, "InitialMax_Wastegate_Duty_Compensation_ECT_________", SN_CHECK);
referenceAddress = DfirstB(0xC0B0C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_ECT_________", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_ECT_________\n");
}

MakeNameEx(0xC0A6C, "InitialMax_Wastegate_Duty_Compensation_ECT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xC0CFC, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_________", SN_CHECK);
referenceAddress = DfirstB(0xC0CFC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_________", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_________\n");
}

MakeNameEx(0xC0CD4, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_X_AXIS________", SN_CHECK);
MakeNameEx(0xC0CEC, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_Y_AXIS________", SN_CHECK);
MakeNameEx(0xC0B80, "Turbo_Dynamics_Proportional_________", SN_CHECK);
referenceAddress = DfirstB(0xC0B80);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Proportional_________", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Proportional_________\n");
}

MakeNameEx(0xC0B5C, "Turbo_Dynamics_Proportional_Y_AXIS________", SN_CHECK);
MakeNameEx(0xC0BF0, "Turbo_Dynamics_Integral_Positive_________", SN_CHECK);
referenceAddress = DfirstB(0xC0BF0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Integral_Positive_________", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Integral_Positive_________\n");
}

MakeNameEx(0xC0BCC, "Turbo_Dynamics_Integral_Positive_Y_AXIS________", SN_CHECK);
MakeNameEx(0xC0BB8, "Turbo_Dynamics_Integral_Negative_________", SN_CHECK);
referenceAddress = DfirstB(0xC0BB8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Integral_Negative_________", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Integral_Negative_________\n");
}

MakeNameEx(0xC0B94, "Turbo_Dynamics_Integral_Negative_Y_AXIS________", SN_CHECK);
MakeNameEx(0xC0B1C, "TD_Proportional_Compensation_IAT_________", SN_CHECK);
referenceAddress = DfirstB(0xC0B1C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Proportional_Compensation_IAT_________", SN_CHECK);
}
else
{
    Message("No reference to TD_Proportional_Compensation_IAT_________\n");
}

MakeNameEx(0xC0AAC, "TD_Proportional_Compensation_IAT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xC0B3C, "TD_Integral_Positive_Compensation_IAT_________", SN_CHECK);
referenceAddress = DfirstB(0xC0B3C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Integral_Positive_Compensation_IAT_________", SN_CHECK);
}
else
{
    Message("No reference to TD_Integral_Positive_Compensation_IAT_________\n");
}

MakeNameEx(0xC0AAC, "TD_Integral_Positive_Compensation_IAT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xC0B2C, "TD_Integral_Negative_Compensation_IAT_________", SN_CHECK);
referenceAddress = DfirstB(0xC0B2C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Integral_Negative_Compensation_IAT_________", SN_CHECK);
}
else
{
    Message("No reference to TD_Integral_Negative_Compensation_IAT_________\n");
}

MakeNameEx(0xC0AAC, "TD_Integral_Negative_Compensation_IAT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xC0A40, "TD_Activation_Thresholds_RPM_________", SN_CHECK);
MakeNameEx(0xC0A2C, "TD_Activation_Thresholds_Target_Boost__________", SN_CHECK);
MakeNameEx(0xC0A48, "TD_Integral_Cumulative_Range_WGDC_Correction_________", SN_CHECK);
MakeNameEx(0xC0A34, "TD_Integral_Negative_Activation_Boost_Error_________", SN_CHECK);
MakeNameEx(0xC0A38, "TD_Integral_Positive_Activation_Boost_Error_________", SN_CHECK);
MakeNameEx(0xC0A3C, "TD_Integral_Negative_Activation_Wastegate_Duty_________", SN_CHECK);
MakeNameEx(0xD9B50, "Manifold_Pressure_Sensor_Scaling__________", SN_CHECK);
MakeNameEx(0xD9AB2, "Manifold_Pressure_Sensor_Limits_CEL_________", SN_CHECK);
MakeNameEx(0xD9A66, "Manifold_Pressure_Sensor_CEL_Delays_________", SN_CHECK);
MakeNameEx(0xD0E78, "Primary_Open_Loop_Fueling_KCA_Additive_B_Low___", SN_CHECK);
referenceAddress = DfirstB(0xD0E78);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_KCA_Additive_B_Low___", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_KCA_Additive_B_Low___\n");
}

MakeNameEx(0xD0DE4, "Primary_Open_Loop_Fueling_KCA_Additive_B_Low_X_AXIS___", SN_CHECK);
MakeNameEx(0xD0E30, "Primary_Open_Loop_Fueling_KCA_Additive_B_Low_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD0A8C, "Primary_Open_Loop_Fueling_KCA_Additive_B_High___", SN_CHECK);
referenceAddress = DfirstB(0xD0A8C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_KCA_Additive_B_High___", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_KCA_Additive_B_High___\n");
}

MakeNameEx(0xD09F8, "Primary_Open_Loop_Fueling_KCA_Additive_B_High_X_AXIS___", SN_CHECK);
MakeNameEx(0xD0A44, "Primary_Open_Loop_Fueling_KCA_Additive_B_High_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD0C78, "Primary_Open_Loop_Fueling_Failsafe_________", SN_CHECK);
referenceAddress = DfirstB(0xD0C78);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Failsafe_________", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Failsafe_________\n");
}

MakeNameEx(0xD0BE4, "Primary_Open_Loop_Fueling_Failsafe_X_AXIS________", SN_CHECK);
MakeNameEx(0xD0C30, "Primary_Open_Loop_Fueling_Failsafe_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD1064, "Primary_Open_Loop_Fueling_KCA_Alternate_Mode___", SN_CHECK);
referenceAddress = DfirstB(0xD1064);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_KCA_Alternate_Mode___", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_KCA_Alternate_Mode___\n");
}

MakeNameEx(0xD0FD0, "Primary_Open_Loop_Fueling_KCA_Alternate_Mode_X_AXIS___", SN_CHECK);
MakeNameEx(0xD101C, "Primary_Open_Loop_Fueling_KCA_Alternate_Mode_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD1250, "Primary_Open_Loop_Fueling_Failsafe_KCA_Alternate_Mode___", SN_CHECK);
referenceAddress = DfirstB(0xD1250);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Failsafe_KCA_Alternate_Mode___", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Failsafe_KCA_Alternate_Mode___\n");
}

MakeNameEx(0xD11BC, "Primary_Open_Loop_Fueling_Failsafe_KCA_Alternate_Mode_X_AXIS___", SN_CHECK);
MakeNameEx(0xD1208, "Primary_Open_Loop_Fueling_Failsafe_KCA_Alternate_Mode_Y_AXIS___", SN_CHECK);
MakeNameEx(0xCCDC8, "Primary_Open_Loop_Fuel_Map_Switch_IAM_________", SN_CHECK);
MakeNameEx(0xCCDCC, "Minimum_Active_Primary_Open_Loop_Enrichment_________", SN_CHECK);
MakeNameEx(0xCD9BC, "Minimum_Primary_Open_Loop_Enrichment_Throttle_________", SN_CHECK);
referenceAddress = DfirstB(0xCD9BC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Throttle_________", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Throttle_________\n");
}

MakeNameEx(0xCD9A4, "Minimum_Primary_Open_Loop_Enrichment_Throttle_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCD9E0, "Minimum_Primary_Open_Loop_Enrichment_Accelerator_________", SN_CHECK);
referenceAddress = DfirstB(0xCD9E0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Accelerator_________", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Accelerator_________\n");
}

MakeNameEx(0xCD9C4, "Minimum_Primary_Open_Loop_Enrichment_Accelerator_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCF2F4, "Primary_Open_Loop_Fueling_Compensation_ECT_________", SN_CHECK);
referenceAddress = DfirstB(0xCF2F4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_ECT_________", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_ECT_________\n");
}

MakeNameEx(0xCD280, "Primary_Open_Loop_Fueling_Compensation_ECT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCD94C, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation__________", SN_CHECK);
referenceAddress = DfirstB(0xCD94C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_Timing_Compensation__________", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_Timing_Compensation__________\n");
}

MakeNameEx(0xCD934, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD9DEC, "Front_Oxygen_Sensor_Scaling_________", SN_CHECK);
referenceAddress = DfirstB(0xD9DEC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Scaling_________", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Scaling_________\n");
}

MakeNameEx(0xD9DB8, "Front_Oxygen_Sensor_Scaling_Y_AXIS________", SN_CHECK);
MakeNameEx(0x2208C, "Front_Oxygen_Sensor_Rich_Limit_________", SN_CHECK);
MakeNameEx(0xC3300, "Front_Oxygen_Sensor_Compensation_Atm_Pressure_________", SN_CHECK);
referenceAddress = DfirstB(0xC3300);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Compensation_Atm_Pressure_________", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Compensation_Atm_Pressure_________\n");
}

MakeNameEx(0xC32F0, "Front_Oxygen_Sensor_Compensation_Atm_Pressure_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD21D4, "CL_Fueling_Target_Compensation_A_Load_________", SN_CHECK);
referenceAddress = DfirstB(0xD21D4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_A_Load_________", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_A_Load_________\n");
}

MakeNameEx(0xD2178, "CL_Fueling_Target_Compensation_A_Load_X_AXIS________", SN_CHECK);
MakeNameEx(0xD21A8, "CL_Fueling_Target_Compensation_A_Load_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD24AC, "CL_Fueling_Target_Compensation_B_Load_________", SN_CHECK);
referenceAddress = DfirstB(0xD24AC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_B_Load_________", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_B_Load_________\n");
}

MakeNameEx(0xD2440, "CL_Fueling_Target_Compensation_B_Load_X_AXIS________", SN_CHECK);
MakeNameEx(0xD2478, "CL_Fueling_Target_Compensation_B_Load_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD20AC, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_________", SN_CHECK);
referenceAddress = DfirstB(0xD20AC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Imm_Cruise_ECT_________", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Imm_Cruise_ECT_________\n");
}

MakeNameEx(0xCD280, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_X_AXIS________", SN_CHECK);
MakeNameEx(0xD20A0, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD2118, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_________", SN_CHECK);
referenceAddress = DfirstB(0xD2118);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_________", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_________\n");
}

MakeNameEx(0xCD280, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_X_AXIS________", SN_CHECK);
MakeNameEx(0xD210C, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCCBF8, "CL_Fueling_Target_Compensation_ECT_Disable____", SN_CHECK);
MakeNameEx(0xCC8CE, "CL_to_OL_Delay__________", SN_CHECK);
MakeNameEx(0xCC8C8, "CL_to_OL_DelaySwitch_SIDRIVE_Intelligent____", SN_CHECK);
MakeNameEx(0xCD994, "CL_to_OL_Transition_with_Delay_Throttle_________", SN_CHECK);
referenceAddress = DfirstB(0xCD994);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Throttle_________", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Throttle_________\n");
}

MakeNameEx(0xCD954, "CL_to_OL_Transition_with_Delay_Throttle_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCCDD4, "CL_to_OL_Transition_with_Delay_Throttle_Hysteresis_________", SN_CHECK);
MakeNameEx(0xCF220, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width_________", SN_CHECK);
referenceAddress = DfirstB(0xCF220);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Base_Pulse_Width_________", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Base_Pulse_Width_________\n");
}

MakeNameEx(0xCF1E0, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCCDD0, "CL_to_OL_Transition_with_Delay_BPW_Hysteresis_________", SN_CHECK);
MakeNameEx(0xCF268, "CL_to_OL_Transition_Counter_Step_Value_MAF_________", SN_CHECK);
referenceAddress = DfirstB(0xCF268);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_Counter_Step_Value_MAF_________", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_Counter_Step_Value_MAF_________\n");
}

MakeNameEx(0xCF240, "CL_to_OL_Transition_Counter_Step_Value_MAF_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCCE34, "CL_Delay_Maximum_Throttle_________", SN_CHECK);
MakeNameEx(0xCCE50, "CL_Delay_Maximum_Vehicle_Speed_________", SN_CHECK);
MakeNameEx(0xCCDD8, "CL_Delay_Minimum_ECT_________", SN_CHECK);
MakeNameEx(0xCCE60, "CL_Delay_Maximum_Engine_Load_________", SN_CHECK);
MakeNameEx(0xCC8C6, "CL_Delay_Engine_Load_Counter_Threshold_________", SN_CHECK);
MakeNameEx(0xCCDDC, "CL_Delay_Maximum_Engine_Speed_Per_Gear_________", SN_CHECK);
MakeNameEx(0xCCE04, "CL_Delay_Maximum_Engine_Speed_Neutral_________", SN_CHECK);
MakeNameEx(0xD1C6C, "Injector_Latency__________", SN_CHECK);
referenceAddress = DfirstB(0xD1C6C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Injector_Latency__________", SN_CHECK);
}
else
{
    Message("No reference to Injector_Latency__________\n");
}

MakeNameEx(0xD1C4C, "Injector_Latency_X_AXIS________", SN_CHECK);
MakeNameEx(0xD1C60, "Injector_Latency_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCCA68, "Injector_Flow_Scaling_________", SN_CHECK);
MakeNameEx(0xD1490, "Per_Injector_Pulse_Width_Compensation_A_________", SN_CHECK);
referenceAddress = DfirstB(0xD1490);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_A_________", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_A_________\n");
}

MakeNameEx(0xD1410, "Per_Injector_Pulse_Width_Compensation_A_X_AXIS________", SN_CHECK);
MakeNameEx(0xD1450, "Per_Injector_Pulse_Width_Compensation_A_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD1610, "Per_Injector_Pulse_Width_Compensation_B_________", SN_CHECK);
referenceAddress = DfirstB(0xD1610);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_B_________", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_B_________\n");
}

MakeNameEx(0xD1590, "Per_Injector_Pulse_Width_Compensation_B_X_AXIS________", SN_CHECK);
MakeNameEx(0xD15D0, "Per_Injector_Pulse_Width_Compensation_B_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD1790, "Per_Injector_Pulse_Width_Compensation_C_________", SN_CHECK);
referenceAddress = DfirstB(0xD1790);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_C_________", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_C_________\n");
}

MakeNameEx(0xD1710, "Per_Injector_Pulse_Width_Compensation_C_X_AXIS________", SN_CHECK);
MakeNameEx(0xD1750, "Per_Injector_Pulse_Width_Compensation_C_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD1910, "Per_Injector_Pulse_Width_Compensation_D_________", SN_CHECK);
referenceAddress = DfirstB(0xD1910);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_D_________", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_D_________\n");
}

MakeNameEx(0xD1890, "Per_Injector_Pulse_Width_Compensation_D_X_AXIS________", SN_CHECK);
MakeNameEx(0xD18D0, "Per_Injector_Pulse_Width_Compensation_D_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCDF06, "Cranking_Fuel_Injector_Pulse_Width_A_ECT_________", SN_CHECK);
referenceAddress = DfirstB(0xCDF06);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_A_ECT_________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_A_ECT_________\n");
}

MakeNameEx(0xCD280, "Cranking_Fuel_Injector_Pulse_Width_A_ECT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCDF26, "Cranking_Fuel_Injector_Pulse_Width_B_ECT_________", SN_CHECK);
referenceAddress = DfirstB(0xCDF26);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_B_ECT_________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_B_ECT_________\n");
}

MakeNameEx(0xCD280, "Cranking_Fuel_Injector_Pulse_Width_B_ECT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCDF46, "Cranking_Fuel_Injector_Pulse_Width_C_ECT_________", SN_CHECK);
referenceAddress = DfirstB(0xCDF46);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_C_ECT_________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_C_ECT_________\n");
}

MakeNameEx(0xCD280, "Cranking_Fuel_Injector_Pulse_Width_C_ECT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCDF66, "Cranking_Fuel_Injector_Pulse_Width_D_ECT_________", SN_CHECK);
referenceAddress = DfirstB(0xCDF66);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_D_ECT_________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_D_ECT_________\n");
}

MakeNameEx(0xCD280, "Cranking_Fuel_Injector_Pulse_Width_D_ECT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCDF86, "Cranking_Fuel_Injector_Pulse_Width_E_ECT_________", SN_CHECK);
referenceAddress = DfirstB(0xCDF86);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_E_ECT_________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_E_ECT_________\n");
}

MakeNameEx(0xCD280, "Cranking_Fuel_Injector_Pulse_Width_E_ECT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCDFA6, "Cranking_Fuel_Injector_Pulse_Width_F_ECT_________", SN_CHECK);
referenceAddress = DfirstB(0xCDFA6);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_F_ECT_________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_F_ECT_________\n");
}

MakeNameEx(0xCD280, "Cranking_Fuel_Injector_Pulse_Width_F_ECT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD042C, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_________", SN_CHECK);
referenceAddress = DfirstB(0xD042C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_________\n");
}

MakeNameEx(0xD03FC, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_X_AXIS________", SN_CHECK);
MakeNameEx(0xD0410, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD03D8, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_________", SN_CHECK);
referenceAddress = DfirstB(0xD03D8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_________\n");
}

MakeNameEx(0xD03A8, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_X_AXIS________", SN_CHECK);
MakeNameEx(0xD03BC, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCD484, "Cranking_Fuel_IPW_Compensation_MAP_________", SN_CHECK);
referenceAddress = DfirstB(0xCD484);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_MAP_________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_MAP_________\n");
}

MakeNameEx(0xCD45C, "Cranking_Fuel_IPW_Compensation_MAP_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCD4B8, "Cranking_Fuel_IPW_Compensation_Accelerator_________", SN_CHECK);
referenceAddress = DfirstB(0xCD4B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Accelerator_________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Accelerator_________\n");
}

MakeNameEx(0xCD490, "Cranking_Fuel_IPW_Compensation_Accelerator_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCD4D8, "Cranking_Fuel_IPW_Compensation_IAT_________", SN_CHECK);
referenceAddress = DfirstB(0xCD4D8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_IAT_________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_IAT_________\n");
}

MakeNameEx(0xCD4C4, "Cranking_Fuel_IPW_Compensation_IAT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCFA78, "Throttle_Tipin_Enrichment_A_________", SN_CHECK);
referenceAddress = DfirstB(0xCFA78);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment_A_________", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment_A_________\n");
}

MakeNameEx(0xCFA30, "Throttle_Tipin_Enrichment_A_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCFAE4, "Throttle_Tipin_Enrichment_B_________", SN_CHECK);
referenceAddress = DfirstB(0xCFAE4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment_B_________", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment_B_________\n");
}

MakeNameEx(0xCFA9C, "Throttle_Tipin_Enrichment_B_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCD110, "Minimum_Tipin_Enrichment_Activation_________", SN_CHECK);
MakeNameEx(0xCD10C, "Minimum_Tipin_Enrichment_Activation_Throttle_________", SN_CHECK);
MakeNameEx(0xCDD6C, "Tipin_Enrichment_Compensation_Boost_Error_________", SN_CHECK);
referenceAddress = DfirstB(0xCDD6C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_Boost_Error_________", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_Boost_Error_________\n");
}

MakeNameEx(0xCDD48, "Tipin_Enrichment_Compensation_Boost_Error_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCDD38, "Tipin_Enrichment_Compensation_RPM_________", SN_CHECK);
referenceAddress = DfirstB(0xCDD38);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_RPM_________", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_RPM_________\n");
}

MakeNameEx(0xCDCF8, "Tipin_Enrichment_Compensation_RPM_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCDD75, "Tipin_Enrichment_Compensation_A_ECT_________", SN_CHECK);
referenceAddress = DfirstB(0xCDD75);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_A_ECT_________", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_A_ECT_________\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Compensation_A_ECT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCFB08, "Tipin_Enrichment_Compensation_B_ECT_________", SN_CHECK);
referenceAddress = DfirstB(0xCFB08);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_B_ECT_________", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_B_ECT_________\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Compensation_B_ECT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCFB28, "Tipin_Enrichment_Compensation_C_ECT_________", SN_CHECK);
referenceAddress = DfirstB(0xCFB28);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_C_ECT_________", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_C_ECT_________\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Compensation_C_ECT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCFB68, "Tipin_Enrichment_Compensation_D_ECT_________", SN_CHECK);
referenceAddress = DfirstB(0xCFB68);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_D_ECT_________", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_D_ECT_________\n");
}

MakeNameEx(0xCD2C0, "Tipin_Enrichment_Compensation_D_ECT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCD114, "Tipin_Enrichment_Compensation_D_ECT_Activation_________", SN_CHECK);
MakeNameEx(0xCDD85, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT_________", SN_CHECK);
referenceAddress = DfirstB(0xCDD85);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT_________", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT_________\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCDD95, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT_________", SN_CHECK);
referenceAddress = DfirstB(0xCDD95);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT_________", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT_________\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCC874, "Tipin_Enrichment_Applied_Counter_Reset_________", SN_CHECK);
MakeNameEx(0xCFB88, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT_________", SN_CHECK);
referenceAddress = DfirstB(0xCFB88);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT_________", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT_________\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCFBA8, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT_________", SN_CHECK);
referenceAddress = DfirstB(0xCFBA8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT_________", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT_________\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCC875, "Tipin_Throttle_Cumulative_Reset_________", SN_CHECK);
MakeNameEx(0xD0684, "Min_Primary_Base_Enrichment_1_Cruise_________", SN_CHECK);
referenceAddress = DfirstB(0xD0684);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_Cruise_________", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_Cruise_________\n");
}

MakeNameEx(0xCD280, "Min_Primary_Base_Enrichment_1_Cruise_X_AXIS________", SN_CHECK);
MakeNameEx(0xD0660, "Min_Primary_Base_Enrichment_1_Cruise_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD05E0, "Min_Primary_Base_Enrichment_1_NonCruise_________", SN_CHECK);
referenceAddress = DfirstB(0xD05E0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonCruise_________", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonCruise_________\n");
}

MakeNameEx(0xCD280, "Min_Primary_Base_Enrichment_1_NonCruise_X_AXIS________", SN_CHECK);
MakeNameEx(0xD05C0, "Min_Primary_Base_Enrichment_1_NonCruise_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCD53D, "Min_Primary_Base_Enrichment_1_NonPrimary_OL__________", SN_CHECK);
referenceAddress = DfirstB(0xCD53D);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonPrimary_OL__________", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonPrimary_OL__________\n");
}

MakeNameEx(0xCD280, "Min_Primary_Base_Enrichment_1_NonPrimary_OL_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCCCC0, "AF_Learning_1_Limits_________", SN_CHECK);
MakeNameEx(0xCCCD0, "AF_Learning_1_Airflow_Ranges_________", SN_CHECK);
MakeNameEx(0xC2D18, "MAF_Limit_Maximum_________", SN_CHECK);
MakeNameEx(0xD9CE0, "MAF_Sensor_Scaling_________", SN_CHECK);
referenceAddress = DfirstB(0xD9CE0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_MAF_Sensor_Scaling_________", SN_CHECK);
}
else
{
    Message("No reference to MAF_Sensor_Scaling_________\n");
}

MakeNameEx(0xD9C08, "MAF_Sensor_Scaling_Y_AXIS________", SN_CHECK);
MakeNameEx(0xC3768, "MAF_Compensation_IAT_________", SN_CHECK);
referenceAddress = DfirstB(0xC3768);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_MAF_Compensation_IAT_________", SN_CHECK);
}
else
{
    Message("No reference to MAF_Compensation_IAT_________\n");
}

MakeNameEx(0xC3734, "MAF_Compensation_IAT_X_AXIS________", SN_CHECK);
MakeNameEx(0xC3748, "MAF_Compensation_IAT_Y_AXIS________", SN_CHECK);
MakeNameEx(0x205E8, "Engine_Load_Limit_A_Maximum_________", SN_CHECK);
MakeNameEx(0xC3200, "Engine_Load_Limit_B_Maximum_RPM_________", SN_CHECK);
referenceAddress = DfirstB(0xC3200);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Limit_B_Maximum_RPM_________", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Limit_B_Maximum_RPM_________\n");
}

MakeNameEx(0xC31F8, "Engine_Load_Limit_B_Maximum_RPM_Y_AXIS________", SN_CHECK);
MakeNameEx(0xC3818, "Engine_Load_Compensation_Cruise_MP_________", SN_CHECK);
referenceAddress = DfirstB(0xC3818);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Compensation_Cruise_MP_________", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Compensation_Cruise_MP_________\n");
}

MakeNameEx(0xC3790, "Engine_Load_Compensation_Cruise_MP_X_AXIS________", SN_CHECK);
MakeNameEx(0xC37BC, "Engine_Load_Compensation_Cruise_MP_Y_AXIS________", SN_CHECK);
MakeNameEx(0xC3998, "Engine_Load_Compensation_NonCruise_MP_________", SN_CHECK);
referenceAddress = DfirstB(0xC3998);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Compensation_NonCruise_MP_________", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Compensation_NonCruise_MP_________\n");
}

MakeNameEx(0xC3918, "Engine_Load_Compensation_NonCruise_MP_X_AXIS________", SN_CHECK);
MakeNameEx(0xC3944, "Engine_Load_Compensation_NonCruise_MP_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD5240, "Base_Timing_Primary_Cruise_________", SN_CHECK);
referenceAddress = DfirstB(0xD5240);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Primary_Cruise_________", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Primary_Cruise_________\n");
}

MakeNameEx(0xD51AC, "Base_Timing_Primary_Cruise_X_AXIS________", SN_CHECK);
MakeNameEx(0xD51F8, "Base_Timing_Primary_Cruise_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD5618, "Base_Timing_Reference_Cruise_AVCS_related_________", SN_CHECK);
referenceAddress = DfirstB(0xD5618);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Reference_Cruise_AVCS_related_________", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Reference_Cruise_AVCS_related_________\n");
}

MakeNameEx(0xD5584, "Base_Timing_Reference_Cruise_AVCS_related_X_AXIS________", SN_CHECK);
MakeNameEx(0xD55D0, "Base_Timing_Reference_Cruise_AVCS_related_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD542C, "Base_Timing_Primary_NonCruise_________", SN_CHECK);
referenceAddress = DfirstB(0xD542C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Primary_NonCruise_________", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Primary_NonCruise_________\n");
}

MakeNameEx(0xD5398, "Base_Timing_Primary_NonCruise_X_AXIS________", SN_CHECK);
MakeNameEx(0xD53E4, "Base_Timing_Primary_NonCruise_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD5804, "Base_Timing_Reference_NonCruise_AVCS_related_________", SN_CHECK);
referenceAddress = DfirstB(0xD5804);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Reference_NonCruise_AVCS_related_________", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Reference_NonCruise_AVCS_related_________\n");
}

MakeNameEx(0xD5770, "Base_Timing_Reference_NonCruise_AVCS_related_X_AXIS________", SN_CHECK);
MakeNameEx(0xD57BC, "Base_Timing_Reference_NonCruise_AVCS_related_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD3DEA, "Base_Timing_Idle_A_InGear_________", SN_CHECK);
referenceAddress = DfirstB(0xD3DEA);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_A_InGear_________", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_A_InGear_________\n");
}

MakeNameEx(0xD3BD0, "Base_Timing_Idle_A_InGear_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD3DFA, "Base_Timing_Idle_B_InGear_________", SN_CHECK);
referenceAddress = DfirstB(0xD3DFA);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_B_InGear_________", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_B_InGear_________\n");
}

MakeNameEx(0xD3BD0, "Base_Timing_Idle_B_InGear_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD3E0A, "Base_Timing_Idle_A_Neutral_________", SN_CHECK);
referenceAddress = DfirstB(0xD3E0A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_A_Neutral_________", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_A_Neutral_________\n");
}

MakeNameEx(0xD3BD0, "Base_Timing_Idle_A_Neutral_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD3E1A, "Base_Timing_Idle_B_Neutral_________", SN_CHECK);
referenceAddress = DfirstB(0xD3E1A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_B_Neutral_________", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_B_Neutral_________\n");
}

MakeNameEx(0xD3BD0, "Base_Timing_Idle_B_Neutral_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD3DE1, "Base_Timing_Idle_Minimum_________", SN_CHECK);
referenceAddress = DfirstB(0xD3DE1);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_Minimum_________", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_Minimum_________\n");
}

MakeNameEx(0xD3C50, "Base_Timing_Idle_Minimum_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD3770, "Base_Timing_Idle_Minimum_Vehicle_Speed_Enable_________", SN_CHECK);
MakeNameEx(0xD616C, "Knock_Correction_Advance_Max_Additive_A_Knock_Conditions_IAM___", SN_CHECK);
referenceAddress = DfirstB(0xD616C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_Additive_A_Knock_Conditions_IAM___", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_Additive_A_Knock_Conditions_IAM___\n");
}

MakeNameEx(0xD60D8, "Knock_Correction_Advance_Max_Additive_A_Knock_Conditions_IAM_X_AXIS___", SN_CHECK);
MakeNameEx(0xD6124, "Knock_Correction_Advance_Max_Additive_A_Knock_Conditions_IAM_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD6730, "Knock_Correction_Advance_Max_Additive_B_Knock_Conditions___", SN_CHECK);
referenceAddress = DfirstB(0xD6730);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_Additive_B_Knock_Conditions___", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_Additive_B_Knock_Conditions___\n");
}

MakeNameEx(0xD669C, "Knock_Correction_Advance_Max_Additive_B_Knock_Conditions_X_AXIS___", SN_CHECK);
MakeNameEx(0xD66E8, "Knock_Correction_Advance_Max_Additive_B_Knock_Conditions_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD6358, "Knock_Correction_Advance_Max_Primary_Cruise_IAM___", SN_CHECK);
referenceAddress = DfirstB(0xD6358);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_Primary_Cruise_IAM___", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_Primary_Cruise_IAM___\n");
}

MakeNameEx(0xD62C4, "Knock_Correction_Advance_Max_Primary_Cruise_IAM_X_AXIS___", SN_CHECK);
MakeNameEx(0xD6310, "Knock_Correction_Advance_Max_Primary_Cruise_IAM_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD6544, "Knock_Correction_Advance_Max_Primary_NonCruise_IAM___", SN_CHECK);
referenceAddress = DfirstB(0xD6544);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_Primary_NonCruise_IAM___", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_Primary_NonCruise_IAM___\n");
}

MakeNameEx(0xD64B0, "Knock_Correction_Advance_Max_Primary_NonCruise_IAM_X_AXIS___", SN_CHECK);
MakeNameEx(0xD64FC, "Knock_Correction_Advance_Max_Primary_NonCruise_IAM_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD3637, "Knock_Correction_Advance_Alternate_Mode____", SN_CHECK);
MakeNameEx(0xD3AD8, "Knock_Correction_Advance_Additive_Range_RPM___", SN_CHECK);
MakeNameEx(0xD3ECC, "Timing_Compensation_A_IAT_________", SN_CHECK);
referenceAddress = DfirstB(0xD3ECC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_A_IAT_________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_A_IAT_________\n");
}

MakeNameEx(0xD3E8C, "Timing_Compensation_A_IAT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD599C, "Timing_Compensation_A_IAT_Activation_________", SN_CHECK);
referenceAddress = DfirstB(0xD599C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_A_IAT_Activation_________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_A_IAT_Activation_________\n");
}

MakeNameEx(0xD595C, "Timing_Compensation_A_IAT_Activation_X_AXIS________", SN_CHECK);
MakeNameEx(0xD597C, "Timing_Compensation_A_IAT_Activation_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD4474, "Timing_Compensation_B_IAT_________", SN_CHECK);
referenceAddress = DfirstB(0xD4474);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_B_IAT_________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_B_IAT_________\n");
}

MakeNameEx(0xD4434, "Timing_Compensation_B_IAT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD3930, "Timing_Compensation_B_IAT_IAM_Activation_________", SN_CHECK);
MakeNameEx(0xD3914, "Timing_Compensation_B_IAT_Max_Additive_________", SN_CHECK);
MakeNameEx(0xD3E6A, "Timing_Compensation_Imm_Cruise_A_ECT_________", SN_CHECK);
referenceAddress = DfirstB(0xD3E6A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_Cruise_A_ECT_________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_Cruise_A_ECT_________\n");
}

MakeNameEx(0xD3BD0, "Timing_Compensation_Imm_Cruise_A_ECT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD3E7A, "Timing_Compensation_Imm_Cruise_B_ECT_________", SN_CHECK);
referenceAddress = DfirstB(0xD3E7A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_Cruise_B_ECT_________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_Cruise_B_ECT_________\n");
}

MakeNameEx(0xD3BD0, "Timing_Compensation_Imm_Cruise_B_ECT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD3E4A, "Timing_Compensation_Imm_NonCruise_A_ECT_________", SN_CHECK);
referenceAddress = DfirstB(0xD3E4A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_NonCruise_A_ECT_________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_NonCruise_A_ECT_________\n");
}

MakeNameEx(0xD3BD0, "Timing_Compensation_Imm_NonCruise_A_ECT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD3E5A, "Timing_Compensation_Imm_NonCruise_B_ECT_________", SN_CHECK);
referenceAddress = DfirstB(0xD3E5A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_NonCruise_B_ECT_________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_NonCruise_B_ECT_________\n");
}

MakeNameEx(0xD3BD0, "Timing_Compensation_Imm_NonCruise_B_ECT_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD5F00, "Timing_Compensation_Per_Cylinder_A_________", SN_CHECK);
referenceAddress = DfirstB(0xD5F00);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_A_________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_A_________\n");
}

MakeNameEx(0xD5EB8, "Timing_Compensation_Per_Cylinder_A_X_AXIS________", SN_CHECK);
MakeNameEx(0xD5EF0, "Timing_Compensation_Per_Cylinder_A_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD5F80, "Timing_Compensation_Per_Cylinder_B_________", SN_CHECK);
referenceAddress = DfirstB(0xD5F80);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_B_________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_B_________\n");
}

MakeNameEx(0xD5F38, "Timing_Compensation_Per_Cylinder_B_X_AXIS________", SN_CHECK);
MakeNameEx(0xD5F70, "Timing_Compensation_Per_Cylinder_B_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD6000, "Timing_Compensation_Per_Cylinder_C_________", SN_CHECK);
referenceAddress = DfirstB(0xD6000);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_C_________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_C_________\n");
}

MakeNameEx(0xD5FB8, "Timing_Compensation_Per_Cylinder_C_X_AXIS________", SN_CHECK);
MakeNameEx(0xD5FF0, "Timing_Compensation_Per_Cylinder_C_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD6080, "Timing_Compensation_Per_Cylinder_D_________", SN_CHECK);
referenceAddress = DfirstB(0xD6080);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_D_________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_D_________\n");
}

MakeNameEx(0xD6038, "Timing_Compensation_Per_Cylinder_D_X_AXIS________", SN_CHECK);
MakeNameEx(0xD6070, "Timing_Compensation_Per_Cylinder_D_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD39D8, "Timing_Comp_Minimum_Load_Per_Cylinder_________", SN_CHECK);
MakeNameEx(0xD39D4, "Timing_Comp_Maximum_RPM_Per_Cylinder_________", SN_CHECK);
MakeNameEx(0xD39DC, "Timing_Comp_Minimum_Coolant_Temp_Per_Cylinder_________", SN_CHECK);
MakeNameEx(0xD5E0C, "Timing_Compensation_Per_Gear_1st___", SN_CHECK);
referenceAddress = DfirstB(0xD5E0C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Gear_1st___", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Gear_1st___\n");
}

MakeNameEx(0xD5DF0, "Timing_Compensation_Per_Gear_1st_X_AXIS___", SN_CHECK);
MakeNameEx(0xD5E00, "Timing_Compensation_Per_Gear_1st_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD5E34, "Timing_Compensation_Per_Gear_2nd___", SN_CHECK);
referenceAddress = DfirstB(0xD5E34);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Gear_2nd___", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Gear_2nd___\n");
}

MakeNameEx(0xD5E18, "Timing_Compensation_Per_Gear_2nd_X_AXIS___", SN_CHECK);
MakeNameEx(0xD5E28, "Timing_Compensation_Per_Gear_2nd_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD5E5C, "Timing_Compensation_Per_Gear_3rd___", SN_CHECK);
referenceAddress = DfirstB(0xD5E5C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Gear_3rd___", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Gear_3rd___\n");
}

MakeNameEx(0xD5E40, "Timing_Compensation_Per_Gear_3rd_X_AXIS___", SN_CHECK);
MakeNameEx(0xD5E50, "Timing_Compensation_Per_Gear_3rd_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD5E84, "Timing_Compensation_Per_Gear_4th___", SN_CHECK);
referenceAddress = DfirstB(0xD5E84);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Gear_4th___", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Gear_4th___\n");
}

MakeNameEx(0xD5E68, "Timing_Compensation_Per_Gear_4th_X_AXIS___", SN_CHECK);
MakeNameEx(0xD5E78, "Timing_Compensation_Per_Gear_4th_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD5EAC, "Timing_Compensation_Per_Gear_5th___", SN_CHECK);
referenceAddress = DfirstB(0xD5EAC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Gear_5th___", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Gear_5th___\n");
}

MakeNameEx(0xD5E90, "Timing_Compensation_Per_Gear_5th_X_AXIS___", SN_CHECK);
MakeNameEx(0xD5EA0, "Timing_Compensation_Per_Gear_5th_Y_AXIS___", SN_CHECK);
MakeNameEx(0xD3974, "Timing_Compensation_Per_Gear_Activation_RPM___", SN_CHECK);
MakeNameEx(0xD397C, "Timing_Compensation_Per_Gear_Activation_Load___", SN_CHECK);
MakeNameEx(0xD39E8, "Feedback_Correction_Range_RPM_________", SN_CHECK);
MakeNameEx(0xD39E0, "Feedback_Correction_Minimum_Load_________", SN_CHECK);
MakeNameEx(0xD3A08, "Feedback_Correction_Retard_Value_________", SN_CHECK);
MakeNameEx(0xD3A04, "Feedback_Correction_Retard_Limit_________", SN_CHECK);
MakeNameEx(0xD3A0C, "Feedback_Correction_Negative_Advance_Value_________", SN_CHECK);
MakeNameEx(0xD3672, "Feedback_Correction_Negative_Advance_Delay_________", SN_CHECK);
MakeNameEx(0xD3A14, "Extended_Feedback_Correction_High_RPM_Compensation_________", SN_CHECK);
MakeNameEx(0xD3BB0, "Fine_Correction_Range_RPM_________", SN_CHECK);
MakeNameEx(0xD3BC0, "Fine_Correction_Range_Load_________", SN_CHECK);
MakeNameEx(0xD3B50, "Fine_Correction_Rows_RPM_________", SN_CHECK);
MakeNameEx(0xD3B6C, "Fine_Correction_Columns_Load_________", SN_CHECK);
MakeNameEx(0xD3B94, "Fine_Correction_Retard_Value_________", SN_CHECK);
MakeNameEx(0xD3B90, "Fine_Correction_Retard_Limit_________", SN_CHECK);
MakeNameEx(0xD3B8C, "Fine_Correction_Advance_Value_________", SN_CHECK);
MakeNameEx(0xD3B88, "Fine_Correction_Advance_Limit_________", SN_CHECK);
MakeNameEx(0xD3682, "Fine_Correction_Advance_Delay_________", SN_CHECK);
MakeNameEx(0xD3AF8, "Rough_Correction_Range_RPM_________", SN_CHECK);
MakeNameEx(0xD3B08, "Rough_Correction_Range_Load_________", SN_CHECK);
MakeNameEx(0xD3B18, "Rough_Correction_Minimum_KC_Advance_Map_Value_________", SN_CHECK);
MakeNameEx(0xD47A0, "Rough_Correction_Learning_Delay_Increasing__________", SN_CHECK);
referenceAddress = DfirstB(0xD47A0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Rough_Correction_Learning_Delay_Increasing__________", SN_CHECK);
}
else
{
    Message("No reference to Rough_Correction_Learning_Delay_Increasing__________\n");
}

MakeNameEx(0xD4778, "Rough_Correction_Learning_Delay_Increasing_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD3B1C, "Advance_Multiplier_Initial_________", SN_CHECK);
MakeNameEx(0xD3B20, "Advance_Multiplier_Step_Value_________", SN_CHECK);
MakeNameEx(0xDBEC8, "Intake_Cam_Advance_Angle_Cruise_AVCS_________", SN_CHECK);
referenceAddress = DfirstB(0xDBEC8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_Cruise_AVCS_________", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_Cruise_AVCS_________\n");
}

MakeNameEx(0xDBE34, "Intake_Cam_Advance_Angle_Cruise_AVCS_X_AXIS________", SN_CHECK);
MakeNameEx(0xDBE80, "Intake_Cam_Advance_Angle_Cruise_AVCS_Y_AXIS________", SN_CHECK);
MakeNameEx(0xDC208, "Intake_Cam_Advance_Angle_NonCruise_AVCS_________", SN_CHECK);
referenceAddress = DfirstB(0xDC208);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_NonCruise_AVCS_________", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_NonCruise_AVCS_________\n");
}

MakeNameEx(0xDC174, "Intake_Cam_Advance_Angle_NonCruise_AVCS_X_AXIS________", SN_CHECK);
MakeNameEx(0xDC1C0, "Intake_Cam_Advance_Angle_NonCruise_AVCS_Y_AXIS________", SN_CHECK);
MakeNameEx(0xDC548, "Intake_Cam_Advance_Angle_ECT_Related___", SN_CHECK);
referenceAddress = DfirstB(0xDC548);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_ECT_Related___", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_ECT_Related___\n");
}

MakeNameEx(0xDC4B4, "Intake_Cam_Advance_Angle_ECT_Related_X_AXIS___", SN_CHECK);
MakeNameEx(0xDC500, "Intake_Cam_Advance_Angle_ECT_Related_Y_AXIS___", SN_CHECK);
MakeNameEx(0xDB43A, "Intake_Cam_Advance_Angle_ECT_Related_Multiplier___", SN_CHECK);
referenceAddress = DfirstB(0xDB43A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_ECT_Related_Multiplier___", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_ECT_Related_Multiplier___\n");
}

MakeNameEx(0xDB264, "Intake_Cam_Advance_Angle_ECT_Related_Multiplier_Y_AXIS___", SN_CHECK);
MakeNameEx(0xDCC38, "Exhaust_Cam_Retard_Angle_Cruise_AVCS___", SN_CHECK);
referenceAddress = DfirstB(0xDCC38);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Exhaust_Cam_Retard_Angle_Cruise_AVCS___", SN_CHECK);
}
else
{
    Message("No reference to Exhaust_Cam_Retard_Angle_Cruise_AVCS___\n");
}

MakeNameEx(0xDCBA4, "Exhaust_Cam_Retard_Angle_Cruise_AVCS_X_AXIS___", SN_CHECK);
MakeNameEx(0xDCBF0, "Exhaust_Cam_Retard_Angle_Cruise_AVCS_Y_AXIS___", SN_CHECK);
MakeNameEx(0xDCF78, "Exhaust_Cam_Retard_Angle_NonCruise_AVCS___", SN_CHECK);
referenceAddress = DfirstB(0xDCF78);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Exhaust_Cam_Retard_Angle_NonCruise_AVCS___", SN_CHECK);
}
else
{
    Message("No reference to Exhaust_Cam_Retard_Angle_NonCruise_AVCS___\n");
}

MakeNameEx(0xDCEE4, "Exhaust_Cam_Retard_Angle_NonCruise_AVCS_X_AXIS___", SN_CHECK);
MakeNameEx(0xDCF30, "Exhaust_Cam_Retard_Angle_NonCruise_AVCS_Y_AXIS___", SN_CHECK);
MakeNameEx(0xDD2B8, "Exhaust_Cam_Retard_Angle_ECT_Related___", SN_CHECK);
referenceAddress = DfirstB(0xDD2B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Exhaust_Cam_Retard_Angle_ECT_Related___", SN_CHECK);
}
else
{
    Message("No reference to Exhaust_Cam_Retard_Angle_ECT_Related___\n");
}

MakeNameEx(0xDD224, "Exhaust_Cam_Retard_Angle_ECT_Related_X_AXIS___", SN_CHECK);
MakeNameEx(0xDD270, "Exhaust_Cam_Retard_Angle_ECT_Related_Y_AXIS___", SN_CHECK);
MakeNameEx(0xDB53C, "Exhaust_Cam_Retard_Angle_ECT_Related_Multiplier___", SN_CHECK);
referenceAddress = DfirstB(0xDB53C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Exhaust_Cam_Retard_Angle_ECT_Related_Multiplier___", SN_CHECK);
}
else
{
    Message("No reference to Exhaust_Cam_Retard_Angle_ECT_Related_Multiplier___\n");
}

MakeNameEx(0xDB264, "Exhaust_Cam_Retard_Angle_ECT_Related_Multiplier_Y_AXIS___", SN_CHECK);
MakeNameEx(0xFA070, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport____", SN_CHECK);
referenceAddress = DfirstB(0xFA070);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport____", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport____\n");
}

MakeNameEx(0xF9FEC, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_X_AXIS___", SN_CHECK);
MakeNameEx(0xFA02C, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Y_AXIS___", SN_CHECK);
MakeNameEx(0xFA314, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp____", SN_CHECK);
referenceAddress = DfirstB(0xFA314);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp____", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp____\n");
}

MakeNameEx(0xFA290, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp_X_AXIS___", SN_CHECK);
MakeNameEx(0xFA2D0, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp_Y_AXIS___", SN_CHECK);
MakeNameEx(0xFA5B8, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent____", SN_CHECK);
referenceAddress = DfirstB(0xFA5B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent____", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent____\n");
}

MakeNameEx(0xFA534, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent_X_AXIS___", SN_CHECK);
MakeNameEx(0xFA574, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent_Y_AXIS___", SN_CHECK);
MakeNameEx(0xF900C, "Requested_Torque_Base_RPM_________", SN_CHECK);
referenceAddress = DfirstB(0xF900C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Base_RPM_________", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Base_RPM_________\n");
}

MakeNameEx(0xF8FCC, "Requested_Torque_Base_RPM_Y_AXIS________", SN_CHECK);
MakeNameEx(0xF94D8, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_________", SN_CHECK);
referenceAddress = DfirstB(0xF94D8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_________", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_________\n");
}

MakeNameEx(0xF943C, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_X_AXIS________", SN_CHECK);
MakeNameEx(0xF9498, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_Y_AXIS________", SN_CHECK);
MakeNameEx(0xF9854, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_________", SN_CHECK);
referenceAddress = DfirstB(0xF9854);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_________", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_________\n");
}

MakeNameEx(0xF97B8, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_X_AXIS________", SN_CHECK);
MakeNameEx(0xF9814, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_Y_AXIS________", SN_CHECK);
MakeNameEx(0xF9BD0, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_________", SN_CHECK);
referenceAddress = DfirstB(0xF9BD0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_________", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_________\n");
}

MakeNameEx(0xF9B34, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_X_AXIS________", SN_CHECK);
MakeNameEx(0xF9B90, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_Y_AXIS________", SN_CHECK);
MakeNameEx(0xF9F24, "Requested_Torque_Limit_A_Per_GearEngine_Speed_________", SN_CHECK);
referenceAddress = DfirstB(0xF9F24);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Limit_A_Per_GearEngine_Speed_________", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Limit_A_Per_GearEngine_Speed_________\n");
}

MakeNameEx(0xF9EDC, "Requested_Torque_Limit_A_Per_GearEngine_Speed_X_AXIS________", SN_CHECK);
MakeNameEx(0xF9F1C, "Requested_Torque_Limit_A_Per_GearEngine_Speed_Y_AXIS________", SN_CHECK);
MakeNameEx(0xF9FAC, "Requested_Torque_Limit_B_Per_GearEngine_Speed_________", SN_CHECK);
referenceAddress = DfirstB(0xF9FAC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Limit_B_Per_GearEngine_Speed_________", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Limit_B_Per_GearEngine_Speed_________\n");
}

MakeNameEx(0xF9F64, "Requested_Torque_Limit_B_Per_GearEngine_Speed_X_AXIS________", SN_CHECK);
MakeNameEx(0xF9FA4, "Requested_Torque_Limit_B_Per_GearEngine_Speed_Y_AXIS________", SN_CHECK);
MakeNameEx(0xCD16C, "Rev_Limit_Fuel_Cut________", SN_CHECK);
MakeNameEx(0xCD174, "Rev_Limit_Fuel_Resume_Boost_________", SN_CHECK);
MakeNameEx(0xCD178, "Speed_Limiting_Enable_Fuel_Cut_________", SN_CHECK);
MakeNameEx(0xCD180, "Speed_Limiting_Disable_Fuel_Cut_________", SN_CHECK);
MakeNameEx(0xF8E54, "Speed_Limiting_A_Throttle_SIDRIVE_SportSport_Sharp____", SN_CHECK);
MakeNameEx(0xF8E60, "Speed_Limiting_B_Throttle_SIDRIVE_SportSport_Sharp____", SN_CHECK);
MakeNameEx(0xF8E6C, "Speed_Limiting_Throttle_SIDRIVE_Intelligent____", SN_CHECK);
MakeNameEx(0xDA068, "Fuel_Temp_Sensor_Scaling_________", SN_CHECK);
referenceAddress = DfirstB(0xDA068);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Fuel_Temp_Sensor_Scaling_________", SN_CHECK);
}
else
{
    Message("No reference to Fuel_Temp_Sensor_Scaling_________\n");
}

MakeNameEx(0xD9FF0, "Fuel_Temp_Sensor_Scaling_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD9F78, "Intake_Temp_Sensor_Scaling_________", SN_CHECK);
referenceAddress = DfirstB(0xD9F78);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Intake_Temp_Sensor_Scaling_________", SN_CHECK);
}
else
{
    Message("No reference to Intake_Temp_Sensor_Scaling_________\n");
}

MakeNameEx(0xD9F00, "Intake_Temp_Sensor_Scaling_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD9E90, "Coolant_Temp_Sensor_Scaling_________", SN_CHECK);
referenceAddress = DfirstB(0xD9E90);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Coolant_Temp_Sensor_Scaling_________", SN_CHECK);
}
else
{
    Message("No reference to Coolant_Temp_Sensor_Scaling_________\n");
}

MakeNameEx(0xD9E20, "Coolant_Temp_Sensor_Scaling_Y_AXIS________", SN_CHECK);
MakeNameEx(0x4BCD8, "Fuel_Pump_Duty________", SN_CHECK);
MakeNameEx(0xDA460, "Radiator_Fan_Modes_A_ECT_________", SN_CHECK);
MakeNameEx(0xDA470, "Radiator_Fan_Modes_B_ECT_________", SN_CHECK);
MakeNameEx(0xDA480, "Radiator_Fan_Modes_Veh_Speed_________", SN_CHECK);
MakeNameEx(0xC308C, "Gear_Determination_Thresholds_A_________", SN_CHECK);
MakeNameEx(0xC30A0, "Gear_Determination_Thresholds_B_________", SN_CHECK);
MakeNameEx(0xC30B4, "Gear_Determination_Thresholds_C_________", SN_CHECK);
MakeNameEx(0xD7CEE, "Idle_Speed_Target_A_________", SN_CHECK);
referenceAddress = DfirstB(0xD7CEE);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_A_________", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_A_________\n");
}

MakeNameEx(0xD7448, "Idle_Speed_Target_A_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD7D2E, "Idle_Speed_Target_B_________", SN_CHECK);
referenceAddress = DfirstB(0xD7D2E);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_B_________", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_B_________\n");
}

MakeNameEx(0xD7448, "Idle_Speed_Target_B_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD7D6E, "Idle_Speed_Target_C_________", SN_CHECK);
referenceAddress = DfirstB(0xD7D6E);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_C_________", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_C_________\n");
}

MakeNameEx(0xD7448, "Idle_Speed_Target_C_Y_AXIS________", SN_CHECK);
MakeNameEx(0xD7DAE, "Idle_Speed_Target_D____", SN_CHECK);
referenceAddress = DfirstB(0xD7DAE);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_D____", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_D____\n");
}

MakeNameEx(0xD7448, "Idle_Speed_Target_D_Y_AXIS___", SN_CHECK);
MakeNameEx(0xA9160, "Force_Pass_Readiness_Monitors__________", SN_CHECK);
MakeNameEx(0xDA314, "Ignition_Dwell_________", SN_CHECK);
referenceAddress = DfirstB(0xDA314);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Ignition_Dwell_________", SN_CHECK);
}
else
{
    Message("No reference to Ignition_Dwell_________\n");
}

MakeNameEx(0xDA2C0, "Ignition_Dwell_X_AXIS________", SN_CHECK);
MakeNameEx(0xDA300, "Ignition_Dwell_Y_AXIS________", SN_CHECK);
MakeNameEx(0x9C5DA, "P0000_PASS_CODE_NO_DTC_DETECTED__________", SN_CHECK);
MakeNameEx(0x9C5BD, "P0011_CAMSHAFT_POS_TIMING_OVERADVANCED_1_________", SN_CHECK);
MakeNameEx(0x9C654, "P0014_EXHAUST_AVCS_SYSTEM_1_RANGEPERF___", SN_CHECK);
MakeNameEx(0x9C64B, "P0016_CRANKSHAFTCAMSHAFT_CORRELATION_1A_________", SN_CHECK);
MakeNameEx(0x9C65A, "P0017_CRANKCAM_TIMING_B_FAILURE_1___", SN_CHECK);
MakeNameEx(0x9C64A, "P0018_CRANKSHAFTCAMSHAFT_CORRELATION_2A_________", SN_CHECK);
MakeNameEx(0x9C659, "P0019_CRANKCAM_TIMING_B_FAILURE_2___", SN_CHECK);
MakeNameEx(0x9C5BE, "P0021_CAMSHAFT_POS_TIMING_OVERADVANCED_2_________", SN_CHECK);
MakeNameEx(0x9C653, "P0024_EXHAUST_AVCS_SYSTEM_2_RANGEPERF___", SN_CHECK);
MakeNameEx(0x9C5FE, "P0030_FRONT_O2_SENSOR_RANGEPERF_________", SN_CHECK);
MakeNameEx(0x9C5E9, "P0031_FRONT_O2_SENSOR_LOW_INPUT_________", SN_CHECK);
MakeNameEx(0x9C5E7, "P0032_FRONT_O2_SENSOR_HIGH_INPUT_________", SN_CHECK);
MakeNameEx(0x9C5E8, "P0037_REAR_O2_SENSOR_LOW_INPUT_________", SN_CHECK);
MakeNameEx(0x9C5E6, "P0038_REAR_O2_SENSOR_HIGH_INPUT_________", SN_CHECK);
MakeNameEx(0x9C5F9, "P0068_MAP_SENSOR_RANGEPERF_________", SN_CHECK);
MakeNameEx(0x9C5FA, "P0101_MAF_SENSOR_RANGEPERF_________", SN_CHECK);
MakeNameEx(0x9C599, "P0102_MAF_SENSOR_LOW_INPUT_________", SN_CHECK);
MakeNameEx(0x9C59A, "P0103_MAF_SENSOR_HIGH_INPUT_________", SN_CHECK);
MakeNameEx(0x9C5EA, "P0107_MAP_SENSOR_LOW_INPUT_________", SN_CHECK);
MakeNameEx(0x9C5EB, "P0108_MAP_SENSOR_HIGH_INPUT_________", SN_CHECK);
MakeNameEx(0x9C5E5, "P0111_IAT_SENSOR_RANGEPERF_________", SN_CHECK);
MakeNameEx(0x9C5E3, "P0112_IAT_SENSOR_LOW_INPUT_________", SN_CHECK);
MakeNameEx(0x9C5E4, "P0113_IAT_SENSOR_HIGH_INPUT_________", SN_CHECK);
MakeNameEx(0x9C5A2, "P0117_COOLANT_TEMP_SENSOR_LOW_INPUT_________", SN_CHECK);
MakeNameEx(0x9C5A3, "P0118_COOLANT_TEMP_SENSOR_HIGH_INPUT_________", SN_CHECK);
MakeNameEx(0x9C5A0, "P0122_TPS_A_LOW_INPUT_________", SN_CHECK);
MakeNameEx(0x9C5A1, "P0123_TPS_A_HIGH_INPUT_________", SN_CHECK);
MakeNameEx(0x9C5A5, "P0125_INSUFFICIENT_COOLANT_TEMP_FUELING_________", SN_CHECK);
MakeNameEx(0x9C633, "P0126_INSUFFICIENT_COOLANT_TEMP_OPERATION_________", SN_CHECK);
MakeNameEx(0x9C5F0, "P0128_THERMOSTAT_MALFUNCTION_________", SN_CHECK);
MakeNameEx(0x9C5DD, "P0131_FRONT_O2_SENSOR_LOW_INPUT_________", SN_CHECK);
MakeNameEx(0x9C5DF, "P0132_FRONT_O2_SENSOR_HIGH_INPUT_________", SN_CHECK);
MakeNameEx(0x9C5FC, "P0134_FRONT_O2_SENSOR_NO_ACTIVITY_________", SN_CHECK);
MakeNameEx(0x9C5DC, "P0137_REAR_O2_SENSOR_LOW_VOLTAGE_________", SN_CHECK);
MakeNameEx(0x9C5E1, "P0138_REAR_O2_SENSOR_HIGH_VOLTAGE_________", SN_CHECK);
MakeNameEx(0x9C646, "P0140_REAR_O2_SENSOR_NO_ACTIVITY_________", SN_CHECK);
MakeNameEx(0x9C5C6, "P0141_REAR_O2_SENSOR_MALFUNCTION____", SN_CHECK);
MakeNameEx(0x9C676, "P014C_O2_SENSOR_SLOW_RESPONSE_RICH_TO_LEAN_B1_S1___", SN_CHECK);
MakeNameEx(0x9C675, "P014D_O2_SENSOR_SLOW_RESPONSE_LEAN_TO_RICH_B1_S1___", SN_CHECK);
MakeNameEx(0x9C672, "P015A_O2_SENSOR_DELAYED_RESPONSE_RICH_TO_LEAN_B1_S1___", SN_CHECK);
MakeNameEx(0x9C5D1, "P0171_SYSTEM_TOO_LEAN_________", SN_CHECK);
MakeNameEx(0x9C5D2, "P0172_SYSTEM_TOO_RICH_________", SN_CHECK);
MakeNameEx(0x9C605, "P0222_TPS_B_LOW_INPUT_________", SN_CHECK);
MakeNameEx(0x9C606, "P0223_TPS_B_HIGH_INPUT_________", SN_CHECK);
MakeNameEx(0x9C5F8, "P0230_FUEL_PUMP_PRIMARY_CIRCUIT_________", SN_CHECK);
MakeNameEx(0x9C5F7, "P0244_WASTEGATE_SOLENOID_A_RANGEPERF_________", SN_CHECK);
MakeNameEx(0x9C5F5, "P0245_WASTEGATE_SOLENOID_A_LOW_________", SN_CHECK);
MakeNameEx(0x9C5F6, "P0246_WASTEGATE_SOLENOID_A_HIGH_________", SN_CHECK);
MakeNameEx(0x9C5D3, "P0301_MISFIRE_CYLINDER_1_________", SN_CHECK);
MakeNameEx(0x9C5D4, "P0302_MISFIRE_CYLINDER_2_________", SN_CHECK);
MakeNameEx(0x9C5D5, "P0303_MISFIRE_CYLINDER_3_________", SN_CHECK);
MakeNameEx(0x9C5D6, "P0304_MISFIRE_CYLINDER_4_________", SN_CHECK);
MakeNameEx(0x9C59E, "P0327_KNOCK_SENSOR_1_LOW_INPUT_________", SN_CHECK);
MakeNameEx(0x9C59F, "P0328_KNOCK_SENSOR_1_HIGH_INPUT_________", SN_CHECK);
MakeNameEx(0x9C594, "P0335_CRANKSHAFT_POS_SENSOR_A_MALFUNCTION_________", SN_CHECK);
MakeNameEx(0x9C595, "P0336_CRANKSHAFT_POS_SENSOR_A_RANGEPERF_________", SN_CHECK);
MakeNameEx(0x9C618, "P0340_CAMSHAFT_POS_SENSOR_A_MALFUNCTION_________", SN_CHECK);
MakeNameEx(0x9C617, "P0345_CAMSHAFT_POS_SENSOR_A_BANK_2_________", SN_CHECK);
MakeNameEx(0x9C616, "P0365_CAMSHAFT_POS_SENSOR_B_BANK_1___", SN_CHECK);
MakeNameEx(0x9C615, "P0390_CAMSHAFT_POS_SENSOR_B_BANK_2___", SN_CHECK);
MakeNameEx(0x9C640, "P0410_SECONDARY_AIR_PUMP_SYSTEM_________", SN_CHECK);
MakeNameEx(0x9C63F, "P0411_SECONDARY_AIR_PUMP_INCORRECT_FLOW_________", SN_CHECK);
MakeNameEx(0x9C644, "P0413_SECONDARY_AIR_PUMP_A_OPEN_________", SN_CHECK);
MakeNameEx(0x9C648, "P0414_SECONDARY_AIR_PUMP_A_SHORTED_________", SN_CHECK);
MakeNameEx(0x9C652, "P0416_SECONDARY_AIR_PUMP_B_OPEN_________", SN_CHECK);
MakeNameEx(0x9C651, "P0417_SECONDARY_AIR_PUMP_B_SHORTED_________", SN_CHECK);
MakeNameEx(0x9C645, "P0418_SECONDARY_AIR_PUMP_RELAY_A_________", SN_CHECK);
MakeNameEx(0x9C5CD, "P0420_CAT_EFFICIENCY_BELOW_THRESHOLD_________", SN_CHECK);
MakeNameEx(0x9C67C, "P0441_EVAP_INCORRECT_PURGE_FLOW_________", SN_CHECK);
MakeNameEx(0x9C67B, "P0451_EVAP_PRESSURE_SENSOR_RANGEPERF_________", SN_CHECK);
MakeNameEx(0x9C66E, "P0452_EVAP_PRESSURE_SENSOR_LOW_INPUT_________", SN_CHECK);
MakeNameEx(0x9C66D, "P0453_EVAP_PRESSURE_SENSOR_HIGH_INPUT_________", SN_CHECK);
MakeNameEx(0x9C67A, "P0455_EVAP_EMISSION_CONTROL_SYSTEM_LEAK_DETECTED_GROSS_LEAK____", SN_CHECK);
MakeNameEx(0x9C5CF, "P0456_EVAP_LEAK_DETECTED_VERY_SMALL_________", SN_CHECK);
MakeNameEx(0x9C5C1, "P0458_EVAP_PURGE_VALVE_CIRCUIT_LOW_________", SN_CHECK);
MakeNameEx(0x9C5C2, "P0459_EVAP_PURGE_VALVE_CIRCUIT_HIGH_________", SN_CHECK);
MakeNameEx(0x9C5A8, "P0461_FUEL_LEVEL_SENSOR_RANGEPERF_________", SN_CHECK);
MakeNameEx(0x9C5A6, "P0462_FUEL_LEVEL_SENSOR_LOW_INPUT_________", SN_CHECK);
MakeNameEx(0x9C5A7, "P0463_FUEL_LEVEL_SENSOR_HIGH_INPUT_________", SN_CHECK);
MakeNameEx(0x9C59B, "P0500_VEHICLE_SPEED_SENSOR_A_________", SN_CHECK);
MakeNameEx(0x9C5BB, "P0506_IDLE_CONTROL_RPM_LOWER_THAN_EXPECTED_________", SN_CHECK);
MakeNameEx(0x9C5BC, "P0507_IDLE_CONTROL_RPM_HIGH_THAN_EXPECTED_________", SN_CHECK);
MakeNameEx(0x9C668, "P050A_COLD_START_IDLE_AIR_CONTROL_SYSTEM_PERFORMANCE____", SN_CHECK);
MakeNameEx(0x9C667, "P050B_COLD_START_IGNITION_TIMING_PERFORMANCE____", SN_CHECK);
MakeNameEx(0x9C5AA, "P0512_STARTER_REQUEST_CIRCUIT_________", SN_CHECK);
MakeNameEx(0x9C598, "P0604_CONTROL_MODULE_RAM_ERROR_________", SN_CHECK);
MakeNameEx(0x9C619, "P0605_CONTROL_MODULE_ROM_ERROR_________", SN_CHECK);
MakeNameEx(0x9C60D, "P0607_CONTROL_MODULE_PERFORMANCE_________", SN_CHECK);
MakeNameEx(0x9C60C, "P0638_THROTTLE_ACTUATOR_RANGEPERF_________", SN_CHECK);
MakeNameEx(0x9C5AE, "P0851_NEUTRAL_SWITCH_INPUT_LOW_________", SN_CHECK);
MakeNameEx(0x9C5B2, "P0852_NEUTRAL_SWITCH_INPUT_HIGH_________", SN_CHECK);
MakeNameEx(0x9C5C9, "P1152_FRONT_O2_SENSOR_RANGEPERF_LOW_B1_S1_________", SN_CHECK);
MakeNameEx(0x9C5CA, "P1153_FRONT_O2_SENSOR_RANGEPERF_HIGH_B1_S1_________", SN_CHECK);
MakeNameEx(0x9C607, "P1160_ABNORMAL_RETURN_SPRING_________", SN_CHECK);
MakeNameEx(0x9C5BF, "P1400_FUEL_TANK_PRESSURE_SOL_LOW_________", SN_CHECK);
MakeNameEx(0x9C64C, "P1410_SECONDARY_AIR_PUMP_VALVE_STUCK_OPEN_________", SN_CHECK);
MakeNameEx(0x9C649, "P1418_SECONDARY_AIR_PUMP_CIRCUIT_SHORTED_________", SN_CHECK);
MakeNameEx(0x9C5C0, "P1420_FUEL_TANK_PRESSURE_SOL_HIGH_INPUT_________", SN_CHECK);
MakeNameEx(0x9C679, "P1449_EVAPORATIVE_EMISSION_CONT_SYS_AIR_FILTER_CLOG____", SN_CHECK);
MakeNameEx(0x9C678, "P1451_EVAPORATIVE_EMISSION_CONT_SYS____", SN_CHECK);
MakeNameEx(0x9C677, "P1458_CANISTER_PURGE_CONTROL_SOLENOID_VALVE_2_LOW____", SN_CHECK);
MakeNameEx(0x9C681, "P1459_CANISTER_PURGE_CONTROL_SOLENOID_VALVE_2_HIGH____", SN_CHECK);
MakeNameEx(0x9C5F1, "P1491_PCV_BLOWBY_FUNCTION_PROBLEM_________", SN_CHECK);
MakeNameEx(0x9C5A9, "P1518_STARTER_SWITCH_LOW_INPUT____", SN_CHECK);
MakeNameEx(0x9C657, "P1519_IMRC_STUCK_CLOSED_________", SN_CHECK);
MakeNameEx(0x9C656, "P1520_IMRC_CIRCUIT_MALFUNCTION_________", SN_CHECK);
MakeNameEx(0x9C5F2, "P1560_BACKUP_VOLTAGE_MALFUNCTION_________", SN_CHECK);
MakeNameEx(0x9C655, "P1616_SBDS_INTERACTIVE_CODES_________", SN_CHECK);
MakeNameEx(0x9C62E, "P2004_TGV_INTAKE_MANIFOLD_RUNNER_1_STUCK_OPEN_________", SN_CHECK);
MakeNameEx(0x9C630, "P2005_TGV_INTAKE_MANIFOLD_RUNNER_2_STUCK_OPEN_________", SN_CHECK);
MakeNameEx(0x9C62F, "P2006_TGV_INTAKE_MANIFOLD_RUNNER_1_STUCK_CLOSED_________", SN_CHECK);
MakeNameEx(0x9C631, "P2007_TGV_INTAKE_MANIFOLD_RUNNER_2_STUCK_CLOSED_________", SN_CHECK);
MakeNameEx(0x9C63C, "P2008_TGV_INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_OPEN_________", SN_CHECK);
MakeNameEx(0x9C63A, "P2009_TGV_INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_LOW_________", SN_CHECK);
MakeNameEx(0x9C63D, "P2011_TGV_INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_OPEN_________", SN_CHECK);
MakeNameEx(0x9C63B, "P2012_TGV_INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_LOW_________", SN_CHECK);
MakeNameEx(0x9C636, "P2016_TGV_INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_LOW_________", SN_CHECK);
MakeNameEx(0x9C637, "P2017_TGV_INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_HIGH_________", SN_CHECK);
MakeNameEx(0x9C638, "P2021_TGV_INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_LOW_________", SN_CHECK);
MakeNameEx(0x9C639, "P2022_TGV_INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_HIGH_________", SN_CHECK);
MakeNameEx(0x9C621, "P2088_OCV_SOLENOID_A1_CIRCUIT_OPEN_________", SN_CHECK);
MakeNameEx(0x9C620, "P2089_OCV_SOLENOID_A1_CIRCUIT_SHORT_________", SN_CHECK);
MakeNameEx(0x9C61D, "P2090_OCV_SOLENOID_B1_CIRCUIT_OPEN___", SN_CHECK);
MakeNameEx(0x9C61C, "P2091_OCV_SOLENOID_B1_CIRCUIT_SHORT___", SN_CHECK);
MakeNameEx(0x9C61F, "P2092_OCV_SOLENOID_A2_CIRCUIT_OPEN_________", SN_CHECK);
MakeNameEx(0x9C61E, "P2093_OCV_SOLENOID_A2_CIRCUIT_SHORT_________", SN_CHECK);
MakeNameEx(0x9C61B, "P2094_OCV_SOLENOID_B2_CIRCUIT_OPEN___", SN_CHECK);
MakeNameEx(0x9C61A, "P2095_OCV_SOLENOID_B2_CIRCUIT_SHORT___", SN_CHECK);
MakeNameEx(0x9C60B, "P2096_POST_CATALYST_TOO_LEAN_B1_________", SN_CHECK);
MakeNameEx(0x9C614, "P2097_POST_CATALYST_TOO_RICH_B1_________", SN_CHECK);
MakeNameEx(0x9C60A, "P2101_THROTTLE_ACTUATOR_CIRCUIT_RANGEPERF_________", SN_CHECK);
MakeNameEx(0x9C608, "P2102_THROTTLE_ACTUATOR_CIRCUIT_LOW_________", SN_CHECK);
MakeNameEx(0x9C609, "P2103_THROTTLE_ACTUATOR_CIRCUIT_HIGH_________", SN_CHECK);
MakeNameEx(0x9C604, "P2109_TPS_A_MINIMUM_STOP_PERF_________", SN_CHECK);
MakeNameEx(0x9C611, "P2122_TPS_D_CIRCUIT_LOW_INPUT_________", SN_CHECK);
MakeNameEx(0x9C612, "P2123_TPS_D_CIRCUIT_HIGH_INPUT_________", SN_CHECK);
MakeNameEx(0x9C60F, "P2127_TPS_E_CIRCUIT_LOW_INPUT_________", SN_CHECK);
MakeNameEx(0x9C610, "P2128_TPS_E_CIRCUIT_HIGH_INPUT_________", SN_CHECK);
MakeNameEx(0x9C613, "P2135_TPS_AB_VOLTAGE_________", SN_CHECK);
MakeNameEx(0x9C60E, "P2138_TPS_DE_VOLTAGE_________", SN_CHECK);
MakeNameEx(0x9C67E, "P219A_BANK_1_AFR_IMBALANCE____", SN_CHECK);
MakeNameEx(0x9C66C, "P2401_EVAP_LEAK_DETECTION_PUMP_CONTROL_CIRCUIT_LOW____", SN_CHECK);
MakeNameEx(0x9C680, "P2402_EVAP_LEAK_DETECTION_PUMP_CONTROL_CIRCUIT_HIGH____", SN_CHECK);
MakeNameEx(0x9C66B, "P2419_EVAP_SWITCHING_VALVE_LOW_________", SN_CHECK);
MakeNameEx(0x9C66A, "P2420_EVAP_SWITCHING_VALVE_HIGH_________", SN_CHECK);
MakeNameEx(0x9C641, "P2431_SECONDARY_AIR_PUMP_CIRCUIT_RANGEPERF_________", SN_CHECK);
MakeNameEx(0x9C643, "P2432_SECONDARY_AIR_PUMP_CIRCUIT_LOW_________", SN_CHECK);
MakeNameEx(0x9C642, "P2433_SECONDARY_AIR_PUMP_CIRCUIT_HIGH_________", SN_CHECK);
MakeNameEx(0x9C650, "P2440_SECONDARY_AIR_PUMP_VALVE_1_STUCK_OPEN_________", SN_CHECK);
MakeNameEx(0x9C64F, "P2441_SECONDARY_AIR_PUMP_VALVE_1_STUCK_CLOSED_________", SN_CHECK);
MakeNameEx(0x9C64E, "P2442_SECONDARY_AIR_PUMP_VALVE_2_STUCK_OPEN_________", SN_CHECK);
MakeNameEx(0x9C64D, "P2443_SECONDARY_AIR_PUMP_2_STUCK_CLOSED_________", SN_CHECK);
MakeNameEx(0x9C63E, "P2444_SECONDARY_AIR_PUMP_1_STUCK_ON_B1_________", SN_CHECK);
MakeNameEx(0x9C665, "U0073_CAN_COMMUNICATION_BUS_A_OFF____", SN_CHECK);
MakeNameEx(0x9C662, "U0101_CAN_LOST_COMMUNICATION_WITH_TCM____", SN_CHECK);
MakeNameEx(0x9C664, "U0122_CAN_LOST_COMMUNICATION_WITH_VDC____", SN_CHECK);
MakeNameEx(0x9C660, "U0140_CAN_LOST_COMMUNICATION_WITH_BIU____", SN_CHECK);
MakeNameEx(0x9C661, "U0402_CAN_INVALID_DATA_RECEIVED_FROM_TCM____", SN_CHECK);
MakeNameEx(0x9C663, "U0416_CAN_INVALID_DATA_RECEIVED_FROM_VDC____", SN_CHECK);
MakeNameEx(0x9C65F, "U0422_CAN_INVALID_DATA_RECEIVED_FROM_BIU____", SN_CHECK);
MakeNameEx(0xC1038, "Target_Boost___________", SN_CHECK);
referenceAddress = DfirstB(0xC1038);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Boost___________", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost___________\n");
}

MakeNameEx(0xC0FC8, "Target_Boost_X_AXIS_________", SN_CHECK);
MakeNameEx(0xC1000, "Target_Boost_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xC0B4C, "Target_Boost_Compensation_ECT__________", SN_CHECK);
referenceAddress = DfirstB(0xC0B4C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_ECT__________", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_ECT__________\n");
}

MakeNameEx(0xC0A6C, "Target_Boost_Compensation_ECT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xC0A64, "Target_Boost_Compensation_1st_Gear__________", SN_CHECK);
MakeNameEx(0xC0A60, "Target_Boost_Compensation_1st_Gear_Speed_Disable__________", SN_CHECK);
MakeNameEx(0xC0CA8, "Target_Boost_Compensation_IAT___________", SN_CHECK);
referenceAddress = DfirstB(0xC0CA8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_IAT___________", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_IAT___________\n");
}

MakeNameEx(0xC0C7C, "Target_Boost_Compensation_IAT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xC0D44, "Target_Boost_Compensation_Atm_Pressure___________", SN_CHECK);
referenceAddress = DfirstB(0xC0D44);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Boost_Compensation_Atm_Pressure___________", SN_CHECK);
}
else
{
    Message("No reference to Target_Boost_Compensation_Atm_Pressure___________\n");
}

MakeNameEx(0xC0D14, "Target_Boost_Compensation_Atm_Pressure_X_AXIS_________", SN_CHECK);
MakeNameEx(0xC0D2C, "Target_Boost_Compensation_Atm_Pressure_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD31FC, "Boost_Limit_Fuel_Cut___________", SN_CHECK);
referenceAddress = DfirstB(0xD31FC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Boost_Limit_Fuel_Cut___________", SN_CHECK);
}
else
{
    Message("No reference to Boost_Limit_Fuel_Cut___________\n");
}

MakeNameEx(0xD31CC, "Boost_Limit_Fuel_Cut_X_AXIS_________", SN_CHECK);
MakeNameEx(0xD31E4, "Boost_Limit_Fuel_Cut_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xC0A54, "Boost_Control_Disable_IAM__________", SN_CHECK);
MakeNameEx(0xC0A50, "Boost_Control_Disable_Fine_Correction__________", SN_CHECK);
MakeNameEx(0xC0A05, "Boost_Control_Disable_Delay_Fine_Correction__________", SN_CHECK);
MakeNameEx(0xC0EEC, "Initial_Wastegate_Duty___________", SN_CHECK);
referenceAddress = DfirstB(0xC0EEC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Initial_Wastegate_Duty___________", SN_CHECK);
}
else
{
    Message("No reference to Initial_Wastegate_Duty___________\n");
}

MakeNameEx(0xC0E98, "Initial_Wastegate_Duty_X_AXIS_________", SN_CHECK);
MakeNameEx(0xC0EC4, "Initial_Wastegate_Duty_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xC0DBC, "Max_Wastegate_Duty___________", SN_CHECK);
referenceAddress = DfirstB(0xC0DBC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Max_Wastegate_Duty___________", SN_CHECK);
}
else
{
    Message("No reference to Max_Wastegate_Duty___________\n");
}

MakeNameEx(0xC0D68, "Max_Wastegate_Duty_X_AXIS_________", SN_CHECK);
MakeNameEx(0xC0D94, "Max_Wastegate_Duty_Y_AXIS_________", SN_CHECK);
MakeNameEx(0x13F3C, "Max_Wastegate_Duty_Limit_PostCompensation__________", SN_CHECK);
MakeNameEx(0xC0AEC, "InitialMax_Wastegate_Duty_Compensation_IAT__________", SN_CHECK);
referenceAddress = DfirstB(0xC0AEC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_IAT__________", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_IAT__________\n");
}

MakeNameEx(0xC0AAC, "InitialMax_Wastegate_Duty_Compensation_IAT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xC0B0C, "InitialMax_Wastegate_Duty_Compensation_ECT__________", SN_CHECK);
referenceAddress = DfirstB(0xC0B0C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_ECT__________", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_ECT__________\n");
}

MakeNameEx(0xC0A6C, "InitialMax_Wastegate_Duty_Compensation_ECT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xC0CFC, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure__________", SN_CHECK);
referenceAddress = DfirstB(0xC0CFC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_InitialMax_Wastegate_Duty_Compensation_Atm_Pressure__________", SN_CHECK);
}
else
{
    Message("No reference to InitialMax_Wastegate_Duty_Compensation_Atm_Pressure__________\n");
}

MakeNameEx(0xC0CD4, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_X_AXIS_________", SN_CHECK);
MakeNameEx(0xC0CEC, "InitialMax_Wastegate_Duty_Compensation_Atm_Pressure_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xC0B80, "Turbo_Dynamics_Proportional__________", SN_CHECK);
referenceAddress = DfirstB(0xC0B80);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Proportional__________", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Proportional__________\n");
}

MakeNameEx(0xC0B5C, "Turbo_Dynamics_Proportional_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xC0BF0, "Turbo_Dynamics_Integral_Positive__________", SN_CHECK);
referenceAddress = DfirstB(0xC0BF0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Integral_Positive__________", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Integral_Positive__________\n");
}

MakeNameEx(0xC0BCC, "Turbo_Dynamics_Integral_Positive_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xC0BB8, "Turbo_Dynamics_Integral_Negative__________", SN_CHECK);
referenceAddress = DfirstB(0xC0BB8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Turbo_Dynamics_Integral_Negative__________", SN_CHECK);
}
else
{
    Message("No reference to Turbo_Dynamics_Integral_Negative__________\n");
}

MakeNameEx(0xC0B94, "Turbo_Dynamics_Integral_Negative_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xC0B1C, "TD_Proportional_Compensation_IAT__________", SN_CHECK);
referenceAddress = DfirstB(0xC0B1C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Proportional_Compensation_IAT__________", SN_CHECK);
}
else
{
    Message("No reference to TD_Proportional_Compensation_IAT__________\n");
}

MakeNameEx(0xC0AAC, "TD_Proportional_Compensation_IAT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xC0B3C, "TD_Integral_Positive_Compensation_IAT__________", SN_CHECK);
referenceAddress = DfirstB(0xC0B3C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Integral_Positive_Compensation_IAT__________", SN_CHECK);
}
else
{
    Message("No reference to TD_Integral_Positive_Compensation_IAT__________\n");
}

MakeNameEx(0xC0AAC, "TD_Integral_Positive_Compensation_IAT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xC0B2C, "TD_Integral_Negative_Compensation_IAT__________", SN_CHECK);
referenceAddress = DfirstB(0xC0B2C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_TD_Integral_Negative_Compensation_IAT__________", SN_CHECK);
}
else
{
    Message("No reference to TD_Integral_Negative_Compensation_IAT__________\n");
}

MakeNameEx(0xC0AAC, "TD_Integral_Negative_Compensation_IAT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xC0A40, "TD_Activation_Thresholds_RPM__________", SN_CHECK);
MakeNameEx(0xC0A2C, "TD_Activation_Thresholds_Target_Boost___________", SN_CHECK);
MakeNameEx(0xC0A48, "TD_Integral_Cumulative_Range_WGDC_Correction__________", SN_CHECK);
MakeNameEx(0xC0A34, "TD_Integral_Negative_Activation_Boost_Error__________", SN_CHECK);
MakeNameEx(0xC0A38, "TD_Integral_Positive_Activation_Boost_Error__________", SN_CHECK);
MakeNameEx(0xC0A3C, "TD_Integral_Negative_Activation_Wastegate_Duty__________", SN_CHECK);
MakeNameEx(0xD9B50, "Manifold_Pressure_Sensor_Scaling___________", SN_CHECK);
MakeNameEx(0xD9AB2, "Manifold_Pressure_Sensor_Limits_CEL__________", SN_CHECK);
MakeNameEx(0xD9A66, "Manifold_Pressure_Sensor_CEL_Delays__________", SN_CHECK);
MakeNameEx(0xD0E78, "Primary_Open_Loop_Fueling_KCA_Additive_B_Low____", SN_CHECK);
referenceAddress = DfirstB(0xD0E78);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_KCA_Additive_B_Low____", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_KCA_Additive_B_Low____\n");
}

MakeNameEx(0xD0DE4, "Primary_Open_Loop_Fueling_KCA_Additive_B_Low_X_AXIS____", SN_CHECK);
MakeNameEx(0xD0E30, "Primary_Open_Loop_Fueling_KCA_Additive_B_Low_Y_AXIS____", SN_CHECK);
MakeNameEx(0xD0A8C, "Primary_Open_Loop_Fueling_KCA_Additive_B_High____", SN_CHECK);
referenceAddress = DfirstB(0xD0A8C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_KCA_Additive_B_High____", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_KCA_Additive_B_High____\n");
}

MakeNameEx(0xD09F8, "Primary_Open_Loop_Fueling_KCA_Additive_B_High_X_AXIS____", SN_CHECK);
MakeNameEx(0xD0A44, "Primary_Open_Loop_Fueling_KCA_Additive_B_High_Y_AXIS____", SN_CHECK);
MakeNameEx(0xD0C78, "Primary_Open_Loop_Fueling_Failsafe__________", SN_CHECK);
referenceAddress = DfirstB(0xD0C78);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Failsafe__________", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Failsafe__________\n");
}

MakeNameEx(0xD0BE4, "Primary_Open_Loop_Fueling_Failsafe_X_AXIS_________", SN_CHECK);
MakeNameEx(0xD0C30, "Primary_Open_Loop_Fueling_Failsafe_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD1064, "Primary_Open_Loop_Fueling_KCA_Alternate_Mode____", SN_CHECK);
referenceAddress = DfirstB(0xD1064);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_KCA_Alternate_Mode____", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_KCA_Alternate_Mode____\n");
}

MakeNameEx(0xD0FD0, "Primary_Open_Loop_Fueling_KCA_Alternate_Mode_X_AXIS____", SN_CHECK);
MakeNameEx(0xD101C, "Primary_Open_Loop_Fueling_KCA_Alternate_Mode_Y_AXIS____", SN_CHECK);
MakeNameEx(0xD1250, "Primary_Open_Loop_Fueling_Failsafe_KCA_Alternate_Mode____", SN_CHECK);
referenceAddress = DfirstB(0xD1250);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Failsafe_KCA_Alternate_Mode____", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Failsafe_KCA_Alternate_Mode____\n");
}

MakeNameEx(0xD11BC, "Primary_Open_Loop_Fueling_Failsafe_KCA_Alternate_Mode_X_AXIS____", SN_CHECK);
MakeNameEx(0xD1208, "Primary_Open_Loop_Fueling_Failsafe_KCA_Alternate_Mode_Y_AXIS____", SN_CHECK);
MakeNameEx(0xCCDC8, "Primary_Open_Loop_Fuel_Map_Switch_IAM__________", SN_CHECK);
MakeNameEx(0xCCDCC, "Minimum_Active_Primary_Open_Loop_Enrichment__________", SN_CHECK);
MakeNameEx(0xCD9BC, "Minimum_Primary_Open_Loop_Enrichment_Throttle__________", SN_CHECK);
referenceAddress = DfirstB(0xCD9BC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Throttle__________", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Throttle__________\n");
}

MakeNameEx(0xCD9A4, "Minimum_Primary_Open_Loop_Enrichment_Throttle_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCD9E0, "Minimum_Primary_Open_Loop_Enrichment_Accelerator__________", SN_CHECK);
referenceAddress = DfirstB(0xCD9E0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Minimum_Primary_Open_Loop_Enrichment_Accelerator__________", SN_CHECK);
}
else
{
    Message("No reference to Minimum_Primary_Open_Loop_Enrichment_Accelerator__________\n");
}

MakeNameEx(0xCD9C4, "Minimum_Primary_Open_Loop_Enrichment_Accelerator_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCF2F4, "Primary_Open_Loop_Fueling_Compensation_ECT__________", SN_CHECK);
referenceAddress = DfirstB(0xCF2F4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_ECT__________", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_ECT__________\n");
}

MakeNameEx(0xCD280, "Primary_Open_Loop_Fueling_Compensation_ECT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCD94C, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation___________", SN_CHECK);
referenceAddress = DfirstB(0xCD94C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Primary_Open_Loop_Fueling_Compensation_Timing_Compensation___________", SN_CHECK);
}
else
{
    Message("No reference to Primary_Open_Loop_Fueling_Compensation_Timing_Compensation___________\n");
}

MakeNameEx(0xCD934, "Primary_Open_Loop_Fueling_Compensation_Timing_Compensation_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD9DEC, "Front_Oxygen_Sensor_Scaling__________", SN_CHECK);
referenceAddress = DfirstB(0xD9DEC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Scaling__________", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Scaling__________\n");
}

MakeNameEx(0xD9DB8, "Front_Oxygen_Sensor_Scaling_Y_AXIS_________", SN_CHECK);
MakeNameEx(0x2208C, "Front_Oxygen_Sensor_Rich_Limit__________", SN_CHECK);
MakeNameEx(0xC3300, "Front_Oxygen_Sensor_Compensation_Atm_Pressure__________", SN_CHECK);
referenceAddress = DfirstB(0xC3300);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Front_Oxygen_Sensor_Compensation_Atm_Pressure__________", SN_CHECK);
}
else
{
    Message("No reference to Front_Oxygen_Sensor_Compensation_Atm_Pressure__________\n");
}

MakeNameEx(0xC32F0, "Front_Oxygen_Sensor_Compensation_Atm_Pressure_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD21D4, "CL_Fueling_Target_Compensation_A_Load__________", SN_CHECK);
referenceAddress = DfirstB(0xD21D4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_A_Load__________", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_A_Load__________\n");
}

MakeNameEx(0xD2178, "CL_Fueling_Target_Compensation_A_Load_X_AXIS_________", SN_CHECK);
MakeNameEx(0xD21A8, "CL_Fueling_Target_Compensation_A_Load_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD24AC, "CL_Fueling_Target_Compensation_B_Load__________", SN_CHECK);
referenceAddress = DfirstB(0xD24AC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_B_Load__________", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_B_Load__________\n");
}

MakeNameEx(0xD2440, "CL_Fueling_Target_Compensation_B_Load_X_AXIS_________", SN_CHECK);
MakeNameEx(0xD2478, "CL_Fueling_Target_Compensation_B_Load_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD20AC, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT__________", SN_CHECK);
referenceAddress = DfirstB(0xD20AC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Imm_Cruise_ECT__________", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Imm_Cruise_ECT__________\n");
}

MakeNameEx(0xCD280, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_X_AXIS_________", SN_CHECK);
MakeNameEx(0xD20A0, "CL_Fueling_Target_Compensation_Imm_Cruise_ECT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD2118, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT__________", SN_CHECK);
referenceAddress = DfirstB(0xD2118);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_CL_Fueling_Target_Compensation_Imm_NonCruise_ECT__________", SN_CHECK);
}
else
{
    Message("No reference to CL_Fueling_Target_Compensation_Imm_NonCruise_ECT__________\n");
}

MakeNameEx(0xCD280, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_X_AXIS_________", SN_CHECK);
MakeNameEx(0xD210C, "CL_Fueling_Target_Compensation_Imm_NonCruise_ECT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCCBF8, "CL_Fueling_Target_Compensation_ECT_Disable_____", SN_CHECK);
MakeNameEx(0xCC8CE, "CL_to_OL_Delay___________", SN_CHECK);
MakeNameEx(0xCC8C8, "CL_to_OL_DelaySwitch_SIDRIVE_Intelligent_____", SN_CHECK);
MakeNameEx(0xCD994, "CL_to_OL_Transition_with_Delay_Throttle__________", SN_CHECK);
referenceAddress = DfirstB(0xCD994);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Throttle__________", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Throttle__________\n");
}

MakeNameEx(0xCD954, "CL_to_OL_Transition_with_Delay_Throttle_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCCDD4, "CL_to_OL_Transition_with_Delay_Throttle_Hysteresis__________", SN_CHECK);
MakeNameEx(0xCF220, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width__________", SN_CHECK);
referenceAddress = DfirstB(0xCF220);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_with_Delay_Base_Pulse_Width__________", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_with_Delay_Base_Pulse_Width__________\n");
}

MakeNameEx(0xCF1E0, "CL_to_OL_Transition_with_Delay_Base_Pulse_Width_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCCDD0, "CL_to_OL_Transition_with_Delay_BPW_Hysteresis__________", SN_CHECK);
MakeNameEx(0xCF268, "CL_to_OL_Transition_Counter_Step_Value_MAF__________", SN_CHECK);
referenceAddress = DfirstB(0xCF268);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_CL_to_OL_Transition_Counter_Step_Value_MAF__________", SN_CHECK);
}
else
{
    Message("No reference to CL_to_OL_Transition_Counter_Step_Value_MAF__________\n");
}

MakeNameEx(0xCF240, "CL_to_OL_Transition_Counter_Step_Value_MAF_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCCE34, "CL_Delay_Maximum_Throttle__________", SN_CHECK);
MakeNameEx(0xCCE50, "CL_Delay_Maximum_Vehicle_Speed__________", SN_CHECK);
MakeNameEx(0xCCDD8, "CL_Delay_Minimum_ECT__________", SN_CHECK);
MakeNameEx(0xCCE60, "CL_Delay_Maximum_Engine_Load__________", SN_CHECK);
MakeNameEx(0xCC8C6, "CL_Delay_Engine_Load_Counter_Threshold__________", SN_CHECK);
MakeNameEx(0xCCDDC, "CL_Delay_Maximum_Engine_Speed_Per_Gear__________", SN_CHECK);
MakeNameEx(0xCCE04, "CL_Delay_Maximum_Engine_Speed_Neutral__________", SN_CHECK);
MakeNameEx(0xD1C6C, "Injector_Latency___________", SN_CHECK);
referenceAddress = DfirstB(0xD1C6C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Injector_Latency___________", SN_CHECK);
}
else
{
    Message("No reference to Injector_Latency___________\n");
}

MakeNameEx(0xD1C4C, "Injector_Latency_X_AXIS_________", SN_CHECK);
MakeNameEx(0xD1C60, "Injector_Latency_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCCA68, "Injector_Flow_Scaling__________", SN_CHECK);
MakeNameEx(0xD1490, "Per_Injector_Pulse_Width_Compensation_A__________", SN_CHECK);
referenceAddress = DfirstB(0xD1490);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_A__________", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_A__________\n");
}

MakeNameEx(0xD1410, "Per_Injector_Pulse_Width_Compensation_A_X_AXIS_________", SN_CHECK);
MakeNameEx(0xD1450, "Per_Injector_Pulse_Width_Compensation_A_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD1610, "Per_Injector_Pulse_Width_Compensation_B__________", SN_CHECK);
referenceAddress = DfirstB(0xD1610);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_B__________", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_B__________\n");
}

MakeNameEx(0xD1590, "Per_Injector_Pulse_Width_Compensation_B_X_AXIS_________", SN_CHECK);
MakeNameEx(0xD15D0, "Per_Injector_Pulse_Width_Compensation_B_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD1790, "Per_Injector_Pulse_Width_Compensation_C__________", SN_CHECK);
referenceAddress = DfirstB(0xD1790);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_C__________", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_C__________\n");
}

MakeNameEx(0xD1710, "Per_Injector_Pulse_Width_Compensation_C_X_AXIS_________", SN_CHECK);
MakeNameEx(0xD1750, "Per_Injector_Pulse_Width_Compensation_C_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD1910, "Per_Injector_Pulse_Width_Compensation_D__________", SN_CHECK);
referenceAddress = DfirstB(0xD1910);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Per_Injector_Pulse_Width_Compensation_D__________", SN_CHECK);
}
else
{
    Message("No reference to Per_Injector_Pulse_Width_Compensation_D__________\n");
}

MakeNameEx(0xD1890, "Per_Injector_Pulse_Width_Compensation_D_X_AXIS_________", SN_CHECK);
MakeNameEx(0xD18D0, "Per_Injector_Pulse_Width_Compensation_D_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCDF06, "Cranking_Fuel_Injector_Pulse_Width_A_ECT__________", SN_CHECK);
referenceAddress = DfirstB(0xCDF06);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_A_ECT__________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_A_ECT__________\n");
}

MakeNameEx(0xCD280, "Cranking_Fuel_Injector_Pulse_Width_A_ECT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCDF26, "Cranking_Fuel_Injector_Pulse_Width_B_ECT__________", SN_CHECK);
referenceAddress = DfirstB(0xCDF26);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_B_ECT__________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_B_ECT__________\n");
}

MakeNameEx(0xCD280, "Cranking_Fuel_Injector_Pulse_Width_B_ECT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCDF46, "Cranking_Fuel_Injector_Pulse_Width_C_ECT__________", SN_CHECK);
referenceAddress = DfirstB(0xCDF46);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_C_ECT__________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_C_ECT__________\n");
}

MakeNameEx(0xCD280, "Cranking_Fuel_Injector_Pulse_Width_C_ECT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCDF66, "Cranking_Fuel_Injector_Pulse_Width_D_ECT__________", SN_CHECK);
referenceAddress = DfirstB(0xCDF66);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_D_ECT__________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_D_ECT__________\n");
}

MakeNameEx(0xCD280, "Cranking_Fuel_Injector_Pulse_Width_D_ECT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCDF86, "Cranking_Fuel_Injector_Pulse_Width_E_ECT__________", SN_CHECK);
referenceAddress = DfirstB(0xCDF86);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_E_ECT__________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_E_ECT__________\n");
}

MakeNameEx(0xCD280, "Cranking_Fuel_Injector_Pulse_Width_E_ECT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCDFA6, "Cranking_Fuel_Injector_Pulse_Width_F_ECT__________", SN_CHECK);
referenceAddress = DfirstB(0xCDFA6);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_Injector_Pulse_Width_F_ECT__________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_Injector_Pulse_Width_F_ECT__________\n");
}

MakeNameEx(0xCD280, "Cranking_Fuel_Injector_Pulse_Width_F_ECT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD042C, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM__________", SN_CHECK);
referenceAddress = DfirstB(0xD042C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM__________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM__________\n");
}

MakeNameEx(0xD03FC, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_X_AXIS_________", SN_CHECK);
MakeNameEx(0xD0410, "Cranking_Fuel_IPW_Compensation_Imm_Cruise_RPM_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD03D8, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM__________", SN_CHECK);
referenceAddress = DfirstB(0xD03D8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM__________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM__________\n");
}

MakeNameEx(0xD03A8, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_X_AXIS_________", SN_CHECK);
MakeNameEx(0xD03BC, "Cranking_Fuel_IPW_Compensation_Imm_NonCruise_RPM_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCD484, "Cranking_Fuel_IPW_Compensation_MAP__________", SN_CHECK);
referenceAddress = DfirstB(0xCD484);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_MAP__________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_MAP__________\n");
}

MakeNameEx(0xCD45C, "Cranking_Fuel_IPW_Compensation_MAP_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCD4B8, "Cranking_Fuel_IPW_Compensation_Accelerator__________", SN_CHECK);
referenceAddress = DfirstB(0xCD4B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_Accelerator__________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_Accelerator__________\n");
}

MakeNameEx(0xCD490, "Cranking_Fuel_IPW_Compensation_Accelerator_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCD4D8, "Cranking_Fuel_IPW_Compensation_IAT__________", SN_CHECK);
referenceAddress = DfirstB(0xCD4D8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Cranking_Fuel_IPW_Compensation_IAT__________", SN_CHECK);
}
else
{
    Message("No reference to Cranking_Fuel_IPW_Compensation_IAT__________\n");
}

MakeNameEx(0xCD4C4, "Cranking_Fuel_IPW_Compensation_IAT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCFA78, "Throttle_Tipin_Enrichment_A__________", SN_CHECK);
referenceAddress = DfirstB(0xCFA78);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment_A__________", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment_A__________\n");
}

MakeNameEx(0xCFA30, "Throttle_Tipin_Enrichment_A_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCFAE4, "Throttle_Tipin_Enrichment_B__________", SN_CHECK);
referenceAddress = DfirstB(0xCFAE4);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Throttle_Tipin_Enrichment_B__________", SN_CHECK);
}
else
{
    Message("No reference to Throttle_Tipin_Enrichment_B__________\n");
}

MakeNameEx(0xCFA9C, "Throttle_Tipin_Enrichment_B_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCD110, "Minimum_Tipin_Enrichment_Activation__________", SN_CHECK);
MakeNameEx(0xCD10C, "Minimum_Tipin_Enrichment_Activation_Throttle__________", SN_CHECK);
MakeNameEx(0xCDD6C, "Tipin_Enrichment_Compensation_Boost_Error__________", SN_CHECK);
referenceAddress = DfirstB(0xCDD6C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_Boost_Error__________", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_Boost_Error__________\n");
}

MakeNameEx(0xCDD48, "Tipin_Enrichment_Compensation_Boost_Error_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCDD38, "Tipin_Enrichment_Compensation_RPM__________", SN_CHECK);
referenceAddress = DfirstB(0xCDD38);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_RPM__________", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_RPM__________\n");
}

MakeNameEx(0xCDCF8, "Tipin_Enrichment_Compensation_RPM_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCDD75, "Tipin_Enrichment_Compensation_A_ECT__________", SN_CHECK);
referenceAddress = DfirstB(0xCDD75);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_A_ECT__________", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_A_ECT__________\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Compensation_A_ECT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCFB08, "Tipin_Enrichment_Compensation_B_ECT__________", SN_CHECK);
referenceAddress = DfirstB(0xCFB08);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_B_ECT__________", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_B_ECT__________\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Compensation_B_ECT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCFB28, "Tipin_Enrichment_Compensation_C_ECT__________", SN_CHECK);
referenceAddress = DfirstB(0xCFB28);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_C_ECT__________", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_C_ECT__________\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Compensation_C_ECT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCFB68, "Tipin_Enrichment_Compensation_D_ECT__________", SN_CHECK);
referenceAddress = DfirstB(0xCFB68);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Compensation_D_ECT__________", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Compensation_D_ECT__________\n");
}

MakeNameEx(0xCD2C0, "Tipin_Enrichment_Compensation_D_ECT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCD114, "Tipin_Enrichment_Compensation_D_ECT_Activation__________", SN_CHECK);
MakeNameEx(0xCDD85, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT__________", SN_CHECK);
referenceAddress = DfirstB(0xCDD85);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT__________", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT__________\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_A_ECT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCDD95, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT__________", SN_CHECK);
referenceAddress = DfirstB(0xCDD95);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT__________", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT__________\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Disable_Applied_Counter_Threshold_B_ECT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCC874, "Tipin_Enrichment_Applied_Counter_Reset__________", SN_CHECK);
MakeNameEx(0xCFB88, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT__________", SN_CHECK);
referenceAddress = DfirstB(0xCFB88);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT__________", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT__________\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_A_ECT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCFBA8, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT__________", SN_CHECK);
referenceAddress = DfirstB(0xCFBA8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT__________", SN_CHECK);
}
else
{
    Message("No reference to Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT__________\n");
}

MakeNameEx(0xCD280, "Tipin_Enrichment_Disable_Throttle_Cumulative_Threshold_B_ECT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCC875, "Tipin_Throttle_Cumulative_Reset__________", SN_CHECK);
MakeNameEx(0xD0684, "Min_Primary_Base_Enrichment_1_Cruise__________", SN_CHECK);
referenceAddress = DfirstB(0xD0684);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_Cruise__________", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_Cruise__________\n");
}

MakeNameEx(0xCD280, "Min_Primary_Base_Enrichment_1_Cruise_X_AXIS_________", SN_CHECK);
MakeNameEx(0xD0660, "Min_Primary_Base_Enrichment_1_Cruise_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD05E0, "Min_Primary_Base_Enrichment_1_NonCruise__________", SN_CHECK);
referenceAddress = DfirstB(0xD05E0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonCruise__________", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonCruise__________\n");
}

MakeNameEx(0xCD280, "Min_Primary_Base_Enrichment_1_NonCruise_X_AXIS_________", SN_CHECK);
MakeNameEx(0xD05C0, "Min_Primary_Base_Enrichment_1_NonCruise_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCD53D, "Min_Primary_Base_Enrichment_1_NonPrimary_OL___________", SN_CHECK);
referenceAddress = DfirstB(0xCD53D);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Min_Primary_Base_Enrichment_1_NonPrimary_OL___________", SN_CHECK);
}
else
{
    Message("No reference to Min_Primary_Base_Enrichment_1_NonPrimary_OL___________\n");
}

MakeNameEx(0xCD280, "Min_Primary_Base_Enrichment_1_NonPrimary_OL_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCCCC0, "AF_Learning_1_Limits__________", SN_CHECK);
MakeNameEx(0xCCCD0, "AF_Learning_1_Airflow_Ranges__________", SN_CHECK);
MakeNameEx(0xC2D18, "MAF_Limit_Maximum__________", SN_CHECK);
MakeNameEx(0xD9CE0, "MAF_Sensor_Scaling__________", SN_CHECK);
referenceAddress = DfirstB(0xD9CE0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_MAF_Sensor_Scaling__________", SN_CHECK);
}
else
{
    Message("No reference to MAF_Sensor_Scaling__________\n");
}

MakeNameEx(0xD9C08, "MAF_Sensor_Scaling_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xC3768, "MAF_Compensation_IAT__________", SN_CHECK);
referenceAddress = DfirstB(0xC3768);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_MAF_Compensation_IAT__________", SN_CHECK);
}
else
{
    Message("No reference to MAF_Compensation_IAT__________\n");
}

MakeNameEx(0xC3734, "MAF_Compensation_IAT_X_AXIS_________", SN_CHECK);
MakeNameEx(0xC3748, "MAF_Compensation_IAT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0x205E8, "Engine_Load_Limit_A_Maximum__________", SN_CHECK);
MakeNameEx(0xC3200, "Engine_Load_Limit_B_Maximum_RPM__________", SN_CHECK);
referenceAddress = DfirstB(0xC3200);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Limit_B_Maximum_RPM__________", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Limit_B_Maximum_RPM__________\n");
}

MakeNameEx(0xC31F8, "Engine_Load_Limit_B_Maximum_RPM_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xC3818, "Engine_Load_Compensation_Cruise_MP__________", SN_CHECK);
referenceAddress = DfirstB(0xC3818);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Compensation_Cruise_MP__________", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Compensation_Cruise_MP__________\n");
}

MakeNameEx(0xC3790, "Engine_Load_Compensation_Cruise_MP_X_AXIS_________", SN_CHECK);
MakeNameEx(0xC37BC, "Engine_Load_Compensation_Cruise_MP_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xC3998, "Engine_Load_Compensation_NonCruise_MP__________", SN_CHECK);
referenceAddress = DfirstB(0xC3998);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Engine_Load_Compensation_NonCruise_MP__________", SN_CHECK);
}
else
{
    Message("No reference to Engine_Load_Compensation_NonCruise_MP__________\n");
}

MakeNameEx(0xC3918, "Engine_Load_Compensation_NonCruise_MP_X_AXIS_________", SN_CHECK);
MakeNameEx(0xC3944, "Engine_Load_Compensation_NonCruise_MP_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD5240, "Base_Timing_Primary_Cruise__________", SN_CHECK);
referenceAddress = DfirstB(0xD5240);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Primary_Cruise__________", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Primary_Cruise__________\n");
}

MakeNameEx(0xD51AC, "Base_Timing_Primary_Cruise_X_AXIS_________", SN_CHECK);
MakeNameEx(0xD51F8, "Base_Timing_Primary_Cruise_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD5618, "Base_Timing_Reference_Cruise_AVCS_related__________", SN_CHECK);
referenceAddress = DfirstB(0xD5618);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Reference_Cruise_AVCS_related__________", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Reference_Cruise_AVCS_related__________\n");
}

MakeNameEx(0xD5584, "Base_Timing_Reference_Cruise_AVCS_related_X_AXIS_________", SN_CHECK);
MakeNameEx(0xD55D0, "Base_Timing_Reference_Cruise_AVCS_related_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD542C, "Base_Timing_Primary_NonCruise__________", SN_CHECK);
referenceAddress = DfirstB(0xD542C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Primary_NonCruise__________", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Primary_NonCruise__________\n");
}

MakeNameEx(0xD5398, "Base_Timing_Primary_NonCruise_X_AXIS_________", SN_CHECK);
MakeNameEx(0xD53E4, "Base_Timing_Primary_NonCruise_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD5804, "Base_Timing_Reference_NonCruise_AVCS_related__________", SN_CHECK);
referenceAddress = DfirstB(0xD5804);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Reference_NonCruise_AVCS_related__________", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Reference_NonCruise_AVCS_related__________\n");
}

MakeNameEx(0xD5770, "Base_Timing_Reference_NonCruise_AVCS_related_X_AXIS_________", SN_CHECK);
MakeNameEx(0xD57BC, "Base_Timing_Reference_NonCruise_AVCS_related_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD3DEA, "Base_Timing_Idle_A_InGear__________", SN_CHECK);
referenceAddress = DfirstB(0xD3DEA);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_A_InGear__________", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_A_InGear__________\n");
}

MakeNameEx(0xD3BD0, "Base_Timing_Idle_A_InGear_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD3DFA, "Base_Timing_Idle_B_InGear__________", SN_CHECK);
referenceAddress = DfirstB(0xD3DFA);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_B_InGear__________", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_B_InGear__________\n");
}

MakeNameEx(0xD3BD0, "Base_Timing_Idle_B_InGear_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD3E0A, "Base_Timing_Idle_A_Neutral__________", SN_CHECK);
referenceAddress = DfirstB(0xD3E0A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_A_Neutral__________", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_A_Neutral__________\n");
}

MakeNameEx(0xD3BD0, "Base_Timing_Idle_A_Neutral_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD3E1A, "Base_Timing_Idle_B_Neutral__________", SN_CHECK);
referenceAddress = DfirstB(0xD3E1A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_B_Neutral__________", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_B_Neutral__________\n");
}

MakeNameEx(0xD3BD0, "Base_Timing_Idle_B_Neutral_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD3DE1, "Base_Timing_Idle_Minimum__________", SN_CHECK);
referenceAddress = DfirstB(0xD3DE1);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Base_Timing_Idle_Minimum__________", SN_CHECK);
}
else
{
    Message("No reference to Base_Timing_Idle_Minimum__________\n");
}

MakeNameEx(0xD3C50, "Base_Timing_Idle_Minimum_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD3770, "Base_Timing_Idle_Minimum_Vehicle_Speed_Enable__________", SN_CHECK);
MakeNameEx(0xD616C, "Knock_Correction_Advance_Max_Additive_A_Knock_Conditions_IAM____", SN_CHECK);
referenceAddress = DfirstB(0xD616C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_Additive_A_Knock_Conditions_IAM____", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_Additive_A_Knock_Conditions_IAM____\n");
}

MakeNameEx(0xD60D8, "Knock_Correction_Advance_Max_Additive_A_Knock_Conditions_IAM_X_AXIS____", SN_CHECK);
MakeNameEx(0xD6124, "Knock_Correction_Advance_Max_Additive_A_Knock_Conditions_IAM_Y_AXIS____", SN_CHECK);
MakeNameEx(0xD6730, "Knock_Correction_Advance_Max_Additive_B_Knock_Conditions____", SN_CHECK);
referenceAddress = DfirstB(0xD6730);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_Additive_B_Knock_Conditions____", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_Additive_B_Knock_Conditions____\n");
}

MakeNameEx(0xD669C, "Knock_Correction_Advance_Max_Additive_B_Knock_Conditions_X_AXIS____", SN_CHECK);
MakeNameEx(0xD66E8, "Knock_Correction_Advance_Max_Additive_B_Knock_Conditions_Y_AXIS____", SN_CHECK);
MakeNameEx(0xD6358, "Knock_Correction_Advance_Max_Primary_Cruise_IAM____", SN_CHECK);
referenceAddress = DfirstB(0xD6358);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_Primary_Cruise_IAM____", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_Primary_Cruise_IAM____\n");
}

MakeNameEx(0xD62C4, "Knock_Correction_Advance_Max_Primary_Cruise_IAM_X_AXIS____", SN_CHECK);
MakeNameEx(0xD6310, "Knock_Correction_Advance_Max_Primary_Cruise_IAM_Y_AXIS____", SN_CHECK);
MakeNameEx(0xD6544, "Knock_Correction_Advance_Max_Primary_NonCruise_IAM____", SN_CHECK);
referenceAddress = DfirstB(0xD6544);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Knock_Correction_Advance_Max_Primary_NonCruise_IAM____", SN_CHECK);
}
else
{
    Message("No reference to Knock_Correction_Advance_Max_Primary_NonCruise_IAM____\n");
}

MakeNameEx(0xD64B0, "Knock_Correction_Advance_Max_Primary_NonCruise_IAM_X_AXIS____", SN_CHECK);
MakeNameEx(0xD64FC, "Knock_Correction_Advance_Max_Primary_NonCruise_IAM_Y_AXIS____", SN_CHECK);
MakeNameEx(0xD3637, "Knock_Correction_Advance_Alternate_Mode_____", SN_CHECK);
MakeNameEx(0xD3AD8, "Knock_Correction_Advance_Additive_Range_RPM____", SN_CHECK);
MakeNameEx(0xD3ECC, "Timing_Compensation_A_IAT__________", SN_CHECK);
referenceAddress = DfirstB(0xD3ECC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_A_IAT__________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_A_IAT__________\n");
}

MakeNameEx(0xD3E8C, "Timing_Compensation_A_IAT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD599C, "Timing_Compensation_A_IAT_Activation__________", SN_CHECK);
referenceAddress = DfirstB(0xD599C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_A_IAT_Activation__________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_A_IAT_Activation__________\n");
}

MakeNameEx(0xD595C, "Timing_Compensation_A_IAT_Activation_X_AXIS_________", SN_CHECK);
MakeNameEx(0xD597C, "Timing_Compensation_A_IAT_Activation_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD4474, "Timing_Compensation_B_IAT__________", SN_CHECK);
referenceAddress = DfirstB(0xD4474);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_B_IAT__________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_B_IAT__________\n");
}

MakeNameEx(0xD4434, "Timing_Compensation_B_IAT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD3930, "Timing_Compensation_B_IAT_IAM_Activation__________", SN_CHECK);
MakeNameEx(0xD3914, "Timing_Compensation_B_IAT_Max_Additive__________", SN_CHECK);
MakeNameEx(0xD3E6A, "Timing_Compensation_Imm_Cruise_A_ECT__________", SN_CHECK);
referenceAddress = DfirstB(0xD3E6A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_Cruise_A_ECT__________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_Cruise_A_ECT__________\n");
}

MakeNameEx(0xD3BD0, "Timing_Compensation_Imm_Cruise_A_ECT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD3E7A, "Timing_Compensation_Imm_Cruise_B_ECT__________", SN_CHECK);
referenceAddress = DfirstB(0xD3E7A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_Cruise_B_ECT__________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_Cruise_B_ECT__________\n");
}

MakeNameEx(0xD3BD0, "Timing_Compensation_Imm_Cruise_B_ECT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD3E4A, "Timing_Compensation_Imm_NonCruise_A_ECT__________", SN_CHECK);
referenceAddress = DfirstB(0xD3E4A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_NonCruise_A_ECT__________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_NonCruise_A_ECT__________\n");
}

MakeNameEx(0xD3BD0, "Timing_Compensation_Imm_NonCruise_A_ECT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD3E5A, "Timing_Compensation_Imm_NonCruise_B_ECT__________", SN_CHECK);
referenceAddress = DfirstB(0xD3E5A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Imm_NonCruise_B_ECT__________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Imm_NonCruise_B_ECT__________\n");
}

MakeNameEx(0xD3BD0, "Timing_Compensation_Imm_NonCruise_B_ECT_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD5F00, "Timing_Compensation_Per_Cylinder_A__________", SN_CHECK);
referenceAddress = DfirstB(0xD5F00);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_A__________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_A__________\n");
}

MakeNameEx(0xD5EB8, "Timing_Compensation_Per_Cylinder_A_X_AXIS_________", SN_CHECK);
MakeNameEx(0xD5EF0, "Timing_Compensation_Per_Cylinder_A_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD5F80, "Timing_Compensation_Per_Cylinder_B__________", SN_CHECK);
referenceAddress = DfirstB(0xD5F80);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_B__________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_B__________\n");
}

MakeNameEx(0xD5F38, "Timing_Compensation_Per_Cylinder_B_X_AXIS_________", SN_CHECK);
MakeNameEx(0xD5F70, "Timing_Compensation_Per_Cylinder_B_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD6000, "Timing_Compensation_Per_Cylinder_C__________", SN_CHECK);
referenceAddress = DfirstB(0xD6000);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_C__________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_C__________\n");
}

MakeNameEx(0xD5FB8, "Timing_Compensation_Per_Cylinder_C_X_AXIS_________", SN_CHECK);
MakeNameEx(0xD5FF0, "Timing_Compensation_Per_Cylinder_C_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD6080, "Timing_Compensation_Per_Cylinder_D__________", SN_CHECK);
referenceAddress = DfirstB(0xD6080);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Cylinder_D__________", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Cylinder_D__________\n");
}

MakeNameEx(0xD6038, "Timing_Compensation_Per_Cylinder_D_X_AXIS_________", SN_CHECK);
MakeNameEx(0xD6070, "Timing_Compensation_Per_Cylinder_D_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD39D8, "Timing_Comp_Minimum_Load_Per_Cylinder__________", SN_CHECK);
MakeNameEx(0xD39D4, "Timing_Comp_Maximum_RPM_Per_Cylinder__________", SN_CHECK);
MakeNameEx(0xD39DC, "Timing_Comp_Minimum_Coolant_Temp_Per_Cylinder__________", SN_CHECK);
MakeNameEx(0xD5E0C, "Timing_Compensation_Per_Gear_1st____", SN_CHECK);
referenceAddress = DfirstB(0xD5E0C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Gear_1st____", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Gear_1st____\n");
}

MakeNameEx(0xD5DF0, "Timing_Compensation_Per_Gear_1st_X_AXIS____", SN_CHECK);
MakeNameEx(0xD5E00, "Timing_Compensation_Per_Gear_1st_Y_AXIS____", SN_CHECK);
MakeNameEx(0xD5E34, "Timing_Compensation_Per_Gear_2nd____", SN_CHECK);
referenceAddress = DfirstB(0xD5E34);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Gear_2nd____", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Gear_2nd____\n");
}

MakeNameEx(0xD5E18, "Timing_Compensation_Per_Gear_2nd_X_AXIS____", SN_CHECK);
MakeNameEx(0xD5E28, "Timing_Compensation_Per_Gear_2nd_Y_AXIS____", SN_CHECK);
MakeNameEx(0xD5E5C, "Timing_Compensation_Per_Gear_3rd____", SN_CHECK);
referenceAddress = DfirstB(0xD5E5C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Gear_3rd____", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Gear_3rd____\n");
}

MakeNameEx(0xD5E40, "Timing_Compensation_Per_Gear_3rd_X_AXIS____", SN_CHECK);
MakeNameEx(0xD5E50, "Timing_Compensation_Per_Gear_3rd_Y_AXIS____", SN_CHECK);
MakeNameEx(0xD5E84, "Timing_Compensation_Per_Gear_4th____", SN_CHECK);
referenceAddress = DfirstB(0xD5E84);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Gear_4th____", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Gear_4th____\n");
}

MakeNameEx(0xD5E68, "Timing_Compensation_Per_Gear_4th_X_AXIS____", SN_CHECK);
MakeNameEx(0xD5E78, "Timing_Compensation_Per_Gear_4th_Y_AXIS____", SN_CHECK);
MakeNameEx(0xD5EAC, "Timing_Compensation_Per_Gear_5th____", SN_CHECK);
referenceAddress = DfirstB(0xD5EAC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Timing_Compensation_Per_Gear_5th____", SN_CHECK);
}
else
{
    Message("No reference to Timing_Compensation_Per_Gear_5th____\n");
}

MakeNameEx(0xD5E90, "Timing_Compensation_Per_Gear_5th_X_AXIS____", SN_CHECK);
MakeNameEx(0xD5EA0, "Timing_Compensation_Per_Gear_5th_Y_AXIS____", SN_CHECK);
MakeNameEx(0xD3974, "Timing_Compensation_Per_Gear_Activation_RPM____", SN_CHECK);
MakeNameEx(0xD397C, "Timing_Compensation_Per_Gear_Activation_Load____", SN_CHECK);
MakeNameEx(0xD39E8, "Feedback_Correction_Range_RPM__________", SN_CHECK);
MakeNameEx(0xD39E0, "Feedback_Correction_Minimum_Load__________", SN_CHECK);
MakeNameEx(0xD3A08, "Feedback_Correction_Retard_Value__________", SN_CHECK);
MakeNameEx(0xD3A04, "Feedback_Correction_Retard_Limit__________", SN_CHECK);
MakeNameEx(0xD3A0C, "Feedback_Correction_Negative_Advance_Value__________", SN_CHECK);
MakeNameEx(0xD3672, "Feedback_Correction_Negative_Advance_Delay__________", SN_CHECK);
MakeNameEx(0xD3A14, "Extended_Feedback_Correction_High_RPM_Compensation__________", SN_CHECK);
MakeNameEx(0xD3BB0, "Fine_Correction_Range_RPM__________", SN_CHECK);
MakeNameEx(0xD3BC0, "Fine_Correction_Range_Load__________", SN_CHECK);
MakeNameEx(0xD3B50, "Fine_Correction_Rows_RPM__________", SN_CHECK);
MakeNameEx(0xD3B6C, "Fine_Correction_Columns_Load__________", SN_CHECK);
MakeNameEx(0xD3B94, "Fine_Correction_Retard_Value__________", SN_CHECK);
MakeNameEx(0xD3B90, "Fine_Correction_Retard_Limit__________", SN_CHECK);
MakeNameEx(0xD3B8C, "Fine_Correction_Advance_Value__________", SN_CHECK);
MakeNameEx(0xD3B88, "Fine_Correction_Advance_Limit__________", SN_CHECK);
MakeNameEx(0xD3682, "Fine_Correction_Advance_Delay__________", SN_CHECK);
MakeNameEx(0xD3AF8, "Rough_Correction_Range_RPM__________", SN_CHECK);
MakeNameEx(0xD3B08, "Rough_Correction_Range_Load__________", SN_CHECK);
MakeNameEx(0xD3B18, "Rough_Correction_Minimum_KC_Advance_Map_Value__________", SN_CHECK);
MakeNameEx(0xD47A0, "Rough_Correction_Learning_Delay_Increasing___________", SN_CHECK);
referenceAddress = DfirstB(0xD47A0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Rough_Correction_Learning_Delay_Increasing___________", SN_CHECK);
}
else
{
    Message("No reference to Rough_Correction_Learning_Delay_Increasing___________\n");
}

MakeNameEx(0xD4778, "Rough_Correction_Learning_Delay_Increasing_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD3B1C, "Advance_Multiplier_Initial__________", SN_CHECK);
MakeNameEx(0xD3B20, "Advance_Multiplier_Step_Value__________", SN_CHECK);
MakeNameEx(0xDBEC8, "Intake_Cam_Advance_Angle_Cruise_AVCS__________", SN_CHECK);
referenceAddress = DfirstB(0xDBEC8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_Cruise_AVCS__________", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_Cruise_AVCS__________\n");
}

MakeNameEx(0xDBE34, "Intake_Cam_Advance_Angle_Cruise_AVCS_X_AXIS_________", SN_CHECK);
MakeNameEx(0xDBE80, "Intake_Cam_Advance_Angle_Cruise_AVCS_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xDC208, "Intake_Cam_Advance_Angle_NonCruise_AVCS__________", SN_CHECK);
referenceAddress = DfirstB(0xDC208);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_NonCruise_AVCS__________", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_NonCruise_AVCS__________\n");
}

MakeNameEx(0xDC174, "Intake_Cam_Advance_Angle_NonCruise_AVCS_X_AXIS_________", SN_CHECK);
MakeNameEx(0xDC1C0, "Intake_Cam_Advance_Angle_NonCruise_AVCS_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xDC548, "Intake_Cam_Advance_Angle_ECT_Related____", SN_CHECK);
referenceAddress = DfirstB(0xDC548);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_ECT_Related____", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_ECT_Related____\n");
}

MakeNameEx(0xDC4B4, "Intake_Cam_Advance_Angle_ECT_Related_X_AXIS____", SN_CHECK);
MakeNameEx(0xDC500, "Intake_Cam_Advance_Angle_ECT_Related_Y_AXIS____", SN_CHECK);
MakeNameEx(0xDB43A, "Intake_Cam_Advance_Angle_ECT_Related_Multiplier____", SN_CHECK);
referenceAddress = DfirstB(0xDB43A);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Intake_Cam_Advance_Angle_ECT_Related_Multiplier____", SN_CHECK);
}
else
{
    Message("No reference to Intake_Cam_Advance_Angle_ECT_Related_Multiplier____\n");
}

MakeNameEx(0xDB264, "Intake_Cam_Advance_Angle_ECT_Related_Multiplier_Y_AXIS____", SN_CHECK);
MakeNameEx(0xDCC38, "Exhaust_Cam_Retard_Angle_Cruise_AVCS____", SN_CHECK);
referenceAddress = DfirstB(0xDCC38);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Exhaust_Cam_Retard_Angle_Cruise_AVCS____", SN_CHECK);
}
else
{
    Message("No reference to Exhaust_Cam_Retard_Angle_Cruise_AVCS____\n");
}

MakeNameEx(0xDCBA4, "Exhaust_Cam_Retard_Angle_Cruise_AVCS_X_AXIS____", SN_CHECK);
MakeNameEx(0xDCBF0, "Exhaust_Cam_Retard_Angle_Cruise_AVCS_Y_AXIS____", SN_CHECK);
MakeNameEx(0xDCF78, "Exhaust_Cam_Retard_Angle_NonCruise_AVCS____", SN_CHECK);
referenceAddress = DfirstB(0xDCF78);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Exhaust_Cam_Retard_Angle_NonCruise_AVCS____", SN_CHECK);
}
else
{
    Message("No reference to Exhaust_Cam_Retard_Angle_NonCruise_AVCS____\n");
}

MakeNameEx(0xDCEE4, "Exhaust_Cam_Retard_Angle_NonCruise_AVCS_X_AXIS____", SN_CHECK);
MakeNameEx(0xDCF30, "Exhaust_Cam_Retard_Angle_NonCruise_AVCS_Y_AXIS____", SN_CHECK);
MakeNameEx(0xDD2B8, "Exhaust_Cam_Retard_Angle_ECT_Related____", SN_CHECK);
referenceAddress = DfirstB(0xDD2B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Exhaust_Cam_Retard_Angle_ECT_Related____", SN_CHECK);
}
else
{
    Message("No reference to Exhaust_Cam_Retard_Angle_ECT_Related____\n");
}

MakeNameEx(0xDD224, "Exhaust_Cam_Retard_Angle_ECT_Related_X_AXIS____", SN_CHECK);
MakeNameEx(0xDD270, "Exhaust_Cam_Retard_Angle_ECT_Related_Y_AXIS____", SN_CHECK);
MakeNameEx(0xDB53C, "Exhaust_Cam_Retard_Angle_ECT_Related_Multiplier____", SN_CHECK);
referenceAddress = DfirstB(0xDB53C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Exhaust_Cam_Retard_Angle_ECT_Related_Multiplier____", SN_CHECK);
}
else
{
    Message("No reference to Exhaust_Cam_Retard_Angle_ECT_Related_Multiplier____\n");
}

MakeNameEx(0xDB264, "Exhaust_Cam_Retard_Angle_ECT_Related_Multiplier_Y_AXIS____", SN_CHECK);
MakeNameEx(0xFA070, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_____", SN_CHECK);
referenceAddress = DfirstB(0xFA070);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_____", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_____\n");
}

MakeNameEx(0xF9FEC, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_X_AXIS____", SN_CHECK);
MakeNameEx(0xFA02C, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Y_AXIS____", SN_CHECK);
MakeNameEx(0xFA314, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp_____", SN_CHECK);
referenceAddress = DfirstB(0xFA314);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp_____", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp_____\n");
}

MakeNameEx(0xFA290, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp_X_AXIS____", SN_CHECK);
MakeNameEx(0xFA2D0, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Sport_Sharp_Y_AXIS____", SN_CHECK);
MakeNameEx(0xFA5B8, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent_____", SN_CHECK);
referenceAddress = DfirstB(0xFA5B8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent_____", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent_____\n");
}

MakeNameEx(0xFA534, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent_X_AXIS____", SN_CHECK);
MakeNameEx(0xFA574, "Requested_Torque_Accelerator_Pedal_SIDRIVE_Intelligent_Y_AXIS____", SN_CHECK);
MakeNameEx(0xF900C, "Requested_Torque_Base_RPM__________", SN_CHECK);
referenceAddress = DfirstB(0xF900C);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Base_RPM__________", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Base_RPM__________\n");
}

MakeNameEx(0xF8FCC, "Requested_Torque_Base_RPM_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xF94D8, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio__________", SN_CHECK);
referenceAddress = DfirstB(0xF94D8);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio__________", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio__________\n");
}

MakeNameEx(0xF943C, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_X_AXIS_________", SN_CHECK);
MakeNameEx(0xF9498, "Target_Throttle_Plate_Position_Cruise_Requested_Torque_Ratio_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xF9854, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio__________", SN_CHECK);
referenceAddress = DfirstB(0xF9854);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio__________", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio__________\n");
}

MakeNameEx(0xF97B8, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_X_AXIS_________", SN_CHECK);
MakeNameEx(0xF9814, "Target_Throttle_Plate_Position_NonCruise_Requested_Torque_Ratio_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xF9BD0, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio__________", SN_CHECK);
referenceAddress = DfirstB(0xF9BD0);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio__________", SN_CHECK);
}
else
{
    Message("No reference to Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio__________\n");
}

MakeNameEx(0xF9B34, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_X_AXIS_________", SN_CHECK);
MakeNameEx(0xF9B90, "Target_Throttle_Plate_Position_Maximum_Requested_Torque_Ratio_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xF9F24, "Requested_Torque_Limit_A_Per_GearEngine_Speed__________", SN_CHECK);
referenceAddress = DfirstB(0xF9F24);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Limit_A_Per_GearEngine_Speed__________", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Limit_A_Per_GearEngine_Speed__________\n");
}

MakeNameEx(0xF9EDC, "Requested_Torque_Limit_A_Per_GearEngine_Speed_X_AXIS_________", SN_CHECK);
MakeNameEx(0xF9F1C, "Requested_Torque_Limit_A_Per_GearEngine_Speed_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xF9FAC, "Requested_Torque_Limit_B_Per_GearEngine_Speed__________", SN_CHECK);
referenceAddress = DfirstB(0xF9FAC);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Requested_Torque_Limit_B_Per_GearEngine_Speed__________", SN_CHECK);
}
else
{
    Message("No reference to Requested_Torque_Limit_B_Per_GearEngine_Speed__________\n");
}

MakeNameEx(0xF9F64, "Requested_Torque_Limit_B_Per_GearEngine_Speed_X_AXIS_________", SN_CHECK);
MakeNameEx(0xF9FA4, "Requested_Torque_Limit_B_Per_GearEngine_Speed_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xCD16C, "Rev_Limit_Fuel_Cut_________", SN_CHECK);
MakeNameEx(0xCD174, "Rev_Limit_Fuel_Resume_Boost__________", SN_CHECK);
MakeNameEx(0xCD178, "Speed_Limiting_Enable_Fuel_Cut__________", SN_CHECK);
MakeNameEx(0xCD180, "Speed_Limiting_Disable_Fuel_Cut__________", SN_CHECK);
MakeNameEx(0xF8E54, "Speed_Limiting_A_Throttle_SIDRIVE_SportSport_Sharp_____", SN_CHECK);
MakeNameEx(0xF8E60, "Speed_Limiting_B_Throttle_SIDRIVE_SportSport_Sharp_____", SN_CHECK);
MakeNameEx(0xF8E6C, "Speed_Limiting_Throttle_SIDRIVE_Intelligent_____", SN_CHECK);
MakeNameEx(0xDA068, "Fuel_Temp_Sensor_Scaling__________", SN_CHECK);
referenceAddress = DfirstB(0xDA068);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Fuel_Temp_Sensor_Scaling__________", SN_CHECK);
}
else
{
    Message("No reference to Fuel_Temp_Sensor_Scaling__________\n");
}

MakeNameEx(0xD9FF0, "Fuel_Temp_Sensor_Scaling_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD9F78, "Intake_Temp_Sensor_Scaling__________", SN_CHECK);
referenceAddress = DfirstB(0xD9F78);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Intake_Temp_Sensor_Scaling__________", SN_CHECK);
}
else
{
    Message("No reference to Intake_Temp_Sensor_Scaling__________\n");
}

MakeNameEx(0xD9F00, "Intake_Temp_Sensor_Scaling_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD9E90, "Coolant_Temp_Sensor_Scaling__________", SN_CHECK);
referenceAddress = DfirstB(0xD9E90);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Coolant_Temp_Sensor_Scaling__________", SN_CHECK);
}
else
{
    Message("No reference to Coolant_Temp_Sensor_Scaling__________\n");
}

MakeNameEx(0xD9E20, "Coolant_Temp_Sensor_Scaling_Y_AXIS_________", SN_CHECK);
MakeNameEx(0x4BCD8, "Fuel_Pump_Duty_________", SN_CHECK);
MakeNameEx(0xDA460, "Radiator_Fan_Modes_A_ECT__________", SN_CHECK);
MakeNameEx(0xDA470, "Radiator_Fan_Modes_B_ECT__________", SN_CHECK);
MakeNameEx(0xDA480, "Radiator_Fan_Modes_Veh_Speed__________", SN_CHECK);
MakeNameEx(0xC308C, "Gear_Determination_Thresholds_A__________", SN_CHECK);
MakeNameEx(0xC30A0, "Gear_Determination_Thresholds_B__________", SN_CHECK);
MakeNameEx(0xC30B4, "Gear_Determination_Thresholds_C__________", SN_CHECK);
MakeNameEx(0xD7CEE, "Idle_Speed_Target_A__________", SN_CHECK);
referenceAddress = DfirstB(0xD7CEE);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_A__________", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_A__________\n");
}

MakeNameEx(0xD7448, "Idle_Speed_Target_A_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD7D2E, "Idle_Speed_Target_B__________", SN_CHECK);
referenceAddress = DfirstB(0xD7D2E);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_B__________", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_B__________\n");
}

MakeNameEx(0xD7448, "Idle_Speed_Target_B_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD7D6E, "Idle_Speed_Target_C__________", SN_CHECK);
referenceAddress = DfirstB(0xD7D6E);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_C__________", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_C__________\n");
}

MakeNameEx(0xD7448, "Idle_Speed_Target_C_Y_AXIS_________", SN_CHECK);
MakeNameEx(0xD7DAE, "Idle_Speed_Target_D_____", SN_CHECK);
referenceAddress = DfirstB(0xD7DAE);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 8;
    MakeNameEx(referenceAddress, "Table_Idle_Speed_Target_D_____", SN_CHECK);
}
else
{
    Message("No reference to Idle_Speed_Target_D_____\n");
}

MakeNameEx(0xD7448, "Idle_Speed_Target_D_Y_AXIS____", SN_CHECK);
MakeNameEx(0xA9160, "Force_Pass_Readiness_Monitors___________", SN_CHECK);
MakeNameEx(0xDA314, "Ignition_Dwell__________", SN_CHECK);
referenceAddress = DfirstB(0xDA314);
if (referenceAddress > 0)
{
    referenceAddress = referenceAddress - 12;
    MakeNameEx(referenceAddress, "Table_Ignition_Dwell__________", SN_CHECK);
}
else
{
    Message("No reference to Ignition_Dwell__________\n");
}

MakeNameEx(0xDA2C0, "Ignition_Dwell_X_AXIS_________", SN_CHECK);
MakeNameEx(0xDA300, "Ignition_Dwell_Y_AXIS_________", SN_CHECK);
MakeNameEx(0x9C5DA, "P0000_PASS_CODE_NO_DTC_DETECTED___________", SN_CHECK);
MakeNameEx(0x9C5BD, "P0011_CAMSHAFT_POS_TIMING_OVERADVANCED_1__________", SN_CHECK);
MakeNameEx(0x9C654, "P0014_EXHAUST_AVCS_SYSTEM_1_RANGEPERF____", SN_CHECK);
MakeNameEx(0x9C64B, "P0016_CRANKSHAFTCAMSHAFT_CORRELATION_1A__________", SN_CHECK);
MakeNameEx(0x9C65A, "P0017_CRANKCAM_TIMING_B_FAILURE_1____", SN_CHECK);
MakeNameEx(0x9C64A, "P0018_CRANKSHAFTCAMSHAFT_CORRELATION_2A__________", SN_CHECK);
MakeNameEx(0x9C659, "P0019_CRANKCAM_TIMING_B_FAILURE_2____", SN_CHECK);
MakeNameEx(0x9C5BE, "P0021_CAMSHAFT_POS_TIMING_OVERADVANCED_2__________", SN_CHECK);
MakeNameEx(0x9C653, "P0024_EXHAUST_AVCS_SYSTEM_2_RANGEPERF____", SN_CHECK);
MakeNameEx(0x9C5FE, "P0030_FRONT_O2_SENSOR_RANGEPERF__________", SN_CHECK);
MakeNameEx(0x9C5E9, "P0031_FRONT_O2_SENSOR_LOW_INPUT__________", SN_CHECK);
MakeNameEx(0x9C5E7, "P0032_FRONT_O2_SENSOR_HIGH_INPUT__________", SN_CHECK);
MakeNameEx(0x9C5E8, "P0037_REAR_O2_SENSOR_LOW_INPUT__________", SN_CHECK);
MakeNameEx(0x9C5E6, "P0038_REAR_O2_SENSOR_HIGH_INPUT__________", SN_CHECK);
MakeNameEx(0x9C5F9, "P0068_MAP_SENSOR_RANGEPERF__________", SN_CHECK);
MakeNameEx(0x9C5FA, "P0101_MAF_SENSOR_RANGEPERF__________", SN_CHECK);
MakeNameEx(0x9C599, "P0102_MAF_SENSOR_LOW_INPUT__________", SN_CHECK);
MakeNameEx(0x9C59A, "P0103_MAF_SENSOR_HIGH_INPUT__________", SN_CHECK);
MakeNameEx(0x9C5EA, "P0107_MAP_SENSOR_LOW_INPUT__________", SN_CHECK);
MakeNameEx(0x9C5EB, "P0108_MAP_SENSOR_HIGH_INPUT__________", SN_CHECK);
MakeNameEx(0x9C5E5, "P0111_IAT_SENSOR_RANGEPERF__________", SN_CHECK);
MakeNameEx(0x9C5E3, "P0112_IAT_SENSOR_LOW_INPUT__________", SN_CHECK);
MakeNameEx(0x9C5E4, "P0113_IAT_SENSOR_HIGH_INPUT__________", SN_CHECK);
MakeNameEx(0x9C5A2, "P0117_COOLANT_TEMP_SENSOR_LOW_INPUT__________", SN_CHECK);
MakeNameEx(0x9C5A3, "P0118_COOLANT_TEMP_SENSOR_HIGH_INPUT__________", SN_CHECK);
MakeNameEx(0x9C5A0, "P0122_TPS_A_LOW_INPUT__________", SN_CHECK);
MakeNameEx(0x9C5A1, "P0123_TPS_A_HIGH_INPUT__________", SN_CHECK);
MakeNameEx(0x9C5A5, "P0125_INSUFFICIENT_COOLANT_TEMP_FUELING__________", SN_CHECK);
MakeNameEx(0x9C633, "P0126_INSUFFICIENT_COOLANT_TEMP_OPERATION__________", SN_CHECK);
MakeNameEx(0x9C5F0, "P0128_THERMOSTAT_MALFUNCTION__________", SN_CHECK);
MakeNameEx(0x9C5DD, "P0131_FRONT_O2_SENSOR_LOW_INPUT__________", SN_CHECK);
MakeNameEx(0x9C5DF, "P0132_FRONT_O2_SENSOR_HIGH_INPUT__________", SN_CHECK);
MakeNameEx(0x9C5FC, "P0134_FRONT_O2_SENSOR_NO_ACTIVITY__________", SN_CHECK);
MakeNameEx(0x9C5DC, "P0137_REAR_O2_SENSOR_LOW_VOLTAGE__________", SN_CHECK);
MakeNameEx(0x9C5E1, "P0138_REAR_O2_SENSOR_HIGH_VOLTAGE__________", SN_CHECK);
MakeNameEx(0x9C646, "P0140_REAR_O2_SENSOR_NO_ACTIVITY__________", SN_CHECK);
MakeNameEx(0x9C5C6, "P0141_REAR_O2_SENSOR_MALFUNCTION_____", SN_CHECK);
MakeNameEx(0x9C676, "P014C_O2_SENSOR_SLOW_RESPONSE_RICH_TO_LEAN_B1_S1____", SN_CHECK);
MakeNameEx(0x9C675, "P014D_O2_SENSOR_SLOW_RESPONSE_LEAN_TO_RICH_B1_S1____", SN_CHECK);
MakeNameEx(0x9C672, "P015A_O2_SENSOR_DELAYED_RESPONSE_RICH_TO_LEAN_B1_S1____", SN_CHECK);
MakeNameEx(0x9C5D1, "P0171_SYSTEM_TOO_LEAN__________", SN_CHECK);
MakeNameEx(0x9C5D2, "P0172_SYSTEM_TOO_RICH__________", SN_CHECK);
MakeNameEx(0x9C605, "P0222_TPS_B_LOW_INPUT__________", SN_CHECK);
MakeNameEx(0x9C606, "P0223_TPS_B_HIGH_INPUT__________", SN_CHECK);
MakeNameEx(0x9C5F8, "P0230_FUEL_PUMP_PRIMARY_CIRCUIT__________", SN_CHECK);
MakeNameEx(0x9C5F7, "P0244_WASTEGATE_SOLENOID_A_RANGEPERF__________", SN_CHECK);
MakeNameEx(0x9C5F5, "P0245_WASTEGATE_SOLENOID_A_LOW__________", SN_CHECK);
MakeNameEx(0x9C5F6, "P0246_WASTEGATE_SOLENOID_A_HIGH__________", SN_CHECK);
MakeNameEx(0x9C5D3, "P0301_MISFIRE_CYLINDER_1__________", SN_CHECK);
MakeNameEx(0x9C5D4, "P0302_MISFIRE_CYLINDER_2__________", SN_CHECK);
MakeNameEx(0x9C5D5, "P0303_MISFIRE_CYLINDER_3__________", SN_CHECK);
MakeNameEx(0x9C5D6, "P0304_MISFIRE_CYLINDER_4__________", SN_CHECK);
MakeNameEx(0x9C59E, "P0327_KNOCK_SENSOR_1_LOW_INPUT__________", SN_CHECK);
MakeNameEx(0x9C59F, "P0328_KNOCK_SENSOR_1_HIGH_INPUT__________", SN_CHECK);
MakeNameEx(0x9C594, "P0335_CRANKSHAFT_POS_SENSOR_A_MALFUNCTION__________", SN_CHECK);
MakeNameEx(0x9C595, "P0336_CRANKSHAFT_POS_SENSOR_A_RANGEPERF__________", SN_CHECK);
MakeNameEx(0x9C618, "P0340_CAMSHAFT_POS_SENSOR_A_MALFUNCTION__________", SN_CHECK);
MakeNameEx(0x9C617, "P0345_CAMSHAFT_POS_SENSOR_A_BANK_2__________", SN_CHECK);
MakeNameEx(0x9C616, "P0365_CAMSHAFT_POS_SENSOR_B_BANK_1____", SN_CHECK);
MakeNameEx(0x9C615, "P0390_CAMSHAFT_POS_SENSOR_B_BANK_2____", SN_CHECK);
MakeNameEx(0x9C640, "P0410_SECONDARY_AIR_PUMP_SYSTEM__________", SN_CHECK);
MakeNameEx(0x9C63F, "P0411_SECONDARY_AIR_PUMP_INCORRECT_FLOW__________", SN_CHECK);
MakeNameEx(0x9C644, "P0413_SECONDARY_AIR_PUMP_A_OPEN__________", SN_CHECK);
MakeNameEx(0x9C648, "P0414_SECONDARY_AIR_PUMP_A_SHORTED__________", SN_CHECK);
MakeNameEx(0x9C652, "P0416_SECONDARY_AIR_PUMP_B_OPEN__________", SN_CHECK);
MakeNameEx(0x9C651, "P0417_SECONDARY_AIR_PUMP_B_SHORTED__________", SN_CHECK);
MakeNameEx(0x9C645, "P0418_SECONDARY_AIR_PUMP_RELAY_A__________", SN_CHECK);
MakeNameEx(0x9C5CD, "P0420_CAT_EFFICIENCY_BELOW_THRESHOLD__________", SN_CHECK);
MakeNameEx(0x9C67C, "P0441_EVAP_INCORRECT_PURGE_FLOW__________", SN_CHECK);
MakeNameEx(0x9C67B, "P0451_EVAP_PRESSURE_SENSOR_RANGEPERF__________", SN_CHECK);
MakeNameEx(0x9C66E, "P0452_EVAP_PRESSURE_SENSOR_LOW_INPUT__________", SN_CHECK);
MakeNameEx(0x9C66D, "P0453_EVAP_PRESSURE_SENSOR_HIGH_INPUT__________", SN_CHECK);
MakeNameEx(0x9C67A, "P0455_EVAP_EMISSION_CONTROL_SYSTEM_LEAK_DETECTED_GROSS_LEAK_____", SN_CHECK);
MakeNameEx(0x9C5CF, "P0456_EVAP_LEAK_DETECTED_VERY_SMALL__________", SN_CHECK);
MakeNameEx(0x9C5C1, "P0458_EVAP_PURGE_VALVE_CIRCUIT_LOW__________", SN_CHECK);
MakeNameEx(0x9C5C2, "P0459_EVAP_PURGE_VALVE_CIRCUIT_HIGH__________", SN_CHECK);
MakeNameEx(0x9C5A8, "P0461_FUEL_LEVEL_SENSOR_RANGEPERF__________", SN_CHECK);
MakeNameEx(0x9C5A6, "P0462_FUEL_LEVEL_SENSOR_LOW_INPUT__________", SN_CHECK);
MakeNameEx(0x9C5A7, "P0463_FUEL_LEVEL_SENSOR_HIGH_INPUT__________", SN_CHECK);
MakeNameEx(0x9C59B, "P0500_VEHICLE_SPEED_SENSOR_A__________", SN_CHECK);
MakeNameEx(0x9C5BB, "P0506_IDLE_CONTROL_RPM_LOWER_THAN_EXPECTED__________", SN_CHECK);
MakeNameEx(0x9C5BC, "P0507_IDLE_CONTROL_RPM_HIGH_THAN_EXPECTED__________", SN_CHECK);
MakeNameEx(0x9C668, "P050A_COLD_START_IDLE_AIR_CONTROL_SYSTEM_PERFORMANCE_____", SN_CHECK);
MakeNameEx(0x9C667, "P050B_COLD_START_IGNITION_TIMING_PERFORMANCE_____", SN_CHECK);
MakeNameEx(0x9C5AA, "P0512_STARTER_REQUEST_CIRCUIT__________", SN_CHECK);
MakeNameEx(0x9C598, "P0604_CONTROL_MODULE_RAM_ERROR__________", SN_CHECK);
MakeNameEx(0x9C619, "P0605_CONTROL_MODULE_ROM_ERROR__________", SN_CHECK);
MakeNameEx(0x9C60D, "P0607_CONTROL_MODULE_PERFORMANCE__________", SN_CHECK);
MakeNameEx(0x9C60C, "P0638_THROTTLE_ACTUATOR_RANGEPERF__________", SN_CHECK);
MakeNameEx(0x9C5AE, "P0851_NEUTRAL_SWITCH_INPUT_LOW__________", SN_CHECK);
MakeNameEx(0x9C5B2, "P0852_NEUTRAL_SWITCH_INPUT_HIGH__________", SN_CHECK);
MakeNameEx(0x9C5C9, "P1152_FRONT_O2_SENSOR_RANGEPERF_LOW_B1_S1__________", SN_CHECK);
MakeNameEx(0x9C5CA, "P1153_FRONT_O2_SENSOR_RANGEPERF_HIGH_B1_S1__________", SN_CHECK);
MakeNameEx(0x9C607, "P1160_ABNORMAL_RETURN_SPRING__________", SN_CHECK);
MakeNameEx(0x9C5BF, "P1400_FUEL_TANK_PRESSURE_SOL_LOW__________", SN_CHECK);
MakeNameEx(0x9C64C, "P1410_SECONDARY_AIR_PUMP_VALVE_STUCK_OPEN__________", SN_CHECK);
MakeNameEx(0x9C649, "P1418_SECONDARY_AIR_PUMP_CIRCUIT_SHORTED__________", SN_CHECK);
MakeNameEx(0x9C5C0, "P1420_FUEL_TANK_PRESSURE_SOL_HIGH_INPUT__________", SN_CHECK);
MakeNameEx(0x9C679, "P1449_EVAPORATIVE_EMISSION_CONT_SYS_AIR_FILTER_CLOG_____", SN_CHECK);
MakeNameEx(0x9C678, "P1451_EVAPORATIVE_EMISSION_CONT_SYS_____", SN_CHECK);
MakeNameEx(0x9C677, "P1458_CANISTER_PURGE_CONTROL_SOLENOID_VALVE_2_LOW_____", SN_CHECK);
MakeNameEx(0x9C681, "P1459_CANISTER_PURGE_CONTROL_SOLENOID_VALVE_2_HIGH_____", SN_CHECK);
MakeNameEx(0x9C5F1, "P1491_PCV_BLOWBY_FUNCTION_PROBLEM__________", SN_CHECK);
MakeNameEx(0x9C5A9, "P1518_STARTER_SWITCH_LOW_INPUT_____", SN_CHECK);
MakeNameEx(0x9C657, "P1519_IMRC_STUCK_CLOSED__________", SN_CHECK);
MakeNameEx(0x9C656, "P1520_IMRC_CIRCUIT_MALFUNCTION__________", SN_CHECK);
MakeNameEx(0x9C5F2, "P1560_BACKUP_VOLTAGE_MALFUNCTION__________", SN_CHECK);
MakeNameEx(0x9C655, "P1616_SBDS_INTERACTIVE_CODES__________", SN_CHECK);
MakeNameEx(0x9C62E, "P2004_TGV_INTAKE_MANIFOLD_RUNNER_1_STUCK_OPEN__________", SN_CHECK);
MakeNameEx(0x9C630, "P2005_TGV_INTAKE_MANIFOLD_RUNNER_2_STUCK_OPEN__________", SN_CHECK);
MakeNameEx(0x9C62F, "P2006_TGV_INTAKE_MANIFOLD_RUNNER_1_STUCK_CLOSED__________", SN_CHECK);
MakeNameEx(0x9C631, "P2007_TGV_INTAKE_MANIFOLD_RUNNER_2_STUCK_CLOSED__________", SN_CHECK);
MakeNameEx(0x9C63C, "P2008_TGV_INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_OPEN__________", SN_CHECK);
MakeNameEx(0x9C63A, "P2009_TGV_INTAKE_MANIFOLD_RUNNER_1_CIRCUIT_LOW__________", SN_CHECK);
MakeNameEx(0x9C63D, "P2011_TGV_INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_OPEN__________", SN_CHECK);
MakeNameEx(0x9C63B, "P2012_TGV_INTAKE_MANIFOLD_RUNNER_2_CIRCUIT_LOW__________", SN_CHECK);
MakeNameEx(0x9C636, "P2016_TGV_INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_LOW__________", SN_CHECK);
MakeNameEx(0x9C637, "P2017_TGV_INTAKE_MANIFOLD_RUNNER_1_POS_SENSOR_HIGH__________", SN_CHECK);
MakeNameEx(0x9C638, "P2021_TGV_INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_LOW__________", SN_CHECK);
MakeNameEx(0x9C639, "P2022_TGV_INTAKE_MANIFOLD_RUNNER_2_POS_SENSOR_HIGH__________", SN_CHECK);
MakeNameEx(0x9C621, "P2088_OCV_SOLENOID_A1_CIRCUIT_OPEN__________", SN_CHECK);
MakeNameEx(0x9C620, "P2089_OCV_SOLENOID_A1_CIRCUIT_SHORT__________", SN_CHECK);
MakeNameEx(0x9C61D, "P2090_OCV_SOLENOID_B1_CIRCUIT_OPEN____", SN_CHECK);
MakeNameEx(0x9C61C, "P2091_OCV_SOLENOID_B1_CIRCUIT_SHORT____", SN_CHECK);
MakeNameEx(0x9C61F, "P2092_OCV_SOLENOID_A2_CIRCUIT_OPEN__________", SN_CHECK);
MakeNameEx(0x9C61E, "P2093_OCV_SOLENOID_A2_CIRCUIT_SHORT__________", SN_CHECK);
MakeNameEx(0x9C61B, "P2094_OCV_SOLENOID_B2_CIRCUIT_OPEN____", SN_CHECK);
MakeNameEx(0x9C61A, "P2095_OCV_SOLENOID_B2_CIRCUIT_SHORT____", SN_CHECK);
MakeNameEx(0x9C60B, "P2096_POST_CATALYST_TOO_LEAN_B1__________", SN_CHECK);
MakeNameEx(0x9C614, "P2097_POST_CATALYST_TOO_RICH_B1__________", SN_CHECK);
MakeNameEx(0x9C60A, "P2101_THROTTLE_ACTUATOR_CIRCUIT_RANGEPERF__________", SN_CHECK);
MakeNameEx(0x9C608, "P2102_THROTTLE_ACTUATOR_CIRCUIT_LOW__________", SN_CHECK);
MakeNameEx(0x9C609, "P2103_THROTTLE_ACTUATOR_CIRCUIT_HIGH__________", SN_CHECK);
MakeNameEx(0x9C604, "P2109_TPS_A_MINIMUM_STOP_PERF__________", SN_CHECK);
MakeNameEx(0x9C611, "P2122_TPS_D_CIRCUIT_LOW_INPUT__________", SN_CHECK);
MakeNameEx(0x9C612, "P2123_TPS_D_CIRCUIT_HIGH_INPUT__________", SN_CHECK);
MakeNameEx(0x9C60F, "P2127_TPS_E_CIRCUIT_LOW_INPUT__________", SN_CHECK);
MakeNameEx(0x9C610, "P2128_TPS_E_CIRCUIT_HIGH_INPUT__________", SN_CHECK);
MakeNameEx(0x9C613, "P2135_TPS_AB_VOLTAGE__________", SN_CHECK);
MakeNameEx(0x9C60E, "P2138_TPS_DE_VOLTAGE__________", SN_CHECK);
MakeNameEx(0x9C67E, "P219A_BANK_1_AFR_IMBALANCE_____", SN_CHECK);
MakeNameEx(0x9C66C, "P2401_EVAP_LEAK_DETECTION_PUMP_CONTROL_CIRCUIT_LOW_____", SN_CHECK);
MakeNameEx(0x9C680, "P2402_EVAP_LEAK_DETECTION_PUMP_CONTROL_CIRCUIT_HIGH_____", SN_CHECK);
MakeNameEx(0x9C66B, "P2419_EVAP_SWITCHING_VALVE_LOW__________", SN_CHECK);
MakeNameEx(0x9C66A, "P2420_EVAP_SWITCHING_VALVE_HIGH__________", SN_CHECK);
MakeNameEx(0x9C641, "P2431_SECONDARY_AIR_PUMP_CIRCUIT_RANGEPERF__________", SN_CHECK);
MakeNameEx(0x9C643, "P2432_SECONDARY_AIR_PUMP_CIRCUIT_LOW__________", SN_CHECK);
MakeNameEx(0x9C642, "P2433_SECONDARY_AIR_PUMP_CIRCUIT_HIGH__________", SN_CHECK);
MakeNameEx(0x9C650, "P2440_SECONDARY_AIR_PUMP_VALVE_1_STUCK_OPEN__________", SN_CHECK);
MakeNameEx(0x9C64F, "P2441_SECONDARY_AIR_PUMP_VALVE_1_STUCK_CLOSED__________", SN_CHECK);
MakeNameEx(0x9C64E, "P2442_SECONDARY_AIR_PUMP_VALVE_2_STUCK_OPEN__________", SN_CHECK);
MakeNameEx(0x9C64D, "P2443_SECONDARY_AIR_PUMP_2_STUCK_CLOSED__________", SN_CHECK);
MakeNameEx(0x9C63E, "P2444_SECONDARY_AIR_PUMP_1_STUCK_ON_B1__________", SN_CHECK);
MakeNameEx(0x9C665, "U0073_CAN_COMMUNICATION_BUS_A_OFF_____", SN_CHECK);
MakeNameEx(0x9C662, "U0101_CAN_LOST_COMMUNICATION_WITH_TCM_____", SN_CHECK);
MakeNameEx(0x9C664, "U0122_CAN_LOST_COMMUNICATION_WITH_VDC_____", SN_CHECK);
MakeNameEx(0x9C660, "U0140_CAN_LOST_COMMUNICATION_WITH_BIU_____", SN_CHECK);
MakeNameEx(0x9C661, "U0402_CAN_INVALID_DATA_RECEIVED_FROM_TCM_____", SN_CHECK);
MakeNameEx(0x9C663, "U0416_CAN_INVALID_DATA_RECEIVED_FROM_VDC_____", SN_CHECK);
MakeNameEx(0x9C65F, "U0422_CAN_INVALID_DATA_RECEIVED_FROM_BIU_____", SN_CHECK);
}   // end of Tables

static StdParams ()
{
Message("--- Now marking StdParams ---\n");
auto addr;
MakeUnknown(0x000655B0, 4, DOUNK_SIMPLE);
MakeDword(0x000655B0);
MakeNameEx(0x000655B0, "PtrSsmGet_Engine_Load_Relative_P1__________", SN_CHECK);
addr = Dword(0x000655B0);
MakeNameEx(addr, "SsmGet_Engine_Load_Relative_P1__________", SN_CHECK);

MakeUnknown(0x000655B4, 4, DOUNK_SIMPLE);
MakeDword(0x000655B4);
MakeNameEx(0x000655B4, "PtrSsmGet_Coolant_Temperature_P2__________", SN_CHECK);
addr = Dword(0x000655B4);
MakeNameEx(addr, "SsmGet_Coolant_Temperature_P2__________", SN_CHECK);

MakeUnknown(0x000655B8, 4, DOUNK_SIMPLE);
MakeDword(0x000655B8);
MakeNameEx(0x000655B8, "PtrSsmGet_AF_Correction_1_P3__________", SN_CHECK);
addr = Dword(0x000655B8);
MakeNameEx(addr, "SsmGet_AF_Correction_1_P3__________", SN_CHECK);

MakeUnknown(0x000655BC, 4, DOUNK_SIMPLE);
MakeDword(0x000655BC);
MakeNameEx(0x000655BC, "PtrSsmGet_AF_Learning_1_P4__________", SN_CHECK);
addr = Dword(0x000655BC);
MakeNameEx(addr, "SsmGet_AF_Learning_1_P4__________", SN_CHECK);

MakeUnknown(0x000655C0, 4, DOUNK_SIMPLE);
MakeDword(0x000655C0);
MakeNameEx(0x000655C0, "PtrSsmGet_AF_Correction_2_P5__________", SN_CHECK);
addr = Dword(0x000655C0);
MakeNameEx(addr, "SsmGet_AF_Correction_2_P5__________", SN_CHECK);

MakeUnknown(0x000655C4, 4, DOUNK_SIMPLE);
MakeDword(0x000655C4);
MakeNameEx(0x000655C4, "PtrSsmGet_AF_Learning_2_P6__________", SN_CHECK);
addr = Dword(0x000655C4);
MakeNameEx(addr, "SsmGet_AF_Learning_2_P6__________", SN_CHECK);

MakeUnknown(0x000655C8, 4, DOUNK_SIMPLE);
MakeDword(0x000655C8);
MakeNameEx(0x000655C8, "PtrSsmGet_Manifold_Absolute_Pressure_P7__________", SN_CHECK);
addr = Dword(0x000655C8);
MakeNameEx(addr, "SsmGet_Manifold_Absolute_Pressure_P7__________", SN_CHECK);

MakeUnknown(0x000655CC, 4, DOUNK_SIMPLE);
MakeDword(0x000655CC);
MakeNameEx(0x000655CC, "PtrSsmGet_Engine_Speed_P8__________", SN_CHECK);
addr = Dword(0x000655CC);
MakeNameEx(addr, "SsmGet_Engine_Speed_P8__________", SN_CHECK);

MakeUnknown(0x000655D4, 4, DOUNK_SIMPLE);
MakeDword(0x000655D4);
MakeNameEx(0x000655D4, "PtrSsmGet_Vehicle_Speed_P9__________", SN_CHECK);
addr = Dword(0x000655D4);
MakeNameEx(addr, "SsmGet_Vehicle_Speed_P9__________", SN_CHECK);

MakeUnknown(0x000655D8, 4, DOUNK_SIMPLE);
MakeDword(0x000655D8);
MakeNameEx(0x000655D8, "PtrSsmGet_Ignition_Total_Timing_P10__________", SN_CHECK);
addr = Dword(0x000655D8);
MakeNameEx(addr, "SsmGet_Ignition_Total_Timing_P10__________", SN_CHECK);

MakeUnknown(0x000655DC, 4, DOUNK_SIMPLE);
MakeDword(0x000655DC);
MakeNameEx(0x000655DC, "PtrSsmGet_Intake_Air_Temperature_P11__________", SN_CHECK);
addr = Dword(0x000655DC);
MakeNameEx(addr, "SsmGet_Intake_Air_Temperature_P11__________", SN_CHECK);

MakeUnknown(0x000655E0, 4, DOUNK_SIMPLE);
MakeDword(0x000655E0);
MakeNameEx(0x000655E0, "PtrSsmGet_Mass_Airflow_P12__________", SN_CHECK);
addr = Dword(0x000655E0);
MakeNameEx(addr, "SsmGet_Mass_Airflow_P12__________", SN_CHECK);

MakeUnknown(0x000655E8, 4, DOUNK_SIMPLE);
MakeDword(0x000655E8);
MakeNameEx(0x000655E8, "PtrSsmGet_Throttle_Opening_Angle_P13__________", SN_CHECK);
addr = Dword(0x000655E8);
MakeNameEx(addr, "SsmGet_Throttle_Opening_Angle_P13__________", SN_CHECK);

MakeUnknown(0x000655EC, 4, DOUNK_SIMPLE);
MakeDword(0x000655EC);
MakeNameEx(0x000655EC, "PtrSsmGet_Front_O2_Sensor_1_P14__________", SN_CHECK);
addr = Dword(0x000655EC);
MakeNameEx(addr, "SsmGet_Front_O2_Sensor_1_P14__________", SN_CHECK);

MakeUnknown(0x000655F4, 4, DOUNK_SIMPLE);
MakeDword(0x000655F4);
MakeNameEx(0x000655F4, "PtrSsmGet_Rear_O2_Sensor_P15__________", SN_CHECK);
addr = Dword(0x000655F4);
MakeNameEx(addr, "SsmGet_Rear_O2_Sensor_P15__________", SN_CHECK);

MakeUnknown(0x000655FC, 4, DOUNK_SIMPLE);
MakeDword(0x000655FC);
MakeNameEx(0x000655FC, "PtrSsmGet_Front_O2_Sensor_2_P16__________", SN_CHECK);
addr = Dword(0x000655FC);
MakeNameEx(addr, "SsmGet_Front_O2_Sensor_2_P16__________", SN_CHECK);

MakeUnknown(0x00065604, 4, DOUNK_SIMPLE);
MakeDword(0x00065604);
MakeNameEx(0x00065604, "PtrSsmGet_Battery_Voltage_P17__________", SN_CHECK);
addr = Dword(0x00065604);
MakeNameEx(addr, "SsmGet_Battery_Voltage_P17__________", SN_CHECK);

MakeUnknown(0x00065608, 4, DOUNK_SIMPLE);
MakeDword(0x00065608);
MakeNameEx(0x00065608, "PtrSsmGet_Mass_Airflow_Sensor_Voltage_P18__________", SN_CHECK);
addr = Dword(0x00065608);
MakeNameEx(addr, "SsmGet_Mass_Airflow_Sensor_Voltage_P18__________", SN_CHECK);

MakeUnknown(0x0006560C, 4, DOUNK_SIMPLE);
MakeDword(0x0006560C);
MakeNameEx(0x0006560C, "PtrSsmGet_Throttle_Sensor_Voltage_P19__________", SN_CHECK);
addr = Dword(0x0006560C);
MakeNameEx(addr, "SsmGet_Throttle_Sensor_Voltage_P19__________", SN_CHECK);

MakeUnknown(0x00065610, 4, DOUNK_SIMPLE);
MakeDword(0x00065610);
MakeNameEx(0x00065610, "PtrSsmGet_Differential_Pressure_Sensor_Voltage_P20__________", SN_CHECK);
addr = Dword(0x00065610);
MakeNameEx(addr, "SsmGet_Differential_Pressure_Sensor_Voltage_P20__________", SN_CHECK);

MakeUnknown(0x00065614, 4, DOUNK_SIMPLE);
MakeDword(0x00065614);
MakeNameEx(0x00065614, "PtrSsmGet_Fuel_Injector_1_Pulse_Width_P21__________", SN_CHECK);
addr = Dword(0x00065614);
MakeNameEx(addr, "SsmGet_Fuel_Injector_1_Pulse_Width_P21__________", SN_CHECK);

MakeUnknown(0x00065618, 4, DOUNK_SIMPLE);
MakeDword(0x00065618);
MakeNameEx(0x00065618, "PtrSsmGet_Fuel_Injector_2_Pulse_Width_P22__________", SN_CHECK);
addr = Dword(0x00065618);
MakeNameEx(addr, "SsmGet_Fuel_Injector_2_Pulse_Width_P22__________", SN_CHECK);

MakeUnknown(0x0006561C, 4, DOUNK_SIMPLE);
MakeDword(0x0006561C);
MakeNameEx(0x0006561C, "PtrSsmGet_Knock_Correction_Advance_P23__________", SN_CHECK);
addr = Dword(0x0006561C);
MakeNameEx(addr, "SsmGet_Knock_Correction_Advance_P23__________", SN_CHECK);

MakeUnknown(0x00065620, 4, DOUNK_SIMPLE);
MakeDword(0x00065620);
MakeNameEx(0x00065620, "PtrSsmGet_Atmospheric_Pressure_P24__________", SN_CHECK);
addr = Dword(0x00065620);
MakeNameEx(addr, "SsmGet_Atmospheric_Pressure_P24__________", SN_CHECK);

MakeUnknown(0x00065624, 4, DOUNK_SIMPLE);
MakeDword(0x00065624);
MakeNameEx(0x00065624, "PtrSsmGet_Manifold_Relative_Pressure_P25__________", SN_CHECK);
addr = Dword(0x00065624);
MakeNameEx(addr, "SsmGet_Manifold_Relative_Pressure_P25__________", SN_CHECK);

MakeUnknown(0x00065628, 4, DOUNK_SIMPLE);
MakeDword(0x00065628);
MakeNameEx(0x00065628, "PtrSsmGet_Pressure_Differential_Sensor_P26__________", SN_CHECK);
addr = Dword(0x00065628);
MakeNameEx(addr, "SsmGet_Pressure_Differential_Sensor_P26__________", SN_CHECK);

MakeUnknown(0x0006562C, 4, DOUNK_SIMPLE);
MakeDword(0x0006562C);
MakeNameEx(0x0006562C, "PtrSsmGet_Fuel_Tank_Pressure_P27__________", SN_CHECK);
addr = Dword(0x0006562C);
MakeNameEx(addr, "SsmGet_Fuel_Tank_Pressure_P27__________", SN_CHECK);

MakeUnknown(0x00065630, 4, DOUNK_SIMPLE);
MakeDword(0x00065630);
MakeNameEx(0x00065630, "PtrSsmGet_CO_Adjustment_P28__________", SN_CHECK);
addr = Dword(0x00065630);
MakeNameEx(addr, "SsmGet_CO_Adjustment_P28__________", SN_CHECK);

MakeUnknown(0x00065634, 4, DOUNK_SIMPLE);
MakeDword(0x00065634);
MakeNameEx(0x00065634, "PtrSsmGet_Learned_Ignition_Timing_P29__________", SN_CHECK);
addr = Dword(0x00065634);
MakeNameEx(addr, "SsmGet_Learned_Ignition_Timing_P29__________", SN_CHECK);

MakeUnknown(0x00065638, 4, DOUNK_SIMPLE);
MakeDword(0x00065638);
MakeNameEx(0x00065638, "PtrSsmGet_Accelerator_Pedal_Angle_P30__________", SN_CHECK);
addr = Dword(0x00065638);
MakeNameEx(addr, "SsmGet_Accelerator_Pedal_Angle_P30__________", SN_CHECK);

MakeUnknown(0x0006563C, 4, DOUNK_SIMPLE);
MakeDword(0x0006563C);
MakeNameEx(0x0006563C, "PtrSsmGet_Fuel_Temperature_P31__________", SN_CHECK);
addr = Dword(0x0006563C);
MakeNameEx(addr, "SsmGet_Fuel_Temperature_P31__________", SN_CHECK);

MakeUnknown(0x00065640, 4, DOUNK_SIMPLE);
MakeDword(0x00065640);
MakeNameEx(0x00065640, "PtrSsmGet_Front_O2_Heater_Current_1_P32__________", SN_CHECK);
addr = Dword(0x00065640);
MakeNameEx(addr, "SsmGet_Front_O2_Heater_Current_1_P32__________", SN_CHECK);

MakeUnknown(0x00065644, 4, DOUNK_SIMPLE);
MakeDword(0x00065644);
MakeNameEx(0x00065644, "PtrSsmGet_Rear_O2_Heater_Current_P33__________", SN_CHECK);
addr = Dword(0x00065644);
MakeNameEx(addr, "SsmGet_Rear_O2_Heater_Current_P33__________", SN_CHECK);

MakeUnknown(0x00065648, 4, DOUNK_SIMPLE);
MakeDword(0x00065648);
MakeNameEx(0x00065648, "PtrSsmGet_Front_O2_Heater_Current_2_P34__________", SN_CHECK);
addr = Dword(0x00065648);
MakeNameEx(addr, "SsmGet_Front_O2_Heater_Current_2_P34__________", SN_CHECK);

MakeUnknown(0x0006564C, 4, DOUNK_SIMPLE);
MakeDword(0x0006564C);
MakeNameEx(0x0006564C, "PtrSsmGet_Fuel_Level_P35__________", SN_CHECK);
addr = Dword(0x0006564C);
MakeNameEx(addr, "SsmGet_Fuel_Level_P35__________", SN_CHECK);

MakeUnknown(0x00065654, 4, DOUNK_SIMPLE);
MakeDword(0x00065654);
MakeNameEx(0x00065654, "PtrSsmGet_Primary_Wastegate_Duty_Cycle_P36__________", SN_CHECK);
addr = Dword(0x00065654);
MakeNameEx(addr, "SsmGet_Primary_Wastegate_Duty_Cycle_P36__________", SN_CHECK);

MakeUnknown(0x00065658, 4, DOUNK_SIMPLE);
MakeDword(0x00065658);
MakeNameEx(0x00065658, "PtrSsmGet_Secondary_Wastegate_Duty_Cycle_P37__________", SN_CHECK);
addr = Dword(0x00065658);
MakeNameEx(addr, "SsmGet_Secondary_Wastegate_Duty_Cycle_P37__________", SN_CHECK);

MakeUnknown(0x0006565C, 4, DOUNK_SIMPLE);
MakeDword(0x0006565C);
MakeNameEx(0x0006565C, "PtrSsmGet_CPC_Valve_Duty_Ratio_P38__________", SN_CHECK);
addr = Dword(0x0006565C);
MakeNameEx(addr, "SsmGet_CPC_Valve_Duty_Ratio_P38__________", SN_CHECK);

MakeUnknown(0x00065660, 4, DOUNK_SIMPLE);
MakeDword(0x00065660);
MakeNameEx(0x00065660, "PtrSsmGet_Tumble_Valve_Position_Sensor_Right_P39__________", SN_CHECK);
addr = Dword(0x00065660);
MakeNameEx(addr, "SsmGet_Tumble_Valve_Position_Sensor_Right_P39__________", SN_CHECK);

MakeUnknown(0x00065664, 4, DOUNK_SIMPLE);
MakeDword(0x00065664);
MakeNameEx(0x00065664, "PtrSsmGet_Tumble_Valve_Position_Sensor_Left_P40__________", SN_CHECK);
addr = Dword(0x00065664);
MakeNameEx(addr, "SsmGet_Tumble_Valve_Position_Sensor_Left_P40__________", SN_CHECK);

MakeUnknown(0x00065668, 4, DOUNK_SIMPLE);
MakeDword(0x00065668);
MakeNameEx(0x00065668, "PtrSsmGet_Idle_Speed_Control_Valve_Duty_Ratio_P41__________", SN_CHECK);
addr = Dword(0x00065668);
MakeNameEx(addr, "SsmGet_Idle_Speed_Control_Valve_Duty_Ratio_P41__________", SN_CHECK);

MakeUnknown(0x0006566C, 4, DOUNK_SIMPLE);
MakeDword(0x0006566C);
MakeNameEx(0x0006566C, "PtrSsmGet_AF_Lean_Correction_P42__________", SN_CHECK);
addr = Dword(0x0006566C);
MakeNameEx(addr, "SsmGet_AF_Lean_Correction_P42__________", SN_CHECK);

MakeUnknown(0x00065670, 4, DOUNK_SIMPLE);
MakeDword(0x00065670);
MakeNameEx(0x00065670, "PtrSsmGet_AF_Heater_Duty_P43__________", SN_CHECK);
addr = Dword(0x00065670);
MakeNameEx(addr, "SsmGet_AF_Heater_Duty_P43__________", SN_CHECK);

MakeUnknown(0x00065674, 4, DOUNK_SIMPLE);
MakeDword(0x00065674);
MakeNameEx(0x00065674, "PtrSsmGet_Idle_Speed_Control_Valve_Step_P44__________", SN_CHECK);
addr = Dword(0x00065674);
MakeNameEx(addr, "SsmGet_Idle_Speed_Control_Valve_Step_P44__________", SN_CHECK);

MakeUnknown(0x00065678, 4, DOUNK_SIMPLE);
MakeDword(0x00065678);
MakeNameEx(0x00065678, "PtrSsmGet_Number_of_Exh_Gas_Recirc_Steps_P45__________", SN_CHECK);
addr = Dword(0x00065678);
MakeNameEx(addr, "SsmGet_Number_of_Exh_Gas_Recirc_Steps_P45__________", SN_CHECK);

MakeUnknown(0x0006567C, 4, DOUNK_SIMPLE);
MakeDword(0x0006567C);
MakeNameEx(0x0006567C, "PtrSsmGet_Alternator_Duty_P46__________", SN_CHECK);
addr = Dword(0x0006567C);
MakeNameEx(addr, "SsmGet_Alternator_Duty_P46__________", SN_CHECK);

MakeUnknown(0x00065680, 4, DOUNK_SIMPLE);
MakeDword(0x00065680);
MakeNameEx(0x00065680, "PtrSsmGet_Fuel_Pump_Duty_P47__________", SN_CHECK);
addr = Dword(0x00065680);
MakeNameEx(addr, "SsmGet_Fuel_Pump_Duty_P47__________", SN_CHECK);

MakeUnknown(0x00065684, 4, DOUNK_SIMPLE);
MakeDword(0x00065684);
MakeNameEx(0x00065684, "PtrSsmGet_Intake_VVT_Advance_Angle_Right_P48__________", SN_CHECK);
addr = Dword(0x00065684);
MakeNameEx(addr, "SsmGet_Intake_VVT_Advance_Angle_Right_P48__________", SN_CHECK);

MakeUnknown(0x00065688, 4, DOUNK_SIMPLE);
MakeDword(0x00065688);
MakeNameEx(0x00065688, "PtrSsmGet_Intake_VVT_Advance_Angle_Left_P49__________", SN_CHECK);
addr = Dword(0x00065688);
MakeNameEx(addr, "SsmGet_Intake_VVT_Advance_Angle_Left_P49__________", SN_CHECK);

MakeUnknown(0x0006568C, 4, DOUNK_SIMPLE);
MakeDword(0x0006568C);
MakeNameEx(0x0006568C, "PtrSsmGet_Intake_OCV_Duty_Right_P50__________", SN_CHECK);
addr = Dword(0x0006568C);
MakeNameEx(addr, "SsmGet_Intake_OCV_Duty_Right_P50__________", SN_CHECK);

MakeUnknown(0x00065690, 4, DOUNK_SIMPLE);
MakeDword(0x00065690);
MakeNameEx(0x00065690, "PtrSsmGet_Intake_OCV_Duty_Left_P51__________", SN_CHECK);
addr = Dword(0x00065690);
MakeNameEx(addr, "SsmGet_Intake_OCV_Duty_Left_P51__________", SN_CHECK);

MakeUnknown(0x00065694, 4, DOUNK_SIMPLE);
MakeDword(0x00065694);
MakeNameEx(0x00065694, "PtrSsmGet_Intake_OCV_Current_Right_P52__________", SN_CHECK);
addr = Dword(0x00065694);
MakeNameEx(addr, "SsmGet_Intake_OCV_Current_Right_P52__________", SN_CHECK);

MakeUnknown(0x00065698, 4, DOUNK_SIMPLE);
MakeDword(0x00065698);
MakeNameEx(0x00065698, "PtrSsmGet_Intake_OCV_Current_Left_P53__________", SN_CHECK);
addr = Dword(0x00065698);
MakeNameEx(addr, "SsmGet_Intake_OCV_Current_Left_P53__________", SN_CHECK);

MakeUnknown(0x0006569C, 4, DOUNK_SIMPLE);
MakeDword(0x0006569C);
MakeNameEx(0x0006569C, "PtrSsmGet_AF_Sensor_1_Current_P54__________", SN_CHECK);
addr = Dword(0x0006569C);
MakeNameEx(addr, "SsmGet_AF_Sensor_1_Current_P54__________", SN_CHECK);

MakeUnknown(0x000656A0, 4, DOUNK_SIMPLE);
MakeDword(0x000656A0);
MakeNameEx(0x000656A0, "PtrSsmGet_AF_Sensor_2_Current_P55__________", SN_CHECK);
addr = Dword(0x000656A0);
MakeNameEx(addr, "SsmGet_AF_Sensor_2_Current_P55__________", SN_CHECK);

MakeUnknown(0x000656A4, 4, DOUNK_SIMPLE);
MakeDword(0x000656A4);
MakeNameEx(0x000656A4, "PtrSsmGet_AF_Sensor_1_Resistance_P56__________", SN_CHECK);
addr = Dword(0x000656A4);
MakeNameEx(addr, "SsmGet_AF_Sensor_1_Resistance_P56__________", SN_CHECK);

MakeUnknown(0x000656A8, 4, DOUNK_SIMPLE);
MakeDword(0x000656A8);
MakeNameEx(0x000656A8, "PtrSsmGet_AF_Sensor_2_Resistance_P57__________", SN_CHECK);
addr = Dword(0x000656A8);
MakeNameEx(addr, "SsmGet_AF_Sensor_2_Resistance_P57__________", SN_CHECK);

MakeUnknown(0x000656AC, 4, DOUNK_SIMPLE);
MakeDword(0x000656AC);
MakeNameEx(0x000656AC, "PtrSsmGet_AF_Sensor_1_P58__________", SN_CHECK);
addr = Dword(0x000656AC);
MakeNameEx(addr, "SsmGet_AF_Sensor_1_P58__________", SN_CHECK);

MakeUnknown(0x000656B0, 4, DOUNK_SIMPLE);
MakeDword(0x000656B0);
MakeNameEx(0x000656B0, "PtrSsmGet_AF_Sensor_2_P59__________", SN_CHECK);
addr = Dword(0x000656B0);
MakeNameEx(addr, "SsmGet_AF_Sensor_2_P59__________", SN_CHECK);

MakeUnknown(0x000656BC, 4, DOUNK_SIMPLE);
MakeDword(0x000656BC);
MakeNameEx(0x000656BC, "PtrSsmGet_Gear_Position_P60__________", SN_CHECK);
addr = Dword(0x000656BC);
MakeNameEx(addr, "SsmGet_Gear_Position_P60__________", SN_CHECK);

MakeUnknown(0x000656E0, 4, DOUNK_SIMPLE);
MakeDword(0x000656E0);
MakeNameEx(0x000656E0, "PtrSsmGet_AF_Sensor_1_Heater_Current_P61__________", SN_CHECK);
addr = Dword(0x000656E0);
MakeNameEx(addr, "SsmGet_AF_Sensor_1_Heater_Current_P61__________", SN_CHECK);

MakeUnknown(0x000656E4, 4, DOUNK_SIMPLE);
MakeDword(0x000656E4);
MakeNameEx(0x000656E4, "PtrSsmGet_AF_Sensor_2_Heater_Current_P62__________", SN_CHECK);
addr = Dword(0x000656E4);
MakeNameEx(addr, "SsmGet_AF_Sensor_2_Heater_Current_P62__________", SN_CHECK);

MakeUnknown(0x000658CC, 4, DOUNK_SIMPLE);
MakeDword(0x000658CC);
MakeNameEx(0x000658CC, "PtrSsmGet_Roughness_Monitor_Cylinder_1_P63__________", SN_CHECK);
addr = Dword(0x000658CC);
MakeNameEx(addr, "SsmGet_Roughness_Monitor_Cylinder_1_P63__________", SN_CHECK);

MakeUnknown(0x000658D0, 4, DOUNK_SIMPLE);
MakeDword(0x000658D0);
MakeNameEx(0x000658D0, "PtrSsmGet_Roughness_Monitor_Cylinder_2_P64__________", SN_CHECK);
addr = Dword(0x000658D0);
MakeNameEx(addr, "SsmGet_Roughness_Monitor_Cylinder_2_P64__________", SN_CHECK);

MakeUnknown(0x000658D4, 4, DOUNK_SIMPLE);
MakeDword(0x000658D4);
MakeNameEx(0x000658D4, "PtrSsmGet_AF_Correction_3_16bit_ECU_P65__________", SN_CHECK);
addr = Dword(0x000658D4);
MakeNameEx(addr, "SsmGet_AF_Correction_3_16bit_ECU_P65__________", SN_CHECK);

MakeUnknown(0x000658D8, 4, DOUNK_SIMPLE);
MakeDword(0x000658D8);
MakeNameEx(0x000658D8, "PtrSsmGet_AF_Learning_3_P66__________", SN_CHECK);
addr = Dword(0x000658D8);
MakeNameEx(addr, "SsmGet_AF_Learning_3_P66__________", SN_CHECK);

MakeUnknown(0x000658DC, 4, DOUNK_SIMPLE);
MakeDword(0x000658DC);
MakeNameEx(0x000658DC, "PtrSsmGet_Rear_O2_Heater_Voltage_P67__________", SN_CHECK);
addr = Dword(0x000658DC);
MakeNameEx(addr, "SsmGet_Rear_O2_Heater_Voltage_P67__________", SN_CHECK);

MakeUnknown(0x000658E0, 4, DOUNK_SIMPLE);
MakeDword(0x000658E0);
MakeNameEx(0x000658E0, "PtrSsmGet_AF_Adjustment_Voltage_P68__________", SN_CHECK);
addr = Dword(0x000658E0);
MakeNameEx(addr, "SsmGet_AF_Adjustment_Voltage_P68__________", SN_CHECK);

MakeUnknown(0x000658F4, 4, DOUNK_SIMPLE);
MakeDword(0x000658F4);
MakeNameEx(0x000658F4, "PtrSsmGet_Roughness_Monitor_Cylinder_3_P69__________", SN_CHECK);
addr = Dword(0x000658F4);
MakeNameEx(addr, "SsmGet_Roughness_Monitor_Cylinder_3_P69__________", SN_CHECK);

MakeUnknown(0x000658F8, 4, DOUNK_SIMPLE);
MakeDword(0x000658F8);
MakeNameEx(0x000658F8, "PtrSsmGet_Roughness_Monitor_Cylinder_4_P70__________", SN_CHECK);
addr = Dword(0x000658F8);
MakeNameEx(addr, "SsmGet_Roughness_Monitor_Cylinder_4_P70__________", SN_CHECK);

MakeUnknown(0x0006597C, 4, DOUNK_SIMPLE);
MakeDword(0x0006597C);
MakeNameEx(0x0006597C, "PtrSsmGet_Throttle_Motor_Duty_P71__________", SN_CHECK);
addr = Dword(0x0006597C);
MakeNameEx(addr, "SsmGet_Throttle_Motor_Duty_P71__________", SN_CHECK);

MakeUnknown(0x00065980, 4, DOUNK_SIMPLE);
MakeDword(0x00065980);
MakeNameEx(0x00065980, "PtrSsmGet_Throttle_Motor_Voltage_P72__________", SN_CHECK);
addr = Dword(0x00065980);
MakeNameEx(addr, "SsmGet_Throttle_Motor_Voltage_P72__________", SN_CHECK);

MakeUnknown(0x00065994, 4, DOUNK_SIMPLE);
MakeDword(0x00065994);
MakeNameEx(0x00065994, "PtrSsmGet_Sub_Throttle_Sensor_P73__________", SN_CHECK);
addr = Dword(0x00065994);
MakeNameEx(addr, "SsmGet_Sub_Throttle_Sensor_P73__________", SN_CHECK);

MakeUnknown(0x00065998, 4, DOUNK_SIMPLE);
MakeDword(0x00065998);
MakeNameEx(0x00065998, "PtrSsmGet_Main_Throttle_Sensor_P74__________", SN_CHECK);
addr = Dword(0x00065998);
MakeNameEx(addr, "SsmGet_Main_Throttle_Sensor_P74__________", SN_CHECK);

MakeUnknown(0x0006599C, 4, DOUNK_SIMPLE);
MakeDword(0x0006599C);
MakeNameEx(0x0006599C, "PtrSsmGet_Sub_Accelerator_Sensor_P75__________", SN_CHECK);
addr = Dword(0x0006599C);
MakeNameEx(addr, "SsmGet_Sub_Accelerator_Sensor_P75__________", SN_CHECK);

MakeUnknown(0x000659A0, 4, DOUNK_SIMPLE);
MakeDword(0x000659A0);
MakeNameEx(0x000659A0, "PtrSsmGet_Main_Accelerator_Sensor_P76__________", SN_CHECK);
addr = Dword(0x000659A0);
MakeNameEx(addr, "SsmGet_Main_Accelerator_Sensor_P76__________", SN_CHECK);

MakeUnknown(0x000659A4, 4, DOUNK_SIMPLE);
MakeDword(0x000659A4);
MakeNameEx(0x000659A4, "PtrSsmGet_Brake_Booster_Pressure_P77__________", SN_CHECK);
addr = Dword(0x000659A4);
MakeNameEx(addr, "SsmGet_Brake_Booster_Pressure_P77__________", SN_CHECK);

MakeUnknown(0x000659A8, 4, DOUNK_SIMPLE);
MakeDword(0x000659A8);
MakeNameEx(0x000659A8, "PtrSsmGet_Fuel_Pressure_High_P78__________", SN_CHECK);
addr = Dword(0x000659A8);
MakeNameEx(addr, "SsmGet_Fuel_Pressure_High_P78__________", SN_CHECK);

MakeUnknown(0x000659AC, 4, DOUNK_SIMPLE);
MakeDword(0x000659AC);
MakeNameEx(0x000659AC, "PtrSsmGet_Exhaust_Gas_Temperature_P79__________", SN_CHECK);
addr = Dword(0x000659AC);
MakeNameEx(addr, "SsmGet_Exhaust_Gas_Temperature_P79__________", SN_CHECK);

MakeUnknown(0x000659B4, 4, DOUNK_SIMPLE);
MakeDword(0x000659B4);
MakeNameEx(0x000659B4, "PtrSsmGet_Cold_Start_Injector_Air_Pump_P80__________", SN_CHECK);
addr = Dword(0x000659B4);
MakeNameEx(addr, "SsmGet_Cold_Start_Injector_Air_Pump_P80__________", SN_CHECK);

MakeUnknown(0x000659B8, 4, DOUNK_SIMPLE);
MakeDword(0x000659B8);
MakeNameEx(0x000659B8, "PtrSsmGet_SCV_Step_P81__________", SN_CHECK);
addr = Dword(0x000659B8);
MakeNameEx(addr, "SsmGet_SCV_Step_P81__________", SN_CHECK);

MakeUnknown(0x000659BC, 4, DOUNK_SIMPLE);
MakeDword(0x000659BC);
MakeNameEx(0x000659BC, "PtrSsmGet_Memorised_Cruise_Speed_P82__________", SN_CHECK);
addr = Dword(0x000659BC);
MakeNameEx(addr, "SsmGet_Memorised_Cruise_Speed_P82__________", SN_CHECK);

MakeUnknown(0x000659F4, 4, DOUNK_SIMPLE);
MakeDword(0x000659F4);
MakeNameEx(0x000659F4, "PtrSsmGet_Exhaust_VVT_Advance_Angle_Right_P83__________", SN_CHECK);
addr = Dword(0x000659F4);
MakeNameEx(addr, "SsmGet_Exhaust_VVT_Advance_Angle_Right_P83__________", SN_CHECK);

MakeUnknown(0x000659F8, 4, DOUNK_SIMPLE);
MakeDword(0x000659F8);
MakeNameEx(0x000659F8, "PtrSsmGet_Exhaust_VVT_Advance_Angle_Left_P84__________", SN_CHECK);
addr = Dword(0x000659F8);
MakeNameEx(addr, "SsmGet_Exhaust_VVT_Advance_Angle_Left_P84__________", SN_CHECK);

MakeUnknown(0x000659FC, 4, DOUNK_SIMPLE);
MakeDword(0x000659FC);
MakeNameEx(0x000659FC, "PtrSsmGet_Exhaust_OCV_Duty_Right_P85__________", SN_CHECK);
addr = Dword(0x000659FC);
MakeNameEx(addr, "SsmGet_Exhaust_OCV_Duty_Right_P85__________", SN_CHECK);

MakeUnknown(0x00065A00, 4, DOUNK_SIMPLE);
MakeDword(0x00065A00);
MakeNameEx(0x00065A00, "PtrSsmGet_Exhaust_OCV_Duty_Left_P86__________", SN_CHECK);
addr = Dword(0x00065A00);
MakeNameEx(addr, "SsmGet_Exhaust_OCV_Duty_Left_P86__________", SN_CHECK);

MakeUnknown(0x00065A04, 4, DOUNK_SIMPLE);
MakeDword(0x00065A04);
MakeNameEx(0x00065A04, "PtrSsmGet_Exhaust_OCV_Current_Right_P87__________", SN_CHECK);
addr = Dword(0x00065A04);
MakeNameEx(addr, "SsmGet_Exhaust_OCV_Current_Right_P87__________", SN_CHECK);

MakeUnknown(0x00065A08, 4, DOUNK_SIMPLE);
MakeDword(0x00065A08);
MakeNameEx(0x00065A08, "PtrSsmGet_Exhaust_OCV_Current_Left_P88__________", SN_CHECK);
addr = Dword(0x00065A08);
MakeNameEx(addr, "SsmGet_Exhaust_OCV_Current_Left_P88__________", SN_CHECK);

MakeUnknown(0x000658D4, 4, DOUNK_SIMPLE);
MakeDword(0x000658D4);
MakeNameEx(0x000658D4, "PtrSsmGet_AF_Correction_3_32bit_ECU_P89__________", SN_CHECK);
addr = Dword(0x000658D4);
MakeNameEx(addr, "SsmGet_AF_Correction_3_32bit_ECU_P89__________", SN_CHECK);

MakeUnknown(0x00065978, 4, DOUNK_SIMPLE);
MakeDword(0x00065978);
MakeNameEx(0x00065978, "PtrSsmGet_IAM_P90__________", SN_CHECK);
addr = Dword(0x00065978);
MakeNameEx(addr, "SsmGet_IAM_P90__________", SN_CHECK);

MakeUnknown(0x00065BF8, 4, DOUNK_SIMPLE);
MakeDword(0x00065BF8);
MakeNameEx(0x00065BF8, "PtrSsmGet_Fine_Learning_Knock_Correction_P91__________", SN_CHECK);
addr = Dword(0x00065BF8);
MakeNameEx(addr, "SsmGet_Fine_Learning_Knock_Correction_P91__________", SN_CHECK);

MakeUnknown(0x00065650, 4, DOUNK_SIMPLE);
MakeDword(0x00065650);
MakeNameEx(0x00065650, "PtrSsmGet_Radiator_Fan_Control_P92__________", SN_CHECK);
addr = Dword(0x00065650);
MakeNameEx(addr, "SsmGet_Radiator_Fan_Control_P92__________", SN_CHECK);

MakeUnknown(0x00065B3C, 4, DOUNK_SIMPLE);
MakeDword(0x00065B3C);
MakeNameEx(0x00065B3C, "PtrSsmGet_SIDrive_Mode_P114__________", SN_CHECK);
addr = Dword(0x00065B3C);
MakeNameEx(addr, "SsmGet_SIDrive_Mode_P114__________", SN_CHECK);

MakeUnknown(0x00065B40, 4, DOUNK_SIMPLE);
MakeDword(0x00065B40);
MakeNameEx(0x00065B40, "PtrSsmGet_Throttle_Sensor_Closed_Voltage_P115__________", SN_CHECK);
addr = Dword(0x00065B40);
MakeNameEx(addr, "SsmGet_Throttle_Sensor_Closed_Voltage_P115__________", SN_CHECK);

MakeUnknown(0x000659B0, 4, DOUNK_SIMPLE);
MakeDword(0x000659B0);
MakeNameEx(0x000659B0, "PtrSsmGet_Exhaust_Gas_Temperature_2_P116__________", SN_CHECK);
addr = Dword(0x000659B0);
MakeNameEx(addr, "SsmGet_Exhaust_Gas_Temperature_2_P116__________", SN_CHECK);

MakeUnknown(0x000659C0, 4, DOUNK_SIMPLE);
MakeDword(0x000659C0);
MakeNameEx(0x000659C0, "PtrSsmGet_AirFuel_Correction_4_P117__________", SN_CHECK);
addr = Dword(0x000659C0);
MakeNameEx(addr, "SsmGet_AirFuel_Correction_4_P117__________", SN_CHECK);

MakeUnknown(0x000659C4, 4, DOUNK_SIMPLE);
MakeDword(0x000659C4);
MakeNameEx(0x000659C4, "PtrSsmGet_AirFuel_Learning_4_P118__________", SN_CHECK);
addr = Dword(0x000659C4);
MakeNameEx(addr, "SsmGet_AirFuel_Learning_4_P118__________", SN_CHECK);

MakeUnknown(0x000659C8, 4, DOUNK_SIMPLE);
MakeDword(0x000659C8);
MakeNameEx(0x000659C8, "PtrSsmGet_Fuel_Level_Sensor_Resistance_P119__________", SN_CHECK);
addr = Dword(0x000659C8);
MakeNameEx(addr, "SsmGet_Fuel_Level_Sensor_Resistance_P119__________", SN_CHECK);

MakeUnknown(0x000659CC, 4, DOUNK_SIMPLE);
MakeDword(0x000659CC);
MakeNameEx(0x000659CC, "PtrSsmGet_Estimated_odometer_P120__________", SN_CHECK);
addr = Dword(0x000659CC);
MakeNameEx(addr, "SsmGet_Estimated_odometer_P120__________", SN_CHECK);

MakeUnknown(0x00065B5C, 4, DOUNK_SIMPLE);
MakeDword(0x00065B5C);
MakeNameEx(0x00065B5C, "PtrSsmGet_Fuel_Tank_Air_Pressure_P121__________", SN_CHECK);
addr = Dword(0x00065B5C);
MakeNameEx(addr, "SsmGet_Fuel_Tank_Air_Pressure_P121__________", SN_CHECK);

MakeUnknown(0x000659E0, 4, DOUNK_SIMPLE);
MakeDword(0x000659E0);
MakeNameEx(0x000659E0, "PtrSsmGet_Oil_Temperature_P122__________", SN_CHECK);
addr = Dword(0x000659E0);
MakeNameEx(addr, "SsmGet_Oil_Temperature_P122__________", SN_CHECK);

MakeUnknown(0x000659E4, 4, DOUNK_SIMPLE);
MakeDword(0x000659E4);
MakeNameEx(0x000659E4, "PtrSsmGet_Oil_Switching_Solenoid_Valve_OSV_Duty_Right_P123__________", SN_CHECK);
addr = Dword(0x000659E4);
MakeNameEx(addr, "SsmGet_Oil_Switching_Solenoid_Valve_OSV_Duty_Right_P123__________", SN_CHECK);

MakeUnknown(0x000659E8, 4, DOUNK_SIMPLE);
MakeDword(0x000659E8);
MakeNameEx(0x000659E8, "PtrSsmGet_Oil_Switching_Solenoid_Valve_OSV_Duty_Left_P124__________", SN_CHECK);
addr = Dword(0x000659E8);
MakeNameEx(addr, "SsmGet_Oil_Switching_Solenoid_Valve_OSV_Duty_Left_P124__________", SN_CHECK);

MakeUnknown(0x000659EC, 4, DOUNK_SIMPLE);
MakeDword(0x000659EC);
MakeNameEx(0x000659EC, "PtrSsmGet_Oil_Switching_Solenoid_Valve_OSV_Current_Right_P125__________", SN_CHECK);
addr = Dword(0x000659EC);
MakeNameEx(addr, "SsmGet_Oil_Switching_Solenoid_Valve_OSV_Current_Right_P125__________", SN_CHECK);

MakeUnknown(0x000659F0, 4, DOUNK_SIMPLE);
MakeDword(0x000659F0);
MakeNameEx(0x000659F0, "PtrSsmGet_Oil_Switching_Solenoid_Valve_OSV_Current_Left_P126__________", SN_CHECK);
addr = Dword(0x000659F0);
MakeNameEx(addr, "SsmGet_Oil_Switching_Solenoid_Valve_OSV_Current_Left_P126__________", SN_CHECK);

MakeUnknown(0x00065A0C, 4, DOUNK_SIMPLE);
MakeDword(0x00065A0C);
MakeNameEx(0x00065A0C, "PtrSsmGet_VVL_Lift_Mode_P127__________", SN_CHECK);
addr = Dword(0x00065A0C);
MakeNameEx(addr, "SsmGet_VVL_Lift_Mode_P127__________", SN_CHECK);

MakeUnknown(0x00065950, 4, DOUNK_SIMPLE);
MakeDword(0x00065950);
MakeNameEx(0x00065950, "PtrSsmGet_Roughness_Monitor_Cylinder_5_P151__________", SN_CHECK);
addr = Dword(0x00065950);
MakeNameEx(addr, "SsmGet_Roughness_Monitor_Cylinder_5_P151__________", SN_CHECK);

MakeUnknown(0x00065974, 4, DOUNK_SIMPLE);
MakeDword(0x00065974);
MakeNameEx(0x00065974, "PtrSsmGet_Roughness_Monitor_Cylinder_6_P152__________", SN_CHECK);
addr = Dword(0x00065974);
MakeNameEx(addr, "SsmGet_Roughness_Monitor_Cylinder_6_P152__________", SN_CHECK);

MakeUnknown(0x00065978, 4, DOUNK_SIMPLE);
MakeDword(0x00065978);
MakeNameEx(0x00065978, "PtrSsmGet_Learned_Ignition_Timing_Correction_P153__________", SN_CHECK);
addr = Dword(0x00065978);
MakeNameEx(addr, "SsmGet_Learned_Ignition_Timing_Correction_P153__________", SN_CHECK);

MakeUnknown(0x00065BFC, 4, DOUNK_SIMPLE);
MakeDword(0x00065BFC);
MakeNameEx(0x00065BFC, "PtrSsmGet_Fuel_Tank_Pressure_P154__________", SN_CHECK);
addr = Dword(0x00065BFC);
MakeNameEx(addr, "SsmGet_Fuel_Tank_Pressure_P154__________", SN_CHECK);

MakeUnknown(0x00065D18, 4, DOUNK_SIMPLE);
MakeDword(0x00065D18);
MakeNameEx(0x00065D18, "PtrSsmGet_Main_Injection_Period_P155__________", SN_CHECK);
addr = Dword(0x00065D18);
MakeNameEx(addr, "SsmGet_Main_Injection_Period_P155__________", SN_CHECK);

MakeUnknown(0x00065D1C, 4, DOUNK_SIMPLE);
MakeDword(0x00065D1C);
MakeNameEx(0x00065D1C, "PtrSsmGet_Final_Injection_Amount_P156__________", SN_CHECK);
addr = Dword(0x00065D1C);
MakeNameEx(addr, "SsmGet_Final_Injection_Amount_P156__________", SN_CHECK);

MakeUnknown(0x00065D24, 4, DOUNK_SIMPLE);
MakeDword(0x00065D24);
MakeNameEx(0x00065D24, "PtrSsmGet_Number_of_Times_Injected_P157__________", SN_CHECK);
addr = Dword(0x00065D24);
MakeNameEx(addr, "SsmGet_Number_of_Times_Injected_P157__________", SN_CHECK);

MakeUnknown(0x00065D28, 4, DOUNK_SIMPLE);
MakeDword(0x00065D28);
MakeNameEx(0x00065D28, "PtrSsmGet_Target_Intake_Manifold_Pressure_P158__________", SN_CHECK);
addr = Dword(0x00065D28);
MakeNameEx(addr, "SsmGet_Target_Intake_Manifold_Pressure_P158__________", SN_CHECK);

MakeUnknown(0x00065D2C, 4, DOUNK_SIMPLE);
MakeDword(0x00065D2C);
MakeNameEx(0x00065D2C, "PtrSsmGet_Target_Intake_Air_Amount_P159__________", SN_CHECK);
addr = Dword(0x00065D2C);
MakeNameEx(addr, "SsmGet_Target_Intake_Air_Amount_P159__________", SN_CHECK);

MakeUnknown(0x00065D30, 4, DOUNK_SIMPLE);
MakeDword(0x00065D30);
MakeNameEx(0x00065D30, "PtrSsmGet_Air_Mass_P160__________", SN_CHECK);
addr = Dword(0x00065D30);
MakeNameEx(addr, "SsmGet_Air_Mass_P160__________", SN_CHECK);

MakeUnknown(0x00065D34, 4, DOUNK_SIMPLE);
MakeDword(0x00065D34);
MakeNameEx(0x00065D34, "PtrSsmGet_Exhaust_Gas_Recirculation_EGR_Target_Valve_Opening_Angle_P161__________", SN_CHECK);
addr = Dword(0x00065D34);
MakeNameEx(addr, "SsmGet_Exhaust_Gas_Recirculation_EGR_Target_Valve_Opening_Angle_P161__________", SN_CHECK);

MakeUnknown(0x00065D38, 4, DOUNK_SIMPLE);
MakeDword(0x00065D38);
MakeNameEx(0x00065D38, "PtrSsmGet_Exhaust_Gas_Recirculation_EGR_Valve_Opening_Angle_P162__________", SN_CHECK);
addr = Dword(0x00065D38);
MakeNameEx(addr, "SsmGet_Exhaust_Gas_Recirculation_EGR_Valve_Opening_Angle_P162__________", SN_CHECK);

MakeUnknown(0x00065D3C, 4, DOUNK_SIMPLE);
MakeDword(0x00065D3C);
MakeNameEx(0x00065D3C, "PtrSsmGet_Exhaust_Gas_Recirculation_EGR_Duty_P163__________", SN_CHECK);
addr = Dword(0x00065D3C);
MakeNameEx(addr, "SsmGet_Exhaust_Gas_Recirculation_EGR_Duty_P163__________", SN_CHECK);

MakeUnknown(0x00065D40, 4, DOUNK_SIMPLE);
MakeDword(0x00065D40);
MakeNameEx(0x00065D40, "PtrSsmGet_Common_Rail_Target_Pressure_P164__________", SN_CHECK);
addr = Dword(0x00065D40);
MakeNameEx(addr, "SsmGet_Common_Rail_Target_Pressure_P164__________", SN_CHECK);

MakeUnknown(0x00065D44, 4, DOUNK_SIMPLE);
MakeDword(0x00065D44);
MakeNameEx(0x00065D44, "PtrSsmGet_Common_Rail_Pressure_P165__________", SN_CHECK);
addr = Dword(0x00065D44);
MakeNameEx(addr, "SsmGet_Common_Rail_Pressure_P165__________", SN_CHECK);

MakeUnknown(0x00065D48, 4, DOUNK_SIMPLE);
MakeDword(0x00065D48);
MakeNameEx(0x00065D48, "PtrSsmGet_Intake_Air_Temperature_combined_P166__________", SN_CHECK);
addr = Dword(0x00065D48);
MakeNameEx(addr, "SsmGet_Intake_Air_Temperature_combined_P166__________", SN_CHECK);

MakeUnknown(0x00065D4C, 4, DOUNK_SIMPLE);
MakeDword(0x00065D4C);
MakeNameEx(0x00065D4C, "PtrSsmGet_Target_Engine_Speed_P167__________", SN_CHECK);
addr = Dword(0x00065D4C);
MakeNameEx(addr, "SsmGet_Target_Engine_Speed_P167__________", SN_CHECK);

MakeUnknown(0x00065D54, 4, DOUNK_SIMPLE);
MakeDword(0x00065D54);
MakeNameEx(0x00065D54, "PtrSsmGet_Boost_Pressure_Feedback_P168__________", SN_CHECK);
addr = Dword(0x00065D54);
MakeNameEx(addr, "SsmGet_Boost_Pressure_Feedback_P168__________", SN_CHECK);

MakeUnknown(0x00065D68, 4, DOUNK_SIMPLE);
MakeDword(0x00065D68);
MakeNameEx(0x00065D68, "PtrSsmGet_Electric_Power_Steering_Current_P169__________", SN_CHECK);
addr = Dword(0x00065D68);
MakeNameEx(addr, "SsmGet_Electric_Power_Steering_Current_P169__________", SN_CHECK);

MakeUnknown(0x00065D6C, 4, DOUNK_SIMPLE);
MakeDword(0x00065D6C);
MakeNameEx(0x00065D6C, "PtrSsmGet_Fuel_Pump_Suction_Control_Valve_Current_Target_P170__________", SN_CHECK);
addr = Dword(0x00065D6C);
MakeNameEx(addr, "SsmGet_Fuel_Pump_Suction_Control_Valve_Current_Target_P170__________", SN_CHECK);

MakeUnknown(0x00065D74, 4, DOUNK_SIMPLE);
MakeDword(0x00065D74);
MakeNameEx(0x00065D74, "PtrSsmGet_Fuel_Pump_Suction_Control_Valve_Current_Actual_P175__________", SN_CHECK);
addr = Dword(0x00065D74);
MakeNameEx(addr, "SsmGet_Fuel_Pump_Suction_Control_Valve_Current_Actual_P175__________", SN_CHECK);

MakeUnknown(0x00065D7C, 4, DOUNK_SIMPLE);
MakeDword(0x00065D7C);
MakeNameEx(0x00065D7C, "PtrSsmGet_Mileage_after_Injector_Learning_P176__________", SN_CHECK);
addr = Dword(0x00065D7C);
MakeNameEx(addr, "SsmGet_Mileage_after_Injector_Learning_P176__________", SN_CHECK);

MakeUnknown(0x00065DA4, 4, DOUNK_SIMPLE);
MakeDword(0x00065DA4);
MakeNameEx(0x00065DA4, "PtrSsmGet_Mileage_after_Injector_Replacement_P177__________", SN_CHECK);
addr = Dword(0x00065DA4);
MakeNameEx(addr, "SsmGet_Mileage_after_Injector_Replacement_P177__________", SN_CHECK);

MakeUnknown(0x00065F54, 4, DOUNK_SIMPLE);
MakeDword(0x00065F54);
MakeNameEx(0x00065F54, "PtrSsmGet_Interior_Heater_P178__________", SN_CHECK);
addr = Dword(0x00065F54);
MakeNameEx(addr, "SsmGet_Interior_Heater_P178__________", SN_CHECK);

MakeUnknown(0x00065F08, 4, DOUNK_SIMPLE);
MakeDword(0x00065F08);
MakeNameEx(0x00065F08, "PtrSsmGet_Quantity_Correction_Cylinder_1_P179__________", SN_CHECK);
addr = Dword(0x00065F08);
MakeNameEx(addr, "SsmGet_Quantity_Correction_Cylinder_1_P179__________", SN_CHECK);

MakeUnknown(0x00065F0C, 4, DOUNK_SIMPLE);
MakeDword(0x00065F0C);
MakeNameEx(0x00065F0C, "PtrSsmGet_Quantity_Correction_Cylinder_2_P180__________", SN_CHECK);
addr = Dword(0x00065F0C);
MakeNameEx(addr, "SsmGet_Quantity_Correction_Cylinder_2_P180__________", SN_CHECK);

MakeUnknown(0x00065F10, 4, DOUNK_SIMPLE);
MakeDword(0x00065F10);
MakeNameEx(0x00065F10, "PtrSsmGet_Quantity_Correction_Cylinder_3_P181__________", SN_CHECK);
addr = Dword(0x00065F10);
MakeNameEx(addr, "SsmGet_Quantity_Correction_Cylinder_3_P181__________", SN_CHECK);

MakeUnknown(0x00065F14, 4, DOUNK_SIMPLE);
MakeDword(0x00065F14);
MakeNameEx(0x00065F14, "PtrSsmGet_Quantity_Correction_Cylinder_4_P182__________", SN_CHECK);
addr = Dword(0x00065F14);
MakeNameEx(addr, "SsmGet_Quantity_Correction_Cylinder_4_P182__________", SN_CHECK);

MakeUnknown(0x00065F58, 4, DOUNK_SIMPLE);
MakeDword(0x00065F58);
MakeNameEx(0x00065F58, "PtrSsmGet_Battery_Current_P183__________", SN_CHECK);
addr = Dword(0x00065F58);
MakeNameEx(addr, "SsmGet_Battery_Current_P183__________", SN_CHECK);

MakeUnknown(0x00065F60, 4, DOUNK_SIMPLE);
MakeDword(0x00065F60);
MakeNameEx(0x00065F60, "PtrSsmGet_Battery_Temperature_P184__________", SN_CHECK);
addr = Dword(0x00065F60);
MakeNameEx(addr, "SsmGet_Battery_Temperature_P184__________", SN_CHECK);

MakeUnknown(0x00065F5C, 4, DOUNK_SIMPLE);
MakeDword(0x00065F5C);
MakeNameEx(0x00065F5C, "PtrSsmGet_Alternator_Control_Mode_P185__________", SN_CHECK);
addr = Dword(0x00065F5C);
MakeNameEx(addr, "SsmGet_Alternator_Control_Mode_P185__________", SN_CHECK);

MakeUnknown(0x00065F68, 4, DOUNK_SIMPLE);
MakeDword(0x00065F68);
MakeNameEx(0x00065F68, "PtrSsmGet_Cumulative_Ash_Ratio_P186__________", SN_CHECK);
addr = Dword(0x00065F68);
MakeNameEx(addr, "SsmGet_Cumulative_Ash_Ratio_P186__________", SN_CHECK);

MakeUnknown(0x00065F6C, 4, DOUNK_SIMPLE);
MakeDword(0x00065F6C);
MakeNameEx(0x00065F6C, "PtrSsmGet_Pressure_Difference_between_Diesel_Particulate_Filter_DPF_Inlet_and_Outlet_P187__________", SN_CHECK);
addr = Dword(0x00065F6C);
MakeNameEx(addr, "SsmGet_Pressure_Difference_between_Diesel_Particulate_Filter_DPF_Inlet_and_Outlet_P187__________", SN_CHECK);

MakeUnknown(0x00065F70, 4, DOUNK_SIMPLE);
MakeDword(0x00065F70);
MakeNameEx(0x00065F70, "PtrSsmGet_Exhaust_Gas_Temperature_at_Catalyst_Inlet_P188__________", SN_CHECK);
addr = Dword(0x00065F70);
MakeNameEx(addr, "SsmGet_Exhaust_Gas_Temperature_at_Catalyst_Inlet_P188__________", SN_CHECK);

MakeUnknown(0x00065F74, 4, DOUNK_SIMPLE);
MakeDword(0x00065F74);
MakeNameEx(0x00065F74, "PtrSsmGet_Exhaust_Gas_Temperature_at_Diesel_Particulate_Filter_DPF_Inlet_P189__________", SN_CHECK);
addr = Dword(0x00065F74);
MakeNameEx(addr, "SsmGet_Exhaust_Gas_Temperature_at_Diesel_Particulate_Filter_DPF_Inlet_P189__________", SN_CHECK);

MakeUnknown(0x00065F78, 4, DOUNK_SIMPLE);
MakeDword(0x00065F78);
MakeNameEx(0x00065F78, "PtrSsmGet_Estimated_Catalyst_Temperature_P190__________", SN_CHECK);
addr = Dword(0x00065F78);
MakeNameEx(addr, "SsmGet_Estimated_Catalyst_Temperature_P190__________", SN_CHECK);

MakeUnknown(0x00065F7C, 4, DOUNK_SIMPLE);
MakeDword(0x00065F7C);
MakeNameEx(0x00065F7C, "PtrSsmGet_Estimated_Temperature_of_the_Diesel_Particulate_Filter_DPF_P191__________", SN_CHECK);
addr = Dword(0x00065F7C);
MakeNameEx(addr, "SsmGet_Estimated_Temperature_of_the_Diesel_Particulate_Filter_DPF_P191__________", SN_CHECK);

MakeUnknown(0x00065F80, 4, DOUNK_SIMPLE);
MakeDword(0x00065F80);
MakeNameEx(0x00065F80, "PtrSsmGet_Soot_Accumulation_Ratio_P192__________", SN_CHECK);
addr = Dword(0x00065F80);
MakeNameEx(addr, "SsmGet_Soot_Accumulation_Ratio_P192__________", SN_CHECK);

MakeUnknown(0x00065F84, 4, DOUNK_SIMPLE);
MakeDword(0x00065F84);
MakeNameEx(0x00065F84, "PtrSsmGet_Oil_Dilution_Ratio_P193__________", SN_CHECK);
addr = Dword(0x00065F84);
MakeNameEx(addr, "SsmGet_Oil_Dilution_Ratio_P193__________", SN_CHECK);

MakeUnknown(0x00065FF4, 4, DOUNK_SIMPLE);
MakeDword(0x00065FF4);
MakeNameEx(0x00065FF4, "PtrSsmGet_Accumulated_Count_of_Overspeed_Instances_Very_High_RPM_P198__________", SN_CHECK);
addr = Dword(0x00065FF4);
MakeNameEx(addr, "SsmGet_Accumulated_Count_of_Overspeed_Instances_Very_High_RPM_P198__________", SN_CHECK);

MakeUnknown(0x00065FF8, 4, DOUNK_SIMPLE);
MakeDword(0x00065FF8);
MakeNameEx(0x00065FF8, "PtrSsmGet_Accumulated_Count_of_Overspeed_Instances_High_RPM_P199__________", SN_CHECK);
addr = Dword(0x00065FF8);
MakeNameEx(addr, "SsmGet_Accumulated_Count_of_Overspeed_Instances_High_RPM_P199__________", SN_CHECK);

MakeUnknown(0x00065E10, 4, DOUNK_SIMPLE);
MakeDword(0x00065E10);
MakeNameEx(0x00065E10, "PtrSsmGet_Actual_Common_Rail_Pressure_Time_Synchronized_P204__________", SN_CHECK);
addr = Dword(0x00065E10);
MakeNameEx(addr, "SsmGet_Actual_Common_Rail_Pressure_Time_Synchronized_P204__________", SN_CHECK);

MakeUnknown(0x00065FFC, 4, DOUNK_SIMPLE);
MakeDword(0x00065FFC);
MakeNameEx(0x00065FFC, "PtrSsmGet_Estimated_Distance_to_Oil_Change_P205__________", SN_CHECK);
addr = Dword(0x00065FFC);
MakeNameEx(addr, "SsmGet_Estimated_Distance_to_Oil_Change_P205__________", SN_CHECK);

MakeUnknown(0x00066000, 4, DOUNK_SIMPLE);
MakeDword(0x00066000);
MakeNameEx(0x00066000, "PtrSsmGet_Running_Distance_since_last_Diesel_Particulate_Filter_DPF_Regeneration_P206__________", SN_CHECK);
addr = Dword(0x00066000);
MakeNameEx(addr, "SsmGet_Running_Distance_since_last_Diesel_Particulate_Filter_DPF_Regeneration_P206__________", SN_CHECK);

MakeUnknown(0x00066008, 4, DOUNK_SIMPLE);
MakeDword(0x00066008);
MakeNameEx(0x00066008, "PtrSsmGet_Diesel_Particulate_Filter_DPF_Regeneration_Count_P207__________", SN_CHECK);
addr = Dword(0x00066008);
MakeNameEx(addr, "SsmGet_Diesel_Particulate_Filter_DPF_Regeneration_Count_P207__________", SN_CHECK);

MakeUnknown(0x00065E88, 4, DOUNK_SIMPLE);
MakeDword(0x00065E88);
MakeNameEx(0x00065E88, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_11_P208__________", SN_CHECK);
addr = Dword(0x00065E88);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_11_P208__________", SN_CHECK);

MakeUnknown(0x00065E8C, 4, DOUNK_SIMPLE);
MakeDword(0x00065E8C);
MakeNameEx(0x00065E8C, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_12_P209__________", SN_CHECK);
addr = Dword(0x00065E8C);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_12_P209__________", SN_CHECK);

MakeUnknown(0x00065E90, 4, DOUNK_SIMPLE);
MakeDword(0x00065E90);
MakeNameEx(0x00065E90, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_13_P210__________", SN_CHECK);
addr = Dword(0x00065E90);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_13_P210__________", SN_CHECK);

MakeUnknown(0x00065E94, 4, DOUNK_SIMPLE);
MakeDword(0x00065E94);
MakeNameEx(0x00065E94, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_14_P211__________", SN_CHECK);
addr = Dword(0x00065E94);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_14_P211__________", SN_CHECK);

MakeUnknown(0x00065E98, 4, DOUNK_SIMPLE);
MakeDword(0x00065E98);
MakeNameEx(0x00065E98, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_21_P212__________", SN_CHECK);
addr = Dword(0x00065E98);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_21_P212__________", SN_CHECK);

MakeUnknown(0x00065E9C, 4, DOUNK_SIMPLE);
MakeDword(0x00065E9C);
MakeNameEx(0x00065E9C, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_22_P213__________", SN_CHECK);
addr = Dword(0x00065E9C);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_22_P213__________", SN_CHECK);

MakeUnknown(0x00065EA0, 4, DOUNK_SIMPLE);
MakeDword(0x00065EA0);
MakeNameEx(0x00065EA0, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_23_P214__________", SN_CHECK);
addr = Dword(0x00065EA0);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_23_P214__________", SN_CHECK);

MakeUnknown(0x00065EA4, 4, DOUNK_SIMPLE);
MakeDword(0x00065EA4);
MakeNameEx(0x00065EA4, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_24_P215__________", SN_CHECK);
addr = Dword(0x00065EA4);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_24_P215__________", SN_CHECK);

MakeUnknown(0x00065EA8, 4, DOUNK_SIMPLE);
MakeDword(0x00065EA8);
MakeNameEx(0x00065EA8, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_31_P216__________", SN_CHECK);
addr = Dword(0x00065EA8);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_31_P216__________", SN_CHECK);

MakeUnknown(0x00065EAC, 4, DOUNK_SIMPLE);
MakeDword(0x00065EAC);
MakeNameEx(0x00065EAC, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_32_P217__________", SN_CHECK);
addr = Dword(0x00065EAC);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_32_P217__________", SN_CHECK);

MakeUnknown(0x00065EB0, 4, DOUNK_SIMPLE);
MakeDword(0x00065EB0);
MakeNameEx(0x00065EB0, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_33_P218__________", SN_CHECK);
addr = Dword(0x00065EB0);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_33_P218__________", SN_CHECK);

MakeUnknown(0x00065EB4, 4, DOUNK_SIMPLE);
MakeDword(0x00065EB4);
MakeNameEx(0x00065EB4, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_34_P219__________", SN_CHECK);
addr = Dword(0x00065EB4);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_34_P219__________", SN_CHECK);

MakeUnknown(0x00065EB8, 4, DOUNK_SIMPLE);
MakeDword(0x00065EB8);
MakeNameEx(0x00065EB8, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_41_P220__________", SN_CHECK);
addr = Dword(0x00065EB8);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_41_P220__________", SN_CHECK);

MakeUnknown(0x00065EBC, 4, DOUNK_SIMPLE);
MakeDword(0x00065EBC);
MakeNameEx(0x00065EBC, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_42_P221__________", SN_CHECK);
addr = Dword(0x00065EBC);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_42_P221__________", SN_CHECK);

MakeUnknown(0x00065EC0, 4, DOUNK_SIMPLE);
MakeDword(0x00065EC0);
MakeNameEx(0x00065EC0, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_43_P222__________", SN_CHECK);
addr = Dword(0x00065EC0);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_43_P222__________", SN_CHECK);

MakeUnknown(0x00065EC4, 4, DOUNK_SIMPLE);
MakeDword(0x00065EC4);
MakeNameEx(0x00065EC4, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_44_P223__________", SN_CHECK);
addr = Dword(0x00065EC4);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_44_P223__________", SN_CHECK);

MakeUnknown(0x00065EC8, 4, DOUNK_SIMPLE);
MakeDword(0x00065EC8);
MakeNameEx(0x00065EC8, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_51_P224__________", SN_CHECK);
addr = Dword(0x00065EC8);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_51_P224__________", SN_CHECK);

MakeUnknown(0x00065ECC, 4, DOUNK_SIMPLE);
MakeDword(0x00065ECC);
MakeNameEx(0x00065ECC, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_52_P225__________", SN_CHECK);
addr = Dword(0x00065ECC);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_52_P225__________", SN_CHECK);

MakeUnknown(0x00065ED0, 4, DOUNK_SIMPLE);
MakeDword(0x00065ED0);
MakeNameEx(0x00065ED0, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_53_P226__________", SN_CHECK);
addr = Dword(0x00065ED0);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_53_P226__________", SN_CHECK);

MakeUnknown(0x00065ED4, 4, DOUNK_SIMPLE);
MakeDword(0x00065ED4);
MakeNameEx(0x00065ED4, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_54_P227__________", SN_CHECK);
addr = Dword(0x00065ED4);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_54_P227__________", SN_CHECK);

MakeUnknown(0x00065E74, 4, DOUNK_SIMPLE);
MakeDword(0x00065E74);
MakeNameEx(0x00065E74, "PtrSsmGet_Individual_Pump_Difference_Learning_Value_P228__________", SN_CHECK);
addr = Dword(0x00065E74);
MakeNameEx(addr, "SsmGet_Individual_Pump_Difference_Learning_Value_P228__________", SN_CHECK);

MakeUnknown(0x00065EF0, 4, DOUNK_SIMPLE);
MakeDword(0x00065EF0);
MakeNameEx(0x00065EF0, "PtrSsmGet_Final_Main_Injection_Period_P229__________", SN_CHECK);
addr = Dword(0x00065EF0);
MakeNameEx(addr, "SsmGet_Final_Main_Injection_Period_P229__________", SN_CHECK);

MakeUnknown(0x00065EE8, 4, DOUNK_SIMPLE);
MakeDword(0x00065EE8);
MakeNameEx(0x00065EE8, "PtrSsmGet_PreInjection_Final_Period_P233__________", SN_CHECK);
addr = Dword(0x00065EE8);
MakeNameEx(addr, "SsmGet_PreInjection_Final_Period_P233__________", SN_CHECK);

MakeUnknown(0x00065E50, 4, DOUNK_SIMPLE);
MakeDword(0x00065E50);
MakeNameEx(0x00065E50, "PtrSsmGet_PreInjection_Amount_P234__________", SN_CHECK);
addr = Dword(0x00065E50);
MakeNameEx(addr, "SsmGet_PreInjection_Amount_P234__________", SN_CHECK);

MakeUnknown(0x00065E58, 4, DOUNK_SIMPLE);
MakeDword(0x00065E58);
MakeNameEx(0x00065E58, "PtrSsmGet_PreInjection_Interval_P235__________", SN_CHECK);
addr = Dword(0x00065E58);
MakeNameEx(addr, "SsmGet_PreInjection_Interval_P235__________", SN_CHECK);

MakeUnknown(0x0006601C, 4, DOUNK_SIMPLE);
MakeDword(0x0006601C);
MakeNameEx(0x0006601C, "PtrSsmGet_Cumulative_oil_diesel_entry_P236__________", SN_CHECK);
addr = Dword(0x0006601C);
MakeNameEx(addr, "SsmGet_Cumulative_oil_diesel_entry_P236__________", SN_CHECK);

MakeUnknown(0x00065E5C, 4, DOUNK_SIMPLE);
MakeDword(0x00065E5C);
MakeNameEx(0x00065E5C, "PtrSsmGet_Final_Initial_Torque_P238__________", SN_CHECK);
addr = Dword(0x00065E5C);
MakeNameEx(addr, "SsmGet_Final_Initial_Torque_P238__________", SN_CHECK);

MakeUnknown(0x00065750, 4, DOUNK_SIMPLE);
MakeDword(0x00065750);
MakeNameEx(0x00065750, "PtrSsmGet_Global_Timing_User_Adjustment_Value_P239__________", SN_CHECK);
addr = Dword(0x00065750);
MakeNameEx(addr, "SsmGet_Global_Timing_User_Adjustment_Value_P239__________", SN_CHECK);

MakeUnknown(0x00065754, 4, DOUNK_SIMPLE);
MakeDword(0x00065754);
MakeNameEx(0x00065754, "PtrSsmGet_Engine_Idle_Speed_User_Adjustment_AC_off_P240__________", SN_CHECK);
addr = Dword(0x00065754);
MakeNameEx(addr, "SsmGet_Engine_Idle_Speed_User_Adjustment_AC_off_P240__________", SN_CHECK);

MakeUnknown(0x00065758, 4, DOUNK_SIMPLE);
MakeDword(0x00065758);
MakeNameEx(0x00065758, "PtrSsmGet_Engine_Idle_Speed_User_Adjustment_AC_on_P241__________", SN_CHECK);
addr = Dword(0x00065758);
MakeNameEx(addr, "SsmGet_Engine_Idle_Speed_User_Adjustment_AC_on_P241__________", SN_CHECK);

MakeUnknown(0x000659B4, 4, DOUNK_SIMPLE);
MakeDword(0x000659B4);
MakeNameEx(0x000659B4, "PtrSsmGet_Secondary_Air_Piping_Pressure_P244__________", SN_CHECK);
addr = Dword(0x000659B4);
MakeNameEx(addr, "SsmGet_Secondary_Air_Piping_Pressure_P244__________", SN_CHECK);

MakeUnknown(0x00065B9C, 4, DOUNK_SIMPLE);
MakeDword(0x00065B9C);
MakeNameEx(0x00065B9C, "PtrSsmGet_Secondary_Air_Flow_P245__________", SN_CHECK);
addr = Dword(0x00065B9C);
MakeNameEx(addr, "SsmGet_Secondary_Air_Flow_P245__________", SN_CHECK);

// Switch Bit Position Name format: Switches_b7_b6_b5_b4_b3_b2_b1_b0
MakeUnknown(0x00065718, 4, DOUNK_SIMPLE);
MakeDword(0x00065718);
MakeNameEx(0x00065718, "PtrSsmGet_Switches_x_1_2_3_x_69_70_71__________", SN_CHECK);
addr = Dword(0x00065718);
MakeNameEx(addr, "SsmGet_Switches_x_1_2_3_x_69_70_71__________", SN_CHECK);

MakeUnknown(0x0006571C, 4, DOUNK_SIMPLE);
MakeDword(0x0006571C);
MakeNameEx(0x0006571C, "PtrSsmGet_Switches_4_5_x_6_7_8_9_x__________", SN_CHECK);
addr = Dword(0x0006571C);
MakeNameEx(addr, "SsmGet_Switches_4_5_x_6_7_8_9_x__________", SN_CHECK);

MakeUnknown(0x00065720, 4, DOUNK_SIMPLE);
MakeDword(0x00065720);
MakeNameEx(0x00065720, "PtrSsmGet_Switches_10_11_12_13_14_15_16_17__________", SN_CHECK);
addr = Dword(0x00065720);
MakeNameEx(addr, "SsmGet_Switches_10_11_12_13_14_15_16_17__________", SN_CHECK);

MakeUnknown(0x00065724, 4, DOUNK_SIMPLE);
MakeDword(0x00065724);
MakeNameEx(0x00065724, "PtrSsmGet_Switches_18_19_20_21_22_23_24_25__________", SN_CHECK);
addr = Dword(0x00065724);
MakeNameEx(addr, "SsmGet_Switches_18_19_20_21_22_23_24_25__________", SN_CHECK);

MakeUnknown(0x00065728, 4, DOUNK_SIMPLE);
MakeDword(0x00065728);
MakeNameEx(0x00065728, "PtrSsmGet_Switches_26_27_28_29_30_31_32_33__________", SN_CHECK);
addr = Dword(0x00065728);
MakeNameEx(addr, "SsmGet_Switches_26_27_28_29_30_31_32_33__________", SN_CHECK);

MakeUnknown(0x0006572C, 4, DOUNK_SIMPLE);
MakeDword(0x0006572C);
MakeNameEx(0x0006572C, "PtrSsmGet_Switches_34_35_36_37_38_39_40_41__________", SN_CHECK);
addr = Dword(0x0006572C);
MakeNameEx(addr, "SsmGet_Switches_34_35_36_37_38_39_40_41__________", SN_CHECK);

MakeUnknown(0x00065730, 4, DOUNK_SIMPLE);
MakeDword(0x00065730);
MakeNameEx(0x00065730, "PtrSsmGet_Switches_42_43_44_45_46_47_48_49__________", SN_CHECK);
addr = Dword(0x00065730);
MakeNameEx(addr, "SsmGet_Switches_42_43_44_45_46_47_48_49__________", SN_CHECK);

MakeUnknown(0x00065734, 4, DOUNK_SIMPLE);
MakeDword(0x00065734);
MakeNameEx(0x00065734, "PtrSsmGet_Switches_72_73_74_75_50_51_52_53__________", SN_CHECK);
addr = Dword(0x00065734);
MakeNameEx(addr, "SsmGet_Switches_72_73_74_75_50_51_52_53__________", SN_CHECK);

MakeUnknown(0x00065738, 4, DOUNK_SIMPLE);
MakeDword(0x00065738);
MakeNameEx(0x00065738, "PtrSsmGet_Switches_54_55_56_57_58_59_60_61__________", SN_CHECK);
addr = Dword(0x00065738);
MakeNameEx(addr, "SsmGet_Switches_54_55_56_57_58_59_60_61__________", SN_CHECK);

MakeUnknown(0x00065A14, 4, DOUNK_SIMPLE);
MakeDword(0x00065A14);
MakeNameEx(0x00065A14, "PtrSsmGet_Switches_130_62_131_x_x_x_x_x__________", SN_CHECK);
addr = Dword(0x00065A14);
MakeNameEx(addr, "SsmGet_Switches_130_62_131_x_x_x_x_x__________", SN_CHECK);

MakeUnknown(0x00065A18, 4, DOUNK_SIMPLE);
MakeDword(0x00065A18);
MakeNameEx(0x00065A18, "PtrSsmGet_Switches_63_64_65_66_67_132_68_133__________", SN_CHECK);
addr = Dword(0x00065A18);
MakeNameEx(addr, "SsmGet_Switches_63_64_65_66_67_132_68_133__________", SN_CHECK);

MakeUnknown(0x0006573C, 4, DOUNK_SIMPLE);
MakeDword(0x0006573C);
MakeNameEx(0x0006573C, "PtrSsmGet_Switches_x_x_x_x_x_x_82_x__________", SN_CHECK);
addr = Dword(0x0006573C);
MakeNameEx(addr, "SsmGet_Switches_x_x_x_x_x_x_82_x__________", SN_CHECK);

MakeUnknown(0x0006574C, 4, DOUNK_SIMPLE);
MakeDword(0x0006574C);
MakeNameEx(0x0006574C, "PtrSsmGet_Switches_108_x_x_x_x_x_x_x__________", SN_CHECK);
addr = Dword(0x0006574C);
MakeNameEx(addr, "SsmGet_Switches_108_x_x_x_x_x_x_x__________", SN_CHECK);

MakeUnknown(0x000658F0, 4, DOUNK_SIMPLE);
MakeDword(0x000658F0);
MakeNameEx(0x000658F0, "PtrSsmGet_Switches_148_149_x_150_151_152_153_154__________", SN_CHECK);
addr = Dword(0x000658F0);
MakeNameEx(addr, "SsmGet_Switches_148_149_x_150_151_152_153_154__________", SN_CHECK);

MakeUnknown(0x00065BEC, 4, DOUNK_SIMPLE);
MakeDword(0x00065BEC);
MakeNameEx(0x00065BEC, "PtrSsmGet_Switches_155_156_157_x_x_x_x_x__________", SN_CHECK);
addr = Dword(0x00065BEC);
MakeNameEx(addr, "SsmGet_Switches_155_156_157_x_x_x_x_x__________", SN_CHECK);

MakeUnknown(0x00065BF0, 4, DOUNK_SIMPLE);
MakeDword(0x00065BF0);
MakeNameEx(0x00065BF0, "PtrSsmGet_Switches_158_159_160_161_162_163_164_165__________", SN_CHECK);
addr = Dword(0x00065BF0);
MakeNameEx(addr, "SsmGet_Switches_158_159_160_161_162_163_164_165__________", SN_CHECK);

MakeUnknown(0x00065CCC, 4, DOUNK_SIMPLE);
MakeDword(0x00065CCC);
MakeNameEx(0x00065CCC, "PtrSsmGet_Switches_168_169_170_171_172_x_x_x__________", SN_CHECK);
addr = Dword(0x00065CCC);
MakeNameEx(addr, "SsmGet_Switches_168_169_170_171_172_x_x_x__________", SN_CHECK);

}   // end of StdParams

static ExtParams ()
{
Message("--- Now marking ExtParams ---\n");
MakeNameEx(0xFFFF32D8, "E_IAM_4byteExt___________E31", SN_CHECK);
MakeUnknown(0xFFFF32D8, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF32D8);
MakeNameEx(0xFFFF63FC, "E_Engine_Load_4ByteExt___________E32", SN_CHECK);
MakeUnknown(0xFFFF63FC, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF63FC);
MakeNameEx(0xFFFFB141, "E_CLOL_FuelingExt___________E33", SN_CHECK);
MakeUnknown(0xFFFFB141, 1, DOUNK_SIMPLE);
MakeByte(0xFFFFB141);
MakeNameEx(0xFFFF5CAC, "E_Turbo_Dynamics_Integral_4byteExt___________E34", SN_CHECK);
MakeUnknown(0xFFFF5CAC, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF5CAC);
MakeNameEx(0xFFFF5C9C, "E_Boost_ErrorExt___________E35", SN_CHECK);
MakeUnknown(0xFFFF5C9C, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF5C9C);
MakeNameEx(0xFFFF5CA4, "E_Target_Boost_4byteExt___________E36", SN_CHECK);
MakeUnknown(0xFFFF5CA4, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF5CA4);
MakeNameEx(0xFFFF5CA8, "E_Turbo_Dynamics_Proportional_4byteExt___________E37", SN_CHECK);
MakeUnknown(0xFFFF5CA8, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF5CA8);
MakeNameEx(0xFFFF62E4, "E_Throttle_Plate_Opening_Angle_4byteExt___________E38", SN_CHECK);
MakeUnknown(0xFFFF62E4, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF62E4);
MakeNameEx(0xFFFF81E0, "E_Feedback_Knock_Correction_4byteExt___________E39", SN_CHECK);
MakeUnknown(0xFFFF81E0, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF81E0);
MakeNameEx(0xFFFF8250, "E_Knock_Correction_Advance_IAM_onlyExt___________E40", SN_CHECK);
MakeUnknown(0xFFFF8250, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF8250);
MakeNameEx(0xFFFF827C, "E_Fine_Learning_Knock_Correction_4byteExt___________E41", SN_CHECK);
MakeUnknown(0xFFFF827C, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF827C);
MakeNameEx(0xFFFF3210, "E_AF_Learning_1_A_StoredExt___________E44", SN_CHECK);
MakeUnknown(0xFFFF3210, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF3210);
MakeNameEx(0xFFFF3218, "E_AF_Learning_1_B_StoredExt___________E45", SN_CHECK);
MakeUnknown(0xFFFF3218, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF3218);
MakeNameEx(0xFFFF3220, "E_AF_Learning_1_C_StoredExt___________E46", SN_CHECK);
MakeUnknown(0xFFFF3220, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF3220);
MakeNameEx(0xFFFF3228, "E_AF_Learning_1_D_StoredExt___________E47", SN_CHECK);
MakeUnknown(0xFFFF3228, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF3228);
MakeNameEx(0xFFFF7890, "E_AF_Learning_1_4byteExt___________E48", SN_CHECK);
MakeUnknown(0xFFFF7890, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF7890);
MakeNameEx(0xFFFF8964, "E_Idle_Speed_Map_SelectionExt___________E49", SN_CHECK);
MakeUnknown(0xFFFF8964, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF8964);
MakeNameEx(0xFFFF735C, "E_Fuel_Injector_1_Latency_4byteExt___________E50", SN_CHECK);
MakeUnknown(0xFFFF735C, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF735C);
MakeNameEx(0xFFFF6214, "E_Manifold_Absolute_Pressure_4byteExt___________E51", SN_CHECK);
MakeUnknown(0xFFFF6214, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF6214);
MakeNameEx(0xFFFF6214, "E_Manifold_Relative_Sea_Level_Pressure_4byteExt___________E52", SN_CHECK);
MakeUnknown(0xFFFF6214, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF6214);
MakeNameEx(0xFFFF7F20, "E_Ignition_Base_TimingExt___________E53", SN_CHECK);
MakeUnknown(0xFFFF7F20, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF7F20);
MakeNameEx(0xFFFF62EC, "E_Tipin_ThrottleExt___________E54", SN_CHECK);
MakeUnknown(0xFFFF62EC, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF62EC);
MakeNameEx(0xFFFF7C48, "E_Tipin_Enrichment_Last_CalculatedExt___________E55", SN_CHECK);
MakeUnknown(0xFFFF7C48, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF7C48);
MakeNameEx(0xFFFF854C, "E_Requested_TorqueExt___________E56", SN_CHECK);
MakeUnknown(0xFFFF854C, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF854C);
MakeNameEx(0xFFFF8544, "E_Target_Throttle_Plate_PositionExt___________E57", SN_CHECK);
MakeUnknown(0xFFFF8544, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF8544);
MakeNameEx(0xFFFF8288, "E_Fine_Learning_Table_OffsetExt___________E58", SN_CHECK);
MakeUnknown(0xFFFF8288, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF8288);
MakeNameEx(0xFFFF6835, "E_Gear_CalculatedExt___________E59", SN_CHECK);
MakeUnknown(0xFFFF6835, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF6835);
MakeNameEx(0xFFFF7DA8, "E_Fuel_Injector_1_Pulse_Width_4byteExt___________E60", SN_CHECK);
MakeUnknown(0xFFFF7DA8, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF7DA8);
MakeNameEx(0xFFFF7897, "E_AF_Learning_Airflow_Range_CurrentExt___________E61", SN_CHECK);
MakeUnknown(0xFFFF7897, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF7897);
MakeNameEx(0xFFFF5CC0, "E_Primary_Wastegate_Duty_MaximumExt_4byteExt________________E77", SN_CHECK);
MakeUnknown(0xFFFF5CC0, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF5CC0);
MakeNameEx(0xFFFF76E4, "E_AF_Correction_1_4byteExt___________E81", SN_CHECK);
MakeUnknown(0xFFFF76E4, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF76E4);
MakeNameEx(0xFFFF687A, "E_AF_Correction_1_2byteExtExt___________E82", SN_CHECK);
MakeUnknown(0xFFFF687A, 2, DOUNK_SIMPLE);
MakeWord(0xFFFF687A);
MakeNameEx(0xFFFF687E, "E_AF_Learning_1_2byteExtExt___________E83", SN_CHECK);
MakeUnknown(0xFFFF687E, 2, DOUNK_SIMPLE);
MakeWord(0xFFFF687E);
MakeNameEx(0xFFFF79A0, "E_Primary_Open_Loop_Map_Enrichment_4byteExt___________E84", SN_CHECK);
MakeUnknown(0xFFFF79A0, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF79A0);
MakeNameEx(0xFFFF6884, "E_Primary_Open_Loop_Map_Enrichment_2byteExtExt___________E85", SN_CHECK);
MakeUnknown(0xFFFF6884, 2, DOUNK_SIMPLE);
MakeWord(0xFFFF6884);
MakeNameEx(0xFFFF6895, "E_Engine_Load_1byteExtExt___________E86", SN_CHECK);
MakeUnknown(0xFFFF6895, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF6895);
MakeNameEx(0xFFFF6860, "E_Manifold_Absolute_Pressure_2byteExtExt___________E88", SN_CHECK);
MakeUnknown(0xFFFF6860, 2, DOUNK_SIMPLE);
MakeWord(0xFFFF6860);
MakeNameEx(0xFFFF6860, "E_Manifold_Relative_Sea_Level_Pressure_2byteExtExt___________E89", SN_CHECK);
MakeUnknown(0xFFFF6860, 2, DOUNK_SIMPLE);
MakeWord(0xFFFF6860);
MakeNameEx(0xFFFF6890, "E_Target_Boost_2byteExtExt___________E90", SN_CHECK);
MakeUnknown(0xFFFF6890, 2, DOUNK_SIMPLE);
MakeWord(0xFFFF6890);
MakeNameEx(0xFFFF6560, "E_AF_Sensor_1_4byteExt___________E91", SN_CHECK);
MakeUnknown(0xFFFF6560, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF6560);
MakeNameEx(0xFFFF6868, "E_AF_Sensor_1_2byteExtExt___________E92", SN_CHECK);
MakeUnknown(0xFFFF6868, 2, DOUNK_SIMPLE);
MakeWord(0xFFFF6868);
MakeNameEx(0xFFFF6862, "E_Throttle_Plate_Opening_Angle_2byteExtExt___________E93", SN_CHECK);
MakeUnknown(0xFFFF6862, 2, DOUNK_SIMPLE);
MakeWord(0xFFFF6862);
MakeNameEx(0xFFFF689F, "E_Feedback_Knock_Correction_1byteExtExt___________E94", SN_CHECK);
MakeUnknown(0xFFFF689F, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF689F);
MakeNameEx(0xFFFF68A2, "E_Fine_Learning_Knock_Correction_1byteExtExt___________E95", SN_CHECK);
MakeUnknown(0xFFFF68A2, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF68A2);
MakeNameEx(0xFFFF68A1, "E_IAM_1byteExtExt___________E96", SN_CHECK);
MakeUnknown(0xFFFF68A1, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF68A1);
MakeNameEx(0xFFFF68AB, "E_Primary_WGDC_Maximum_1byteExtExt___________E112", SN_CHECK);
MakeUnknown(0xFFFF68AB, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF68AB);
MakeNameEx(0xFFFF6218, "E_Manifold_Relative_Pressure_4byteExt___________E113", SN_CHECK);
MakeUnknown(0xFFFF6218, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF6218);
MakeNameEx(0xFFFF8248, "E_Knock_Correction_Advance_Max_PrimaryExt___________E118", SN_CHECK);
MakeUnknown(0xFFFF8248, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF8248);
MakeNameEx(0xFFFF5CA0, "E_Target_Boost_Relative_4byteExt___________E120", SN_CHECK);
MakeUnknown(0xFFFF5CA0, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF5CA0);
MakeNameEx(0xFFFF77D8, "E_Closed_Loop_Fueling_Target_4byteExt___________E121", SN_CHECK);
MakeUnknown(0xFFFF77D8, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF77D8);
MakeNameEx(0xFFFF687C, "E_Closed_Loop_Fueling_Target_2byteExt___________E122", SN_CHECK);
MakeUnknown(0xFFFF687C, 2, DOUNK_SIMPLE);
MakeWord(0xFFFF687C);
MakeNameEx(0xFFFF731C, "E_Final_Fueling_Base_4byteExt___________E123", SN_CHECK);
MakeUnknown(0xFFFF731C, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF731C);
MakeNameEx(0xFFFF6876, "E_Final_Fueling_Base_2byteExt___________E124", SN_CHECK);
MakeUnknown(0xFFFF6876, 2, DOUNK_SIMPLE);
MakeWord(0xFFFF6876);
MakeNameEx(0xFFFF7F80, "E_Timing_Compensation_IAT_A_4byteExt______E125", SN_CHECK);
MakeUnknown(0xFFFF7F80, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF7F80);
MakeNameEx(0xFFFF6658, "E_Map_Ratio_1_PrimaryExt_____E152", SN_CHECK);
MakeUnknown(0xFFFF6658, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF6658);
MakeNameEx(0xFFFF819D, "E_Knock_Sum_Cylinder_1Ext__________E165", SN_CHECK);
MakeUnknown(0xFFFF819D, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF819D);
MakeNameEx(0xFFFF819E, "E_Knock_Sum_Cylinder_2Ext__________E166", SN_CHECK);
MakeUnknown(0xFFFF819E, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF819E);
MakeNameEx(0xFFFF819F, "E_Knock_Sum_Cylinder_3Ext__________E167", SN_CHECK);
MakeUnknown(0xFFFF819F, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF819F);
MakeNameEx(0xFFFF81A0, "E_Knock_Sum_Cylinder_4Ext__________E168", SN_CHECK);
MakeUnknown(0xFFFF81A0, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF81A0);
}   // end of ExtParams

