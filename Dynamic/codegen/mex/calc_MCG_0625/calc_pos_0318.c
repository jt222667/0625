/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * calc_pos_0318.c
 *
 * Code generation for function 'calc_pos_0318'
 *
 */

/* Include files */
#include "calc_pos_0318.h"
#include "calc_MCG_0625_data.h"
#include "calc_MCG_0625_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include <string.h>

/* Variable Definitions */
static emlrtRTEInfo
    i_emlrtRTEI =
        {
            5,               /* lineNo */
            9,               /* colNo */
            "calc_pos_0318", /* fName */
            "F:\\Archive "
            "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m" /* pName
                                                                          */
};

static emlrtDCInfo r_emlrtDCI =
    {
        7,               /* lineNo */
        29,              /* colNo */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        1 /* checkKind */
};

static emlrtBCInfo y_emlrtBCI =
    {
        1,               /* iFirst */
        3,               /* iLast */
        7,               /* lineNo */
        29,              /* colNo */
        "LP.RBcp",       /* aName */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        0 /* checkKind */
};

static emlrtDCInfo s_emlrtDCI =
    {
        9,               /* lineNo */
        53,              /* colNo */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        1 /* checkKind */
};

static emlrtDCInfo t_emlrtDCI =
    {
        9,               /* lineNo */
        85,              /* colNo */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        1 /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI =
    {
        1,               /* iFirst */
        10,              /* iLast */
        9,               /* lineNo */
        85,              /* colNo */
        "LP.Pp",         /* aName */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        0 /* checkKind */
};

static emlrtDCInfo u_emlrtDCI =
    {
        11,              /* lineNo */
        53,              /* colNo */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        1 /* checkKind */
};

static emlrtDCInfo v_emlrtDCI =
    {
        11,              /* lineNo */
        90,              /* colNo */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        1 /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI =
    {
        1,               /* iFirst */
        10,              /* iLast */
        11,              /* lineNo */
        90,              /* colNo */
        "LP.T_L",        /* aName */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        0 /* checkKind */
};

static emlrtDCInfo w_emlrtDCI =
    {
        16,              /* lineNo */
        34,              /* colNo */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        1 /* checkKind */
};

static emlrtDCInfo x_emlrtDCI =
    {
        16,              /* lineNo */
        61,              /* colNo */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        1 /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI =
    {
        1,               /* iFirst */
        10,              /* iLast */
        16,              /* lineNo */
        61,              /* colNo */
        "LP.Pd",         /* aName */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        0 /* checkKind */
};

static emlrtDCInfo y_emlrtDCI =
    {
        16,              /* lineNo */
        101,             /* colNo */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        1 /* checkKind */
};

static emlrtBCInfo db_emlrtBCI =
    {
        1,               /* iFirst */
        10,              /* iLast */
        16,              /* lineNo */
        101,             /* colNo */
        "LP.Rd",         /* aName */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        0 /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI =
    {
        16,              /* lineNo */
        146,             /* colNo */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        1 /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI =
    {
        1,               /* iFirst */
        10,              /* iLast */
        16,              /* lineNo */
        146,             /* colNo */
        "LP.Pp",         /* aName */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        0 /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI =
    {
        18,              /* lineNo */
        34,              /* colNo */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        1 /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI =
    {
        18,              /* lineNo */
        61,              /* colNo */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        1 /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI =
    {
        1,               /* iFirst */
        10,              /* iLast */
        18,              /* lineNo */
        61,              /* colNo */
        "LP.Pd",         /* aName */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        0 /* checkKind */
};

static emlrtDCInfo db_emlrtDCI =
    {
        18,              /* lineNo */
        101,             /* colNo */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        1 /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI =
    {
        1,               /* iFirst */
        10,              /* iLast */
        18,              /* lineNo */
        101,             /* colNo */
        "LP.Rd",         /* aName */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        0 /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI =
    {
        18,              /* lineNo */
        151,             /* colNo */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        1 /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI =
    {
        1,               /* iFirst */
        10,              /* iLast */
        18,              /* lineNo */
        151,             /* colNo */
        "LP.T_L",        /* aName */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        0 /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI =
    {
        23,              /* lineNo */
        61,              /* colNo */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        1 /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI =
    {
        1,               /* iFirst */
        10,              /* iLast */
        23,              /* lineNo */
        61,              /* colNo */
        "LP.Pp",         /* aName */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        0 /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI =
    {
        25,              /* lineNo */
        66,              /* colNo */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        1 /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI =
    {
        1,               /* iFirst */
        10,              /* iLast */
        25,              /* lineNo */
        66,              /* colNo */
        "LP.T_L",        /* aName */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        0 /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI =
    {
        1,               /* iFirst */
        11,              /* iLast */
        6,               /* lineNo */
        14,              /* colNo */
        "LP.BB",         /* aName */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        0 /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI =
    {
        1,               /* iFirst */
        11,              /* iLast */
        13,              /* lineNo */
        39,              /* colNo */
        "LP.J_type",     /* aName */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        0 /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI =
    {
        13,              /* lineNo */
        39,              /* colNo */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        1 /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI =
    {
        1,               /* iFirst */
        11,              /* iLast */
        20,              /* lineNo */
        39,              /* colNo */
        "LP.J_type",     /* aName */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        0 /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI =
    {
        16,              /* lineNo */
        71,              /* colNo */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        1 /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI =
    {
        18,              /* lineNo */
        71,              /* colNo */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        1 /* checkKind */
};

static emlrtDCInfo kb_emlrtDCI =
    {
        16,              /* lineNo */
        111,             /* colNo */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        1 /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI =
    {
        18,              /* lineNo */
        111,             /* colNo */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        1 /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI =
    {
        1,               /* iFirst */
        33,              /* iLast */
        14,              /* lineNo */
        26,              /* colNo */
        "SV.AA",         /* aName */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        0 /* checkKind */
};

static emlrtDCInfo mb_emlrtDCI =
    {
        14,              /* lineNo */
        26,              /* colNo */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        1 /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI =
    {
        1,               /* iFirst */
        33,              /* iLast */
        21,              /* lineNo */
        26,              /* colNo */
        "SV.AA",         /* aName */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        0 /* checkKind */
};

static emlrtDCInfo nb_emlrtDCI =
    {
        21,              /* lineNo */
        26,              /* colNo */
        "calc_pos_0318", /* fName */
        "F:\\Archive "
        "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Kinematic\\calc_pos_0318.m", /* pName
                                                                       */
        1 /* checkKind */
};

/* Function Definitions */
void calc_pos_0318(const emlrtStack *sp, const real_T LP_module[11],
                   real_T LP_num_q, const real_T LP_align[11],
                   const real_T LP_BB[11], const real_T LP_Rd[90],
                   const real_T LP_Pp[30], const real_T LP_Pd[30],
                   const real_T LP_RBcp[27], const real_T LP_PBcp[9],
                   const real_T LP_T_L[160], const char_T LP_J_type[11],
                   const real_T LP_SN[11], struct2_T *SV)
{
  static const int8_T iv[3] = {0, 0, 1};
  real_T A_I_BB[9];
  real_T A_I_i[9];
  real_T b_A_I_BB[9];
  real_T b_SV[3];
  real_T c_A_I_BB[3];
  int32_T b_i;
  int32_T i;
  int32_T i2;
  /*  正运动学递推：计算所有模块相对于基座标系的位移向量 */
  i = (int32_T)LP_num_q;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, LP_num_q, mxDOUBLE_CLASS,
                                (int32_T)LP_num_q, &i_emlrtRTEI,
                                (emlrtConstCTX)sp);
  for (b_i = 0; b_i < i; b_i++) {
    real_T d;
    if (((int32_T)((uint32_T)b_i + 1U) < 1) ||
        ((int32_T)((uint32_T)b_i + 1U) > 11)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)b_i + 1U), 1, 11,
                                    &kb_emlrtBCI, (emlrtConstCTX)sp);
    }
    d = LP_BB[b_i];
    if (d == 0.0) {
      __m128d r;
      real_T d_Cz_tmp[9];
      real_T Cz_tmp;
      real_T b_Cz_tmp;
      real_T c_Cz_tmp;
      real_T d1;
      int32_T A_I_BB_tmp;
      int32_T b_A_I_BB_tmp;
      int32_T c_A_I_BB_tmp;
      d1 = LP_SN[b_i];
      A_I_BB_tmp = (int32_T)muDoubleScalarFloor(d1);
      if (d1 != A_I_BB_tmp) {
        emlrtIntegerCheckR2012b(d1, &r_emlrtDCI, (emlrtConstCTX)sp);
      }
      c_A_I_BB_tmp = (int32_T)d1;
      if ((c_A_I_BB_tmp < 1) || (c_A_I_BB_tmp > 3)) {
        emlrtDynamicBoundsCheckR2012b(c_A_I_BB_tmp, 1, 3, &y_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      /*  计算绕z轴旋转的余弦矩阵 */
      Cz_tmp = LP_align[b_i];
      b_Cz_tmp = muDoubleScalarSin(Cz_tmp);
      c_Cz_tmp = muDoubleScalarCos(Cz_tmp);
      d_Cz_tmp[0] = c_Cz_tmp;
      d_Cz_tmp[3] = -b_Cz_tmp;
      d_Cz_tmp[6] = 0.0;
      d_Cz_tmp[1] = b_Cz_tmp;
      d_Cz_tmp[4] = c_Cz_tmp;
      d_Cz_tmp[7] = 0.0;
      memset(&A_I_i[0], 0, 9U * sizeof(real_T));
      b_A_I_BB_tmp = 9 * (c_A_I_BB_tmp - 1);
      for (i2 = 0; i2 < 3; i2++) {
        int32_T Cz_tmp_tmp;
        int32_T i1;
        Cz_tmp_tmp = 3 * i2 + 2;
        i1 = iv[i2];
        d_Cz_tmp[Cz_tmp_tmp] = i1;
        c_Cz_tmp = d_Cz_tmp[3 * i2];
        r = _mm_loadu_pd(&A_I_i[3 * i2]);
        _mm_storeu_pd(
            &A_I_i[3 * i2],
            _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&LP_RBcp[b_A_I_BB_tmp]),
                                     _mm_set1_pd(c_Cz_tmp))));
        A_I_i[Cz_tmp_tmp] += LP_RBcp[b_A_I_BB_tmp + 2] * c_Cz_tmp;
        c_Cz_tmp = d_Cz_tmp[3 * i2 + 1];
        r = _mm_loadu_pd(&A_I_i[3 * i2]);
        _mm_storeu_pd(
            &A_I_i[3 * i2],
            _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&LP_RBcp[b_A_I_BB_tmp + 3]),
                                     _mm_set1_pd(c_Cz_tmp))));
        A_I_i[Cz_tmp_tmp] += LP_RBcp[b_A_I_BB_tmp + 5] * c_Cz_tmp;
        r = _mm_loadu_pd(&A_I_i[3 * i2]);
        _mm_storeu_pd(
            &A_I_i[3 * i2],
            _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&LP_RBcp[b_A_I_BB_tmp + 6]),
                                     _mm_set1_pd(i1))));
        A_I_i[Cz_tmp_tmp] += LP_RBcp[b_A_I_BB_tmp + 8] * (real_T)i1;
      }
      if (LP_J_type[b_i] == 'R') {
        __m128d r1;
        if (c_A_I_BB_tmp != A_I_BB_tmp) {
          emlrtIntegerCheckR2012b(d1, &s_emlrtDCI, (emlrtConstCTX)sp);
        }
        if (LP_module[b_i] != (int32_T)muDoubleScalarFloor(LP_module[b_i])) {
          emlrtIntegerCheckR2012b(LP_module[b_i], &t_emlrtDCI,
                                  (emlrtConstCTX)sp);
        }
        c_A_I_BB_tmp = (int32_T)LP_module[b_i];
        if ((c_A_I_BB_tmp < 1) || (c_A_I_BB_tmp > 10)) {
          emlrtDynamicBoundsCheckR2012b(c_A_I_BB_tmp, 1, 10, &ab_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        memset(&b_A_I_BB[0], 0, 9U * sizeof(real_T));
        memset(&c_A_I_BB[0], 0, 3U * sizeof(real_T));
        b_A_I_BB_tmp = 3 * ((int32_T)d1 - 1);
        for (i2 = 0; i2 < 3; i2++) {
          c_Cz_tmp = A_I_i[3 * i2];
          r = _mm_loadu_pd(&SV->A0[0]);
          r1 = _mm_loadu_pd(&b_A_I_BB[3 * i2]);
          _mm_storeu_pd(&b_A_I_BB[3 * i2],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_Cz_tmp))));
          A_I_BB_tmp = 3 * i2 + 2;
          b_A_I_BB[A_I_BB_tmp] += SV->A0[2] * c_Cz_tmp;
          c_Cz_tmp = A_I_i[3 * i2 + 1];
          r = _mm_loadu_pd(&SV->A0[3]);
          r1 = _mm_loadu_pd(&b_A_I_BB[3 * i2]);
          _mm_storeu_pd(&b_A_I_BB[3 * i2],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_Cz_tmp))));
          b_A_I_BB[A_I_BB_tmp] += SV->A0[5] * c_Cz_tmp;
          c_Cz_tmp = A_I_i[A_I_BB_tmp];
          r = _mm_loadu_pd(&SV->A0[6]);
          r1 = _mm_loadu_pd(&b_A_I_BB[3 * i2]);
          _mm_storeu_pd(&b_A_I_BB[3 * i2],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_Cz_tmp))));
          b_A_I_BB[A_I_BB_tmp] += SV->A0[8] * c_Cz_tmp;
          b_SV[i2] =
              SV->R0[i2] + ((SV->A0[i2] * LP_PBcp[b_A_I_BB_tmp] +
                             SV->A0[i2 + 3] * LP_PBcp[b_A_I_BB_tmp + 1]) +
                            SV->A0[i2 + 6] * LP_PBcp[b_A_I_BB_tmp + 2]);
          c_Cz_tmp = LP_Pp[i2 + 3 * (c_A_I_BB_tmp - 1)];
          r = _mm_loadu_pd(&b_A_I_BB[3 * i2]);
          r1 = _mm_loadu_pd(&c_A_I_BB[0]);
          _mm_storeu_pd(&c_A_I_BB[0],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_Cz_tmp))));
          c_A_I_BB[2] += b_A_I_BB[A_I_BB_tmp] * c_Cz_tmp;
        }
        r = _mm_loadu_pd(&b_SV[0]);
        r1 = _mm_loadu_pd(&c_A_I_BB[0]);
        _mm_storeu_pd(&SV->RR[3 * b_i], _mm_add_pd(r, r1));
        SV->RR[3 * b_i + 2] = b_SV[2] + c_A_I_BB[2];
      } else if (LP_J_type[b_i] == 'L') {
        __m128d r1;
        if (c_A_I_BB_tmp != A_I_BB_tmp) {
          emlrtIntegerCheckR2012b(d1, &u_emlrtDCI, (emlrtConstCTX)sp);
        }
        if (LP_module[b_i] != (int32_T)muDoubleScalarFloor(LP_module[b_i])) {
          emlrtIntegerCheckR2012b(LP_module[b_i], &v_emlrtDCI,
                                  (emlrtConstCTX)sp);
        }
        c_A_I_BB_tmp = (int32_T)LP_module[b_i];
        if ((c_A_I_BB_tmp < 1) || (c_A_I_BB_tmp > 10)) {
          emlrtDynamicBoundsCheckR2012b(c_A_I_BB_tmp, 1, 10, &bb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        memset(&b_A_I_BB[0], 0, 9U * sizeof(real_T));
        memset(&c_A_I_BB[0], 0, 3U * sizeof(real_T));
        b_A_I_BB_tmp = 3 * ((int32_T)d1 - 1);
        for (i2 = 0; i2 < 3; i2++) {
          c_Cz_tmp = A_I_i[3 * i2];
          r = _mm_loadu_pd(&SV->A0[0]);
          r1 = _mm_loadu_pd(&b_A_I_BB[3 * i2]);
          _mm_storeu_pd(&b_A_I_BB[3 * i2],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_Cz_tmp))));
          A_I_BB_tmp = 3 * i2 + 2;
          b_A_I_BB[A_I_BB_tmp] += SV->A0[2] * c_Cz_tmp;
          c_Cz_tmp = A_I_i[3 * i2 + 1];
          r = _mm_loadu_pd(&SV->A0[3]);
          r1 = _mm_loadu_pd(&b_A_I_BB[3 * i2]);
          _mm_storeu_pd(&b_A_I_BB[3 * i2],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_Cz_tmp))));
          b_A_I_BB[A_I_BB_tmp] += SV->A0[5] * c_Cz_tmp;
          c_Cz_tmp = A_I_i[A_I_BB_tmp];
          r = _mm_loadu_pd(&SV->A0[6]);
          r1 = _mm_loadu_pd(&b_A_I_BB[3 * i2]);
          _mm_storeu_pd(&b_A_I_BB[3 * i2],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_Cz_tmp))));
          b_A_I_BB[A_I_BB_tmp] += SV->A0[8] * c_Cz_tmp;
          b_SV[i2] =
              SV->R0[i2] + ((SV->A0[i2] * LP_PBcp[b_A_I_BB_tmp] +
                             SV->A0[i2 + 3] * LP_PBcp[b_A_I_BB_tmp + 1]) +
                            SV->A0[i2 + 6] * LP_PBcp[b_A_I_BB_tmp + 2]);
          c_Cz_tmp = LP_T_L[(i2 + ((c_A_I_BB_tmp - 1) << 4)) + 12];
          r = _mm_loadu_pd(&b_A_I_BB[3 * i2]);
          r1 = _mm_loadu_pd(&c_A_I_BB[0]);
          _mm_storeu_pd(&c_A_I_BB[0],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_Cz_tmp))));
          c_A_I_BB[2] += b_A_I_BB[A_I_BB_tmp] * c_Cz_tmp;
        }
        r = _mm_loadu_pd(&b_SV[0]);
        r1 = _mm_loadu_pd(&c_A_I_BB[0]);
        _mm_storeu_pd(&SV->RR[3 * b_i], _mm_add_pd(r, r1));
        SV->RR[3 * b_i + 2] = b_SV[2] + c_A_I_BB[2];
      }
    } else {
      __m128d r;
      __m128d r1;
      real_T d_Cz_tmp[9];
      real_T Cz_tmp;
      real_T c_Cz_tmp;
      int32_T A_I_BB_tmp;
      int32_T Cz_tmp_tmp;
      int32_T b_A_I_BB_tmp;
      int32_T c_A_I_BB_tmp;
      boolean_T b;
      boolean_T guard1;
      guard1 = false;
      if (d != 0.0) {
        int32_T i1;
        b_A_I_BB_tmp = (int32_T)muDoubleScalarFloor(d);
        if (d != b_A_I_BB_tmp) {
          emlrtIntegerCheckR2012b(d, &hb_emlrtDCI, (emlrtConstCTX)sp);
        }
        i1 = (int32_T)d;
        if ((i1 < 1) || (i1 > 11)) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, 11, &lb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (LP_J_type[i1 - 1] == 'R') {
          Cz_tmp = d * 3.0;
          for (i2 = 0; i2 < 3; i2++) {
            c_Cz_tmp = (Cz_tmp - 2.0) + (real_T)i2;
            if (c_Cz_tmp != (int32_T)c_Cz_tmp) {
              emlrtIntegerCheckR2012b(c_Cz_tmp, &mb_emlrtDCI,
                                      (emlrtConstCTX)sp);
            }
            b = ((c_Cz_tmp < 1.0) || (c_Cz_tmp > 33.0));
            if (b) {
              emlrtDynamicBoundsCheckR2012b((int32_T)c_Cz_tmp, 1, 33,
                                            &nb_emlrtBCI, (emlrtConstCTX)sp);
            }
            A_I_BB_tmp = (int32_T)c_Cz_tmp;
            c_A_I_BB_tmp = 3 * (A_I_BB_tmp - 1);
            A_I_BB[3 * i2] = SV->AA[c_A_I_BB_tmp];
            if (A_I_BB_tmp != (int32_T)c_Cz_tmp) {
              emlrtIntegerCheckR2012b(c_Cz_tmp, &mb_emlrtDCI,
                                      (emlrtConstCTX)sp);
            }
            if (b) {
              emlrtDynamicBoundsCheckR2012b(A_I_BB_tmp, 1, 33, &nb_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            A_I_BB[3 * i2 + 1] = SV->AA[c_A_I_BB_tmp + 1];
            if (A_I_BB_tmp != (int32_T)c_Cz_tmp) {
              emlrtIntegerCheckR2012b(c_Cz_tmp, &mb_emlrtDCI,
                                      (emlrtConstCTX)sp);
            }
            if (b) {
              emlrtDynamicBoundsCheckR2012b(A_I_BB_tmp, 1, 33, &nb_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            A_I_BB[3 * i2 + 2] = SV->AA[c_A_I_BB_tmp + 2];
          }
          if (LP_J_type[b_i] == 'R') {
            real_T b_Cz_tmp;
            if (i1 != b_A_I_BB_tmp) {
              emlrtIntegerCheckR2012b(d, &ib_emlrtDCI, (emlrtConstCTX)sp);
            }
            b_Cz_tmp = LP_module[i1 - 1];
            if (b_Cz_tmp != (int32_T)muDoubleScalarFloor(b_Cz_tmp)) {
              emlrtIntegerCheckR2012b(b_Cz_tmp, &x_emlrtDCI, (emlrtConstCTX)sp);
            }
            if (((int32_T)b_Cz_tmp < 1) || ((int32_T)b_Cz_tmp > 10)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_Cz_tmp, 1, 10,
                                            &cb_emlrtBCI, (emlrtConstCTX)sp);
            }
            if (i1 != b_A_I_BB_tmp) {
              emlrtIntegerCheckR2012b(d, &kb_emlrtDCI, (emlrtConstCTX)sp);
            }
            if (b_Cz_tmp != (int32_T)muDoubleScalarFloor(b_Cz_tmp)) {
              emlrtIntegerCheckR2012b(b_Cz_tmp, &y_emlrtDCI, (emlrtConstCTX)sp);
            }
            if (((int32_T)b_Cz_tmp < 1) || ((int32_T)b_Cz_tmp > 10)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_Cz_tmp, 1, 10,
                                            &db_emlrtBCI, (emlrtConstCTX)sp);
            }
            /*  计算绕z轴旋转的余弦矩阵 */
            c_Cz_tmp = LP_align[b_i];
            Cz_tmp = muDoubleScalarSin(c_Cz_tmp);
            c_Cz_tmp = muDoubleScalarCos(c_Cz_tmp);
            if (LP_module[b_i] !=
                (int32_T)muDoubleScalarFloor(LP_module[b_i])) {
              emlrtIntegerCheckR2012b(LP_module[b_i], &ab_emlrtDCI,
                                      (emlrtConstCTX)sp);
            }
            Cz_tmp_tmp = (int32_T)LP_module[b_i];
            if ((Cz_tmp_tmp < 1) || (Cz_tmp_tmp > 10)) {
              emlrtDynamicBoundsCheckR2012b(Cz_tmp_tmp, 1, 10, &eb_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            if (i1 != b_A_I_BB_tmp) {
              emlrtIntegerCheckR2012b(d, &w_emlrtDCI, (emlrtConstCTX)sp);
            }
            memset(&b_A_I_BB[0], 0, 9U * sizeof(real_T));
            d_Cz_tmp[0] = c_Cz_tmp;
            d_Cz_tmp[3] = -Cz_tmp;
            d_Cz_tmp[6] = 0.0;
            d_Cz_tmp[1] = Cz_tmp;
            d_Cz_tmp[4] = c_Cz_tmp;
            d_Cz_tmp[7] = 0.0;
            for (i2 = 0; i2 < 3; i2++) {
              A_I_BB_tmp = 3 * i2 + 9 * ((int32_T)b_Cz_tmp - 1);
              c_Cz_tmp = LP_Rd[A_I_BB_tmp];
              r = _mm_loadu_pd(&A_I_BB[0]);
              r1 = _mm_loadu_pd(&b_A_I_BB[3 * i2]);
              _mm_storeu_pd(
                  &b_A_I_BB[3 * i2],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_Cz_tmp))));
              b_A_I_BB_tmp = 3 * i2 + 2;
              b_A_I_BB[b_A_I_BB_tmp] += A_I_BB[2] * c_Cz_tmp;
              c_Cz_tmp = LP_Rd[A_I_BB_tmp + 1];
              r = _mm_loadu_pd(&A_I_BB[3]);
              r1 = _mm_loadu_pd(&b_A_I_BB[3 * i2]);
              _mm_storeu_pd(
                  &b_A_I_BB[3 * i2],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_Cz_tmp))));
              b_A_I_BB[b_A_I_BB_tmp] += A_I_BB[5] * c_Cz_tmp;
              c_Cz_tmp = LP_Rd[A_I_BB_tmp + 2];
              r = _mm_loadu_pd(&A_I_BB[6]);
              r1 = _mm_loadu_pd(&b_A_I_BB[3 * i2]);
              _mm_storeu_pd(
                  &b_A_I_BB[3 * i2],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_Cz_tmp))));
              b_A_I_BB[b_A_I_BB_tmp] += A_I_BB[8] * c_Cz_tmp;
              d_Cz_tmp[b_A_I_BB_tmp] = iv[i2];
            }
            memset(&A_I_i[0], 0, 9U * sizeof(real_T));
            memset(&c_A_I_BB[0], 0, 3U * sizeof(real_T));
            A_I_BB_tmp = 3 * ((int32_T)b_Cz_tmp - 1);
            for (i2 = 0; i2 < 3; i2++) {
              c_Cz_tmp = d_Cz_tmp[3 * i2];
              r = _mm_loadu_pd(&b_A_I_BB[0]);
              r1 = _mm_loadu_pd(&A_I_i[3 * i2]);
              _mm_storeu_pd(
                  &A_I_i[3 * i2],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_Cz_tmp))));
              c_A_I_BB_tmp = 3 * i2 + 2;
              A_I_i[c_A_I_BB_tmp] += b_A_I_BB[2] * c_Cz_tmp;
              c_Cz_tmp = d_Cz_tmp[3 * i2 + 1];
              r = _mm_loadu_pd(&b_A_I_BB[3]);
              r1 = _mm_loadu_pd(&A_I_i[3 * i2]);
              _mm_storeu_pd(
                  &A_I_i[3 * i2],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_Cz_tmp))));
              A_I_i[c_A_I_BB_tmp] += b_A_I_BB[5] * c_Cz_tmp;
              c_Cz_tmp = d_Cz_tmp[c_A_I_BB_tmp];
              r = _mm_loadu_pd(&b_A_I_BB[6]);
              r1 = _mm_loadu_pd(&A_I_i[3 * i2]);
              _mm_storeu_pd(
                  &A_I_i[3 * i2],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_Cz_tmp))));
              A_I_i[c_A_I_BB_tmp] += b_A_I_BB[8] * c_Cz_tmp;
              b_SV[i2] = SV->RR[i2 + 3 * (i1 - 1)] +
                         ((A_I_BB[i2] * LP_Pd[A_I_BB_tmp] +
                           A_I_BB[i2 + 3] * LP_Pd[A_I_BB_tmp + 1]) +
                          A_I_BB[i2 + 6] * LP_Pd[A_I_BB_tmp + 2]);
              c_Cz_tmp = LP_Pp[i2 + 3 * (Cz_tmp_tmp - 1)];
              r = _mm_loadu_pd(&A_I_i[3 * i2]);
              r1 = _mm_loadu_pd(&c_A_I_BB[0]);
              _mm_storeu_pd(
                  &c_A_I_BB[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_Cz_tmp))));
              c_A_I_BB[2] += A_I_i[c_A_I_BB_tmp] * c_Cz_tmp;
            }
            r = _mm_loadu_pd(&b_SV[0]);
            r1 = _mm_loadu_pd(&c_A_I_BB[0]);
            _mm_storeu_pd(&SV->RR[3 * b_i], _mm_add_pd(r, r1));
            SV->RR[3 * b_i + 2] = b_SV[2] + c_A_I_BB[2];
          } else if (LP_J_type[b_i] == 'L') {
            real_T b_Cz_tmp;
            real_T d1;
            if (i1 != b_A_I_BB_tmp) {
              emlrtIntegerCheckR2012b(d, &jb_emlrtDCI, (emlrtConstCTX)sp);
            }
            d1 = LP_module[i1 - 1];
            if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
              emlrtIntegerCheckR2012b(d1, &cb_emlrtDCI, (emlrtConstCTX)sp);
            }
            if (((int32_T)d1 < 1) || ((int32_T)d1 > 10)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d1, 1, 10, &fb_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            if (i1 != b_A_I_BB_tmp) {
              emlrtIntegerCheckR2012b(d, &lb_emlrtDCI, (emlrtConstCTX)sp);
            }
            if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
              emlrtIntegerCheckR2012b(d1, &db_emlrtDCI, (emlrtConstCTX)sp);
            }
            if (((int32_T)d1 < 1) || ((int32_T)d1 > 10)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d1, 1, 10, &gb_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            /*  计算绕z轴旋转的余弦矩阵 */
            c_Cz_tmp = LP_align[b_i];
            b_Cz_tmp = muDoubleScalarSin(c_Cz_tmp);
            c_Cz_tmp = muDoubleScalarCos(c_Cz_tmp);
            if (LP_module[b_i] !=
                (int32_T)muDoubleScalarFloor(LP_module[b_i])) {
              emlrtIntegerCheckR2012b(LP_module[b_i], &eb_emlrtDCI,
                                      (emlrtConstCTX)sp);
            }
            Cz_tmp_tmp = (int32_T)LP_module[b_i];
            if ((Cz_tmp_tmp < 1) || (Cz_tmp_tmp > 10)) {
              emlrtDynamicBoundsCheckR2012b(Cz_tmp_tmp, 1, 10, &hb_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            if (i1 != b_A_I_BB_tmp) {
              emlrtIntegerCheckR2012b(d, &bb_emlrtDCI, (emlrtConstCTX)sp);
            }
            memset(&b_A_I_BB[0], 0, 9U * sizeof(real_T));
            d_Cz_tmp[0] = c_Cz_tmp;
            d_Cz_tmp[3] = -b_Cz_tmp;
            d_Cz_tmp[6] = 0.0;
            d_Cz_tmp[1] = b_Cz_tmp;
            d_Cz_tmp[4] = c_Cz_tmp;
            d_Cz_tmp[7] = 0.0;
            for (i2 = 0; i2 < 3; i2++) {
              A_I_BB_tmp = 3 * i2 + 9 * ((int32_T)d1 - 1);
              c_Cz_tmp = LP_Rd[A_I_BB_tmp];
              r = _mm_loadu_pd(&A_I_BB[0]);
              r1 = _mm_loadu_pd(&b_A_I_BB[3 * i2]);
              _mm_storeu_pd(
                  &b_A_I_BB[3 * i2],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_Cz_tmp))));
              c_A_I_BB_tmp = 3 * i2 + 2;
              b_A_I_BB[c_A_I_BB_tmp] += A_I_BB[2] * c_Cz_tmp;
              c_Cz_tmp = LP_Rd[A_I_BB_tmp + 1];
              r = _mm_loadu_pd(&A_I_BB[3]);
              r1 = _mm_loadu_pd(&b_A_I_BB[3 * i2]);
              _mm_storeu_pd(
                  &b_A_I_BB[3 * i2],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_Cz_tmp))));
              b_A_I_BB[c_A_I_BB_tmp] += A_I_BB[5] * c_Cz_tmp;
              c_Cz_tmp = LP_Rd[A_I_BB_tmp + 2];
              r = _mm_loadu_pd(&A_I_BB[6]);
              r1 = _mm_loadu_pd(&b_A_I_BB[3 * i2]);
              _mm_storeu_pd(
                  &b_A_I_BB[3 * i2],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_Cz_tmp))));
              b_A_I_BB[c_A_I_BB_tmp] += A_I_BB[8] * c_Cz_tmp;
              d_Cz_tmp[c_A_I_BB_tmp] = iv[i2];
            }
            memset(&A_I_i[0], 0, 9U * sizeof(real_T));
            memset(&c_A_I_BB[0], 0, 3U * sizeof(real_T));
            A_I_BB_tmp = 3 * ((int32_T)d1 - 1);
            for (i2 = 0; i2 < 3; i2++) {
              c_Cz_tmp = d_Cz_tmp[3 * i2];
              r = _mm_loadu_pd(&b_A_I_BB[0]);
              r1 = _mm_loadu_pd(&A_I_i[3 * i2]);
              _mm_storeu_pd(
                  &A_I_i[3 * i2],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_Cz_tmp))));
              c_A_I_BB_tmp = 3 * i2 + 2;
              A_I_i[c_A_I_BB_tmp] += b_A_I_BB[2] * c_Cz_tmp;
              c_Cz_tmp = d_Cz_tmp[3 * i2 + 1];
              r = _mm_loadu_pd(&b_A_I_BB[3]);
              r1 = _mm_loadu_pd(&A_I_i[3 * i2]);
              _mm_storeu_pd(
                  &A_I_i[3 * i2],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_Cz_tmp))));
              A_I_i[c_A_I_BB_tmp] += b_A_I_BB[5] * c_Cz_tmp;
              c_Cz_tmp = d_Cz_tmp[c_A_I_BB_tmp];
              r = _mm_loadu_pd(&b_A_I_BB[6]);
              r1 = _mm_loadu_pd(&A_I_i[3 * i2]);
              _mm_storeu_pd(
                  &A_I_i[3 * i2],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_Cz_tmp))));
              A_I_i[c_A_I_BB_tmp] += b_A_I_BB[8] * c_Cz_tmp;
              b_SV[i2] = SV->RR[i2 + 3 * (i1 - 1)] +
                         ((A_I_BB[i2] * LP_Pd[A_I_BB_tmp] +
                           A_I_BB[i2 + 3] * LP_Pd[A_I_BB_tmp + 1]) +
                          A_I_BB[i2 + 6] * LP_Pd[A_I_BB_tmp + 2]);
              c_Cz_tmp = LP_T_L[(i2 + ((Cz_tmp_tmp - 1) << 4)) + 12];
              r = _mm_loadu_pd(&A_I_i[3 * i2]);
              r1 = _mm_loadu_pd(&c_A_I_BB[0]);
              _mm_storeu_pd(
                  &c_A_I_BB[0],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_Cz_tmp))));
              c_A_I_BB[2] += A_I_i[c_A_I_BB_tmp] * c_Cz_tmp;
            }
            r = _mm_loadu_pd(&b_SV[0]);
            r1 = _mm_loadu_pd(&c_A_I_BB[0]);
            _mm_storeu_pd(&SV->RR[3 * b_i], _mm_add_pd(r, r1));
            SV->RR[3 * b_i + 2] = b_SV[2] + c_A_I_BB[2];
          }
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
      if (guard1 && (d != 0.0)) {
        Cz_tmp_tmp = (int32_T)d;
        if ((Cz_tmp_tmp < 1) || (Cz_tmp_tmp > 11)) {
          emlrtDynamicBoundsCheckR2012b(Cz_tmp_tmp, 1, 11, &mb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (LP_J_type[Cz_tmp_tmp - 1] == 'L') {
          c_Cz_tmp = d * 3.0;
          for (i2 = 0; i2 < 3; i2++) {
            Cz_tmp = (c_Cz_tmp - 2.0) + (real_T)i2;
            if (Cz_tmp != (int32_T)Cz_tmp) {
              emlrtIntegerCheckR2012b(Cz_tmp, &nb_emlrtDCI, (emlrtConstCTX)sp);
            }
            b = ((Cz_tmp < 1.0) || (Cz_tmp > 33.0));
            if (b) {
              emlrtDynamicBoundsCheckR2012b((int32_T)Cz_tmp, 1, 33,
                                            &ob_emlrtBCI, (emlrtConstCTX)sp);
            }
            c_A_I_BB_tmp = (int32_T)Cz_tmp;
            b_A_I_BB_tmp = 3 * (c_A_I_BB_tmp - 1);
            A_I_i[3 * i2] = SV->AA[b_A_I_BB_tmp];
            if (c_A_I_BB_tmp != (int32_T)Cz_tmp) {
              emlrtIntegerCheckR2012b(Cz_tmp, &nb_emlrtDCI, (emlrtConstCTX)sp);
            }
            if (b) {
              emlrtDynamicBoundsCheckR2012b(c_A_I_BB_tmp, 1, 33, &ob_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            A_I_i[3 * i2 + 1] = SV->AA[b_A_I_BB_tmp + 1];
            if (c_A_I_BB_tmp != (int32_T)Cz_tmp) {
              emlrtIntegerCheckR2012b(Cz_tmp, &nb_emlrtDCI, (emlrtConstCTX)sp);
            }
            if (b) {
              emlrtDynamicBoundsCheckR2012b(c_A_I_BB_tmp, 1, 33, &ob_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            A_I_i[3 * i2 + 2] = SV->AA[b_A_I_BB_tmp + 2];
          }
          /*  计算绕z轴旋转的余弦矩阵 */
          c_Cz_tmp = LP_align[b_i];
          Cz_tmp = muDoubleScalarSin(c_Cz_tmp);
          c_Cz_tmp = muDoubleScalarCos(c_Cz_tmp);
          d_Cz_tmp[0] = c_Cz_tmp;
          d_Cz_tmp[3] = -Cz_tmp;
          d_Cz_tmp[6] = 0.0;
          d_Cz_tmp[1] = Cz_tmp;
          d_Cz_tmp[4] = c_Cz_tmp;
          d_Cz_tmp[7] = 0.0;
          memset(&A_I_BB[0], 0, 9U * sizeof(real_T));
          for (i2 = 0; i2 < 3; i2++) {
            A_I_BB_tmp = 3 * i2 + 2;
            c_A_I_BB_tmp = iv[i2];
            d_Cz_tmp[A_I_BB_tmp] = c_A_I_BB_tmp;
            c_Cz_tmp = d_Cz_tmp[3 * i2];
            r = _mm_loadu_pd(&A_I_i[0]);
            r1 = _mm_loadu_pd(&A_I_BB[3 * i2]);
            _mm_storeu_pd(&A_I_BB[3 * i2],
                          _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_Cz_tmp))));
            A_I_BB[A_I_BB_tmp] += A_I_i[2] * c_Cz_tmp;
            c_Cz_tmp = d_Cz_tmp[3 * i2 + 1];
            r = _mm_loadu_pd(&A_I_i[3]);
            r1 = _mm_loadu_pd(&A_I_BB[3 * i2]);
            _mm_storeu_pd(&A_I_BB[3 * i2],
                          _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_Cz_tmp))));
            A_I_BB[A_I_BB_tmp] += A_I_i[5] * c_Cz_tmp;
            r = _mm_loadu_pd(&A_I_i[6]);
            r1 = _mm_loadu_pd(&A_I_BB[3 * i2]);
            _mm_storeu_pd(
                &A_I_BB[3 * i2],
                _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(c_A_I_BB_tmp))));
            A_I_BB[A_I_BB_tmp] += A_I_i[8] * (real_T)c_A_I_BB_tmp;
          }
          if (LP_J_type[b_i] == 'R') {
            if (LP_module[b_i] !=
                (int32_T)muDoubleScalarFloor(LP_module[b_i])) {
              emlrtIntegerCheckR2012b(LP_module[b_i], &fb_emlrtDCI,
                                      (emlrtConstCTX)sp);
            }
            c_A_I_BB_tmp = (int32_T)LP_module[b_i];
            if ((c_A_I_BB_tmp < 1) || (c_A_I_BB_tmp > 10)) {
              emlrtDynamicBoundsCheckR2012b(c_A_I_BB_tmp, 1, 10, &ib_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            c_A_I_BB_tmp = 3 * (c_A_I_BB_tmp - 1);
            r = _mm_loadu_pd(&A_I_BB[0]);
            r1 = _mm_mul_pd(r, _mm_set1_pd(LP_Pp[c_A_I_BB_tmp]));
            r = _mm_loadu_pd(&A_I_BB[3]);
            r = _mm_mul_pd(r, _mm_set1_pd(LP_Pp[c_A_I_BB_tmp + 1]));
            r1 = _mm_add_pd(r1, r);
            r = _mm_loadu_pd(&A_I_BB[6]);
            r = _mm_mul_pd(r, _mm_set1_pd(LP_Pp[c_A_I_BB_tmp + 2]));
            r = _mm_add_pd(r1, r);
            r1 = _mm_loadu_pd(&SV->RR[3 * (Cz_tmp_tmp - 1)]);
            r = _mm_add_pd(r1, r);
            _mm_storeu_pd(&b_SV[0], r);
            b_SV[2] = SV->RR[2 + 3 * (Cz_tmp_tmp - 1)] +
                      ((A_I_BB[2] * LP_Pp[c_A_I_BB_tmp] +
                        A_I_BB[5] * LP_Pp[c_A_I_BB_tmp + 1]) +
                       A_I_BB[8] * LP_Pp[c_A_I_BB_tmp + 2]);
            SV->RR[3 * b_i] = b_SV[0];
            SV->RR[3 * b_i + 1] = b_SV[1];
            SV->RR[3 * b_i + 2] = b_SV[2];
          } else if (LP_J_type[b_i] == 'L') {
            if (LP_module[b_i] !=
                (int32_T)muDoubleScalarFloor(LP_module[b_i])) {
              emlrtIntegerCheckR2012b(LP_module[b_i], &gb_emlrtDCI,
                                      (emlrtConstCTX)sp);
            }
            c_A_I_BB_tmp = (int32_T)LP_module[b_i];
            if ((c_A_I_BB_tmp < 1) || (c_A_I_BB_tmp > 10)) {
              emlrtDynamicBoundsCheckR2012b(c_A_I_BB_tmp, 1, 10, &jb_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            c_A_I_BB_tmp = (c_A_I_BB_tmp - 1) << 4;
            r = _mm_loadu_pd(&A_I_BB[0]);
            r1 = _mm_mul_pd(r, _mm_set1_pd(LP_T_L[c_A_I_BB_tmp + 12]));
            r = _mm_loadu_pd(&A_I_BB[3]);
            r = _mm_mul_pd(r, _mm_set1_pd(LP_T_L[c_A_I_BB_tmp + 13]));
            r1 = _mm_add_pd(r1, r);
            r = _mm_loadu_pd(&A_I_BB[6]);
            r = _mm_mul_pd(r, _mm_set1_pd(LP_T_L[c_A_I_BB_tmp + 14]));
            r = _mm_add_pd(r1, r);
            r1 = _mm_loadu_pd(&SV->RR[3 * (Cz_tmp_tmp - 1)]);
            r = _mm_add_pd(r1, r);
            _mm_storeu_pd(&b_SV[0], r);
            b_SV[2] = SV->RR[2 + 3 * (Cz_tmp_tmp - 1)] +
                      ((A_I_BB[2] * LP_T_L[c_A_I_BB_tmp + 12] +
                        A_I_BB[5] * LP_T_L[c_A_I_BB_tmp + 13]) +
                       A_I_BB[8] * LP_T_L[c_A_I_BB_tmp + 14]);
            SV->RR[3 * b_i] = b_SV[0];
            SV->RR[3 * b_i + 1] = b_SV[1];
            SV->RR[3 * b_i + 2] = b_SV[2];
          }
        }
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
}

/* End of code generation (calc_pos_0318.c) */
