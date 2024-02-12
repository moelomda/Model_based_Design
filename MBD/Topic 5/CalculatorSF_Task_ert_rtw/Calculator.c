/*
 * File: Calculator.c
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

#include "Calculator.h"

/* Include model header file for global data */
#include "CalculatorSF_Task.h"
#include "CalculatorSF_Task_private.h"

/* Forward declaration for local functions */
static void CalculatorSF_Task_add(real_T N1, real_T N2, real_T *rty_Result);
static void CalculatorSF_Task_sub(real_T N1, real_T N2, real_T *rty_Result);
static void CalculatorSF_Task_divide(real_T N1, real_T N2, real_T *rty_Result);
static void CalculatorSF_Task_multiply(real_T N1, real_T N2, real_T *rty_Result);

/* Function for Chart: '<Root>/Calculator' */
static void CalculatorSF_Task_add(real_T N1, real_T N2, real_T *rty_Result)
{
  /* Chart: '<Root>/Calculator' */
  *rty_Result = N1 + N2;
}

/* Function for Chart: '<Root>/Calculator' */
static void CalculatorSF_Task_sub(real_T N1, real_T N2, real_T *rty_Result)
{
  /* Chart: '<Root>/Calculator' */
  *rty_Result = N1 - N2;
}

/* Function for Chart: '<Root>/Calculator' */
static void CalculatorSF_Task_divide(real_T N1, real_T N2, real_T *rty_Result)
{
  if (N2 == 0.0) {
    /* Chart: '<Root>/Calculator' */
    *rty_Result = -1.0;
  } else {
    /* Chart: '<Root>/Calculator' */
    *rty_Result = N1 / N2;
  }
}

/* Function for Chart: '<Root>/Calculator' */
static void CalculatorSF_Task_multiply(real_T N1, real_T N2, real_T *rty_Result)
{
  /* Chart: '<Root>/Calculator' */
  *rty_Result = N1 * N2;
}

/* System initialize for atomic system: '<Root>/Calculator' */
void CalculatorSF_Ta_Calculator_Init(real_T *rty_Result)
{
  *rty_Result = 0.0;
}

/* Output and update for atomic system: '<Root>/Calculator' */
void CalculatorSF_Task_Calculator(real_T rtu_Num2, real_T rtu_Num1, real_T
  rtu_Operator, real_T *rty_Result, DW_Calculator_CalculatorSF_Ta_T *localDW)
{
  /* Chart: '<Root>/Calculator' */
  if (localDW->is_active_c3_CalculatorSF_Task == 0U) {
    localDW->is_active_c3_CalculatorSF_Task = 1U;
    if (rtu_Operator == 0.0) {
      CalculatorSF_Task_add(rtu_Num1, rtu_Num2, rty_Result);
    } else if (rtu_Operator == 1.0) {
      CalculatorSF_Task_sub(rtu_Num1, rtu_Num2, rty_Result);
    } else if (rtu_Operator == 2.0) {
      CalculatorSF_Task_multiply(rtu_Num1, rtu_Num2, rty_Result);
    } else {
      CalculatorSF_Task_divide(rtu_Num1, rtu_Num2, rty_Result);
    }
  }

  /* End of Chart: '<Root>/Calculator' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
