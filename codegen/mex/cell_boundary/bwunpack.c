/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * bwunpack.c
 *
 * Code generation for function 'bwunpack'
 *
 */

/* Include files */
#include "bwunpack.h"
#include "cell_boundary_data.h"
#include "cell_boundary_emxutil.h"
#include "cell_boundary_types.h"
#include "rt_nonfinite.h"
#include "libmwbwunpackctbb.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo rb_emlrtRSI =
    {
        37,         /* lineNo */
        "bwunpack", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwunpack.m" /* pathName
                                                                          */
};

static emlrtRSInfo qj_emlrtRSI =
    {
        17,         /* lineNo */
        "bwunpack", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwunpack.m" /* pathName
                                                                          */
};

static emlrtRTEInfo jf_emlrtRTEI =
    {
        26,         /* lineNo */
        25,         /* colNo */
        "bwunpack", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwunpack.m" /* pName
                                                                          */
};

static emlrtRTEInfo kf_emlrtRTEI =
    {
        23,         /* lineNo */
        5,          /* colNo */
        "bwunpack", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwunpack.m" /* pName
                                                                          */
};

/* Function Definitions */
void b_bwunpack(const uint32_T varargin_1[63630], boolean_T BW[1999396])
{
  real_T bwSize[2];
  real_T bwpSize[2];
  bwpSize[0] = 45.0;
  bwSize[0] = 1414.0;
  bwpSize[1] = 1414.0;
  bwSize[1] = 1414.0;
  bwUnpackingtbb(&varargin_1[0], &bwpSize[0], &BW[0], &bwSize[0], true);
}

void bwunpack(const uint32_T varargin_1[63720], boolean_T BW[2005056])
{
  real_T bwSize[2];
  real_T bwpSize[2];
  bwpSize[0] = 45.0;
  bwSize[0] = 1416.0;
  bwpSize[1] = 1416.0;
  bwSize[1] = 1416.0;
  bwUnpackingtbb(&varargin_1[0], &bwpSize[0], &BW[0], &bwSize[0], true);
}

void c_bwunpack(const emlrtStack *sp, const emxArray_uint32_T *varargin_1,
                real_T varargin_2, emxArray_boolean_T *BW)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T i;
  const uint32_T *varargin_1_data;
  boolean_T *BW_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  varargin_1_data = varargin_1->data;
  st.site = &qj_emlrtRSI;
  b_st.site = &ab_emlrtRSI;
  if (muDoubleScalarIsInf(varargin_2) || muDoubleScalarIsNaN(varargin_2) ||
      (!(muDoubleScalarFloor(varargin_2) == varargin_2))) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &e_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedInteger",
        "MATLAB:bwunpack:expectedInteger", 3, 4, 18, "input number 2, M,");
  }
  b_st.site = &ab_emlrtRSI;
  if (varargin_2 < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &d_emlrtRTEI,
        "Coder:toolbox:ValidateattributesexpectedNonnegative",
        "MATLAB:bwunpack:expectedNonnegative", 3, 4, 18, "input number 2, M,");
  }
  if ((varargin_1->size[0] == 0) || (varargin_1->size[1] == 0)) {
    int32_T loop_ub;
    i = BW->size[0] * BW->size[1];
    BW->size[0] = (int32_T)varargin_2;
    BW->size[1] = varargin_1->size[1];
    emxEnsureCapacity_boolean_T(sp, BW, i, &kf_emlrtRTEI);
    BW_data = BW->data;
    loop_ub = (int32_T)varargin_2 * varargin_1->size[1];
    for (i = 0; i < loop_ub; i++) {
      BW_data[i] = false;
    }
  } else {
    real_T bwSize[2];
    real_T bwpSize[2];
    i = BW->size[0] * BW->size[1];
    BW->size[0] = (int32_T)varargin_2;
    BW->size[1] = varargin_1->size[1];
    emxEnsureCapacity_boolean_T(sp, BW, i, &jf_emlrtRTEI);
    BW_data = BW->data;
    st.site = &rb_emlrtRSI;
    bwpSize[0] = varargin_1->size[0];
    bwSize[0] = (int32_T)varargin_2;
    bwpSize[1] = varargin_1->size[1];
    bwSize[1] = varargin_1->size[1];
    bwUnpackingtbb(&varargin_1_data[0], &bwpSize[0], &BW_data[0], &bwSize[0],
                   true);
  }
}

/* End of code generation (bwunpack.c) */
