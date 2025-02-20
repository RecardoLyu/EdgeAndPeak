/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * padarray.c
 *
 * Code generation for function 'padarray'
 *
 */

/* Include files */
#include "padarray.h"
#include "cell_boundary_data.h"
#include "cell_boundary_emxutil.h"
#include "cell_boundary_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "validateattributes.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo bi_emlrtRSI =
    {
        707,           /* lineNo */
        "ConstantPad", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\padarray.m" /* pathName
                                                                          */
};

static emlrtRSInfo ci_emlrtRSI =
    {
        714,           /* lineNo */
        "ConstantPad", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\padarray.m" /* pathName
                                                                          */
};

static emlrtBCInfo ic_emlrtBCI = {
    -1,            /* iFirst */
    -1,            /* iLast */
    709,           /* lineNo */
    19,            /* colNo */
    "",            /* aName */
    "ConstantPad", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\padarray.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = {
    -1,            /* iFirst */
    -1,            /* iLast */
    709,           /* lineNo */
    21,            /* colNo */
    "",            /* aName */
    "ConstantPad", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\padarray.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = {
    -1,            /* iFirst */
    -1,            /* iLast */
    730,           /* lineNo */
    28,            /* colNo */
    "",            /* aName */
    "ConstantPad", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\padarray.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = {
    -1,            /* iFirst */
    -1,            /* iLast */
    730,           /* lineNo */
    30,            /* colNo */
    "",            /* aName */
    "ConstantPad", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\padarray.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = {
    -1,            /* iFirst */
    -1,            /* iLast */
    730,           /* lineNo */
    19,            /* colNo */
    "",            /* aName */
    "ConstantPad", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\padarray.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = {
    -1,            /* iFirst */
    -1,            /* iLast */
    730,           /* lineNo */
    21,            /* colNo */
    "",            /* aName */
    "ConstantPad", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\padarray.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = {
    -1,            /* iFirst */
    -1,            /* iLast */
    715,           /* lineNo */
    19,            /* colNo */
    "",            /* aName */
    "ConstantPad", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\padarray.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = {
    -1,            /* iFirst */
    -1,            /* iLast */
    715,           /* lineNo */
    21,            /* colNo */
    "",            /* aName */
    "ConstantPad", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\padarray.m", /* pName
                                                                       */
    0 /* checkKind */
};

/* Function Definitions */
void b_padarray(const emlrtStack *sp, const emxArray_boolean_T *varargin_1,
                const real_T varargin_2_data[], emxArray_boolean_T *b)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T unnamed_idx_0;
  real_T unnamed_idx_1;
  int32_T a;
  int32_T b_i;
  int32_T b_tmp;
  int32_T i;
  int32_T j;
  const boolean_T *varargin_1_data;
  boolean_T *b_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  varargin_1_data = varargin_1->data;
  st.site = &xh_emlrtRSI;
  b_st.site = &yh_emlrtRSI;
  st.site = &wh_emlrtRSI;
  b_validateattributes(&st, varargin_2_data);
  st.site = &vh_emlrtRSI;
  unnamed_idx_0 = (real_T)varargin_1->size[0] + varargin_2_data[0];
  if (unnamed_idx_0 != (int32_T)muDoubleScalarFloor(unnamed_idx_0)) {
    emlrtIntegerCheckR2012b(unnamed_idx_0, &cb_emlrtDCI, &st);
  }
  unnamed_idx_1 = (real_T)varargin_1->size[1] + varargin_2_data[1];
  if (unnamed_idx_1 != (int32_T)muDoubleScalarFloor(unnamed_idx_1)) {
    emlrtIntegerCheckR2012b(unnamed_idx_1, &cb_emlrtDCI, &st);
  }
  i = b->size[0] * b->size[1];
  b->size[0] = (int32_T)unnamed_idx_0;
  b_tmp = (int32_T)unnamed_idx_1;
  b->size[1] = (int32_T)unnamed_idx_1;
  emxEnsureCapacity_boolean_T(&st, b, i, &df_emlrtRTEI);
  b_data = b->data;
  a = varargin_1->size[1] + 1;
  b_st.site = &bi_emlrtRSI;
  if ((varargin_1->size[1] + 1 <= (int32_T)unnamed_idx_1) &&
      ((int32_T)unnamed_idx_1 > 2147483646)) {
    c_st.site = &tc_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (j = a; j <= b_tmp; j++) {
    i = b->size[0];
    for (b_i = 0; b_i < i; b_i++) {
      if (b_i + 1 > b->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, b->size[0], &ic_emlrtBCI,
                                      &st);
      }
      if ((j < 1) || (j > b->size[1])) {
        emlrtDynamicBoundsCheckR2012b(j, 1, b->size[1], &jc_emlrtBCI, &st);
      }
      b_data[b_i + b->size[0] * (j - 1)] = false;
    }
  }
  i = varargin_1->size[1];
  a = varargin_1->size[0] + 1;
  for (j = 0; j < i; j++) {
    b_tmp = b->size[0];
    b_st.site = &ci_emlrtRSI;
    if ((varargin_1->size[0] + 1 <= b->size[0]) && (b->size[0] > 2147483646)) {
      c_st.site = &tc_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (b_i = a; b_i <= b_tmp; b_i++) {
      if ((b_i < 1) || (b_i > b->size[0])) {
        emlrtDynamicBoundsCheckR2012b(b_i, 1, b->size[0], &oc_emlrtBCI, &st);
      }
      if (j + 1 > b->size[1]) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, b->size[1], &pc_emlrtBCI, &st);
      }
      b_data[(b_i + b->size[0] * j) - 1] = false;
    }
  }
  i = varargin_1->size[1];
  b_tmp = varargin_1->size[0];
  for (j = 0; j < i; j++) {
    for (b_i = 0; b_i < b_tmp; b_i++) {
      if (b_i + 1 > varargin_1->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, varargin_1->size[0],
                                      &kc_emlrtBCI, &st);
      }
      if (j + 1 > varargin_1->size[1]) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, varargin_1->size[1],
                                      &lc_emlrtBCI, &st);
      }
      if (b_i + 1 > b->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, b->size[0], &mc_emlrtBCI,
                                      &st);
      }
      if (j + 1 > b->size[1]) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, b->size[1], &nc_emlrtBCI, &st);
      }
      b_data[b_i + b->size[0] * j] =
          varargin_1_data[b_i + varargin_1->size[0] * j];
    }
  }
}

void c_padarray(const emlrtStack *sp, const emxArray_boolean_T *varargin_1,
                const real_T varargin_2_data[], emxArray_boolean_T *b)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T unnamed_idx_0;
  real_T unnamed_idx_1;
  int32_T a;
  int32_T b_i;
  int32_T b_tmp;
  int32_T i;
  int32_T j;
  const boolean_T *varargin_1_data;
  boolean_T *b_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  varargin_1_data = varargin_1->data;
  st.site = &xh_emlrtRSI;
  b_st.site = &yh_emlrtRSI;
  st.site = &wh_emlrtRSI;
  b_validateattributes(&st, varargin_2_data);
  st.site = &vh_emlrtRSI;
  unnamed_idx_0 = (real_T)varargin_1->size[0] + varargin_2_data[0];
  if (unnamed_idx_0 != (int32_T)muDoubleScalarFloor(unnamed_idx_0)) {
    emlrtIntegerCheckR2012b(unnamed_idx_0, &cb_emlrtDCI, &st);
  }
  unnamed_idx_1 = (real_T)varargin_1->size[1] + varargin_2_data[1];
  if (unnamed_idx_1 != (int32_T)muDoubleScalarFloor(unnamed_idx_1)) {
    emlrtIntegerCheckR2012b(unnamed_idx_1, &cb_emlrtDCI, &st);
  }
  i = b->size[0] * b->size[1];
  b->size[0] = (int32_T)unnamed_idx_0;
  b_tmp = (int32_T)unnamed_idx_1;
  b->size[1] = (int32_T)unnamed_idx_1;
  emxEnsureCapacity_boolean_T(&st, b, i, &df_emlrtRTEI);
  b_data = b->data;
  a = varargin_1->size[1] + 1;
  b_st.site = &bi_emlrtRSI;
  if ((varargin_1->size[1] + 1 <= (int32_T)unnamed_idx_1) &&
      ((int32_T)unnamed_idx_1 > 2147483646)) {
    c_st.site = &tc_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (j = a; j <= b_tmp; j++) {
    i = b->size[0];
    for (b_i = 0; b_i < i; b_i++) {
      if (b_i + 1 > b->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, b->size[0], &ic_emlrtBCI,
                                      &st);
      }
      if ((j < 1) || (j > b->size[1])) {
        emlrtDynamicBoundsCheckR2012b(j, 1, b->size[1], &jc_emlrtBCI, &st);
      }
      b_data[b_i + b->size[0] * (j - 1)] = true;
    }
  }
  i = varargin_1->size[1];
  a = varargin_1->size[0] + 1;
  for (j = 0; j < i; j++) {
    b_tmp = b->size[0];
    b_st.site = &ci_emlrtRSI;
    if ((varargin_1->size[0] + 1 <= b->size[0]) && (b->size[0] > 2147483646)) {
      c_st.site = &tc_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (b_i = a; b_i <= b_tmp; b_i++) {
      if ((b_i < 1) || (b_i > b->size[0])) {
        emlrtDynamicBoundsCheckR2012b(b_i, 1, b->size[0], &oc_emlrtBCI, &st);
      }
      if (j + 1 > b->size[1]) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, b->size[1], &pc_emlrtBCI, &st);
      }
      b_data[(b_i + b->size[0] * j) - 1] = true;
    }
  }
  i = varargin_1->size[1];
  b_tmp = varargin_1->size[0];
  for (j = 0; j < i; j++) {
    for (b_i = 0; b_i < b_tmp; b_i++) {
      if (b_i + 1 > varargin_1->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, varargin_1->size[0],
                                      &kc_emlrtBCI, &st);
      }
      if (j + 1 > varargin_1->size[1]) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, varargin_1->size[1],
                                      &lc_emlrtBCI, &st);
      }
      if (b_i + 1 > b->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, b->size[0], &mc_emlrtBCI,
                                      &st);
      }
      if (j + 1 > b->size[1]) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, b->size[1], &nc_emlrtBCI, &st);
      }
      b_data[b_i + b->size[0] * j] =
          varargin_1_data[b_i + varargin_1->size[0] * j];
    }
  }
}

void padarray(const emlrtStack *sp, const emxArray_real32_T *varargin_1,
              const real_T varargin_2_data[], emxArray_real32_T *b)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T unnamed_idx_0;
  real_T unnamed_idx_1;
  int32_T a;
  int32_T b_i;
  int32_T b_tmp;
  int32_T i;
  int32_T j;
  const real32_T *varargin_1_data;
  real32_T *b_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  varargin_1_data = varargin_1->data;
  st.site = &xh_emlrtRSI;
  b_st.site = &yh_emlrtRSI;
  st.site = &wh_emlrtRSI;
  b_validateattributes(&st, varargin_2_data);
  st.site = &vh_emlrtRSI;
  unnamed_idx_0 = (real_T)varargin_1->size[0] + varargin_2_data[0];
  if (unnamed_idx_0 != (int32_T)muDoubleScalarFloor(unnamed_idx_0)) {
    emlrtIntegerCheckR2012b(unnamed_idx_0, &r_emlrtDCI, &st);
  }
  unnamed_idx_1 = (real_T)varargin_1->size[1] + varargin_2_data[1];
  if (unnamed_idx_1 != (int32_T)muDoubleScalarFloor(unnamed_idx_1)) {
    emlrtIntegerCheckR2012b(unnamed_idx_1, &r_emlrtDCI, &st);
  }
  i = b->size[0] * b->size[1];
  b->size[0] = (int32_T)unnamed_idx_0;
  b_tmp = (int32_T)unnamed_idx_1;
  b->size[1] = (int32_T)unnamed_idx_1;
  emxEnsureCapacity_real32_T(&st, b, i, &jc_emlrtRTEI);
  b_data = b->data;
  a = varargin_1->size[1] + 1;
  b_st.site = &bi_emlrtRSI;
  if ((varargin_1->size[1] + 1 <= (int32_T)unnamed_idx_1) &&
      ((int32_T)unnamed_idx_1 > 2147483646)) {
    c_st.site = &tc_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (j = a; j <= b_tmp; j++) {
    i = b->size[0];
    for (b_i = 0; b_i < i; b_i++) {
      if (b_i + 1 > b->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, b->size[0], &ic_emlrtBCI,
                                      &st);
      }
      if ((j < 1) || (j > b->size[1])) {
        emlrtDynamicBoundsCheckR2012b(j, 1, b->size[1], &jc_emlrtBCI, &st);
      }
      b_data[b_i + b->size[0] * (j - 1)] = rtMinusInfF;
    }
  }
  i = varargin_1->size[1];
  a = varargin_1->size[0] + 1;
  for (j = 0; j < i; j++) {
    b_tmp = b->size[0];
    b_st.site = &ci_emlrtRSI;
    if ((varargin_1->size[0] + 1 <= b->size[0]) && (b->size[0] > 2147483646)) {
      c_st.site = &tc_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (b_i = a; b_i <= b_tmp; b_i++) {
      if ((b_i < 1) || (b_i > b->size[0])) {
        emlrtDynamicBoundsCheckR2012b(b_i, 1, b->size[0], &oc_emlrtBCI, &st);
      }
      if (j + 1 > b->size[1]) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, b->size[1], &pc_emlrtBCI, &st);
      }
      b_data[(b_i + b->size[0] * j) - 1] = rtMinusInfF;
    }
  }
  i = varargin_1->size[1];
  b_tmp = varargin_1->size[0];
  for (j = 0; j < i; j++) {
    for (b_i = 0; b_i < b_tmp; b_i++) {
      if (b_i + 1 > varargin_1->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, varargin_1->size[0],
                                      &kc_emlrtBCI, &st);
      }
      if (j + 1 > varargin_1->size[1]) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, varargin_1->size[1],
                                      &lc_emlrtBCI, &st);
      }
      if (b_i + 1 > b->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, b->size[0], &mc_emlrtBCI,
                                      &st);
      }
      if (j + 1 > b->size[1]) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, b->size[1], &nc_emlrtBCI, &st);
      }
      b_data[b_i + b->size[0] * j] =
          varargin_1_data[b_i + varargin_1->size[0] * j];
    }
  }
}

/* End of code generation (padarray.c) */
