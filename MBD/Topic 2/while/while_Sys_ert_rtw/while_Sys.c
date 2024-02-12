/*
 * File: while_Sys.c
 *
 * Code generated for Simulink model 'while_Sys'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sat Feb 10 00:42:45 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "while_Sys.h"
#include "while_Sys_private.h"

/* Block states (default storage) */
DW_while_Sys_T while_Sys_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_while_Sys_T while_Sys_Y;

/* Real-time model */
static RT_MODEL_while_Sys_T while_Sys_M_;
RT_MODEL_while_Sys_T *const while_Sys_M = &while_Sys_M_;

/* Model step function */
void while_Sys_step(void)
{
  int32_T s1_iter;
  boolean_T loopCond;

  /* Outputs for Iterator SubSystem: '<Root>/While Iterator Subsystem' incorporates:
   *  WhileIterator: '<S1>/While Iterator'
   */
  s1_iter = 1;

  /* Constant: '<Root>/Constant1' */
  loopCond = true;
  while (loopCond) {
    /* Outport: '<Root>/y' incorporates:
     *  MATLAB Function: '<S1>/MATLAB Function'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    while_Sys_Y.y = (real_T)s1_iter * while_Sys_DW.UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
     *  Outport: '<Root>/y'
     */
    while_Sys_DW.UnitDelay_DSTATE = while_Sys_Y.y;

    /* RelationalOperator: '<S1>/GreaterThan' incorporates:
     *  Constant: '<Root>/Constant'
     */
    loopCond = (5 > s1_iter);
    s1_iter++;
  }

  /* End of Outputs for SubSystem: '<Root>/While Iterator Subsystem' */
}

/* Model initialize function */
void while_Sys_initialize(void)
{
  /* SystemInitialize for Iterator SubSystem: '<Root>/While Iterator Subsystem' */
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  while_Sys_DW.UnitDelay_DSTATE = 1.0;

  /* End of SystemInitialize for SubSystem: '<Root>/While Iterator Subsystem' */
}

/* Model terminate function */
void while_Sys_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
