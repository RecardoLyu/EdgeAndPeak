/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * intline.c
 *
 * Code generation for function 'intline'
 *
 */

/* Include files */
#include "intline.h"
#include "cell_boundary_data.h"
#include "cell_boundary_emxutil.h"
#include "cell_boundary_types.h"
#include "colon.h"
#include "round.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <emmintrin.h>

/* Variable Definitions */
static emlrtRSInfo wi_emlrtRSI = {
    47,        /* lineNo */
    "intline", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\imuitools\\+iptui\\intline.m" /* pathName
                                                                           */
};

static emlrtRSInfo xi_emlrtRSI = {
    46,        /* lineNo */
    "intline", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\imuitools\\+iptui\\intline.m" /* pathName
                                                                           */
};

static emlrtRSInfo yi_emlrtRSI = {
    45,        /* lineNo */
    "intline", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\imuitools\\+iptui\\intline.m" /* pathName
                                                                           */
};

static emlrtRSInfo aj_emlrtRSI = {
    42,        /* lineNo */
    "intline", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\imuitools\\+iptui\\intline.m" /* pathName
                                                                           */
};

static emlrtRSInfo bj_emlrtRSI = {
    41,        /* lineNo */
    "intline", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\imuitools\\+iptui\\intline.m" /* pathName
                                                                           */
};

static emlrtRSInfo cj_emlrtRSI = {
    32,        /* lineNo */
    "intline", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\imuitools\\+iptui\\intline.m" /* pathName
                                                                           */
};

static emlrtRSInfo dj_emlrtRSI = {
    31,        /* lineNo */
    "intline", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\imuitools\\+iptui\\intline.m" /* pathName
                                                                           */
};

static emlrtRSInfo fj_emlrtRSI = {
    23,       /* lineNo */
    "flipud", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\flipud.m" /* pathName
                                                                        */
};

static emlrtRTEInfo ve_emlrtRTEI = {
    17,        /* lineNo */
    3,         /* colNo */
    "intline", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\imuitools\\+iptui\\intline.m" /* pName
                                                                           */
};

static emlrtRTEInfo we_emlrtRTEI = {
    18,        /* lineNo */
    3,         /* colNo */
    "intline", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\imuitools\\+iptui\\intline.m" /* pName
                                                                           */
};

static emlrtRTEInfo xe_emlrtRTEI = {
    31,        /* lineNo */
    3,         /* colNo */
    "intline", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\imuitools\\+iptui\\intline.m" /* pName
                                                                           */
};

static emlrtRTEInfo ye_emlrtRTEI = {
    41,        /* lineNo */
    3,         /* colNo */
    "intline", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\imuitools\\+iptui\\intline.m" /* pName
                                                                           */
};

static emlrtRTEInfo af_emlrtRTEI = {
    32,        /* lineNo */
    3,         /* colNo */
    "intline", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\imuitools\\+iptui\\intline.m" /* pName
                                                                           */
};

static emlrtRTEInfo bf_emlrtRTEI = {
    42,        /* lineNo */
    3,         /* colNo */
    "intline", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\imuitools\\+iptui\\intline.m" /* pName
                                                                           */
};

static emlrtRTEInfo cf_emlrtRTEI = {
    41,        /* lineNo */
    8,         /* colNo */
    "intline", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\imuitools\\+iptui\\intline.m" /* pName
                                                                           */
};

/* Function Definitions */
void intline(const emlrtStack *sp, real_T x1, real_T x2, real_T b_y1, real_T y2,
             emxArray_real_T *x, emxArray_real_T *y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *b_y;
  real_T dx;
  real_T dx_tmp;
  real_T dy;
  real_T dy_tmp;
  real_T *b_y_data;
  real_T *x_data;
  real_T *y_data;
  int32_T e_flip;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  dx_tmp = x2 - x1;
  dx = muDoubleScalarAbs(dx_tmp);
  dy_tmp = y2 - b_y1;
  dy = muDoubleScalarAbs(dy_tmp);
  emxInit_real_T(sp, &b_y, 2, &cf_emlrtRTEI, true);
  y_data = b_y->data;
  if ((dx == 0.0) && (dy == 0.0)) {
    i = x->size[0];
    x->size[0] = 1;
    emxEnsureCapacity_real_T(sp, x, i, &ve_emlrtRTEI);
    x_data = x->data;
    x_data[0] = x1;
    i = y->size[0];
    y->size[0] = 1;
    emxEnsureCapacity_real_T(sp, y, i, &we_emlrtRTEI);
    b_y_data = y->data;
    b_y_data[0] = b_y1;
  } else {
    int32_T loop_ub_tmp;
    int32_T m;
    int32_T md2;
    e_flip = 0;
    if (dx >= dy) {
      dy_tmp /= dx_tmp;
      st.site = &dj_emlrtRSI;
      b_st.site = &ee_emlrtRSI;
      if (muDoubleScalarIsNaN(x1) || muDoubleScalarIsNaN(x2)) {
        i = b_y->size[0] * b_y->size[1];
        b_y->size[0] = 1;
        b_y->size[1] = 1;
        emxEnsureCapacity_real_T(&b_st, b_y, i, &hb_emlrtRTEI);
        y_data = b_y->data;
        y_data[0] = rtNaN;
      } else if (x2 < x1) {
        b_y->size[0] = 1;
        b_y->size[1] = 0;
      } else if ((muDoubleScalarIsInf(x1) || muDoubleScalarIsInf(x2)) &&
                 (x1 == x2)) {
        i = b_y->size[0] * b_y->size[1];
        b_y->size[0] = 1;
        b_y->size[1] = 1;
        emxEnsureCapacity_real_T(&b_st, b_y, i, &hb_emlrtRTEI);
        y_data = b_y->data;
        y_data[0] = rtNaN;
      } else if (muDoubleScalarFloor(x1) == x1) {
        i = b_y->size[0] * b_y->size[1];
        b_y->size[0] = 1;
        loop_ub_tmp = (int32_T)dx_tmp;
        b_y->size[1] = (int32_T)dx_tmp + 1;
        emxEnsureCapacity_real_T(&b_st, b_y, i, &hb_emlrtRTEI);
        y_data = b_y->data;
        for (i = 0; i <= loop_ub_tmp; i++) {
          y_data[i] = x1 + (real_T)i;
        }
      } else {
        c_st.site = &fe_emlrtRSI;
        eml_float_colon(&c_st, x1, x2, b_y);
        y_data = b_y->data;
      }
      i = x->size[0];
      x->size[0] = b_y->size[1];
      emxEnsureCapacity_real_T(sp, x, i, &xe_emlrtRTEI);
      x_data = x->data;
      loop_ub_tmp = b_y->size[1];
      for (i = 0; i < loop_ub_tmp; i++) {
        x_data[i] = y_data[i];
      }
      i = y->size[0];
      y->size[0] = x->size[0];
      emxEnsureCapacity_real_T(sp, y, i, &af_emlrtRTEI);
      b_y_data = y->data;
      loop_ub_tmp = x->size[0];
      m = (loop_ub_tmp / 2) << 1;
      md2 = m - 2;
      for (i = 0; i <= md2; i += 2) {
        __m128d r;
        r = _mm_loadu_pd(&x_data[i]);
        _mm_storeu_pd(&b_y_data[i],
                      _mm_add_pd(_mm_set1_pd(b_y1),
                                 _mm_mul_pd(_mm_set1_pd(dy_tmp),
                                            _mm_sub_pd(r, _mm_set1_pd(x1)))));
      }
      for (i = m; i < loop_ub_tmp; i++) {
        b_y_data[i] = b_y1 + dy_tmp * (x_data[i] - x1);
      }
      st.site = &cj_emlrtRSI;
      b_round(&st, y);
      b_y_data = y->data;
    } else {
      if (b_y1 > y2) {
        dx = x1;
        x1 = x2;
        x2 = dx;
        dx = b_y1;
        b_y1 = y2;
        y2 = dx;
        e_flip = 1;
      }
      dx = y2 - b_y1;
      dy_tmp = (x2 - x1) / dx;
      st.site = &bj_emlrtRSI;
      b_st.site = &ee_emlrtRSI;
      if (muDoubleScalarIsNaN(b_y1) || muDoubleScalarIsNaN(y2)) {
        i = b_y->size[0] * b_y->size[1];
        b_y->size[0] = 1;
        b_y->size[1] = 1;
        emxEnsureCapacity_real_T(&b_st, b_y, i, &hb_emlrtRTEI);
        y_data = b_y->data;
        y_data[0] = rtNaN;
      } else if (y2 < b_y1) {
        b_y->size[0] = 1;
        b_y->size[1] = 0;
      } else if ((muDoubleScalarIsInf(b_y1) || muDoubleScalarIsInf(y2)) &&
                 (b_y1 == y2)) {
        i = b_y->size[0] * b_y->size[1];
        b_y->size[0] = 1;
        b_y->size[1] = 1;
        emxEnsureCapacity_real_T(&b_st, b_y, i, &hb_emlrtRTEI);
        y_data = b_y->data;
        y_data[0] = rtNaN;
      } else if (muDoubleScalarFloor(b_y1) == b_y1) {
        i = b_y->size[0] * b_y->size[1];
        b_y->size[0] = 1;
        loop_ub_tmp = (int32_T)dx;
        b_y->size[1] = (int32_T)dx + 1;
        emxEnsureCapacity_real_T(&b_st, b_y, i, &hb_emlrtRTEI);
        y_data = b_y->data;
        for (i = 0; i <= loop_ub_tmp; i++) {
          y_data[i] = b_y1 + (real_T)i;
        }
      } else {
        c_st.site = &fe_emlrtRSI;
        eml_float_colon(&c_st, b_y1, y2, b_y);
        y_data = b_y->data;
      }
      i = y->size[0];
      y->size[0] = b_y->size[1];
      emxEnsureCapacity_real_T(sp, y, i, &ye_emlrtRTEI);
      b_y_data = y->data;
      loop_ub_tmp = b_y->size[1];
      for (i = 0; i < loop_ub_tmp; i++) {
        b_y_data[i] = y_data[i];
      }
      i = x->size[0];
      x->size[0] = y->size[0];
      emxEnsureCapacity_real_T(sp, x, i, &bf_emlrtRTEI);
      x_data = x->data;
      loop_ub_tmp = y->size[0];
      m = (loop_ub_tmp / 2) << 1;
      md2 = m - 2;
      for (i = 0; i <= md2; i += 2) {
        __m128d r;
        r = _mm_loadu_pd(&b_y_data[i]);
        _mm_storeu_pd(&x_data[i],
                      _mm_add_pd(_mm_set1_pd(x1),
                                 _mm_mul_pd(_mm_set1_pd(dy_tmp),
                                            _mm_sub_pd(r, _mm_set1_pd(b_y1)))));
      }
      for (i = m; i < loop_ub_tmp; i++) {
        x_data[i] = x1 + dy_tmp * (b_y_data[i] - b_y1);
      }
      st.site = &aj_emlrtRSI;
      b_round(&st, x);
      x_data = x->data;
    }
    st.site = &yi_emlrtRSI;
    if (e_flip != 0) {
      st.site = &xi_emlrtRSI;
      m = x->size[0] - 1;
      md2 = x->size[0] >> 1;
      b_st.site = &fj_emlrtRSI;
      for (e_flip = 0; e_flip < md2; e_flip++) {
        dx = x_data[e_flip];
        loop_ub_tmp = m - e_flip;
        x_data[e_flip] = x_data[loop_ub_tmp];
        x_data[loop_ub_tmp] = dx;
      }
      st.site = &wi_emlrtRSI;
      m = y->size[0] - 1;
      md2 = y->size[0] >> 1;
      b_st.site = &fj_emlrtRSI;
      for (e_flip = 0; e_flip < md2; e_flip++) {
        dx = b_y_data[e_flip];
        loop_ub_tmp = m - e_flip;
        b_y_data[e_flip] = b_y_data[loop_ub_tmp];
        b_y_data[loop_ub_tmp] = dx;
      }
    }
  }
  emxFree_real_T(sp, &b_y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (intline.c) */
