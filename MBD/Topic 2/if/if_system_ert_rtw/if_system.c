/*
 * File: if_system.c
 *
 * Code generated for Simulink model 'if_system'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sat Feb 10 00:39:51 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "if_system.h"
#include "if_system_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_if_system_T if_system_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_if_system_T if_system_Y;

/* Real-time model */
static RT_MODEL_if_system_T if_system_M_;
RT_MODEL_if_system_T *const if_system_M = &if_system_M_;

/* Model step function */
void if_system_step(void)
{
  /* If: '<S1>/If' incorporates:
   *  Inport: '<Root>/Input'
   *  Outport: '<Root>/Out1'
   *  StringConstant: '<S2>/String Constant'
   *  StringConstant: '<S3>/String Constant'
   *  StringConstant: '<S4>/String Constant'
   *  StringConstant: '<S5>/String Constant'
   */
  if (if_system_U.Input >= 90.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    strncpy(&if_system_Y.Out1[0], &if_system_ConstP.StringConstant_String[0],
            255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
    if_system_Y.Out1[255] = '\x00';
  } else if ((if_system_U.Input < 90.0) && (if_system_U.Input >= 80.0)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    strncpy(&if_system_Y.Out1[0], &if_system_ConstP.StringConstant_String_h[0],
            255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
    if_system_Y.Out1[255] = '\x00';
  } else if ((if_system_U.Input < 80.0) && (if_system_U.Input >= 60.0)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    strncpy(&if_system_Y.Out1[0], &if_system_ConstP.StringConstant_String_a[0],
            255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem2' */
    if_system_Y.Out1[255] = '\x00';
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    strncpy(&if_system_Y.Out1[0], &if_system_ConstP.StringConstant_String_hl[0],
            255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem3' */
    if_system_Y.Out1[255] = '\x00';
  }

  /* End of If: '<S1>/If' */
}

/* Model initialize function */
void if_system_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void if_system_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
