/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cell_boundary.c
 *
 * Code generation for function 'cell_boundary'
 *
 */

/* Include files */
#include "cell_boundary.h"
#include "all.h"
#include "bwareaopen.h"
#include "bwmorph.h"
#include "cell_boundary_data.h"
#include "cell_boundary_emxutil.h"
#include "cell_boundary_types.h"
#include "imbinarize.h"
#include "imclose.h"
#include "imerode.h"
#include "imfilter.h"
#include "imopen.h"
#include "morphop.h"
#include "rt_nonfinite.h"
#include "strel.h"
#include "validateattributes.h"
#include "omp.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    9,                                            /* lineNo */
    "cell_boundary",                              /* fcnName */
    "D:\\ws_Matlab\\EdgeAndPeak\\cell_boundary.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    12,                                           /* lineNo */
    "cell_boundary",                              /* fcnName */
    "D:\\ws_Matlab\\EdgeAndPeak\\cell_boundary.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    17,                                           /* lineNo */
    "cell_boundary",                              /* fcnName */
    "D:\\ws_Matlab\\EdgeAndPeak\\cell_boundary.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    19,                                           /* lineNo */
    "cell_boundary",                              /* fcnName */
    "D:\\ws_Matlab\\EdgeAndPeak\\cell_boundary.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    20,                                           /* lineNo */
    "cell_boundary",                              /* fcnName */
    "D:\\ws_Matlab\\EdgeAndPeak\\cell_boundary.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    22,                                           /* lineNo */
    "cell_boundary",                              /* fcnName */
    "D:\\ws_Matlab\\EdgeAndPeak\\cell_boundary.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI = {
    24,                                           /* lineNo */
    "cell_boundary",                              /* fcnName */
    "D:\\ws_Matlab\\EdgeAndPeak\\cell_boundary.m" /* pathName */
};

static emlrtRSInfo h_emlrtRSI = {
    29,                                           /* lineNo */
    "cell_boundary",                              /* fcnName */
    "D:\\ws_Matlab\\EdgeAndPeak\\cell_boundary.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI = {
    30,                                           /* lineNo */
    "cell_boundary",                              /* fcnName */
    "D:\\ws_Matlab\\EdgeAndPeak\\cell_boundary.m" /* pathName */
};

static emlrtRSInfo j_emlrtRSI = {
    33,                                           /* lineNo */
    "cell_boundary",                              /* fcnName */
    "D:\\ws_Matlab\\EdgeAndPeak\\cell_boundary.m" /* pathName */
};

static emlrtRSInfo k_emlrtRSI = {
    32,                                           /* lineNo */
    "cell_boundary",                              /* fcnName */
    "D:\\ws_Matlab\\EdgeAndPeak\\cell_boundary.m" /* pathName */
};

static emlrtRSInfo pb_emlrtRSI = {
    87,        /* lineNo */
    "imerode", /* fcnName */
    "D:\\Program Files\\MATLAB\\2023b\\toolbox\\images\\images\\imerode.m" /* pathName
                                                                            */
};

static emlrtRSInfo vc_emlrtRSI = {
    595,                                  /* lineNo */
    "StructuringElementHelper/makeStrel", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo wc_emlrtRSI = {
    631,                                  /* lineNo */
    "StructuringElementHelper/makeStrel", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo xc_emlrtRSI = {
    632,                                  /* lineNo */
    "StructuringElementHelper/makeStrel", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo yc_emlrtRSI = {
    1370,          /* lineNo */
    "parseInputs", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo rj_emlrtRSI = {
    85,        /* lineNo */
    "imerode", /* fcnName */
    "D:\\Program Files\\MATLAB\\2023b\\toolbox\\images\\images\\imerode.m" /* pathName
                                                                            */
};

static emlrtRSInfo
    sj_emlrtRSI =
        {
            30,             /* lineNo */
            "morphop_fast", /* fcnName */
            "D:\\Program "
            "Files\\MATLAB\\2023b\\toolbox\\images\\images\\private\\morphop_"
            "fast.m" /* pathName */
};

static emlrtRSInfo
    tj_emlrtRSI =
        {
            23,             /* lineNo */
            "morphop_fast", /* fcnName */
            "D:\\Program "
            "Files\\MATLAB\\2023b\\toolbox\\images\\images\\private\\morphop_"
            "fast.m" /* pathName */
};

static emlrtRSInfo uj_emlrtRSI = {
    303,                                         /* lineNo */
    "StructuringElementHelper/get.Neighborhood", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtECInfo emlrtECI = {
    1,                                            /* nDims */
    34,                                           /* lineNo */
    8,                                            /* colNo */
    "cell_boundary",                              /* fName */
    "D:\\ws_Matlab\\EdgeAndPeak\\cell_boundary.m" /* pName */
};

static emlrtECInfo b_emlrtECI = {
    2,                                            /* nDims */
    34,                                           /* lineNo */
    8,                                            /* colNo */
    "cell_boundary",                              /* fName */
    "D:\\ws_Matlab\\EdgeAndPeak\\cell_boundary.m" /* pName */
};

static emlrtRTEInfo emlrtRTEI = {
    302,                                         /* lineNo */
    13,                                          /* colNo */
    "StructuringElementHelper/get.Neighborhood", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = {
    33,                                           /* lineNo */
    1,                                            /* colNo */
    "cell_boundary",                              /* fName */
    "D:\\ws_Matlab\\EdgeAndPeak\\cell_boundary.m" /* pName */
};

static emlrtRTEInfo db_emlrtRTEI = {
    16,                                           /* lineNo */
    1,                                            /* colNo */
    "cell_boundary",                              /* fName */
    "D:\\ws_Matlab\\EdgeAndPeak\\cell_boundary.m" /* pName */
};

/* Function Declarations */
static void binary_expand_op(real_T in1[1960000], const boolean_T in2[1960000],
                             const emxArray_boolean_T *in3);

/* Function Definitions */
static void binary_expand_op(real_T in1[1960000], const boolean_T in2[1960000],
                             const emxArray_boolean_T *in3)
{
  int32_T aux_0_1;
  int32_T i;
  int32_T i1;
  int32_T stride_0_0;
  int32_T stride_0_1;
  const boolean_T *in3_data;
  in3_data = in3->data;
  stride_0_0 = (in3->size[0] != 1);
  stride_0_1 = (in3->size[1] != 1);
  aux_0_1 = 0;
  for (i = 0; i < 1400; i++) {
    for (i1 = 0; i1 < 1400; i1++) {
      int32_T i2;
      i2 = i1 + 1400 * i;
      in1[i2] = (real_T)in2[i2] -
                (real_T)in3_data[i1 * stride_0_0 + in3->size[0] * aux_0_1];
    }
    aux_0_1 += stride_0_1;
  }
}

void cell_boundary(cell_boundaryStackData *SD, const emlrtStack *sp,
                   const uint16_T img_in[1960000], real_T edge_width,
                   real_T edge[1960000])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_boolean_T b_SE_data;
  emxArray_boolean_T *temp_in;
  strel SE;
  int32_T SE_size[2];
  int32_T i;
  boolean_T SE_data;
  boolean_T *temp_in_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /* GET_BOUNDARY , Yunhui Lyu, 2024/4/19, detect the edge of cell in img_in, */
  /*  img_input: 输入图像， */
  /*  bin_arg:二值化策略，1 -> "global"  2 -> "adaptive" */
  /*  edge_width: 提取的边界宽度(pxl) */
  /*  bin_arg_stack = {"global", "adaptive"}; */
  /*  Gaussian filter process */
  st.site = &emlrtRSI;
  imfilter(SD, img_in, SD->f16.img_gaussian);
  /*  Binarize the image */
  st.site = &b_emlrtRSI;
  imbinarize(&st, SD->f16.img_gaussian, SD->f16.edge);
  /*  BW image morphological operation */
  /*  temp = bwmorph(boundary, "close", Inf); */
  st.site = &c_emlrtRSI;
  imclose(SD, SD->f16.edge, SD->f16.temp);
  memcpy(&SD->f16.edge[0], &SD->f16.temp[0], 1960000U * sizeof(boolean_T));
  st.site = &d_emlrtRSI;
  imopen(SD, SD->f16.edge, SD->f16.temp);
  st.site = &e_emlrtRSI;
  bwmorph(SD, SD->f16.temp);
  memcpy(&SD->f16.edge[0], &SD->f16.temp[0], 1960000U * sizeof(boolean_T));
  st.site = &f_emlrtRSI;
  c_imerode(SD, SD->f16.edge, SD->f16.temp);
  memcpy(&SD->f16.edge[0], &SD->f16.temp[0], 1960000U * sizeof(boolean_T));
  st.site = &g_emlrtRSI;
  b_imopen(SD, SD->f16.edge, SD->f16.temp);
  /*  Edge detection */
  for (i = 0; i < 1960000; i++) {
    SD->f16.temp[i] = !SD->f16.temp[i];
  }
  st.site = &h_emlrtRSI;
  bwareaopen(SD, &st, SD->f16.temp);
  for (i = 0; i < 1960000; i++) {
    SD->f16.edge[i] = !SD->f16.temp[i];
  }
  st.site = &i_emlrtRSI;
  b_bwareaopen(SD, &st, SD->f16.edge);
  /*  修改边界宽度 */
  st.site = &k_emlrtRSI;
  emxInitStruct_strel(&st, &SE, &db_emlrtRTEI);
  SE.StrelArray->size[0] = 1;
  SE.StrelArray->size[1] = 0;
  SE.DecomposedStrelArray->size[0] = 1;
  SE.DecomposedStrelArray->size[1] = 0;
  b_st.site = &uc_emlrtRSI;
  c_st.site = &vc_emlrtRSI;
  d_st.site = &yc_emlrtRSI;
  validateattributes(&d_st, edge_width);
  c_st.site = &wc_emlrtRSI;
  d_st.site = &yc_emlrtRSI;
  validateattributes(&d_st, edge_width);
  c_st.site = &xc_emlrtRSI;
  strel_makeDiskStrel(&c_st, &SE, edge_width, 4.0);
  st.site = &j_emlrtRSI;
  b_st.site = &rj_emlrtRSI;
  if (SE.StrelArray->size[1] == 1) {
    c_st.site = &tj_emlrtRSI;
    if (SE.StrelArray->size[1] != 1) {
      emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI, "images:strel:wrongType",
                                    "images:strel:wrongType", 0);
    }
    d_st.site = &uj_emlrtRSI;
    if (SE.StrelArray->size[1] != 1) {
      emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                    "images:getnhood:wrongType",
                                    "images:getnhood:wrongType", 0);
    }
    if ((SE.StrelArray->data[0].nhood->size[0] != 0) &&
        (SE.StrelArray->data[0].nhood->size[1] != 0)) {
      SE_size[0] = 1;
      SE_size[1] = 1;
      SE_data = SE.StrelArray->data[0].Flat;
      b_SE_data.data = &SE_data;
      b_SE_data.size = &SE_size[0];
      b_SE_data.allocatedSize = 1;
      b_SE_data.numDimensions = 2;
      b_SE_data.canFreeData = false;
      c_st.site = &tj_emlrtRSI;
      if (all(&c_st, &b_SE_data)) {
        c_st.site = &sj_emlrtRSI;
        if (SE.StrelArray->size[1] != 1) {
          emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                        "images:strel:wrongType",
                                        "images:strel:wrongType", 0);
        }
        d_st.site = &uj_emlrtRSI;
        if (SE.StrelArray->size[1] != 1) {
          emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                        "images:getnhood:wrongType",
                                        "images:getnhood:wrongType", 0);
        }
      }
    }
  }
  emxInit_boolean_T(&st, &temp_in, 2, &cb_emlrtRTEI, true);
  b_st.site = &pb_emlrtRSI;
  morphop(&b_st, SD->f16.edge, SE.StrelArray, SE.DecomposedStrelArray, temp_in);
  temp_in_data = temp_in->data;
  emxFreeStruct_strel(&st, &SE);
  if ((temp_in->size[0] != 1400) && (temp_in->size[0] != 1)) {
    emlrtDimSizeImpxCheckR2021b(1400, temp_in->size[0], &emlrtECI,
                                (emlrtConstCTX)sp);
  }
  if ((temp_in->size[1] != 1400) && (temp_in->size[1] != 1)) {
    emlrtDimSizeImpxCheckR2021b(1400, temp_in->size[1], &b_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  if ((temp_in->size[0] == 1400) && (temp_in->size[1] == 1400)) {
    for (i = 0; i < 1960000; i++) {
      edge[i] = (real_T)SD->f16.edge[i] - (real_T)temp_in_data[i];
    }
  } else {
    binary_expand_op(edge, SD->f16.edge, temp_in);
  }
  emxFree_boolean_T(sp, &temp_in);
  /*  imwrite(boundary,['./resource/boundary_',num2str(save_idx),'.png']) */
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

emlrtCTX emlrtGetRootTLSGlobal(void)
{
  return emlrtRootTLSGlobal;
}

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData)
{
  omp_set_lock(&emlrtLockGlobal);
  emlrtCallLockeeFunction(aLockee, aTLS, aData);
  omp_unset_lock(&emlrtLockGlobal);
}

/* End of code generation (cell_boundary.c) */
