/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * calc_aa_0318.c
 *
 * Code generation for function 'calc_aa_0318'
 *
 */

/* Include files */
#include "calc_aa_0318.h"
#include "calc_MCG_0625_data.h"
#include "calc_MCG_0625_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include <string.h>

/* Variable Definitions */
static emlrtRTEInfo
    h_emlrtRTEI =
        {
            7,              /* lineNo */
            9,              /* colNo */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m" /* pName
                                                                         */
};

static emlrtDCInfo
    c_emlrtDCI =
        {
            10,             /* lineNo */
            33,             /* colNo */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m", /* pName
                                                                          */
            1 /* checkKind */
};

static emlrtBCInfo
    j_emlrtBCI =
        {
            1,              /* iFirst */
            3,              /* iLast */
            10,             /* lineNo */
            33,             /* colNo */
            "LP.RBcp",      /* aName */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m", /* pName
                                                                          */
            0 /* checkKind */
};

static emlrtDCInfo
    d_emlrtDCI =
        {
            10,             /* lineNo */
            69,             /* colNo */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m", /* pName
                                                                          */
            1 /* checkKind */
};

static emlrtBCInfo
    k_emlrtBCI =
        {
            1,              /* iFirst */
            10,             /* iLast */
            10,             /* lineNo */
            69,             /* colNo */
            "LP.Rp",        /* aName */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m", /* pName
                                                                          */
            0 /* checkKind */
};

static emlrtDCInfo
    e_emlrtDCI =
        {
            12,             /* lineNo */
            33,             /* colNo */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m", /* pName
                                                                          */
            1 /* checkKind */
};

static emlrtBCInfo
    l_emlrtBCI =
        {
            1,              /* iFirst */
            3,              /* iLast */
            12,             /* lineNo */
            33,             /* colNo */
            "LP.RBcp",      /* aName */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m", /* pName
                                                                          */
            0 /* checkKind */
};

static emlrtDCInfo
    f_emlrtDCI =
        {
            12,             /* lineNo */
            74,             /* colNo */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m", /* pName
                                                                          */
            1 /* checkKind */
};

static emlrtBCInfo
    m_emlrtBCI =
        {
            1,              /* iFirst */
            10,             /* iLast */
            12,             /* lineNo */
            74,             /* colNo */
            "LP.T_L",       /* aName */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m", /* pName
                                                                          */
            0 /* checkKind */
};

static emlrtDCInfo
    g_emlrtDCI =
        {
            20,             /* lineNo */
            32,             /* colNo */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m", /* pName
                                                                          */
            1 /* checkKind */
};

static emlrtBCInfo
    n_emlrtBCI =
        {
            1,              /* iFirst */
            10,             /* iLast */
            20,             /* lineNo */
            32,             /* colNo */
            "LP.Rd",        /* aName */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m", /* pName
                                                                          */
            0 /* checkKind */
};

static emlrtDCInfo
    h_emlrtDCI =
        {
            20,             /* lineNo */
            81,             /* colNo */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m", /* pName
                                                                          */
            1 /* checkKind */
};

static emlrtBCInfo
    o_emlrtBCI =
        {
            1,              /* iFirst */
            10,             /* iLast */
            20,             /* lineNo */
            81,             /* colNo */
            "LP.Rp",        /* aName */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m", /* pName
                                                                          */
            0 /* checkKind */
};

static emlrtDCInfo
    i_emlrtDCI =
        {
            22,             /* lineNo */
            32,             /* colNo */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m", /* pName
                                                                          */
            1 /* checkKind */
};

static emlrtBCInfo
    p_emlrtBCI =
        {
            1,              /* iFirst */
            10,             /* iLast */
            22,             /* lineNo */
            32,             /* colNo */
            "LP.Rd",        /* aName */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m", /* pName
                                                                          */
            0 /* checkKind */
};

static emlrtDCInfo
    j_emlrtDCI =
        {
            22,             /* lineNo */
            86,             /* colNo */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m", /* pName
                                                                          */
            1 /* checkKind */
};

static emlrtBCInfo
    q_emlrtBCI =
        {
            1,              /* iFirst */
            10,             /* iLast */
            22,             /* lineNo */
            86,             /* colNo */
            "LP.T_L",       /* aName */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m", /* pName
                                                                          */
            0 /* checkKind */
};

static emlrtDCInfo
    k_emlrtDCI =
        {
            28,             /* lineNo */
            48,             /* colNo */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m", /* pName
                                                                          */
            1 /* checkKind */
};

static emlrtBCInfo
    r_emlrtBCI =
        {
            1,              /* iFirst */
            10,             /* iLast */
            28,             /* lineNo */
            48,             /* colNo */
            "LP.Rp",        /* aName */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m", /* pName
                                                                          */
            0 /* checkKind */
};

static emlrtDCInfo
    l_emlrtDCI =
        {
            30,             /* lineNo */
            53,             /* colNo */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m", /* pName
                                                                          */
            1 /* checkKind */
};

static emlrtBCInfo
    s_emlrtBCI =
        {
            1,              /* iFirst */
            10,             /* iLast */
            30,             /* lineNo */
            53,             /* colNo */
            "LP.T_L",       /* aName */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m", /* pName
                                                                          */
            0 /* checkKind */
};

static emlrtBCInfo
    t_emlrtBCI =
        {
            1,              /* iFirst */
            11,             /* iLast */
            8,              /* lineNo */
            14,             /* colNo */
            "LP.BB",        /* aName */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m", /* pName
                                                                          */
            0 /* checkKind */
};

static emlrtBCInfo
    u_emlrtBCI =
        {
            1,              /* iFirst */
            11,             /* iLast */
            15,             /* lineNo */
            39,             /* colNo */
            "LP.J_type",    /* aName */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m", /* pName
                                                                          */
            0 /* checkKind */
};

static emlrtDCInfo
    m_emlrtDCI =
        {
            15,             /* lineNo */
            39,             /* colNo */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m", /* pName
                                                                          */
            1 /* checkKind */
};

static emlrtBCInfo
    v_emlrtBCI =
        {
            1,              /* iFirst */
            11,             /* iLast */
            25,             /* lineNo */
            39,             /* colNo */
            "LP.J_type",    /* aName */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m", /* pName
                                                                          */
            0 /* checkKind */
};

static emlrtDCInfo
    n_emlrtDCI =
        {
            20,             /* lineNo */
            42,             /* colNo */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m", /* pName
                                                                          */
            1 /* checkKind */
};

static emlrtDCInfo
    o_emlrtDCI =
        {
            22,             /* lineNo */
            42,             /* colNo */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m", /* pName
                                                                          */
            1 /* checkKind */
};

static emlrtBCInfo
    w_emlrtBCI =
        {
            1,              /* iFirst */
            33,             /* iLast */
            24,             /* lineNo */
            38,             /* colNo */
            "SV.AA",        /* aName */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m", /* pName
                                                                          */
            0 /* checkKind */
};

static emlrtDCInfo
    p_emlrtDCI =
        {
            24,             /* lineNo */
            38,             /* colNo */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m", /* pName
                                                                          */
            1 /* checkKind */
};

static emlrtBCInfo
    x_emlrtBCI =
        {
            1,              /* iFirst */
            33,             /* iLast */
            32,             /* lineNo */
            38,             /* colNo */
            "SV.AA",        /* aName */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m", /* pName
                                                                          */
            0 /* checkKind */
};

static emlrtDCInfo
    q_emlrtDCI =
        {
            32,             /* lineNo */
            38,             /* colNo */
            "calc_aa_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_aa_0318.m", /* pName
                                                                          */
            1 /* checkKind */
};

/* Function Definitions */
void calc_aa_0318(const emlrtStack *sp, const real_T LP_module[11],
                  real_T LP_num_q, const real_T LP_align[11],
                  const real_T LP_BB[11], const real_T LP_Rp[90],
                  const real_T LP_Rd[90], const real_T LP_RBcp[27],
                  const real_T LP_T_L[160], const char_T LP_J_type[11],
                  const real_T LP_SN[11], struct2_T *SV)
{
  static const int8_T iv[3] = {0, 0, 1};
  real_T A_0_i[9];
  real_T A_BB_i[9];
  real_T b_LP_RBcp[9];
  real_T b_LP_Rd[9];
  real_T f_Cz_tmp[9];
  int32_T b_i;
  int32_T i;
  int32_T i2;
  int32_T i3;
  /*  正运动学递推：计算所有模块相对于基座标系的旋转矩阵 */
  memset(&A_BB_i[0], 0, 9U * sizeof(real_T));
  i = (int32_T)LP_num_q;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, LP_num_q, mxDOUBLE_CLASS,
                                (int32_T)LP_num_q, &h_emlrtRTEI,
                                (emlrtConstCTX)sp);
  for (b_i = 0; b_i < i; b_i++) {
    real_T d;
    if (((int32_T)((uint32_T)b_i + 1U) < 1) ||
        ((int32_T)((uint32_T)b_i + 1U) > 11)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)b_i + 1U), 1, 11,
                                    &t_emlrtBCI, (emlrtConstCTX)sp);
    }
    d = LP_BB[b_i];
    if (d == 0.0) {
      int32_T A_0_i_tmp;
      int32_T Cz_tmp_tmp;
      if (LP_J_type[b_i] == 'R') {
        __m128d r;
        __m128d r1;
        real_T Cz_tmp;
        real_T b_Cz_tmp;
        real_T c_Cz_tmp;
        real_T d_Cz_tmp;
        real_T e_Cz_tmp;
        real_T g_Cz_tmp;
        int32_T i1;
        Cz_tmp = LP_SN[b_i];
        if (Cz_tmp != (int32_T)muDoubleScalarFloor(Cz_tmp)) {
          emlrtIntegerCheckR2012b(Cz_tmp, &c_emlrtDCI, (emlrtConstCTX)sp);
        }
        if (((int32_T)Cz_tmp < 1) || ((int32_T)Cz_tmp > 3)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)Cz_tmp, 1, 3, &j_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        /*  计算绕z轴旋转的余弦矩阵 */
        b_Cz_tmp = LP_align[b_i];
        d_Cz_tmp = muDoubleScalarSin(b_Cz_tmp);
        e_Cz_tmp = muDoubleScalarCos(b_Cz_tmp);
        if (LP_module[b_i] != (int32_T)muDoubleScalarFloor(LP_module[b_i])) {
          emlrtIntegerCheckR2012b(LP_module[b_i], &d_emlrtDCI,
                                  (emlrtConstCTX)sp);
        }
        i1 = (int32_T)LP_module[b_i];
        if ((i1 < 1) || (i1 > 10)) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, 10, &k_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        /*  计算绕z轴旋转的余弦矩阵 */
        b_Cz_tmp = SV->q[b_i];
        g_Cz_tmp = muDoubleScalarSin(b_Cz_tmp);
        c_Cz_tmp = muDoubleScalarCos(b_Cz_tmp);
        f_Cz_tmp[0] = e_Cz_tmp;
        f_Cz_tmp[3] = -d_Cz_tmp;
        f_Cz_tmp[6] = 0.0;
        f_Cz_tmp[1] = d_Cz_tmp;
        f_Cz_tmp[4] = e_Cz_tmp;
        f_Cz_tmp[7] = 0.0;
        memset(&b_LP_Rd[0], 0, 9U * sizeof(real_T));
        A_0_i_tmp = 9 * ((int32_T)Cz_tmp - 1);
        for (i2 = 0; i2 < 3; i2++) {
          int32_T b_Cz_tmp_tmp;
          Cz_tmp_tmp = 3 * i2 + 2;
          b_Cz_tmp_tmp = iv[i2];
          f_Cz_tmp[Cz_tmp_tmp] = b_Cz_tmp_tmp;
          b_Cz_tmp = f_Cz_tmp[3 * i2];
          r = _mm_loadu_pd(&b_LP_Rd[3 * i2]);
          _mm_storeu_pd(
              &b_LP_Rd[3 * i2],
              _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&LP_RBcp[A_0_i_tmp]),
                                       _mm_set1_pd(b_Cz_tmp))));
          b_LP_Rd[Cz_tmp_tmp] += LP_RBcp[A_0_i_tmp + 2] * b_Cz_tmp;
          b_Cz_tmp = f_Cz_tmp[3 * i2 + 1];
          r = _mm_loadu_pd(&b_LP_Rd[3 * i2]);
          _mm_storeu_pd(
              &b_LP_Rd[3 * i2],
              _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&LP_RBcp[A_0_i_tmp + 3]),
                                       _mm_set1_pd(b_Cz_tmp))));
          b_LP_Rd[Cz_tmp_tmp] += LP_RBcp[A_0_i_tmp + 5] * b_Cz_tmp;
          r = _mm_loadu_pd(&b_LP_Rd[3 * i2]);
          _mm_storeu_pd(
              &b_LP_Rd[3 * i2],
              _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&LP_RBcp[A_0_i_tmp + 6]),
                                       _mm_set1_pd(b_Cz_tmp_tmp))));
          b_LP_Rd[Cz_tmp_tmp] += LP_RBcp[A_0_i_tmp + 8] * (real_T)b_Cz_tmp_tmp;
        }
        memset(&b_LP_RBcp[0], 0, 9U * sizeof(real_T));
        f_Cz_tmp[0] = c_Cz_tmp;
        f_Cz_tmp[3] = -g_Cz_tmp;
        f_Cz_tmp[6] = 0.0;
        f_Cz_tmp[1] = g_Cz_tmp;
        f_Cz_tmp[4] = c_Cz_tmp;
        f_Cz_tmp[7] = 0.0;
        for (i2 = 0; i2 < 3; i2++) {
          A_0_i_tmp = 3 * i2 + 9 * (i1 - 1);
          b_Cz_tmp = LP_Rp[A_0_i_tmp];
          r = _mm_loadu_pd(&b_LP_Rd[0]);
          r1 = _mm_loadu_pd(&b_LP_RBcp[3 * i2]);
          _mm_storeu_pd(&b_LP_RBcp[3 * i2],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
          Cz_tmp_tmp = 3 * i2 + 2;
          b_LP_RBcp[Cz_tmp_tmp] += b_LP_Rd[2] * b_Cz_tmp;
          b_Cz_tmp = LP_Rp[A_0_i_tmp + 1];
          r = _mm_loadu_pd(&b_LP_Rd[3]);
          r1 = _mm_loadu_pd(&b_LP_RBcp[3 * i2]);
          _mm_storeu_pd(&b_LP_RBcp[3 * i2],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
          b_LP_RBcp[Cz_tmp_tmp] += b_LP_Rd[5] * b_Cz_tmp;
          b_Cz_tmp = LP_Rp[A_0_i_tmp + 2];
          r = _mm_loadu_pd(&b_LP_Rd[6]);
          r1 = _mm_loadu_pd(&b_LP_RBcp[3 * i2]);
          _mm_storeu_pd(&b_LP_RBcp[3 * i2],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
          b_LP_RBcp[Cz_tmp_tmp] += b_LP_Rd[8] * b_Cz_tmp;
          f_Cz_tmp[Cz_tmp_tmp] = iv[i2];
        }
        memset(&A_0_i[0], 0, 9U * sizeof(real_T));
        for (i2 = 0; i2 < 3; i2++) {
          b_Cz_tmp = f_Cz_tmp[3 * i2];
          r = _mm_loadu_pd(&b_LP_RBcp[0]);
          r1 = _mm_loadu_pd(&A_0_i[3 * i2]);
          _mm_storeu_pd(&A_0_i[3 * i2],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
          A_0_i_tmp = 3 * i2 + 2;
          A_0_i[A_0_i_tmp] += b_LP_RBcp[2] * b_Cz_tmp;
          b_Cz_tmp = f_Cz_tmp[3 * i2 + 1];
          r = _mm_loadu_pd(&b_LP_RBcp[3]);
          r1 = _mm_loadu_pd(&A_0_i[3 * i2]);
          _mm_storeu_pd(&A_0_i[3 * i2],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
          A_0_i[A_0_i_tmp] += b_LP_RBcp[5] * b_Cz_tmp;
          b_Cz_tmp = f_Cz_tmp[A_0_i_tmp];
          r = _mm_loadu_pd(&b_LP_RBcp[6]);
          r1 = _mm_loadu_pd(&A_0_i[3 * i2]);
          _mm_storeu_pd(&A_0_i[3 * i2],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
          A_0_i[A_0_i_tmp] += b_LP_RBcp[8] * b_Cz_tmp;
        }
      } else {
        __m128d r;
        real_T Cz_tmp;
        real_T b_Cz_tmp;
        real_T c_Cz_tmp;
        int32_T i1;
        Cz_tmp = LP_SN[b_i];
        if (Cz_tmp != (int32_T)muDoubleScalarFloor(Cz_tmp)) {
          emlrtIntegerCheckR2012b(Cz_tmp, &e_emlrtDCI, (emlrtConstCTX)sp);
        }
        if (((int32_T)Cz_tmp < 1) || ((int32_T)Cz_tmp > 3)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)Cz_tmp, 1, 3, &l_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        /*  计算绕z轴旋转的余弦矩阵 */
        b_Cz_tmp = LP_align[b_i];
        c_Cz_tmp = muDoubleScalarSin(b_Cz_tmp);
        b_Cz_tmp = muDoubleScalarCos(b_Cz_tmp);
        if (LP_module[b_i] != (int32_T)muDoubleScalarFloor(LP_module[b_i])) {
          emlrtIntegerCheckR2012b(LP_module[b_i], &f_emlrtDCI,
                                  (emlrtConstCTX)sp);
        }
        i1 = (int32_T)LP_module[b_i];
        if ((i1 < 1) || (i1 > 10)) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, 10, &m_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        f_Cz_tmp[0] = b_Cz_tmp;
        f_Cz_tmp[3] = -c_Cz_tmp;
        f_Cz_tmp[6] = 0.0;
        f_Cz_tmp[1] = c_Cz_tmp;
        f_Cz_tmp[4] = b_Cz_tmp;
        f_Cz_tmp[7] = 0.0;
        memset(&b_LP_Rd[0], 0, 9U * sizeof(real_T));
        A_0_i_tmp = 9 * ((int32_T)Cz_tmp - 1);
        for (i3 = 0; i3 < 3; i3++) {
          int32_T b_Cz_tmp_tmp;
          b_Cz_tmp_tmp = 3 * i3 + 2;
          Cz_tmp_tmp = iv[i3];
          f_Cz_tmp[b_Cz_tmp_tmp] = Cz_tmp_tmp;
          b_Cz_tmp = f_Cz_tmp[3 * i3];
          r = _mm_loadu_pd(&b_LP_Rd[3 * i3]);
          _mm_storeu_pd(
              &b_LP_Rd[3 * i3],
              _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&LP_RBcp[A_0_i_tmp]),
                                       _mm_set1_pd(b_Cz_tmp))));
          b_LP_Rd[b_Cz_tmp_tmp] += LP_RBcp[A_0_i_tmp + 2] * b_Cz_tmp;
          b_Cz_tmp = f_Cz_tmp[3 * i3 + 1];
          r = _mm_loadu_pd(&b_LP_Rd[3 * i3]);
          _mm_storeu_pd(
              &b_LP_Rd[3 * i3],
              _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&LP_RBcp[A_0_i_tmp + 3]),
                                       _mm_set1_pd(b_Cz_tmp))));
          b_LP_Rd[b_Cz_tmp_tmp] += LP_RBcp[A_0_i_tmp + 5] * b_Cz_tmp;
          r = _mm_loadu_pd(&b_LP_Rd[3 * i3]);
          _mm_storeu_pd(
              &b_LP_Rd[3 * i3],
              _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&LP_RBcp[A_0_i_tmp + 6]),
                                       _mm_set1_pd(Cz_tmp_tmp))));
          b_LP_Rd[b_Cz_tmp_tmp] += LP_RBcp[A_0_i_tmp + 8] * (real_T)Cz_tmp_tmp;
        }
        memset(&A_0_i[0], 0, 9U * sizeof(real_T));
        for (i2 = 0; i2 < 3; i2++) {
          __m128d r1;
          A_0_i_tmp = (i2 << 2) + ((i1 - 1) << 4);
          b_Cz_tmp = LP_T_L[A_0_i_tmp];
          r = _mm_loadu_pd(&b_LP_Rd[0]);
          r1 = _mm_loadu_pd(&A_0_i[3 * i2]);
          _mm_storeu_pd(&A_0_i[3 * i2],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
          Cz_tmp_tmp = 3 * i2 + 2;
          A_0_i[Cz_tmp_tmp] += b_LP_Rd[2] * b_Cz_tmp;
          b_Cz_tmp = LP_T_L[A_0_i_tmp + 1];
          r = _mm_loadu_pd(&b_LP_Rd[3]);
          r1 = _mm_loadu_pd(&A_0_i[3 * i2]);
          _mm_storeu_pd(&A_0_i[3 * i2],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
          A_0_i[Cz_tmp_tmp] += b_LP_Rd[5] * b_Cz_tmp;
          b_Cz_tmp = LP_T_L[A_0_i_tmp + 2];
          r = _mm_loadu_pd(&b_LP_Rd[6]);
          r1 = _mm_loadu_pd(&A_0_i[3 * i2]);
          _mm_storeu_pd(&A_0_i[3 * i2],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
          A_0_i[Cz_tmp_tmp] += b_LP_Rd[8] * b_Cz_tmp;
        }
      }
      A_0_i_tmp = (b_i + 1) * 3 - 3;
      for (i2 = 0; i2 < 3; i2++) {
        for (i3 = 0; i3 < 3; i3++) {
          Cz_tmp_tmp = i2 + 3 * (i3 + A_0_i_tmp);
          SV->AA[Cz_tmp_tmp] = 0.0;
          SV->AA[Cz_tmp_tmp] += SV->A0[i2] * A_0_i[3 * i3];
          SV->AA[Cz_tmp_tmp] += SV->A0[i2 + 3] * A_0_i[3 * i3 + 1];
          SV->AA[Cz_tmp_tmp] += SV->A0[i2 + 6] * A_0_i[3 * i3 + 2];
        }
      }
    } else {
      __m128d r;
      __m128d r1;
      real_T b_Cz_tmp;
      real_T c_Cz_tmp;
      real_T d_Cz_tmp;
      real_T e_Cz_tmp;
      real_T g_Cz_tmp;
      int32_T A_0_i_tmp;
      int32_T Cz_tmp_tmp;
      int32_T b_Cz_tmp_tmp;
      boolean_T b;
      boolean_T guard1;
      guard1 = false;
      if (d != 0.0) {
        A_0_i_tmp = (int32_T)muDoubleScalarFloor(d);
        if (d != A_0_i_tmp) {
          emlrtIntegerCheckR2012b(d, &m_emlrtDCI, (emlrtConstCTX)sp);
        }
        Cz_tmp_tmp = (int32_T)d;
        if ((Cz_tmp_tmp < 1) || (Cz_tmp_tmp > 11)) {
          emlrtDynamicBoundsCheckR2012b(Cz_tmp_tmp, 1, 11, &u_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (LP_J_type[Cz_tmp_tmp - 1] == 'R') {
          /*  LP.BB(i) 是第 i 个模块的父节点编号。纯串联时 parent_idx == i-1，
           */
          /*  但树/分支拓扑中子节点可以接到任意已存在父节点，不能假设父节点就是前一个模块。
           */
          if (LP_J_type[b_i] == 'R') {
            real_T Cz_tmp;
            int32_T i1;
            if (Cz_tmp_tmp != A_0_i_tmp) {
              emlrtIntegerCheckR2012b(d, &n_emlrtDCI, (emlrtConstCTX)sp);
            }
            d_Cz_tmp = LP_module[Cz_tmp_tmp - 1];
            if (d_Cz_tmp != (int32_T)muDoubleScalarFloor(d_Cz_tmp)) {
              emlrtIntegerCheckR2012b(d_Cz_tmp, &g_emlrtDCI, (emlrtConstCTX)sp);
            }
            if (((int32_T)d_Cz_tmp < 1) || ((int32_T)d_Cz_tmp > 10)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d_Cz_tmp, 1, 10,
                                            &n_emlrtBCI, (emlrtConstCTX)sp);
            }
            /*  计算绕z轴旋转的余弦矩阵 */
            b_Cz_tmp = LP_align[b_i];
            g_Cz_tmp = muDoubleScalarSin(b_Cz_tmp);
            e_Cz_tmp = muDoubleScalarCos(b_Cz_tmp);
            if (LP_module[b_i] !=
                (int32_T)muDoubleScalarFloor(LP_module[b_i])) {
              emlrtIntegerCheckR2012b(LP_module[b_i], &h_emlrtDCI,
                                      (emlrtConstCTX)sp);
            }
            i1 = (int32_T)LP_module[b_i];
            if ((i1 < 1) || (i1 > 10)) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, 10, &o_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            /*  计算绕z轴旋转的余弦矩阵 */
            b_Cz_tmp = SV->q[b_i];
            Cz_tmp = muDoubleScalarSin(b_Cz_tmp);
            c_Cz_tmp = muDoubleScalarCos(b_Cz_tmp);
            f_Cz_tmp[0] = e_Cz_tmp;
            f_Cz_tmp[3] = -g_Cz_tmp;
            f_Cz_tmp[6] = 0.0;
            f_Cz_tmp[1] = g_Cz_tmp;
            f_Cz_tmp[4] = e_Cz_tmp;
            f_Cz_tmp[7] = 0.0;
            memset(&A_0_i[0], 0, 9U * sizeof(real_T));
            A_0_i_tmp = 9 * ((int32_T)d_Cz_tmp - 1);
            for (i3 = 0; i3 < 3; i3++) {
              Cz_tmp_tmp = 3 * i3 + 2;
              b_Cz_tmp_tmp = iv[i3];
              f_Cz_tmp[Cz_tmp_tmp] = b_Cz_tmp_tmp;
              b_Cz_tmp = f_Cz_tmp[3 * i3];
              r = _mm_loadu_pd(&A_0_i[3 * i3]);
              _mm_storeu_pd(
                  &A_0_i[3 * i3],
                  _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&LP_Rd[A_0_i_tmp]),
                                           _mm_set1_pd(b_Cz_tmp))));
              A_0_i[Cz_tmp_tmp] += LP_Rd[A_0_i_tmp + 2] * b_Cz_tmp;
              b_Cz_tmp = f_Cz_tmp[3 * i3 + 1];
              r = _mm_loadu_pd(&A_0_i[3 * i3]);
              _mm_storeu_pd(
                  &A_0_i[3 * i3],
                  _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&LP_Rd[A_0_i_tmp + 3]),
                                           _mm_set1_pd(b_Cz_tmp))));
              A_0_i[Cz_tmp_tmp] += LP_Rd[A_0_i_tmp + 5] * b_Cz_tmp;
              r = _mm_loadu_pd(&A_0_i[3 * i3]);
              _mm_storeu_pd(
                  &A_0_i[3 * i3],
                  _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&LP_Rd[A_0_i_tmp + 6]),
                                           _mm_set1_pd(b_Cz_tmp_tmp))));
              A_0_i[Cz_tmp_tmp] += LP_Rd[A_0_i_tmp + 8] * (real_T)b_Cz_tmp_tmp;
            }
            memset(&b_LP_Rd[0], 0, 9U * sizeof(real_T));
            f_Cz_tmp[0] = c_Cz_tmp;
            f_Cz_tmp[3] = -Cz_tmp;
            f_Cz_tmp[6] = 0.0;
            f_Cz_tmp[1] = Cz_tmp;
            f_Cz_tmp[4] = c_Cz_tmp;
            f_Cz_tmp[7] = 0.0;
            for (i2 = 0; i2 < 3; i2++) {
              A_0_i_tmp = 3 * i2 + 9 * (i1 - 1);
              b_Cz_tmp = LP_Rp[A_0_i_tmp];
              r = _mm_loadu_pd(&A_0_i[0]);
              r1 = _mm_loadu_pd(&b_LP_Rd[3 * i2]);
              _mm_storeu_pd(
                  &b_LP_Rd[3 * i2],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              Cz_tmp_tmp = 3 * i2 + 2;
              b_LP_Rd[Cz_tmp_tmp] += A_0_i[2] * b_Cz_tmp;
              b_Cz_tmp = LP_Rp[A_0_i_tmp + 1];
              r = _mm_loadu_pd(&A_0_i[3]);
              r1 = _mm_loadu_pd(&b_LP_Rd[3 * i2]);
              _mm_storeu_pd(
                  &b_LP_Rd[3 * i2],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              b_LP_Rd[Cz_tmp_tmp] += A_0_i[5] * b_Cz_tmp;
              b_Cz_tmp = LP_Rp[A_0_i_tmp + 2];
              r = _mm_loadu_pd(&A_0_i[6]);
              r1 = _mm_loadu_pd(&b_LP_Rd[3 * i2]);
              _mm_storeu_pd(
                  &b_LP_Rd[3 * i2],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              b_LP_Rd[Cz_tmp_tmp] += A_0_i[8] * b_Cz_tmp;
              f_Cz_tmp[Cz_tmp_tmp] = iv[i2];
            }
            memset(&A_BB_i[0], 0, 9U * sizeof(real_T));
            for (i2 = 0; i2 < 3; i2++) {
              b_Cz_tmp = f_Cz_tmp[3 * i2];
              r = _mm_loadu_pd(&b_LP_Rd[0]);
              r1 = _mm_loadu_pd(&A_BB_i[3 * i2]);
              _mm_storeu_pd(
                  &A_BB_i[3 * i2],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              A_0_i_tmp = 3 * i2 + 2;
              A_BB_i[A_0_i_tmp] += b_LP_Rd[2] * b_Cz_tmp;
              b_Cz_tmp = f_Cz_tmp[3 * i2 + 1];
              r = _mm_loadu_pd(&b_LP_Rd[3]);
              r1 = _mm_loadu_pd(&A_BB_i[3 * i2]);
              _mm_storeu_pd(
                  &A_BB_i[3 * i2],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              A_BB_i[A_0_i_tmp] += b_LP_Rd[5] * b_Cz_tmp;
              b_Cz_tmp = f_Cz_tmp[A_0_i_tmp];
              r = _mm_loadu_pd(&b_LP_Rd[6]);
              r1 = _mm_loadu_pd(&A_BB_i[3 * i2]);
              _mm_storeu_pd(
                  &A_BB_i[3 * i2],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              A_BB_i[A_0_i_tmp] += b_LP_Rd[8] * b_Cz_tmp;
            }
          } else if (LP_J_type[b_i] == 'L') {
            int32_T i1;
            if (Cz_tmp_tmp != A_0_i_tmp) {
              emlrtIntegerCheckR2012b(d, &o_emlrtDCI, (emlrtConstCTX)sp);
            }
            e_Cz_tmp = LP_module[Cz_tmp_tmp - 1];
            if (e_Cz_tmp != (int32_T)muDoubleScalarFloor(e_Cz_tmp)) {
              emlrtIntegerCheckR2012b(e_Cz_tmp, &i_emlrtDCI, (emlrtConstCTX)sp);
            }
            if (((int32_T)e_Cz_tmp < 1) || ((int32_T)e_Cz_tmp > 10)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)e_Cz_tmp, 1, 10,
                                            &p_emlrtBCI, (emlrtConstCTX)sp);
            }
            /*  计算绕z轴旋转的余弦矩阵 */
            b_Cz_tmp = LP_align[b_i];
            c_Cz_tmp = muDoubleScalarSin(b_Cz_tmp);
            b_Cz_tmp = muDoubleScalarCos(b_Cz_tmp);
            if (LP_module[b_i] !=
                (int32_T)muDoubleScalarFloor(LP_module[b_i])) {
              emlrtIntegerCheckR2012b(LP_module[b_i], &j_emlrtDCI,
                                      (emlrtConstCTX)sp);
            }
            i1 = (int32_T)LP_module[b_i];
            if ((i1 < 1) || (i1 > 10)) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, 10, &q_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            f_Cz_tmp[0] = b_Cz_tmp;
            f_Cz_tmp[3] = -c_Cz_tmp;
            f_Cz_tmp[6] = 0.0;
            f_Cz_tmp[1] = c_Cz_tmp;
            f_Cz_tmp[4] = b_Cz_tmp;
            f_Cz_tmp[7] = 0.0;
            memset(&A_0_i[0], 0, 9U * sizeof(real_T));
            A_0_i_tmp = 9 * ((int32_T)e_Cz_tmp - 1);
            for (i3 = 0; i3 < 3; i3++) {
              Cz_tmp_tmp = 3 * i3 + 2;
              b_Cz_tmp_tmp = iv[i3];
              f_Cz_tmp[Cz_tmp_tmp] = b_Cz_tmp_tmp;
              b_Cz_tmp = f_Cz_tmp[3 * i3];
              r = _mm_loadu_pd(&A_0_i[3 * i3]);
              _mm_storeu_pd(
                  &A_0_i[3 * i3],
                  _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&LP_Rd[A_0_i_tmp]),
                                           _mm_set1_pd(b_Cz_tmp))));
              A_0_i[Cz_tmp_tmp] += LP_Rd[A_0_i_tmp + 2] * b_Cz_tmp;
              b_Cz_tmp = f_Cz_tmp[3 * i3 + 1];
              r = _mm_loadu_pd(&A_0_i[3 * i3]);
              _mm_storeu_pd(
                  &A_0_i[3 * i3],
                  _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&LP_Rd[A_0_i_tmp + 3]),
                                           _mm_set1_pd(b_Cz_tmp))));
              A_0_i[Cz_tmp_tmp] += LP_Rd[A_0_i_tmp + 5] * b_Cz_tmp;
              r = _mm_loadu_pd(&A_0_i[3 * i3]);
              _mm_storeu_pd(
                  &A_0_i[3 * i3],
                  _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&LP_Rd[A_0_i_tmp + 6]),
                                           _mm_set1_pd(b_Cz_tmp_tmp))));
              A_0_i[Cz_tmp_tmp] += LP_Rd[A_0_i_tmp + 8] * (real_T)b_Cz_tmp_tmp;
            }
            memset(&A_BB_i[0], 0, 9U * sizeof(real_T));
            for (i2 = 0; i2 < 3; i2++) {
              A_0_i_tmp = (i2 << 2) + ((i1 - 1) << 4);
              b_Cz_tmp = LP_T_L[A_0_i_tmp];
              r = _mm_loadu_pd(&A_0_i[0]);
              r1 = _mm_loadu_pd(&A_BB_i[3 * i2]);
              _mm_storeu_pd(
                  &A_BB_i[3 * i2],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              Cz_tmp_tmp = 3 * i2 + 2;
              A_BB_i[Cz_tmp_tmp] += A_0_i[2] * b_Cz_tmp;
              b_Cz_tmp = LP_T_L[A_0_i_tmp + 1];
              r = _mm_loadu_pd(&A_0_i[3]);
              r1 = _mm_loadu_pd(&A_BB_i[3 * i2]);
              _mm_storeu_pd(
                  &A_BB_i[3 * i2],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              A_BB_i[Cz_tmp_tmp] += A_0_i[5] * b_Cz_tmp;
              b_Cz_tmp = LP_T_L[A_0_i_tmp + 2];
              r = _mm_loadu_pd(&A_0_i[6]);
              r1 = _mm_loadu_pd(&A_BB_i[3 * i2]);
              _mm_storeu_pd(
                  &A_BB_i[3 * i2],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              A_BB_i[Cz_tmp_tmp] += A_0_i[8] * b_Cz_tmp;
            }
          }
          b_Cz_tmp = d * 3.0 - 2.0;
          for (i2 = 0; i2 < 3; i2++) {
            e_Cz_tmp = b_Cz_tmp + (real_T)i2;
            if (e_Cz_tmp != (int32_T)e_Cz_tmp) {
              emlrtIntegerCheckR2012b(e_Cz_tmp, &p_emlrtDCI, (emlrtConstCTX)sp);
            }
            b = ((e_Cz_tmp < 1.0) || (e_Cz_tmp > 33.0));
            if (b) {
              emlrtDynamicBoundsCheckR2012b((int32_T)e_Cz_tmp, 1, 33,
                                            &w_emlrtBCI, (emlrtConstCTX)sp);
            }
            A_0_i_tmp = (int32_T)e_Cz_tmp;
            Cz_tmp_tmp = 3 * (A_0_i_tmp - 1);
            A_0_i[3 * i2] = SV->AA[Cz_tmp_tmp];
            if (A_0_i_tmp != (int32_T)e_Cz_tmp) {
              emlrtIntegerCheckR2012b(e_Cz_tmp, &p_emlrtDCI, (emlrtConstCTX)sp);
            }
            if (b) {
              emlrtDynamicBoundsCheckR2012b(A_0_i_tmp, 1, 33, &w_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            A_0_i[3 * i2 + 1] = SV->AA[Cz_tmp_tmp + 1];
            if (A_0_i_tmp != (int32_T)e_Cz_tmp) {
              emlrtIntegerCheckR2012b(e_Cz_tmp, &p_emlrtDCI, (emlrtConstCTX)sp);
            }
            if (b) {
              emlrtDynamicBoundsCheckR2012b(A_0_i_tmp, 1, 33, &w_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            A_0_i[3 * i2 + 2] = SV->AA[Cz_tmp_tmp + 2];
          }
          A_0_i_tmp = (b_i + 1) * 3 - 3;
          for (i2 = 0; i2 < 3; i2++) {
            e_Cz_tmp = A_0_i[i2];
            b_Cz_tmp = A_0_i[i2 + 3];
            c_Cz_tmp = A_0_i[i2 + 6];
            for (i3 = 0; i3 < 3; i3++) {
              Cz_tmp_tmp = i2 + 3 * (i3 + A_0_i_tmp);
              SV->AA[Cz_tmp_tmp] = 0.0;
              SV->AA[Cz_tmp_tmp] += e_Cz_tmp * A_BB_i[3 * i3];
              SV->AA[Cz_tmp_tmp] += b_Cz_tmp * A_BB_i[3 * i3 + 1];
              SV->AA[Cz_tmp_tmp] += c_Cz_tmp * A_BB_i[3 * i3 + 2];
            }
          }
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
      if (guard1 && (d != 0.0)) {
        A_0_i_tmp = (int32_T)d;
        if ((A_0_i_tmp < 1) || (A_0_i_tmp > 11)) {
          emlrtDynamicBoundsCheckR2012b(A_0_i_tmp, 1, 11, &v_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (LP_J_type[A_0_i_tmp - 1] == 'L') {
          if (LP_J_type[b_i] == 'R') {
            /*  计算绕z轴旋转的余弦矩阵 */
            e_Cz_tmp = LP_align[b_i];
            d_Cz_tmp = muDoubleScalarSin(e_Cz_tmp);
            e_Cz_tmp = muDoubleScalarCos(e_Cz_tmp);
            if (LP_module[b_i] !=
                (int32_T)muDoubleScalarFloor(LP_module[b_i])) {
              emlrtIntegerCheckR2012b(LP_module[b_i], &k_emlrtDCI,
                                      (emlrtConstCTX)sp);
            }
            A_0_i_tmp = (int32_T)LP_module[b_i];
            if ((A_0_i_tmp < 1) || (A_0_i_tmp > 10)) {
              emlrtDynamicBoundsCheckR2012b(A_0_i_tmp, 1, 10, &r_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            /*  计算绕z轴旋转的余弦矩阵 */
            b_Cz_tmp = SV->q[b_i];
            g_Cz_tmp = muDoubleScalarSin(b_Cz_tmp);
            c_Cz_tmp = muDoubleScalarCos(b_Cz_tmp);
            f_Cz_tmp[0] = e_Cz_tmp;
            f_Cz_tmp[3] = -d_Cz_tmp;
            f_Cz_tmp[6] = 0.0;
            f_Cz_tmp[1] = d_Cz_tmp;
            f_Cz_tmp[4] = e_Cz_tmp;
            f_Cz_tmp[7] = 0.0;
            f_Cz_tmp[2] = 0.0;
            f_Cz_tmp[5] = 0.0;
            f_Cz_tmp[8] = 1.0;
            memset(&A_0_i[0], 0, 9U * sizeof(real_T));
            for (i2 = 0; i2 < 3; i2++) {
              Cz_tmp_tmp = 3 * i2 + 9 * (A_0_i_tmp - 1);
              b_Cz_tmp = LP_Rp[Cz_tmp_tmp];
              r = _mm_loadu_pd(&f_Cz_tmp[0]);
              r1 = _mm_loadu_pd(&A_0_i[3 * i2]);
              _mm_storeu_pd(
                  &A_0_i[3 * i2],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              b_Cz_tmp_tmp = 3 * i2 + 2;
              A_0_i[b_Cz_tmp_tmp] += 0.0 * b_Cz_tmp;
              b_Cz_tmp = LP_Rp[Cz_tmp_tmp + 1];
              r = _mm_loadu_pd(&f_Cz_tmp[3]);
              r1 = _mm_loadu_pd(&A_0_i[3 * i2]);
              _mm_storeu_pd(
                  &A_0_i[3 * i2],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              A_0_i[b_Cz_tmp_tmp] += 0.0 * b_Cz_tmp;
              b_Cz_tmp = LP_Rp[Cz_tmp_tmp + 2];
              r = _mm_loadu_pd(&f_Cz_tmp[6]);
              r1 = _mm_loadu_pd(&A_0_i[3 * i2]);
              _mm_storeu_pd(
                  &A_0_i[3 * i2],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              A_0_i[b_Cz_tmp_tmp] += b_Cz_tmp;
            }
            f_Cz_tmp[0] = c_Cz_tmp;
            f_Cz_tmp[3] = -g_Cz_tmp;
            f_Cz_tmp[6] = 0.0;
            f_Cz_tmp[1] = g_Cz_tmp;
            f_Cz_tmp[4] = c_Cz_tmp;
            f_Cz_tmp[7] = 0.0;
            memset(&A_BB_i[0], 0, 9U * sizeof(real_T));
            for (i2 = 0; i2 < 3; i2++) {
              A_0_i_tmp = 3 * i2 + 2;
              Cz_tmp_tmp = iv[i2];
              f_Cz_tmp[A_0_i_tmp] = Cz_tmp_tmp;
              b_Cz_tmp = f_Cz_tmp[3 * i2];
              r = _mm_loadu_pd(&A_0_i[0]);
              r1 = _mm_loadu_pd(&A_BB_i[3 * i2]);
              _mm_storeu_pd(
                  &A_BB_i[3 * i2],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              A_BB_i[A_0_i_tmp] += A_0_i[2] * b_Cz_tmp;
              b_Cz_tmp = f_Cz_tmp[3 * i2 + 1];
              r = _mm_loadu_pd(&A_0_i[3]);
              r1 = _mm_loadu_pd(&A_BB_i[3 * i2]);
              _mm_storeu_pd(
                  &A_BB_i[3 * i2],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              A_BB_i[A_0_i_tmp] += A_0_i[5] * b_Cz_tmp;
              r = _mm_loadu_pd(&A_0_i[6]);
              r1 = _mm_loadu_pd(&A_BB_i[3 * i2]);
              _mm_storeu_pd(
                  &A_BB_i[3 * i2],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(Cz_tmp_tmp))));
              A_BB_i[A_0_i_tmp] += A_0_i[8] * (real_T)Cz_tmp_tmp;
            }
          } else if (LP_J_type[b_i] == 'L') {
            /*  计算绕z轴旋转的余弦矩阵 */
            e_Cz_tmp = LP_align[b_i];
            b_Cz_tmp = muDoubleScalarSin(e_Cz_tmp);
            e_Cz_tmp = muDoubleScalarCos(e_Cz_tmp);
            if (LP_module[b_i] !=
                (int32_T)muDoubleScalarFloor(LP_module[b_i])) {
              emlrtIntegerCheckR2012b(LP_module[b_i], &l_emlrtDCI,
                                      (emlrtConstCTX)sp);
            }
            A_0_i_tmp = (int32_T)LP_module[b_i];
            if ((A_0_i_tmp < 1) || (A_0_i_tmp > 10)) {
              emlrtDynamicBoundsCheckR2012b(A_0_i_tmp, 1, 10, &s_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            f_Cz_tmp[0] = e_Cz_tmp;
            f_Cz_tmp[3] = -b_Cz_tmp;
            f_Cz_tmp[6] = 0.0;
            f_Cz_tmp[1] = b_Cz_tmp;
            f_Cz_tmp[4] = e_Cz_tmp;
            f_Cz_tmp[7] = 0.0;
            f_Cz_tmp[2] = 0.0;
            f_Cz_tmp[5] = 0.0;
            f_Cz_tmp[8] = 1.0;
            memset(&A_BB_i[0], 0, 9U * sizeof(real_T));
            for (i2 = 0; i2 < 3; i2++) {
              Cz_tmp_tmp = (i2 << 2) + ((A_0_i_tmp - 1) << 4);
              b_Cz_tmp = LP_T_L[Cz_tmp_tmp];
              r = _mm_loadu_pd(&f_Cz_tmp[0]);
              r1 = _mm_loadu_pd(&A_BB_i[3 * i2]);
              _mm_storeu_pd(
                  &A_BB_i[3 * i2],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              b_Cz_tmp_tmp = 3 * i2 + 2;
              A_BB_i[b_Cz_tmp_tmp] += 0.0 * b_Cz_tmp;
              b_Cz_tmp = LP_T_L[Cz_tmp_tmp + 1];
              r = _mm_loadu_pd(&f_Cz_tmp[3]);
              r1 = _mm_loadu_pd(&A_BB_i[3 * i2]);
              _mm_storeu_pd(
                  &A_BB_i[3 * i2],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              A_BB_i[b_Cz_tmp_tmp] += 0.0 * b_Cz_tmp;
              b_Cz_tmp = LP_T_L[Cz_tmp_tmp + 2];
              r = _mm_loadu_pd(&f_Cz_tmp[6]);
              r1 = _mm_loadu_pd(&A_BB_i[3 * i2]);
              _mm_storeu_pd(
                  &A_BB_i[3 * i2],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              A_BB_i[b_Cz_tmp_tmp] += b_Cz_tmp;
            }
          }
          b_Cz_tmp = d * 3.0 - 2.0;
          for (i2 = 0; i2 < 3; i2++) {
            e_Cz_tmp = b_Cz_tmp + (real_T)i2;
            if (e_Cz_tmp != (int32_T)e_Cz_tmp) {
              emlrtIntegerCheckR2012b(e_Cz_tmp, &q_emlrtDCI, (emlrtConstCTX)sp);
            }
            b = ((e_Cz_tmp < 1.0) || (e_Cz_tmp > 33.0));
            if (b) {
              emlrtDynamicBoundsCheckR2012b((int32_T)e_Cz_tmp, 1, 33,
                                            &x_emlrtBCI, (emlrtConstCTX)sp);
            }
            A_0_i_tmp = (int32_T)e_Cz_tmp;
            Cz_tmp_tmp = 3 * (A_0_i_tmp - 1);
            A_0_i[3 * i2] = SV->AA[Cz_tmp_tmp];
            if (A_0_i_tmp != (int32_T)e_Cz_tmp) {
              emlrtIntegerCheckR2012b(e_Cz_tmp, &q_emlrtDCI, (emlrtConstCTX)sp);
            }
            if (b) {
              emlrtDynamicBoundsCheckR2012b(A_0_i_tmp, 1, 33, &x_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            A_0_i[3 * i2 + 1] = SV->AA[Cz_tmp_tmp + 1];
            if (A_0_i_tmp != (int32_T)e_Cz_tmp) {
              emlrtIntegerCheckR2012b(e_Cz_tmp, &q_emlrtDCI, (emlrtConstCTX)sp);
            }
            if (b) {
              emlrtDynamicBoundsCheckR2012b(A_0_i_tmp, 1, 33, &x_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            A_0_i[3 * i2 + 2] = SV->AA[Cz_tmp_tmp + 2];
          }
          A_0_i_tmp = (b_i + 1) * 3 - 3;
          for (i2 = 0; i2 < 3; i2++) {
            e_Cz_tmp = A_0_i[i2];
            b_Cz_tmp = A_0_i[i2 + 3];
            c_Cz_tmp = A_0_i[i2 + 6];
            for (i3 = 0; i3 < 3; i3++) {
              Cz_tmp_tmp = i2 + 3 * (i3 + A_0_i_tmp);
              SV->AA[Cz_tmp_tmp] = 0.0;
              SV->AA[Cz_tmp_tmp] += e_Cz_tmp * A_BB_i[3 * i3];
              SV->AA[Cz_tmp_tmp] += b_Cz_tmp * A_BB_i[3 * i3 + 1];
              SV->AA[Cz_tmp_tmp] += c_Cz_tmp * A_BB_i[3 * i3 + 2];
            }
          }
        }
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
}

/* End of code generation (calc_aa_0318.c) */
