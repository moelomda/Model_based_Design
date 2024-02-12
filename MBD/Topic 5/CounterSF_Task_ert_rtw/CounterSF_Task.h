/*
 * File: CounterSF_Task.h
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

#ifndef RTW_HEADER_CounterSF_Task_h_
#define RTW_HEADER_CounterSF_Task_h_
#ifndef CounterSF_Task_COMMON_INCLUDES_
#define CounterSF_Task_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* CounterSF_Task_COMMON_INCLUDES_ */

#include "CounterSF_Task_types.h"

/* Child system includes */
#include "Counter.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  DW_Counter_CounterSF_Task_T sf_Counter;/* '<Root>/Counter' */
} DW_CounterSF_Task_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T CountDown;                    /* '<Root>/CountDown' */
  real_T CountUp;                      /* '<Root>/CountUp' */
} ExtY_CounterSF_Task_T;

/* Real-time Model Data Structure */
struct tag_RTM_CounterSF_Task_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_CounterSF_Task_T CounterSF_Task_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_CounterSF_Task_T CounterSF_Task_Y;

/* Model entry point functions */
extern void CounterSF_Task_initialize(void);
extern void CounterSF_Task_step(void);
extern void CounterSF_Task_terminate(void);

/* Real-time Model object */
extern RT_MODEL_CounterSF_Task_T *const CounterSF_Task_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'CounterSF_Task'
 * '<S1>'   : 'CounterSF_Task/Counter'
 */
#endif                                 /* RTW_HEADER_CounterSF_Task_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
