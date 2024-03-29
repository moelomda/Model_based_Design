/*
 * File: CalculatorSF_Task.h
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

#ifndef RTW_HEADER_CalculatorSF_Task_h_
#define RTW_HEADER_CalculatorSF_Task_h_
#ifndef CalculatorSF_Task_COMMON_INCLUDES_
#define CalculatorSF_Task_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* CalculatorSF_Task_COMMON_INCLUDES_ */

#include "CalculatorSF_Task_types.h"

/* Child system includes */
#include "Calculator.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  DW_Calculator_CalculatorSF_Ta_T sf_Calculator;/* '<Root>/Calculator' */
} DW_CalculatorSF_Task_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Num1;                         /* '<Root>/Num1' */
  real_T Num2;                         /* '<Root>/Num2' */
  real_T Operator;                     /* '<Root>/Operator' */
} ExtU_CalculatorSF_Task_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Result;                       /* '<Root>/Result' */
} ExtY_CalculatorSF_Task_T;

/* Real-time Model Data Structure */
struct tag_RTM_CalculatorSF_Task_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_CalculatorSF_Task_T CalculatorSF_Task_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_CalculatorSF_Task_T CalculatorSF_Task_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_CalculatorSF_Task_T CalculatorSF_Task_Y;

/* Model entry point functions */
extern void CalculatorSF_Task_initialize(void);
extern void CalculatorSF_Task_step(void);
extern void CalculatorSF_Task_terminate(void);

/* Real-time Model object */
extern RT_MODEL_CalculatorSF_Task_T *const CalculatorSF_Task_M;

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
 * '<Root>' : 'CalculatorSF_Task'
 * '<S1>'   : 'CalculatorSF_Task/Calculator'
 */
#endif                                 /* RTW_HEADER_CalculatorSF_Task_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
