/*
 * File: Calculator.h
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

#ifndef RTW_HEADER_Calculator_h_
#define RTW_HEADER_Calculator_h_
#ifndef CalculatorSF_Task_COMMON_INCLUDES_
#define CalculatorSF_Task_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* CalculatorSF_Task_COMMON_INCLUDES_ */

#include "CalculatorSF_Task_types.h"

/* Block states (default storage) for system '<Root>/Calculator' */
typedef struct {
  uint8_T is_active_c3_CalculatorSF_Task;/* '<Root>/Calculator' */
} DW_Calculator_CalculatorSF_Ta_T;

extern void CalculatorSF_Ta_Calculator_Init(real_T *rty_Result);
extern void CalculatorSF_Task_Calculator(real_T rtu_Num2, real_T rtu_Num1,
  real_T rtu_Operator, real_T *rty_Result, DW_Calculator_CalculatorSF_Ta_T
  *localDW);

#endif                                 /* RTW_HEADER_Calculator_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
