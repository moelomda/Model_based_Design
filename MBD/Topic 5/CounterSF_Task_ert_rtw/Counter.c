/*
 * File: Counter.c
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

#include "Counter.h"

/* Include model header file for global data */
#include "CounterSF_Task.h"
#include "CounterSF_Task_private.h"

/* Named constants for Chart: '<Root>/Counter' */
#define Co_IN_CountUp_And_Down_Modifier ((uint8_T)1U)
#define CounterSF_Task_IN_Reset        ((uint8_T)2U)

/* System initialize for atomic system: '<Root>/Counter' */
void CounterSF_Task_Counter_Init(real_T *rty_CountDown, real_T *rty_CountUp)
{
  *rty_CountDown = 11.0;
  *rty_CountUp = -1.0;
}

/* Output and update for atomic system: '<Root>/Counter' */
void CounterSF_Task_Counter(real_T *rty_CountDown, real_T *rty_CountUp,
  DW_Counter_CounterSF_Task_T *localDW)
{
  if (localDW->temporalCounter_i1 < 1U) {
    localDW->temporalCounter_i1++;
  }

  /* Chart: '<Root>/Counter' */
  if (localDW->is_active_c3_CounterSF_Task == 0U) {
    localDW->is_active_c3_CounterSF_Task = 1U;
    localDW->is_c3_CounterSF_Task = Co_IN_CountUp_And_Down_Modifier;
    localDW->temporalCounter_i1 = 0U;
    (*rty_CountUp)++;
    (*rty_CountDown)--;
  } else if (localDW->is_c3_CounterSF_Task == Co_IN_CountUp_And_Down_Modifier) {
    if (*rty_CountUp == 10.0) {
      localDW->is_c3_CounterSF_Task = CounterSF_Task_IN_Reset;
      *rty_CountUp = 0.0;
      *rty_CountDown = 10.0;
    } else if (localDW->temporalCounter_i1 >= 1) {
      localDW->is_c3_CounterSF_Task = Co_IN_CountUp_And_Down_Modifier;
      localDW->temporalCounter_i1 = 0U;
      (*rty_CountUp)++;
      (*rty_CountDown)--;
    }
  } else {
    /* case IN_Reset: */
    localDW->is_c3_CounterSF_Task = Co_IN_CountUp_And_Down_Modifier;
    localDW->temporalCounter_i1 = 0U;
    (*rty_CountUp)++;
    (*rty_CountDown)--;
  }

  /* End of Chart: '<Root>/Counter' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
