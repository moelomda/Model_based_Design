/*
 * untitled.c
 *
 * Code generation for model "untitled".
 *
 * Model version              : 1.4
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Sat Feb 10 00:06:53 2024
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "untitled_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_untitled_T untitled_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_untitled_T untitled_Y;

/* Real-time model */
static RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;

/* Model step function */
void untitled_step(void)
{
  real_T rtb_SumofElements;
  int32_T i;

  /* MinMax: '<S1>/Max of Elements' incorporates:
   *  Constant: '<S1>/Constant'
   */
  rtb_SumofElements = untitled_P.Constant_Value[0];
  for (i = 0; i < 5; i++) {
    rtb_SumofElements = fmax(rtb_SumofElements, untitled_P.Constant_Value[i + 1]);
  }

  /* Outport: '<Root>/MaxOfArr' incorporates:
   *  MinMax: '<S1>/Max of Elements'
   */
  untitled_Y.MaxOfArr = rtb_SumofElements;

  /* MinMax: '<S1>/Min of Elements' incorporates:
   *  Constant: '<S1>/Constant'
   */
  rtb_SumofElements = untitled_P.Constant_Value[0];
  for (i = 0; i < 5; i++) {
    rtb_SumofElements = fmin(rtb_SumofElements, untitled_P.Constant_Value[i + 1]);
  }

  /* Outport: '<Root>/MinOfArr' incorporates:
   *  MinMax: '<S1>/Min of Elements'
   */
  untitled_Y.MinOfArr = rtb_SumofElements;

  /* Sum: '<S1>/Sum of Elements' incorporates:
   *  Constant: '<S1>/Constant'
   */
  rtb_SumofElements = -0.0;
  for (i = 0; i < 6; i++) {
    rtb_SumofElements += untitled_P.Constant_Value[i];
  }

  /* End of Sum: '<S1>/Sum of Elements' */

  /* Outport: '<Root>/SumOfArr' */
  untitled_Y.SumOfArr = rtb_SumofElements;

  /* Outport: '<Root>/AvgOfArr' incorporates:
   *  MATLAB Function: '<S1>/Array_Size'
   *  Product: '<S1>/Divide'
   */
  untitled_Y.AvgOfArr = rtb_SumofElements / 6.0;

  /* Matfile logging */
  rt_UpdateTXYLogVars(untitled_M->rtwLogInfo, (&untitled_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.2s, 0.0s] */
    if ((rtmGetTFinal(untitled_M)!=-1) &&
        !((rtmGetTFinal(untitled_M)-untitled_M->Timing.taskTime0) >
          untitled_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(untitled_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++untitled_M->Timing.clockTick0)) {
    ++untitled_M->Timing.clockTickH0;
  }

  untitled_M->Timing.taskTime0 = untitled_M->Timing.clockTick0 *
    untitled_M->Timing.stepSize0 + untitled_M->Timing.clockTickH0 *
    untitled_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)untitled_M, 0,
                sizeof(RT_MODEL_untitled_T));
  rtmSetTFinal(untitled_M, 10.0);
  untitled_M->Timing.stepSize0 = 0.2;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    untitled_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(untitled_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(untitled_M->rtwLogInfo, (NULL));
    rtliSetLogT(untitled_M->rtwLogInfo, "tout");
    rtliSetLogX(untitled_M->rtwLogInfo, "");
    rtliSetLogXFinal(untitled_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(untitled_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(untitled_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(untitled_M->rtwLogInfo, 0);
    rtliSetLogDecimation(untitled_M->rtwLogInfo, 1);
    rtliSetLogY(untitled_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(untitled_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(untitled_M->rtwLogInfo, (NULL));
  }

  /* external inputs */
  (void)memset(&untitled_U, 0, sizeof(ExtU_untitled_T));

  /* external outputs */
  (void) memset((void *)&untitled_Y, 0,
                sizeof(ExtY_untitled_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(untitled_M->rtwLogInfo, 0.0, rtmGetTFinal
    (untitled_M), untitled_M->Timing.stepSize0, (&rtmGetErrorStatus(untitled_M)));
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* (no terminate code required) */
}
