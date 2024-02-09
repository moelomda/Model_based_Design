/*
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Fri Feb  9 23:23:18 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "untitled_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_untitled_T untitled_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_untitled_T untitled_Y;

/* Real-time model */
static RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;

/* Model step function */
void untitled_step(void)
{
  /* Outport: '<Root>/Output' incorporates:
   *  Constant: '<S1>/FixPt Constant'
   *  Constant: '<S2>/FixPt Constant'
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Inport: '<Root>/Input2'
   *  Product: '<Root>/Divide'
   *  Sum: '<Root>/Add'
   *  Sum: '<Root>/Subtract'
   *  Sum: '<S1>/FixPt Sum1'
   *  Sum: '<S2>/FixPt Sum1'
   *  UnaryMinus: '<Root>/Unary Minus'
   */
  untitled_Y.Output[0] = untitled_U.Input + untitled_U.Input1;
  untitled_Y.Output[1] = -untitled_U.Input2;
  untitled_Y.Output[2] = untitled_U.Input2 + 1.0;
  untitled_Y.Output[3] = untitled_U.Input / untitled_U.Input1;
  untitled_Y.Output[4] = untitled_U.Input2 - 1.0;
  untitled_Y.Output[5] = untitled_U.Input - untitled_U.Input1;
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
