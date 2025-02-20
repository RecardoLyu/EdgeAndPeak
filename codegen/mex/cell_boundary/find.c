/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * find.c
 *
 * Code generation for function 'find'
 *
 */

/* Include files */
#include "find.h"
#include "cell_boundary_data.h"
#include "cell_boundary_emxutil.h"
#include "cell_boundary_types.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "warning.h"

/* Variable Definitions */
static emlrtRSInfo oi_emlrtRSI =
    {
        138,        /* lineNo */
        "eml_find", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                          */
};

static emlrtRSInfo pi_emlrtRSI =
    {
        253,                           /* lineNo */
        "find_first_nonempty_triples", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                          */
};

static emlrtRSInfo qi_emlrtRSI =
    {
        254,                           /* lineNo */
        "find_first_nonempty_triples", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                          */
};

static emlrtRSInfo ri_emlrtRSI =
    {
        255,                           /* lineNo */
        "find_first_nonempty_triples", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                          */
};

static emlrtRTEInfo x_emlrtRTEI =
    {
        239,                           /* lineNo */
        1,                             /* colNo */
        "find_first_nonempty_triples", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                          */
};

static emlrtRTEInfo je_emlrtRTEI =
    {
        195,    /* lineNo */
        24,     /* colNo */
        "find", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                          */
};

static emlrtRTEInfo ke_emlrtRTEI =
    {
        197,    /* lineNo */
        24,     /* colNo */
        "find", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                          */
};

static emlrtRTEInfo le_emlrtRTEI =
    {
        199,    /* lineNo */
        24,     /* colNo */
        "find", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                          */
};

static emlrtRTEInfo me_emlrtRTEI =
    {
        253,    /* lineNo */
        5,      /* colNo */
        "find", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                          */
};

static emlrtRTEInfo ne_emlrtRTEI =
    {
        254,    /* lineNo */
        5,      /* colNo */
        "find", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                          */
};

static emlrtRTEInfo oe_emlrtRTEI =
    {
        45,     /* lineNo */
        20,     /* colNo */
        "find", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                          */
};

/* Function Definitions */
void b_eml_find(const emlrtStack *sp, const emxArray_boolean_T *x,
                emxArray_int32_T *i, emxArray_int32_T *j)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_boolean_T *v;
  int32_T b_i;
  int32_T idx;
  int32_T ii;
  int32_T *i_data;
  int32_T *j_data;
  const boolean_T *x_data;
  boolean_T *v_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  x_data = x->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &oi_emlrtRSI;
  idx = 0;
  b_i = i->size[0];
  i->size[0] = x->size[0];
  emxEnsureCapacity_int32_T(&st, i, b_i, &je_emlrtRTEI);
  i_data = i->data;
  b_i = j->size[0];
  j->size[0] = x->size[0];
  emxEnsureCapacity_int32_T(&st, j, b_i, &ke_emlrtRTEI);
  j_data = j->data;
  emxInit_boolean_T(&st, &v, 1, &oe_emlrtRTEI, true);
  b_i = v->size[0];
  v->size[0] = x->size[0];
  emxEnsureCapacity_boolean_T(&st, v, b_i, &le_emlrtRTEI);
  v_data = v->data;
  ii = 1;
  int32_T exitg1;
  boolean_T b;
  boolean_T guard1;
  do {
    exitg1 = 0;
    b = x_data[ii - 1];
    guard1 = false;
    if (b) {
      idx++;
      i_data[idx - 1] = ii;
      j_data[idx - 1] = 1;
      v_data[idx - 1] = true;
      if (idx >= x->size[0]) {
        exitg1 = 1;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
    if (guard1) {
      ii++;
      if (ii > x->size[0]) {
        exitg1 = 1;
      }
    }
  } while (exitg1 == 0);
  if (idx > x->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &x_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (x->size[0] == 1) {
    if (idx == 0) {
      i->size[0] = 0;
      j->size[0] = 0;
    }
  } else {
    int32_T iv[2];
    if (idx < 1) {
      b_i = 0;
    } else {
      b_i = idx;
    }
    iv[0] = 1;
    iv[1] = b_i;
    b_st.site = &pi_emlrtRSI;
    indexShapeCheck(&b_st, i->size[0], iv);
    ii = i->size[0];
    i->size[0] = b_i;
    emxEnsureCapacity_int32_T(&st, i, ii, &me_emlrtRTEI);
    iv[0] = 1;
    iv[1] = b_i;
    b_st.site = &qi_emlrtRSI;
    indexShapeCheck(&b_st, j->size[0], iv);
    ii = j->size[0];
    j->size[0] = b_i;
    emxEnsureCapacity_int32_T(&st, j, ii, &ne_emlrtRTEI);
    iv[0] = 1;
    iv[1] = b_i;
    b_st.site = &ri_emlrtRSI;
    indexShapeCheck(&b_st, v->size[0], iv);
  }
  emxFree_boolean_T(&st, &v);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void eml_find(const emlrtStack *sp, const emxArray_boolean_T *x,
              emxArray_int32_T *i, emxArray_int32_T *j)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_boolean_T *v;
  int32_T idx;
  int32_T ii;
  int32_T jj;
  int32_T k;
  int32_T *i_data;
  int32_T *j_data;
  const boolean_T *x_data;
  boolean_T exitg1;
  boolean_T *v_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  x_data = x->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  k = x->size[0] * x->size[1];
  st.site = &oi_emlrtRSI;
  idx = 0;
  jj = i->size[0];
  i->size[0] = k;
  emxEnsureCapacity_int32_T(&st, i, jj, &je_emlrtRTEI);
  i_data = i->data;
  jj = j->size[0];
  j->size[0] = k;
  emxEnsureCapacity_int32_T(&st, j, jj, &ke_emlrtRTEI);
  j_data = j->data;
  emxInit_boolean_T(&st, &v, 1, &oe_emlrtRTEI, true);
  jj = v->size[0];
  v->size[0] = k;
  emxEnsureCapacity_boolean_T(&st, v, jj, &le_emlrtRTEI);
  v_data = v->data;
  ii = 1;
  jj = 1;
  exitg1 = false;
  while ((!exitg1) && (jj <= x->size[1])) {
    boolean_T b;
    boolean_T guard1;
    b = x_data[(ii + x->size[0] * (jj - 1)) - 1];
    guard1 = false;
    if (b) {
      idx++;
      i_data[idx - 1] = ii;
      j_data[idx - 1] = jj;
      v_data[idx - 1] = true;
      if (idx >= k) {
        exitg1 = true;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
    if (guard1) {
      ii++;
      if (ii > x->size[0]) {
        ii = 1;
        jj++;
      }
    }
  }
  if (idx > k) {
    emlrtErrorWithMessageIdR2018a(&st, &x_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (k == 1) {
    if (idx == 0) {
      i->size[0] = 0;
      j->size[0] = 0;
    }
  } else {
    int32_T iv[2];
    if (idx < 1) {
      jj = 0;
    } else {
      jj = idx;
    }
    iv[0] = 1;
    iv[1] = jj;
    b_st.site = &pi_emlrtRSI;
    indexShapeCheck(&b_st, i->size[0], iv);
    ii = i->size[0];
    i->size[0] = jj;
    emxEnsureCapacity_int32_T(&st, i, ii, &me_emlrtRTEI);
    iv[0] = 1;
    iv[1] = jj;
    b_st.site = &qi_emlrtRSI;
    indexShapeCheck(&b_st, j->size[0], iv);
    ii = j->size[0];
    j->size[0] = jj;
    emxEnsureCapacity_int32_T(&st, j, ii, &ne_emlrtRTEI);
    iv[0] = 1;
    iv[1] = jj;
    b_st.site = &ri_emlrtRSI;
    indexShapeCheck(&b_st, v->size[0], iv);
  }
  emxFree_boolean_T(&st, &v);
  if ((x->size[0] == 1) && (i->size[0] != 1) && (x->size[1] >= 2)) {
    st.site = &eh_emlrtRSI;
    c_warning(&st);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (find.c) */
