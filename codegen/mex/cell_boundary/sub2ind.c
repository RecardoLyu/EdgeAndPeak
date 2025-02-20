/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sub2ind.c
 *
 * Code generation for function 'sub2ind'
 *
 */

/* Include files */
#include "sub2ind.h"
#include "cell_boundary_emxutil.h"
#include "cell_boundary_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo
    j_emlrtRTEI =
        {
            28,        /* lineNo */
            19,        /* colNo */
            "sub2ind", /* fName */
            "D:\\Program "
            "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sub2ind.m" /* pName */
};

static emlrtRTEInfo
    k_emlrtRTEI =
        {
            18,        /* lineNo */
            23,        /* colNo */
            "sub2ind", /* fName */
            "D:\\Program "
            "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sub2ind.m" /* pName */
};

static emlrtRTEInfo
    ac_emlrtRTEI =
        {
            35,        /* lineNo */
            5,         /* colNo */
            "sub2ind", /* fName */
            "D:\\Program "
            "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sub2ind.m" /* pName */
};

/* Function Definitions */
void sub2ind(const emlrtStack *sp, const int32_T siz[2],
             const emxArray_real_T *varargin_1,
             const emxArray_real_T *varargin_2, emxArray_int32_T *idx)
{
  const real_T *varargin_1_data;
  const real_T *varargin_2_data;
  int32_T i;
  int32_T k;
  int32_T *idx_data;
  uint32_T b_varargin_1[2];
  uint32_T b_varargin_2[2];
  boolean_T exitg1;
  boolean_T p;
  varargin_2_data = varargin_2->data;
  varargin_1_data = varargin_1->data;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= varargin_1->size[0] - 1)) {
    if ((varargin_1_data[k] >= 1.0) && (varargin_1_data[k] <= siz[0])) {
      k++;
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &j_emlrtRTEI,
                                    "MATLAB:sub2ind:IndexOutOfRange",
                                    "MATLAB:sub2ind:IndexOutOfRange", 0);
    }
  }
  b_varargin_1[0] = (uint32_T)varargin_1->size[0];
  b_varargin_1[1] = 1U;
  b_varargin_2[0] = (uint32_T)varargin_2->size[0];
  b_varargin_2[1] = 1U;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if ((int32_T)b_varargin_1[k] != (int32_T)b_varargin_2[k]) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(sp, &k_emlrtRTEI,
                                  "MATLAB:sub2ind:SubscriptVectorSize",
                                  "MATLAB:sub2ind:SubscriptVectorSize", 0);
  }
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= varargin_2->size[0] - 1)) {
    if ((varargin_2_data[k] >= 1.0) && (varargin_2_data[k] <= siz[1])) {
      k++;
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &j_emlrtRTEI,
                                    "MATLAB:sub2ind:IndexOutOfRange",
                                    "MATLAB:sub2ind:IndexOutOfRange", 0);
    }
  }
  i = idx->size[0];
  idx->size[0] = varargin_1->size[0];
  emxEnsureCapacity_int32_T(sp, idx, i, &ac_emlrtRTEI);
  idx_data = idx->data;
  k = varargin_1->size[0];
  for (i = 0; i < k; i++) {
    idx_data[i] = (int32_T)varargin_1_data[i] +
                  siz[0] * ((int32_T)varargin_2_data[i] - 1);
  }
}

/* End of code generation (sub2ind.c) */
