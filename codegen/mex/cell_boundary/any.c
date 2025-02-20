/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * any.c
 *
 * Code generation for function 'any'
 *
 */

/* Include files */
#include "any.h"
#include "cell_boundary_data.h"
#include "cell_boundary_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo be_emlrtRSI =
    {
        13,    /* lineNo */
        "any", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\ops\\any.m" /* pathName
                                                                       */
};

/* Function Definitions */
boolean_T any(const emlrtStack *sp, const emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const real_T *x_data;
  int32_T ix;
  boolean_T exitg1;
  boolean_T y;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  x_data = x->data;
  st.site = &be_emlrtRSI;
  y = false;
  b_st.site = &ce_emlrtRSI;
  if (x->size[0] > 2147483646) {
    c_st.site = &tc_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  ix = 0;
  exitg1 = false;
  while ((!exitg1) && (ix + 1 <= x->size[0])) {
    if ((x_data[ix] == 0.0) || muDoubleScalarIsNaN(x_data[ix])) {
      ix++;
    } else {
      y = true;
      exitg1 = true;
    }
  }
  return y;
}

/* End of code generation (any.c) */
