///////////////////////////////////////////////////////////////////////////////
// All definitions for ecu: AZ1G401V with SSM read vector base 5ACCC
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
}   // end of Tables

static StdParams ()
{
Message("--- Now marking StdParams ---\n");
auto addr;
MakeUnknown(0x0005ACE8, 4, DOUNK_SIMPLE);
MakeDword(0x0005ACE8);
MakeNameEx(0x0005ACE8, "PtrSsmGet_Engine_Load_Relative_P1_____", SN_CHECK);
addr = Dword(0x0005ACE8);
MakeNameEx(addr, "SsmGet_Engine_Load_Relative_P1_____", SN_CHECK);

MakeUnknown(0x0005ACEC, 4, DOUNK_SIMPLE);
MakeDword(0x0005ACEC);
MakeNameEx(0x0005ACEC, "PtrSsmGet_Coolant_Temperature_P2_____", SN_CHECK);
addr = Dword(0x0005ACEC);
MakeNameEx(addr, "SsmGet_Coolant_Temperature_P2_____", SN_CHECK);

MakeUnknown(0x0005ACF0, 4, DOUNK_SIMPLE);
MakeDword(0x0005ACF0);
MakeNameEx(0x0005ACF0, "PtrSsmGet_AF_Correction_1_P3_____", SN_CHECK);
addr = Dword(0x0005ACF0);
MakeNameEx(addr, "SsmGet_AF_Correction_1_P3_____", SN_CHECK);

MakeUnknown(0x0005ACF4, 4, DOUNK_SIMPLE);
MakeDword(0x0005ACF4);
MakeNameEx(0x0005ACF4, "PtrSsmGet_AF_Learning_1_P4_____", SN_CHECK);
addr = Dword(0x0005ACF4);
MakeNameEx(addr, "SsmGet_AF_Learning_1_P4_____", SN_CHECK);

MakeUnknown(0x0005ACF8, 4, DOUNK_SIMPLE);
MakeDword(0x0005ACF8);
MakeNameEx(0x0005ACF8, "PtrSsmGet_AF_Correction_2_P5_____", SN_CHECK);
addr = Dword(0x0005ACF8);
MakeNameEx(addr, "SsmGet_AF_Correction_2_P5_____", SN_CHECK);

MakeUnknown(0x0005ACFC, 4, DOUNK_SIMPLE);
MakeDword(0x0005ACFC);
MakeNameEx(0x0005ACFC, "PtrSsmGet_AF_Learning_2_P6_____", SN_CHECK);
addr = Dword(0x0005ACFC);
MakeNameEx(addr, "SsmGet_AF_Learning_2_P6_____", SN_CHECK);

MakeUnknown(0x0005AD00, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD00);
MakeNameEx(0x0005AD00, "PtrSsmGet_Manifold_Absolute_Pressure_P7_____", SN_CHECK);
addr = Dword(0x0005AD00);
MakeNameEx(addr, "SsmGet_Manifold_Absolute_Pressure_P7_____", SN_CHECK);

MakeUnknown(0x0005AD04, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD04);
MakeNameEx(0x0005AD04, "PtrSsmGet_Engine_Speed_P8_____", SN_CHECK);
addr = Dword(0x0005AD04);
MakeNameEx(addr, "SsmGet_Engine_Speed_P8_____", SN_CHECK);

MakeUnknown(0x0005AD0C, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD0C);
MakeNameEx(0x0005AD0C, "PtrSsmGet_Vehicle_Speed_P9_____", SN_CHECK);
addr = Dword(0x0005AD0C);
MakeNameEx(addr, "SsmGet_Vehicle_Speed_P9_____", SN_CHECK);

MakeUnknown(0x0005AD10, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD10);
MakeNameEx(0x0005AD10, "PtrSsmGet_Ignition_Total_Timing_P10_____", SN_CHECK);
addr = Dword(0x0005AD10);
MakeNameEx(addr, "SsmGet_Ignition_Total_Timing_P10_____", SN_CHECK);

MakeUnknown(0x0005AD14, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD14);
MakeNameEx(0x0005AD14, "PtrSsmGet_Intake_Air_Temperature_P11_____", SN_CHECK);
addr = Dword(0x0005AD14);
MakeNameEx(addr, "SsmGet_Intake_Air_Temperature_P11_____", SN_CHECK);

MakeUnknown(0x0005AD18, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD18);
MakeNameEx(0x0005AD18, "PtrSsmGet_Mass_Airflow_P12_____", SN_CHECK);
addr = Dword(0x0005AD18);
MakeNameEx(addr, "SsmGet_Mass_Airflow_P12_____", SN_CHECK);

MakeUnknown(0x0005AD20, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD20);
MakeNameEx(0x0005AD20, "PtrSsmGet_Throttle_Opening_Angle_P13_____", SN_CHECK);
addr = Dword(0x0005AD20);
MakeNameEx(addr, "SsmGet_Throttle_Opening_Angle_P13_____", SN_CHECK);

MakeUnknown(0x0005AD24, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD24);
MakeNameEx(0x0005AD24, "PtrSsmGet_Front_O2_Sensor_1_P14_____", SN_CHECK);
addr = Dword(0x0005AD24);
MakeNameEx(addr, "SsmGet_Front_O2_Sensor_1_P14_____", SN_CHECK);

MakeUnknown(0x0005AD2C, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD2C);
MakeNameEx(0x0005AD2C, "PtrSsmGet_Rear_O2_Sensor_P15_____", SN_CHECK);
addr = Dword(0x0005AD2C);
MakeNameEx(addr, "SsmGet_Rear_O2_Sensor_P15_____", SN_CHECK);

MakeUnknown(0x0005AD34, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD34);
MakeNameEx(0x0005AD34, "PtrSsmGet_Front_O2_Sensor_2_P16_____", SN_CHECK);
addr = Dword(0x0005AD34);
MakeNameEx(addr, "SsmGet_Front_O2_Sensor_2_P16_____", SN_CHECK);

MakeUnknown(0x0005AD3C, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD3C);
MakeNameEx(0x0005AD3C, "PtrSsmGet_Battery_Voltage_P17_____", SN_CHECK);
addr = Dword(0x0005AD3C);
MakeNameEx(addr, "SsmGet_Battery_Voltage_P17_____", SN_CHECK);

MakeUnknown(0x0005AD40, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD40);
MakeNameEx(0x0005AD40, "PtrSsmGet_Mass_Airflow_Sensor_Voltage_P18_____", SN_CHECK);
addr = Dword(0x0005AD40);
MakeNameEx(addr, "SsmGet_Mass_Airflow_Sensor_Voltage_P18_____", SN_CHECK);

MakeUnknown(0x0005AD44, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD44);
MakeNameEx(0x0005AD44, "PtrSsmGet_Throttle_Sensor_Voltage_P19_____", SN_CHECK);
addr = Dword(0x0005AD44);
MakeNameEx(addr, "SsmGet_Throttle_Sensor_Voltage_P19_____", SN_CHECK);

MakeUnknown(0x0005AD48, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD48);
MakeNameEx(0x0005AD48, "PtrSsmGet_Differential_Pressure_Sensor_Voltage_P20_____", SN_CHECK);
addr = Dword(0x0005AD48);
MakeNameEx(addr, "SsmGet_Differential_Pressure_Sensor_Voltage_P20_____", SN_CHECK);

MakeUnknown(0x0005AD4C, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD4C);
MakeNameEx(0x0005AD4C, "PtrSsmGet_Fuel_Injector_1_Pulse_Width_P21_____", SN_CHECK);
addr = Dword(0x0005AD4C);
MakeNameEx(addr, "SsmGet_Fuel_Injector_1_Pulse_Width_P21_____", SN_CHECK);

MakeUnknown(0x0005AD50, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD50);
MakeNameEx(0x0005AD50, "PtrSsmGet_Fuel_Injector_2_Pulse_Width_P22_____", SN_CHECK);
addr = Dword(0x0005AD50);
MakeNameEx(addr, "SsmGet_Fuel_Injector_2_Pulse_Width_P22_____", SN_CHECK);

MakeUnknown(0x0005AD54, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD54);
MakeNameEx(0x0005AD54, "PtrSsmGet_Knock_Correction_Advance_P23_____", SN_CHECK);
addr = Dword(0x0005AD54);
MakeNameEx(addr, "SsmGet_Knock_Correction_Advance_P23_____", SN_CHECK);

MakeUnknown(0x0005AD58, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD58);
MakeNameEx(0x0005AD58, "PtrSsmGet_Atmospheric_Pressure_P24_____", SN_CHECK);
addr = Dword(0x0005AD58);
MakeNameEx(addr, "SsmGet_Atmospheric_Pressure_P24_____", SN_CHECK);

MakeUnknown(0x0005AD5C, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD5C);
MakeNameEx(0x0005AD5C, "PtrSsmGet_Manifold_Relative_Pressure_P25_____", SN_CHECK);
addr = Dword(0x0005AD5C);
MakeNameEx(addr, "SsmGet_Manifold_Relative_Pressure_P25_____", SN_CHECK);

MakeUnknown(0x0005AD60, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD60);
MakeNameEx(0x0005AD60, "PtrSsmGet_Pressure_Differential_Sensor_P26_____", SN_CHECK);
addr = Dword(0x0005AD60);
MakeNameEx(addr, "SsmGet_Pressure_Differential_Sensor_P26_____", SN_CHECK);

MakeUnknown(0x0005AD64, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD64);
MakeNameEx(0x0005AD64, "PtrSsmGet_Fuel_Tank_Pressure_P27_____", SN_CHECK);
addr = Dword(0x0005AD64);
MakeNameEx(addr, "SsmGet_Fuel_Tank_Pressure_P27_____", SN_CHECK);

MakeUnknown(0x0005AD68, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD68);
MakeNameEx(0x0005AD68, "PtrSsmGet_CO_Adjustment_P28_____", SN_CHECK);
addr = Dword(0x0005AD68);
MakeNameEx(addr, "SsmGet_CO_Adjustment_P28_____", SN_CHECK);

MakeUnknown(0x0005AD6C, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD6C);
MakeNameEx(0x0005AD6C, "PtrSsmGet_Learned_Ignition_Timing_P29_____", SN_CHECK);
addr = Dword(0x0005AD6C);
MakeNameEx(addr, "SsmGet_Learned_Ignition_Timing_P29_____", SN_CHECK);

MakeUnknown(0x0005AD70, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD70);
MakeNameEx(0x0005AD70, "PtrSsmGet_Accelerator_Pedal_Angle_P30_____", SN_CHECK);
addr = Dword(0x0005AD70);
MakeNameEx(addr, "SsmGet_Accelerator_Pedal_Angle_P30_____", SN_CHECK);

MakeUnknown(0x0005AD74, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD74);
MakeNameEx(0x0005AD74, "PtrSsmGet_Fuel_Temperature_P31_____", SN_CHECK);
addr = Dword(0x0005AD74);
MakeNameEx(addr, "SsmGet_Fuel_Temperature_P31_____", SN_CHECK);

MakeUnknown(0x0005AD78, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD78);
MakeNameEx(0x0005AD78, "PtrSsmGet_Front_O2_Heater_Current_1_P32_____", SN_CHECK);
addr = Dword(0x0005AD78);
MakeNameEx(addr, "SsmGet_Front_O2_Heater_Current_1_P32_____", SN_CHECK);

MakeUnknown(0x0005AD7C, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD7C);
MakeNameEx(0x0005AD7C, "PtrSsmGet_Rear_O2_Heater_Current_P33_____", SN_CHECK);
addr = Dword(0x0005AD7C);
MakeNameEx(addr, "SsmGet_Rear_O2_Heater_Current_P33_____", SN_CHECK);

MakeUnknown(0x0005AD80, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD80);
MakeNameEx(0x0005AD80, "PtrSsmGet_Front_O2_Heater_Current_2_P34_____", SN_CHECK);
addr = Dword(0x0005AD80);
MakeNameEx(addr, "SsmGet_Front_O2_Heater_Current_2_P34_____", SN_CHECK);

MakeUnknown(0x0005AD84, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD84);
MakeNameEx(0x0005AD84, "PtrSsmGet_Fuel_Level_P35_____", SN_CHECK);
addr = Dword(0x0005AD84);
MakeNameEx(addr, "SsmGet_Fuel_Level_P35_____", SN_CHECK);

MakeUnknown(0x0005AD8C, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD8C);
MakeNameEx(0x0005AD8C, "PtrSsmGet_Primary_Wastegate_Duty_Cycle_P36_____", SN_CHECK);
addr = Dword(0x0005AD8C);
MakeNameEx(addr, "SsmGet_Primary_Wastegate_Duty_Cycle_P36_____", SN_CHECK);

MakeUnknown(0x0005AD90, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD90);
MakeNameEx(0x0005AD90, "PtrSsmGet_Secondary_Wastegate_Duty_Cycle_P37_____", SN_CHECK);
addr = Dword(0x0005AD90);
MakeNameEx(addr, "SsmGet_Secondary_Wastegate_Duty_Cycle_P37_____", SN_CHECK);

MakeUnknown(0x0005AD94, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD94);
MakeNameEx(0x0005AD94, "PtrSsmGet_CPC_Valve_Duty_Ratio_P38_____", SN_CHECK);
addr = Dword(0x0005AD94);
MakeNameEx(addr, "SsmGet_CPC_Valve_Duty_Ratio_P38_____", SN_CHECK);

MakeUnknown(0x0005AD98, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD98);
MakeNameEx(0x0005AD98, "PtrSsmGet_Tumble_Valve_Position_Sensor_Right_P39_____", SN_CHECK);
addr = Dword(0x0005AD98);
MakeNameEx(addr, "SsmGet_Tumble_Valve_Position_Sensor_Right_P39_____", SN_CHECK);

MakeUnknown(0x0005AD9C, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD9C);
MakeNameEx(0x0005AD9C, "PtrSsmGet_Tumble_Valve_Position_Sensor_Left_P40_____", SN_CHECK);
addr = Dword(0x0005AD9C);
MakeNameEx(addr, "SsmGet_Tumble_Valve_Position_Sensor_Left_P40_____", SN_CHECK);

MakeUnknown(0x0005ADA0, 4, DOUNK_SIMPLE);
MakeDword(0x0005ADA0);
MakeNameEx(0x0005ADA0, "PtrSsmGet_Idle_Speed_Control_Valve_Duty_Ratio_P41_____", SN_CHECK);
addr = Dword(0x0005ADA0);
MakeNameEx(addr, "SsmGet_Idle_Speed_Control_Valve_Duty_Ratio_P41_____", SN_CHECK);

MakeUnknown(0x0005ADA4, 4, DOUNK_SIMPLE);
MakeDword(0x0005ADA4);
MakeNameEx(0x0005ADA4, "PtrSsmGet_AF_Lean_Correction_P42_____", SN_CHECK);
addr = Dword(0x0005ADA4);
MakeNameEx(addr, "SsmGet_AF_Lean_Correction_P42_____", SN_CHECK);

MakeUnknown(0x0005ADA8, 4, DOUNK_SIMPLE);
MakeDword(0x0005ADA8);
MakeNameEx(0x0005ADA8, "PtrSsmGet_AF_Heater_Duty_P43_____", SN_CHECK);
addr = Dword(0x0005ADA8);
MakeNameEx(addr, "SsmGet_AF_Heater_Duty_P43_____", SN_CHECK);

MakeUnknown(0x0005ADAC, 4, DOUNK_SIMPLE);
MakeDword(0x0005ADAC);
MakeNameEx(0x0005ADAC, "PtrSsmGet_Idle_Speed_Control_Valve_Step_P44_____", SN_CHECK);
addr = Dword(0x0005ADAC);
MakeNameEx(addr, "SsmGet_Idle_Speed_Control_Valve_Step_P44_____", SN_CHECK);

MakeUnknown(0x0005ADB0, 4, DOUNK_SIMPLE);
MakeDword(0x0005ADB0);
MakeNameEx(0x0005ADB0, "PtrSsmGet_Number_of_Exh_Gas_Recirc_Steps_P45_____", SN_CHECK);
addr = Dword(0x0005ADB0);
MakeNameEx(addr, "SsmGet_Number_of_Exh_Gas_Recirc_Steps_P45_____", SN_CHECK);

MakeUnknown(0x0005ADB4, 4, DOUNK_SIMPLE);
MakeDword(0x0005ADB4);
MakeNameEx(0x0005ADB4, "PtrSsmGet_Alternator_Duty_P46_____", SN_CHECK);
addr = Dword(0x0005ADB4);
MakeNameEx(addr, "SsmGet_Alternator_Duty_P46_____", SN_CHECK);

MakeUnknown(0x0005ADB8, 4, DOUNK_SIMPLE);
MakeDword(0x0005ADB8);
MakeNameEx(0x0005ADB8, "PtrSsmGet_Fuel_Pump_Duty_P47_____", SN_CHECK);
addr = Dword(0x0005ADB8);
MakeNameEx(addr, "SsmGet_Fuel_Pump_Duty_P47_____", SN_CHECK);

MakeUnknown(0x0005ADBC, 4, DOUNK_SIMPLE);
MakeDword(0x0005ADBC);
MakeNameEx(0x0005ADBC, "PtrSsmGet_Intake_VVT_Advance_Angle_Right_P48_____", SN_CHECK);
addr = Dword(0x0005ADBC);
MakeNameEx(addr, "SsmGet_Intake_VVT_Advance_Angle_Right_P48_____", SN_CHECK);

MakeUnknown(0x0005ADC0, 4, DOUNK_SIMPLE);
MakeDword(0x0005ADC0);
MakeNameEx(0x0005ADC0, "PtrSsmGet_Intake_VVT_Advance_Angle_Left_P49_____", SN_CHECK);
addr = Dword(0x0005ADC0);
MakeNameEx(addr, "SsmGet_Intake_VVT_Advance_Angle_Left_P49_____", SN_CHECK);

MakeUnknown(0x0005ADC4, 4, DOUNK_SIMPLE);
MakeDword(0x0005ADC4);
MakeNameEx(0x0005ADC4, "PtrSsmGet_Intake_OCV_Duty_Right_P50_____", SN_CHECK);
addr = Dword(0x0005ADC4);
MakeNameEx(addr, "SsmGet_Intake_OCV_Duty_Right_P50_____", SN_CHECK);

MakeUnknown(0x0005ADC8, 4, DOUNK_SIMPLE);
MakeDword(0x0005ADC8);
MakeNameEx(0x0005ADC8, "PtrSsmGet_Intake_OCV_Duty_Left_P51_____", SN_CHECK);
addr = Dword(0x0005ADC8);
MakeNameEx(addr, "SsmGet_Intake_OCV_Duty_Left_P51_____", SN_CHECK);

MakeUnknown(0x0005ADCC, 4, DOUNK_SIMPLE);
MakeDword(0x0005ADCC);
MakeNameEx(0x0005ADCC, "PtrSsmGet_Intake_OCV_Current_Right_P52_____", SN_CHECK);
addr = Dword(0x0005ADCC);
MakeNameEx(addr, "SsmGet_Intake_OCV_Current_Right_P52_____", SN_CHECK);

MakeUnknown(0x0005ADD0, 4, DOUNK_SIMPLE);
MakeDword(0x0005ADD0);
MakeNameEx(0x0005ADD0, "PtrSsmGet_Intake_OCV_Current_Left_P53_____", SN_CHECK);
addr = Dword(0x0005ADD0);
MakeNameEx(addr, "SsmGet_Intake_OCV_Current_Left_P53_____", SN_CHECK);

MakeUnknown(0x0005ADD4, 4, DOUNK_SIMPLE);
MakeDword(0x0005ADD4);
MakeNameEx(0x0005ADD4, "PtrSsmGet_AF_Sensor_1_Current_P54_____", SN_CHECK);
addr = Dword(0x0005ADD4);
MakeNameEx(addr, "SsmGet_AF_Sensor_1_Current_P54_____", SN_CHECK);

MakeUnknown(0x0005ADD8, 4, DOUNK_SIMPLE);
MakeDword(0x0005ADD8);
MakeNameEx(0x0005ADD8, "PtrSsmGet_AF_Sensor_2_Current_P55_____", SN_CHECK);
addr = Dword(0x0005ADD8);
MakeNameEx(addr, "SsmGet_AF_Sensor_2_Current_P55_____", SN_CHECK);

MakeUnknown(0x0005ADDC, 4, DOUNK_SIMPLE);
MakeDword(0x0005ADDC);
MakeNameEx(0x0005ADDC, "PtrSsmGet_AF_Sensor_1_Resistance_P56_____", SN_CHECK);
addr = Dword(0x0005ADDC);
MakeNameEx(addr, "SsmGet_AF_Sensor_1_Resistance_P56_____", SN_CHECK);

MakeUnknown(0x0005ADE0, 4, DOUNK_SIMPLE);
MakeDword(0x0005ADE0);
MakeNameEx(0x0005ADE0, "PtrSsmGet_AF_Sensor_2_Resistance_P57_____", SN_CHECK);
addr = Dword(0x0005ADE0);
MakeNameEx(addr, "SsmGet_AF_Sensor_2_Resistance_P57_____", SN_CHECK);

MakeUnknown(0x0005ADE4, 4, DOUNK_SIMPLE);
MakeDword(0x0005ADE4);
MakeNameEx(0x0005ADE4, "PtrSsmGet_AF_Sensor_1_P58_____", SN_CHECK);
addr = Dword(0x0005ADE4);
MakeNameEx(addr, "SsmGet_AF_Sensor_1_P58_____", SN_CHECK);

MakeUnknown(0x0005ADE8, 4, DOUNK_SIMPLE);
MakeDword(0x0005ADE8);
MakeNameEx(0x0005ADE8, "PtrSsmGet_AF_Sensor_2_P59_____", SN_CHECK);
addr = Dword(0x0005ADE8);
MakeNameEx(addr, "SsmGet_AF_Sensor_2_P59_____", SN_CHECK);

MakeUnknown(0x0005ADF4, 4, DOUNK_SIMPLE);
MakeDword(0x0005ADF4);
MakeNameEx(0x0005ADF4, "PtrSsmGet_Gear_Position_P60_____", SN_CHECK);
addr = Dword(0x0005ADF4);
MakeNameEx(addr, "SsmGet_Gear_Position_P60_____", SN_CHECK);

MakeUnknown(0x0005AE18, 4, DOUNK_SIMPLE);
MakeDword(0x0005AE18);
MakeNameEx(0x0005AE18, "PtrSsmGet_AF_Sensor_1_Heater_Current_P61_____", SN_CHECK);
addr = Dword(0x0005AE18);
MakeNameEx(addr, "SsmGet_AF_Sensor_1_Heater_Current_P61_____", SN_CHECK);

MakeUnknown(0x0005AE1C, 4, DOUNK_SIMPLE);
MakeDword(0x0005AE1C);
MakeNameEx(0x0005AE1C, "PtrSsmGet_AF_Sensor_2_Heater_Current_P62_____", SN_CHECK);
addr = Dword(0x0005AE1C);
MakeNameEx(addr, "SsmGet_AF_Sensor_2_Heater_Current_P62_____", SN_CHECK);

MakeUnknown(0x0005B004, 4, DOUNK_SIMPLE);
MakeDword(0x0005B004);
MakeNameEx(0x0005B004, "PtrSsmGet_Roughness_Monitor_Cylinder_1_P63_____", SN_CHECK);
addr = Dword(0x0005B004);
MakeNameEx(addr, "SsmGet_Roughness_Monitor_Cylinder_1_P63_____", SN_CHECK);

MakeUnknown(0x0005B008, 4, DOUNK_SIMPLE);
MakeDword(0x0005B008);
MakeNameEx(0x0005B008, "PtrSsmGet_Roughness_Monitor_Cylinder_2_P64_____", SN_CHECK);
addr = Dword(0x0005B008);
MakeNameEx(addr, "SsmGet_Roughness_Monitor_Cylinder_2_P64_____", SN_CHECK);

MakeUnknown(0x0005B00C, 4, DOUNK_SIMPLE);
MakeDword(0x0005B00C);
MakeNameEx(0x0005B00C, "PtrSsmGet_AF_Correction_3_16bit_ECU_P65_____", SN_CHECK);
addr = Dword(0x0005B00C);
MakeNameEx(addr, "SsmGet_AF_Correction_3_16bit_ECU_P65_____", SN_CHECK);

MakeUnknown(0x0005B010, 4, DOUNK_SIMPLE);
MakeDword(0x0005B010);
MakeNameEx(0x0005B010, "PtrSsmGet_AF_Learning_3_P66_____", SN_CHECK);
addr = Dword(0x0005B010);
MakeNameEx(addr, "SsmGet_AF_Learning_3_P66_____", SN_CHECK);

MakeUnknown(0x0005B014, 4, DOUNK_SIMPLE);
MakeDword(0x0005B014);
MakeNameEx(0x0005B014, "PtrSsmGet_Rear_O2_Heater_Voltage_P67_____", SN_CHECK);
addr = Dword(0x0005B014);
MakeNameEx(addr, "SsmGet_Rear_O2_Heater_Voltage_P67_____", SN_CHECK);

MakeUnknown(0x0005B018, 4, DOUNK_SIMPLE);
MakeDword(0x0005B018);
MakeNameEx(0x0005B018, "PtrSsmGet_AF_Adjustment_Voltage_P68_____", SN_CHECK);
addr = Dword(0x0005B018);
MakeNameEx(addr, "SsmGet_AF_Adjustment_Voltage_P68_____", SN_CHECK);

MakeUnknown(0x0005B02C, 4, DOUNK_SIMPLE);
MakeDword(0x0005B02C);
MakeNameEx(0x0005B02C, "PtrSsmGet_Roughness_Monitor_Cylinder_3_P69_____", SN_CHECK);
addr = Dword(0x0005B02C);
MakeNameEx(addr, "SsmGet_Roughness_Monitor_Cylinder_3_P69_____", SN_CHECK);

MakeUnknown(0x0005B030, 4, DOUNK_SIMPLE);
MakeDword(0x0005B030);
MakeNameEx(0x0005B030, "PtrSsmGet_Roughness_Monitor_Cylinder_4_P70_____", SN_CHECK);
addr = Dword(0x0005B030);
MakeNameEx(addr, "SsmGet_Roughness_Monitor_Cylinder_4_P70_____", SN_CHECK);

MakeUnknown(0x0005B0B4, 4, DOUNK_SIMPLE);
MakeDword(0x0005B0B4);
MakeNameEx(0x0005B0B4, "PtrSsmGet_Throttle_Motor_Duty_P71_____", SN_CHECK);
addr = Dword(0x0005B0B4);
MakeNameEx(addr, "SsmGet_Throttle_Motor_Duty_P71_____", SN_CHECK);

MakeUnknown(0x0005B0B8, 4, DOUNK_SIMPLE);
MakeDword(0x0005B0B8);
MakeNameEx(0x0005B0B8, "PtrSsmGet_Throttle_Motor_Voltage_P72_____", SN_CHECK);
addr = Dword(0x0005B0B8);
MakeNameEx(addr, "SsmGet_Throttle_Motor_Voltage_P72_____", SN_CHECK);

MakeUnknown(0x0005B0CC, 4, DOUNK_SIMPLE);
MakeDword(0x0005B0CC);
MakeNameEx(0x0005B0CC, "PtrSsmGet_Sub_Throttle_Sensor_P73_____", SN_CHECK);
addr = Dword(0x0005B0CC);
MakeNameEx(addr, "SsmGet_Sub_Throttle_Sensor_P73_____", SN_CHECK);

MakeUnknown(0x0005B0D0, 4, DOUNK_SIMPLE);
MakeDword(0x0005B0D0);
MakeNameEx(0x0005B0D0, "PtrSsmGet_Main_Throttle_Sensor_P74_____", SN_CHECK);
addr = Dword(0x0005B0D0);
MakeNameEx(addr, "SsmGet_Main_Throttle_Sensor_P74_____", SN_CHECK);

MakeUnknown(0x0005B0D4, 4, DOUNK_SIMPLE);
MakeDword(0x0005B0D4);
MakeNameEx(0x0005B0D4, "PtrSsmGet_Sub_Accelerator_Sensor_P75_____", SN_CHECK);
addr = Dword(0x0005B0D4);
MakeNameEx(addr, "SsmGet_Sub_Accelerator_Sensor_P75_____", SN_CHECK);

MakeUnknown(0x0005B0D8, 4, DOUNK_SIMPLE);
MakeDword(0x0005B0D8);
MakeNameEx(0x0005B0D8, "PtrSsmGet_Main_Accelerator_Sensor_P76_____", SN_CHECK);
addr = Dword(0x0005B0D8);
MakeNameEx(addr, "SsmGet_Main_Accelerator_Sensor_P76_____", SN_CHECK);

MakeUnknown(0x0005B0DC, 4, DOUNK_SIMPLE);
MakeDword(0x0005B0DC);
MakeNameEx(0x0005B0DC, "PtrSsmGet_Brake_Booster_Pressure_P77_____", SN_CHECK);
addr = Dword(0x0005B0DC);
MakeNameEx(addr, "SsmGet_Brake_Booster_Pressure_P77_____", SN_CHECK);

MakeUnknown(0x0005B0E0, 4, DOUNK_SIMPLE);
MakeDword(0x0005B0E0);
MakeNameEx(0x0005B0E0, "PtrSsmGet_Fuel_Pressure_High_P78_____", SN_CHECK);
addr = Dword(0x0005B0E0);
MakeNameEx(addr, "SsmGet_Fuel_Pressure_High_P78_____", SN_CHECK);

MakeUnknown(0x0005B0E4, 4, DOUNK_SIMPLE);
MakeDword(0x0005B0E4);
MakeNameEx(0x0005B0E4, "PtrSsmGet_Exhaust_Gas_Temperature_P79_____", SN_CHECK);
addr = Dword(0x0005B0E4);
MakeNameEx(addr, "SsmGet_Exhaust_Gas_Temperature_P79_____", SN_CHECK);

MakeUnknown(0x0005B0EC, 4, DOUNK_SIMPLE);
MakeDword(0x0005B0EC);
MakeNameEx(0x0005B0EC, "PtrSsmGet_Cold_Start_Injector_Air_Pump_P80_____", SN_CHECK);
addr = Dword(0x0005B0EC);
MakeNameEx(addr, "SsmGet_Cold_Start_Injector_Air_Pump_P80_____", SN_CHECK);

MakeUnknown(0x0005B0F0, 4, DOUNK_SIMPLE);
MakeDword(0x0005B0F0);
MakeNameEx(0x0005B0F0, "PtrSsmGet_SCV_Step_P81_____", SN_CHECK);
addr = Dword(0x0005B0F0);
MakeNameEx(addr, "SsmGet_SCV_Step_P81_____", SN_CHECK);

MakeUnknown(0x0005B0F4, 4, DOUNK_SIMPLE);
MakeDword(0x0005B0F4);
MakeNameEx(0x0005B0F4, "PtrSsmGet_Memorised_Cruise_Speed_P82_____", SN_CHECK);
addr = Dword(0x0005B0F4);
MakeNameEx(addr, "SsmGet_Memorised_Cruise_Speed_P82_____", SN_CHECK);

MakeUnknown(0x0005B12C, 4, DOUNK_SIMPLE);
MakeDword(0x0005B12C);
MakeNameEx(0x0005B12C, "PtrSsmGet_Exhaust_VVT_Advance_Angle_Right_P83_____", SN_CHECK);
addr = Dword(0x0005B12C);
MakeNameEx(addr, "SsmGet_Exhaust_VVT_Advance_Angle_Right_P83_____", SN_CHECK);

MakeUnknown(0x0005B130, 4, DOUNK_SIMPLE);
MakeDword(0x0005B130);
MakeNameEx(0x0005B130, "PtrSsmGet_Exhaust_VVT_Advance_Angle_Left_P84_____", SN_CHECK);
addr = Dword(0x0005B130);
MakeNameEx(addr, "SsmGet_Exhaust_VVT_Advance_Angle_Left_P84_____", SN_CHECK);

MakeUnknown(0x0005B134, 4, DOUNK_SIMPLE);
MakeDword(0x0005B134);
MakeNameEx(0x0005B134, "PtrSsmGet_Exhaust_OCV_Duty_Right_P85_____", SN_CHECK);
addr = Dword(0x0005B134);
MakeNameEx(addr, "SsmGet_Exhaust_OCV_Duty_Right_P85_____", SN_CHECK);

MakeUnknown(0x0005B138, 4, DOUNK_SIMPLE);
MakeDword(0x0005B138);
MakeNameEx(0x0005B138, "PtrSsmGet_Exhaust_OCV_Duty_Left_P86_____", SN_CHECK);
addr = Dword(0x0005B138);
MakeNameEx(addr, "SsmGet_Exhaust_OCV_Duty_Left_P86_____", SN_CHECK);

MakeUnknown(0x0005B13C, 4, DOUNK_SIMPLE);
MakeDword(0x0005B13C);
MakeNameEx(0x0005B13C, "PtrSsmGet_Exhaust_OCV_Current_Right_P87_____", SN_CHECK);
addr = Dword(0x0005B13C);
MakeNameEx(addr, "SsmGet_Exhaust_OCV_Current_Right_P87_____", SN_CHECK);

MakeUnknown(0x0005B140, 4, DOUNK_SIMPLE);
MakeDword(0x0005B140);
MakeNameEx(0x0005B140, "PtrSsmGet_Exhaust_OCV_Current_Left_P88_____", SN_CHECK);
addr = Dword(0x0005B140);
MakeNameEx(addr, "SsmGet_Exhaust_OCV_Current_Left_P88_____", SN_CHECK);

MakeUnknown(0x0005B00C, 4, DOUNK_SIMPLE);
MakeDword(0x0005B00C);
MakeNameEx(0x0005B00C, "PtrSsmGet_AF_Correction_3_32bit_ECU_P89_____", SN_CHECK);
addr = Dword(0x0005B00C);
MakeNameEx(addr, "SsmGet_AF_Correction_3_32bit_ECU_P89_____", SN_CHECK);

MakeUnknown(0x0005B0B0, 4, DOUNK_SIMPLE);
MakeDword(0x0005B0B0);
MakeNameEx(0x0005B0B0, "PtrSsmGet_IAM_P90_____", SN_CHECK);
addr = Dword(0x0005B0B0);
MakeNameEx(addr, "SsmGet_IAM_P90_____", SN_CHECK);

MakeUnknown(0x0005B330, 4, DOUNK_SIMPLE);
MakeDword(0x0005B330);
MakeNameEx(0x0005B330, "PtrSsmGet_Fine_Learning_Knock_Correction_P91_____", SN_CHECK);
addr = Dword(0x0005B330);
MakeNameEx(addr, "SsmGet_Fine_Learning_Knock_Correction_P91_____", SN_CHECK);

MakeUnknown(0x0005AD88, 4, DOUNK_SIMPLE);
MakeDword(0x0005AD88);
MakeNameEx(0x0005AD88, "PtrSsmGet_Radiator_Fan_Control_P92_____", SN_CHECK);
addr = Dword(0x0005AD88);
MakeNameEx(addr, "SsmGet_Radiator_Fan_Control_P92_____", SN_CHECK);

MakeUnknown(0x0005B274, 4, DOUNK_SIMPLE);
MakeDword(0x0005B274);
MakeNameEx(0x0005B274, "PtrSsmGet_SIDrive_Mode_P114_____", SN_CHECK);
addr = Dword(0x0005B274);
MakeNameEx(addr, "SsmGet_SIDrive_Mode_P114_____", SN_CHECK);

MakeUnknown(0x0005B278, 4, DOUNK_SIMPLE);
MakeDword(0x0005B278);
MakeNameEx(0x0005B278, "PtrSsmGet_Throttle_Sensor_Closed_Voltage_P115_____", SN_CHECK);
addr = Dword(0x0005B278);
MakeNameEx(addr, "SsmGet_Throttle_Sensor_Closed_Voltage_P115_____", SN_CHECK);

MakeUnknown(0x0005B0E8, 4, DOUNK_SIMPLE);
MakeDword(0x0005B0E8);
MakeNameEx(0x0005B0E8, "PtrSsmGet_Exhaust_Gas_Temperature_2_P116_____", SN_CHECK);
addr = Dword(0x0005B0E8);
MakeNameEx(addr, "SsmGet_Exhaust_Gas_Temperature_2_P116_____", SN_CHECK);

MakeUnknown(0x0005B0F8, 4, DOUNK_SIMPLE);
MakeDword(0x0005B0F8);
MakeNameEx(0x0005B0F8, "PtrSsmGet_AirFuel_Correction_4_P117_____", SN_CHECK);
addr = Dword(0x0005B0F8);
MakeNameEx(addr, "SsmGet_AirFuel_Correction_4_P117_____", SN_CHECK);

MakeUnknown(0x0005B0FC, 4, DOUNK_SIMPLE);
MakeDword(0x0005B0FC);
MakeNameEx(0x0005B0FC, "PtrSsmGet_AirFuel_Learning_4_P118_____", SN_CHECK);
addr = Dword(0x0005B0FC);
MakeNameEx(addr, "SsmGet_AirFuel_Learning_4_P118_____", SN_CHECK);

MakeUnknown(0x0005B100, 4, DOUNK_SIMPLE);
MakeDword(0x0005B100);
MakeNameEx(0x0005B100, "PtrSsmGet_Fuel_Level_Sensor_Resistance_P119_____", SN_CHECK);
addr = Dword(0x0005B100);
MakeNameEx(addr, "SsmGet_Fuel_Level_Sensor_Resistance_P119_____", SN_CHECK);

MakeUnknown(0x0005B104, 4, DOUNK_SIMPLE);
MakeDword(0x0005B104);
MakeNameEx(0x0005B104, "PtrSsmGet_Estimated_odometer_P120_____", SN_CHECK);
addr = Dword(0x0005B104);
MakeNameEx(addr, "SsmGet_Estimated_odometer_P120_____", SN_CHECK);

MakeUnknown(0x0005B294, 4, DOUNK_SIMPLE);
MakeDword(0x0005B294);
MakeNameEx(0x0005B294, "PtrSsmGet_Fuel_Tank_Air_Pressure_P121_____", SN_CHECK);
addr = Dword(0x0005B294);
MakeNameEx(addr, "SsmGet_Fuel_Tank_Air_Pressure_P121_____", SN_CHECK);

MakeUnknown(0x0005B118, 4, DOUNK_SIMPLE);
MakeDword(0x0005B118);
MakeNameEx(0x0005B118, "PtrSsmGet_Oil_Temperature_P122_____", SN_CHECK);
addr = Dword(0x0005B118);
MakeNameEx(addr, "SsmGet_Oil_Temperature_P122_____", SN_CHECK);

MakeUnknown(0x0005B11C, 4, DOUNK_SIMPLE);
MakeDword(0x0005B11C);
MakeNameEx(0x0005B11C, "PtrSsmGet_Oil_Switching_Solenoid_Valve_OSV_Duty_Right_P123_____", SN_CHECK);
addr = Dword(0x0005B11C);
MakeNameEx(addr, "SsmGet_Oil_Switching_Solenoid_Valve_OSV_Duty_Right_P123_____", SN_CHECK);

MakeUnknown(0x0005B120, 4, DOUNK_SIMPLE);
MakeDword(0x0005B120);
MakeNameEx(0x0005B120, "PtrSsmGet_Oil_Switching_Solenoid_Valve_OSV_Duty_Left_P124_____", SN_CHECK);
addr = Dword(0x0005B120);
MakeNameEx(addr, "SsmGet_Oil_Switching_Solenoid_Valve_OSV_Duty_Left_P124_____", SN_CHECK);

MakeUnknown(0x0005B124, 4, DOUNK_SIMPLE);
MakeDword(0x0005B124);
MakeNameEx(0x0005B124, "PtrSsmGet_Oil_Switching_Solenoid_Valve_OSV_Current_Right_P125_____", SN_CHECK);
addr = Dword(0x0005B124);
MakeNameEx(addr, "SsmGet_Oil_Switching_Solenoid_Valve_OSV_Current_Right_P125_____", SN_CHECK);

MakeUnknown(0x0005B128, 4, DOUNK_SIMPLE);
MakeDword(0x0005B128);
MakeNameEx(0x0005B128, "PtrSsmGet_Oil_Switching_Solenoid_Valve_OSV_Current_Left_P126_____", SN_CHECK);
addr = Dword(0x0005B128);
MakeNameEx(addr, "SsmGet_Oil_Switching_Solenoid_Valve_OSV_Current_Left_P126_____", SN_CHECK);

MakeUnknown(0x0005B144, 4, DOUNK_SIMPLE);
MakeDword(0x0005B144);
MakeNameEx(0x0005B144, "PtrSsmGet_VVL_Lift_Mode_P127_____", SN_CHECK);
addr = Dword(0x0005B144);
MakeNameEx(addr, "SsmGet_VVL_Lift_Mode_P127_____", SN_CHECK);

MakeUnknown(0x0005B088, 4, DOUNK_SIMPLE);
MakeDword(0x0005B088);
MakeNameEx(0x0005B088, "PtrSsmGet_Roughness_Monitor_Cylinder_5_P151_____", SN_CHECK);
addr = Dword(0x0005B088);
MakeNameEx(addr, "SsmGet_Roughness_Monitor_Cylinder_5_P151_____", SN_CHECK);

MakeUnknown(0x0005B0AC, 4, DOUNK_SIMPLE);
MakeDword(0x0005B0AC);
MakeNameEx(0x0005B0AC, "PtrSsmGet_Roughness_Monitor_Cylinder_6_P152_____", SN_CHECK);
addr = Dword(0x0005B0AC);
MakeNameEx(addr, "SsmGet_Roughness_Monitor_Cylinder_6_P152_____", SN_CHECK);

MakeUnknown(0x0005B0B0, 4, DOUNK_SIMPLE);
MakeDword(0x0005B0B0);
MakeNameEx(0x0005B0B0, "PtrSsmGet_Learned_Ignition_Timing_Correction_P153_____", SN_CHECK);
addr = Dword(0x0005B0B0);
MakeNameEx(addr, "SsmGet_Learned_Ignition_Timing_Correction_P153_____", SN_CHECK);

MakeUnknown(0x0005B334, 4, DOUNK_SIMPLE);
MakeDword(0x0005B334);
MakeNameEx(0x0005B334, "PtrSsmGet_Fuel_Tank_Pressure_P154_____", SN_CHECK);
addr = Dword(0x0005B334);
MakeNameEx(addr, "SsmGet_Fuel_Tank_Pressure_P154_____", SN_CHECK);

MakeUnknown(0x0005B450, 4, DOUNK_SIMPLE);
MakeDword(0x0005B450);
MakeNameEx(0x0005B450, "PtrSsmGet_Main_Injection_Period_P155_____", SN_CHECK);
addr = Dword(0x0005B450);
MakeNameEx(addr, "SsmGet_Main_Injection_Period_P155_____", SN_CHECK);

MakeUnknown(0x0005B454, 4, DOUNK_SIMPLE);
MakeDword(0x0005B454);
MakeNameEx(0x0005B454, "PtrSsmGet_Final_Injection_Amount_P156_____", SN_CHECK);
addr = Dword(0x0005B454);
MakeNameEx(addr, "SsmGet_Final_Injection_Amount_P156_____", SN_CHECK);

MakeUnknown(0x0005B45C, 4, DOUNK_SIMPLE);
MakeDword(0x0005B45C);
MakeNameEx(0x0005B45C, "PtrSsmGet_Number_of_Times_Injected_P157_____", SN_CHECK);
addr = Dword(0x0005B45C);
MakeNameEx(addr, "SsmGet_Number_of_Times_Injected_P157_____", SN_CHECK);

MakeUnknown(0x0005B460, 4, DOUNK_SIMPLE);
MakeDword(0x0005B460);
MakeNameEx(0x0005B460, "PtrSsmGet_Target_Intake_Manifold_Pressure_P158_____", SN_CHECK);
addr = Dword(0x0005B460);
MakeNameEx(addr, "SsmGet_Target_Intake_Manifold_Pressure_P158_____", SN_CHECK);

MakeUnknown(0x0005B464, 4, DOUNK_SIMPLE);
MakeDword(0x0005B464);
MakeNameEx(0x0005B464, "PtrSsmGet_Target_Intake_Air_Amount_P159_____", SN_CHECK);
addr = Dword(0x0005B464);
MakeNameEx(addr, "SsmGet_Target_Intake_Air_Amount_P159_____", SN_CHECK);

MakeUnknown(0x0005B468, 4, DOUNK_SIMPLE);
MakeDword(0x0005B468);
MakeNameEx(0x0005B468, "PtrSsmGet_Air_Mass_P160_____", SN_CHECK);
addr = Dword(0x0005B468);
MakeNameEx(addr, "SsmGet_Air_Mass_P160_____", SN_CHECK);

MakeUnknown(0x0005B46C, 4, DOUNK_SIMPLE);
MakeDword(0x0005B46C);
MakeNameEx(0x0005B46C, "PtrSsmGet_Exhaust_Gas_Recirculation_EGR_Target_Valve_Opening_Angle_P161_____", SN_CHECK);
addr = Dword(0x0005B46C);
MakeNameEx(addr, "SsmGet_Exhaust_Gas_Recirculation_EGR_Target_Valve_Opening_Angle_P161_____", SN_CHECK);

MakeUnknown(0x0005B470, 4, DOUNK_SIMPLE);
MakeDword(0x0005B470);
MakeNameEx(0x0005B470, "PtrSsmGet_Exhaust_Gas_Recirculation_EGR_Valve_Opening_Angle_P162_____", SN_CHECK);
addr = Dword(0x0005B470);
MakeNameEx(addr, "SsmGet_Exhaust_Gas_Recirculation_EGR_Valve_Opening_Angle_P162_____", SN_CHECK);

MakeUnknown(0x0005B474, 4, DOUNK_SIMPLE);
MakeDword(0x0005B474);
MakeNameEx(0x0005B474, "PtrSsmGet_Exhaust_Gas_Recirculation_EGR_Duty_P163_____", SN_CHECK);
addr = Dword(0x0005B474);
MakeNameEx(addr, "SsmGet_Exhaust_Gas_Recirculation_EGR_Duty_P163_____", SN_CHECK);

MakeUnknown(0x0005B478, 4, DOUNK_SIMPLE);
MakeDword(0x0005B478);
MakeNameEx(0x0005B478, "PtrSsmGet_Common_Rail_Target_Pressure_P164_____", SN_CHECK);
addr = Dword(0x0005B478);
MakeNameEx(addr, "SsmGet_Common_Rail_Target_Pressure_P164_____", SN_CHECK);

MakeUnknown(0x0005B47C, 4, DOUNK_SIMPLE);
MakeDword(0x0005B47C);
MakeNameEx(0x0005B47C, "PtrSsmGet_Common_Rail_Pressure_P165_____", SN_CHECK);
addr = Dword(0x0005B47C);
MakeNameEx(addr, "SsmGet_Common_Rail_Pressure_P165_____", SN_CHECK);

MakeUnknown(0x0005B480, 4, DOUNK_SIMPLE);
MakeDword(0x0005B480);
MakeNameEx(0x0005B480, "PtrSsmGet_Intake_Air_Temperature_combined_P166_____", SN_CHECK);
addr = Dword(0x0005B480);
MakeNameEx(addr, "SsmGet_Intake_Air_Temperature_combined_P166_____", SN_CHECK);

MakeUnknown(0x0005B484, 4, DOUNK_SIMPLE);
MakeDword(0x0005B484);
MakeNameEx(0x0005B484, "PtrSsmGet_Target_Engine_Speed_P167_____", SN_CHECK);
addr = Dword(0x0005B484);
MakeNameEx(addr, "SsmGet_Target_Engine_Speed_P167_____", SN_CHECK);

MakeUnknown(0x0005B48C, 4, DOUNK_SIMPLE);
MakeDword(0x0005B48C);
MakeNameEx(0x0005B48C, "PtrSsmGet_Boost_Pressure_Feedback_P168_____", SN_CHECK);
addr = Dword(0x0005B48C);
MakeNameEx(addr, "SsmGet_Boost_Pressure_Feedback_P168_____", SN_CHECK);

MakeUnknown(0x0005B4A0, 4, DOUNK_SIMPLE);
MakeDword(0x0005B4A0);
MakeNameEx(0x0005B4A0, "PtrSsmGet_Electric_Power_Steering_Current_P169_____", SN_CHECK);
addr = Dword(0x0005B4A0);
MakeNameEx(addr, "SsmGet_Electric_Power_Steering_Current_P169_____", SN_CHECK);

MakeUnknown(0x0005B4A4, 4, DOUNK_SIMPLE);
MakeDword(0x0005B4A4);
MakeNameEx(0x0005B4A4, "PtrSsmGet_Fuel_Pump_Suction_Control_Valve_Current_Target_P170_____", SN_CHECK);
addr = Dword(0x0005B4A4);
MakeNameEx(addr, "SsmGet_Fuel_Pump_Suction_Control_Valve_Current_Target_P170_____", SN_CHECK);

MakeUnknown(0x0005B4AC, 4, DOUNK_SIMPLE);
MakeDword(0x0005B4AC);
MakeNameEx(0x0005B4AC, "PtrSsmGet_Fuel_Pump_Suction_Control_Valve_Current_Actual_P175_____", SN_CHECK);
addr = Dword(0x0005B4AC);
MakeNameEx(addr, "SsmGet_Fuel_Pump_Suction_Control_Valve_Current_Actual_P175_____", SN_CHECK);

MakeUnknown(0x0005B4B4, 4, DOUNK_SIMPLE);
MakeDword(0x0005B4B4);
MakeNameEx(0x0005B4B4, "PtrSsmGet_Mileage_after_Injector_Learning_P176_____", SN_CHECK);
addr = Dword(0x0005B4B4);
MakeNameEx(addr, "SsmGet_Mileage_after_Injector_Learning_P176_____", SN_CHECK);

MakeUnknown(0x0005B4DC, 4, DOUNK_SIMPLE);
MakeDword(0x0005B4DC);
MakeNameEx(0x0005B4DC, "PtrSsmGet_Mileage_after_Injector_Replacement_P177_____", SN_CHECK);
addr = Dword(0x0005B4DC);
MakeNameEx(addr, "SsmGet_Mileage_after_Injector_Replacement_P177_____", SN_CHECK);

MakeUnknown(0x0005B68C, 4, DOUNK_SIMPLE);
MakeDword(0x0005B68C);
MakeNameEx(0x0005B68C, "PtrSsmGet_Interior_Heater_P178_____", SN_CHECK);
addr = Dword(0x0005B68C);
MakeNameEx(addr, "SsmGet_Interior_Heater_P178_____", SN_CHECK);

MakeUnknown(0x0005B640, 4, DOUNK_SIMPLE);
MakeDword(0x0005B640);
MakeNameEx(0x0005B640, "PtrSsmGet_Quantity_Correction_Cylinder_1_P179_____", SN_CHECK);
addr = Dword(0x0005B640);
MakeNameEx(addr, "SsmGet_Quantity_Correction_Cylinder_1_P179_____", SN_CHECK);

MakeUnknown(0x0005B644, 4, DOUNK_SIMPLE);
MakeDword(0x0005B644);
MakeNameEx(0x0005B644, "PtrSsmGet_Quantity_Correction_Cylinder_2_P180_____", SN_CHECK);
addr = Dword(0x0005B644);
MakeNameEx(addr, "SsmGet_Quantity_Correction_Cylinder_2_P180_____", SN_CHECK);

MakeUnknown(0x0005B648, 4, DOUNK_SIMPLE);
MakeDword(0x0005B648);
MakeNameEx(0x0005B648, "PtrSsmGet_Quantity_Correction_Cylinder_3_P181_____", SN_CHECK);
addr = Dword(0x0005B648);
MakeNameEx(addr, "SsmGet_Quantity_Correction_Cylinder_3_P181_____", SN_CHECK);

MakeUnknown(0x0005B64C, 4, DOUNK_SIMPLE);
MakeDword(0x0005B64C);
MakeNameEx(0x0005B64C, "PtrSsmGet_Quantity_Correction_Cylinder_4_P182_____", SN_CHECK);
addr = Dword(0x0005B64C);
MakeNameEx(addr, "SsmGet_Quantity_Correction_Cylinder_4_P182_____", SN_CHECK);

MakeUnknown(0x0005B690, 4, DOUNK_SIMPLE);
MakeDword(0x0005B690);
MakeNameEx(0x0005B690, "PtrSsmGet_Battery_Current_P183_____", SN_CHECK);
addr = Dword(0x0005B690);
MakeNameEx(addr, "SsmGet_Battery_Current_P183_____", SN_CHECK);

MakeUnknown(0x0005B698, 4, DOUNK_SIMPLE);
MakeDword(0x0005B698);
MakeNameEx(0x0005B698, "PtrSsmGet_Battery_Temperature_P184_____", SN_CHECK);
addr = Dword(0x0005B698);
MakeNameEx(addr, "SsmGet_Battery_Temperature_P184_____", SN_CHECK);

MakeUnknown(0x0005B694, 4, DOUNK_SIMPLE);
MakeDword(0x0005B694);
MakeNameEx(0x0005B694, "PtrSsmGet_Alternator_Control_Mode_P185_____", SN_CHECK);
addr = Dword(0x0005B694);
MakeNameEx(addr, "SsmGet_Alternator_Control_Mode_P185_____", SN_CHECK);

MakeUnknown(0x0005B6A0, 4, DOUNK_SIMPLE);
MakeDword(0x0005B6A0);
MakeNameEx(0x0005B6A0, "PtrSsmGet_Cumulative_Ash_Ratio_P186_____", SN_CHECK);
addr = Dword(0x0005B6A0);
MakeNameEx(addr, "SsmGet_Cumulative_Ash_Ratio_P186_____", SN_CHECK);

MakeUnknown(0x0005B6A4, 4, DOUNK_SIMPLE);
MakeDword(0x0005B6A4);
MakeNameEx(0x0005B6A4, "PtrSsmGet_Pressure_Difference_between_Diesel_Particulate_Filter_DPF_Inlet_and_Outlet_P187_____", SN_CHECK);
addr = Dword(0x0005B6A4);
MakeNameEx(addr, "SsmGet_Pressure_Difference_between_Diesel_Particulate_Filter_DPF_Inlet_and_Outlet_P187_____", SN_CHECK);

MakeUnknown(0x0005B6A8, 4, DOUNK_SIMPLE);
MakeDword(0x0005B6A8);
MakeNameEx(0x0005B6A8, "PtrSsmGet_Exhaust_Gas_Temperature_at_Catalyst_Inlet_P188_____", SN_CHECK);
addr = Dword(0x0005B6A8);
MakeNameEx(addr, "SsmGet_Exhaust_Gas_Temperature_at_Catalyst_Inlet_P188_____", SN_CHECK);

MakeUnknown(0x0005B6AC, 4, DOUNK_SIMPLE);
MakeDword(0x0005B6AC);
MakeNameEx(0x0005B6AC, "PtrSsmGet_Exhaust_Gas_Temperature_at_Diesel_Particulate_Filter_DPF_Inlet_P189_____", SN_CHECK);
addr = Dword(0x0005B6AC);
MakeNameEx(addr, "SsmGet_Exhaust_Gas_Temperature_at_Diesel_Particulate_Filter_DPF_Inlet_P189_____", SN_CHECK);

MakeUnknown(0x0005B6B0, 4, DOUNK_SIMPLE);
MakeDword(0x0005B6B0);
MakeNameEx(0x0005B6B0, "PtrSsmGet_Estimated_Catalyst_Temperature_P190_____", SN_CHECK);
addr = Dword(0x0005B6B0);
MakeNameEx(addr, "SsmGet_Estimated_Catalyst_Temperature_P190_____", SN_CHECK);

MakeUnknown(0x0005B6B4, 4, DOUNK_SIMPLE);
MakeDword(0x0005B6B4);
MakeNameEx(0x0005B6B4, "PtrSsmGet_Estimated_Temperature_of_the_Diesel_Particulate_Filter_DPF_P191_____", SN_CHECK);
addr = Dword(0x0005B6B4);
MakeNameEx(addr, "SsmGet_Estimated_Temperature_of_the_Diesel_Particulate_Filter_DPF_P191_____", SN_CHECK);

MakeUnknown(0x0005B6B8, 4, DOUNK_SIMPLE);
MakeDword(0x0005B6B8);
MakeNameEx(0x0005B6B8, "PtrSsmGet_Soot_Accumulation_Ratio_P192_____", SN_CHECK);
addr = Dword(0x0005B6B8);
MakeNameEx(addr, "SsmGet_Soot_Accumulation_Ratio_P192_____", SN_CHECK);

MakeUnknown(0x0005B6BC, 4, DOUNK_SIMPLE);
MakeDword(0x0005B6BC);
MakeNameEx(0x0005B6BC, "PtrSsmGet_Oil_Dilution_Ratio_P193_____", SN_CHECK);
addr = Dword(0x0005B6BC);
MakeNameEx(addr, "SsmGet_Oil_Dilution_Ratio_P193_____", SN_CHECK);

MakeUnknown(0x0005B72C, 4, DOUNK_SIMPLE);
MakeDword(0x0005B72C);
MakeNameEx(0x0005B72C, "PtrSsmGet_Accumulated_Count_of_Overspeed_Instances_Very_High_RPM_P198_____", SN_CHECK);
addr = Dword(0x0005B72C);
MakeNameEx(addr, "SsmGet_Accumulated_Count_of_Overspeed_Instances_Very_High_RPM_P198_____", SN_CHECK);

MakeUnknown(0x0005B730, 4, DOUNK_SIMPLE);
MakeDword(0x0005B730);
MakeNameEx(0x0005B730, "PtrSsmGet_Accumulated_Count_of_Overspeed_Instances_High_RPM_P199_____", SN_CHECK);
addr = Dword(0x0005B730);
MakeNameEx(addr, "SsmGet_Accumulated_Count_of_Overspeed_Instances_High_RPM_P199_____", SN_CHECK);

MakeUnknown(0x0005B548, 4, DOUNK_SIMPLE);
MakeDword(0x0005B548);
MakeNameEx(0x0005B548, "PtrSsmGet_Actual_Common_Rail_Pressure_Time_Synchronized_P204_____", SN_CHECK);
addr = Dword(0x0005B548);
MakeNameEx(addr, "SsmGet_Actual_Common_Rail_Pressure_Time_Synchronized_P204_____", SN_CHECK);

MakeUnknown(0x0005B734, 4, DOUNK_SIMPLE);
MakeDword(0x0005B734);
MakeNameEx(0x0005B734, "PtrSsmGet_Estimated_Distance_to_Oil_Change_P205_____", SN_CHECK);
addr = Dword(0x0005B734);
MakeNameEx(addr, "SsmGet_Estimated_Distance_to_Oil_Change_P205_____", SN_CHECK);

MakeUnknown(0x0005B738, 4, DOUNK_SIMPLE);
MakeDword(0x0005B738);
MakeNameEx(0x0005B738, "PtrSsmGet_Running_Distance_since_last_Diesel_Particulate_Filter_DPF_Regeneration_P206_____", SN_CHECK);
addr = Dword(0x0005B738);
MakeNameEx(addr, "SsmGet_Running_Distance_since_last_Diesel_Particulate_Filter_DPF_Regeneration_P206_____", SN_CHECK);

MakeUnknown(0x0005B740, 4, DOUNK_SIMPLE);
MakeDword(0x0005B740);
MakeNameEx(0x0005B740, "PtrSsmGet_Diesel_Particulate_Filter_DPF_Regeneration_Count_P207_____", SN_CHECK);
addr = Dword(0x0005B740);
MakeNameEx(addr, "SsmGet_Diesel_Particulate_Filter_DPF_Regeneration_Count_P207_____", SN_CHECK);

MakeUnknown(0x0005B5C0, 4, DOUNK_SIMPLE);
MakeDword(0x0005B5C0);
MakeNameEx(0x0005B5C0, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_11_P208_____", SN_CHECK);
addr = Dword(0x0005B5C0);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_11_P208_____", SN_CHECK);

MakeUnknown(0x0005B5C4, 4, DOUNK_SIMPLE);
MakeDword(0x0005B5C4);
MakeNameEx(0x0005B5C4, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_12_P209_____", SN_CHECK);
addr = Dword(0x0005B5C4);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_12_P209_____", SN_CHECK);

MakeUnknown(0x0005B5C8, 4, DOUNK_SIMPLE);
MakeDword(0x0005B5C8);
MakeNameEx(0x0005B5C8, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_13_P210_____", SN_CHECK);
addr = Dword(0x0005B5C8);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_13_P210_____", SN_CHECK);

MakeUnknown(0x0005B5CC, 4, DOUNK_SIMPLE);
MakeDword(0x0005B5CC);
MakeNameEx(0x0005B5CC, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_14_P211_____", SN_CHECK);
addr = Dword(0x0005B5CC);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_14_P211_____", SN_CHECK);

MakeUnknown(0x0005B5D0, 4, DOUNK_SIMPLE);
MakeDword(0x0005B5D0);
MakeNameEx(0x0005B5D0, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_21_P212_____", SN_CHECK);
addr = Dword(0x0005B5D0);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_21_P212_____", SN_CHECK);

MakeUnknown(0x0005B5D4, 4, DOUNK_SIMPLE);
MakeDword(0x0005B5D4);
MakeNameEx(0x0005B5D4, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_22_P213_____", SN_CHECK);
addr = Dword(0x0005B5D4);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_22_P213_____", SN_CHECK);

MakeUnknown(0x0005B5D8, 4, DOUNK_SIMPLE);
MakeDword(0x0005B5D8);
MakeNameEx(0x0005B5D8, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_23_P214_____", SN_CHECK);
addr = Dword(0x0005B5D8);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_23_P214_____", SN_CHECK);

MakeUnknown(0x0005B5DC, 4, DOUNK_SIMPLE);
MakeDword(0x0005B5DC);
MakeNameEx(0x0005B5DC, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_24_P215_____", SN_CHECK);
addr = Dword(0x0005B5DC);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_24_P215_____", SN_CHECK);

MakeUnknown(0x0005B5E0, 4, DOUNK_SIMPLE);
MakeDword(0x0005B5E0);
MakeNameEx(0x0005B5E0, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_31_P216_____", SN_CHECK);
addr = Dword(0x0005B5E0);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_31_P216_____", SN_CHECK);

MakeUnknown(0x0005B5E4, 4, DOUNK_SIMPLE);
MakeDword(0x0005B5E4);
MakeNameEx(0x0005B5E4, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_32_P217_____", SN_CHECK);
addr = Dword(0x0005B5E4);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_32_P217_____", SN_CHECK);

MakeUnknown(0x0005B5E8, 4, DOUNK_SIMPLE);
MakeDword(0x0005B5E8);
MakeNameEx(0x0005B5E8, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_33_P218_____", SN_CHECK);
addr = Dword(0x0005B5E8);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_33_P218_____", SN_CHECK);

MakeUnknown(0x0005B5EC, 4, DOUNK_SIMPLE);
MakeDword(0x0005B5EC);
MakeNameEx(0x0005B5EC, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_34_P219_____", SN_CHECK);
addr = Dword(0x0005B5EC);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_34_P219_____", SN_CHECK);

MakeUnknown(0x0005B5F0, 4, DOUNK_SIMPLE);
MakeDword(0x0005B5F0);
MakeNameEx(0x0005B5F0, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_41_P220_____", SN_CHECK);
addr = Dword(0x0005B5F0);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_41_P220_____", SN_CHECK);

MakeUnknown(0x0005B5F4, 4, DOUNK_SIMPLE);
MakeDword(0x0005B5F4);
MakeNameEx(0x0005B5F4, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_42_P221_____", SN_CHECK);
addr = Dword(0x0005B5F4);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_42_P221_____", SN_CHECK);

MakeUnknown(0x0005B5F8, 4, DOUNK_SIMPLE);
MakeDword(0x0005B5F8);
MakeNameEx(0x0005B5F8, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_43_P222_____", SN_CHECK);
addr = Dword(0x0005B5F8);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_43_P222_____", SN_CHECK);

MakeUnknown(0x0005B5FC, 4, DOUNK_SIMPLE);
MakeDword(0x0005B5FC);
MakeNameEx(0x0005B5FC, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_44_P223_____", SN_CHECK);
addr = Dword(0x0005B5FC);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_44_P223_____", SN_CHECK);

MakeUnknown(0x0005B600, 4, DOUNK_SIMPLE);
MakeDword(0x0005B600);
MakeNameEx(0x0005B600, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_51_P224_____", SN_CHECK);
addr = Dword(0x0005B600);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_51_P224_____", SN_CHECK);

MakeUnknown(0x0005B604, 4, DOUNK_SIMPLE);
MakeDword(0x0005B604);
MakeNameEx(0x0005B604, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_52_P225_____", SN_CHECK);
addr = Dword(0x0005B604);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_52_P225_____", SN_CHECK);

MakeUnknown(0x0005B608, 4, DOUNK_SIMPLE);
MakeDword(0x0005B608);
MakeNameEx(0x0005B608, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_53_P226_____", SN_CHECK);
addr = Dword(0x0005B608);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_53_P226_____", SN_CHECK);

MakeUnknown(0x0005B60C, 4, DOUNK_SIMPLE);
MakeDword(0x0005B60C);
MakeNameEx(0x0005B60C, "PtrSsmGet_MicroQuantityInjection_Final_Learning_Value_54_P227_____", SN_CHECK);
addr = Dword(0x0005B60C);
MakeNameEx(addr, "SsmGet_MicroQuantityInjection_Final_Learning_Value_54_P227_____", SN_CHECK);

MakeUnknown(0x0005B5AC, 4, DOUNK_SIMPLE);
MakeDword(0x0005B5AC);
MakeNameEx(0x0005B5AC, "PtrSsmGet_Individual_Pump_Difference_Learning_Value_P228_____", SN_CHECK);
addr = Dword(0x0005B5AC);
MakeNameEx(addr, "SsmGet_Individual_Pump_Difference_Learning_Value_P228_____", SN_CHECK);

MakeUnknown(0x0005B628, 4, DOUNK_SIMPLE);
MakeDword(0x0005B628);
MakeNameEx(0x0005B628, "PtrSsmGet_Final_Main_Injection_Period_P229_____", SN_CHECK);
addr = Dword(0x0005B628);
MakeNameEx(addr, "SsmGet_Final_Main_Injection_Period_P229_____", SN_CHECK);

MakeUnknown(0x0005B620, 4, DOUNK_SIMPLE);
MakeDword(0x0005B620);
MakeNameEx(0x0005B620, "PtrSsmGet_PreInjection_Final_Period_P233_____", SN_CHECK);
addr = Dword(0x0005B620);
MakeNameEx(addr, "SsmGet_PreInjection_Final_Period_P233_____", SN_CHECK);

MakeUnknown(0x0005B588, 4, DOUNK_SIMPLE);
MakeDword(0x0005B588);
MakeNameEx(0x0005B588, "PtrSsmGet_PreInjection_Amount_P234_____", SN_CHECK);
addr = Dword(0x0005B588);
MakeNameEx(addr, "SsmGet_PreInjection_Amount_P234_____", SN_CHECK);

MakeUnknown(0x0005B590, 4, DOUNK_SIMPLE);
MakeDword(0x0005B590);
MakeNameEx(0x0005B590, "PtrSsmGet_PreInjection_Interval_P235_____", SN_CHECK);
addr = Dword(0x0005B590);
MakeNameEx(addr, "SsmGet_PreInjection_Interval_P235_____", SN_CHECK);

MakeUnknown(0x0005B754, 4, DOUNK_SIMPLE);
MakeDword(0x0005B754);
MakeNameEx(0x0005B754, "PtrSsmGet_Cumulative_oil_diesel_entry_P236_____", SN_CHECK);
addr = Dword(0x0005B754);
MakeNameEx(addr, "SsmGet_Cumulative_oil_diesel_entry_P236_____", SN_CHECK);

MakeUnknown(0x0005B594, 4, DOUNK_SIMPLE);
MakeDword(0x0005B594);
MakeNameEx(0x0005B594, "PtrSsmGet_Final_Initial_Torque_P238_____", SN_CHECK);
addr = Dword(0x0005B594);
MakeNameEx(addr, "SsmGet_Final_Initial_Torque_P238_____", SN_CHECK);

MakeUnknown(0x0005AE88, 4, DOUNK_SIMPLE);
MakeDword(0x0005AE88);
MakeNameEx(0x0005AE88, "PtrSsmGet_Global_Timing_User_Adjustment_Value_P239_____", SN_CHECK);
addr = Dword(0x0005AE88);
MakeNameEx(addr, "SsmGet_Global_Timing_User_Adjustment_Value_P239_____", SN_CHECK);

MakeUnknown(0x0005AE8C, 4, DOUNK_SIMPLE);
MakeDword(0x0005AE8C);
MakeNameEx(0x0005AE8C, "PtrSsmGet_Engine_Idle_Speed_User_Adjustment_AC_off_P240_____", SN_CHECK);
addr = Dword(0x0005AE8C);
MakeNameEx(addr, "SsmGet_Engine_Idle_Speed_User_Adjustment_AC_off_P240_____", SN_CHECK);

MakeUnknown(0x0005AE90, 4, DOUNK_SIMPLE);
MakeDword(0x0005AE90);
MakeNameEx(0x0005AE90, "PtrSsmGet_Engine_Idle_Speed_User_Adjustment_AC_on_P241_____", SN_CHECK);
addr = Dword(0x0005AE90);
MakeNameEx(addr, "SsmGet_Engine_Idle_Speed_User_Adjustment_AC_on_P241_____", SN_CHECK);

MakeUnknown(0x0005B0EC, 4, DOUNK_SIMPLE);
MakeDword(0x0005B0EC);
MakeNameEx(0x0005B0EC, "PtrSsmGet_Secondary_Air_Piping_Pressure_P244_____", SN_CHECK);
addr = Dword(0x0005B0EC);
MakeNameEx(addr, "SsmGet_Secondary_Air_Piping_Pressure_P244_____", SN_CHECK);

MakeUnknown(0x0005B2D4, 4, DOUNK_SIMPLE);
MakeDword(0x0005B2D4);
MakeNameEx(0x0005B2D4, "PtrSsmGet_Secondary_Air_Flow_P245_____", SN_CHECK);
addr = Dword(0x0005B2D4);
MakeNameEx(addr, "SsmGet_Secondary_Air_Flow_P245_____", SN_CHECK);

// Switch Bit Position Name format: Switches_b7_b6_b5_b4_b3_b2_b1_b0
MakeUnknown(0x0005AE50, 4, DOUNK_SIMPLE);
MakeDword(0x0005AE50);
MakeNameEx(0x0005AE50, "PtrSsmGet_Switches_x_1_2_3_x_69_70_71_____", SN_CHECK);
addr = Dword(0x0005AE50);
MakeNameEx(addr, "SsmGet_Switches_x_1_2_3_x_69_70_71_____", SN_CHECK);

MakeUnknown(0x0005AE54, 4, DOUNK_SIMPLE);
MakeDword(0x0005AE54);
MakeNameEx(0x0005AE54, "PtrSsmGet_Switches_4_5_x_6_7_8_9_x_____", SN_CHECK);
addr = Dword(0x0005AE54);
MakeNameEx(addr, "SsmGet_Switches_4_5_x_6_7_8_9_x_____", SN_CHECK);

MakeUnknown(0x0005AE58, 4, DOUNK_SIMPLE);
MakeDword(0x0005AE58);
MakeNameEx(0x0005AE58, "PtrSsmGet_Switches_10_11_12_13_14_15_16_17_____", SN_CHECK);
addr = Dword(0x0005AE58);
MakeNameEx(addr, "SsmGet_Switches_10_11_12_13_14_15_16_17_____", SN_CHECK);

MakeUnknown(0x0005AE5C, 4, DOUNK_SIMPLE);
MakeDword(0x0005AE5C);
MakeNameEx(0x0005AE5C, "PtrSsmGet_Switches_18_19_20_21_22_23_24_25_____", SN_CHECK);
addr = Dword(0x0005AE5C);
MakeNameEx(addr, "SsmGet_Switches_18_19_20_21_22_23_24_25_____", SN_CHECK);

MakeUnknown(0x0005AE60, 4, DOUNK_SIMPLE);
MakeDword(0x0005AE60);
MakeNameEx(0x0005AE60, "PtrSsmGet_Switches_26_27_28_29_30_31_32_33_____", SN_CHECK);
addr = Dword(0x0005AE60);
MakeNameEx(addr, "SsmGet_Switches_26_27_28_29_30_31_32_33_____", SN_CHECK);

MakeUnknown(0x0005AE64, 4, DOUNK_SIMPLE);
MakeDword(0x0005AE64);
MakeNameEx(0x0005AE64, "PtrSsmGet_Switches_34_35_36_37_38_39_40_41_____", SN_CHECK);
addr = Dword(0x0005AE64);
MakeNameEx(addr, "SsmGet_Switches_34_35_36_37_38_39_40_41_____", SN_CHECK);

MakeUnknown(0x0005AE68, 4, DOUNK_SIMPLE);
MakeDword(0x0005AE68);
MakeNameEx(0x0005AE68, "PtrSsmGet_Switches_42_43_44_45_46_47_48_49_____", SN_CHECK);
addr = Dword(0x0005AE68);
MakeNameEx(addr, "SsmGet_Switches_42_43_44_45_46_47_48_49_____", SN_CHECK);

MakeUnknown(0x0005AE6C, 4, DOUNK_SIMPLE);
MakeDword(0x0005AE6C);
MakeNameEx(0x0005AE6C, "PtrSsmGet_Switches_72_73_74_75_50_51_52_53_____", SN_CHECK);
addr = Dword(0x0005AE6C);
MakeNameEx(addr, "SsmGet_Switches_72_73_74_75_50_51_52_53_____", SN_CHECK);

MakeUnknown(0x0005AE70, 4, DOUNK_SIMPLE);
MakeDword(0x0005AE70);
MakeNameEx(0x0005AE70, "PtrSsmGet_Switches_54_55_56_57_58_59_60_61_____", SN_CHECK);
addr = Dword(0x0005AE70);
MakeNameEx(addr, "SsmGet_Switches_54_55_56_57_58_59_60_61_____", SN_CHECK);

MakeUnknown(0x0005B14C, 4, DOUNK_SIMPLE);
MakeDword(0x0005B14C);
MakeNameEx(0x0005B14C, "PtrSsmGet_Switches_130_62_131_x_x_x_x_x_____", SN_CHECK);
addr = Dword(0x0005B14C);
MakeNameEx(addr, "SsmGet_Switches_130_62_131_x_x_x_x_x_____", SN_CHECK);

MakeUnknown(0x0005B150, 4, DOUNK_SIMPLE);
MakeDword(0x0005B150);
MakeNameEx(0x0005B150, "PtrSsmGet_Switches_63_64_65_66_67_132_68_133_____", SN_CHECK);
addr = Dword(0x0005B150);
MakeNameEx(addr, "SsmGet_Switches_63_64_65_66_67_132_68_133_____", SN_CHECK);

MakeUnknown(0x0005AE74, 4, DOUNK_SIMPLE);
MakeDword(0x0005AE74);
MakeNameEx(0x0005AE74, "PtrSsmGet_Switches_x_x_x_x_x_x_82_x_____", SN_CHECK);
addr = Dword(0x0005AE74);
MakeNameEx(addr, "SsmGet_Switches_x_x_x_x_x_x_82_x_____", SN_CHECK);

MakeUnknown(0x0005AE84, 4, DOUNK_SIMPLE);
MakeDword(0x0005AE84);
MakeNameEx(0x0005AE84, "PtrSsmGet_Switches_108_x_x_x_x_x_x_x_____", SN_CHECK);
addr = Dword(0x0005AE84);
MakeNameEx(addr, "SsmGet_Switches_108_x_x_x_x_x_x_x_____", SN_CHECK);

MakeUnknown(0x0005B028, 4, DOUNK_SIMPLE);
MakeDword(0x0005B028);
MakeNameEx(0x0005B028, "PtrSsmGet_Switches_148_149_x_150_151_152_153_154_____", SN_CHECK);
addr = Dword(0x0005B028);
MakeNameEx(addr, "SsmGet_Switches_148_149_x_150_151_152_153_154_____", SN_CHECK);

MakeUnknown(0x0005B324, 4, DOUNK_SIMPLE);
MakeDword(0x0005B324);
MakeNameEx(0x0005B324, "PtrSsmGet_Switches_155_156_157_x_x_x_x_x_____", SN_CHECK);
addr = Dword(0x0005B324);
MakeNameEx(addr, "SsmGet_Switches_155_156_157_x_x_x_x_x_____", SN_CHECK);

MakeUnknown(0x0005B328, 4, DOUNK_SIMPLE);
MakeDword(0x0005B328);
MakeNameEx(0x0005B328, "PtrSsmGet_Switches_158_159_160_161_162_163_164_165_____", SN_CHECK);
addr = Dword(0x0005B328);
MakeNameEx(addr, "SsmGet_Switches_158_159_160_161_162_163_164_165_____", SN_CHECK);

MakeUnknown(0x0005B404, 4, DOUNK_SIMPLE);
MakeDword(0x0005B404);
MakeNameEx(0x0005B404, "PtrSsmGet_Switches_168_169_170_171_172_x_x_x_____", SN_CHECK);
addr = Dword(0x0005B404);
MakeNameEx(addr, "SsmGet_Switches_168_169_170_171_172_x_x_x_____", SN_CHECK);

}   // end of StdParams

static ExtParams ()
{
Message("--- Now marking ExtParams ---\n");
MakeNameEx(0xFFFF3008, "E_IAM_4byteExt______E31", SN_CHECK);
MakeUnknown(0xFFFF3008, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF3008);
MakeNameEx(0xFFFF65B4, "E_Engine_Load_4ByteExt______E32", SN_CHECK);
MakeUnknown(0xFFFF65B4, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF65B4);
MakeNameEx(0xFFFFA2C5, "E_CLOL_FuelingExt______E33", SN_CHECK);
MakeUnknown(0xFFFFA2C5, 1, DOUNK_SIMPLE);
MakeByte(0xFFFFA2C5);
MakeNameEx(0xFFFF5E8C, "E_Turbo_Dynamics_Integral_4byteExt______E34", SN_CHECK);
MakeUnknown(0xFFFF5E8C, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF5E8C);
MakeNameEx(0xFFFF5E7C, "E_Boost_ErrorExt______E35", SN_CHECK);
MakeUnknown(0xFFFF5E7C, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF5E7C);
MakeNameEx(0xFFFF5E84, "E_Target_Boost_4byteExt______E36", SN_CHECK);
MakeUnknown(0xFFFF5E84, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF5E84);
MakeNameEx(0xFFFF5E88, "E_Turbo_Dynamics_Proportional_4byteExt______E37", SN_CHECK);
MakeUnknown(0xFFFF5E88, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF5E88);
MakeNameEx(0xFFFF64A0, "E_Throttle_Plate_Opening_Angle_4byteExt______E38", SN_CHECK);
MakeUnknown(0xFFFF64A0, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF64A0);
MakeNameEx(0xFFFF7F2C, "E_Feedback_Knock_Correction_4byteExt______E39", SN_CHECK);
MakeUnknown(0xFFFF7F2C, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF7F2C);
MakeNameEx(0xFFFF7F9C, "E_Knock_Correction_Advance_IAM_onlyExt______E40", SN_CHECK);
MakeUnknown(0xFFFF7F9C, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF7F9C);
MakeNameEx(0xFFFF7FC8, "E_Fine_Learning_Knock_Correction_4byteExt______E41", SN_CHECK);
MakeUnknown(0xFFFF7FC8, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF7FC8);
MakeNameEx(0xFFFF7F28, "E_Knock_Correction_Advance_4byteExt______E43", SN_CHECK);
MakeUnknown(0xFFFF7F28, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF7F28);
MakeNameEx(0xFFFF2F74, "E_AF_Learning_1_A_StoredExt______E44", SN_CHECK);
MakeUnknown(0xFFFF2F74, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF2F74);
MakeNameEx(0xFFFF2F7C, "E_AF_Learning_1_B_StoredExt______E45", SN_CHECK);
MakeUnknown(0xFFFF2F7C, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF2F7C);
MakeNameEx(0xFFFF2F84, "E_AF_Learning_1_C_StoredExt______E46", SN_CHECK);
MakeUnknown(0xFFFF2F84, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF2F84);
MakeNameEx(0xFFFF2F8C, "E_AF_Learning_1_D_StoredExt______E47", SN_CHECK);
MakeUnknown(0xFFFF2F8C, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF2F8C);
MakeNameEx(0xFFFF7634, "E_AF_Learning_1_4byteExt______E48", SN_CHECK);
MakeUnknown(0xFFFF7634, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF7634);
MakeNameEx(0xFFFF8638, "E_Idle_Speed_Map_SelectionExt______E49", SN_CHECK);
MakeUnknown(0xFFFF8638, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF8638);
MakeNameEx(0xFFFF71E0, "E_Fuel_Injector_1_Latency_4byteExt______E50", SN_CHECK);
MakeUnknown(0xFFFF71E0, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF71E0);
MakeNameEx(0xFFFF63D4, "E_Manifold_Absolute_Pressure_4byteExt______E51", SN_CHECK);
MakeUnknown(0xFFFF63D4, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF63D4);
MakeNameEx(0xFFFF63D4, "E_Manifold_Relative_Sea_Level_Pressure_4byteExt______E52", SN_CHECK);
MakeUnknown(0xFFFF63D4, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF63D4);
MakeNameEx(0xFFFF7C74, "E_Ignition_Base_TimingExt______E53", SN_CHECK);
MakeUnknown(0xFFFF7C74, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF7C74);
MakeNameEx(0xFFFF64A8, "E_Tipin_ThrottleExt______E54", SN_CHECK);
MakeUnknown(0xFFFF64A8, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF64A8);
MakeNameEx(0xFFFF79C8, "E_Tipin_Enrichment_Last_CalculatedExt______E55", SN_CHECK);
MakeUnknown(0xFFFF79C8, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF79C8);
MakeNameEx(0xFFFF8290, "E_Requested_TorqueExt______E56", SN_CHECK);
MakeUnknown(0xFFFF8290, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF8290);
MakeNameEx(0xFFFF8288, "E_Target_Throttle_Plate_PositionExt______E57", SN_CHECK);
MakeUnknown(0xFFFF8288, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF8288);
MakeNameEx(0xFFFF7FD4, "E_Fine_Learning_Table_OffsetExt______E58", SN_CHECK);
MakeUnknown(0xFFFF7FD4, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF7FD4);
MakeNameEx(0xFFFF69BD, "E_Gear_CalculatedExt______E59", SN_CHECK);
MakeUnknown(0xFFFF69BD, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF69BD);
MakeNameEx(0xFFFF7B18, "E_Fuel_Injector_1_Pulse_Width_4byteExt______E60", SN_CHECK);
MakeUnknown(0xFFFF7B18, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF7B18);
MakeNameEx(0xFFFF763B, "E_AF_Learning_Airflow_Range_CurrentExt______E61", SN_CHECK);
MakeUnknown(0xFFFF763B, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF763B);
MakeNameEx(0xFFFF5EA0, "E_Primary_Wastegate_Duty_MaximumExt_4byteExt__________E70", SN_CHECK);
MakeUnknown(0xFFFF5EA0, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF5EA0);
MakeNameEx(0xFFFF5EA0, "E_Primary_Wastegate_Duty_MaximumExt_4byteExt___________E77", SN_CHECK);
MakeUnknown(0xFFFF5EA0, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF5EA0);
MakeNameEx(0xFFFF74B0, "E_AF_Correction_1_4byteExt______E81", SN_CHECK);
MakeUnknown(0xFFFF74B0, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF74B0);
MakeNameEx(0xFFFF69EA, "E_AF_Correction_1_2byteExtExt______E82", SN_CHECK);
MakeUnknown(0xFFFF69EA, 2, DOUNK_SIMPLE);
MakeWord(0xFFFF69EA);
MakeNameEx(0xFFFF69EE, "E_AF_Learning_1_2byteExtExt______E83", SN_CHECK);
MakeUnknown(0xFFFF69EE, 2, DOUNK_SIMPLE);
MakeWord(0xFFFF69EE);
MakeNameEx(0xFFFF7744, "E_Primary_Open_Loop_Map_Enrichment_4byteExt______E84", SN_CHECK);
MakeUnknown(0xFFFF7744, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF7744);
MakeNameEx(0xFFFF69F4, "E_Primary_Open_Loop_Map_Enrichment_2byteExtExt______E85", SN_CHECK);
MakeUnknown(0xFFFF69F4, 2, DOUNK_SIMPLE);
MakeWord(0xFFFF69F4);
MakeNameEx(0xFFFF6A06, "E_Engine_Load_1byteExtExt______E86", SN_CHECK);
MakeUnknown(0xFFFF6A06, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF6A06);
MakeNameEx(0xFFFF69D0, "E_Manifold_Absolute_Pressure_2byteExtExt______E88", SN_CHECK);
MakeUnknown(0xFFFF69D0, 2, DOUNK_SIMPLE);
MakeWord(0xFFFF69D0);
MakeNameEx(0xFFFF69D0, "E_Manifold_Relative_Sea_Level_Pressure_2byteExtExt______E89", SN_CHECK);
MakeUnknown(0xFFFF69D0, 2, DOUNK_SIMPLE);
MakeWord(0xFFFF69D0);
MakeNameEx(0xFFFF6A00, "E_Target_Boost_2byteExtExt______E90", SN_CHECK);
MakeUnknown(0xFFFF6A00, 2, DOUNK_SIMPLE);
MakeWord(0xFFFF6A00);
MakeNameEx(0xFFFF66F0, "E_AF_Sensor_1_4byteExt______E91", SN_CHECK);
MakeUnknown(0xFFFF66F0, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF66F0);
MakeNameEx(0xFFFF69D8, "E_AF_Sensor_1_2byteExtExt______E92", SN_CHECK);
MakeUnknown(0xFFFF69D8, 2, DOUNK_SIMPLE);
MakeWord(0xFFFF69D8);
MakeNameEx(0xFFFF69D2, "E_Throttle_Plate_Opening_Angle_2byteExtExt______E93", SN_CHECK);
MakeUnknown(0xFFFF69D2, 2, DOUNK_SIMPLE);
MakeWord(0xFFFF69D2);
MakeNameEx(0xFFFF6A10, "E_Feedback_Knock_Correction_1byteExtExt______E94", SN_CHECK);
MakeUnknown(0xFFFF6A10, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF6A10);
MakeNameEx(0xFFFF6A13, "E_Fine_Learning_Knock_Correction_1byteExtExt______E95", SN_CHECK);
MakeUnknown(0xFFFF6A13, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF6A13);
MakeNameEx(0xFFFF6A12, "E_IAM_1byteExtExt______E96", SN_CHECK);
MakeUnknown(0xFFFF6A12, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF6A12);
MakeNameEx(0xFFFF6A1C, "E_Primary_WGDC_Maximum_1byteExtExt______E112", SN_CHECK);
MakeUnknown(0xFFFF6A1C, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF6A1C);
MakeNameEx(0xFFFF63D4, "E_Manifold_Relative_Pressure_4byteExt______E113", SN_CHECK);
MakeUnknown(0xFFFF63D4, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF63D4);
MakeNameEx(0xFFFF7F94, "E_Knock_Correction_Advance_Max_PrimaryExt______E118", SN_CHECK);
MakeUnknown(0xFFFF7F94, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF7F94);
MakeNameEx(0xFFFF5E80, "E_Target_Boost_Relative_4byteExt______E120", SN_CHECK);
MakeUnknown(0xFFFF5E80, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF5E80);
MakeNameEx(0xFFFF7598, "E_Closed_Loop_Fueling_Target_4byteExt______E121", SN_CHECK);
MakeUnknown(0xFFFF7598, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF7598);
MakeNameEx(0xFFFF69EC, "E_Closed_Loop_Fueling_Target_2byteExt______E122", SN_CHECK);
MakeUnknown(0xFFFF69EC, 2, DOUNK_SIMPLE);
MakeWord(0xFFFF69EC);
MakeNameEx(0xFFFF71A0, "E_Final_Fueling_Base_4byteExt______E123", SN_CHECK);
MakeUnknown(0xFFFF71A0, 4, DOUNK_SIMPLE);
MakeFloat(0xFFFF71A0);
MakeNameEx(0xFFFF69E6, "E_Final_Fueling_Base_2byteExt______E124", SN_CHECK);
MakeUnknown(0xFFFF69E6, 2, DOUNK_SIMPLE);
MakeWord(0xFFFF69E6);
MakeNameEx(0xFFFF7EE9, "E_Knock_Sum_Cylinder_1Ext_____E165", SN_CHECK);
MakeUnknown(0xFFFF7EE9, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF7EE9);
MakeNameEx(0xFFFF7EEA, "E_Knock_Sum_Cylinder_2Ext_____E166", SN_CHECK);
MakeUnknown(0xFFFF7EEA, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF7EEA);
MakeNameEx(0xFFFF7EEB, "E_Knock_Sum_Cylinder_3Ext_____E167", SN_CHECK);
MakeUnknown(0xFFFF7EEB, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF7EEB);
MakeNameEx(0xFFFF7EEC, "E_Knock_Sum_Cylinder_4Ext_____E168", SN_CHECK);
MakeUnknown(0xFFFF7EEC, 1, DOUNK_SIMPLE);
MakeByte(0xFFFF7EEC);
}   // end of ExtParams

