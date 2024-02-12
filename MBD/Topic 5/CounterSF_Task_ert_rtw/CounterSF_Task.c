/*
 * File: CounterSF_Task.c
 *
 * Code generated for Simulink model 'CounterSF_Task'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Feb 12 17:00:32 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CounterSF_Task.h"
#include "CounterSF_Task_private.h"

/* Block states (default storage) */
DW_CounterSF_Task_T CounterSF_Task_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_CounterSF_Task_T CounterSF_Task_Y;

/* Real-time model */
static RT_MODEL_CounterSF_Task_T CounterSF_Task_M_;
RT_MODEL_CounterSF_Task_T *const CounterSF_Task_M = &CounterSF_Task_M_;

/* Model step function */
void CounterSF_Task_step(void)
{
  /* Chart: '<Root>/Counter' incorporates:
   *  Outport: '<Root>/CountDown'
   *  Outport: '<Root>/CountUp'
   */
  CounterSF_Task_Counter(&CounterSF_Task_Y.CountDown, &CounterSF_Task_Y.CountUp,
    &CounterSF_Task_DW.sf_Counter);
}

/* Model initialize function */
void CounterSF_Task_initialize(void)
{
  /* SystemInitialize for Chart: '<Root>/Counter' incorporates:
   *  Outport: '<Root>/CountDown'
   *  Outport: '<Root>/CountUp'
   */
  CounterSF_Task_Counter_Init(&CounterSF_Task_Y.CountDown,
    &CounterSF_Task_Y.CountUp);
}

/* Model terminate function */
void CounterSF_Task_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
