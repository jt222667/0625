/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_calc_MCG_0625_mex.c
 *
 * Code generation for function '_coder_calc_MCG_0625_mex'
 *
 */

/* Include files */
#include "_coder_calc_MCG_0625_mex.h"
#include "_coder_calc_MCG_0625_api.h"
#include "calc_MCG_0625.h"
#include "calc_MCG_0625_data.h"
#include "calc_MCG_0625_initialize.h"
#include "calc_MCG_0625_terminate.h"
#include "rt_nonfinite.h"
#include "omp.h"

/* Function Definitions */
void calc_MCG_0625_mexFunction(int32_T nlhs, mxArray *plhs[3], int32_T nrhs,
                               const mxArray *prhs[4])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[3];
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 4, 4,
                        13, "calc_MCG_0625");
  }
  if (nlhs > 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 13,
                        "calc_MCG_0625");
  }
  /* Call the function. */
  calc_MCG_0625_api(prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }
  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  static jmp_buf emlrtJBEnviron;
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexAtExit(&calc_MCG_0625_atexit);
  /* Initialize the memory manager. */
  omp_init_lock(&emlrtLockGlobal);
  omp_init_nest_lock(&calc_MCG_0625_nestLockGlobal);
  calc_MCG_0625_initialize();
  st.tls = emlrtRootTLSGlobal;
  emlrtSetJmpBuf(&st, &emlrtJBEnviron);
  if (setjmp(emlrtJBEnviron) == 0) {
    calc_MCG_0625_mexFunction(nlhs, plhs, nrhs, prhs);
    calc_MCG_0625_terminate();
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&calc_MCG_0625_nestLockGlobal);
  } else {
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&calc_MCG_0625_nestLockGlobal);
    emlrtReportParallelRunTimeError(&st);
  }
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal,
                           &emlrtLockerFunction, omp_get_num_procs(), NULL,
                           "GBK", true);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_calc_MCG_0625_mex.c) */
