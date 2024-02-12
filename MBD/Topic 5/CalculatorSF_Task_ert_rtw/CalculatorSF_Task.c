/*
 * File: CalculatorSF_Task.c
 *
 * Code generated for Simulink model 'CalculatorSF_Task'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Feb 12 17:01:47 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CalculatorSF_Task.h"
#include "CalculatorSF_Task_private.h"

/* Block states (default storage) */
DW_CalculatorSF_Task_T CalculatorSF_Task_DW;

/* External inputs (root inport signals with default storage) */
ExtU_CalculatorSF_Task_T CalculatorSF_Task_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_CalculatorSF_Task_T CalculatorSF_Task_Y;

/* Real-time model */
static RT_MODEL_CalculatorSF_Task_T CalculatorSF_Task_M_;
RT_MODEL_CalculatorSF_Task_T *const CalculatorSF_Task_M = &CalculatorSF_Task_M_;

/* Model step function */
void CalculatorSF_Task_step(void)
{
  /* Chart: '<Root>/Calculator' incorporates:
   *  Inport: '<Root>/Num1'
   *  Inport: '<Root>/Num2'
   *  Inport: '<Root>/Operator'
   *  Outport: '<Root>/Result'
   */
  CalculatorSF_Task_Calculator(CalculatorSF_Task_U.Num2,
    CalculatorSF_Task_U.Num1, CalculatorSF_Task_U.Operator,
    &CalculatorSF_Task_Y.Result, &CalculatorSF_Task_DW.sf_Calculator);
}

/* Model initialize function */
void CalculatorSF_Task_initialize(void)
{
  /* SystemInitialize for Chart: '<Root>/Calculator' incorporates:
   *  Outport: '<Root>/Result'
   */
  CalculatorSF_Ta_Calculator_Init(&CalculatorSF_Task_Y.Result);
}

/* Model terminate function */
void CalculatorSF_Task_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
