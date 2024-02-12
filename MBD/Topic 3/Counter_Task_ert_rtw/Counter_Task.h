/*
 * File: Counter_Task.h
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

#ifndef RTW_HEADER_Counter_Task_h_
#define RTW_HEADER_Counter_Task_h_
#ifndef Counter_Task_COMMON_INCLUDES_
#define Counter_Task_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Counter_Task_COMMON_INCLUDES_ */

#include "Counter_Task_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S2>/Unit Delay' */
  real_T UnitDelay_DSTATE_c;           /* '<S1>/Unit Delay' */
} DW_Counter_Task_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T CounterValue;                 /* '<Root>/CounterValue' */
  real_T Choice;                       /* '<Root>/Choice' */
} ExtU_Counter_Task_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Output;                       /* '<Root>/Output' */
} ExtY_Counter_Task_T;

/* Real-time Model Data Structure */
struct tag_RTM_Counter_Task_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_Counter_Task_T Counter_Task_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Counter_Task_T Counter_Task_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Counter_Task_T Counter_Task_Y;

/* Model entry point functions */
extern void Counter_Task_initialize(void);
extern void Counter_Task_step(void);
extern void Counter_Task_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Counter_Task_T *const Counter_Task_M;

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
 * '<Root>' : 'Counter_Task'
 * '<S1>'   : 'Counter_Task/If Action Subsystem'
 * '<S2>'   : 'Counter_Task/If Action Subsystem1'
 */
#endif                                 /* RTW_HEADER_Counter_Task_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
