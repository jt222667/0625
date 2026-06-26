/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * calc_MCG_0625.c
 *
 * Code generation for function 'calc_MCG_0625'
 *
 */

/* Include files */
#include "calc_MCG_0625.h"
#include "calc_MCG_0625_data.h"
#include "calc_MCG_0625_types.h"
#include "calc_aa_0318.h"
#include "calc_pos_0318.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "omp.h"
#include <emmintrin.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    21,              /* lineNo */
    "calc_MCG_0625", /* fcnName */
    "F:\\Archive \xe5\xbd\x92\xe6\xa1\xa3\\0625\\Dynamic\\calc_MCG_0625.m" /* pathName
                                                                            */
};

static emlrtRSInfo b_emlrtRSI = {
    20,              /* lineNo */
    "calc_MCG_0625", /* fcnName */
    "F:\\Archive \xe5\xbd\x92\xe6\xa1\xa3\\0625\\Dynamic\\calc_MCG_0625.m" /* pathName
                                                                            */
};

static emlrtDCInfo
    emlrtDCI =
        {
            19,              /* lineNo */
            6,               /* colNo */
            "calc_MCG_0625", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Dynamic\\calc_MCG_0625.m", /* pName
                                                                         */
            1 /* checkKind */
};

static emlrtBCInfo
    emlrtBCI =
        {
            1,               /* iFirst */
            11,              /* iLast */
            19,              /* lineNo */
            6,               /* colNo */
            "SV.q",          /* aName */
            "calc_MCG_0625", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Dynamic\\calc_MCG_0625.m", /* pName
                                                                         */
            3 /* checkKind */
};

static emlrtDCInfo
    b_emlrtDCI =
        {
            6,               /* lineNo */
            20,              /* colNo */
            "calc_MCG_0625", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Dynamic\\calc_MCG_0625.m", /* pName
                                                                         */
            1 /* checkKind */
};

static emlrtBCInfo
    b_emlrtBCI =
        {
            1,               /* iFirst */
            30,              /* iLast */
            6,               /* lineNo */
            20,              /* colNo */
            "LP.R_idx",      /* aName */
            "calc_MCG_0625", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Dynamic\\calc_MCG_0625.m", /* pName
                                                                         */
            0 /* checkKind */
};

static emlrtECInfo emlrtECI = {
    -1,              /* nDims */
    19,              /* lineNo */
    1,               /* colNo */
    "calc_MCG_0625", /* fName */
    "F:\\Archive \xe5\xbd\x92\xe6\xa1\xa3\\0625\\Dynamic\\calc_MCG_0625.m" /* pName
                                                                            */
};

static emlrtBCInfo
    c_emlrtBCI =
        {
            -1,              /* iFirst */
            -1,              /* iLast */
            25,              /* lineNo */
            20,              /* colNo */
            "idx_q",         /* aName */
            "calc_MCG_0625", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Dynamic\\calc_MCG_0625.m", /* pName
                                                                         */
            0 /* checkKind */
};

static emlrtRTEInfo emlrtRTEI = {
    25,              /* lineNo */
    14,              /* colNo */
    "calc_MCG_0625", /* fName */
    "F:\\Archive \xe5\xbd\x92\xe6\xa1\xa3\\0625\\Dynamic\\calc_MCG_0625.m" /* pName
                                                                            */
};

static emlrtBCInfo
    d_emlrtBCI =
        {
            -1,              /* iFirst */
            -1,              /* iLast */
            26,              /* lineNo */
            20,              /* colNo */
            "idx_q",         /* aName */
            "calc_MCG_0625", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Dynamic\\calc_MCG_0625.m", /* pName
                                                                         */
            0 /* checkKind */
};

static emlrtRTEInfo b_emlrtRTEI = {
    26,              /* lineNo */
    14,              /* colNo */
    "calc_MCG_0625", /* fName */
    "F:\\Archive \xe5\xbd\x92\xe6\xa1\xa3\\0625\\Dynamic\\calc_MCG_0625.m" /* pName
                                                                            */
};

static emlrtBCInfo
    e_emlrtBCI =
        {
            -1,              /* iFirst */
            -1,              /* iLast */
            27,              /* lineNo */
            20,              /* colNo */
            "idx_q",         /* aName */
            "calc_MCG_0625", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Dynamic\\calc_MCG_0625.m", /* pName
                                                                         */
            0 /* checkKind */
};

static emlrtRTEInfo c_emlrtRTEI = {
    27,              /* lineNo */
    14,              /* colNo */
    "calc_MCG_0625", /* fName */
    "F:\\Archive \xe5\xbd\x92\xe6\xa1\xa3\\0625\\Dynamic\\calc_MCG_0625.m" /* pName
                                                                            */
};

static emlrtBCInfo
    f_emlrtBCI =
        {
            -1,              /* iFirst */
            -1,              /* iLast */
            28,              /* lineNo */
            20,              /* colNo */
            "idx_q",         /* aName */
            "calc_MCG_0625", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Dynamic\\calc_MCG_0625.m", /* pName
                                                                         */
            0 /* checkKind */
};

static emlrtRTEInfo d_emlrtRTEI = {
    28,              /* lineNo */
    14,              /* colNo */
    "calc_MCG_0625", /* fName */
    "F:\\Archive \xe5\xbd\x92\xe6\xa1\xa3\\0625\\Dynamic\\calc_MCG_0625.m" /* pName
                                                                            */
};

static emlrtBCInfo
    g_emlrtBCI =
        {
            -1,              /* iFirst */
            -1,              /* iLast */
            29,              /* lineNo */
            20,              /* colNo */
            "idx_q",         /* aName */
            "calc_MCG_0625", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Dynamic\\calc_MCG_0625.m", /* pName
                                                                         */
            0 /* checkKind */
};

static emlrtRTEInfo e_emlrtRTEI = {
    29,              /* lineNo */
    14,              /* colNo */
    "calc_MCG_0625", /* fName */
    "F:\\Archive \xe5\xbd\x92\xe6\xa1\xa3\\0625\\Dynamic\\calc_MCG_0625.m" /* pName
                                                                            */
};

static emlrtBCInfo
    h_emlrtBCI =
        {
            -1,              /* iFirst */
            -1,              /* iLast */
            30,              /* lineNo */
            20,              /* colNo */
            "idx_q",         /* aName */
            "calc_MCG_0625", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Dynamic\\calc_MCG_0625.m", /* pName
                                                                         */
            0 /* checkKind */
};

static emlrtRTEInfo f_emlrtRTEI = {
    30,              /* lineNo */
    14,              /* colNo */
    "calc_MCG_0625", /* fName */
    "F:\\Archive \xe5\xbd\x92\xe6\xa1\xa3\\0625\\Dynamic\\calc_MCG_0625.m" /* pName
                                                                            */
};

static emlrtBCInfo
    i_emlrtBCI =
        {
            -1,              /* iFirst */
            -1,              /* iLast */
            31,              /* lineNo */
            20,              /* colNo */
            "idx_q",         /* aName */
            "calc_MCG_0625", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Dynamic\\calc_MCG_0625.m", /* pName
                                                                         */
            0 /* checkKind */
};

static emlrtRTEInfo g_emlrtRTEI = {
    31,              /* lineNo */
    14,              /* colNo */
    "calc_MCG_0625", /* fName */
    "F:\\Archive \xe5\xbd\x92\xe6\xa1\xa3\\0625\\Dynamic\\calc_MCG_0625.m" /* pName
                                                                            */
};

/* Function Definitions */
void calc_MCG_0625(const emlrtStack *sp, const struct0_T *LP, struct2_T *SV,
                   const real_T q0[7], const real_T qd0[7], real_T M[49],
                   real_T C[7], real_T G[7])
{
  static const int8_T b[9] = {1, 0, 0, 0, 1, 0, 0, 0, 1};
  __m128d r;
  __m128d r1;
  __m128d r10;
  __m128d r11;
  __m128d r12;
  __m128d r13;
  __m128d r14;
  __m128d r15;
  __m128d r16;
  __m128d r17;
  __m128d r18;
  __m128d r19;
  __m128d r2;
  __m128d r20;
  __m128d r21;
  __m128d r22;
  __m128d r23;
  __m128d r24;
  __m128d r25;
  __m128d r26;
  __m128d r27;
  __m128d r28;
  __m128d r29;
  __m128d r3;
  __m128d r30;
  __m128d r31;
  __m128d r32;
  __m128d r33;
  __m128d r34;
  __m128d r35;
  __m128d r36;
  __m128d r37;
  __m128d r38;
  __m128d r39;
  __m128d r4;
  __m128d r5;
  __m128d r6;
  __m128d r7;
  __m128d r8;
  __m128d r9;
  jmp_buf emlrtJBEnviron;
  jmp_buf *volatile emlrtJBStack;
  emlrtStack b_st;
  emlrtStack st;
  real_T dv[49];
  real_T A10[9];
  real_T A10_tmp[9];
  real_T A12[9];
  real_T A21[9];
  real_T A21_tmp[9];
  real_T A23[9];
  real_T A32[9];
  real_T A32_tmp[9];
  real_T A34[9];
  real_T A43[9];
  real_T A43_tmp[9];
  real_T A54[9];
  real_T A54_tmp[9];
  real_T A65[9];
  real_T A65_tmp[9];
  real_T R1[9];
  real_T R2[9];
  real_T R3[9];
  real_T R4[9];
  real_T R5[9];
  real_T R6[9];
  real_T qd_cal[7];
  real_T F66[3];
  real_T P01[3];
  real_T P12[3];
  real_T P23[3];
  real_T P34[3];
  real_T P45[3];
  real_T P56[3];
  real_T P67[3];
  real_T V_d33[3];
  real_T W11[3];
  real_T W22[3];
  real_T W77[3];
  real_T W_d33[3];
  real_T W_d44[3];
  real_T W_d55[3];
  real_T W_d66[3];
  real_T W_d77[3];
  real_T b_LP[3];
  real_T n66[3];
  real_T n77[3];
  real_T F22_idx_0;
  real_T F22_idx_1;
  real_T F22_idx_2;
  real_T F33_idx_0;
  real_T F33_idx_1;
  real_T F33_idx_2;
  real_T F44_idx_0;
  real_T F44_idx_1;
  real_T F44_idx_2;
  real_T F55_idx_0;
  real_T F55_idx_1;
  real_T F55_idx_2;
  real_T SV_tmp;
  real_T W11_tmp_tmp;
  real_T W22_idx_0;
  real_T W22_idx_1;
  real_T W22_idx_2;
  real_T W33_idx_0;
  real_T W33_idx_1;
  real_T W33_idx_2;
  real_T W44_idx_0;
  real_T W44_idx_1;
  real_T W44_idx_2;
  real_T W55_idx_0;
  real_T W55_idx_1;
  real_T W55_idx_2;
  real_T W66_idx_0;
  real_T W66_idx_1;
  real_T W66_idx_2;
  real_T W_d11_idx_0;
  real_T W_d11_idx_0_tmp;
  real_T W_d11_idx_1;
  real_T W_d11_idx_2;
  real_T W_d11_tmp;
  real_T b_SV_tmp;
  real_T b_W11_tmp_tmp;
  real_T b_W_d11_tmp;
  real_T c_SV_tmp;
  real_T c_W11_tmp_tmp;
  real_T c_W_d11_tmp;
  real_T d;
  real_T d1;
  real_T d10;
  real_T d11;
  real_T d12;
  real_T d13;
  real_T d14;
  real_T d15;
  real_T d16;
  real_T d17;
  real_T d18;
  real_T d19;
  real_T d2;
  real_T d20;
  real_T d21;
  real_T d22;
  real_T d23;
  real_T d24;
  real_T d25;
  real_T d26;
  real_T d27;
  real_T d28;
  real_T d29;
  real_T d3;
  real_T d30;
  real_T d31;
  real_T d32;
  real_T d33;
  real_T d34;
  real_T d35;
  real_T d36;
  real_T d37;
  real_T d38;
  real_T d39;
  real_T d4;
  real_T d5;
  real_T d6;
  real_T d7;
  real_T d8;
  real_T d9;
  real_T d_SV_tmp;
  int32_T R1_tmp;
  int32_T b_i;
  int32_T calc_MCG_0625_numThreads;
  int32_T dyn_case;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int8_T tmp_data[30];
  int8_T qdd_cal[7];
  boolean_T emlrtHadParallelError = false;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  /*  牛顿欧拉法递推计算 M C G */
  if (LP->num_joint < 1.0) {
    loop_ub = 0;
  } else {
    if (LP->num_joint != (int32_T)muDoubleScalarFloor(LP->num_joint)) {
      emlrtIntegerCheckR2012b(LP->num_joint, &b_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)LP->num_joint < 1) || ((int32_T)LP->num_joint > 30)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)LP->num_joint, 1, 30, &b_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    loop_ub = (int32_T)LP->num_joint;
  }
  /*  关节变量整理 */
  /*  当前构型运动学 */
  if (loop_ub < 3200) {
    for (i = 0; i < loop_ub; i++) {
      W_d11_idx_0_tmp = LP->R_idx[i];
      if (W_d11_idx_0_tmp != (int32_T)muDoubleScalarFloor(W_d11_idx_0_tmp)) {
        emlrtIntegerCheckR2012b(W_d11_idx_0_tmp, &emlrtDCI, (emlrtConstCTX)sp);
      }
      if (((int8_T)W_d11_idx_0_tmp < 1) || ((int8_T)W_d11_idx_0_tmp > 11)) {
        emlrtDynamicBoundsCheckR2012b((int8_T)W_d11_idx_0_tmp, 1, 11, &emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      tmp_data[i] = (int8_T)W_d11_idx_0_tmp;
    }
  } else {
    emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
    emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    calc_MCG_0625_numThreads = emlrtAllocRegionTLSs(
        sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(calc_MCG_0625_numThreads) private(            \
        st, emlrtJBEnviron, d) firstprivate(emlrtHadParallelError)
    {
      if (setjmp(emlrtJBEnviron) == 0) {
        st.prev = sp;
        st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
        st.site = NULL;
        emlrtSetJmpBuf(&st, &emlrtJBEnviron);
      } else {
        emlrtHadParallelError = true;
      }
#pragma omp for nowait
      for (i = 0; i < loop_ub; i++) {
        if (emlrtHadParallelError) {
          continue;
        }
        if (setjmp(emlrtJBEnviron) == 0) {
          d = LP->R_idx[i];
          if (d != (int32_T)muDoubleScalarFloor(d)) {
            emlrtIntegerCheckR2012b(d, &emlrtDCI, &st);
          }
          if (((int8_T)d < 1) || ((int8_T)d > 11)) {
            emlrtDynamicBoundsCheckR2012b((int8_T)d, 1, 11, &emlrtBCI, &st);
          }
          tmp_data[i] = (int8_T)d;
        } else {
          emlrtHadParallelError = true;
        }
      }
    }
    emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
    emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
  }
  if (loop_ub != 7) {
    emlrtSubAssignSizeCheck1dR2017a(loop_ub, 7, &emlrtECI, (emlrtConstCTX)sp);
  }
  for (b_i = 0; b_i < loop_ub; b_i++) {
    SV->q[tmp_data[b_i] - 1] = q0[b_i];
  }
  b_st.site = &b_emlrtRSI;
  calc_aa_0318(&b_st, LP->module, LP->num_q, LP->align, LP->BB, LP->Rp, LP->Rd,
               LP->RBcp, LP->T_L, LP->J_type, LP->SN, SV);
  b_st.site = &emlrtRSI;
  calc_pos_0318(&b_st, LP->module, LP->num_q, LP->align, LP->BB, LP->Rd, LP->Pp,
                LP->Pd, LP->RBcp, LP->PBcp, LP->T_L, LP->J_type, LP->SN, SV);
  /*  绝对姿态矩阵 */
  if (loop_ub < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, loop_ub, &c_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  W_d11_idx_0_tmp = LP->R_idx[0] * 3.0;
  if (!(W_d11_idx_0_tmp == W_d11_idx_0_tmp)) {
    emlrtErrorWithMessageIdR2018a(
        sp, &emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing",
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }
  for (b_i = 0; b_i < 3; b_i++) {
    R1_tmp = 3 * ((int32_T)((W_d11_idx_0_tmp - 2.0) + (real_T)b_i) - 1);
    R1[3 * b_i] = SV->AA[R1_tmp];
    R1[3 * b_i + 1] = SV->AA[R1_tmp + 1];
    R1[3 * b_i + 2] = SV->AA[R1_tmp + 2];
  }
  if (loop_ub < 2) {
    emlrtDynamicBoundsCheckR2012b(2, 1, 1, &d_emlrtBCI, (emlrtConstCTX)sp);
  }
  W_d11_idx_0_tmp = LP->R_idx[1] * 3.0;
  if (!(W_d11_idx_0_tmp == W_d11_idx_0_tmp)) {
    emlrtErrorWithMessageIdR2018a(
        sp, &b_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing",
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }
  for (b_i = 0; b_i < 3; b_i++) {
    R1_tmp = 3 * ((int32_T)((W_d11_idx_0_tmp - 2.0) + (real_T)b_i) - 1);
    R2[3 * b_i] = SV->AA[R1_tmp];
    R2[3 * b_i + 1] = SV->AA[R1_tmp + 1];
    R2[3 * b_i + 2] = SV->AA[R1_tmp + 2];
  }
  if (loop_ub < 3) {
    emlrtDynamicBoundsCheckR2012b(3, 1, 2, &e_emlrtBCI, (emlrtConstCTX)sp);
  }
  W_d11_idx_0_tmp = LP->R_idx[2] * 3.0;
  if (!(W_d11_idx_0_tmp == W_d11_idx_0_tmp)) {
    emlrtErrorWithMessageIdR2018a(
        sp, &c_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing",
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }
  for (b_i = 0; b_i < 3; b_i++) {
    R1_tmp = 3 * ((int32_T)((W_d11_idx_0_tmp - 2.0) + (real_T)b_i) - 1);
    R3[3 * b_i] = SV->AA[R1_tmp];
    R3[3 * b_i + 1] = SV->AA[R1_tmp + 1];
    R3[3 * b_i + 2] = SV->AA[R1_tmp + 2];
  }
  if (loop_ub < 4) {
    emlrtDynamicBoundsCheckR2012b(4, 1, 3, &f_emlrtBCI, (emlrtConstCTX)sp);
  }
  W_d11_idx_0_tmp = LP->R_idx[3] * 3.0;
  if (!(W_d11_idx_0_tmp == W_d11_idx_0_tmp)) {
    emlrtErrorWithMessageIdR2018a(
        sp, &d_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing",
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }
  for (b_i = 0; b_i < 3; b_i++) {
    R1_tmp = 3 * ((int32_T)((W_d11_idx_0_tmp - 2.0) + (real_T)b_i) - 1);
    R4[3 * b_i] = SV->AA[R1_tmp];
    R4[3 * b_i + 1] = SV->AA[R1_tmp + 1];
    R4[3 * b_i + 2] = SV->AA[R1_tmp + 2];
  }
  if (loop_ub < 5) {
    emlrtDynamicBoundsCheckR2012b(5, 1, 4, &g_emlrtBCI, (emlrtConstCTX)sp);
  }
  W_d11_idx_0_tmp = LP->R_idx[4] * 3.0;
  if (!(W_d11_idx_0_tmp == W_d11_idx_0_tmp)) {
    emlrtErrorWithMessageIdR2018a(
        sp, &e_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing",
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }
  for (b_i = 0; b_i < 3; b_i++) {
    R1_tmp = 3 * ((int32_T)((W_d11_idx_0_tmp - 2.0) + (real_T)b_i) - 1);
    R5[3 * b_i] = SV->AA[R1_tmp];
    R5[3 * b_i + 1] = SV->AA[R1_tmp + 1];
    R5[3 * b_i + 2] = SV->AA[R1_tmp + 2];
  }
  if (loop_ub < 6) {
    emlrtDynamicBoundsCheckR2012b(6, 1, 5, &h_emlrtBCI, (emlrtConstCTX)sp);
  }
  W_d11_idx_0_tmp = LP->R_idx[5] * 3.0;
  if (!(W_d11_idx_0_tmp == W_d11_idx_0_tmp)) {
    emlrtErrorWithMessageIdR2018a(
        sp, &f_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing",
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }
  for (b_i = 0; b_i < 3; b_i++) {
    R1_tmp = 3 * ((int32_T)((W_d11_idx_0_tmp - 2.0) + (real_T)b_i) - 1);
    R6[3 * b_i] = SV->AA[R1_tmp];
    R6[3 * b_i + 1] = SV->AA[R1_tmp + 1];
    R6[3 * b_i + 2] = SV->AA[R1_tmp + 2];
  }
  if (loop_ub < 7) {
    emlrtDynamicBoundsCheckR2012b(7, 1, 6, &i_emlrtBCI, (emlrtConstCTX)sp);
  }
  W_d11_tmp = LP->R_idx[6] * 3.0;
  if (!(W_d11_tmp == W_d11_tmp)) {
    emlrtErrorWithMessageIdR2018a(
        sp, &g_emlrtRTEI,
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing",
        "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing", 0);
  }
  /*  相邻坐标系旋转矩阵 */
  /*  Aij：从 j 坐标系转到 i 坐标系 */
  for (b_i = 0; b_i < 3; b_i++) {
    A10_tmp[3 * b_i] = R1[b_i];
    A10_tmp[3 * b_i + 1] = R1[b_i + 3];
    A10_tmp[3 * b_i + 2] = R1[b_i + 6];
  }
  memset(&A10[0], 0, 9U * sizeof(real_T));
  for (b_i = 0; b_i < 3; b_i++) {
    R1_tmp = b[3 * b_i];
    r = _mm_loadu_pd(&A10_tmp[0]);
    r1 = _mm_loadu_pd(&A10[3 * b_i]);
    _mm_storeu_pd(&A10[3 * b_i],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(R1_tmp))));
    loop_ub = 3 * b_i + 2;
    A10[loop_ub] += A10_tmp[2] * (real_T)R1_tmp;
    A21_tmp[3 * b_i] = R2[b_i];
    i1 = 3 * b_i + 1;
    R1_tmp = b[i1];
    r = _mm_loadu_pd(&A10_tmp[3]);
    r1 = _mm_loadu_pd(&A10[3 * b_i]);
    _mm_storeu_pd(&A10[3 * b_i],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(R1_tmp))));
    A10[loop_ub] += A10_tmp[5] * (real_T)R1_tmp;
    A21_tmp[i1] = R2[b_i + 3];
    R1_tmp = b[loop_ub];
    r = _mm_loadu_pd(&A10_tmp[6]);
    r1 = _mm_loadu_pd(&A10[3 * b_i]);
    _mm_storeu_pd(&A10[3 * b_i],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(R1_tmp))));
    A10[loop_ub] += A10_tmp[8] * (real_T)R1_tmp;
    A21_tmp[loop_ub] = R2[b_i + 6];
  }
  memset(&A21[0], 0, 9U * sizeof(real_T));
  for (b_i = 0; b_i < 3; b_i++) {
    W_d11_idx_0_tmp = R1[3 * b_i];
    r = _mm_loadu_pd(&A21_tmp[0]);
    r1 = _mm_loadu_pd(&A21[3 * b_i]);
    _mm_storeu_pd(&A21[3 * b_i],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(W_d11_idx_0_tmp))));
    R1_tmp = 3 * b_i + 2;
    A21[R1_tmp] += A21_tmp[2] * W_d11_idx_0_tmp;
    W_d11_idx_0_tmp = R1[3 * b_i + 1];
    r = _mm_loadu_pd(&A21_tmp[3]);
    r1 = _mm_loadu_pd(&A21[3 * b_i]);
    _mm_storeu_pd(&A21[3 * b_i],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(W_d11_idx_0_tmp))));
    A21[R1_tmp] += A21_tmp[5] * W_d11_idx_0_tmp;
    W_d11_idx_0_tmp = R1[R1_tmp];
    r = _mm_loadu_pd(&A21_tmp[6]);
    r1 = _mm_loadu_pd(&A21[3 * b_i]);
    _mm_storeu_pd(&A21[3 * b_i],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(W_d11_idx_0_tmp))));
    A21[R1_tmp] += A21_tmp[8] * W_d11_idx_0_tmp;
  }
  for (b_i = 0; b_i < 3; b_i++) {
    A12[3 * b_i] = A21[b_i];
    A32_tmp[3 * b_i] = R3[b_i];
    R1_tmp = 3 * b_i + 1;
    A12[R1_tmp] = A21[b_i + 3];
    A32_tmp[R1_tmp] = R3[b_i + 3];
    R1_tmp = 3 * b_i + 2;
    A12[R1_tmp] = A21[b_i + 6];
    A32_tmp[R1_tmp] = R3[b_i + 6];
  }
  memset(&A32[0], 0, 9U * sizeof(real_T));
  for (b_i = 0; b_i < 3; b_i++) {
    W_d11_idx_0_tmp = R2[3 * b_i];
    r = _mm_loadu_pd(&A32_tmp[0]);
    r1 = _mm_loadu_pd(&A32[3 * b_i]);
    _mm_storeu_pd(&A32[3 * b_i],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(W_d11_idx_0_tmp))));
    R1_tmp = 3 * b_i + 2;
    A32[R1_tmp] += A32_tmp[2] * W_d11_idx_0_tmp;
    W_d11_idx_0_tmp = R2[3 * b_i + 1];
    r = _mm_loadu_pd(&A32_tmp[3]);
    r1 = _mm_loadu_pd(&A32[3 * b_i]);
    _mm_storeu_pd(&A32[3 * b_i],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(W_d11_idx_0_tmp))));
    A32[R1_tmp] += A32_tmp[5] * W_d11_idx_0_tmp;
    W_d11_idx_0_tmp = R2[R1_tmp];
    r = _mm_loadu_pd(&A32_tmp[6]);
    r1 = _mm_loadu_pd(&A32[3 * b_i]);
    _mm_storeu_pd(&A32[3 * b_i],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(W_d11_idx_0_tmp))));
    A32[R1_tmp] += A32_tmp[8] * W_d11_idx_0_tmp;
  }
  for (b_i = 0; b_i < 3; b_i++) {
    A23[3 * b_i] = A32[b_i];
    A43_tmp[3 * b_i] = R4[b_i];
    R1_tmp = 3 * b_i + 1;
    A23[R1_tmp] = A32[b_i + 3];
    A43_tmp[R1_tmp] = R4[b_i + 3];
    R1_tmp = 3 * b_i + 2;
    A23[R1_tmp] = A32[b_i + 6];
    A43_tmp[R1_tmp] = R4[b_i + 6];
  }
  memset(&A43[0], 0, 9U * sizeof(real_T));
  for (b_i = 0; b_i < 3; b_i++) {
    W_d11_idx_0_tmp = R3[3 * b_i];
    r = _mm_loadu_pd(&A43_tmp[0]);
    r1 = _mm_loadu_pd(&A43[3 * b_i]);
    _mm_storeu_pd(&A43[3 * b_i],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(W_d11_idx_0_tmp))));
    R1_tmp = 3 * b_i + 2;
    A43[R1_tmp] += A43_tmp[2] * W_d11_idx_0_tmp;
    W_d11_idx_0_tmp = R3[3 * b_i + 1];
    r = _mm_loadu_pd(&A43_tmp[3]);
    r1 = _mm_loadu_pd(&A43[3 * b_i]);
    _mm_storeu_pd(&A43[3 * b_i],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(W_d11_idx_0_tmp))));
    A43[R1_tmp] += A43_tmp[5] * W_d11_idx_0_tmp;
    W_d11_idx_0_tmp = R3[R1_tmp];
    r = _mm_loadu_pd(&A43_tmp[6]);
    r1 = _mm_loadu_pd(&A43[3 * b_i]);
    _mm_storeu_pd(&A43[3 * b_i],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(W_d11_idx_0_tmp))));
    A43[R1_tmp] += A43_tmp[8] * W_d11_idx_0_tmp;
  }
  for (b_i = 0; b_i < 3; b_i++) {
    A34[3 * b_i] = A43[b_i];
    A54_tmp[3 * b_i] = R5[b_i];
    R1_tmp = 3 * b_i + 1;
    A34[R1_tmp] = A43[b_i + 3];
    A54_tmp[R1_tmp] = R5[b_i + 3];
    R1_tmp = 3 * b_i + 2;
    A34[R1_tmp] = A43[b_i + 6];
    A54_tmp[R1_tmp] = R5[b_i + 6];
  }
  memset(&A54[0], 0, 9U * sizeof(real_T));
  for (b_i = 0; b_i < 3; b_i++) {
    W_d11_idx_0_tmp = R4[3 * b_i];
    r = _mm_loadu_pd(&A54_tmp[0]);
    r1 = _mm_loadu_pd(&A54[3 * b_i]);
    _mm_storeu_pd(&A54[3 * b_i],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(W_d11_idx_0_tmp))));
    R1_tmp = 3 * b_i + 2;
    A54[R1_tmp] += A54_tmp[2] * W_d11_idx_0_tmp;
    W_d11_idx_0_tmp = R4[3 * b_i + 1];
    r = _mm_loadu_pd(&A54_tmp[3]);
    r1 = _mm_loadu_pd(&A54[3 * b_i]);
    _mm_storeu_pd(&A54[3 * b_i],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(W_d11_idx_0_tmp))));
    A54[R1_tmp] += A54_tmp[5] * W_d11_idx_0_tmp;
    W_d11_idx_0_tmp = R4[R1_tmp];
    r = _mm_loadu_pd(&A54_tmp[6]);
    r1 = _mm_loadu_pd(&A54[3 * b_i]);
    _mm_storeu_pd(&A54[3 * b_i],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(W_d11_idx_0_tmp))));
    A54[R1_tmp] += A54_tmp[8] * W_d11_idx_0_tmp;
  }
  for (b_i = 0; b_i < 3; b_i++) {
    R4[3 * b_i] = A54[b_i];
    A65_tmp[3 * b_i] = R6[b_i];
    R1_tmp = 3 * b_i + 1;
    R4[R1_tmp] = A54[b_i + 3];
    A65_tmp[R1_tmp] = R6[b_i + 3];
    R1_tmp = 3 * b_i + 2;
    R4[R1_tmp] = A54[b_i + 6];
    A65_tmp[R1_tmp] = R6[b_i + 6];
  }
  memset(&A65[0], 0, 9U * sizeof(real_T));
  for (b_i = 0; b_i < 3; b_i++) {
    W_d11_idx_0_tmp = R5[3 * b_i];
    r = _mm_loadu_pd(&A65_tmp[0]);
    r1 = _mm_loadu_pd(&A65[3 * b_i]);
    _mm_storeu_pd(&A65[3 * b_i],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(W_d11_idx_0_tmp))));
    R1_tmp = 3 * b_i + 2;
    A65[R1_tmp] += A65_tmp[2] * W_d11_idx_0_tmp;
    W_d11_idx_0_tmp = R5[3 * b_i + 1];
    r = _mm_loadu_pd(&A65_tmp[3]);
    r1 = _mm_loadu_pd(&A65[3 * b_i]);
    _mm_storeu_pd(&A65[3 * b_i],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(W_d11_idx_0_tmp))));
    A65[R1_tmp] += A65_tmp[5] * W_d11_idx_0_tmp;
    W_d11_idx_0_tmp = R5[R1_tmp];
    r = _mm_loadu_pd(&A65_tmp[6]);
    r1 = _mm_loadu_pd(&A65[3 * b_i]);
    _mm_storeu_pd(&A65[3 * b_i],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(W_d11_idx_0_tmp))));
    A65[R1_tmp] += A65_tmp[8] * W_d11_idx_0_tmp;
  }
  for (b_i = 0; b_i < 3; b_i++) {
    R2[3 * b_i] = A65[b_i];
    R1[3 * b_i] = SV->AA[b_i + 3 * ((int32_T)(W_d11_tmp - 2.0) - 1)];
    R1_tmp = 3 * b_i + 1;
    R2[R1_tmp] = A65[b_i + 3];
    R1[R1_tmp] = SV->AA[b_i + 3 * ((int32_T)((W_d11_tmp - 2.0) + 1.0) - 1)];
    R1_tmp = 3 * b_i + 2;
    R2[R1_tmp] = A65[b_i + 6];
    R1[R1_tmp] = SV->AA[b_i + 3 * ((int32_T)((W_d11_tmp - 2.0) + 2.0) - 1)];
  }
  memset(&R3[0], 0, 9U * sizeof(real_T));
  for (b_i = 0; b_i < 3; b_i++) {
    W_d11_idx_0_tmp = R6[3 * b_i];
    r = _mm_loadu_pd(&R1[0]);
    r1 = _mm_loadu_pd(&R3[3 * b_i]);
    _mm_storeu_pd(&R3[3 * b_i],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(W_d11_idx_0_tmp))));
    R1_tmp = 3 * b_i + 2;
    R3[R1_tmp] += R1[2] * W_d11_idx_0_tmp;
    W_d11_idx_0_tmp = R6[3 * b_i + 1];
    r = _mm_loadu_pd(&R1[3]);
    r1 = _mm_loadu_pd(&R3[3 * b_i]);
    _mm_storeu_pd(&R3[3 * b_i],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(W_d11_idx_0_tmp))));
    R3[R1_tmp] += R1[5] * W_d11_idx_0_tmp;
    W_d11_idx_0_tmp = R6[R1_tmp];
    r = _mm_loadu_pd(&R1[6]);
    r1 = _mm_loadu_pd(&R3[3 * b_i]);
    _mm_storeu_pd(&R3[3 * b_i],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(W_d11_idx_0_tmp))));
    R3[R1_tmp] += R1[8] * W_d11_idx_0_tmp;
  }
  /*  关节原点位置 */
  /*  相邻关节位移向量 */
  /*  Pij：从 i 坐标系原点指向 j 坐标系原点，在 i 坐标系下表达 */
  memset(&P01[0], 0, 3U * sizeof(real_T));
  memset(&P12[0], 0, 3U * sizeof(real_T));
  memset(&P23[0], 0, 3U * sizeof(real_T));
  memset(&P34[0], 0, 3U * sizeof(real_T));
  memset(&P45[0], 0, 3U * sizeof(real_T));
  memset(&P56[0], 0, 3U * sizeof(real_T));
  memset(&P67[0], 0, 3U * sizeof(real_T));
  W66_idx_1 = LP->R_idx[0];
  W66_idx_2 = LP->R_idx[1];
  F55_idx_0 = LP->R_idx[2];
  F55_idx_1 = LP->R_idx[3];
  W55_idx_1 = LP->R_idx[4];
  b_W_d11_tmp = LP->R_idx[5];
  SV_tmp = LP->R_idx[6];
  W55_idx_2 = P01[0];
  W55_idx_0 = P01[1];
  F55_idx_2 = P01[2];
  d1 = P12[0];
  d2 = P12[1];
  d3 = P12[2];
  d4 = P23[0];
  d5 = P23[1];
  d6 = P23[2];
  d7 = P34[0];
  d8 = P34[1];
  d9 = P34[2];
  d10 = P45[0];
  d11 = P45[1];
  d12 = P45[2];
  d13 = P56[0];
  d14 = P56[1];
  d15 = P56[2];
  d16 = P67[0];
  d17 = P67[1];
  d18 = P67[2];
  for (b_i = 0; b_i < 3; b_i++) {
    R1[3 * b_i] = R3[b_i];
    R1_tmp = 3 * b_i + 1;
    R1[R1_tmp] = R3[b_i + 3];
    loop_ub = 3 * b_i + 2;
    R1[loop_ub] = R3[b_i + 6];
    c_W_d11_tmp = SV->RR[b_i + 3 * ((int32_T)W66_idx_1 - 1)];
    W_d11_idx_0_tmp = SV->RR[b_i + 3 * ((int32_T)W66_idx_2 - 1)];
    b_SV_tmp = W_d11_idx_0_tmp - c_W_d11_tmp;
    W_d11_tmp = SV->RR[b_i + 3 * ((int32_T)F55_idx_0 - 1)];
    W66_idx_0 = W_d11_tmp - W_d11_idx_0_tmp;
    W_d11_idx_0_tmp = SV->RR[b_i + 3 * ((int32_T)F55_idx_1 - 1)];
    c_SV_tmp = W_d11_idx_0_tmp - W_d11_tmp;
    W_d11_tmp = SV->RR[b_i + 3 * ((int32_T)W55_idx_1 - 1)];
    d_SV_tmp = W_d11_tmp - W_d11_idx_0_tmp;
    W_d11_idx_0_tmp = SV->RR[b_i + 3 * ((int32_T)b_W_d11_tmp - 1)];
    W_d11_tmp = W_d11_idx_0_tmp - W_d11_tmp;
    W_d11_idx_0_tmp = SV->RR[b_i + 3 * ((int32_T)SV_tmp - 1)] - W_d11_idx_0_tmp;
    W55_idx_2 += (real_T)b[3 * b_i] * c_W_d11_tmp;
    d1 += A10_tmp[3 * b_i] * b_SV_tmp;
    d4 += A21_tmp[3 * b_i] * W66_idx_0;
    d7 += A32_tmp[3 * b_i] * c_SV_tmp;
    d10 += A43_tmp[3 * b_i] * d_SV_tmp;
    d13 += A54_tmp[3 * b_i] * W_d11_tmp;
    d16 += A65_tmp[3 * b_i] * W_d11_idx_0_tmp;
    W55_idx_0 += (real_T)b[R1_tmp] * c_W_d11_tmp;
    d2 += A10_tmp[R1_tmp] * b_SV_tmp;
    d5 += A21_tmp[R1_tmp] * W66_idx_0;
    d8 += A32_tmp[R1_tmp] * c_SV_tmp;
    d11 += A43_tmp[R1_tmp] * d_SV_tmp;
    d14 += A54_tmp[R1_tmp] * W_d11_tmp;
    d17 += A65_tmp[R1_tmp] * W_d11_idx_0_tmp;
    F55_idx_2 += (real_T)b[loop_ub] * c_W_d11_tmp;
    d3 += A10_tmp[loop_ub] * b_SV_tmp;
    d6 += A21_tmp[loop_ub] * W66_idx_0;
    d9 += A32_tmp[loop_ub] * c_SV_tmp;
    d12 += A43_tmp[loop_ub] * d_SV_tmp;
    d15 += A54_tmp[loop_ub] * W_d11_tmp;
    d18 += A65_tmp[loop_ub] * W_d11_idx_0_tmp;
  }
  /*  质心位置、转动惯量、质量 */
  /*  结果初始化 */
  memset(&M[0], 0, 49U * sizeof(real_T));
  for (b_i = 0; b_i < 7; b_i++) {
    C[b_i] = 0.0;
    G[b_i] = 0.0;
  }
  /*  ============================================================ */
  /*   dyn_case = 1      ：计算 G */
  /*   dyn_case = 2 ~ 8  ：计算 M 第 1 ~ 7 列 */
  /*   dyn_case = 9      ：计算 C */
  /*  ============================================================ */
  d19 = LP->rb[1].rc[2];
  d20 = LP->rb[1].rc[1];
  d21 = LP->rb[1].rc[0];
  d22 = LP->rb[2].rc[2];
  d23 = LP->rb[2].rc[1];
  d24 = LP->rb[2].rc[0];
  d25 = LP->rb[3].rc[2];
  d26 = LP->rb[3].rc[1];
  d27 = LP->rb[3].rc[0];
  d28 = LP->rb[4].rc[2];
  d29 = LP->rb[4].rc[1];
  d30 = LP->rb[4].rc[0];
  d31 = LP->rb[5].rc[2];
  d32 = LP->rb[5].rc[1];
  d33 = LP->rb[5].rc[0];
  d34 = LP->rb[6].rc[2];
  d35 = LP->rb[6].rc[1];
  d36 = LP->rb[6].rc[0];
  d37 = LP->rb[0].rc[2];
  d38 = LP->rb[0].rc[1];
  d39 = LP->rb[0].rc[0];
  r2 = _mm_set1_pd(0.0);
  W11_tmp_tmp = 0.0 * F55_idx_2;
  b_W11_tmp_tmp = W55_idx_0 * 0.0;
  c_W11_tmp_tmp = W55_idx_2 * 0.0;
  for (dyn_case = 0; dyn_case < 9; dyn_case++) {
    if (dyn_case == 0) {
      /*  ---------- 计算 G ---------- */
      for (b_i = 0; b_i < 7; b_i++) {
        qd_cal[b_i] = 0.0;
        qdd_cal[b_i] = 0;
      }
      P12[2] = 9.8;
    } else if (dyn_case + 1 <= 8) {
      /*  ---------- 计算 M 的第 dyn_case-1 列 ---------- */
      for (b_i = 0; b_i < 7; b_i++) {
        qd_cal[b_i] = 0.0;
        qdd_cal[b_i] = 0;
      }
      qdd_cal[dyn_case - 1] = 1;
      P12[2] = 0.0;
    } else {
      /*  ---------- 计算 C ---------- */
      for (b_i = 0; b_i < 7; b_i++) {
        qd_cal[b_i] = qd0[b_i];
        qdd_cal[b_i] = 0;
      }
      P12[2] = 0.0;
    }
    /*     %% ================= 正向递推 ================= */
    /*  ---------- 连杆1 ---------- */
    memset(&P23[0], 0, 3U * sizeof(real_T));
    r = _mm_loadu_pd(&A10[0]);
    r1 = _mm_loadu_pd(&P23[0]);
    _mm_storeu_pd(&P23[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
    P23[2] += A10[2] * 0.0;
    W_d11_tmp = qd_cal[0] * 0.0;
    P34[0] = W_d11_tmp;
    r = _mm_loadu_pd(&A10[3]);
    r1 = _mm_loadu_pd(&P23[0]);
    _mm_storeu_pd(&P23[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
    P23[2] += A10[5] * 0.0;
    P34[1] = W_d11_tmp;
    r = _mm_loadu_pd(&A10[6]);
    r1 = _mm_loadu_pd(&P23[0]);
    _mm_storeu_pd(&P23[0], _mm_add_pd(r1, _mm_mul_pd(r, r2)));
    P23[2] += A10[8] * 0.0;
    P34[2] = qd_cal[0];
    r = _mm_loadu_pd(&P23[0]);
    r1 = _mm_loadu_pd(&P34[0]);
    _mm_storeu_pd(&P45[0], _mm_add_pd(r, r1));
    P45[2] = qd_cal[0] + P23[2];
    W_d11_idx_0_tmp = W_d11_tmp * P23[2];
    W_d11_idx_0 = P23[0] + (qd_cal[0] * P23[1] - W_d11_idx_0_tmp);
    W_d11_idx_1 = P23[1] + (W_d11_idx_0_tmp - P23[0] * qd_cal[0]);
    W_d11_idx_2 = (P23[2] + (P23[0] * W_d11_tmp - W_d11_tmp * P23[1])) +
                  (real_T)qdd_cal[0];
    P23[0] = W11_tmp_tmp - b_W11_tmp_tmp;
    P23[1] = c_W11_tmp_tmp - W11_tmp_tmp;
    P23[2] = b_W11_tmp_tmp - c_W11_tmp_tmp;
    d_SV_tmp = 0.0 * P23[2];
    c_SV_tmp = P23[1] * 0.0;
    P01[0] = P23[0] + (d_SV_tmp - c_SV_tmp);
    W66_idx_0 = P23[0] * 0.0;
    P01[1] = P23[1] + (W66_idx_0 - d_SV_tmp);
    P01[2] = (P23[2] + (c_SV_tmp - W66_idx_0)) + P12[2];
    memset(&P56[0], 0, 3U * sizeof(real_T));
    r = _mm_loadu_pd(&A10[0]);
    r1 = _mm_loadu_pd(&P56[0]);
    _mm_storeu_pd(&P56[0], _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(P01[0]))));
    P56[2] += P01[0] * A10[2];
    r = _mm_loadu_pd(&A10[3]);
    r1 = _mm_loadu_pd(&P56[0]);
    _mm_storeu_pd(&P56[0], _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(P01[1]))));
    P56[2] += P01[1] * A10[5];
    r = _mm_loadu_pd(&A10[6]);
    r1 = _mm_loadu_pd(&P56[0]);
    _mm_storeu_pd(&P56[0], _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(P01[2]))));
    P56[2] += P01[2] * A10[8];
    /*  ---------- 连杆2 ---------- */
    memset(&P23[0], 0, 3U * sizeof(real_T));
    r = _mm_loadu_pd(&A21[0]);
    r1 = _mm_loadu_pd(&P23[0]);
    r3 = _mm_set1_pd(P45[0]);
    _mm_storeu_pd(&P23[0], _mm_add_pd(r1, _mm_mul_pd(r, r3)));
    P23[2] += P45[0] * A21[2];
    W66_idx_1 = qd_cal[1] * 0.0;
    r = _mm_loadu_pd(&A21[3]);
    r1 = _mm_loadu_pd(&P23[0]);
    r4 = _mm_set1_pd(P45[1]);
    _mm_storeu_pd(&P23[0], _mm_add_pd(r1, _mm_mul_pd(r, r4)));
    P23[2] += P45[1] * A21[5];
    r = _mm_loadu_pd(&A21[6]);
    r1 = _mm_loadu_pd(&P23[0]);
    r5 = _mm_set1_pd(P45[2]);
    _mm_storeu_pd(&P23[0], _mm_add_pd(r1, _mm_mul_pd(r, r5)));
    P23[2] += P45[2] * A21[8];
    memset(&P67[0], 0, 3U * sizeof(real_T));
    W22_idx_0 = P23[0] + W66_idx_1;
    r = _mm_loadu_pd(&A21[0]);
    r1 = _mm_loadu_pd(&P67[0]);
    r6 = _mm_set1_pd(W_d11_idx_0);
    _mm_storeu_pd(&P67[0], _mm_add_pd(r1, _mm_mul_pd(r, r6)));
    P67[2] += A21[2] * W_d11_idx_0;
    W22_idx_1 = P23[1] + W66_idx_1;
    r = _mm_loadu_pd(&A21[3]);
    r1 = _mm_loadu_pd(&P67[0]);
    r7 = _mm_set1_pd(W_d11_idx_1);
    _mm_storeu_pd(&P67[0], _mm_add_pd(r1, _mm_mul_pd(r, r7)));
    P67[2] += A21[5] * W_d11_idx_1;
    W22_idx_2 = qd_cal[1] + P23[2];
    r = _mm_loadu_pd(&A21[6]);
    r1 = _mm_loadu_pd(&P67[0]);
    r8 = _mm_set1_pd(W_d11_idx_2);
    _mm_storeu_pd(&P67[0], _mm_add_pd(r1, _mm_mul_pd(r, r8)));
    P67[2] += A21[8] * W_d11_idx_2;
    W66_idx_2 = W66_idx_1 * P23[2];
    P67[0] += P23[1] * qd_cal[1] - W66_idx_2;
    P67[1] += W66_idx_2 - P23[0] * qd_cal[1];
    P67[2] = (P67[2] + (P23[0] * W66_idx_1 - W66_idx_1 * P23[1])) +
             (real_T)qdd_cal[1];
    F55_idx_0 = P45[1] * d3 - d2 * P45[2];
    F55_idx_1 = d1 * P45[2] - P45[0] * d3;
    W55_idx_1 = P45[0] * d2 - d1 * P45[1];
    memset(&P12[0], 0, 3U * sizeof(real_T));
    b_W_d11_tmp = ((W_d11_idx_1 * d3 - d2 * W_d11_idx_2) +
                   (P45[1] * W55_idx_1 - F55_idx_1 * P45[2])) +
                  P56[0];
    r = _mm_loadu_pd(&A21[0]);
    r1 = _mm_loadu_pd(&P12[0]);
    _mm_storeu_pd(&P12[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_W_d11_tmp))));
    P12[2] += A21[2] * b_W_d11_tmp;
    b_W_d11_tmp = ((d1 * W_d11_idx_2 - W_d11_idx_0 * d3) +
                   (F55_idx_0 * P45[2] - P45[0] * W55_idx_1)) +
                  P56[1];
    r = _mm_loadu_pd(&A21[3]);
    r1 = _mm_loadu_pd(&P12[0]);
    _mm_storeu_pd(&P12[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_W_d11_tmp))));
    P12[2] += A21[5] * b_W_d11_tmp;
    b_W_d11_tmp = ((W_d11_idx_0 * d2 - d1 * W_d11_idx_1) +
                   (P45[0] * F55_idx_1 - F55_idx_0 * P45[1])) +
                  P56[2];
    r = _mm_loadu_pd(&A21[6]);
    r1 = _mm_loadu_pd(&P12[0]);
    _mm_storeu_pd(&P12[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_W_d11_tmp))));
    P12[2] += A21[8] * b_W_d11_tmp;
    W55_idx_1 = W22_idx_1 * d19 - d20 * W22_idx_2;
    b_W_d11_tmp = d21 * W22_idx_2 - W22_idx_0 * d19;
    SV_tmp = W22_idx_0 * d20 - d21 * W22_idx_1;
    /*  ---------- 连杆3 ---------- */
    memset(&P23[0], 0, 3U * sizeof(real_T));
    F22_idx_0 =
        LP->rb[1].m * (((P67[1] * d19 - d20 * P67[2]) +
                        (W22_idx_1 * SV_tmp - b_W_d11_tmp * W22_idx_2)) +
                       P12[0]);
    r = _mm_loadu_pd(&A32[0]);
    r1 = _mm_loadu_pd(&P23[0]);
    r9 = _mm_set1_pd(W22_idx_0);
    _mm_storeu_pd(&P23[0], _mm_add_pd(r1, _mm_mul_pd(r, r9)));
    P23[2] += A32[2] * W22_idx_0;
    F55_idx_1 = qd_cal[2] * 0.0;
    F22_idx_1 = LP->rb[1].m * (((d21 * P67[2] - P67[0] * d19) +
                                (W55_idx_1 * W22_idx_2 - W22_idx_0 * SV_tmp)) +
                               P12[1]);
    r = _mm_loadu_pd(&A32[3]);
    r1 = _mm_loadu_pd(&P23[0]);
    r10 = _mm_set1_pd(W22_idx_1);
    _mm_storeu_pd(&P23[0], _mm_add_pd(r1, _mm_mul_pd(r, r10)));
    P23[2] += A32[5] * W22_idx_1;
    F22_idx_2 =
        LP->rb[1].m * (((P67[0] * d20 - d21 * P67[1]) +
                        (W22_idx_0 * b_W_d11_tmp - W55_idx_1 * W22_idx_1)) +
                       P12[2]);
    r = _mm_loadu_pd(&A32[6]);
    r1 = _mm_loadu_pd(&P23[0]);
    r11 = _mm_set1_pd(W22_idx_2);
    _mm_storeu_pd(&P23[0], _mm_add_pd(r1, _mm_mul_pd(r, r11)));
    P23[2] += A32[8] * W22_idx_2;
    memset(&W_d33[0], 0, 3U * sizeof(real_T));
    W33_idx_0 = P23[0] + F55_idx_1;
    r = _mm_loadu_pd(&A32[0]);
    r1 = _mm_loadu_pd(&W_d33[0]);
    r12 = _mm_set1_pd(P67[0]);
    _mm_storeu_pd(&W_d33[0], _mm_add_pd(r1, _mm_mul_pd(r, r12)));
    W_d33[2] += P67[0] * A32[2];
    W33_idx_1 = P23[1] + F55_idx_1;
    r = _mm_loadu_pd(&A32[3]);
    r1 = _mm_loadu_pd(&W_d33[0]);
    r13 = _mm_set1_pd(P67[1]);
    _mm_storeu_pd(&W_d33[0], _mm_add_pd(r1, _mm_mul_pd(r, r13)));
    W_d33[2] += P67[1] * A32[5];
    W33_idx_2 = P23[2] + qd_cal[2];
    r = _mm_loadu_pd(&A32[6]);
    r1 = _mm_loadu_pd(&W_d33[0]);
    r14 = _mm_set1_pd(P67[2]);
    _mm_storeu_pd(&W_d33[0], _mm_add_pd(r1, _mm_mul_pd(r, r14)));
    W_d33[2] += P67[2] * A32[8];
    F55_idx_0 = F55_idx_1 * P23[2];
    W_d33[0] += P23[1] * qd_cal[2] - F55_idx_0;
    W_d33[1] += F55_idx_0 - P23[0] * qd_cal[2];
    W_d33[2] = (W_d33[2] + (P23[0] * F55_idx_1 - F55_idx_1 * P23[1])) +
               (real_T)qdd_cal[2];
    W55_idx_1 = W22_idx_1 * d6 - d5 * W22_idx_2;
    b_W_d11_tmp = d4 * W22_idx_2 - W22_idx_0 * d6;
    SV_tmp = W22_idx_0 * d5 - d4 * W22_idx_1;
    memset(&V_d33[0], 0, 3U * sizeof(real_T));
    F55_idx_1 = ((P67[1] * d6 - d5 * P67[2]) +
                 (W22_idx_1 * SV_tmp - b_W_d11_tmp * W22_idx_2)) +
                P12[0];
    r = _mm_loadu_pd(&A32[0]);
    r1 = _mm_loadu_pd(&V_d33[0]);
    _mm_storeu_pd(&V_d33[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(F55_idx_1))));
    V_d33[2] += A32[2] * F55_idx_1;
    F55_idx_1 = ((d4 * P67[2] - P67[0] * d6) +
                 (W55_idx_1 * W22_idx_2 - W22_idx_0 * SV_tmp)) +
                P12[1];
    r = _mm_loadu_pd(&A32[3]);
    r1 = _mm_loadu_pd(&V_d33[0]);
    _mm_storeu_pd(&V_d33[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(F55_idx_1))));
    V_d33[2] += A32[5] * F55_idx_1;
    F55_idx_1 = ((P67[0] * d5 - d4 * P67[1]) +
                 (W22_idx_0 * b_W_d11_tmp - W55_idx_1 * W22_idx_1)) +
                P12[2];
    r = _mm_loadu_pd(&A32[6]);
    r1 = _mm_loadu_pd(&V_d33[0]);
    _mm_storeu_pd(&V_d33[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(F55_idx_1))));
    V_d33[2] += A32[8] * F55_idx_1;
    SV_tmp = W33_idx_1 * d22 - d23 * W33_idx_2;
    c_W_d11_tmp = d24 * W33_idx_2 - W33_idx_0 * d22;
    b_SV_tmp = W33_idx_0 * d23 - d24 * W33_idx_1;
    /*  ---------- 连杆4 ---------- */
    memset(&P23[0], 0, 3U * sizeof(real_T));
    F33_idx_0 =
        LP->rb[2].m * (((W_d33[1] * d22 - d23 * W_d33[2]) +
                        (W33_idx_1 * b_SV_tmp - c_W_d11_tmp * W33_idx_2)) +
                       V_d33[0]);
    r = _mm_loadu_pd(&A43[0]);
    r1 = _mm_loadu_pd(&P23[0]);
    r15 = _mm_set1_pd(W33_idx_0);
    _mm_storeu_pd(&P23[0], _mm_add_pd(r1, _mm_mul_pd(r, r15)));
    P23[2] += A43[2] * W33_idx_0;
    b_W_d11_tmp = qd_cal[3] * 0.0;
    F33_idx_1 = LP->rb[2].m * (((d24 * W_d33[2] - W_d33[0] * d22) +
                                (SV_tmp * W33_idx_2 - W33_idx_0 * b_SV_tmp)) +
                               V_d33[1]);
    r = _mm_loadu_pd(&A43[3]);
    r1 = _mm_loadu_pd(&P23[0]);
    r16 = _mm_set1_pd(W33_idx_1);
    _mm_storeu_pd(&P23[0], _mm_add_pd(r1, _mm_mul_pd(r, r16)));
    P23[2] += A43[5] * W33_idx_1;
    F33_idx_2 =
        LP->rb[2].m * (((W_d33[0] * d23 - d24 * W_d33[1]) +
                        (W33_idx_0 * c_W_d11_tmp - SV_tmp * W33_idx_1)) +
                       V_d33[2]);
    r = _mm_loadu_pd(&A43[6]);
    r1 = _mm_loadu_pd(&P23[0]);
    r17 = _mm_set1_pd(W33_idx_2);
    _mm_storeu_pd(&P23[0], _mm_add_pd(r1, _mm_mul_pd(r, r17)));
    P23[2] += A43[8] * W33_idx_2;
    memset(&W_d44[0], 0, 3U * sizeof(real_T));
    W44_idx_0 = P23[0] + b_W_d11_tmp;
    r = _mm_loadu_pd(&A43[0]);
    r1 = _mm_loadu_pd(&W_d44[0]);
    r18 = _mm_set1_pd(W_d33[0]);
    _mm_storeu_pd(&W_d44[0], _mm_add_pd(r1, _mm_mul_pd(r, r18)));
    W_d44[2] += W_d33[0] * A43[2];
    W44_idx_1 = P23[1] + b_W_d11_tmp;
    r = _mm_loadu_pd(&A43[3]);
    r1 = _mm_loadu_pd(&W_d44[0]);
    r19 = _mm_set1_pd(W_d33[1]);
    _mm_storeu_pd(&W_d44[0], _mm_add_pd(r1, _mm_mul_pd(r, r19)));
    W_d44[2] += W_d33[1] * A43[5];
    W44_idx_2 = P23[2] + qd_cal[3];
    r = _mm_loadu_pd(&A43[6]);
    r1 = _mm_loadu_pd(&W_d44[0]);
    r20 = _mm_set1_pd(W_d33[2]);
    _mm_storeu_pd(&W_d44[0], _mm_add_pd(r1, _mm_mul_pd(r, r20)));
    W_d44[2] += W_d33[2] * A43[8];
    W55_idx_1 = b_W_d11_tmp * P23[2];
    W_d44[0] += P23[1] * qd_cal[3] - W55_idx_1;
    W_d44[1] += W55_idx_1 - P23[0] * qd_cal[3];
    W_d44[2] = (W_d44[2] + (P23[0] * b_W_d11_tmp - b_W_d11_tmp * P23[1])) +
               (real_T)qdd_cal[3];
    SV_tmp = W33_idx_1 * d9 - d8 * W33_idx_2;
    c_W_d11_tmp = d7 * W33_idx_2 - W33_idx_0 * d9;
    b_SV_tmp = W33_idx_0 * d8 - d7 * W33_idx_1;
    memset(&P12[0], 0, 3U * sizeof(real_T));
    b_W_d11_tmp = ((W_d33[1] * d9 - d8 * W_d33[2]) +
                   (W33_idx_1 * b_SV_tmp - c_W_d11_tmp * W33_idx_2)) +
                  V_d33[0];
    r = _mm_loadu_pd(&A43[0]);
    r1 = _mm_loadu_pd(&P12[0]);
    _mm_storeu_pd(&P12[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_W_d11_tmp))));
    P12[2] += A43[2] * b_W_d11_tmp;
    b_W_d11_tmp = ((d7 * W_d33[2] - W_d33[0] * d9) +
                   (SV_tmp * W33_idx_2 - W33_idx_0 * b_SV_tmp)) +
                  V_d33[1];
    r = _mm_loadu_pd(&A43[3]);
    r1 = _mm_loadu_pd(&P12[0]);
    _mm_storeu_pd(&P12[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_W_d11_tmp))));
    P12[2] += A43[5] * b_W_d11_tmp;
    b_W_d11_tmp = ((W_d33[0] * d8 - d7 * W_d33[1]) +
                   (W33_idx_0 * c_W_d11_tmp - SV_tmp * W33_idx_1)) +
                  V_d33[2];
    r = _mm_loadu_pd(&A43[6]);
    r1 = _mm_loadu_pd(&P12[0]);
    _mm_storeu_pd(&P12[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_W_d11_tmp))));
    P12[2] += A43[8] * b_W_d11_tmp;
    b_SV_tmp = W44_idx_1 * d25 - d26 * W44_idx_2;
    W_d11_idx_0_tmp = d27 * W44_idx_2 - W44_idx_0 * d25;
    W_d11_tmp = W44_idx_0 * d26 - d27 * W44_idx_1;
    /*  ---------- 连杆5 ---------- */
    memset(&P23[0], 0, 3U * sizeof(real_T));
    F44_idx_0 =
        LP->rb[3].m * (((W_d44[1] * d25 - d26 * W_d44[2]) +
                        (W44_idx_1 * W_d11_tmp - W_d11_idx_0_tmp * W44_idx_2)) +
                       P12[0]);
    r = _mm_loadu_pd(&A54[0]);
    r1 = _mm_loadu_pd(&P23[0]);
    r21 = _mm_set1_pd(W44_idx_0);
    _mm_storeu_pd(&P23[0], _mm_add_pd(r1, _mm_mul_pd(r, r21)));
    P23[2] += A54[2] * W44_idx_0;
    c_W_d11_tmp = qd_cal[4] * 0.0;
    F44_idx_1 =
        LP->rb[3].m * (((d27 * W_d44[2] - W_d44[0] * d25) +
                        (b_SV_tmp * W44_idx_2 - W44_idx_0 * W_d11_tmp)) +
                       P12[1]);
    r = _mm_loadu_pd(&A54[3]);
    r1 = _mm_loadu_pd(&P23[0]);
    r22 = _mm_set1_pd(W44_idx_1);
    _mm_storeu_pd(&P23[0], _mm_add_pd(r1, _mm_mul_pd(r, r22)));
    P23[2] += A54[5] * W44_idx_1;
    F44_idx_2 =
        LP->rb[3].m * (((W_d44[0] * d26 - d27 * W_d44[1]) +
                        (W44_idx_0 * W_d11_idx_0_tmp - b_SV_tmp * W44_idx_1)) +
                       P12[2]);
    r = _mm_loadu_pd(&A54[6]);
    r1 = _mm_loadu_pd(&P23[0]);
    r23 = _mm_set1_pd(W44_idx_2);
    _mm_storeu_pd(&P23[0], _mm_add_pd(r1, _mm_mul_pd(r, r23)));
    P23[2] += A54[8] * W44_idx_2;
    memset(&W_d55[0], 0, 3U * sizeof(real_T));
    W55_idx_0 = P23[0] + c_W_d11_tmp;
    r = _mm_loadu_pd(&A54[0]);
    r1 = _mm_loadu_pd(&W_d55[0]);
    r24 = _mm_set1_pd(W_d44[0]);
    _mm_storeu_pd(&W_d55[0], _mm_add_pd(r1, _mm_mul_pd(r, r24)));
    W_d55[2] += W_d44[0] * A54[2];
    W55_idx_1 = P23[1] + c_W_d11_tmp;
    r = _mm_loadu_pd(&A54[3]);
    r1 = _mm_loadu_pd(&W_d55[0]);
    r25 = _mm_set1_pd(W_d44[1]);
    _mm_storeu_pd(&W_d55[0], _mm_add_pd(r1, _mm_mul_pd(r, r25)));
    W_d55[2] += W_d44[1] * A54[5];
    W55_idx_2 = P23[2] + qd_cal[4];
    r = _mm_loadu_pd(&A54[6]);
    r1 = _mm_loadu_pd(&W_d55[0]);
    r26 = _mm_set1_pd(W_d44[2]);
    _mm_storeu_pd(&W_d55[0], _mm_add_pd(r1, _mm_mul_pd(r, r26)));
    W_d55[2] += W_d44[2] * A54[8];
    SV_tmp = c_W_d11_tmp * P23[2];
    W_d55[0] += P23[1] * qd_cal[4] - SV_tmp;
    W_d55[1] += SV_tmp - P23[0] * qd_cal[4];
    W_d55[2] = (W_d55[2] + (P23[0] * c_W_d11_tmp - c_W_d11_tmp * P23[1])) +
               (real_T)qdd_cal[4];
    b_SV_tmp = W44_idx_1 * d12 - d11 * W44_idx_2;
    W_d11_idx_0_tmp = d10 * W44_idx_2 - W44_idx_0 * d12;
    W_d11_tmp = W44_idx_0 * d11 - d10 * W44_idx_1;
    memset(&V_d33[0], 0, 3U * sizeof(real_T));
    c_W_d11_tmp = ((W_d44[1] * d12 - d11 * W_d44[2]) +
                   (W44_idx_1 * W_d11_tmp - W_d11_idx_0_tmp * W44_idx_2)) +
                  P12[0];
    r = _mm_loadu_pd(&A54[0]);
    r1 = _mm_loadu_pd(&V_d33[0]);
    _mm_storeu_pd(&V_d33[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_W_d11_tmp))));
    V_d33[2] += A54[2] * c_W_d11_tmp;
    c_W_d11_tmp = ((d10 * W_d44[2] - W_d44[0] * d12) +
                   (b_SV_tmp * W44_idx_2 - W44_idx_0 * W_d11_tmp)) +
                  P12[1];
    r = _mm_loadu_pd(&A54[3]);
    r1 = _mm_loadu_pd(&V_d33[0]);
    _mm_storeu_pd(&V_d33[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_W_d11_tmp))));
    V_d33[2] += A54[5] * c_W_d11_tmp;
    c_W_d11_tmp = ((W_d44[0] * d11 - d10 * W_d44[1]) +
                   (W44_idx_0 * W_d11_idx_0_tmp - b_SV_tmp * W44_idx_1)) +
                  P12[2];
    r = _mm_loadu_pd(&A54[6]);
    r1 = _mm_loadu_pd(&V_d33[0]);
    _mm_storeu_pd(&V_d33[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_W_d11_tmp))));
    V_d33[2] += A54[8] * c_W_d11_tmp;
    W_d11_tmp = W55_idx_1 * d28 - d29 * W55_idx_2;
    d_SV_tmp = d30 * W55_idx_2 - W55_idx_0 * d28;
    c_SV_tmp = W55_idx_0 * d29 - d30 * W55_idx_1;
    /*  ---------- 连杆6 ---------- */
    memset(&P23[0], 0, 3U * sizeof(real_T));
    F55_idx_0 = LP->rb[4].m * (((W_d55[1] * d28 - d29 * W_d55[2]) +
                                (W55_idx_1 * c_SV_tmp - d_SV_tmp * W55_idx_2)) +
                               V_d33[0]);
    r = _mm_loadu_pd(&A65[0]);
    r1 = _mm_loadu_pd(&P23[0]);
    r27 = _mm_set1_pd(W55_idx_0);
    _mm_storeu_pd(&P23[0], _mm_add_pd(r1, _mm_mul_pd(r, r27)));
    P23[2] += A65[2] * W55_idx_0;
    W_d11_idx_0_tmp = qd_cal[5] * 0.0;
    F55_idx_1 =
        LP->rb[4].m * (((d30 * W_d55[2] - W_d55[0] * d28) +
                        (W_d11_tmp * W55_idx_2 - W55_idx_0 * c_SV_tmp)) +
                       V_d33[1]);
    r = _mm_loadu_pd(&A65[3]);
    r1 = _mm_loadu_pd(&P23[0]);
    r28 = _mm_set1_pd(W55_idx_1);
    _mm_storeu_pd(&P23[0], _mm_add_pd(r1, _mm_mul_pd(r, r28)));
    P23[2] += A65[5] * W55_idx_1;
    F55_idx_2 =
        LP->rb[4].m * (((W_d55[0] * d29 - d30 * W_d55[1]) +
                        (W55_idx_0 * d_SV_tmp - W_d11_tmp * W55_idx_1)) +
                       V_d33[2]);
    r = _mm_loadu_pd(&A65[6]);
    r1 = _mm_loadu_pd(&P23[0]);
    r29 = _mm_set1_pd(W55_idx_2);
    _mm_storeu_pd(&P23[0], _mm_add_pd(r1, _mm_mul_pd(r, r29)));
    P23[2] += A65[8] * W55_idx_2;
    memset(&W_d66[0], 0, 3U * sizeof(real_T));
    W66_idx_0 = P23[0] + W_d11_idx_0_tmp;
    r = _mm_loadu_pd(&A65[0]);
    r1 = _mm_loadu_pd(&W_d66[0]);
    r30 = _mm_set1_pd(W_d55[0]);
    _mm_storeu_pd(&W_d66[0], _mm_add_pd(r1, _mm_mul_pd(r, r30)));
    W_d66[2] += W_d55[0] * A65[2];
    W66_idx_1 = P23[1] + W_d11_idx_0_tmp;
    r = _mm_loadu_pd(&A65[3]);
    r1 = _mm_loadu_pd(&W_d66[0]);
    r31 = _mm_set1_pd(W_d55[1]);
    _mm_storeu_pd(&W_d66[0], _mm_add_pd(r1, _mm_mul_pd(r, r31)));
    W_d66[2] += W_d55[1] * A65[5];
    W66_idx_2 = P23[2] + qd_cal[5];
    r = _mm_loadu_pd(&A65[6]);
    r1 = _mm_loadu_pd(&W_d66[0]);
    r32 = _mm_set1_pd(W_d55[2]);
    _mm_storeu_pd(&W_d66[0], _mm_add_pd(r1, _mm_mul_pd(r, r32)));
    W_d66[2] += W_d55[2] * A65[8];
    b_SV_tmp = W_d11_idx_0_tmp * P23[2];
    W_d66[0] += P23[1] * qd_cal[5] - b_SV_tmp;
    W_d66[1] += b_SV_tmp - P23[0] * qd_cal[5];
    W_d66[2] =
        (W_d66[2] + (P23[0] * W_d11_idx_0_tmp - W_d11_idx_0_tmp * P23[1])) +
        (real_T)qdd_cal[5];
    W_d11_tmp = W55_idx_1 * d15 - d14 * W55_idx_2;
    d_SV_tmp = d13 * W55_idx_2 - W55_idx_0 * d15;
    c_SV_tmp = W55_idx_0 * d14 - d13 * W55_idx_1;
    memset(&P12[0], 0, 3U * sizeof(real_T));
    W_d11_idx_0_tmp = ((W_d55[1] * d15 - d14 * W_d55[2]) +
                       (W55_idx_1 * c_SV_tmp - d_SV_tmp * W55_idx_2)) +
                      V_d33[0];
    r = _mm_loadu_pd(&A65[0]);
    r1 = _mm_loadu_pd(&P12[0]);
    _mm_storeu_pd(&P12[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(W_d11_idx_0_tmp))));
    P12[2] += A65[2] * W_d11_idx_0_tmp;
    W_d11_idx_0_tmp = ((d13 * W_d55[2] - W_d55[0] * d15) +
                       (W_d11_tmp * W55_idx_2 - W55_idx_0 * c_SV_tmp)) +
                      V_d33[1];
    r = _mm_loadu_pd(&A65[3]);
    r1 = _mm_loadu_pd(&P12[0]);
    _mm_storeu_pd(&P12[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(W_d11_idx_0_tmp))));
    P12[2] += A65[5] * W_d11_idx_0_tmp;
    W_d11_idx_0_tmp = ((W_d55[0] * d14 - d13 * W_d55[1]) +
                       (W55_idx_0 * d_SV_tmp - W_d11_tmp * W55_idx_1)) +
                      V_d33[2];
    r = _mm_loadu_pd(&A65[6]);
    r1 = _mm_loadu_pd(&P12[0]);
    _mm_storeu_pd(&P12[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(W_d11_idx_0_tmp))));
    P12[2] += A65[8] * W_d11_idx_0_tmp;
    W_d11_idx_0_tmp = W66_idx_1 * d31 - d32 * W66_idx_2;
    W_d11_tmp = d33 * W66_idx_2 - W66_idx_0 * d31;
    d_SV_tmp = W66_idx_0 * d32 - d33 * W66_idx_1;
    /*  ---------- 连杆7 ---------- */
    memset(&P23[0], 0, 3U * sizeof(real_T));
    F66[0] = LP->rb[5].m * (((W_d66[1] * d31 - d32 * W_d66[2]) +
                             (W66_idx_1 * d_SV_tmp - W_d11_tmp * W66_idx_2)) +
                            P12[0]);
    r = _mm_loadu_pd(&R3[0]);
    r1 = _mm_loadu_pd(&P23[0]);
    r33 = _mm_set1_pd(W66_idx_0);
    _mm_storeu_pd(&P23[0], _mm_add_pd(r1, _mm_mul_pd(r, r33)));
    P23[2] += R3[2] * W66_idx_0;
    c_SV_tmp = qd_cal[6] * 0.0;
    F66[1] =
        LP->rb[5].m * (((d33 * W_d66[2] - W_d66[0] * d31) +
                        (W_d11_idx_0_tmp * W66_idx_2 - W66_idx_0 * d_SV_tmp)) +
                       P12[1]);
    r = _mm_loadu_pd(&R3[3]);
    r1 = _mm_loadu_pd(&P23[0]);
    r34 = _mm_set1_pd(W66_idx_1);
    _mm_storeu_pd(&P23[0], _mm_add_pd(r1, _mm_mul_pd(r, r34)));
    P23[2] += R3[5] * W66_idx_1;
    F66[2] =
        LP->rb[5].m * (((W_d66[0] * d32 - d33 * W_d66[1]) +
                        (W66_idx_0 * W_d11_tmp - W_d11_idx_0_tmp * W66_idx_1)) +
                       P12[2]);
    r = _mm_loadu_pd(&R3[6]);
    r1 = _mm_loadu_pd(&P23[0]);
    r35 = _mm_set1_pd(W66_idx_2);
    _mm_storeu_pd(&P23[0], _mm_add_pd(r1, _mm_mul_pd(r, r35)));
    P23[2] += R3[8] * W66_idx_2;
    memset(&W_d77[0], 0, 3U * sizeof(real_T));
    W77[0] = P23[0] + c_SV_tmp;
    r = _mm_loadu_pd(&R3[0]);
    r1 = _mm_loadu_pd(&W_d77[0]);
    r36 = _mm_set1_pd(W_d66[0]);
    _mm_storeu_pd(&W_d77[0], _mm_add_pd(r1, _mm_mul_pd(r, r36)));
    W_d77[2] += W_d66[0] * R3[2];
    W77[1] = P23[1] + c_SV_tmp;
    r = _mm_loadu_pd(&R3[3]);
    r1 = _mm_loadu_pd(&W_d77[0]);
    r37 = _mm_set1_pd(W_d66[1]);
    _mm_storeu_pd(&W_d77[0], _mm_add_pd(r1, _mm_mul_pd(r, r37)));
    W_d77[2] += W_d66[1] * R3[5];
    W77[2] = P23[2] + qd_cal[6];
    r = _mm_loadu_pd(&R3[6]);
    r1 = _mm_loadu_pd(&W_d77[0]);
    r38 = _mm_set1_pd(W_d66[2]);
    _mm_storeu_pd(&W_d77[0], _mm_add_pd(r1, _mm_mul_pd(r, r38)));
    W_d77[2] += W_d66[2] * R3[8];
    W_d11_idx_0_tmp = c_SV_tmp * P23[2];
    W_d77[0] += P23[1] * qd_cal[6] - W_d11_idx_0_tmp;
    W_d77[1] += W_d11_idx_0_tmp - P23[0] * qd_cal[6];
    W_d77[2] = (W_d77[2] + (P23[0] * c_SV_tmp - c_SV_tmp * P23[1])) +
               (real_T)qdd_cal[6];
    W_d11_idx_0_tmp = W77[1] * d34 - d35 * W77[2];
    W_d11_tmp = d36 * W77[2] - W77[0] * d34;
    d_SV_tmp = W77[0] * d35 - d36 * W77[1];
    P23[0] = W66_idx_1 * d18 - d17 * W66_idx_2;
    P23[1] = d16 * W66_idx_2 - W66_idx_0 * d18;
    P23[2] = W66_idx_0 * d17 - d16 * W66_idx_1;
    W22[0] = W_d77[1] * d34 - d35 * W_d77[2];
    W22[1] = d36 * W_d77[2] - W_d77[0] * d34;
    W22[2] = W_d77[0] * d35 - d36 * W_d77[1];
    n66[0] = W77[1] * d_SV_tmp - W_d11_tmp * W77[2];
    n66[1] = W_d11_idx_0_tmp * W77[2] - W77[0] * d_SV_tmp;
    n66[2] = W77[0] * W_d11_tmp - W_d11_idx_0_tmp * W77[1];
    P01[0] = W_d66[1] * d18 - d17 * W_d66[2];
    P01[1] = d16 * W_d66[2] - W_d66[0] * d18;
    P01[2] = W_d66[0] * d17 - d16 * W_d66[1];
    W11[0] = W66_idx_1 * P23[2] - P23[1] * W66_idx_2;
    W11[1] = P23[0] * W66_idx_2 - W66_idx_0 * P23[2];
    W11[2] = W66_idx_0 * P23[1] - P23[0] * W66_idx_1;
    r = _mm_loadu_pd(&P01[0]);
    r1 = _mm_loadu_pd(&W11[0]);
    r39 = _mm_loadu_pd(&P12[0]);
    _mm_storeu_pd(&P01[0], _mm_add_pd(_mm_add_pd(r, r1), r39));
    P01[2] = (P01[2] + W11[2]) + P12[2];
    W_d11_idx_0_tmp = P01[0];
    W_d11_tmp = P01[1];
    d_SV_tmp = P01[2];
    r = _mm_loadu_pd(&W22[0]);
    r1 = _mm_loadu_pd(&n66[0]);
    r39 = _mm_add_pd(r, r1);
    r = _mm_loadu_pd(&R3[0]);
    r1 = _mm_mul_pd(r, _mm_set1_pd(W_d11_idx_0_tmp));
    r = _mm_loadu_pd(&R3[3]);
    r = _mm_mul_pd(r, _mm_set1_pd(W_d11_tmp));
    r1 = _mm_add_pd(r1, r);
    r = _mm_loadu_pd(&R3[6]);
    r = _mm_mul_pd(r, _mm_set1_pd(d_SV_tmp));
    r = _mm_add_pd(r1, r);
    r = _mm_add_pd(r39, r);
    r = _mm_mul_pd(_mm_set1_pd(LP->rb[6].m), r);
    _mm_storeu_pd(&V_d33[0], r);
    V_d33[2] =
        LP->rb[6].m *
        ((W22[2] + n66[2]) +
         ((R3[2] * W_d11_idx_0_tmp + R3[5] * W_d11_tmp) + R3[8] * d_SV_tmp));
    /*     %% ================= 反向递推 ================= */
    /*  ---------- 连杆7 ---------- */
    memset(&P01[0], 0, 3U * sizeof(real_T));
    memset(&n77[0], 0, 3U * sizeof(real_T));
    r1 = _mm_loadu_pd(&LP->rb[6].b_I[0]);
    r = _mm_loadu_pd(&P01[0]);
    _mm_storeu_pd(&P01[0], _mm_add_pd(r, _mm_mul_pd(r1, _mm_set1_pd(W77[0]))));
    r = _mm_loadu_pd(&n77[0]);
    _mm_storeu_pd(&n77[0],
                  _mm_add_pd(r, _mm_mul_pd(r1, _mm_set1_pd(W_d77[0]))));
    P01[2] += W77[0] * LP->rb[6].b_I[2];
    n77[2] += W_d77[0] * LP->rb[6].b_I[2];
    r1 = _mm_loadu_pd(&LP->rb[6].b_I[3]);
    r = _mm_loadu_pd(&P01[0]);
    _mm_storeu_pd(&P01[0], _mm_add_pd(r, _mm_mul_pd(r1, _mm_set1_pd(W77[1]))));
    r = _mm_loadu_pd(&n77[0]);
    _mm_storeu_pd(&n77[0],
                  _mm_add_pd(r, _mm_mul_pd(r1, _mm_set1_pd(W_d77[1]))));
    P01[2] += W77[1] * LP->rb[6].b_I[5];
    n77[2] += W_d77[1] * LP->rb[6].b_I[5];
    r1 = _mm_loadu_pd(&LP->rb[6].b_I[6]);
    r = _mm_loadu_pd(&P01[0]);
    _mm_storeu_pd(&P01[0], _mm_add_pd(r, _mm_mul_pd(r1, _mm_set1_pd(W77[2]))));
    r = _mm_loadu_pd(&n77[0]);
    _mm_storeu_pd(&n77[0],
                  _mm_add_pd(r, _mm_mul_pd(r1, _mm_set1_pd(W_d77[2]))));
    P01[2] += W77[2] * LP->rb[6].b_I[8];
    n77[2] += W_d77[2] * LP->rb[6].b_I[8];
    /*  ---------- 连杆6 ---------- */
    memset(&P34[0], 0, 3U * sizeof(real_T));
    n77[0] = (n77[0] + (W77[1] * P01[2] - P01[1] * W77[2])) +
             (d35 * V_d33[2] - V_d33[1] * d34);
    r = _mm_loadu_pd(&R1[0]);
    r1 = _mm_loadu_pd(&P34[0]);
    _mm_storeu_pd(&P34[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(V_d33[0]))));
    P34[2] += V_d33[0] * R1[2];
    n77[1] = (n77[1] + (P01[0] * W77[2] - W77[0] * P01[2])) +
             (V_d33[0] * d34 - d36 * V_d33[2]);
    r = _mm_loadu_pd(&R1[3]);
    r1 = _mm_loadu_pd(&P34[0]);
    _mm_storeu_pd(&P34[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(V_d33[1]))));
    P34[2] += V_d33[1] * R1[5];
    n77[2] = (n77[2] + (W77[0] * P01[1] - P01[0] * W77[1])) +
             (d36 * V_d33[1] - V_d33[0] * d35);
    r = _mm_loadu_pd(&R1[6]);
    r1 = _mm_loadu_pd(&P34[0]);
    _mm_storeu_pd(&P34[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(V_d33[2]))));
    P34[2] += V_d33[2] * R1[8];
    memset(&P01[0], 0, 3U * sizeof(real_T));
    memset(&b_LP[0], 0, 3U * sizeof(real_T));
    r1 = _mm_loadu_pd(&LP->rb[5].b_I[0]);
    r = _mm_loadu_pd(&P01[0]);
    _mm_storeu_pd(&P01[0], _mm_add_pd(r, _mm_mul_pd(r1, r33)));
    r = _mm_loadu_pd(&b_LP[0]);
    _mm_storeu_pd(&b_LP[0], _mm_add_pd(r, _mm_mul_pd(r1, r36)));
    P01[2] += LP->rb[5].b_I[2] * W66_idx_0;
    b_LP[2] += W_d66[0] * LP->rb[5].b_I[2];
    r1 = _mm_loadu_pd(&LP->rb[5].b_I[3]);
    r = _mm_loadu_pd(&P01[0]);
    _mm_storeu_pd(&P01[0], _mm_add_pd(r, _mm_mul_pd(r1, r34)));
    r = _mm_loadu_pd(&b_LP[0]);
    _mm_storeu_pd(&b_LP[0], _mm_add_pd(r, _mm_mul_pd(r1, r37)));
    P01[2] += LP->rb[5].b_I[5] * W66_idx_1;
    b_LP[2] += W_d66[1] * LP->rb[5].b_I[5];
    r1 = _mm_loadu_pd(&LP->rb[5].b_I[6]);
    r = _mm_loadu_pd(&P01[0]);
    _mm_storeu_pd(&P01[0], _mm_add_pd(r, _mm_mul_pd(r1, r35)));
    r = _mm_loadu_pd(&b_LP[0]);
    _mm_storeu_pd(&b_LP[0], _mm_add_pd(r, _mm_mul_pd(r1, r38)));
    P01[2] += LP->rb[5].b_I[8] * W66_idx_2;
    b_LP[2] += W_d66[2] * LP->rb[5].b_I[8];
    W11[0] = W66_idx_1 * P01[2] - P01[1] * W66_idx_2;
    W11[1] = P01[0] * W66_idx_2 - W66_idx_0 * P01[2];
    W11[2] = W66_idx_0 * P01[1] - P01[0] * W66_idx_1;
    b_SV_tmp = n77[0];
    W_d11_idx_0_tmp = n77[1];
    W_d11_tmp = n77[2];
    r = _mm_loadu_pd(&b_LP[0]);
    r1 = _mm_loadu_pd(&W11[0]);
    r39 = _mm_add_pd(r, r1);
    r = _mm_loadu_pd(&R1[0]);
    r1 = _mm_mul_pd(r, _mm_set1_pd(b_SV_tmp));
    r = _mm_loadu_pd(&R1[3]);
    r = _mm_mul_pd(r, _mm_set1_pd(W_d11_idx_0_tmp));
    r1 = _mm_add_pd(r1, r);
    r = _mm_loadu_pd(&R1[6]);
    r = _mm_mul_pd(r, _mm_set1_pd(W_d11_tmp));
    r = _mm_add_pd(r1, r);
    r = _mm_add_pd(r39, r);
    _mm_storeu_pd(&n66[0], r);
    n66[2] = (b_LP[2] + W11[2]) +
             ((R1[2] * b_SV_tmp + R1[5] * W_d11_idx_0_tmp) + R1[8] * W_d11_tmp);
    /*  ---------- 连杆5 ---------- */
    memset(&P23[0], 0, 3U * sizeof(real_T));
    n66[0] = (n66[0] + (d32 * F66[2] - F66[1] * d31)) +
             (d17 * P34[2] - P34[1] * d18);
    c_W_d11_tmp = F66[0] + P34[0];
    r = _mm_loadu_pd(&R2[0]);
    r1 = _mm_loadu_pd(&P23[0]);
    _mm_storeu_pd(&P23[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_W_d11_tmp))));
    P23[2] += R2[2] * c_W_d11_tmp;
    n66[1] = (n66[1] + (F66[0] * d31 - d33 * F66[2])) +
             (P34[0] * d18 - d16 * P34[2]);
    c_W_d11_tmp = F66[1] + P34[1];
    r = _mm_loadu_pd(&R2[3]);
    r1 = _mm_loadu_pd(&P23[0]);
    _mm_storeu_pd(&P23[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_W_d11_tmp))));
    P23[2] += R2[5] * c_W_d11_tmp;
    n66[2] = (n66[2] + (d33 * F66[1] - F66[0] * d32)) +
             (d16 * P34[1] - P34[0] * d17);
    c_W_d11_tmp = F66[2] + P34[2];
    r = _mm_loadu_pd(&R2[6]);
    r1 = _mm_loadu_pd(&P23[0]);
    _mm_storeu_pd(&P23[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_W_d11_tmp))));
    P23[2] += R2[8] * c_W_d11_tmp;
    memset(&P01[0], 0, 3U * sizeof(real_T));
    memset(&b_LP[0], 0, 3U * sizeof(real_T));
    r1 = _mm_loadu_pd(&LP->rb[4].b_I[0]);
    r = _mm_loadu_pd(&P01[0]);
    _mm_storeu_pd(&P01[0], _mm_add_pd(r, _mm_mul_pd(r1, r27)));
    r = _mm_loadu_pd(&b_LP[0]);
    _mm_storeu_pd(&b_LP[0], _mm_add_pd(r, _mm_mul_pd(r1, r30)));
    P01[2] += LP->rb[4].b_I[2] * W55_idx_0;
    b_LP[2] += W_d55[0] * LP->rb[4].b_I[2];
    r1 = _mm_loadu_pd(&LP->rb[4].b_I[3]);
    r = _mm_loadu_pd(&P01[0]);
    _mm_storeu_pd(&P01[0], _mm_add_pd(r, _mm_mul_pd(r1, r28)));
    r = _mm_loadu_pd(&b_LP[0]);
    _mm_storeu_pd(&b_LP[0], _mm_add_pd(r, _mm_mul_pd(r1, r31)));
    P01[2] += LP->rb[4].b_I[5] * W55_idx_1;
    b_LP[2] += W_d55[1] * LP->rb[4].b_I[5];
    r1 = _mm_loadu_pd(&LP->rb[4].b_I[6]);
    r = _mm_loadu_pd(&P01[0]);
    _mm_storeu_pd(&P01[0], _mm_add_pd(r, _mm_mul_pd(r1, r29)));
    r = _mm_loadu_pd(&b_LP[0]);
    _mm_storeu_pd(&b_LP[0], _mm_add_pd(r, _mm_mul_pd(r1, r32)));
    P01[2] += LP->rb[4].b_I[8] * W55_idx_2;
    b_LP[2] += W_d55[2] * LP->rb[4].b_I[8];
    W22[0] = W55_idx_1 * P01[2] - P01[1] * W55_idx_2;
    W22[1] = P01[0] * W55_idx_2 - W55_idx_0 * P01[2];
    W22[2] = W55_idx_0 * P01[1] - P01[0] * W55_idx_1;
    c_W_d11_tmp = n66[0];
    b_SV_tmp = n66[1];
    W_d11_idx_0_tmp = n66[2];
    r = _mm_loadu_pd(&b_LP[0]);
    r1 = _mm_loadu_pd(&W22[0]);
    r39 = _mm_add_pd(r, r1);
    r = _mm_loadu_pd(&R2[0]);
    r1 = _mm_mul_pd(r, _mm_set1_pd(c_W_d11_tmp));
    r = _mm_loadu_pd(&R2[3]);
    r = _mm_mul_pd(r, _mm_set1_pd(b_SV_tmp));
    r1 = _mm_add_pd(r1, r);
    r = _mm_loadu_pd(&R2[6]);
    r = _mm_mul_pd(r, _mm_set1_pd(W_d11_idx_0_tmp));
    r = _mm_add_pd(r1, r);
    r = _mm_add_pd(r39, r);
    _mm_storeu_pd(&F66[0], r);
    F66[2] = (b_LP[2] + W22[2]) + ((R2[2] * c_W_d11_tmp + R2[5] * b_SV_tmp) +
                                   R2[8] * W_d11_idx_0_tmp);
    /*  ---------- 连杆4 ---------- */
    memset(&P34[0], 0, 3U * sizeof(real_T));
    F66[0] = (F66[0] + (d29 * F55_idx_2 - F55_idx_1 * d28)) +
             (d14 * P23[2] - P23[1] * d15);
    SV_tmp = F55_idx_0 + P23[0];
    r = _mm_loadu_pd(&R4[0]);
    r1 = _mm_loadu_pd(&P34[0]);
    _mm_storeu_pd(&P34[0], _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(SV_tmp))));
    P34[2] += R4[2] * SV_tmp;
    F66[1] = (F66[1] + (F55_idx_0 * d28 - d30 * F55_idx_2)) +
             (P23[0] * d15 - d13 * P23[2]);
    SV_tmp = F55_idx_1 + P23[1];
    r = _mm_loadu_pd(&R4[3]);
    r1 = _mm_loadu_pd(&P34[0]);
    _mm_storeu_pd(&P34[0], _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(SV_tmp))));
    P34[2] += R4[5] * SV_tmp;
    F66[2] = (F66[2] + (d30 * F55_idx_1 - F55_idx_0 * d29)) +
             (d13 * P23[1] - P23[0] * d14);
    SV_tmp = F55_idx_2 + P23[2];
    r = _mm_loadu_pd(&R4[6]);
    r1 = _mm_loadu_pd(&P34[0]);
    _mm_storeu_pd(&P34[0], _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(SV_tmp))));
    P34[2] += R4[8] * SV_tmp;
    memset(&P01[0], 0, 3U * sizeof(real_T));
    memset(&b_LP[0], 0, 3U * sizeof(real_T));
    r1 = _mm_loadu_pd(&LP->rb[3].b_I[0]);
    r = _mm_loadu_pd(&P01[0]);
    _mm_storeu_pd(&P01[0], _mm_add_pd(r, _mm_mul_pd(r1, r21)));
    r = _mm_loadu_pd(&b_LP[0]);
    _mm_storeu_pd(&b_LP[0], _mm_add_pd(r, _mm_mul_pd(r1, r24)));
    P01[2] += LP->rb[3].b_I[2] * W44_idx_0;
    b_LP[2] += W_d44[0] * LP->rb[3].b_I[2];
    r1 = _mm_loadu_pd(&LP->rb[3].b_I[3]);
    r = _mm_loadu_pd(&P01[0]);
    _mm_storeu_pd(&P01[0], _mm_add_pd(r, _mm_mul_pd(r1, r22)));
    r = _mm_loadu_pd(&b_LP[0]);
    _mm_storeu_pd(&b_LP[0], _mm_add_pd(r, _mm_mul_pd(r1, r25)));
    P01[2] += LP->rb[3].b_I[5] * W44_idx_1;
    b_LP[2] += W_d44[1] * LP->rb[3].b_I[5];
    r1 = _mm_loadu_pd(&LP->rb[3].b_I[6]);
    r = _mm_loadu_pd(&P01[0]);
    _mm_storeu_pd(&P01[0], _mm_add_pd(r, _mm_mul_pd(r1, r23)));
    r = _mm_loadu_pd(&b_LP[0]);
    _mm_storeu_pd(&b_LP[0], _mm_add_pd(r, _mm_mul_pd(r1, r26)));
    P01[2] += LP->rb[3].b_I[8] * W44_idx_2;
    b_LP[2] += W_d44[2] * LP->rb[3].b_I[8];
    W22[0] = W44_idx_1 * P01[2] - P01[1] * W44_idx_2;
    W22[1] = P01[0] * W44_idx_2 - W44_idx_0 * P01[2];
    W22[2] = W44_idx_0 * P01[1] - P01[0] * W44_idx_1;
    b_W_d11_tmp = F66[0];
    SV_tmp = F66[1];
    c_W_d11_tmp = F66[2];
    r = _mm_loadu_pd(&b_LP[0]);
    r1 = _mm_loadu_pd(&W22[0]);
    r39 = _mm_add_pd(r, r1);
    r = _mm_loadu_pd(&R4[0]);
    r1 = _mm_mul_pd(r, _mm_set1_pd(b_W_d11_tmp));
    r = _mm_loadu_pd(&R4[3]);
    r = _mm_mul_pd(r, _mm_set1_pd(SV_tmp));
    r1 = _mm_add_pd(r1, r);
    r = _mm_loadu_pd(&R4[6]);
    r = _mm_mul_pd(r, _mm_set1_pd(c_W_d11_tmp));
    r = _mm_add_pd(r1, r);
    r = _mm_add_pd(r39, r);
    _mm_storeu_pd(&W_d77[0], r);
    W_d77[2] = (b_LP[2] + W22[2]) +
               ((R4[2] * b_W_d11_tmp + R4[5] * SV_tmp) + R4[8] * c_W_d11_tmp);
    /*  ---------- 连杆3 ---------- */
    memset(&P23[0], 0, 3U * sizeof(real_T));
    W_d77[0] = (W_d77[0] + (d26 * F44_idx_2 - F44_idx_1 * d25)) +
               (d11 * P34[2] - P34[1] * d12);
    W55_idx_1 = F44_idx_0 + P34[0];
    r = _mm_loadu_pd(&A34[0]);
    r1 = _mm_loadu_pd(&P23[0]);
    _mm_storeu_pd(&P23[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(W55_idx_1))));
    P23[2] += A34[2] * W55_idx_1;
    W_d77[1] = (W_d77[1] + (F44_idx_0 * d25 - d27 * F44_idx_2)) +
               (P34[0] * d12 - d10 * P34[2]);
    W55_idx_1 = F44_idx_1 + P34[1];
    r = _mm_loadu_pd(&A34[3]);
    r1 = _mm_loadu_pd(&P23[0]);
    _mm_storeu_pd(&P23[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(W55_idx_1))));
    P23[2] += A34[5] * W55_idx_1;
    W_d77[2] = (W_d77[2] + (d27 * F44_idx_1 - F44_idx_0 * d26)) +
               (d10 * P34[1] - P34[0] * d11);
    W55_idx_1 = F44_idx_2 + P34[2];
    r = _mm_loadu_pd(&A34[6]);
    r1 = _mm_loadu_pd(&P23[0]);
    _mm_storeu_pd(&P23[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(W55_idx_1))));
    P23[2] += A34[8] * W55_idx_1;
    memset(&P01[0], 0, 3U * sizeof(real_T));
    memset(&b_LP[0], 0, 3U * sizeof(real_T));
    r1 = _mm_loadu_pd(&LP->rb[2].b_I[0]);
    r = _mm_loadu_pd(&P01[0]);
    _mm_storeu_pd(&P01[0], _mm_add_pd(r, _mm_mul_pd(r1, r15)));
    r = _mm_loadu_pd(&b_LP[0]);
    _mm_storeu_pd(&b_LP[0], _mm_add_pd(r, _mm_mul_pd(r1, r18)));
    P01[2] += LP->rb[2].b_I[2] * W33_idx_0;
    b_LP[2] += W_d33[0] * LP->rb[2].b_I[2];
    r1 = _mm_loadu_pd(&LP->rb[2].b_I[3]);
    r = _mm_loadu_pd(&P01[0]);
    _mm_storeu_pd(&P01[0], _mm_add_pd(r, _mm_mul_pd(r1, r16)));
    r = _mm_loadu_pd(&b_LP[0]);
    _mm_storeu_pd(&b_LP[0], _mm_add_pd(r, _mm_mul_pd(r1, r19)));
    P01[2] += LP->rb[2].b_I[5] * W33_idx_1;
    b_LP[2] += W_d33[1] * LP->rb[2].b_I[5];
    r1 = _mm_loadu_pd(&LP->rb[2].b_I[6]);
    r = _mm_loadu_pd(&P01[0]);
    _mm_storeu_pd(&P01[0], _mm_add_pd(r, _mm_mul_pd(r1, r17)));
    r = _mm_loadu_pd(&b_LP[0]);
    _mm_storeu_pd(&b_LP[0], _mm_add_pd(r, _mm_mul_pd(r1, r20)));
    P01[2] += LP->rb[2].b_I[8] * W33_idx_2;
    b_LP[2] += W_d33[2] * LP->rb[2].b_I[8];
    W22[0] = W33_idx_1 * P01[2] - P01[1] * W33_idx_2;
    W22[1] = P01[0] * W33_idx_2 - W33_idx_0 * P01[2];
    W22[2] = W33_idx_0 * P01[1] - P01[0] * W33_idx_1;
    F55_idx_1 = W_d77[0];
    W55_idx_1 = W_d77[1];
    b_W_d11_tmp = W_d77[2];
    r = _mm_loadu_pd(&b_LP[0]);
    r1 = _mm_loadu_pd(&W22[0]);
    r39 = _mm_add_pd(r, r1);
    r = _mm_loadu_pd(&A34[0]);
    r1 = _mm_mul_pd(r, _mm_set1_pd(F55_idx_1));
    r = _mm_loadu_pd(&A34[3]);
    r = _mm_mul_pd(r, _mm_set1_pd(W55_idx_1));
    r1 = _mm_add_pd(r1, r);
    r = _mm_loadu_pd(&A34[6]);
    r = _mm_mul_pd(r, _mm_set1_pd(b_W_d11_tmp));
    r = _mm_add_pd(r1, r);
    r = _mm_add_pd(r39, r);
    _mm_storeu_pd(&W77[0], r);
    W77[2] = (b_LP[2] + W22[2]) +
             ((A34[2] * F55_idx_1 + A34[5] * W55_idx_1) + A34[8] * b_W_d11_tmp);
    /*  ---------- 连杆2 ---------- */
    memset(&V_d33[0], 0, 3U * sizeof(real_T));
    W77[0] = (W77[0] + (d23 * F33_idx_2 - F33_idx_1 * d22)) +
             (d8 * P23[2] - P23[1] * d9);
    F55_idx_0 = F33_idx_0 + P23[0];
    r = _mm_loadu_pd(&A23[0]);
    r1 = _mm_loadu_pd(&V_d33[0]);
    _mm_storeu_pd(&V_d33[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(F55_idx_0))));
    V_d33[2] += A23[2] * F55_idx_0;
    W77[1] = (W77[1] + (F33_idx_0 * d22 - d24 * F33_idx_2)) +
             (P23[0] * d9 - d7 * P23[2]);
    F55_idx_0 = F33_idx_1 + P23[1];
    r = _mm_loadu_pd(&A23[3]);
    r1 = _mm_loadu_pd(&V_d33[0]);
    _mm_storeu_pd(&V_d33[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(F55_idx_0))));
    V_d33[2] += A23[5] * F55_idx_0;
    W77[2] = (W77[2] + (d24 * F33_idx_1 - F33_idx_0 * d23)) +
             (d7 * P23[1] - P23[0] * d8);
    F55_idx_0 = F33_idx_2 + P23[2];
    r = _mm_loadu_pd(&A23[6]);
    r1 = _mm_loadu_pd(&V_d33[0]);
    _mm_storeu_pd(&V_d33[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(F55_idx_0))));
    V_d33[2] += A23[8] * F55_idx_0;
    memset(&P01[0], 0, 3U * sizeof(real_T));
    memset(&b_LP[0], 0, 3U * sizeof(real_T));
    r1 = _mm_loadu_pd(&LP->rb[1].b_I[0]);
    r = _mm_loadu_pd(&P01[0]);
    _mm_storeu_pd(&P01[0], _mm_add_pd(r, _mm_mul_pd(r1, r9)));
    r = _mm_loadu_pd(&b_LP[0]);
    _mm_storeu_pd(&b_LP[0], _mm_add_pd(r, _mm_mul_pd(r1, r12)));
    P01[2] += LP->rb[1].b_I[2] * W22_idx_0;
    b_LP[2] += P67[0] * LP->rb[1].b_I[2];
    r1 = _mm_loadu_pd(&LP->rb[1].b_I[3]);
    r = _mm_loadu_pd(&P01[0]);
    _mm_storeu_pd(&P01[0], _mm_add_pd(r, _mm_mul_pd(r1, r10)));
    r = _mm_loadu_pd(&b_LP[0]);
    _mm_storeu_pd(&b_LP[0], _mm_add_pd(r, _mm_mul_pd(r1, r13)));
    P01[2] += LP->rb[1].b_I[5] * W22_idx_1;
    b_LP[2] += P67[1] * LP->rb[1].b_I[5];
    r1 = _mm_loadu_pd(&LP->rb[1].b_I[6]);
    r = _mm_loadu_pd(&P01[0]);
    _mm_storeu_pd(&P01[0], _mm_add_pd(r, _mm_mul_pd(r1, r11)));
    r = _mm_loadu_pd(&b_LP[0]);
    _mm_storeu_pd(&b_LP[0], _mm_add_pd(r, _mm_mul_pd(r1, r14)));
    P01[2] += LP->rb[1].b_I[8] * W22_idx_2;
    b_LP[2] += P67[2] * LP->rb[1].b_I[8];
    W22[0] = W22_idx_1 * P01[2] - P01[1] * W22_idx_2;
    W22[1] = P01[0] * W22_idx_2 - W22_idx_0 * P01[2];
    W22[2] = W22_idx_0 * P01[1] - P01[0] * W22_idx_1;
    F55_idx_0 = W77[0];
    F55_idx_1 = W77[1];
    W55_idx_1 = W77[2];
    r = _mm_loadu_pd(&b_LP[0]);
    r1 = _mm_loadu_pd(&W22[0]);
    r39 = _mm_add_pd(r, r1);
    r = _mm_loadu_pd(&A23[0]);
    r1 = _mm_mul_pd(r, _mm_set1_pd(F55_idx_0));
    r = _mm_loadu_pd(&A23[3]);
    r = _mm_mul_pd(r, _mm_set1_pd(F55_idx_1));
    r1 = _mm_add_pd(r1, r);
    r = _mm_loadu_pd(&A23[6]);
    r = _mm_mul_pd(r, _mm_set1_pd(W55_idx_1));
    r = _mm_add_pd(r1, r);
    r = _mm_add_pd(r39, r);
    _mm_storeu_pd(&P12[0], r);
    P12[2] = (b_LP[2] + W22[2]) +
             ((A23[2] * F55_idx_0 + A23[5] * F55_idx_1) + A23[8] * W55_idx_1);
    b_LP[0] = d20 * F22_idx_2 - F22_idx_1 * d19;
    b_LP[1] = F22_idx_0 * d19 - d21 * F22_idx_2;
    b_LP[2] = d21 * F22_idx_1 - F22_idx_0 * d20;
    P01[0] = d5 * V_d33[2] - V_d33[1] * d6;
    P01[1] = V_d33[0] * d6 - d4 * V_d33[2];
    P01[2] = d4 * V_d33[1] - V_d33[0] * d5;
    r = _mm_loadu_pd(&P12[0]);
    r1 = _mm_loadu_pd(&b_LP[0]);
    r39 = _mm_loadu_pd(&P01[0]);
    _mm_storeu_pd(&P12[0], _mm_add_pd(_mm_add_pd(r, r1), r39));
    P12[2] = (P12[2] + b_LP[2]) + P01[2];
    /*  ---------- 连杆1 ---------- */
    memset(&P01[0], 0, 3U * sizeof(real_T));
    F55_idx_1 = P45[1] * d37 - d38 * P45[2];
    W55_idx_1 = d39 * P45[2] - P45[0] * d37;
    b_W_d11_tmp = P45[0] * d38 - d39 * P45[1];
    memset(&P23[0], 0, 3U * sizeof(real_T));
    memset(&b_LP[0], 0, 3U * sizeof(real_T));
    P34[0] = LP->rb[0].m * (((W_d11_idx_1 * d37 - d38 * W_d11_idx_2) +
                             (P45[1] * b_W_d11_tmp - W55_idx_1 * P45[2])) +
                            P56[0]);
    F55_idx_0 = F22_idx_0 + V_d33[0];
    r39 = _mm_loadu_pd(&LP->rb[0].b_I[0]);
    r = _mm_loadu_pd(&P01[0]);
    _mm_storeu_pd(&P01[0], _mm_add_pd(r, _mm_mul_pd(r39, r3)));
    r = _mm_loadu_pd(&A12[0]);
    r1 = _mm_loadu_pd(&P23[0]);
    _mm_storeu_pd(&P23[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(F55_idx_0))));
    r = _mm_loadu_pd(&b_LP[0]);
    _mm_storeu_pd(&b_LP[0], _mm_add_pd(r, _mm_mul_pd(r39, r6)));
    P01[2] += P45[0] * LP->rb[0].b_I[2];
    P23[2] += A12[2] * F55_idx_0;
    b_LP[2] += LP->rb[0].b_I[2] * W_d11_idx_0;
    P34[1] = LP->rb[0].m * (((d39 * W_d11_idx_2 - W_d11_idx_0 * d37) +
                             (F55_idx_1 * P45[2] - P45[0] * b_W_d11_tmp)) +
                            P56[1]);
    F55_idx_0 = F22_idx_1 + V_d33[1];
    r39 = _mm_loadu_pd(&LP->rb[0].b_I[3]);
    r = _mm_loadu_pd(&P01[0]);
    _mm_storeu_pd(&P01[0], _mm_add_pd(r, _mm_mul_pd(r39, r4)));
    r = _mm_loadu_pd(&A12[3]);
    r1 = _mm_loadu_pd(&P23[0]);
    _mm_storeu_pd(&P23[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(F55_idx_0))));
    r = _mm_loadu_pd(&b_LP[0]);
    _mm_storeu_pd(&b_LP[0], _mm_add_pd(r, _mm_mul_pd(r39, r7)));
    P01[2] += P45[1] * LP->rb[0].b_I[5];
    P23[2] += A12[5] * F55_idx_0;
    b_LP[2] += LP->rb[0].b_I[5] * W_d11_idx_1;
    P34[2] = LP->rb[0].m * (((W_d11_idx_0 * d38 - d39 * W_d11_idx_1) +
                             (P45[0] * W55_idx_1 - F55_idx_1 * P45[1])) +
                            P56[2]);
    F55_idx_0 = F22_idx_2 + V_d33[2];
    r39 = _mm_loadu_pd(&LP->rb[0].b_I[6]);
    r = _mm_loadu_pd(&P01[0]);
    _mm_storeu_pd(&P01[0], _mm_add_pd(r, _mm_mul_pd(r39, r5)));
    r = _mm_loadu_pd(&A12[6]);
    r1 = _mm_loadu_pd(&P23[0]);
    _mm_storeu_pd(&P23[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(F55_idx_0))));
    r = _mm_loadu_pd(&b_LP[0]);
    _mm_storeu_pd(&b_LP[0], _mm_add_pd(r, _mm_mul_pd(r39, r8)));
    P01[2] += P45[2] * LP->rb[0].b_I[8];
    P23[2] += A12[8] * F55_idx_0;
    b_LP[2] += LP->rb[0].b_I[8] * W_d11_idx_2;
    W11[0] = P45[1] * P01[2] - P01[1] * P45[2];
    W11[1] = P01[0] * P45[2] - P45[0] * P01[2];
    W11[2] = P45[0] * P01[1] - P01[0] * P45[1];
    W_d11_tmp = P12[0];
    d_SV_tmp = P12[1];
    c_SV_tmp = P12[2];
    r = _mm_loadu_pd(&b_LP[0]);
    r1 = _mm_loadu_pd(&W11[0]);
    r39 = _mm_add_pd(r, r1);
    r = _mm_loadu_pd(&A12[0]);
    r1 = _mm_mul_pd(r, _mm_set1_pd(W_d11_tmp));
    r = _mm_loadu_pd(&A12[3]);
    r = _mm_mul_pd(r, _mm_set1_pd(d_SV_tmp));
    r1 = _mm_add_pd(r1, r);
    r = _mm_loadu_pd(&A12[6]);
    r = _mm_mul_pd(r, _mm_set1_pd(c_SV_tmp));
    r = _mm_add_pd(r1, r);
    r = _mm_add_pd(r39, r);
    _mm_storeu_pd(&W22[0], r);
    W22[2] = (b_LP[2] + W11[2]) +
             ((A12[2] * W_d11_tmp + A12[5] * d_SV_tmp) + A12[8] * c_SV_tmp);
    qd_cal[0] = (((W22[0] + (d38 * P34[2] - P34[1] * d37)) +
                  (d2 * P23[2] - P23[1] * d3)) *
                     0.0 +
                 ((W22[1] + (P34[0] * d37 - d39 * P34[2])) +
                  (P23[0] * d3 - d1 * P23[2])) *
                     0.0) +
                ((W22[2] + (d39 * P34[1] - P34[0] * d38)) +
                 (d1 * P23[1] - P23[0] * d2));
    qd_cal[1] = (P12[0] * 0.0 + P12[1] * 0.0) + P12[2];
    qd_cal[2] = (W77[0] * 0.0 + W77[1] * 0.0) + W77[2];
    qd_cal[3] = (W_d77[0] * 0.0 + W_d77[1] * 0.0) + W_d77[2];
    qd_cal[4] = (F66[0] * 0.0 + F66[1] * 0.0) + F66[2];
    qd_cal[5] = (n66[0] * 0.0 + n66[1] * 0.0) + n66[2];
    qd_cal[6] = (n77[0] * 0.0 + n77[1] * 0.0) + n77[2];
    /*     %% ================= 结果存储 ================= */
    if (dyn_case == 0) {
      for (b_i = 0; b_i < 7; b_i++) {
        G[b_i] = qd_cal[b_i];
      }
    } else if (dyn_case + 1 <= 8) {
      for (b_i = 0; b_i < 7; b_i++) {
        M[b_i + 7 * (dyn_case - 1)] = qd_cal[b_i];
      }
    } else {
      for (b_i = 0; b_i < 7; b_i++) {
        C[b_i] = qd_cal[b_i];
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  /*  质量矩阵强制对称化 */
  for (b_i = 0; b_i < 7; b_i++) {
    for (dyn_case = 0; dyn_case < 7; dyn_case++) {
      R1_tmp = dyn_case + 7 * b_i;
      dv[R1_tmp] = 0.5 * (M[R1_tmp] + M[b_i + 7 * dyn_case]);
    }
  }
  memcpy(&M[0], &dv[0], 49U * sizeof(real_T));
}

emlrtCTX emlrtGetRootTLSGlobal(void)
{
  return emlrtRootTLSGlobal;
}

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData)
{
  omp_set_lock(&emlrtLockGlobal);
  emlrtCallLockeeFunction(aLockee, aTLS, aData);
  omp_unset_lock(&emlrtLockGlobal);
}

/* End of code generation (calc_MCG_0625.c) */
