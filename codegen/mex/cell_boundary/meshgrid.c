/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * meshgrid.c
 *
 * Code generation for function 'meshgrid'
 *
 */

/* Include files */
#include "meshgrid.h"
#include "cell_boundary_data.h"
#include "cell_boundary_emxutil.h"
#include "cell_boundary_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo ie_emlrtRSI = {
    31,         /* lineNo */
    "meshgrid", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\meshgrid.m" /* pathName
                                                                          */
};

static emlrtRSInfo je_emlrtRSI = {
    32,         /* lineNo */
    "meshgrid", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\meshgrid.m" /* pathName
                                                                          */
};

static emlrtRTEInfo fb_emlrtRTEI = {
    20,         /* lineNo */
    25,         /* colNo */
    "meshgrid", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\meshgrid.m" /* pName
                                                                          */
};

static emlrtRTEInfo gb_emlrtRTEI = {
    21,         /* lineNo */
    25,         /* colNo */
    "meshgrid", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\meshgrid.m" /* pName
                                                                          */
};

/* Function Definitions */
void meshgrid(const emlrtStack *sp, const emxArray_real_T *x,
              emxArray_real_T *xx, emxArray_real_T *yy)
{
  emlrtStack b_st;
  emlrtStack st;
  const real_T *x_data;
  real_T *xx_data;
  real_T *yy_data;
  int32_T i;
  int32_T j;
  int32_T nx;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  x_data = x->data;
  nx = x->size[1];
  j = xx->size[0] * xx->size[1];
  xx->size[0] = x->size[1];
  xx->size[1] = x->size[1];
  emxEnsureCapacity_real_T(sp, xx, j, &fb_emlrtRTEI);
  xx_data = xx->data;
  j = yy->size[0] * yy->size[1];
  yy->size[0] = x->size[1];
  yy->size[1] = x->size[1];
  emxEnsureCapacity_real_T(sp, yy, j, &gb_emlrtRTEI);
  yy_data = yy->data;
  if (x->size[1] != 0) {
    st.site = &ie_emlrtRSI;
    if (x->size[1] > 2147483646) {
      b_st.site = &tc_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (j = 0; j < nx; j++) {
      st.site = &je_emlrtRSI;
      if (nx > 2147483646) {
        b_st.site = &tc_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }
      for (i = 0; i < nx; i++) {
        xx_data[i + xx->size[0] * j] = x_data[j];
        yy_data[i + yy->size[0] * j] = x_data[i];
      }
    }
  }
}

/* End of code generation (meshgrid.c) */
