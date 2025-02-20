/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * StrelImpl.c
 *
 * Code generation for function 'StrelImpl'
 *
 */

/* Include files */
#include "StrelImpl.h"
#include "any.h"
#include "cell_boundary_data.h"
#include "cell_boundary_emxutil.h"
#include "cell_boundary_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo bc_emlrtRTEI = {
    30,          /* lineNo */
    13,          /* colNo */
    "StrelImpl", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StrelImpl.m" /* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = {
    31,          /* lineNo */
    13,          /* colNo */
    "StrelImpl", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StrelImpl.m" /* pName */
};

/* Function Definitions */
boolean_T StrelImpl_StrelImpl(const emlrtStack *sp,
                              emxArray_boolean_T *se_nhood,
                              emxArray_real_T *se_height)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T height_data;
  int32_T i = 0;
  boolean_T se_Flat;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  st.site = &yd_emlrtRSI;
  height_data.size = &i;
  height_data.allocatedSize = 0;
  height_data.numDimensions = 1;
  height_data.canFreeData = false;
  b_st.site = &ae_emlrtRSI;
  se_Flat = !any(&b_st, &height_data);
  se_nhood->size[0] = 0;
  se_nhood->size[1] = 0;
  se_nhood->size[2] = 1;
  se_height->size[0] = 0;
  se_height->size[1] = 0;
  se_height->size[2] = 1;
  return se_Flat;
}

boolean_T b_StrelImpl_StrelImpl(const emlrtStack *sp,
                                const emxArray_boolean_T *varargin_2,
                                const emxArray_real_T *varargin_3,
                                emxArray_boolean_T *se_nhood,
                                emxArray_real_T *se_height)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T b_varargin_3;
  const real_T *varargin_3_data;
  real_T *se_height_data;
  int32_T c_varargin_3;
  int32_T i;
  int32_T loop_ub;
  int32_T varargin_3_tmp;
  const boolean_T *varargin_2_data;
  boolean_T se_Flat;
  boolean_T *se_nhood_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  varargin_3_data = varargin_3->data;
  varargin_2_data = varargin_2->data;
  st.site = &yd_emlrtRSI;
  varargin_3_tmp = varargin_3->size[0] * varargin_3->size[1];
  b_varargin_3 = *varargin_3;
  c_varargin_3 = varargin_3_tmp;
  b_varargin_3.size = &c_varargin_3;
  b_varargin_3.numDimensions = 1;
  b_st.site = &df_emlrtRSI;
  se_Flat = !any(&b_st, &b_varargin_3);
  i = se_nhood->size[0] * se_nhood->size[1] * se_nhood->size[2];
  se_nhood->size[0] = varargin_2->size[0];
  se_nhood->size[1] = varargin_2->size[1];
  se_nhood->size[2] = 1;
  emxEnsureCapacity_boolean_T(sp, se_nhood, i, &bc_emlrtRTEI);
  se_nhood_data = se_nhood->data;
  loop_ub = varargin_2->size[0] * varargin_2->size[1];
  for (i = 0; i < loop_ub; i++) {
    se_nhood_data[i] = varargin_2_data[i];
  }
  i = se_height->size[0] * se_height->size[1] * se_height->size[2];
  se_height->size[0] = varargin_3->size[0];
  se_height->size[1] = varargin_3->size[1];
  se_height->size[2] = 1;
  emxEnsureCapacity_real_T(sp, se_height, i, &cc_emlrtRTEI);
  se_height_data = se_height->data;
  for (i = 0; i < varargin_3_tmp; i++) {
    se_height_data[i] = varargin_3_data[i];
  }
  return se_Flat;
}

/* End of code generation (StrelImpl.c) */
