/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * calc_pos_0318.h
 *
 * Code generation for function 'calc_pos_0318'
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
void calc_pos_0318(const emlrtStack *sp, const real_T LP_module[11],
                   real_T LP_num_q, const real_T LP_align[11],
                   const real_T LP_BB[11], const real_T LP_Rd[90],
                   const real_T LP_Pp[30], const real_T LP_Pd[30],
                   const real_T LP_RBcp[27], const real_T LP_PBcp[9],
                   const real_T LP_T_L[160], const char_T LP_J_type[11],
                   const real_T LP_SN[11], struct2_T *SV);

/* End of code generation (calc_pos_0318.h) */
