/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * morphop.c
 *
 * Code generation for function 'morphop'
 *
 */

/* Include files */
#include "morphop.h"
#include "all.h"
#include "bwunpack.h"
#include "cell_boundary_data.h"
#include "cell_boundary_emxutil.h"
#include "cell_boundary_mexutil.h"
#include "cell_boundary_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "ifWhileCond.h"
#include "isequal.h"
#include "padarray.h"
#include "rt_nonfinite.h"
#include "strel.h"
#include "validateattributes.h"
#include "libmwbwpackctbb.h"
#include "libmwmorphop_binary.h"
#include "libmwmorphop_binary_tbb.h"
#include "libmwmorphop_packed.h"
#include "mwmathutil.h"
#include <emmintrin.h>

/* Variable Definitions */
static emlrtRSInfo vj_emlrtRSI = {
    183,       /* lineNo */
    "morphop", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

static emlrtRSInfo wj_emlrtRSI = {
    91,        /* lineNo */
    "morphop", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

static emlrtRSInfo ak_emlrtRSI = {
    541,                 /* lineNo */
    "callSharedLibrary", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

static emlrtBCInfo tc_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    395,       /* lineNo */
    57,        /* colNo */
    "",        /* aName */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m", /* pName */
    0                   /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = {
    395,       /* lineNo */
    57,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m", /* pName */
    1                   /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    395,       /* lineNo */
    49,        /* colNo */
    "",        /* aName */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m", /* pName */
    0                   /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = {
    395,       /* lineNo */
    49,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m", /* pName */
    1                   /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    395,       /* lineNo */
    40,        /* colNo */
    "",        /* aName */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m", /* pName */
    0                   /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI = {
    395,       /* lineNo */
    40,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m", /* pName */
    1                   /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    395,       /* lineNo */
    32,        /* colNo */
    "",        /* aName */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m", /* pName */
    0                   /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = {
    395,       /* lineNo */
    32,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m", /* pName */
    1                   /* checkKind */
};

static emlrtRTEInfo lf_emlrtRTEI = {
    1,         /* lineNo */
    14,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+"
    "internal\\morphop.m" /* pName */
};

static emlrtRTEInfo mf_emlrtRTEI = {
    214,       /* lineNo */
    5,         /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pName */
};

static emlrtRTEInfo nf_emlrtRTEI = {
    17,        /* lineNo */
    5,         /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+"
    "internal\\morphop.m" /* pName */
};

/* Function Definitions */
void morphop(const emlrtStack *sp, const boolean_T varargin_1[1960000],
             const c_emxArray_images_internal_code *varargin_2_StrelArray,
             const emxArray_cell_wrap_1 *varargin_2_DecomposedStrelArray,
             emxArray_boolean_T *B)
{
  c_emxArray_images_internal_code *seq_StrelArray;
  const c_images_internal_coder_strel_S *varargin_2_StrelArray_data;
  c_images_internal_coder_strel_S *seq_StrelArray_data;
  cell_wrap_1 *seq_DecomposedStrelArray_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_boolean_T *Apad;
  emxArray_boolean_T *Apadpre;
  emxArray_boolean_T *isEachStrelInSE2D;
  emxArray_cell_wrap_1 *seq_DecomposedStrelArray;
  emxArray_uint32_T *Apadpack;
  emxArray_uint32_T *Bpack;
  strel b_obj;
  strel obj;
  real_T bwSize[2];
  real_T dv[2];
  real_T dv1[2];
  real_T pad_lr_data[2];
  real_T pad_ul_data[2];
  real_T d;
  real_T diml_data_idx_0;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T loop_ub;
  int32_T numRows;
  int32_T sInd;
  uint32_T *Apadpack_data;
  uint32_T *Bpack_data;
  int8_T fcnNameEnum;
  int8_T libNameEnum;
  boolean_T b;
  boolean_T exitg1;
  boolean_T overflow;
  boolean_T pre_pad;
  boolean_T strel_is_all_flat;
  boolean_T strel_is_single;
  boolean_T *Apad_data;
  boolean_T *B_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  varargin_2_StrelArray_data = varargin_2_StrelArray->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &ib_emlrtRSI;
  f_emxInit_images_internal_coder(&st, &seq_StrelArray, &lf_emlrtRTEI, true);
  emxInit_cell_wrap_1(&st, &seq_DecomposedStrelArray, &lf_emlrtRTEI);
  emxInit_boolean_T(&st, &isEachStrelInSE2D, 2, &lf_emlrtRTEI, true);
  b_st.site = &cg_emlrtRSI;
  strel_decompose(&b_st, varargin_2_StrelArray, varargin_2_DecomposedStrelArray,
                  seq_StrelArray, seq_DecomposedStrelArray, isEachStrelInSE2D);
  seq_DecomposedStrelArray_data = seq_DecomposedStrelArray->data;
  seq_StrelArray_data = seq_StrelArray->data;
  strel_is_single = (seq_StrelArray->size[1] == 1);
  b_st.site = &bg_emlrtRSI;
  strel_is_all_flat = true;
  sInd = 0;
  emxInitStruct_strel(&b_st, &obj, &fc_emlrtRTEI);
  exitg1 = false;
  while ((!exitg1) && (sInd <= seq_StrelArray->size[1] - 1)) {
    i = obj.StrelArray->size[0] * obj.StrelArray->size[1];
    obj.StrelArray->size[0] = 1;
    obj.StrelArray->size[1] = seq_StrelArray->size[1];
    d_emxEnsureCapacity_images_inte(&b_st, obj.StrelArray, i, &fc_emlrtRTEI);
    loop_ub = seq_StrelArray->size[1];
    for (i = 0; i < loop_ub; i++) {
      c_emxCopyStruct_images_internal(&b_st, &obj.StrelArray->data[i],
                                      &seq_StrelArray_data[i], &lf_emlrtRTEI);
    }
    i = obj.DecomposedStrelArray->size[0] * obj.DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[0] = 1;
    obj.DecomposedStrelArray->size[1] = seq_DecomposedStrelArray->size[1];
    emxEnsureCapacity_cell_wrap_11(&b_st, obj.DecomposedStrelArray, i,
                                   &fc_emlrtRTEI);
    loop_ub = seq_DecomposedStrelArray->size[1];
    for (i = 0; i < loop_ub; i++) {
      emxCopyStruct_cell_wrap_1(&b_st, &obj.DecomposedStrelArray->data[i],
                                &seq_DecomposedStrelArray_data[i],
                                &lf_emlrtRTEI);
    }
    c_st.site = &ig_emlrtRSI;
    strel_parenReference(&c_st, &obj, (real_T)sInd + 1.0);
    overflow = !obj.StrelArray->data[0].Flat;
    c_st.site = &ig_emlrtRSI;
    if (ifWhileCond((boolean_T *)&overflow)) {
      strel_is_all_flat = false;
      exitg1 = true;
    } else {
      sInd++;
    }
  }
  b_st.site = &ag_emlrtRSI;
  i = seq_StrelArray->size[1];
  for (sInd = 0; sInd < i; sInd++) {
    c_st.site = &mg_emlrtRSI;
    i1 = obj.StrelArray->size[0] * obj.StrelArray->size[1];
    obj.StrelArray->size[0] = 1;
    loop_ub = seq_StrelArray->size[1];
    obj.StrelArray->size[1] = seq_StrelArray->size[1];
    d_emxEnsureCapacity_images_inte(&c_st, obj.StrelArray, i1, &ic_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      c_emxCopyStruct_images_internal(&c_st, &obj.StrelArray->data[i1],
                                      &seq_StrelArray_data[i1], &lf_emlrtRTEI);
    }
    i1 = obj.DecomposedStrelArray->size[0] * obj.DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[0] = 1;
    loop_ub = seq_DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[1] = seq_DecomposedStrelArray->size[1];
    emxEnsureCapacity_cell_wrap_11(&c_st, obj.DecomposedStrelArray, i1,
                                   &ic_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      emxCopyStruct_cell_wrap_1(&c_st, &obj.DecomposedStrelArray->data[i1],
                                &seq_DecomposedStrelArray_data[i1],
                                &lf_emlrtRTEI);
    }
    d_st.site = &mg_emlrtRSI;
    strel_parenReference(&d_st, &obj, (real_T)sInd + 1.0);
    if (obj.StrelArray->size[1] != 1) {
      emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
                                    "images:getnhood:wrongType",
                                    "images:getnhood:wrongType", 0);
    }
  }
  i = isEachStrelInSE2D->size[0] * isEachStrelInSE2D->size[1];
  isEachStrelInSE2D->size[0] = 1;
  emxEnsureCapacity_boolean_T(&st, isEachStrelInSE2D, i, &hc_emlrtRTEI);
  Apad_data = isEachStrelInSE2D->data;
  loop_ub = isEachStrelInSE2D->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    Apad_data[i] = true;
  }
  b = !strel_is_single;
  b_st.site = &wj_emlrtRSI;
  if (b &&
      (!strel_isdecompositionorthogonal(&b_st, varargin_2_StrelArray,
                                        varargin_2_DecomposedStrelArray))) {
    pre_pad = true;
  } else {
    pre_pad = false;
  }
  if (!strel_is_all_flat) {
    emlrtErrorWithMessageIdR2018a(
        &st, &y_emlrtRTEI, "images:morphop:binaryWithNonflatStrel",
        "images:morphop:binaryWithNonflatStrel", 3, 4, 7, "imerode");
  }
  b_st.site = &yf_emlrtRSI;
  overflow = all(&b_st, isEachStrelInSE2D);
  strel_is_all_flat = (b && overflow);
  if (strel_is_all_flat) {
    fcnNameEnum = -1;
    libNameEnum = 1;
  } else {
    if (strel_is_single) {
      b_st.site = &ij_emlrtRSI;
      if (varargin_2_StrelArray->size[1] != 1) {
        emlrtErrorWithMessageIdR2018a(&b_st, &b_emlrtRTEI,
                                      "images:getnhood:wrongType",
                                      "images:getnhood:wrongType", 0);
      }
      if (isequal(varargin_2_StrelArray_data[0].nhood)) {
        fcnNameEnum = 10;
      } else {
        fcnNameEnum = 11;
      }
    } else {
      fcnNameEnum = 12;
    }
    libNameEnum = 5;
  }
  emxInit_boolean_T(&st, &Apad, 2, &yc_emlrtRTEI, true);
  if (pre_pad) {
    __m128d r;
    int32_T pad_lr_size[2];
    int32_T pad_ul_size[2];
    b_st.site = &vj_emlrtRSI;
    strel_getpadsize(&b_st, varargin_2_StrelArray,
                     varargin_2_DecomposedStrelArray, pad_lr_data, pad_lr_size,
                     pad_ul_data, pad_ul_size);
    b_st.site = &wf_emlrtRSI;
    c_st.site = &xh_emlrtRSI;
    d_st.site = &yh_emlrtRSI;
    c_st.site = &wh_emlrtRSI;
    b_validateattributes(&c_st, pad_ul_data);
    c_st.site = &vh_emlrtRSI;
    r = _mm_loadu_pd(&pad_ul_data[0]);
    _mm_storeu_pd(&dv[0], _mm_add_pd(r, _mm_set1_pd(1400.0)));
    if (dv[0] != (int32_T)muDoubleScalarFloor(dv[0])) {
      emlrtIntegerCheckR2012b(dv[0], &cb_emlrtDCI, &c_st);
    }
    dv1[0] = dv[0];
    if (dv[1] != (int32_T)muDoubleScalarFloor(dv[1])) {
      emlrtIntegerCheckR2012b(dv[1], &cb_emlrtDCI, &c_st);
    }
    dv1[1] = dv[1];
    r = _mm_loadu_pd(&dv1[0]);
    _mm_storeu_pd(&bwSize[0], r);
    emxInit_boolean_T(&c_st, &Apadpre, 2, &xc_emlrtRTEI, true);
    i = Apadpre->size[0] * Apadpre->size[1];
    Apadpre->size[0] = (int32_T)bwSize[0];
    Apadpre->size[1] = (int32_T)bwSize[1];
    emxEnsureCapacity_boolean_T(&c_st, Apadpre, i, &df_emlrtRTEI);
    Apad_data = Apadpre->data;
    i = (int32_T)pad_ul_data[1];
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, pad_ul_data[1], mxDOUBLE_CLASS,
                                  (int32_T)pad_ul_data[1], &n_emlrtRTEI, &c_st);
    for (sInd = 0; sInd < i; sInd++) {
      i1 = Apadpre->size[0];
      for (b_i = 0; b_i < i1; b_i++) {
        if (b_i + 1 > Apadpre->size[0]) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Apadpre->size[0],
                                        &ib_emlrtBCI, &c_st);
        }
        if (((int32_T)((uint32_T)sInd + 1U) < 1) ||
            ((int32_T)((uint32_T)sInd + 1U) > Apadpre->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)sInd + 1U), 1,
                                        Apadpre->size[1], &jb_emlrtBCI, &c_st);
        }
        Apad_data[b_i + Apadpre->size[0] * sInd] = true;
      }
    }
    loop_ub = (int32_T)pad_ul_data[1] + 1;
    numRows = Apadpre->size[1];
    d_st.site = &ai_emlrtRSI;
    overflow = (((int32_T)pad_ul_data[1] + 1 <= Apadpre->size[1]) &&
                (Apadpre->size[1] > 2147483646));
    if (overflow) {
      e_st.site = &tc_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }
    for (sInd = loop_ub; sInd <= numRows; sInd++) {
      d = pad_ul_data[0];
      i = (int32_T)d;
      emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
                                    &m_emlrtRTEI, &c_st);
      for (b_i = 0; b_i < i; b_i++) {
        if (((int32_T)((uint32_T)b_i + 1U) < 1) ||
            ((int32_T)((uint32_T)b_i + 1U) > Apadpre->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)b_i + 1U), 1,
                                        Apadpre->size[0], &mb_emlrtBCI, &c_st);
        }
        if ((sInd < 1) || (sInd > Apadpre->size[1])) {
          emlrtDynamicBoundsCheckR2012b(sInd, 1, Apadpre->size[1], &nb_emlrtBCI,
                                        &c_st);
        }
        Apad_data[b_i + Apadpre->size[0] * (sInd - 1)] = true;
      }
    }
    for (sInd = 0; sInd < 1400; sInd++) {
      d = pad_ul_data[1];
      diml_data_idx_0 = pad_ul_data[0];
      i = (sInd + (int32_T)d) + 1;
      for (b_i = 0; b_i < 1400; b_i++) {
        i1 = (b_i + (int32_T)diml_data_idx_0) + 1;
        if ((i1 < 1) || (i1 > Apadpre->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, Apadpre->size[0], &kb_emlrtBCI,
                                        &c_st);
        }
        if ((i < 1) || (i > Apadpre->size[1])) {
          emlrtDynamicBoundsCheckR2012b(i, 1, Apadpre->size[1], &lb_emlrtBCI,
                                        &c_st);
        }
        Apad_data[(i1 + Apadpre->size[0] * (i - 1)) - 1] =
            varargin_1[b_i + 1400 * sInd];
      }
    }
    b_st.site = &vf_emlrtRSI;
    c_padarray(&b_st, Apadpre, pad_lr_data, Apad);
    Apad_data = Apad->data;
    emxFree_boolean_T(&st, &Apadpre);
  } else {
    i = Apad->size[0] * Apad->size[1];
    Apad->size[0] = 1400;
    Apad->size[1] = 1400;
    emxEnsureCapacity_boolean_T(&st, Apad, i, &mf_emlrtRTEI);
    Apad_data = Apad->data;
    for (i = 0; i < 1960000; i++) {
      Apad_data[i] = varargin_1[i];
    }
    pad_ul_data[0] = -1.0;
    pad_lr_data[0] = -1.0;
    pad_ul_data[1] = -1.0;
    pad_lr_data[1] = -1.0;
  }
  emxInit_uint32_T(&st, &Apadpack, &hf_emlrtRTEI);
  Apadpack_data = Apadpack->data;
  if (strel_is_all_flat) {
    real_T bwpSize[2];
    numRows = Apad->size[0];
    b_st.site = &hj_emlrtRSI;
    i = Apadpack->size[0] * Apadpack->size[1];
    Apadpack->size[0] =
        (int32_T)muDoubleScalarCeil((real_T)Apad->size[0] / 32.0);
    Apadpack->size[1] = Apad->size[1];
    emxEnsureCapacity_uint32_T(&b_st, Apadpack, i, &ef_emlrtRTEI);
    Apadpack_data = Apadpack->data;
    c_st.site = &gb_emlrtRSI;
    bwSize[0] = Apad->size[0];
    bwpSize[0] = Apadpack->size[0];
    bwSize[1] = Apad->size[1];
    bwpSize[1] = Apad->size[1];
    bwPackingtbb(&Apad_data[0], &bwSize[0], &Apadpack_data[0], &bwpSize[0],
                 true);
    Apad->size[0] = 0;
    Apad->size[1] = 0;
  } else {
    numRows = -1;
    Apadpack->size[0] = 0;
    Apadpack->size[1] = 0;
  }
  emxInit_uint32_T(&st, &Bpack, &if_emlrtRTEI);
  i = Bpack->size[0] * Bpack->size[1];
  Bpack->size[0] = Apadpack->size[0];
  Bpack->size[1] = Apadpack->size[1];
  emxEnsureCapacity_uint32_T(&st, Bpack, i, &ff_emlrtRTEI);
  Bpack_data = Bpack->data;
  i = B->size[0] * B->size[1];
  B->size[0] = Apad->size[0];
  B->size[1] = Apad->size[1];
  emxEnsureCapacity_boolean_T(&st, B, i, &kc_emlrtRTEI);
  B_data = B->data;
  i = seq_StrelArray->size[1];
  emxInitStruct_strel(&st, &b_obj, &mc_emlrtRTEI);
  for (sInd = 0; sInd < i; sInd++) {
    b_st.site = &uf_emlrtRSI;
    i1 = obj.StrelArray->size[0] * obj.StrelArray->size[1];
    obj.StrelArray->size[0] = 1;
    loop_ub = seq_StrelArray->size[1];
    obj.StrelArray->size[1] = seq_StrelArray->size[1];
    d_emxEnsureCapacity_images_inte(&b_st, obj.StrelArray, i1, &lc_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      c_emxCopyStruct_images_internal(&b_st, &obj.StrelArray->data[i1],
                                      &seq_StrelArray_data[i1], &lf_emlrtRTEI);
    }
    i1 = obj.DecomposedStrelArray->size[0] * obj.DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[0] = 1;
    loop_ub = seq_DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[1] = seq_DecomposedStrelArray->size[1];
    emxEnsureCapacity_cell_wrap_11(&b_st, obj.DecomposedStrelArray, i1,
                                   &lc_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      emxCopyStruct_cell_wrap_1(&b_st, &obj.DecomposedStrelArray->data[i1],
                                &seq_DecomposedStrelArray_data[i1],
                                &lf_emlrtRTEI);
    }
    c_st.site = &uf_emlrtRSI;
    strel_parenReference(&c_st, &obj, (real_T)sInd + 1.0);
    if (obj.StrelArray->size[1] != 1) {
      emlrtErrorWithMessageIdR2018a(&b_st, &b_emlrtRTEI,
                                    "images:getnhood:wrongType",
                                    "images:getnhood:wrongType", 0);
    }
    b_st.site = &tf_emlrtRSI;
    i1 = b_obj.StrelArray->size[0] * b_obj.StrelArray->size[1];
    b_obj.StrelArray->size[0] = 1;
    loop_ub = seq_StrelArray->size[1];
    b_obj.StrelArray->size[1] = seq_StrelArray->size[1];
    d_emxEnsureCapacity_images_inte(&b_st, b_obj.StrelArray, i1, &mc_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      c_emxCopyStruct_images_internal(&b_st, &b_obj.StrelArray->data[i1],
                                      &seq_StrelArray_data[i1], &lf_emlrtRTEI);
    }
    i1 = b_obj.DecomposedStrelArray->size[0] *
         b_obj.DecomposedStrelArray->size[1];
    b_obj.DecomposedStrelArray->size[0] = 1;
    loop_ub = seq_DecomposedStrelArray->size[1];
    b_obj.DecomposedStrelArray->size[1] = seq_DecomposedStrelArray->size[1];
    emxEnsureCapacity_cell_wrap_11(&b_st, b_obj.DecomposedStrelArray, i1,
                                   &mc_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      emxCopyStruct_cell_wrap_1(&b_st, &b_obj.DecomposedStrelArray->data[i1],
                                &seq_DecomposedStrelArray_data[i1],
                                &lf_emlrtRTEI);
    }
    c_st.site = &tf_emlrtRSI;
    strel_parenReference(&c_st, &b_obj, (real_T)sInd + 1.0);
    if (b_obj.StrelArray->size[1] != 1) {
      emlrtErrorWithMessageIdR2018a(&b_st, &l_emlrtRTEI,
                                    "images:getheight:wrongType",
                                    "images:getheight:wrongType", 0);
    }
    if (sInd + 1 > isEachStrelInSE2D->size[1]) {
      emlrtDynamicBoundsCheckR2012b(sInd + 1, 1, isEachStrelInSE2D->size[1],
                                    &x_emlrtBCI, &st);
    }
    loop_ub = obj.StrelArray->data[0].nhood->size[0] *
                  obj.StrelArray->data[0].nhood->size[1] -
              1;
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      if (obj.StrelArray->data[0].nhood->data[b_i]) {
        i1 = b_obj.StrelArray->data[0].height->size[0] *
                 b_obj.StrelArray->data[0].height->size[1] -
             1;
        if (b_i > i1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &ob_emlrtBCI, &st);
        }
      }
    }
    b_st.site = &jf_emlrtRSI;
    if (strel_is_all_flat) {
      real_T nsizeT_data[3];
      c_st.site = &ak_emlrtRSI;
      bwSize[0] = Apadpack->size[0];
      nsizeT_data[0] = obj.StrelArray->data[0].nhood->size[0];
      bwSize[1] = Apadpack->size[1];
      nsizeT_data[1] = obj.StrelArray->data[0].nhood->size[1];
      erode_packed_uint32(&Apadpack_data[0], &bwSize[0], 2.0,
                          &obj.StrelArray->data[0].nhood->data[0],
                          &nsizeT_data[0], 2.0, (real_T)numRows, &Bpack_data[0],
                          true);
    } else if (libNameEnum == 5) {
      if (fcnNameEnum == 10) {
        real_T nsizeT_data[3];
        c_st.site = &kj_emlrtRSI;
        bwSize[0] = Apad->size[0];
        nsizeT_data[0] = obj.StrelArray->data[0].nhood->size[0];
        bwSize[1] = Apad->size[1];
        nsizeT_data[1] = obj.StrelArray->data[0].nhood->size[1];
        erode_binary_ones33_tbb(&Apad_data[0], &bwSize[0], 2.0,
                                &obj.StrelArray->data[0].nhood->data[0],
                                &nsizeT_data[0], 2.0, &B_data[0]);
      } else if (fcnNameEnum == 11) {
        real_T nsizeT_data[3];
        c_st.site = &lj_emlrtRSI;
        bwSize[0] = Apad->size[0];
        nsizeT_data[0] = obj.StrelArray->data[0].nhood->size[0];
        bwSize[1] = Apad->size[1];
        nsizeT_data[1] = obj.StrelArray->data[0].nhood->size[1];
        erode_binary_twod_tbb(&Apad_data[0], &bwSize[0], 2.0,
                              &obj.StrelArray->data[0].nhood->data[0],
                              &nsizeT_data[0], 2.0, &B_data[0]);
      } else if (fcnNameEnum == 12) {
        real_T nsizeT_data[3];
        c_st.site = &mj_emlrtRSI;
        bwSize[0] = Apad->size[0];
        nsizeT_data[0] = obj.StrelArray->data[0].nhood->size[0];
        bwSize[1] = Apad->size[1];
        nsizeT_data[1] = obj.StrelArray->data[0].nhood->size[1];
        erode_binary_tbb(&Apad_data[0], &bwSize[0], 2.0,
                         &obj.StrelArray->data[0].nhood->data[0],
                         &nsizeT_data[0], 2.0, &B_data[0]);
      } else {
        rtString c_obj;
        for (i1 = 0; i1 < 21; i1++) {
          c_obj.Value[i1] = cv[i1];
        }
        c_st.site = &bk_emlrtRSI;
        b_error(&c_st, emlrt_marshallOut(&c_st, c_obj), &d_emlrtMCI);
      }
    } else if (fcnNameEnum == 10) {
      real_T nsizeT_data[3];
      c_st.site = &nj_emlrtRSI;
      bwSize[0] = Apad->size[0];
      nsizeT_data[0] = obj.StrelArray->data[0].nhood->size[0];
      bwSize[1] = Apad->size[1];
      nsizeT_data[1] = obj.StrelArray->data[0].nhood->size[1];
      erode_binary_ones33_tbb(&Apad_data[0], &bwSize[0], 2.0,
                              &obj.StrelArray->data[0].nhood->data[0],
                              &nsizeT_data[0], 2.0, &B_data[0]);
    } else if (fcnNameEnum == 11) {
      real_T nsizeT_data[3];
      c_st.site = &oj_emlrtRSI;
      bwSize[0] = Apad->size[0];
      nsizeT_data[0] = obj.StrelArray->data[0].nhood->size[0];
      bwSize[1] = Apad->size[1];
      nsizeT_data[1] = obj.StrelArray->data[0].nhood->size[1];
      erode_binary_twod_tbb(&Apad_data[0], &bwSize[0], 2.0,
                            &obj.StrelArray->data[0].nhood->data[0],
                            &nsizeT_data[0], 2.0, &B_data[0]);
    } else if (fcnNameEnum == 12) {
      real_T nsizeT_data[3];
      c_st.site = &pj_emlrtRSI;
      bwSize[0] = Apad->size[0];
      nsizeT_data[0] = obj.StrelArray->data[0].nhood->size[0];
      bwSize[1] = Apad->size[1];
      nsizeT_data[1] = obj.StrelArray->data[0].nhood->size[1];
      erode_binary_tbb(&Apad_data[0], &bwSize[0], 2.0,
                       &obj.StrelArray->data[0].nhood->data[0], &nsizeT_data[0],
                       2.0, &B_data[0]);
    } else {
      rtString c_obj;
      for (i1 = 0; i1 < 21; i1++) {
        c_obj.Value[i1] = cv[i1];
      }
      c_st.site = &ck_emlrtRSI;
      b_error(&c_st, emlrt_marshallOut(&c_st, c_obj), &c_emlrtMCI);
    }
    if (strel_is_all_flat) {
      i1 = Apadpack->size[0] * Apadpack->size[1];
      Apadpack->size[0] = Bpack->size[0];
      Apadpack->size[1] = Bpack->size[1];
      emxEnsureCapacity_uint32_T(&st, Apadpack, i1, &gf_emlrtRTEI);
      Apadpack_data = Apadpack->data;
      loop_ub = Bpack->size[0] * Bpack->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Apadpack_data[i1] = Bpack_data[i1];
      }
    } else {
      i1 = Apad->size[0] * Apad->size[1];
      Apad->size[0] = B->size[0];
      Apad->size[1] = B->size[1];
      emxEnsureCapacity_boolean_T(&st, Apad, i1, &tc_emlrtRTEI);
      Apad_data = Apad->data;
      loop_ub = B->size[0] * B->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Apad_data[i1] = B_data[i1];
      }
    }
  }
  emxFreeStruct_strel(&st, &b_obj);
  emxFreeStruct_strel(&st, &obj);
  emxFree_boolean_T(&st, &isEachStrelInSE2D);
  emxFree_cell_wrap_1(&st, &seq_DecomposedStrelArray);
  c_emxFree_images_internal_coder(&st, &seq_StrelArray);
  emxFree_uint32_T(&st, &Apadpack);
  emxFree_boolean_T(&st, &Apad);
  if (strel_is_all_flat) {
    b_st.site = &gj_emlrtRSI;
    c_bwunpack(&b_st, Bpack, numRows, B);
    B_data = B->data;
  }
  emxFree_uint32_T(&st, &Bpack);
  if (pre_pad) {
    d = pad_ul_data[0];
    diml_data_idx_0 = d + 1.0;
    bwSize[0] = ((((d + 1.0) + (real_T)B->size[0]) - d) - pad_lr_data[0]) - 1.0;
    d = pad_ul_data[1];
    bwSize[1] = ((((d + 1.0) + (real_T)B->size[1]) - d) - pad_lr_data[1]) - 1.0;
    if (diml_data_idx_0 > bwSize[0]) {
      i = -1;
      i1 = -1;
    } else {
      if (diml_data_idx_0 != (int32_T)muDoubleScalarFloor(diml_data_idx_0)) {
        emlrtIntegerCheckR2012b(diml_data_idx_0, &gb_emlrtDCI, &st);
      }
      if (((int32_T)diml_data_idx_0 < 1) ||
          ((int32_T)diml_data_idx_0 > B->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)diml_data_idx_0, 1, B->size[0],
                                      &wc_emlrtBCI, &st);
      }
      i = (int32_T)diml_data_idx_0 - 2;
      if (bwSize[0] != (int32_T)muDoubleScalarFloor(bwSize[0])) {
        emlrtIntegerCheckR2012b(bwSize[0], &fb_emlrtDCI, &st);
      }
      i1 = (int32_T)bwSize[0];
      if ((i1 < 1) || (i1 > B->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, B->size[0], &vc_emlrtBCI, &st);
      }
      i1--;
    }
    if (d + 1.0 > bwSize[1]) {
      loop_ub = 0;
      b_i = 0;
    } else {
      if (d + 1.0 != (int32_T)muDoubleScalarFloor(d + 1.0)) {
        emlrtIntegerCheckR2012b(d + 1.0, &eb_emlrtDCI, &st);
      }
      if (((int32_T)(d + 1.0) < 1) || ((int32_T)(d + 1.0) > B->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(d + 1.0), 1, B->size[1],
                                      &uc_emlrtBCI, &st);
      }
      loop_ub = (int32_T)(d + 1.0) - 1;
      if (bwSize[1] != (int32_T)muDoubleScalarFloor(bwSize[1])) {
        emlrtIntegerCheckR2012b(bwSize[1], &db_emlrtDCI, &st);
      }
      b_i = (int32_T)bwSize[1];
      if ((b_i < 1) || (b_i > B->size[1])) {
        emlrtDynamicBoundsCheckR2012b(b_i, 1, B->size[1], &tc_emlrtBCI, &st);
      }
    }
    numRows = b_i - loop_ub;
    for (b_i = 0; b_i < numRows; b_i++) {
      sInd = i1 - i;
      for (i2 = 0; i2 < sInd; i2++) {
        B_data[i2 + sInd * b_i] =
            B_data[((i + i2) + B->size[0] * (loop_ub + b_i)) + 1];
      }
    }
    loop_ub = B->size[0] * B->size[1];
    B->size[0] = i1 - i;
    B->size[1] = numRows;
    emxEnsureCapacity_boolean_T(&st, B, loop_ub, &nf_emlrtRTEI);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (morphop.c) */
