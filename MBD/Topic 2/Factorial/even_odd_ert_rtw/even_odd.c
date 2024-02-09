/*
 * File: even_odd.c
 *
 * Code generated for Simulink model 'even_odd'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sat Feb 10 00:36:44 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "even_odd.h"
#include "even_odd_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_even_odd_T even_odd_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_even_odd_T even_odd_Y;

/* Real-time model */
static RT_MODEL_even_odd_T even_odd_M_;
RT_MODEL_even_odd_T *const even_odd_M = &even_odd_M_;

/* Model step function */
void even_odd_step(void)
{
  /* Outport: '<Root>/y' incorporates:
   *  Inport: '<Root>/Input'
   *  MATLAB Function: '<Root>/Is_Even'
   */
  even_odd_Y.y = (even_odd_U.Input - ((even_odd_U.Input >> 1) << 1) == 0);
}

/* Model initialize function */
void even_odd_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void even_odd_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
