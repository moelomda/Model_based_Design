/*
 * File: Counter_Task.c
 *
 * Code generated for Simulink model 'Counter_Task'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Feb 12 16:46:40 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Counter_Task.h"
#include "Counter_Task_private.h"

/* Block states (default storage) */
DW_Counter_Task_T Counter_Task_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Counter_Task_T Counter_Task_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Counter_Task_T Counter_Task_Y;

/* Real-time model */
static RT_MODEL_Counter_Task_T Counter_Task_M_;
RT_MODEL_Counter_Task_T *const Counter_Task_M = &Counter_Task_M_;

/* Model step function */
void Counter_Task_step(void)
{
  /* If: '<Root>/If' incorporates:
   *  Inport: '<Root>/Choice'
   */
  if (Counter_Task_U.Choice == 1.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    /* Switch: '<S1>/Switch' incorporates:
     *  Constant: '<S1>/Constant'
     *  Inport: '<Root>/CounterValue'
     *  RelationalOperator: '<S1>/GreaterThan'
     *  Sum: '<S1>/Add'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    if (Counter_Task_DW.UnitDelay_DSTATE_c + 1.0 > Counter_Task_U.CounterValue)
    {
      /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
       *  Constant: '<S1>/Constant1'
       */
      Counter_Task_DW.UnitDelay_DSTATE_c = 0.0;
    } else {
      /* Update for UnitDelay: '<S1>/Unit Delay' */
      Counter_Task_DW.UnitDelay_DSTATE_c++;
    }

    /* End of Switch: '<S1>/Switch' */
    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
  } else if (Counter_Task_U.Choice == 0.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Switch: '<S2>/Switch' incorporates:
     *  Constant: '<S2>/Constant'
     *  Inport: '<Root>/CounterValue'
     *  Sum: '<S2>/Add'
     *  UnitDelay: '<S2>/Unit Delay'
     */
    if (Counter_Task_DW.UnitDelay_DSTATE - 1.0 >= 0.0) {
      Counter_Task_DW.UnitDelay_DSTATE--;
    } else {
      Counter_Task_DW.UnitDelay_DSTATE = Counter_Task_U.CounterValue;
    }

    /* End of Switch: '<S2>/Switch' */
    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
  }

  /* End of If: '<Root>/If' */

  /* Outport: '<Root>/Output' incorporates:
   *  SignalConversion: '<Root>/Signal Conversion1'
   *  UnitDelay: '<S2>/Unit Delay'
   */
  Counter_Task_Y.Output = Counter_Task_DW.UnitDelay_DSTATE;
}

/* Model initialize function */
void Counter_Task_initialize(void)
{
  /* SystemInitialize for IfAction SubSystem: '<Root>/If Action Subsystem' */
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  Counter_Task_DW.UnitDelay_DSTATE_c = -1.0;

  /* End of SystemInitialize for SubSystem: '<Root>/If Action Subsystem' */
}

/* Model terminate function */
void Counter_Task_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
