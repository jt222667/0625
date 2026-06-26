/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * calc_MCG_0625_types.h
 *
 * Code generation for function 'calc_MCG_0625'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"

/* Type Definitions */
#ifndef typedef_cell_wrap_1
#define typedef_cell_wrap_1
typedef struct {
  real_T f1[3];
} cell_wrap_1;
#endif /* typedef_cell_wrap_1 */

#ifndef typedef_cell_wrap_0
#define typedef_cell_wrap_0
typedef struct {
  real_T f1[11];
} cell_wrap_0;
#endif /* typedef_cell_wrap_0 */

#ifndef typedef_cell_wrap_2
#define typedef_cell_wrap_2
typedef struct {
  real_T f1[9];
} cell_wrap_2;
#endif /* typedef_cell_wrap_2 */

#ifndef typedef_struct2_T
#define typedef_struct2_T
typedef struct {
  real_T R0[3];
  real_T Q0[3];
  real_T A0[9];
  real_T AA[99];
  real_T RR[33];
  real_T v0[3];
  real_T w0[3];
  real_T vd0[3];
  real_T wd0[3];
  real_T q[11];
  real_T qd[11];
  real_T qdd[11];
  real_T vv[33];
  real_T ww[33];
  real_T vd[33];
  real_T wd[33];
  real_T F0[3];
  real_T T0[3];
  real_T Fe[33];
  real_T Te[33];
  real_T tau[11];
  real_T m;
  cell_wrap_0 Path[1];
  cell_wrap_1 POS_e[1];
  cell_wrap_2 ORI_e[1];
  real_T singleArm_joints;
} struct2_T;
#endif /* typedef_struct2_T */

#ifndef typedef_struct1_T
#define typedef_struct1_T
typedef struct {
  real_T m;
  real_T rc[3];
  real_T b_I[9];
} struct1_T;
#endif /* typedef_struct1_T */

#ifndef typedef_struct0_T
#define typedef_struct0_T
typedef struct {
  real_T module[11];
  real_T num_q;
  real_T install[11];
  real_T align[11];
  real_T BB[11];
  real_T Rp[90];
  real_T Rd[90];
  real_T Pp[30];
  real_T Pd[30];
  real_T RBcp[27];
  real_T PBcp[9];
  real_T T_L[160];
  real_T T_B[32];
  real_T module_mass[7];
  real_T module_COM[21];
  real_T module_inertia[63];
  real_T module_mass_prox[4];
  real_T module_mass_dist[4];
  real_T module_COM_prox[12];
  real_T module_COM_dist[12];
  real_T module_inertia_prox[36];
  real_T module_inertia_dist[36];
  char_T J_type[11];
  real_T R_idx[30];
  real_T num_joint;
  real_T S0[11];
  real_T SN[11];
  real_T SE[11];
  real_T SS[121];
  struct1_T rb[7];
} struct0_T;
#endif /* typedef_struct0_T */

/* End of code generation (calc_MCG_0625_types.h) */
