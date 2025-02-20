/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * repmat.c
 *
 * Code generation for function 'repmat'
 *
 */

/* Include files */
#include "repmat.h"
#include "cell_boundary_data.h"
#include "cell_boundary_emxutil.h"
#include "cell_boundary_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo pe_emlrtRSI = {
    71,       /* lineNo */
    "repmat", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" /* pathName
                                                                        */
};

static emlrtRTEInfo wb_emlrtRTEI = {
    59,       /* lineNo */
    28,       /* colNo */
    "repmat", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" /* pName
                                                                        */
};

/* Function Definitions */
void b_repmat(int32_T b_size[2])
{
  b_size[0] = 1;
  b_size[1] = 0;
}

void repmat(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *b)
{
  emlrtStack b_st;
  emlrtStack st;
  const real_T *a_data;
  real_T *b_data;
  int32_T jtilecol;
  int32_T k;
  int32_T nrows;
  boolean_T overflow;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  a_data = a->data;
  nrows = b->size[0] * b->size[1];
  b->size[0] = a->size[0];
  b->size[1] = 2;
  emxEnsureCapacity_real_T(sp, b, nrows, &wb_emlrtRTEI);
  b_data = b->data;
  nrows = a->size[0];
  overflow = (a->size[0] > 2147483646);
  for (jtilecol = 0; jtilecol < 2; jtilecol++) {
    int32_T ibtile;
    ibtile = jtilecol * nrows;
    st.site = &pe_emlrtRSI;
    if (overflow) {
      b_st.site = &tc_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (k = 0; k < nrows; k++) {
      b_data[ibtile + k] = a_data[k];
    }
  }
}

/* End of code generation (repmat.c) */
