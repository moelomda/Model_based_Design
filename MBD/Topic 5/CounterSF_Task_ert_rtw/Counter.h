/*
 * File: Counter.h
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

#ifndef RTW_HEADER_Counter_h_
#define RTW_HEADER_Counter_h_
#ifndef CounterSF_Task_COMMON_INCLUDES_
#define CounterSF_Task_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* CounterSF_Task_COMMON_INCLUDES_ */

#include "CounterSF_Task_types.h"

/* Block states (default storage) for system '<Root>/Counter' */
typedef struct {
  uint8_T is_active_c3_CounterSF_Task; /* '<Root>/Counter' */
  uint8_T is_c3_CounterSF_Task;        /* '<Root>/Counter' */
  uint8_T temporalCounter_i1;          /* '<Root>/Counter' */
} DW_Counter_CounterSF_Task_T;

extern void CounterSF_Task_Counter_Init(real_T *rty_CountDown, real_T
  *rty_CountUp);
extern void CounterSF_Task_Counter(real_T *rty_CountDown, real_T *rty_CountUp,
  DW_Counter_CounterSF_Task_T *localDW);

#endif                                 /* RTW_HEADER_Counter_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
