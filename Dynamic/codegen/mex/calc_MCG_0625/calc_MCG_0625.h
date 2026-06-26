/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * calc_MCG_0625.h
 *
 * Code generation for function 'calc_MCG_0625'
 *
 */

#pragma once

/* Include files */
#include "calc_MCG_0625_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void calc_MCG_0625(const emlrtStack *sp, const struct0_T *LP, struct2_T *SV,
                   const real_T q0[7], const real_T qd0[7], real_T M[49],
                   real_T C[7], real_T G[7]);

emlrtCTX emlrtGetRootTLSGlobal(void);

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData);

/* End of code generation (calc_MCG_0625.h) */
