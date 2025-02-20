/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: strel.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:11:08
 */

/* Include Files */
#include "strel.h"
#include "StrelImpl.h"
#include "cell_boundary_emxutil.h"
#include "cell_boundary_rtwutil.h"
#include "cell_boundary_types.h"
#include "colon.h"
#include "find.h"
#include "imdilate.h"
#include "intline.h"
#include "minOrMax.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Declarations */
static void b_getNhoodAndHeightFromLinePara(double len,
                                            emxArray_boolean_T *nhood,
                                            emxArray_real_T *height);

static void binary_expand_op_1(emxArray_boolean_T *in1,
                               const emxArray_real_T *in3,
                               const emxArray_real_T *in4, double in5);

static void binary_expand_op_2(emxArray_boolean_T *in1,
                               const emxArray_real_T *in2,
                               const emxArray_real_T *in3, double in4);

static void c_getNhoodAndHeightFromPeriodic(double p, const double v[2],
                                            emxArray_boolean_T *nhood,
                                            emxArray_real_T *height);

static int div_s32(int numerator, int denominator);

static void getNhoodAndHeightFromLineParams(double len,
                                            emxArray_boolean_T *nhood,
                                            emxArray_real_T *height);

static double rt_powd_snf(double u0, double u1);

static void
strel_decomposeImpl(const c_emxArray_images_internal_code *obj_StrelArray,
                    const emxArray_cell_wrap_1 *obj_DecomposedStrelArray,
                    c_emxArray_images_internal_code *seq_StrelArray,
                    emxArray_cell_wrap_1 *seq_DecomposedStrelArray);

/* Function Definitions */
/*
 * Arguments    : double len
 *                emxArray_boolean_T *nhood
 *                emxArray_real_T *height
 * Return Type  : void
 */
static void b_getNhoodAndHeightFromLinePara(double len,
                                            emxArray_boolean_T *nhood,
                                            emxArray_real_T *height)
{
  emxArray_int32_T *b_r;
  emxArray_real_T *c;
  emxArray_real_T *r;
  emxArray_real_T *varargin_1;
  double M;
  double b_maxval;
  double maxval;
  double x;
  double *c_data;
  double *height_data;
  double *varargin_1_data;
  int k;
  int loop_ub_tmp;
  int nx;
  int *r1;
  boolean_T *nhood_data;
  M = (len - 1.0) / 2.0;
  x = rt_roundd_snf(M * 6.123233995736766E-17);
  M = rt_roundd_snf(M);
  emxInit_real_T(&c, 1);
  emxInit_real_T(&r, 1);
  intline(-x, x, M, -M, c, r);
  height_data = r->data;
  c_data = c->data;
  nx = r->size[0];
  emxInit_real_T(&varargin_1, 1);
  k = varargin_1->size[0];
  varargin_1->size[0] = r->size[0];
  emxEnsureCapacity_real_T(varargin_1, k);
  varargin_1_data = varargin_1->data;
  for (k = 0; k < nx; k++) {
    varargin_1_data[k] = fabs(height_data[k]);
  }
  M = 2.0 * maximum(varargin_1) + 1.0;
  nx = c->size[0];
  k = varargin_1->size[0];
  varargin_1->size[0] = c->size[0];
  emxEnsureCapacity_real_T(varargin_1, k);
  varargin_1_data = varargin_1->data;
  for (k = 0; k < nx; k++) {
    varargin_1_data[k] = fabs(c_data[k]);
  }
  x = 2.0 * maximum(varargin_1) + 1.0;
  k = nhood->size[0] * nhood->size[1];
  nhood->size[0] = (int)M;
  nhood->size[1] = (int)x;
  emxEnsureCapacity_boolean_T(nhood, k);
  nhood_data = nhood->data;
  loop_ub_tmp = (int)M * (int)x;
  for (k = 0; k < loop_ub_tmp; k++) {
    nhood_data[k] = false;
  }
  nx = r->size[0];
  k = varargin_1->size[0];
  varargin_1->size[0] = r->size[0];
  emxEnsureCapacity_real_T(varargin_1, k);
  varargin_1_data = varargin_1->data;
  for (k = 0; k < nx; k++) {
    varargin_1_data[k] = fabs(height_data[k]);
  }
  maxval = maximum(varargin_1);
  nx = c->size[0];
  k = varargin_1->size[0];
  varargin_1->size[0] = c->size[0];
  emxEnsureCapacity_real_T(varargin_1, k);
  varargin_1_data = varargin_1->data;
  for (k = 0; k < nx; k++) {
    varargin_1_data[k] = fabs(c_data[k]);
  }
  b_maxval = maximum(varargin_1);
  emxFree_real_T(&varargin_1);
  emxInit_int32_T(&b_r);
  k = b_r->size[0];
  b_r->size[0] = r->size[0];
  emxEnsureCapacity_int32_T(b_r, k);
  r1 = b_r->data;
  nx = r->size[0];
  for (k = 0; k < nx; k++) {
    r1[k] = (int)((height_data[k] + maxval) + 1.0) +
            (int)M * ((int)((c_data[k] + b_maxval) + 1.0) - 1);
  }
  emxFree_real_T(&r);
  emxFree_real_T(&c);
  nx = b_r->size[0];
  for (k = 0; k < nx; k++) {
    nhood_data[r1[k] - 1] = true;
  }
  emxFree_int32_T(&b_r);
  k = height->size[0] * height->size[1];
  height->size[0] = (int)M;
  height->size[1] = (int)x;
  emxEnsureCapacity_real_T(height, k);
  height_data = height->data;
  for (k = 0; k < loop_ub_tmp; k++) {
    height_data[k] = 0.0;
  }
}

/*
 * Arguments    : emxArray_boolean_T *in1
 *                const emxArray_real_T *in3
 *                const emxArray_real_T *in4
 *                double in5
 * Return Type  : void
 */
static void binary_expand_op_1(emxArray_boolean_T *in1,
                               const emxArray_real_T *in3,
                               const emxArray_real_T *in4, double in5)
{
  const double *in3_data;
  const double *in4_data;
  int aux_0_1;
  int aux_1_1;
  int b_loop_ub;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_0_1;
  int stride_1_0;
  int stride_1_1;
  boolean_T *in1_data;
  in4_data = in4->data;
  in3_data = in3->data;
  if (in4->size[0] == 1) {
    loop_ub = in3->size[0];
  } else {
    loop_ub = in4->size[0];
  }
  i = in1->size[0] * in1->size[1];
  in1->size[0] = loop_ub;
  emxEnsureCapacity_boolean_T(in1, i);
  if (in4->size[1] == 1) {
    b_loop_ub = in3->size[1];
  } else {
    b_loop_ub = in4->size[1];
  }
  i = in1->size[0] * in1->size[1];
  in1->size[1] = b_loop_ub;
  emxEnsureCapacity_boolean_T(in1, i);
  in1_data = in1->data;
  stride_0_0 = (in3->size[0] != 1);
  stride_0_1 = (in3->size[1] != 1);
  stride_1_0 = (in4->size[0] != 1);
  stride_1_1 = (in4->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      double b_varargin_1;
      double varargin_1;
      varargin_1 = in3_data[i1 * stride_0_0 + in3->size[0] * aux_0_1];
      b_varargin_1 = in4_data[i1 * stride_1_0 + in4->size[0] * aux_1_1];
      in1_data[i1 + in1->size[0] * i] =
          (varargin_1 * varargin_1 + b_varargin_1 * b_varargin_1 <= in5);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

/*
 * Arguments    : emxArray_boolean_T *in1
 *                const emxArray_real_T *in2
 *                const emxArray_real_T *in3
 *                double in4
 * Return Type  : void
 */
static void binary_expand_op_2(emxArray_boolean_T *in1,
                               const emxArray_real_T *in2,
                               const emxArray_real_T *in3, double in4)
{
  const double *in2_data;
  const double *in3_data;
  int aux_0_1;
  int aux_1_1;
  int b_loop_ub;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_0_1;
  int stride_1_0;
  int stride_1_1;
  boolean_T *in1_data;
  in3_data = in3->data;
  in2_data = in2->data;
  if (in3->size[0] == 1) {
    loop_ub = in2->size[0];
  } else {
    loop_ub = in3->size[0];
  }
  i = in1->size[0] * in1->size[1];
  in1->size[0] = loop_ub;
  emxEnsureCapacity_boolean_T(in1, i);
  if (in3->size[1] == 1) {
    b_loop_ub = in2->size[1];
  } else {
    b_loop_ub = in3->size[1];
  }
  i = in1->size[0] * in1->size[1];
  in1->size[1] = b_loop_ub;
  emxEnsureCapacity_boolean_T(in1, i);
  in1_data = in1->data;
  stride_0_0 = (in2->size[0] != 1);
  stride_0_1 = (in2->size[1] != 1);
  stride_1_0 = (in3->size[0] != 1);
  stride_1_1 = (in3->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      in1_data[i1 + in1->size[0] * i] =
          (in2_data[i1 * stride_0_0 + in2->size[0] * aux_0_1] +
               in3_data[i1 * stride_1_0 + in3->size[0] * aux_1_1] <=
           in4);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

/*
 * Arguments    : double p
 *                const double v[2]
 *                emxArray_boolean_T *nhood
 *                emxArray_real_T *height
 * Return Type  : void
 */
static void c_getNhoodAndHeightFromPeriodic(double p, const double v[2],
                                            emxArray_boolean_T *nhood,
                                            emxArray_real_T *height)
{
  emxArray_int32_T *r;
  emxArray_real_T *b_p;
  emxArray_real_T *pp;
  emxArray_real_T *rc;
  emxArray_real_T *y;
  double M;
  double N;
  double b_maxval;
  double maxval;
  double *p_data;
  double *pp_data;
  double *rc_data;
  int ibtile;
  int jtilecol;
  int k;
  int nrows;
  int *r1;
  boolean_T *nhood_data;
  emxInit_real_T(&y, 2);
  pp_data = y->data;
  if (rtIsNaN(-p) || rtIsNaN(p)) {
    jtilecol = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, jtilecol);
    pp_data = y->data;
    pp_data[0] = rtNaN;
  } else if (p < -p) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else if ((rtIsInf(-p) || rtIsInf(p)) && (-p == p)) {
    jtilecol = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, jtilecol);
    pp_data = y->data;
    pp_data[0] = rtNaN;
  } else if (floor(-p) == -p) {
    jtilecol = y->size[0] * y->size[1];
    y->size[0] = 1;
    nrows = (int)(p - (-p));
    y->size[1] = nrows + 1;
    emxEnsureCapacity_real_T(y, jtilecol);
    pp_data = y->data;
    for (jtilecol = 0; jtilecol <= nrows; jtilecol++) {
      pp_data[jtilecol] = -p + (double)jtilecol;
    }
  } else {
    eml_float_colon(-p, p, y);
    pp_data = y->data;
  }
  emxInit_real_T(&b_p, 1);
  jtilecol = b_p->size[0];
  b_p->size[0] = y->size[1];
  emxEnsureCapacity_real_T(b_p, jtilecol);
  p_data = b_p->data;
  nrows = y->size[1];
  for (jtilecol = 0; jtilecol < nrows; jtilecol++) {
    p_data[jtilecol] = pp_data[jtilecol];
  }
  emxFree_real_T(&y);
  emxInit_real_T(&pp, 2);
  jtilecol = pp->size[0] * pp->size[1];
  pp->size[0] = b_p->size[0];
  pp->size[1] = 2;
  emxEnsureCapacity_real_T(pp, jtilecol);
  pp_data = pp->data;
  nrows = b_p->size[0];
  for (jtilecol = 0; jtilecol < 2; jtilecol++) {
    ibtile = jtilecol * nrows;
    for (k = 0; k < nrows; k++) {
      pp_data[ibtile + k] = p_data[k];
    }
  }
  emxInit_real_T(&rc, 2);
  jtilecol = rc->size[0] * rc->size[1];
  rc->size[0] = pp->size[0];
  rc->size[1] = 2;
  emxEnsureCapacity_real_T(rc, jtilecol);
  rc_data = rc->data;
  if (pp->size[0] != 0) {
    nrows = (pp->size[0] != 1);
    for (k = 0; k < 2; k++) {
      jtilecol = rc->size[0] - 1;
      for (ibtile = 0; ibtile <= jtilecol; ibtile++) {
        rc_data[ibtile + rc->size[0] * k] =
            pp_data[nrows * ibtile + pp->size[0] * k] * v[k];
      }
    }
  }
  emxFree_real_T(&pp);
  nrows = rc->size[0];
  jtilecol = b_p->size[0];
  b_p->size[0] = rc->size[0];
  emxEnsureCapacity_real_T(b_p, jtilecol);
  p_data = b_p->data;
  for (k = 0; k < nrows; k++) {
    p_data[k] = fabs(rc_data[k]);
  }
  M = 2.0 * maximum(b_p) + 1.0;
  nrows = rc->size[0];
  jtilecol = b_p->size[0];
  b_p->size[0] = rc->size[0];
  emxEnsureCapacity_real_T(b_p, jtilecol);
  p_data = b_p->data;
  for (k = 0; k < nrows; k++) {
    p_data[k] = fabs(rc_data[k + rc->size[0]]);
  }
  N = 2.0 * maximum(b_p) + 1.0;
  jtilecol = nhood->size[0] * nhood->size[1];
  nhood->size[0] = (int)M;
  nhood->size[1] = (int)N;
  emxEnsureCapacity_boolean_T(nhood, jtilecol);
  nhood_data = nhood->data;
  ibtile = (int)M * (int)N;
  for (jtilecol = 0; jtilecol < ibtile; jtilecol++) {
    nhood_data[jtilecol] = false;
  }
  nrows = rc->size[0];
  jtilecol = b_p->size[0];
  b_p->size[0] = rc->size[0];
  emxEnsureCapacity_real_T(b_p, jtilecol);
  p_data = b_p->data;
  for (k = 0; k < nrows; k++) {
    p_data[k] = fabs(rc_data[k]);
  }
  maxval = maximum(b_p);
  nrows = rc->size[0];
  jtilecol = b_p->size[0];
  b_p->size[0] = rc->size[0];
  emxEnsureCapacity_real_T(b_p, jtilecol);
  p_data = b_p->data;
  for (k = 0; k < nrows; k++) {
    p_data[k] = fabs(rc_data[k + rc->size[0]]);
  }
  b_maxval = maximum(b_p);
  emxFree_real_T(&b_p);
  emxInit_int32_T(&r);
  jtilecol = r->size[0];
  r->size[0] = rc->size[0];
  emxEnsureCapacity_int32_T(r, jtilecol);
  r1 = r->data;
  nrows = rc->size[0];
  for (jtilecol = 0; jtilecol < nrows; jtilecol++) {
    r1[jtilecol] =
        (int)((rc_data[jtilecol] + maxval) + 1.0) +
        (int)M *
            ((int)((rc_data[jtilecol + rc->size[0]] + b_maxval) + 1.0) - 1);
  }
  emxFree_real_T(&rc);
  nrows = r->size[0];
  for (jtilecol = 0; jtilecol < nrows; jtilecol++) {
    nhood_data[r1[jtilecol] - 1] = true;
  }
  emxFree_int32_T(&r);
  jtilecol = height->size[0] * height->size[1];
  height->size[0] = (int)M;
  height->size[1] = (int)N;
  emxEnsureCapacity_real_T(height, jtilecol);
  pp_data = height->data;
  for (jtilecol = 0; jtilecol < ibtile; jtilecol++) {
    pp_data[jtilecol] = 0.0;
  }
}

/*
 * Arguments    : int numerator
 *                int denominator
 * Return Type  : int
 */
static int div_s32(int numerator, int denominator)
{
  int quotient;
  if (denominator == 0) {
    if (numerator >= 0) {
      quotient = MAX_int32_T;
    } else {
      quotient = MIN_int32_T;
    }
  } else {
    unsigned int tempAbsQuotient;
    unsigned int u;
    if (numerator < 0) {
      tempAbsQuotient = ~(unsigned int)numerator + 1U;
    } else {
      tempAbsQuotient = (unsigned int)numerator;
    }
    if (denominator < 0) {
      u = ~(unsigned int)denominator + 1U;
    } else {
      u = (unsigned int)denominator;
    }
    tempAbsQuotient /= u;
    if ((numerator < 0) != (denominator < 0)) {
      quotient = -(int)tempAbsQuotient;
    } else {
      quotient = (int)tempAbsQuotient;
    }
  }
  return quotient;
}

/*
 * Arguments    : double len
 *                emxArray_boolean_T *nhood
 *                emxArray_real_T *height
 * Return Type  : void
 */
static void getNhoodAndHeightFromLineParams(double len,
                                            emxArray_boolean_T *nhood,
                                            emxArray_real_T *height)
{
  emxArray_int32_T *b_r;
  emxArray_real_T *c;
  emxArray_real_T *r;
  emxArray_real_T *varargin_1;
  double M;
  double b_maxval;
  double maxval;
  double x;
  double *c_data;
  double *height_data;
  double *varargin_1_data;
  int k;
  int loop_ub_tmp;
  int nx;
  int *r1;
  boolean_T *nhood_data;
  M = (len - 1.0) / 2.0;
  x = rt_roundd_snf(M);
  M *= 0.0;
  emxInit_real_T(&c, 1);
  emxInit_real_T(&r, 1);
  intline(-x, x, M, -M, c, r);
  height_data = r->data;
  c_data = c->data;
  nx = r->size[0];
  emxInit_real_T(&varargin_1, 1);
  k = varargin_1->size[0];
  varargin_1->size[0] = r->size[0];
  emxEnsureCapacity_real_T(varargin_1, k);
  varargin_1_data = varargin_1->data;
  for (k = 0; k < nx; k++) {
    varargin_1_data[k] = fabs(height_data[k]);
  }
  M = 2.0 * maximum(varargin_1) + 1.0;
  nx = c->size[0];
  k = varargin_1->size[0];
  varargin_1->size[0] = c->size[0];
  emxEnsureCapacity_real_T(varargin_1, k);
  varargin_1_data = varargin_1->data;
  for (k = 0; k < nx; k++) {
    varargin_1_data[k] = fabs(c_data[k]);
  }
  x = 2.0 * maximum(varargin_1) + 1.0;
  k = nhood->size[0] * nhood->size[1];
  nhood->size[0] = (int)M;
  nhood->size[1] = (int)x;
  emxEnsureCapacity_boolean_T(nhood, k);
  nhood_data = nhood->data;
  loop_ub_tmp = (int)M * (int)x;
  for (k = 0; k < loop_ub_tmp; k++) {
    nhood_data[k] = false;
  }
  nx = r->size[0];
  k = varargin_1->size[0];
  varargin_1->size[0] = r->size[0];
  emxEnsureCapacity_real_T(varargin_1, k);
  varargin_1_data = varargin_1->data;
  for (k = 0; k < nx; k++) {
    varargin_1_data[k] = fabs(height_data[k]);
  }
  maxval = maximum(varargin_1);
  nx = c->size[0];
  k = varargin_1->size[0];
  varargin_1->size[0] = c->size[0];
  emxEnsureCapacity_real_T(varargin_1, k);
  varargin_1_data = varargin_1->data;
  for (k = 0; k < nx; k++) {
    varargin_1_data[k] = fabs(c_data[k]);
  }
  b_maxval = maximum(varargin_1);
  emxFree_real_T(&varargin_1);
  emxInit_int32_T(&b_r);
  k = b_r->size[0];
  b_r->size[0] = r->size[0];
  emxEnsureCapacity_int32_T(b_r, k);
  r1 = b_r->data;
  nx = r->size[0];
  for (k = 0; k < nx; k++) {
    r1[k] = (int)((height_data[k] + maxval) + 1.0) +
            (int)M * ((int)((c_data[k] + b_maxval) + 1.0) - 1);
  }
  emxFree_real_T(&r);
  emxFree_real_T(&c);
  nx = b_r->size[0];
  for (k = 0; k < nx; k++) {
    nhood_data[r1[k] - 1] = true;
  }
  emxFree_int32_T(&b_r);
  k = height->size[0] * height->size[1];
  height->size[0] = (int)M;
  height->size[1] = (int)x;
  emxEnsureCapacity_real_T(height, k);
  height_data = height->data;
  for (k = 0; k < loop_ub_tmp; k++) {
    height_data[k] = 0.0;
  }
}

/*
 * Arguments    : double u0
 *                double u1
 * Return Type  : double
 */
static double rt_powd_snf(double u0, double u1)
{
  double y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = rtNaN;
  } else {
    double d;
    double d1;
    d = fabs(u0);
    d1 = fabs(u1);
    if (rtIsInf(u1)) {
      if (d == 1.0) {
        y = 1.0;
      } else if (d > 1.0) {
        if (u1 > 0.0) {
          y = rtInf;
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = rtInf;
      }
    } else if (d1 == 0.0) {
      y = 1.0;
    } else if (d1 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = rtNaN;
    } else {
      y = pow(u0, u1);
    }
  }
  return y;
}

/*
 * Arguments    : const c_emxArray_images_internal_code *obj_StrelArray
 *                const emxArray_cell_wrap_1 *obj_DecomposedStrelArray
 *                c_emxArray_images_internal_code *seq_StrelArray
 *                emxArray_cell_wrap_1 *seq_DecomposedStrelArray
 * Return Type  : void
 */
static void
strel_decomposeImpl(const c_emxArray_images_internal_code *obj_StrelArray,
                    const emxArray_cell_wrap_1 *obj_DecomposedStrelArray,
                    c_emxArray_images_internal_code *seq_StrelArray,
                    emxArray_cell_wrap_1 *seq_DecomposedStrelArray)
{
  const c_images_internal_coder_strel_S *obj_StrelArray_data;
  c_images_internal_coder_strel_S *seq_StrelArray_data;
  const cell_wrap_1 *obj_DecomposedStrelArray_data;
  cell_wrap_1 *seq_DecomposedStrelArray_data;
  int i;
  int len;
  int n;
  obj_DecomposedStrelArray_data = obj_DecomposedStrelArray->data;
  obj_StrelArray_data = obj_StrelArray->data;
  seq_StrelArray->size[0] = 1;
  seq_StrelArray->size[1] = 0;
  seq_DecomposedStrelArray->size[0] = 1;
  seq_DecomposedStrelArray->size[1] = 0;
  i = obj_StrelArray->size[1];
  for (len = 0; len < i; len++) {
    int i1;
    i1 = obj_DecomposedStrelArray_data[len].f1->size[1];
    if (obj_DecomposedStrelArray_data[len].f1->size[1] == 0) {
      int seq_StrelArray_tmp;
      seq_StrelArray_tmp = seq_StrelArray->size[1] + 1;
      i1 = seq_StrelArray->size[0] * seq_StrelArray->size[1];
      seq_StrelArray->size[0] = 1;
      seq_StrelArray->size[1]++;
      d_emxEnsureCapacity_images_inte(seq_StrelArray, i1);
      seq_StrelArray_data = seq_StrelArray->data;
      c_emxCopyStruct_images_internal(
          &seq_StrelArray_data[seq_StrelArray_tmp - 1],
          &obj_StrelArray_data[len]);
      i1 =
          seq_DecomposedStrelArray->size[0] * seq_DecomposedStrelArray->size[1];
      seq_DecomposedStrelArray->size[0] = 1;
      seq_DecomposedStrelArray->size[1]++;
      emxEnsureCapacity_cell_wrap_11(seq_DecomposedStrelArray, i1);
      seq_DecomposedStrelArray_data = seq_DecomposedStrelArray->data;
      i1 = seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1->size[0] *
           seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1->size[1];
      seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1->size[0] = 1;
      d_emxEnsureCapacity_images_inte(
          seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1, i1);
      seq_DecomposedStrelArray_data[seq_DecomposedStrelArray->size[1] - 1]
          .f1->size[1] = 0;
    } else {
      for (n = 0; n < i1; n++) {
        int i2;
        int seq_StrelArray_tmp;
        seq_StrelArray_tmp = seq_StrelArray->size[1] + 1;
        i2 = seq_StrelArray->size[0] * seq_StrelArray->size[1];
        seq_StrelArray->size[0] = 1;
        seq_StrelArray->size[1]++;
        d_emxEnsureCapacity_images_inte(seq_StrelArray, i2);
        seq_StrelArray_data = seq_StrelArray->data;
        c_emxCopyStruct_images_internal(
            &seq_StrelArray_data[seq_StrelArray_tmp - 1],
            &obj_DecomposedStrelArray_data[len].f1->data[n]);
        i2 = seq_DecomposedStrelArray->size[0] *
             seq_DecomposedStrelArray->size[1];
        seq_DecomposedStrelArray->size[0] = 1;
        seq_DecomposedStrelArray->size[1]++;
        emxEnsureCapacity_cell_wrap_11(seq_DecomposedStrelArray, i2);
        seq_DecomposedStrelArray_data = seq_DecomposedStrelArray->data;
        i2 = seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1->size[0] *
             seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1->size[1];
        seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1->size[0] = 1;
        d_emxEnsureCapacity_images_inte(
            seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1, i2);
        seq_DecomposedStrelArray_data[seq_DecomposedStrelArray->size[1] - 1]
            .f1->size[1] = 0;
      }
    }
  }
}

/*
 * Arguments    : double varargin_2
 *                c_emxArray_images_internal_code *obj_StrelArray
 *                emxArray_cell_wrap_1 *obj_DecomposedStrelArray
 * Return Type  : void
 */
void b_strel_strel(double varargin_2,
                   c_emxArray_images_internal_code *obj_StrelArray,
                   emxArray_cell_wrap_1 *obj_DecomposedStrelArray)
{
  static const boolean_T logicalNhood[9] = {false, true,  false, true, true,
                                            true,  false, true,  false};
  c_emxArray_images_internal_code *tempStrelArray;
  c_images_internal_coder_strel_S *tempStrelArray_data;
  cell_wrap_1 *obj_DecomposedStrelArray_data;
  d_emxArray_images_internal_code strelArray;
  emxArray_boolean_T *b_nhood;
  emxArray_boolean_T *t0_nhood;
  emxArray_cell_wrap_1_1x1 decomposedStrelArray;
  emxArray_int8_T *t0_height;
  emxArray_real_T *cc;
  emxArray_real_T *nhood;
  emxArray_real_T *r;
  emxArray_real_T *y;
  double *cc_data;
  double *nhood_data;
  double *y_data;
  int b_i;
  int eint;
  int i;
  int loop_ub;
  int nx;
  unsigned int unnamed_idx_0_tmp;
  signed char *t0_height_data;
  boolean_T *b_nhood_data;
  boolean_T *t0_nhood_data;
  e_emxInit_images_internal_coder(&tempStrelArray);
  tempStrelArray_data = tempStrelArray->data;
  tempStrelArray->size[0] = 1;
  tempStrelArray->size[1] = 0;
  emxInit_real_T(&y, 2);
  y_data = y->data;
  if (rtIsNaN(-varargin_2) || rtIsNaN(varargin_2)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, i);
    y_data = y->data;
    y_data[0] = rtNaN;
  } else if (varargin_2 < -varargin_2) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else if ((rtIsInf(-varargin_2) || rtIsInf(varargin_2)) &&
             (-varargin_2 == varargin_2)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, i);
    y_data = y->data;
    y_data[0] = rtNaN;
  } else if (floor(-varargin_2) == -varargin_2) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    loop_ub = (int)(varargin_2 - (-varargin_2));
    y->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(y, i);
    y_data = y->data;
    for (i = 0; i <= loop_ub; i++) {
      y_data[i] = -varargin_2 + (double)i;
    }
  } else {
    eml_float_colon(-varargin_2, varargin_2, y);
    y_data = y->data;
  }
  nx = y->size[1] - 1;
  emxInit_real_T(&nhood, 2);
  i = nhood->size[0] * nhood->size[1];
  nhood->size[0] = y->size[1];
  nhood->size[1] = y->size[1];
  emxEnsureCapacity_real_T(nhood, i);
  nhood_data = nhood->data;
  emxInit_real_T(&cc, 2);
  i = cc->size[0] * cc->size[1];
  cc->size[0] = y->size[1];
  cc->size[1] = y->size[1];
  emxEnsureCapacity_real_T(cc, i);
  cc_data = cc->data;
  if (y->size[1] != 0) {
    for (loop_ub = 0; loop_ub <= nx; loop_ub++) {
      for (b_i = 0; b_i <= nx; b_i++) {
        nhood_data[b_i + nhood->size[0] * loop_ub] = y_data[loop_ub];
        cc_data[b_i + cc->size[0] * loop_ub] = y_data[b_i];
      }
    }
  }
  emxFree_real_T(&y);
  loop_ub = nhood->size[0] * nhood->size[1];
  unnamed_idx_0_tmp = (unsigned int)nhood->size[0];
  emxInit_real_T(&r, 2);
  i = r->size[0] * r->size[1];
  r->size[0] = nhood->size[0];
  r->size[1] = nhood->size[0];
  emxEnsureCapacity_real_T(r, i);
  y_data = r->data;
  for (b_i = 0; b_i < loop_ub; b_i++) {
    y_data[b_i] = fabs(nhood_data[b_i]);
  }
  i = nhood->size[0] * nhood->size[1];
  nhood->size[0] = (int)unnamed_idx_0_tmp;
  nhood->size[1] = (int)unnamed_idx_0_tmp;
  emxEnsureCapacity_real_T(nhood, i);
  nhood_data = nhood->data;
  for (b_i = 0; b_i < loop_ub; b_i++) {
    nhood_data[b_i] = fabs(cc_data[b_i]);
  }
  emxFree_real_T(&cc);
  emxInit_boolean_T(&b_nhood, 2);
  if ((r->size[0] == nhood->size[0]) && (r->size[1] == nhood->size[1])) {
    i = b_nhood->size[0] * b_nhood->size[1];
    b_nhood->size[0] = r->size[0];
    b_nhood->size[1] = r->size[1];
    emxEnsureCapacity_boolean_T(b_nhood, i);
    b_nhood_data = b_nhood->data;
    loop_ub = r->size[0] * r->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_nhood_data[i] = (y_data[i] + nhood_data[i] <= varargin_2);
    }
  } else {
    binary_expand_op_2(b_nhood, r, nhood, varargin_2);
    b_nhood_data = b_nhood->data;
  }
  emxFree_real_T(&r);
  emxInit_boolean_T(&t0_nhood, 3);
  i = t0_nhood->size[0] * t0_nhood->size[1] * t0_nhood->size[2];
  t0_nhood->size[0] = b_nhood->size[0];
  t0_nhood->size[1] = b_nhood->size[1];
  t0_nhood->size[2] = 1;
  emxEnsureCapacity_boolean_T(t0_nhood, i);
  t0_nhood_data = t0_nhood->data;
  loop_ub = b_nhood->size[0] * b_nhood->size[1];
  for (i = 0; i < loop_ub; i++) {
    t0_nhood_data[i] = b_nhood_data[i];
  }
  emxInit_int8_T(&t0_height);
  i = t0_height->size[0] * t0_height->size[1] * t0_height->size[2];
  t0_height->size[0] = b_nhood->size[0];
  t0_height->size[1] = b_nhood->size[1];
  t0_height->size[2] = 1;
  emxEnsureCapacity_int8_T(t0_height, i);
  t0_height_data = t0_height->data;
  nx = b_nhood->size[0] * b_nhood->size[1];
  emxFree_boolean_T(&b_nhood);
  for (i = 0; i < nx; i++) {
    t0_height_data[i] = 0;
  }
  c_emxInit_images_internal_coder(&strelArray);
  i = strelArray.size[0] * strelArray.size[1];
  strelArray.size[0] = 1;
  strelArray.size[1] = 1;
  c_emxEnsureCapacity_images_inte(&strelArray.data[0], strelArray.size, i);
  i = strelArray.data[0].nhood->size[0] * strelArray.data[0].nhood->size[1] *
      strelArray.data[0].nhood->size[2];
  strelArray.data[0].nhood->size[0] = t0_nhood->size[0];
  strelArray.data[0].nhood->size[1] = t0_nhood->size[1];
  strelArray.data[0].nhood->size[2] = 1;
  emxEnsureCapacity_boolean_T(strelArray.data[0].nhood, i);
  for (i = 0; i < loop_ub; i++) {
    strelArray.data[0].nhood->data[i] = t0_nhood_data[i];
  }
  i = strelArray.data[0].height->size[0] * strelArray.data[0].height->size[1] *
      strelArray.data[0].height->size[2];
  strelArray.data[0].height->size[0] = t0_height->size[0];
  strelArray.data[0].height->size[1] = t0_height->size[1];
  strelArray.data[0].height->size[2] = 1;
  emxEnsureCapacity_real_T(strelArray.data[0].height, i);
  for (i = 0; i < nx; i++) {
    strelArray.data[0].height->data[i] = 0.0;
  }
  strelArray.data[0].Flat = true;
  if (varargin_2 > 2.0) {
    double middle;
    double n;
    if (!rtIsInf(varargin_2)) {
      n = frexp(varargin_2, &eint);
      if (n == 0.5) {
        n = (double)eint - 1.0;
      } else if ((eint == 1) && (n < 0.75)) {
        n = log(2.0 * n) / 0.69314718055994529;
      } else {
        n = log(n) / 0.69314718055994529 + (double)eint;
      }
    } else {
      n = varargin_2;
    }
    n = floor(n);
    i = t0_nhood->size[0] * t0_nhood->size[1] * t0_nhood->size[2];
    t0_nhood->size[0] = 3;
    t0_nhood->size[1] = 3;
    t0_nhood->size[2] = 1;
    emxEnsureCapacity_boolean_T(t0_nhood, i);
    t0_nhood_data = t0_nhood->data;
    for (i = 0; i < 9; i++) {
      t0_nhood_data[i] = logicalNhood[i];
    }
    i = tempStrelArray->size[0] * tempStrelArray->size[1];
    tempStrelArray->size[0] = 1;
    tempStrelArray->size[1] = 1;
    d_emxEnsureCapacity_images_inte(tempStrelArray, i);
    tempStrelArray_data = tempStrelArray->data;
    i = tempStrelArray_data[0].nhood->size[0] *
        tempStrelArray_data[0].nhood->size[1] *
        tempStrelArray_data[0].nhood->size[2];
    tempStrelArray_data[0].nhood->size[0] = 3;
    tempStrelArray_data[0].nhood->size[1] = 3;
    tempStrelArray_data[0].nhood->size[2] = 1;
    emxEnsureCapacity_boolean_T(tempStrelArray_data[0].nhood, i);
    for (i = 0; i < 9; i++) {
      tempStrelArray_data[0].nhood->data[i] = t0_nhood_data[i];
    }
    i = tempStrelArray_data[0].height->size[0] *
        tempStrelArray_data[0].height->size[1] *
        tempStrelArray_data[0].height->size[2];
    tempStrelArray_data[0].height->size[0] = 3;
    tempStrelArray_data[0].height->size[1] = 3;
    tempStrelArray_data[0].height->size[2] = 1;
    emxEnsureCapacity_real_T(tempStrelArray_data[0].height, i);
    for (i = 0; i < 9; i++) {
      tempStrelArray_data[0].height->data[i] = 0.0;
    }
    tempStrelArray_data[0].Flat = true;
    i = (int)((n - 1.0) + 1.0);
    for (b_i = 0; b_i < i; b_i++) {
      double c;
      c = rt_powd_snf(2.0, (double)b_i + 1.0);
      middle = ((c + 1.0) + 1.0) / 2.0;
      nx = nhood->size[0] * nhood->size[1];
      nhood->size[0] = (int)(c + 1.0);
      nhood->size[1] = (int)(c + 1.0);
      emxEnsureCapacity_real_T(nhood, nx);
      nhood_data = nhood->data;
      loop_ub = (int)(c + 1.0) * (int)(c + 1.0);
      for (nx = 0; nx < loop_ub; nx++) {
        nhood_data[nx] = 0.0;
      }
      nhood_data[nhood->size[0] * ((int)middle - 1)] = 1.0;
      nhood_data[((int)(c + 1.0) + nhood->size[0] * ((int)middle - 1)) - 1] =
          1.0;
      nhood_data[(int)middle - 1] = 1.0;
      nhood_data[((int)middle + nhood->size[0] * ((int)(c + 1.0) - 1)) - 1] =
          1.0;
      loop_ub = tempStrelArray->size[1] + 1;
      nx = tempStrelArray->size[0] * tempStrelArray->size[1];
      tempStrelArray->size[0] = 1;
      tempStrelArray->size[1]++;
      d_emxEnsureCapacity_images_inte(tempStrelArray, nx);
      tempStrelArray_data = tempStrelArray->data;
      tempStrelArray_data[loop_ub - 1].Flat =
          StrelImpl_StrelImpl(nhood, tempStrelArray_data[loop_ub - 1].nhood,
                              tempStrelArray_data[loop_ub - 1].height);
    }
    n = varargin_2 - rt_powd_snf(2.0, n);
    if (n > 0.0) {
      n = 2.0 * n + 1.0;
      middle = (n + 1.0) / 2.0;
      i = nhood->size[0] * nhood->size[1];
      nhood->size[0] = (int)n;
      nhood->size[1] = (int)n;
      emxEnsureCapacity_real_T(nhood, i);
      nhood_data = nhood->data;
      loop_ub = (int)n * (int)n;
      for (i = 0; i < loop_ub; i++) {
        nhood_data[i] = 0.0;
      }
      nhood_data[nhood->size[0] * ((int)middle - 1)] = 1.0;
      nhood_data[((int)n + nhood->size[0] * ((int)middle - 1)) - 1] = 1.0;
      nhood_data[(int)middle - 1] = 1.0;
      nhood_data[((int)middle + nhood->size[0] * ((int)n - 1)) - 1] = 1.0;
      loop_ub = tempStrelArray->size[1] + 1;
      i = tempStrelArray->size[0] * tempStrelArray->size[1];
      tempStrelArray->size[0] = 1;
      tempStrelArray->size[1]++;
      d_emxEnsureCapacity_images_inte(tempStrelArray, i);
      tempStrelArray_data = tempStrelArray->data;
      tempStrelArray_data[loop_ub - 1].Flat =
          StrelImpl_StrelImpl(nhood, tempStrelArray_data[loop_ub - 1].nhood,
                              tempStrelArray_data[loop_ub - 1].height);
    }
  }
  emxFree_real_T(&nhood);
  emxFree_int8_T(&t0_height);
  emxFree_boolean_T(&t0_nhood);
  emxInit_cell_wrap_1_1x1(&decomposedStrelArray);
  i = decomposedStrelArray.size[0] * decomposedStrelArray.size[1];
  decomposedStrelArray.size[0] = 1;
  decomposedStrelArray.size[1] = 1;
  emxEnsureCapacity_cell_wrap_1(&decomposedStrelArray.data[0],
                                decomposedStrelArray.size, i);
  i = decomposedStrelArray.data[0].f1->size[0] *
      decomposedStrelArray.data[0].f1->size[1];
  decomposedStrelArray.data[0].f1->size[0] = 1;
  decomposedStrelArray.data[0].f1->size[1] = tempStrelArray->size[1];
  d_emxEnsureCapacity_images_inte(decomposedStrelArray.data[0].f1, i);
  loop_ub = tempStrelArray->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_emxCopyStruct_images_internal(&decomposedStrelArray.data[0].f1->data[i],
                                    &tempStrelArray_data[i]);
  }
  c_emxFree_images_internal_coder(&tempStrelArray);
  i = obj_StrelArray->size[0] * obj_StrelArray->size[1];
  obj_StrelArray->size[0] = 1;
  obj_StrelArray->size[1] = 1;
  d_emxEnsureCapacity_images_inte(obj_StrelArray, i);
  tempStrelArray_data = obj_StrelArray->data;
  c_emxCopyStruct_images_internal(&tempStrelArray_data[0], &strelArray.data[0]);
  d_emxFree_images_internal_coder(&strelArray);
  i = obj_DecomposedStrelArray->size[0] * obj_DecomposedStrelArray->size[1];
  obj_DecomposedStrelArray->size[0] = 1;
  obj_DecomposedStrelArray->size[1] = 1;
  emxEnsureCapacity_cell_wrap_11(obj_DecomposedStrelArray, i);
  obj_DecomposedStrelArray_data = obj_DecomposedStrelArray->data;
  emxCopyStruct_cell_wrap_1(&obj_DecomposedStrelArray_data[0],
                            &decomposedStrelArray.data[0]);
  emxFree_cell_wrap_1_1x1(&decomposedStrelArray);
}

/*
 * Arguments    : const c_emxArray_images_internal_code *obj_StrelArray
 *                const emxArray_cell_wrap_1 *obj_DecomposedStrelArray
 *                c_emxArray_images_internal_code *seq_StrelArray
 *                emxArray_cell_wrap_1 *seq_DecomposedStrelArray
 *                emxArray_boolean_T *isEachStrelObj2D
 * Return Type  : void
 */
void strel_decompose(const c_emxArray_images_internal_code *obj_StrelArray,
                     const emxArray_cell_wrap_1 *obj_DecomposedStrelArray,
                     c_emxArray_images_internal_code *seq_StrelArray,
                     emxArray_cell_wrap_1 *seq_DecomposedStrelArray,
                     emxArray_boolean_T *isEachStrelObj2D)
{
  const c_images_internal_coder_strel_S *obj_StrelArray_data;
  c_images_internal_coder_strel_S *seq_StrelArray_data;
  const cell_wrap_1 *obj_DecomposedStrelArray_data;
  cell_wrap_1 *seq_DecomposedStrelArray_data;
  int i;
  int len;
  int n;
  boolean_T *isEachStrelObj2D_data;
  obj_DecomposedStrelArray_data = obj_DecomposedStrelArray->data;
  obj_StrelArray_data = obj_StrelArray->data;
  seq_StrelArray->size[0] = 1;
  seq_StrelArray->size[1] = 0;
  seq_DecomposedStrelArray->size[0] = 1;
  seq_DecomposedStrelArray->size[1] = 0;
  isEachStrelObj2D->size[0] = 1;
  isEachStrelObj2D->size[1] = 0;
  i = obj_StrelArray->size[1];
  for (len = 0; len < i; len++) {
    int i1;
    i1 = obj_DecomposedStrelArray_data[len].f1->size[1];
    if (obj_DecomposedStrelArray_data[len].f1->size[1] == 0) {
      int i2;
      int seq_StrelArray_tmp;
      seq_StrelArray_tmp = seq_StrelArray->size[1] + 1;
      i1 = seq_StrelArray->size[0] * seq_StrelArray->size[1];
      seq_StrelArray->size[0] = 1;
      seq_StrelArray->size[1]++;
      d_emxEnsureCapacity_images_inte(seq_StrelArray, i1);
      seq_StrelArray_data = seq_StrelArray->data;
      c_emxCopyStruct_images_internal(
          &seq_StrelArray_data[seq_StrelArray_tmp - 1],
          &obj_StrelArray_data[len]);
      i1 =
          seq_DecomposedStrelArray->size[0] * seq_DecomposedStrelArray->size[1];
      seq_DecomposedStrelArray->size[0] = 1;
      seq_DecomposedStrelArray->size[1]++;
      emxEnsureCapacity_cell_wrap_11(seq_DecomposedStrelArray, i1);
      seq_DecomposedStrelArray_data = seq_DecomposedStrelArray->data;
      i1 = seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1->size[0] *
           seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1->size[1];
      seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1->size[0] = 1;
      d_emxEnsureCapacity_images_inte(
          seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1, i1);
      seq_DecomposedStrelArray_data[seq_DecomposedStrelArray->size[1] - 1]
          .f1->size[1] = 0;
      i1 = isEachStrelObj2D->size[1];
      i2 = isEachStrelObj2D->size[0] * isEachStrelObj2D->size[1];
      isEachStrelObj2D->size[1]++;
      emxEnsureCapacity_boolean_T(isEachStrelObj2D, i2);
      isEachStrelObj2D_data = isEachStrelObj2D->data;
      isEachStrelObj2D_data[i1] = true;
    } else {
      for (n = 0; n < i1; n++) {
        int i2;
        int seq_StrelArray_tmp;
        seq_StrelArray_tmp = seq_StrelArray->size[1] + 1;
        i2 = seq_StrelArray->size[0] * seq_StrelArray->size[1];
        seq_StrelArray->size[0] = 1;
        seq_StrelArray->size[1]++;
        d_emxEnsureCapacity_images_inte(seq_StrelArray, i2);
        seq_StrelArray_data = seq_StrelArray->data;
        c_emxCopyStruct_images_internal(
            &seq_StrelArray_data[seq_StrelArray_tmp - 1],
            &obj_DecomposedStrelArray_data[len].f1->data[n]);
        i2 = seq_DecomposedStrelArray->size[0] *
             seq_DecomposedStrelArray->size[1];
        seq_DecomposedStrelArray->size[0] = 1;
        seq_DecomposedStrelArray->size[1]++;
        emxEnsureCapacity_cell_wrap_11(seq_DecomposedStrelArray, i2);
        seq_DecomposedStrelArray_data = seq_DecomposedStrelArray->data;
        i2 = seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1->size[0] *
             seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1->size[1];
        seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1->size[0] = 1;
        d_emxEnsureCapacity_images_inte(
            seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1, i2);
        seq_DecomposedStrelArray_data[seq_DecomposedStrelArray->size[1] - 1]
            .f1->size[1] = 0;
        i2 = isEachStrelObj2D->size[1];
        seq_StrelArray_tmp =
            isEachStrelObj2D->size[0] * isEachStrelObj2D->size[1];
        isEachStrelObj2D->size[1]++;
        emxEnsureCapacity_boolean_T(isEachStrelObj2D, seq_StrelArray_tmp);
        isEachStrelObj2D_data = isEachStrelObj2D->data;
        isEachStrelObj2D_data[i2] = true;
      }
    }
  }
}

/*
 * Arguments    : const c_emxArray_images_internal_code *obj_StrelArray
 *                const emxArray_cell_wrap_1 *obj_DecomposedStrelArray
 *                double pad_ul_data[]
 *                int pad_ul_size[2]
 *                double pad_lr_data[]
 *                int pad_lr_size[2]
 * Return Type  : void
 */
void strel_getpadsize(const c_emxArray_images_internal_code *obj_StrelArray,
                      const emxArray_cell_wrap_1 *obj_DecomposedStrelArray,
                      double pad_ul_data[], int pad_ul_size[2],
                      double pad_lr_data[], int pad_lr_size[2])
{
  c_emxArray_images_internal_code *seq_StrelArray;
  c_images_internal_coder_strel_S *seq_StrelArray_data;
  cell_wrap_38 *offsets_data;
  cell_wrap_39 subs[3];
  emxArray_cell_wrap_1 *expl_temp;
  emxArray_cell_wrap_38 *offsets;
  emxArray_int32_T *idx;
  emxArray_int32_T *ii;
  emxArray_int32_T *varargout_6;
  emxArray_int32_T *vk;
  emxArray_real_T *a;
  emxArray_real_T *minval;
  emxArray_real_T *offsets_;
  double *a_data;
  double *offsets__data;
  int center[3];
  int b_idx;
  int b_ii;
  int i;
  int i1;
  int i2;
  int k;
  int nx;
  int sInd;
  int *idx_data;
  int *ii_data;
  int *varargout_6_data;
  e_emxInit_images_internal_coder(&seq_StrelArray);
  emxInit_cell_wrap_1(&expl_temp);
  strel_decomposeImpl(obj_StrelArray, obj_DecomposedStrelArray, seq_StrelArray,
                      expl_temp);
  seq_StrelArray_data = seq_StrelArray->data;
  emxFree_cell_wrap_1(&expl_temp);
  i = seq_StrelArray->size[1];
  emxInit_cell_wrap_38(&offsets);
  i1 = offsets->size[0] * offsets->size[1];
  offsets->size[0] = 1;
  offsets->size[1] = seq_StrelArray->size[1];
  emxEnsureCapacity_cell_wrap_38(offsets, i1);
  offsets_data = offsets->data;
  emxInit_int32_T(&idx);
  emxInitMatrix_cell_wrap_39(subs);
  emxInit_real_T(&offsets_, 2);
  emxInit_int32_T(&ii);
  emxInit_int32_T(&varargout_6);
  emxInit_int32_T(&vk);
  emxInit_real_T(&a, 2);
  if (i - 1 >= 0) {
    center[2] = 1;
  }
  for (sInd = 0; sInd < i; sInd++) {
    unsigned int size_nhood_idx_0;
    if (seq_StrelArray_data[sInd].nhood->size[0] == 1) {
      boolean_T exitg1;
      nx = seq_StrelArray_data[sInd].nhood->size[0] *
           seq_StrelArray_data[sInd].nhood->size[1];
      b_idx = 0;
      i1 = ii->size[0];
      ii->size[0] = nx;
      emxEnsureCapacity_int32_T(ii, i1);
      ii_data = ii->data;
      b_ii = 0;
      exitg1 = false;
      while ((!exitg1) && (b_ii <= nx - 1)) {
        if (seq_StrelArray_data[sInd].nhood->data[b_ii]) {
          b_idx++;
          ii_data[b_idx - 1] = b_ii + 1;
          if (b_idx >= nx) {
            exitg1 = true;
          } else {
            b_ii++;
          }
        } else {
          b_ii++;
        }
      }
      if (nx == 1) {
        if (b_idx == 0) {
          ii->size[0] = 0;
        }
      } else {
        i1 = ii->size[0];
        if (b_idx < 1) {
          ii->size[0] = 0;
        } else {
          ii->size[0] = b_idx;
        }
        emxEnsureCapacity_int32_T(ii, i1);
        ii_data = ii->data;
      }
      i1 = idx->size[0];
      idx->size[0] = ii->size[0];
      emxEnsureCapacity_int32_T(idx, i1);
      idx_data = idx->data;
      b_idx = ii->size[0];
      for (i1 = 0; i1 < b_idx; i1++) {
        idx_data[i1] = ii_data[i1];
      }
    } else {
      boolean_T exitg1;
      nx = seq_StrelArray_data[sInd].nhood->size[0] *
           seq_StrelArray_data[sInd].nhood->size[1];
      b_idx = 0;
      i1 = ii->size[0];
      ii->size[0] = nx;
      emxEnsureCapacity_int32_T(ii, i1);
      ii_data = ii->data;
      b_ii = 0;
      exitg1 = false;
      while ((!exitg1) && (b_ii <= nx - 1)) {
        if (seq_StrelArray_data[sInd].nhood->data[b_ii]) {
          b_idx++;
          ii_data[b_idx - 1] = b_ii + 1;
          if (b_idx >= nx) {
            exitg1 = true;
          } else {
            b_ii++;
          }
        } else {
          b_ii++;
        }
      }
      if (nx == 1) {
        if (b_idx == 0) {
          ii->size[0] = 0;
        }
      } else {
        i1 = ii->size[0];
        if (b_idx < 1) {
          ii->size[0] = 0;
        } else {
          ii->size[0] = b_idx;
        }
        emxEnsureCapacity_int32_T(ii, i1);
        ii_data = ii->data;
      }
      i1 = idx->size[0];
      idx->size[0] = ii->size[0];
      emxEnsureCapacity_int32_T(idx, i1);
      idx_data = idx->data;
      b_idx = ii->size[0];
      for (i1 = 0; i1 < b_idx; i1++) {
        idx_data[i1] = ii_data[i1];
      }
    }
    size_nhood_idx_0 = (unsigned int)seq_StrelArray_data[sInd].nhood->size[0];
    center[0] = (int)floor(
        ((double)seq_StrelArray_data[sInd].nhood->size[0] + 1.0) / 2.0);
    center[1] = (int)floor(
        ((double)seq_StrelArray_data[sInd].nhood->size[1] + 1.0) / 2.0);
    nx = (int)size_nhood_idx_0 * seq_StrelArray_data[sInd].nhood->size[1];
    i1 = ii->size[0];
    ii->size[0] = idx->size[0];
    emxEnsureCapacity_int32_T(ii, i1);
    ii_data = ii->data;
    b_idx = idx->size[0];
    for (i1 = 0; i1 < b_idx; i1++) {
      ii_data[i1] = idx_data[i1] - 1;
    }
    i1 = vk->size[0];
    vk->size[0] = ii->size[0];
    emxEnsureCapacity_int32_T(vk, i1);
    idx_data = vk->data;
    b_idx = ii->size[0];
    for (i1 = 0; i1 < b_idx; i1++) {
      idx_data[i1] = div_s32(ii_data[i1], nx);
    }
    i1 = varargout_6->size[0];
    varargout_6->size[0] = vk->size[0];
    emxEnsureCapacity_int32_T(varargout_6, i1);
    varargout_6_data = varargout_6->data;
    b_idx = vk->size[0];
    for (i1 = 0; i1 < b_idx; i1++) {
      varargout_6_data[i1] = idx_data[i1] + 1;
      ii_data[i1] -= idx_data[i1] * nx;
    }
    i1 = vk->size[0];
    vk->size[0] = ii->size[0];
    emxEnsureCapacity_int32_T(vk, i1);
    idx_data = vk->data;
    b_idx = ii->size[0];
    for (i1 = 0; i1 < b_idx; i1++) {
      i2 = div_s32(ii_data[i1], (int)size_nhood_idx_0);
      idx_data[i1] = i2;
      ii_data[i1] -= i2 * (int)size_nhood_idx_0;
    }
    i1 = subs[0].f1->size[0];
    subs[0].f1->size[0] = ii->size[0];
    emxEnsureCapacity_real_T(subs[0].f1, i1);
    b_idx = ii->size[0];
    i1 = subs[1].f1->size[0];
    subs[1].f1->size[0] = vk->size[0];
    emxEnsureCapacity_real_T(subs[1].f1, i1);
    i1 = subs[2].f1->size[0];
    subs[2].f1->size[0] = varargout_6->size[0];
    emxEnsureCapacity_real_T(subs[2].f1, i1);
    for (i1 = 0; i1 < b_idx; i1++) {
      subs[0].f1->data[i1] = ii_data[i1] + 1;
      subs[1].f1->data[i1] = idx_data[i1] + 1;
      subs[2].f1->data[i1] = varargout_6_data[i1];
    }
    i1 = offsets_->size[0] * offsets_->size[1];
    offsets_->size[0] = subs[0].f1->size[0];
    offsets_->size[1] = 3;
    emxEnsureCapacity_real_T(offsets_, i1);
    offsets__data = offsets_->data;
    nx = 1;
    for (b_ii = 0; b_ii < 3; b_ii++) {
      i1 = subs[b_ii].f1->size[0] - 1;
      for (b_idx = 0; b_idx <= i1; b_idx++) {
        offsets__data[(nx + b_idx) - 1] = subs[b_ii].f1->data[b_idx];
      }
      if (subs[b_ii].f1->size[0] - 1 >= 0) {
        nx += subs[b_ii].f1->size[0];
      }
    }
    i1 = a->size[0] * a->size[1];
    a->size[0] = idx->size[0];
    a->size[1] = 3;
    emxEnsureCapacity_real_T(a, i1);
    a_data = a->data;
    b_idx = idx->size[0] * 3;
    for (i1 = 0; i1 < b_idx; i1++) {
      a_data[i1] = offsets__data[i1];
    }
    i1 = offsets_->size[0] * offsets_->size[1];
    offsets_->size[0] = idx->size[0];
    offsets_->size[1] = 3;
    emxEnsureCapacity_real_T(offsets_, i1);
    offsets__data = offsets_->data;
    if (idx->size[0] != 0) {
      nx = (a->size[0] != 1);
      for (k = 0; k < 3; k++) {
        i1 = offsets_->size[0] - 1;
        for (b_ii = 0; b_ii <= i1; b_ii++) {
          offsets__data[b_ii + offsets_->size[0] * k] =
              a_data[nx * b_ii + a->size[0] * k] - (double)center[k];
        }
      }
    }
    b_idx = offsets_->size[0];
    i1 = offsets_data[sInd].f1->size[0] * offsets_data[sInd].f1->size[1];
    offsets_data[sInd].f1->size[0] = offsets_->size[0];
    offsets_data[sInd].f1->size[1] = 2;
    emxEnsureCapacity_real_T(offsets_data[sInd].f1, i1);
    for (i1 = 0; i1 < 2; i1++) {
      for (i2 = 0; i2 < b_idx; i2++) {
        offsets_data[sInd].f1->data[i2 + offsets_data[sInd].f1->size[0] * i1] =
            offsets__data[i2 + offsets_->size[0] * i1];
      }
    }
  }
  emxFree_real_T(&a);
  emxFree_int32_T(&vk);
  emxFree_int32_T(&varargout_6);
  emxFree_int32_T(&ii);
  emxFree_real_T(&offsets_);
  emxFreeMatrix_cell_wrap_39(subs);
  emxFree_int32_T(&idx);
  c_emxFree_images_internal_coder(&seq_StrelArray);
  if (offsets->size[1] == 0) {
    pad_ul_size[0] = 1;
    pad_ul_size[1] = 2;
    pad_lr_size[0] = 1;
    pad_lr_size[1] = 2;
    pad_ul_data[0] = 0.0;
    pad_lr_data[0] = 0.0;
    pad_ul_data[1] = 0.0;
    pad_lr_data[1] = 0.0;
  } else {
    i = offsets->size[1];
    for (k = 0; k < i; k++) {
      boolean_T b;
      boolean_T empty_non_axis_sizes;
      b = ((offsets_data[k].f1->size[0] != 0) &&
           (offsets_data[k].f1->size[1] != 0));
      if (b) {
        nx = offsets_data[k].f1->size[0];
      } else if ((offsets_data[k].f1->size[0] != 0) &&
                 (2 - offsets_data[k].f1->size[1] != 0)) {
        nx = offsets_data[k].f1->size[0];
      } else {
        nx = offsets_data[k].f1->size[0];
        if (offsets_data[k].f1->size[0] > nx) {
          nx = offsets_data[k].f1->size[0];
        }
      }
      empty_non_axis_sizes = (nx == 0);
      if (empty_non_axis_sizes || b) {
        b_idx = offsets_data[k].f1->size[1];
      } else {
        b_idx = 0;
      }
      if (empty_non_axis_sizes || ((offsets_data[k].f1->size[0] != 0) &&
                                   (2 - offsets_data[k].f1->size[1] != 0))) {
        b_ii = 2 - offsets_data[k].f1->size[1];
      } else {
        b_ii = 0;
      }
      for (i1 = 0; i1 < b_idx; i1++) {
        for (i2 = 0; i2 < nx; i2++) {
          offsets_data[k].f1->data[i2 + offsets_data[k].f1->size[0] * i1] =
              offsets_data[k].f1->data[i2 + nx * i1];
        }
      }
      i1 = offsets_data[k].f1->size[0] * offsets_data[k].f1->size[1];
      offsets_data[k].f1->size[0] = nx;
      offsets_data[k].f1->size[1] = b_idx + b_ii;
      emxEnsureCapacity_real_T(offsets_data[k].f1, i1);
      for (i1 = 0; i1 < b_ii; i1++) {
        for (i2 = 0; i2 < nx; i2++) {
          offsets_data[k]
              .f1->data[i2 + offsets_data[k].f1->size[0] * (i1 + b_idx)] = 0.0;
        }
      }
    }
    pad_ul_size[0] = 1;
    pad_ul_size[1] = 2;
    pad_lr_size[0] = 1;
    pad_lr_size[1] = 2;
    pad_ul_data[0] = 0.0;
    pad_lr_data[0] = 0.0;
    pad_ul_data[1] = 0.0;
    pad_lr_data[1] = 0.0;
    i = offsets->size[1];
    emxInit_real_T(&minval, 2);
    for (k = 0; k < i; k++) {
      i1 = offsets_data[k].f1->size[0];
      i2 = offsets_data[k].f1->size[1];
      if ((offsets_data[k].f1->size[0] != 0) &&
          (offsets_data[k].f1->size[1] != 0)) {
        double b_b;
        nx = minval->size[0] * minval->size[1];
        minval->size[0] = 1;
        minval->size[1] = offsets_data[k].f1->size[1];
        emxEnsureCapacity_real_T(minval, nx);
        offsets__data = minval->data;
        if (offsets_data[k].f1->size[1] >= 1) {
          for (b_ii = 0; b_ii < i2; b_ii++) {
            offsets__data[b_ii] =
                offsets_data[k].f1->data[offsets_data[k].f1->size[0] * b_ii];
            for (b_idx = 2; b_idx <= i1; b_idx++) {
              b_b =
                  offsets_data[k]
                      .f1
                      ->data[(b_idx + offsets_data[k].f1->size[0] * b_ii) - 1];
              if (offsets__data[b_ii] > b_b) {
                offsets__data[b_ii] = b_b;
              }
            }
          }
        }
        pad_ul_size[0] = 1;
        pad_ul_size[1] = 2;
        b_b = -offsets__data[0];
        pad_ul_data[0] += fmax(0.0, b_b);
        b_b = -offsets__data[1];
        pad_ul_data[1] += fmax(0.0, b_b);
        nx = offsets_data[k].f1->size[0];
        i1 = offsets_data[k].f1->size[1];
        i2 = minval->size[0] * minval->size[1];
        minval->size[0] = 1;
        minval->size[1] = offsets_data[k].f1->size[1];
        emxEnsureCapacity_real_T(minval, i2);
        offsets__data = minval->data;
        if (offsets_data[k].f1->size[1] >= 1) {
          for (b_ii = 0; b_ii < i1; b_ii++) {
            offsets__data[b_ii] =
                offsets_data[k].f1->data[offsets_data[k].f1->size[0] * b_ii];
            for (b_idx = 2; b_idx <= nx; b_idx++) {
              b_b =
                  offsets_data[k]
                      .f1
                      ->data[(b_idx + offsets_data[k].f1->size[0] * b_ii) - 1];
              if (offsets__data[b_ii] < b_b) {
                offsets__data[b_ii] = b_b;
              }
            }
          }
        }
        pad_lr_size[0] = 1;
        pad_lr_size[1] = 2;
        b_b = offsets__data[0];
        pad_lr_data[0] += fmax(0.0, b_b);
        b_b = offsets__data[1];
        pad_lr_data[1] += fmax(0.0, b_b);
      }
    }
    emxFree_real_T(&minval);
  }
  emxFree_cell_wrap_38(&offsets);
}

/*
 * Arguments    : const c_emxArray_images_internal_code *obj_StrelArray
 *                const emxArray_cell_wrap_1 *obj_DecomposedStrelArray
 * Return Type  : boolean_T
 */
boolean_T strel_isdecompositionorthogonal(
    const c_emxArray_images_internal_code *obj_StrelArray,
    const emxArray_cell_wrap_1 *obj_DecomposedStrelArray)
{
  c_emxArray_images_internal_code *seq_StrelArray;
  c_images_internal_coder_strel_S *seq_StrelArray_data;
  emxArray_boolean_T *x;
  emxArray_cell_wrap_1 *expl_temp;
  emxArray_uint32_T *P;
  int nz[3];
  int i;
  int sInd;
  int vlen;
  int xpageoffset;
  unsigned int *P_data;
  boolean_T b_x[3];
  boolean_T TF;
  boolean_T exitg1;
  boolean_T *x_data;
  e_emxInit_images_internal_coder(&seq_StrelArray);
  emxInit_cell_wrap_1(&expl_temp);
  strel_decomposeImpl(obj_StrelArray, obj_DecomposedStrelArray, seq_StrelArray,
                      expl_temp);
  seq_StrelArray_data = seq_StrelArray->data;
  emxFree_cell_wrap_1(&expl_temp);
  emxInit_uint32_T(&P);
  vlen = P->size[0] * P->size[1];
  P->size[0] = seq_StrelArray->size[1];
  P->size[1] = 3;
  emxEnsureCapacity_uint32_T(P, vlen);
  P_data = P->data;
  xpageoffset = seq_StrelArray->size[1] * 3;
  for (vlen = 0; vlen < xpageoffset; vlen++) {
    P_data[vlen] = 1U;
  }
  vlen = seq_StrelArray->size[1];
  for (sInd = 0; sInd < vlen; sInd++) {
    P_data[sInd] = (unsigned int)seq_StrelArray_data[sInd].nhood->size[0];
    P_data[sInd + P->size[0]] =
        (unsigned int)seq_StrelArray_data[sInd].nhood->size[1];
    P_data[sInd + P->size[0] * 2] = 1U;
  }
  c_emxFree_images_internal_coder(&seq_StrelArray);
  vlen = P->size[0] * 3 - 1;
  for (i = 0; i <= vlen; i++) {
    if ((int)P_data[i] == 0) {
      P_data[i] = 1U;
    }
  }
  emxInit_boolean_T(&x, 2);
  vlen = x->size[0] * x->size[1];
  x->size[0] = P->size[0];
  x->size[1] = 3;
  emxEnsureCapacity_boolean_T(x, vlen);
  x_data = x->data;
  for (vlen = 0; vlen < xpageoffset; vlen++) {
    x_data[vlen] = ((int)P_data[vlen] != 1);
  }
  emxFree_uint32_T(&P);
  vlen = x->size[0];
  if (x->size[0] == 0) {
    nz[0] = 0;
    nz[1] = 0;
    nz[2] = 0;
  } else {
    for (i = 0; i < 3; i++) {
      xpageoffset = i * x->size[0];
      nz[i] = x_data[xpageoffset];
      for (sInd = 2; sInd <= vlen; sInd++) {
        nz[i] += x_data[(xpageoffset + sInd) - 1];
      }
    }
  }
  emxFree_boolean_T(&x);
  b_x[0] = (nz[0] == 1);
  b_x[1] = (nz[1] == 1);
  b_x[2] = (nz[2] == 1);
  TF = false;
  sInd = 0;
  exitg1 = false;
  while ((!exitg1) && (sInd < 3)) {
    if (b_x[sInd]) {
      TF = true;
      exitg1 = true;
    } else {
      sInd++;
    }
  }
  return TF;
}

/*
 * Arguments    : strel *obj
 *                double idx
 * Return Type  : void
 */
void strel_parenReference(strel *obj, double idx)
{
  d_emxArray_images_internal_code strelArray;
  emxArray_cell_wrap_1_1x1 decomposedStrelArray;
  int i;
  int loop_ub;
  c_emxInit_images_internal_coder(&strelArray);
  i = strelArray.size[0] * strelArray.size[1];
  strelArray.size[0] = 1;
  strelArray.size[1] = 1;
  c_emxEnsureCapacity_images_inte(&strelArray.data[0], strelArray.size, i);
  c_emxCopyStruct_images_internal(&strelArray.data[0],
                                  &obj->StrelArray->data[(int)idx - 1]);
  emxInit_cell_wrap_1_1x1(&decomposedStrelArray);
  i = decomposedStrelArray.size[0] * decomposedStrelArray.size[1];
  decomposedStrelArray.size[0] = 1;
  decomposedStrelArray.size[1] = 1;
  emxEnsureCapacity_cell_wrap_1(&decomposedStrelArray.data[0],
                                decomposedStrelArray.size, i);
  i = decomposedStrelArray.data[0].f1->size[0] *
      decomposedStrelArray.data[0].f1->size[1];
  decomposedStrelArray.data[0].f1->size[0] = 1;
  decomposedStrelArray.data[0].f1->size[1] =
      obj->DecomposedStrelArray->data[(int)idx - 1].f1->size[1];
  d_emxEnsureCapacity_images_inte(decomposedStrelArray.data[0].f1, i);
  loop_ub = obj->DecomposedStrelArray->data[(int)idx - 1].f1->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_emxCopyStruct_images_internal(
        &decomposedStrelArray.data[0].f1->data[i],
        &obj->DecomposedStrelArray->data[(int)idx - 1].f1->data[i]);
  }
  i = obj->StrelArray->size[0] * obj->StrelArray->size[1];
  obj->StrelArray->size[0] = 1;
  obj->StrelArray->size[1] = 1;
  d_emxEnsureCapacity_images_inte(obj->StrelArray, i);
  c_emxCopyStruct_images_internal(&obj->StrelArray->data[0],
                                  &strelArray.data[0]);
  d_emxFree_images_internal_coder(&strelArray);
  i = obj->DecomposedStrelArray->size[0] * obj->DecomposedStrelArray->size[1];
  obj->DecomposedStrelArray->size[0] = 1;
  obj->DecomposedStrelArray->size[1] = 1;
  emxEnsureCapacity_cell_wrap_11(obj->DecomposedStrelArray, i);
  emxCopyStruct_cell_wrap_1(&obj->DecomposedStrelArray->data[0],
                            &decomposedStrelArray.data[0]);
  emxFree_cell_wrap_1_1x1(&decomposedStrelArray);
}

/*
 * Arguments    : double varargin_2
 *                c_emxArray_images_internal_code *obj_StrelArray
 *                emxArray_cell_wrap_1 *obj_DecomposedStrelArray
 * Return Type  : void
 */
void strel_strel(double varargin_2,
                 c_emxArray_images_internal_code *obj_StrelArray,
                 emxArray_cell_wrap_1 *obj_DecomposedStrelArray)
{
  static const signed char iv[8] = {1, 1, 0, -1, 0, 1, 1, 1};
  c_emxArray_images_internal_code *strelObj_StrelArray;
  c_emxArray_images_internal_code *tempStrelArray;
  c_images_internal_coder_strel_S expl_temp;
  c_images_internal_coder_strel_S *strelObj_StrelArray_data;
  c_images_internal_coder_strel_S *tempStrelArray_data;
  cell_wrap_1 *decomposedData_data;
  d_emxArray_images_internal_code strelArray;
  e_emxArray_images_internal_code data;
  emxArray_boolean_T c_nhood;
  emxArray_boolean_T *nhood;
  emxArray_boolean_T *nhood_local;
  emxArray_cell_wrap_1 *decomposedData;
  emxArray_cell_wrap_1_1x1 decomposedStrelArray;
  emxArray_cell_wrap_1_1x2 b_decomposedData;
  emxArray_int32_T *ii;
  emxArray_int32_T *jj;
  emxArray_real32_T *b_nhood;
  emxArray_real_T *height_local;
  emxArray_real_T *rd;
  emxArray_real_T *yy;
  double *rd_data;
  double *y_data;
  double *yy_data;
  float *nhood_data;
  int absxk;
  int d_nhood;
  int i;
  int loop_ub;
  int q;
  int *ii_data;
  boolean_T *b_nhood_data;
  boolean_T *nhood_local_data;
  c_emxInit_images_internal_coder(&strelArray);
  emxInit_cell_wrap_1_1x1(&decomposedStrelArray);
  e_emxInit_images_internal_coder(&tempStrelArray);
  tempStrelArray_data = tempStrelArray->data;
  tempStrelArray->size[0] = 1;
  tempStrelArray->size[1] = 0;
  emxInit_real_T(&height_local, 2);
  emxInit_boolean_T(&nhood, 2);
  c_emxInitStruct_images_internal(&expl_temp);
  if (varargin_2 < 3.0) {
    double k;
    emxInit_real_T(&rd, 2);
    y_data = rd->data;
    if (varargin_2 < -varargin_2) {
      rd->size[0] = 1;
      rd->size[1] = 0;
    } else if ((rtIsInf(-varargin_2) || rtIsInf(varargin_2)) &&
               (-varargin_2 == varargin_2)) {
      i = rd->size[0] * rd->size[1];
      rd->size[0] = 1;
      rd->size[1] = 1;
      emxEnsureCapacity_real_T(rd, i);
      y_data = rd->data;
      y_data[0] = rtNaN;
    } else if (floor(-varargin_2) == -varargin_2) {
      i = rd->size[0] * rd->size[1];
      rd->size[0] = 1;
      loop_ub = (int)(varargin_2 - (-varargin_2));
      rd->size[1] = loop_ub + 1;
      emxEnsureCapacity_real_T(rd, i);
      y_data = rd->data;
      for (i = 0; i <= loop_ub; i++) {
        y_data[i] = -varargin_2 + (double)i;
      }
    } else {
      eml_float_colon(-varargin_2, varargin_2, rd);
      y_data = rd->data;
    }
    absxk = rd->size[1] - 1;
    i = height_local->size[0] * height_local->size[1];
    height_local->size[0] = rd->size[1];
    height_local->size[1] = rd->size[1];
    emxEnsureCapacity_real_T(height_local, i);
    rd_data = height_local->data;
    emxInit_real_T(&yy, 2);
    i = yy->size[0] * yy->size[1];
    yy->size[0] = rd->size[1];
    yy->size[1] = rd->size[1];
    emxEnsureCapacity_real_T(yy, i);
    yy_data = yy->data;
    if (rd->size[1] != 0) {
      for (q = 0; q <= absxk; q++) {
        for (loop_ub = 0; loop_ub <= absxk; loop_ub++) {
          rd_data[loop_ub + height_local->size[0] * q] = y_data[q];
          yy_data[loop_ub + yy->size[0] * q] = y_data[loop_ub];
        }
      }
    }
    emxFree_real_T(&rd);
    k = varargin_2 * varargin_2;
    if ((height_local->size[0] == yy->size[0]) &&
        (height_local->size[1] == yy->size[1])) {
      i = nhood->size[0] * nhood->size[1];
      nhood->size[0] = height_local->size[0];
      nhood->size[1] = height_local->size[1];
      emxEnsureCapacity_boolean_T(nhood, i);
      b_nhood_data = nhood->data;
      loop_ub = height_local->size[0] * height_local->size[1];
      for (i = 0; i < loop_ub; i++) {
        double scale;
        double t;
        scale = rd_data[i];
        t = yy_data[i];
        b_nhood_data[i] = (scale * scale + t * t <= k);
      }
    } else {
      binary_expand_op_1(nhood, height_local, yy, k);
      b_nhood_data = nhood->data;
    }
    emxFree_real_T(&yy);
  } else {
    double k;
    int exitg1;
    signed char v_data[16];
    boolean_T b_y;
    for (i = 0; i < 8; i++) {
      v_data[i] = iv[i];
    }
    k = 2.0 * varargin_2 / 5.0273394921258481;
    emxInit_cell_wrap_1(&decomposedData);
    decomposedData->size[0] = 1;
    decomposedData->size[1] = 0;
    emxInit_boolean_T(&nhood_local, 2);
    for (q = 0; q < 4; q++) {
      double v[2];
      double scale;
      double t;
      double y;
      signed char i1;
      scale = 3.3121686421112381E-170;
      i1 = v_data[q];
      absxk = (int)fabs((double)i1);
      if (absxk > 3.3121686421112381E-170) {
        y = 1.0;
        scale = 1.0;
      } else {
        t = (double)absxk / 3.3121686421112381E-170;
        y = t * t;
      }
      v[0] = i1;
      i1 = v_data[q + 4];
      absxk = (int)fabs((double)i1);
      if (absxk > scale) {
        y = y * scale * scale + 1.0;
        scale = 1.0;
      } else {
        t = (double)absxk / scale;
        y += t * t;
      }
      v[1] = i1;
      y = scale * sqrt(y);
      c_getNhoodAndHeightFromPeriodic(floor(k / y), v, nhood_local,
                                      height_local);
      rd_data = height_local->data;
      nhood_local_data = nhood_local->data;
      b_y = false;
      absxk = 0;
      do {
        exitg1 = 0;
        loop_ub = height_local->size[0] * height_local->size[1];
        if (absxk + 1 <= loop_ub) {
          if ((rd_data[absxk] == 0.0) || rtIsNaN(rd_data[absxk])) {
            absxk++;
          } else {
            b_y = true;
            exitg1 = 1;
          }
        } else {
          exitg1 = 1;
        }
      } while (exitg1 == 0);
      i = expl_temp.nhood->size[0] * expl_temp.nhood->size[1] *
          expl_temp.nhood->size[2];
      expl_temp.nhood->size[0] = nhood_local->size[0];
      expl_temp.nhood->size[1] = nhood_local->size[1];
      expl_temp.nhood->size[2] = 1;
      emxEnsureCapacity_boolean_T(expl_temp.nhood, i);
      absxk = nhood_local->size[0] * nhood_local->size[1];
      for (i = 0; i < absxk; i++) {
        expl_temp.nhood->data[i] = nhood_local_data[i];
      }
      i = expl_temp.height->size[0] * expl_temp.height->size[1] *
          expl_temp.height->size[2];
      expl_temp.height->size[0] = height_local->size[0];
      expl_temp.height->size[1] = height_local->size[1];
      expl_temp.height->size[2] = 1;
      emxEnsureCapacity_real_T(expl_temp.height, i);
      for (i = 0; i < loop_ub; i++) {
        expl_temp.height->data[i] = rd_data[i];
      }
      absxk = tempStrelArray->size[1] + 1;
      i = tempStrelArray->size[0] * tempStrelArray->size[1];
      tempStrelArray->size[0] = 1;
      tempStrelArray->size[1]++;
      d_emxEnsureCapacity_images_inte(tempStrelArray, i);
      tempStrelArray_data = tempStrelArray->data;
      expl_temp.Flat = !b_y;
      c_emxCopyStruct_images_internal(&tempStrelArray_data[absxk - 1],
                                      &expl_temp);
      i = decomposedData->size[0] * decomposedData->size[1];
      decomposedData->size[0] = 1;
      decomposedData->size[1]++;
      emxEnsureCapacity_cell_wrap_11(decomposedData, i);
      decomposedData_data = decomposedData->data;
      i = decomposedData_data[absxk - 1].f1->size[0] *
          decomposedData_data[absxk - 1].f1->size[1];
      decomposedData_data[absxk - 1].f1->size[0] = 1;
      d_emxEnsureCapacity_images_inte(decomposedData_data[absxk - 1].f1, i);
      decomposedData_data[decomposedData->size[1] - 1].f1->size[1] = 0;
    }
    emxInit_real32_T(&b_nhood);
    d_imdilate(tempStrelArray, decomposedData, b_nhood);
    nhood_data = b_nhood->data;
    i = nhood->size[0] * nhood->size[1];
    nhood->size[0] = b_nhood->size[0];
    nhood->size[1] = b_nhood->size[1];
    emxEnsureCapacity_boolean_T(nhood, i);
    b_nhood_data = nhood->data;
    loop_ub = b_nhood->size[0] * b_nhood->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_nhood_data[i] = (nhood_data[i] > 0.0F);
    }
    emxFree_real32_T(&b_nhood);
    emxInit_real_T(&rd, 1);
    emxInit_int32_T(&ii);
    emxInit_int32_T(&jj);
    if (nhood->size[0] != 1) {
      eml_find(nhood, ii, jj);
      ii_data = ii->data;
      i = rd->size[0];
      rd->size[0] = ii->size[0];
      emxEnsureCapacity_real_T(rd, i);
      rd_data = rd->data;
      loop_ub = ii->size[0];
      for (i = 0; i < loop_ub; i++) {
        rd_data[i] = ii_data[i];
      }
    } else {
      absxk = nhood->size[1];
      c_nhood = *nhood;
      d_nhood = absxk;
      c_nhood.size = &d_nhood;
      c_nhood.numDimensions = 1;
      b_eml_find(&c_nhood, ii, jj);
      ii_data = ii->data;
      i = rd->size[0];
      rd->size[0] = ii->size[0];
      emxEnsureCapacity_real_T(rd, i);
      rd_data = rd->data;
      loop_ub = ii->size[0];
      for (i = 0; i < loop_ub; i++) {
        rd_data[i] = ii_data[i];
      }
    }
    emxFree_int32_T(&jj);
    emxFree_int32_T(&ii);
    absxk = (int)floor(((double)nhood->size[0] + 1.0) / 2.0);
    loop_ub = rd->size[0];
    for (i = 0; i < loop_ub; i++) {
      rd_data[i] -= (double)absxk;
    }
    k = 2.0 * ((varargin_2 - maximum(rd)) - 1.0) + 1.0;
    emxFree_real_T(&rd);
    if (k >= 3.0) {
      boolean_T exitg2;
      getNhoodAndHeightFromLineParams(k, nhood_local, height_local);
      rd_data = height_local->data;
      nhood_local_data = nhood_local->data;
      b_y = false;
      absxk = 0;
      do {
        exitg1 = 0;
        loop_ub = height_local->size[0] * height_local->size[1];
        if (absxk + 1 <= loop_ub) {
          if ((rd_data[absxk] == 0.0) || rtIsNaN(rd_data[absxk])) {
            absxk++;
          } else {
            b_y = true;
            exitg1 = 1;
          }
        } else {
          exitg1 = 1;
        }
      } while (exitg1 == 0);
      i = expl_temp.nhood->size[0] * expl_temp.nhood->size[1] *
          expl_temp.nhood->size[2];
      expl_temp.nhood->size[0] = nhood_local->size[0];
      expl_temp.nhood->size[1] = nhood_local->size[1];
      expl_temp.nhood->size[2] = 1;
      emxEnsureCapacity_boolean_T(expl_temp.nhood, i);
      q = nhood_local->size[0] * nhood_local->size[1];
      for (i = 0; i < q; i++) {
        expl_temp.nhood->data[i] = nhood_local_data[i];
      }
      i = expl_temp.height->size[0] * expl_temp.height->size[1] *
          expl_temp.height->size[2];
      expl_temp.height->size[0] = height_local->size[0];
      expl_temp.height->size[1] = height_local->size[1];
      expl_temp.height->size[2] = 1;
      emxEnsureCapacity_real_T(expl_temp.height, i);
      for (i = 0; i < loop_ub; i++) {
        expl_temp.height->data[i] = rd_data[i];
      }
      if ((double)tempStrelArray->size[1] + 1.0 < 2.147483648E+9) {
        i = tempStrelArray->size[1] + 1;
      } else {
        i = MAX_int32_T;
      }
      absxk = tempStrelArray->size[0] * tempStrelArray->size[1];
      tempStrelArray->size[0] = 1;
      tempStrelArray->size[1]++;
      d_emxEnsureCapacity_images_inte(tempStrelArray, absxk);
      tempStrelArray_data = tempStrelArray->data;
      expl_temp.Flat = !b_y;
      c_emxCopyStruct_images_internal(&tempStrelArray_data[i - 1], &expl_temp);
      b_y = false;
      absxk = 0;
      exitg2 = false;
      while ((!exitg2) && (absxk + 1 <= loop_ub)) {
        if ((rd_data[absxk] == 0.0) || rtIsNaN(rd_data[absxk])) {
          absxk++;
        } else {
          b_y = true;
          exitg2 = true;
        }
      }
      i = expl_temp.nhood->size[0] * expl_temp.nhood->size[1] *
          expl_temp.nhood->size[2];
      expl_temp.nhood->size[0] = nhood_local->size[0];
      expl_temp.nhood->size[1] = nhood_local->size[1];
      expl_temp.nhood->size[2] = 1;
      emxEnsureCapacity_boolean_T(expl_temp.nhood, i);
      for (i = 0; i < q; i++) {
        expl_temp.nhood->data[i] = nhood_local_data[i];
      }
      i = expl_temp.height->size[0] * expl_temp.height->size[1] *
          expl_temp.height->size[2];
      expl_temp.height->size[0] = height_local->size[0];
      expl_temp.height->size[1] = height_local->size[1];
      expl_temp.height->size[2] = 1;
      emxEnsureCapacity_real_T(expl_temp.height, i);
      for (i = 0; i < loop_ub; i++) {
        expl_temp.height->data[i] = rd_data[i];
      }
      d_emxInit_images_internal_coder(&data);
      i = data.size[0] * data.size[1];
      data.size[0] = 1;
      data.size[1] = 1;
      e_emxEnsureCapacity_images_inte(data.data, data.size, i);
      i = data.data[0].nhood->size[0] * data.data[0].nhood->size[1] *
          data.data[0].nhood->size[2];
      data.data[0].nhood->size[0] = expl_temp.nhood->size[0];
      data.data[0].nhood->size[1] = expl_temp.nhood->size[1];
      data.data[0].nhood->size[2] = 1;
      emxEnsureCapacity_boolean_T(data.data[0].nhood, i);
      for (i = 0; i < q; i++) {
        data.data[0].nhood->data[i] = expl_temp.nhood->data[i];
      }
      i = data.data[0].height->size[0] * data.data[0].height->size[1] *
          data.data[0].height->size[2];
      data.data[0].height->size[0] = expl_temp.height->size[0];
      data.data[0].height->size[1] = expl_temp.height->size[1];
      data.data[0].height->size[2] = 1;
      emxEnsureCapacity_real_T(data.data[0].height, i);
      for (i = 0; i < loop_ub; i++) {
        data.data[0].height->data[i] = expl_temp.height->data[i];
      }
      data.data[0].Flat = !b_y;
      emxInit_cell_wrap_1_1x2(&b_decomposedData);
      i = b_decomposedData.size[0] * b_decomposedData.size[1];
      b_decomposedData.size[0] = 1;
      b_decomposedData.size[1] = 1;
      emxEnsureCapacity_cell_wrap_12(b_decomposedData.data,
                                     b_decomposedData.size, i);
      b_decomposedData.data[0].f1->size[0] = 1;
      b_decomposedData.data[0].f1->size[1] = 0;
      b_getNhoodAndHeightFromLinePara(k, nhood_local, height_local);
      rd_data = height_local->data;
      nhood_local_data = nhood_local->data;
      b_y = false;
      absxk = 0;
      do {
        exitg1 = 0;
        loop_ub = height_local->size[0] * height_local->size[1];
        if (absxk + 1 <= loop_ub) {
          if ((rd_data[absxk] == 0.0) || rtIsNaN(rd_data[absxk])) {
            absxk++;
          } else {
            b_y = true;
            exitg1 = 1;
          }
        } else {
          exitg1 = 1;
        }
      } while (exitg1 == 0);
      i = expl_temp.nhood->size[0] * expl_temp.nhood->size[1] *
          expl_temp.nhood->size[2];
      expl_temp.nhood->size[0] = nhood_local->size[0];
      expl_temp.nhood->size[1] = nhood_local->size[1];
      expl_temp.nhood->size[2] = 1;
      emxEnsureCapacity_boolean_T(expl_temp.nhood, i);
      q = nhood_local->size[0] * nhood_local->size[1];
      for (i = 0; i < q; i++) {
        expl_temp.nhood->data[i] = nhood_local_data[i];
      }
      i = expl_temp.height->size[0] * expl_temp.height->size[1] *
          expl_temp.height->size[2];
      expl_temp.height->size[0] = height_local->size[0];
      expl_temp.height->size[1] = height_local->size[1];
      expl_temp.height->size[2] = 1;
      emxEnsureCapacity_real_T(expl_temp.height, i);
      for (i = 0; i < loop_ub; i++) {
        expl_temp.height->data[i] = rd_data[i];
      }
      if ((double)tempStrelArray->size[1] + 1.0 < 2.147483648E+9) {
        i = tempStrelArray->size[1] + 1;
      } else {
        i = MAX_int32_T;
      }
      absxk = tempStrelArray->size[0] * tempStrelArray->size[1];
      tempStrelArray->size[0] = 1;
      tempStrelArray->size[1]++;
      d_emxEnsureCapacity_images_inte(tempStrelArray, absxk);
      tempStrelArray_data = tempStrelArray->data;
      expl_temp.Flat = !b_y;
      c_emxCopyStruct_images_internal(&tempStrelArray_data[i - 1], &expl_temp);
      b_y = false;
      absxk = 0;
      exitg2 = false;
      while ((!exitg2) && (absxk + 1 <= loop_ub)) {
        if ((rd_data[absxk] == 0.0) || rtIsNaN(rd_data[absxk])) {
          absxk++;
        } else {
          b_y = true;
          exitg2 = true;
        }
      }
      i = expl_temp.nhood->size[0] * expl_temp.nhood->size[1] *
          expl_temp.nhood->size[2];
      expl_temp.nhood->size[0] = nhood_local->size[0];
      expl_temp.nhood->size[1] = nhood_local->size[1];
      expl_temp.nhood->size[2] = 1;
      emxEnsureCapacity_boolean_T(expl_temp.nhood, i);
      for (i = 0; i < q; i++) {
        expl_temp.nhood->data[i] = nhood_local_data[i];
      }
      i = expl_temp.height->size[0] * expl_temp.height->size[1] *
          expl_temp.height->size[2];
      expl_temp.height->size[0] = height_local->size[0];
      expl_temp.height->size[1] = height_local->size[1];
      expl_temp.height->size[2] = 1;
      emxEnsureCapacity_real_T(expl_temp.height, i);
      for (i = 0; i < loop_ub; i++) {
        expl_temp.height->data[i] = rd_data[i];
      }
      i = data.size[0] * data.size[1];
      data.size[0] = 1;
      data.size[1] = 2;
      e_emxEnsureCapacity_images_inte(data.data, data.size, i);
      i = data.data[1].nhood->size[0] * data.data[1].nhood->size[1] *
          data.data[1].nhood->size[2];
      data.data[1].nhood->size[0] = expl_temp.nhood->size[0];
      data.data[1].nhood->size[1] = expl_temp.nhood->size[1];
      data.data[1].nhood->size[2] = 1;
      emxEnsureCapacity_boolean_T(data.data[1].nhood, i);
      for (i = 0; i < q; i++) {
        data.data[1].nhood->data[i] = expl_temp.nhood->data[i];
      }
      i = data.data[1].height->size[0] * data.data[1].height->size[1] *
          data.data[1].height->size[2];
      data.data[1].height->size[0] = expl_temp.height->size[0];
      data.data[1].height->size[1] = expl_temp.height->size[1];
      data.data[1].height->size[2] = 1;
      emxEnsureCapacity_real_T(data.data[1].height, i);
      for (i = 0; i < loop_ub; i++) {
        data.data[1].height->data[i] = expl_temp.height->data[i];
      }
      data.data[1].Flat = !b_y;
      i = b_decomposedData.size[0] * b_decomposedData.size[1];
      b_decomposedData.size[0] = 1;
      b_decomposedData.size[1] = 2;
      emxEnsureCapacity_cell_wrap_12(b_decomposedData.data,
                                     b_decomposedData.size, i);
      b_decomposedData.data[1].f1->size[0] = 1;
      b_decomposedData.data[1].f1->size[1] = 0;
      e_emxInit_images_internal_coder(&strelObj_StrelArray);
      i = strelObj_StrelArray->size[0] * strelObj_StrelArray->size[1];
      strelObj_StrelArray->size[0] = 1;
      strelObj_StrelArray->size[1] = 2;
      d_emxEnsureCapacity_images_inte(strelObj_StrelArray, i);
      strelObj_StrelArray_data = strelObj_StrelArray->data;
      for (i = 0; i < 2; i++) {
        c_emxCopyStruct_images_internal(&strelObj_StrelArray_data[i],
                                        &data.data[i]);
      }
      e_emxFree_images_internal_coder(&data);
      i = decomposedData->size[0] * decomposedData->size[1];
      decomposedData->size[0] = 1;
      decomposedData->size[1] = 2;
      emxEnsureCapacity_cell_wrap_11(decomposedData, i);
      decomposedData_data = decomposedData->data;
      for (i = 0; i < 2; i++) {
        emxCopyStruct_cell_wrap_1(&decomposedData_data[i],
                                  &b_decomposedData.data[i]);
      }
      emxFree_cell_wrap_1_1x2(&b_decomposedData);
      i = nhood_local->size[0] * nhood_local->size[1];
      nhood_local->size[0] = nhood->size[0];
      nhood_local->size[1] = nhood->size[1];
      emxEnsureCapacity_boolean_T(nhood_local, i);
      nhood_local_data = nhood_local->data;
      loop_ub = nhood->size[0] * nhood->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        nhood_local_data[i] = b_nhood_data[i];
      }
      e_imdilate(nhood_local, strelObj_StrelArray, decomposedData, nhood);
      b_nhood_data = nhood->data;
      c_emxFree_images_internal_coder(&strelObj_StrelArray);
    }
    emxFree_boolean_T(&nhood_local);
    emxFree_cell_wrap_1(&decomposedData);
  }
  emxFree_real_T(&height_local);
  i = expl_temp.nhood->size[0] * expl_temp.nhood->size[1] *
      expl_temp.nhood->size[2];
  expl_temp.nhood->size[0] = nhood->size[0];
  expl_temp.nhood->size[1] = nhood->size[1];
  expl_temp.nhood->size[2] = 1;
  emxEnsureCapacity_boolean_T(expl_temp.nhood, i);
  q = nhood->size[0] * nhood->size[1];
  for (i = 0; i < q; i++) {
    expl_temp.nhood->data[i] = b_nhood_data[i];
  }
  i = expl_temp.height->size[0] * expl_temp.height->size[1] *
      expl_temp.height->size[2];
  expl_temp.height->size[0] = nhood->size[0];
  expl_temp.height->size[1] = nhood->size[1];
  expl_temp.height->size[2] = 1;
  emxEnsureCapacity_real_T(expl_temp.height, i);
  absxk = nhood->size[0] * nhood->size[1];
  emxFree_boolean_T(&nhood);
  for (i = 0; i < absxk; i++) {
    expl_temp.height->data[i] = 0.0;
  }
  i = strelArray.size[0] * strelArray.size[1];
  strelArray.size[0] = 1;
  strelArray.size[1] = 1;
  c_emxEnsureCapacity_images_inte(&strelArray.data[0], strelArray.size, i);
  i = strelArray.data[0].nhood->size[0] * strelArray.data[0].nhood->size[1] *
      strelArray.data[0].nhood->size[2];
  strelArray.data[0].nhood->size[0] = expl_temp.nhood->size[0];
  strelArray.data[0].nhood->size[1] = expl_temp.nhood->size[1];
  strelArray.data[0].nhood->size[2] = 1;
  emxEnsureCapacity_boolean_T(strelArray.data[0].nhood, i);
  for (i = 0; i < q; i++) {
    strelArray.data[0].nhood->data[i] = expl_temp.nhood->data[i];
  }
  i = strelArray.data[0].height->size[0] * strelArray.data[0].height->size[1] *
      strelArray.data[0].height->size[2];
  strelArray.data[0].height->size[0] = expl_temp.height->size[0];
  strelArray.data[0].height->size[1] = expl_temp.height->size[1];
  strelArray.data[0].height->size[2] = 1;
  emxEnsureCapacity_real_T(strelArray.data[0].height, i);
  for (i = 0; i < absxk; i++) {
    strelArray.data[0].height->data[i] = expl_temp.height->data[i];
  }
  c_emxFreeStruct_images_internal(&expl_temp);
  strelArray.data[0].Flat = true;
  i = decomposedStrelArray.size[0] * decomposedStrelArray.size[1];
  decomposedStrelArray.size[0] = 1;
  decomposedStrelArray.size[1] = 1;
  emxEnsureCapacity_cell_wrap_1(&decomposedStrelArray.data[0],
                                decomposedStrelArray.size, i);
  i = decomposedStrelArray.data[0].f1->size[0] *
      decomposedStrelArray.data[0].f1->size[1];
  decomposedStrelArray.data[0].f1->size[0] = 1;
  decomposedStrelArray.data[0].f1->size[1] = tempStrelArray->size[1];
  d_emxEnsureCapacity_images_inte(decomposedStrelArray.data[0].f1, i);
  loop_ub = tempStrelArray->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_emxCopyStruct_images_internal(&decomposedStrelArray.data[0].f1->data[i],
                                    &tempStrelArray_data[i]);
  }
  c_emxFree_images_internal_coder(&tempStrelArray);
  i = obj_StrelArray->size[0] * obj_StrelArray->size[1];
  obj_StrelArray->size[0] = 1;
  obj_StrelArray->size[1] = 1;
  d_emxEnsureCapacity_images_inte(obj_StrelArray, i);
  tempStrelArray_data = obj_StrelArray->data;
  c_emxCopyStruct_images_internal(&tempStrelArray_data[0], &strelArray.data[0]);
  d_emxFree_images_internal_coder(&strelArray);
  i = obj_DecomposedStrelArray->size[0] * obj_DecomposedStrelArray->size[1];
  obj_DecomposedStrelArray->size[0] = 1;
  obj_DecomposedStrelArray->size[1] = 1;
  emxEnsureCapacity_cell_wrap_11(obj_DecomposedStrelArray, i);
  decomposedData_data = obj_DecomposedStrelArray->data;
  emxCopyStruct_cell_wrap_1(&decomposedData_data[0],
                            &decomposedStrelArray.data[0]);
  emxFree_cell_wrap_1_1x1(&decomposedStrelArray);
}

/*
 * File trailer for strel.c
 *
 * [EOF]
 */
