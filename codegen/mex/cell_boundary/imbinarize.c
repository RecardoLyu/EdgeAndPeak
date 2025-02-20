/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imbinarize.c
 *
 * Code generation for function 'imbinarize'
 *
 */

/* Include files */
#include "imbinarize.h"
#include "cell_boundary_data.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "libmwgetnumcores.h"
#include "libmwtbbhist.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo p_emlrtRSI = {
    70,           /* lineNo */
    "imbinarize", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\imbinarize.m" /* pathName
                                                                        */
};

static emlrtRSInfo q_emlrtRSI = {
    104,                      /* lineNo */
    "computeGlobalThreshold", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\imbinarize.m" /* pathName
                                                                        */
};

static emlrtRSInfo r_emlrtRSI =
    {
        133,      /* lineNo */
        "imhist", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\imhist.m" /* pathName
                                                                        */
};

static emlrtRSInfo v_emlrtRSI =
    {
        452,             /* lineNo */
        "calcHistogram", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\imhist.m" /* pathName
                                                                        */
};

static emlrtRSInfo w_emlrtRSI =
    {
        456,             /* lineNo */
        "calcHistogram", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\imhist.m" /* pathName
                                                                        */
};

static emlrtRSInfo x_emlrtRSI = {
    37,           /* lineNo */
    "otsuthresh", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\otsuthresh.m" /* pathName
                                                                        */
};

static emlrtRSInfo y_emlrtRSI = {
    85,           /* lineNo */
    "otsuthresh", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\otsuthresh.m" /* pathName
                                                                        */
};

static emlrtRTEInfo c_emlrtRTEI = {
    14,               /* lineNo */
    37,               /* colNo */
    "validatefinite", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatefinite.m" /* pName */
};

/* Function Definitions */
void imbinarize(const emlrtStack *sp, const uint16_T b_I[1960000],
                boolean_T BW[1960000])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T localBins1[256];
  real_T localBins2[256];
  real_T localBins3[256];
  real_T y[256];
  real_T idx;
  real_T maxval;
  real_T numCores;
  real_T num_maxval;
  real_T p;
  int32_T i;
  int32_T idx1;
  boolean_T exitg1;
  boolean_T nanFlag;
  boolean_T rngFlag;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &p_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &q_emlrtRSI;
  c_st.site = &r_emlrtRSI;
  numCores = 1.0;
  getnumcores(&numCores);
  if (numCores > 1.0) {
    nanFlag = false;
    rngFlag = false;
    tbbhist_uint16_scaled(&b_I[0], 1.96E+6, 1400.0, 1400.0, &y[0], 256.0,
                          65535.0, 256.0, &rngFlag, &nanFlag);
  } else {
    memset(&y[0], 0, 256U * sizeof(real_T));
    memset(&localBins1[0], 0, 256U * sizeof(real_T));
    memset(&localBins2[0], 0, 256U * sizeof(real_T));
    memset(&localBins3[0], 0, 256U * sizeof(real_T));
    for (i = 0; i <= 1959996; i += 4) {
      int32_T idx2;
      int32_T idx3;
      int32_T idx4;
      idx1 = (int32_T)((real_T)b_I[i] * 0.0038910505836575876 + 0.5);
      idx2 = (int32_T)((real_T)b_I[i + 1] * 0.0038910505836575876 + 0.5);
      idx3 = (int32_T)((real_T)b_I[i + 2] * 0.0038910505836575876 + 0.5);
      idx4 = (int32_T)((real_T)b_I[i + 3] * 0.0038910505836575876 + 0.5);
      if (idx1 > 255) {
        localBins1[255]++;
      } else {
        localBins1[idx1]++;
      }
      if (idx2 > 255) {
        localBins2[255]++;
      } else {
        localBins2[idx2]++;
      }
      if (idx3 > 255) {
        localBins3[255]++;
      } else {
        localBins3[idx3]++;
      }
      if (idx4 > 255) {
        y[255]++;
      } else {
        y[idx4]++;
      }
    }
    while (i + 1 <= 1960000) {
      idx1 = (int32_T)((real_T)b_I[i] * 0.0038910505836575876 + 0.5);
      if (idx1 > 255) {
        y[255]++;
      } else {
        y[idx1]++;
      }
      i++;
    }
    for (i = 0; i <= 254; i += 2) {
      __m128d r;
      __m128d r1;
      __m128d r2;
      __m128d r3;
      r = _mm_loadu_pd(&y[i]);
      r1 = _mm_loadu_pd(&localBins1[i]);
      r2 = _mm_loadu_pd(&localBins2[i]);
      r3 = _mm_loadu_pd(&localBins3[i]);
      _mm_storeu_pd(&y[i], _mm_add_pd(_mm_add_pd(_mm_add_pd(r, r1), r2), r3));
    }
    rngFlag = false;
    nanFlag = false;
  }
  if (rngFlag) {
    d_st.site = &v_emlrtRSI;
    warning(&d_st);
  }
  if (nanFlag) {
    d_st.site = &w_emlrtRSI;
    b_warning(&d_st);
  }
  b_st.site = &q_emlrtRSI;
  c_st.site = &x_emlrtRSI;
  d_st.site = &ab_emlrtRSI;
  rngFlag = true;
  idx1 = 0;
  exitg1 = false;
  while ((!exitg1) && (idx1 < 256)) {
    if ((!muDoubleScalarIsInf(y[idx1])) && (!muDoubleScalarIsNaN(y[idx1]))) {
      idx1++;
    } else {
      rngFlag = false;
      exitg1 = true;
    }
  }
  if (!rngFlag) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &c_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedFinite",
        "MATLAB:otsuthresh:expectedFinite", 3, 4, 6, "COUNTS");
  }
  d_st.site = &ab_emlrtRSI;
  rngFlag = true;
  idx1 = 0;
  exitg1 = false;
  while ((!exitg1) && (idx1 < 256)) {
    if (!(y[idx1] < 0.0)) {
      idx1++;
    } else {
      rngFlag = false;
      exitg1 = true;
    }
  }
  if (!rngFlag) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &d_emlrtRTEI,
        "Coder:toolbox:ValidateattributesexpectedNonnegative",
        "MATLAB:otsuthresh:expectedNonnegative", 3, 4, 6, "COUNTS");
  }
  numCores = 0.0;
  for (idx1 = 0; idx1 < 256; idx1++) {
    numCores += y[idx1];
  }
  localBins1[0] = y[0] / numCores;
  localBins2[0] = localBins1[0];
  for (idx1 = 0; idx1 < 255; idx1++) {
    p = y[idx1 + 1] / numCores;
    localBins1[idx1 + 1] = localBins1[idx1] + p;
    localBins2[idx1 + 1] = localBins2[idx1] + p * ((real_T)idx1 + 2.0);
  }
  maxval = rtMinusInf;
  idx = 0.0;
  num_maxval = 0.0;
  for (idx1 = 0; idx1 < 255; idx1++) {
    c_st.site = &y_emlrtRSI;
    numCores = localBins1[idx1];
    p = localBins2[255] * numCores - localBins2[idx1];
    numCores = p * p / (numCores * (1.0 - numCores));
    if (numCores > maxval) {
      maxval = numCores;
      idx = (real_T)idx1 + 1.0;
      num_maxval = 1.0;
    } else if (numCores == maxval) {
      idx += (real_T)idx1 + 1.0;
      num_maxval++;
    }
  }
  if (!muDoubleScalarIsInf(maxval)) {
    idx /= num_maxval;
    numCores = (idx - 1.0) / 255.0;
  } else {
    numCores = 0.0;
  }
  numCores *= 65535.0;
  for (idx1 = 0; idx1 < 1960000; idx1++) {
    BW[idx1] = (b_I[idx1] > numCores);
  }
}

/* End of code generation (imbinarize.c) */
