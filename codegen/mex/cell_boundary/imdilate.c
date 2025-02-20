/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imdilate.c
 *
 * Code generation for function 'imdilate'
 *
 */

/* Include files */
#include "imdilate.h"
#include "all.h"
#include "any.h"
#include "bwunpack.h"
#include "cell_boundary_data.h"
#include "cell_boundary_emxutil.h"
#include "cell_boundary_mexutil.h"
#include "cell_boundary_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "flip.h"
#include "ifWhileCond.h"
#include "isequal.h"
#include "padarray.h"
#include "rt_nonfinite.h"
#include "setPackedFillBits.h"
#include "strel.h"
#include "validateattributes.h"
#include "libmwbwpackctbb.h"
#include "libmwmorphop_binary.h"
#include "libmwmorphop_binary_tbb.h"
#include "libmwmorphop_flat_tbb.h"
#include "libmwmorphop_ipp.h"
#include "libmwmorphop_nonflat_tbb.h"
#include "libmwmorphop_packed.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo
    hb_emlrtRSI =
        {
            98,         /* lineNo */
            "imdilate", /* fcnName */
            "D:\\Program "
            "Files\\MATLAB\\2023b\\toolbox\\images\\images\\imdilate.m" /* pathName
                                                                         */
};

static emlrtRSInfo kf_emlrtRSI = {
    331,       /* lineNo */
    "morphop", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

static emlrtRSInfo lf_emlrtRSI = {
    329,       /* lineNo */
    "morphop", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

static emlrtRSInfo mf_emlrtRSI = {
    328,       /* lineNo */
    "morphop", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

static emlrtRSInfo nf_emlrtRSI = {
    316,       /* lineNo */
    "morphop", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

static emlrtRSInfo of_emlrtRSI = {
    298,       /* lineNo */
    "morphop", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

static emlrtRSInfo pf_emlrtRSI = {
    296,       /* lineNo */
    "morphop", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

static emlrtRSInfo qf_emlrtRSI = {
    295,       /* lineNo */
    "morphop", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

static emlrtRSInfo rf_emlrtRSI = {
    264,       /* lineNo */
    "morphop", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

static emlrtRSInfo sf_emlrtRSI = {
    249,       /* lineNo */
    "morphop", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

static emlrtRSInfo xf_emlrtRSI = {
    188,       /* lineNo */
    "morphop", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

static emlrtRSInfo di_emlrtRSI = {
    493,      /* lineNo */
    "useIPP", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

static emlrtRSInfo fi_emlrtRSI = {
    626,                 /* lineNo */
    "callSharedLibrary", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

static emlrtRSInfo gi_emlrtRSI = {
    600,                 /* lineNo */
    "callSharedLibrary", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

static emlrtRSInfo hi_emlrtRSI = {
    614,                 /* lineNo */
    "callSharedLibrary", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

static emlrtRSInfo jj_emlrtRSI = {
    535,                 /* lineNo */
    "callSharedLibrary", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

static emlrtBCInfo y_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    282,       /* lineNo */
    31,        /* colNo */
    "",        /* aName */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m", /* pName */
    0                   /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    282,       /* lineNo */
    43,        /* colNo */
    "",        /* aName */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m", /* pName */
    0                   /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    282,       /* lineNo */
    47,        /* colNo */
    "",        /* aName */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m", /* pName */
    0                   /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    282,       /* lineNo */
    59,        /* colNo */
    "",        /* aName */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m", /* pName */
    0                   /* checkKind */
};

static emlrtECInfo c_emlrtECI = {
    -1,        /* nDims */
    282,       /* lineNo */
    21,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pName */
};

static emlrtBCInfo db_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    281,       /* lineNo */
    27,        /* colNo */
    "",        /* aName */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m", /* pName */
    0                   /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    281,       /* lineNo */
    39,        /* colNo */
    "",        /* aName */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m", /* pName */
    0                   /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    281,       /* lineNo */
    43,        /* colNo */
    "",        /* aName */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m", /* pName */
    0                   /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    281,       /* lineNo */
    55,        /* colNo */
    "",        /* aName */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m", /* pName */
    0                   /* checkKind */
};

static emlrtECInfo d_emlrtECI = {
    -1,        /* nDims */
    281,       /* lineNo */
    21,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pName */
};

static emlrtDCInfo i_emlrtDCI = {
    274,       /* lineNo */
    35,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m", /* pName */
    1                   /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = {
    274,       /* lineNo */
    35,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m", /* pName */
    4                   /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = {
    275,       /* lineNo */
    25,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m", /* pName */
    1                   /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = {
    275,       /* lineNo */
    25,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m", /* pName */
    4                   /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = {
    277,       /* lineNo */
    39,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m", /* pName */
    1                   /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = {
    278,       /* lineNo */
    25,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m", /* pName */
    1                   /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    312,       /* lineNo */
    37,        /* colNo */
    "",        /* aName */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m", /* pName */
    0                   /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = {
    274,       /* lineNo */
    21,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m", /* pName */
    1                   /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = {
    274,       /* lineNo */
    21,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m", /* pName */
    4                   /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = {
    277,       /* lineNo */
    21,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m", /* pName */
    1                   /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = {
    -1,            /* iFirst */
    -1,            /* iLast */
    724,           /* lineNo */
    102,           /* colNo */
    "",            /* aName */
    "ConstantPad", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\padarray.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = {
    -1,            /* iFirst */
    -1,            /* iLast */
    724,           /* lineNo */
    104,           /* colNo */
    "",            /* aName */
    "ConstantPad", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\padarray.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtRTEInfo
    gc_emlrtRTEI =
        {
            1,          /* lineNo */
            14,         /* colNo */
            "imdilate", /* fName */
            "D:\\Program "
            "Files\\MATLAB\\2023b\\toolbox\\images\\images\\imdilate.m" /* pName
                                                                         */
};

static emlrtRTEInfo nc_emlrtRTEI = {
    320,       /* lineNo */
    17,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = {
    328,       /* lineNo */
    42,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = {
    285,       /* lineNo */
    21,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = {
    331,       /* lineNo */
    42,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = {
    286,       /* lineNo */
    21,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = {
    274,       /* lineNo */
    21,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = {
    277,       /* lineNo */
    21,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pName */
};

static emlrtRTEInfo vc_emlrtRTEI = {
    281,       /* lineNo */
    62,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pName */
};

static emlrtRTEInfo wc_emlrtRTEI = {
    282,       /* lineNo */
    66,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = {
    312,       /* lineNo */
    17,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pName */
};

/* Function Definitions */
void b_imdilate(cell_boundaryStackData *SD, const uint32_T A[61600],
                uint32_T B[61600])
{
  real_T asizeT_tmp[2];
  real_T nsizeT[2];
  int32_T i;
  int32_T j;
  boolean_T nhood[5];
  memcpy(&SD->u1.f5.A[0], &A[0], 61600U * sizeof(uint32_T));
  d_setPackedFillBits(SD->u1.f5.A);
  memset(&SD->u1.f5.Apadpre[0], 0, 225U * sizeof(uint32_T));
  for (j = 0; j < 1400; j++) {
    i = 45 * (j + 5);
    SD->u1.f5.Apadpre[i] = 0U;
    memcpy(&SD->u1.f5.Apadpre[i + 1], &SD->u1.f5.A[j * 44],
           44U * sizeof(uint32_T));
  }
  memset(&SD->u1.f5.Apad[64630], 0, 230U * sizeof(uint32_T));
  for (j = 0; j < 1405; j++) {
    SD->u1.f5.Apad[46 * j + 45] = 0U;
    memcpy(&SD->u1.f5.Apad[j * 46], &SD->u1.f5.Apadpre[j * 45],
           45U * sizeof(uint32_T));
  }
  for (i = 0; i < 5; i++) {
    nhood[i] = true;
  }
  asizeT_tmp[0] = 46.0;
  nsizeT[0] = 5.0;
  asizeT_tmp[1] = 1410.0;
  nsizeT[1] = 1.0;
  dilate_packed_uint32(&SD->u1.f5.Apad[0], &asizeT_tmp[0], 2.0, &nhood[0],
                       &nsizeT[0], 2.0, &SD->u1.f5.Apadpack[0], true);
  nsizeT[0] = 3.0;
  nsizeT[1] = 3.0;
  dilate_packed_uint32(&SD->u1.f5.Apadpack[0], &asizeT_tmp[0], 2.0, &bv2[0],
                       &nsizeT[0], 2.0, &SD->u1.f5.Apad[0], true);
  memcpy(&SD->u1.f5.Apadpack[0], &SD->u1.f5.Apad[0], 64860U * sizeof(uint32_T));
  for (i = 0; i < 5; i++) {
    nhood[i] = true;
  }
  boolean_T b_nhood[3];
  nsizeT[0] = 1.0;
  nsizeT[1] = 5.0;
  dilate_packed_uint32(&SD->u1.f5.Apadpack[0], &asizeT_tmp[0], 2.0, &nhood[0],
                       &nsizeT[0], 2.0, &SD->u1.f5.Apad[0], true);
  memcpy(&SD->u1.f5.Apadpack[0], &SD->u1.f5.Apad[0], 64860U * sizeof(uint32_T));
  nsizeT[0] = 3.0;
  nsizeT[1] = 3.0;
  dilate_packed_uint32(&SD->u1.f5.Apadpack[0], &asizeT_tmp[0], 2.0, &bv3[0],
                       &nsizeT[0], 2.0, &SD->u1.f5.Apad[0], true);
  memcpy(&SD->u1.f5.Apadpack[0], &SD->u1.f5.Apad[0], 64860U * sizeof(uint32_T));
  b_nhood[0] = true;
  b_nhood[1] = true;
  b_nhood[2] = true;
  nsizeT[0] = 1.0;
  nsizeT[1] = 3.0;
  dilate_packed_uint32(&SD->u1.f5.Apadpack[0], &asizeT_tmp[0], 2.0, &b_nhood[0],
                       &nsizeT[0], 2.0, &SD->u1.f5.Apad[0], true);
  memcpy(&SD->u1.f5.Apadpack[0], &SD->u1.f5.Apad[0], 64860U * sizeof(uint32_T));
  b_nhood[0] = true;
  b_nhood[1] = true;
  b_nhood[2] = true;
  nsizeT[0] = 3.0;
  nsizeT[1] = 1.0;
  dilate_packed_uint32(&SD->u1.f5.Apadpack[0], &asizeT_tmp[0], 2.0, &b_nhood[0],
                       &nsizeT[0], 2.0, &SD->u1.f5.Apad[0], true);
  for (i = 0; i < 1400; i++) {
    memcpy(&B[i * 44], &SD->u1.f5.Apad[i * 46 + 231], 44U * sizeof(uint32_T));
  }
}

void c_imdilate(cell_boundaryStackData *SD, const uint32_T A[61600],
                uint32_T B[61600])
{
  int32_T Apadpre_tmp;
  int32_T j;
  memcpy(&SD->u1.f1.A[0], &A[0], 61600U * sizeof(uint32_T));
  d_setPackedFillBits(SD->u1.f1.A);
  memset(&SD->u1.f1.Apadpre[0], 0, 90U * sizeof(uint32_T));
  for (j = 0; j < 1400; j++) {
    Apadpre_tmp = 45 * (j + 2);
    SD->u1.f1.Apadpre[Apadpre_tmp] = 0U;
    memcpy(&SD->u1.f1.Apadpre[Apadpre_tmp + 1], &SD->u1.f1.A[j * 44],
           44U * sizeof(uint32_T));
  }
  memset(&SD->u1.f1.Apad[64492], 0, 92U * sizeof(uint32_T));
  for (j = 0; j < 1402; j++) {
    SD->u1.f1.Apad[46 * j + 45] = 0U;
    memcpy(&SD->u1.f1.Apad[j * 46], &SD->u1.f1.Apadpre[j * 45],
           45U * sizeof(uint32_T));
  }
  real_T asizeT_tmp[2];
  real_T b_nsizeT_tmp[2];
  real_T nsizeT[2];
  real_T nsizeT_tmp[2];
  boolean_T nhood[3];
  boolean_T b_nhood;
  nhood[0] = true;
  nhood[1] = true;
  nhood[2] = true;
  asizeT_tmp[0] = 46.0;
  nsizeT_tmp[0] = 3.0;
  asizeT_tmp[1] = 1404.0;
  nsizeT_tmp[1] = 1.0;
  dilate_packed_uint32(&SD->u1.f1.Apad[0], &asizeT_tmp[0], 2.0, &nhood[0],
                       &nsizeT_tmp[0], 2.0, &SD->u1.f1.Apadpack[0], true);
  b_nhood = true;
  nsizeT[0] = 1.0;
  nsizeT[1] = 1.0;
  dilate_packed_uint32(&SD->u1.f1.Apadpack[0], &asizeT_tmp[0], 2.0, &b_nhood,
                       &nsizeT[0], 2.0, &SD->u1.f1.Apad[0], true);
  memcpy(&SD->u1.f1.Apadpack[0], &SD->u1.f1.Apad[0], 64584U * sizeof(uint32_T));
  nhood[0] = true;
  nhood[1] = true;
  nhood[2] = true;
  b_nsizeT_tmp[0] = 1.0;
  b_nsizeT_tmp[1] = 3.0;
  dilate_packed_uint32(&SD->u1.f1.Apadpack[0], &asizeT_tmp[0], 2.0, &nhood[0],
                       &b_nsizeT_tmp[0], 2.0, &SD->u1.f1.Apad[0], true);
  memcpy(&SD->u1.f1.Apadpack[0], &SD->u1.f1.Apad[0], 64584U * sizeof(uint32_T));
  b_nhood = true;
  nsizeT[0] = 1.0;
  nsizeT[1] = 1.0;
  dilate_packed_uint32(&SD->u1.f1.Apadpack[0], &asizeT_tmp[0], 2.0, &b_nhood,
                       &nsizeT[0], 2.0, &SD->u1.f1.Apad[0], true);
  memcpy(&SD->u1.f1.Apadpack[0], &SD->u1.f1.Apad[0], 64584U * sizeof(uint32_T));
  nhood[0] = true;
  nhood[1] = true;
  nhood[2] = true;
  dilate_packed_uint32(&SD->u1.f1.Apadpack[0], &asizeT_tmp[0], 2.0, &nhood[0],
                       &b_nsizeT_tmp[0], 2.0, &SD->u1.f1.Apad[0], true);
  memcpy(&SD->u1.f1.Apadpack[0], &SD->u1.f1.Apad[0], 64584U * sizeof(uint32_T));
  nhood[0] = true;
  nhood[1] = true;
  nhood[2] = true;
  dilate_packed_uint32(&SD->u1.f1.Apadpack[0], &asizeT_tmp[0], 2.0, &nhood[0],
                       &nsizeT_tmp[0], 2.0, &SD->u1.f1.Apad[0], true);
  for (Apadpre_tmp = 0; Apadpre_tmp < 1400; Apadpre_tmp++) {
    memcpy(&B[Apadpre_tmp * 44], &SD->u1.f1.Apad[Apadpre_tmp * 46 + 93],
           44U * sizeof(uint32_T));
  }
}

void d_imdilate(const emlrtStack *sp,
                const c_emxArray_images_internal_code *se_StrelArray,
                const emxArray_cell_wrap_1 *se_DecomposedStrelArray,
                emxArray_real32_T *B)
{
  __m128d r;
  c_emxArray_images_internal_code *seq_StrelArray;
  c_images_internal_coder_strel_S *seq_StrelArray_data;
  cell_wrap_1 *seq_DecomposedStrelArray_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  emxArray_boolean_T *c_obj;
  emxArray_boolean_T *isEachStrelInSE2D;
  emxArray_boolean_T *nhood;
  emxArray_cell_wrap_1 *seq_DecomposedStrelArray;
  emxArray_real32_T *Apad;
  emxArray_real32_T *Apadpre;
  emxArray_real_T e_obj;
  emxArray_real_T *allheight;
  emxArray_real_T *d_obj;
  emxArray_real_T *height;
  strel b_obj;
  strel obj;
  real_T asizeT[2];
  real_T dv[2];
  real_T dv1[2];
  real_T pad_lr1_data[2];
  real_T pad_ul1_data[2];
  real_T d;
  real_T *allheight_data;
  real_T *height_data;
  int32_T pad_lr1_size[2];
  int32_T pad_ul1_size[2];
  int32_T a_tmp;
  int32_T b;
  int32_T b_i;
  int32_T f_obj;
  int32_T g_obj;
  int32_T h_obj;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T j;
  int32_T loop_ub;
  int32_T sInd;
  real32_T *Apadpre_data;
  real32_T *B_data;
  int8_T libNameEnum;
  boolean_T x[3];
  boolean_T exitg1;
  boolean_T overflow;
  boolean_T strel_is_all_flat;
  boolean_T *nhood_data;
  boolean_T *obj_data;
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &hb_emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  f_emxInit_images_internal_coder(&b_st, &seq_StrelArray, &gc_emlrtRTEI, true);
  emxInit_cell_wrap_1(&b_st, &seq_DecomposedStrelArray, &gc_emlrtRTEI);
  emxInit_boolean_T(&b_st, &isEachStrelInSE2D, 2, &gc_emlrtRTEI, true);
  c_st.site = &cg_emlrtRSI;
  strel_decompose(&c_st, se_StrelArray, se_DecomposedStrelArray, seq_StrelArray,
                  seq_DecomposedStrelArray, isEachStrelInSE2D);
  seq_DecomposedStrelArray_data = seq_DecomposedStrelArray->data;
  seq_StrelArray_data = seq_StrelArray->data;
  c_st.site = &bg_emlrtRSI;
  strel_is_all_flat = true;
  sInd = 0;
  emxInitStruct_strel(&c_st, &obj, &fc_emlrtRTEI);
  exitg1 = false;
  while ((!exitg1) && (sInd <= seq_StrelArray->size[1] - 1)) {
    i = obj.StrelArray->size[0] * obj.StrelArray->size[1];
    obj.StrelArray->size[0] = 1;
    obj.StrelArray->size[1] = seq_StrelArray->size[1];
    d_emxEnsureCapacity_images_inte(&c_st, obj.StrelArray, i, &fc_emlrtRTEI);
    loop_ub = seq_StrelArray->size[1];
    for (i = 0; i < loop_ub; i++) {
      c_emxCopyStruct_images_internal(&c_st, &obj.StrelArray->data[i],
                                      &seq_StrelArray_data[i], &gc_emlrtRTEI);
    }
    i = obj.DecomposedStrelArray->size[0] * obj.DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[0] = 1;
    obj.DecomposedStrelArray->size[1] = seq_DecomposedStrelArray->size[1];
    emxEnsureCapacity_cell_wrap_11(&c_st, obj.DecomposedStrelArray, i,
                                   &fc_emlrtRTEI);
    loop_ub = seq_DecomposedStrelArray->size[1];
    for (i = 0; i < loop_ub; i++) {
      emxCopyStruct_cell_wrap_1(&c_st, &obj.DecomposedStrelArray->data[i],
                                &seq_DecomposedStrelArray_data[i],
                                &gc_emlrtRTEI);
    }
    d_st.site = &ig_emlrtRSI;
    strel_parenReference(&d_st, &obj, (real_T)sInd + 1.0);
    overflow = !obj.StrelArray->data[0].Flat;
    d_st.site = &ig_emlrtRSI;
    if (ifWhileCond((boolean_T *)&overflow)) {
      strel_is_all_flat = false;
      exitg1 = true;
    } else {
      sInd++;
    }
  }
  c_st.site = &ag_emlrtRSI;
  i = seq_StrelArray->size[1];
  for (sInd = 0; sInd < i; sInd++) {
    d_st.site = &mg_emlrtRSI;
    i1 = obj.StrelArray->size[0] * obj.StrelArray->size[1];
    obj.StrelArray->size[0] = 1;
    loop_ub = seq_StrelArray->size[1];
    obj.StrelArray->size[1] = seq_StrelArray->size[1];
    d_emxEnsureCapacity_images_inte(&d_st, obj.StrelArray, i1, &ic_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      c_emxCopyStruct_images_internal(&d_st, &obj.StrelArray->data[i1],
                                      &seq_StrelArray_data[i1], &gc_emlrtRTEI);
    }
    i1 = obj.DecomposedStrelArray->size[0] * obj.DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[0] = 1;
    loop_ub = seq_DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[1] = seq_DecomposedStrelArray->size[1];
    emxEnsureCapacity_cell_wrap_11(&d_st, obj.DecomposedStrelArray, i1,
                                   &ic_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      emxCopyStruct_cell_wrap_1(&d_st, &obj.DecomposedStrelArray->data[i1],
                                &seq_DecomposedStrelArray_data[i1],
                                &gc_emlrtRTEI);
    }
    e_st.site = &mg_emlrtRSI;
    strel_parenReference(&e_st, &obj, (real_T)sInd + 1.0);
    if (obj.StrelArray->size[1] != 1) {
      emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                    "images:getnhood:wrongType",
                                    "images:getnhood:wrongType", 0);
    }
  }
  i = isEachStrelInSE2D->size[0] * isEachStrelInSE2D->size[1];
  isEachStrelInSE2D->size[0] = 1;
  emxEnsureCapacity_boolean_T(&b_st, isEachStrelInSE2D, i, &hc_emlrtRTEI);
  nhood_data = isEachStrelInSE2D->data;
  loop_ub = isEachStrelInSE2D->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    nhood_data[i] = true;
  }
  c_st.site = &yf_emlrtRSI;
  all(&c_st, isEachStrelInSE2D);
  if (strel_is_all_flat) {
    libNameEnum = 6;
  } else {
    libNameEnum = 7;
  }
  c_st.site = &xf_emlrtRSI;
  strel_getpadsize(&c_st, se_StrelArray, se_DecomposedStrelArray, pad_ul1_data,
                   pad_ul1_size, pad_lr1_data, pad_lr1_size);
  c_st.site = &wf_emlrtRSI;
  d_st.site = &xh_emlrtRSI;
  e_st.site = &yh_emlrtRSI;
  d_st.site = &wh_emlrtRSI;
  b_validateattributes(&d_st, pad_ul1_data);
  d_st.site = &vh_emlrtRSI;
  r = _mm_loadu_pd(&pad_ul1_data[0]);
  _mm_storeu_pd(&dv[0], _mm_add_pd(r, _mm_set1_pd(1.0)));
  if (dv[0] != (int32_T)muDoubleScalarFloor(dv[0])) {
    emlrtIntegerCheckR2012b(dv[0], &r_emlrtDCI, &d_st);
  }
  dv1[0] = dv[0];
  if (dv[1] != (int32_T)muDoubleScalarFloor(dv[1])) {
    emlrtIntegerCheckR2012b(dv[1], &r_emlrtDCI, &d_st);
  }
  dv1[1] = dv[1];
  r = _mm_loadu_pd(&dv1[0]);
  _mm_storeu_pd(&asizeT[0], r);
  emxInit_real32_T(&d_st, &Apadpre, &xc_emlrtRTEI);
  i = Apadpre->size[0] * Apadpre->size[1];
  Apadpre->size[0] = (int32_T)asizeT[0];
  Apadpre->size[1] = (int32_T)asizeT[1];
  emxEnsureCapacity_real32_T(&d_st, Apadpre, i, &jc_emlrtRTEI);
  Apadpre_data = Apadpre->data;
  i = (int32_T)pad_ul1_data[1];
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, pad_ul1_data[1], mxDOUBLE_CLASS,
                                (int32_T)pad_ul1_data[1], &n_emlrtRTEI, &d_st);
  for (j = 0; j < i; j++) {
    i1 = Apadpre->size[0];
    for (b_i = 0; b_i < i1; b_i++) {
      if (b_i + 1 > Apadpre->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Apadpre->size[0],
                                      &ib_emlrtBCI, &d_st);
      }
      if (((int32_T)((uint32_T)j + 1U) < 1) ||
          ((int32_T)((uint32_T)j + 1U) > Apadpre->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)j + 1U), 1,
                                      Apadpre->size[1], &jb_emlrtBCI, &d_st);
      }
      Apadpre_data[b_i + Apadpre->size[0] * j] = rtMinusInfF;
    }
  }
  a_tmp = (int32_T)pad_ul1_data[1] + 1;
  b = Apadpre->size[1];
  e_st.site = &ai_emlrtRSI;
  overflow = (((int32_T)pad_ul1_data[1] + 1 <= Apadpre->size[1]) &&
              (Apadpre->size[1] > 2147483646));
  if (overflow) {
    f_st.site = &tc_emlrtRSI;
    check_forloop_overflow_error(&f_st);
  }
  for (j = a_tmp; j <= b; j++) {
    d = pad_ul1_data[0];
    i = (int32_T)d;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
                                  &m_emlrtRTEI, &d_st);
    for (b_i = 0; b_i < i; b_i++) {
      if (((int32_T)((uint32_T)b_i + 1U) < 1) ||
          ((int32_T)((uint32_T)b_i + 1U) > Apadpre->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)b_i + 1U), 1,
                                      Apadpre->size[0], &mb_emlrtBCI, &d_st);
      }
      if ((j < 1) || (j > Apadpre->size[1])) {
        emlrtDynamicBoundsCheckR2012b(j, 1, Apadpre->size[1], &nb_emlrtBCI,
                                      &d_st);
      }
      Apadpre_data[b_i + Apadpre->size[0] * (j - 1)] = rtMinusInfF;
    }
  }
  i = (int32_T)pad_ul1_data[0] + 1;
  if ((i < 1) || (i > Apadpre->size[0])) {
    emlrtDynamicBoundsCheckR2012b(i, 1, Apadpre->size[0], &kb_emlrtBCI, &d_st);
  }
  if ((a_tmp < 1) || (a_tmp > Apadpre->size[1])) {
    emlrtDynamicBoundsCheckR2012b(a_tmp, 1, Apadpre->size[1], &lb_emlrtBCI,
                                  &d_st);
  }
  Apadpre_data[(i + Apadpre->size[0] * (a_tmp - 1)) - 1] = 1.0F;
  emxInit_real32_T(&b_st, &Apad, &yc_emlrtRTEI);
  c_st.site = &vf_emlrtRSI;
  padarray(&c_st, Apadpre, pad_lr1_data, Apad);
  Apadpre_data = Apad->data;
  emxFree_real32_T(&b_st, &Apadpre);
  i = B->size[0] * B->size[1];
  B->size[0] = Apad->size[0];
  B->size[1] = Apad->size[1];
  emxEnsureCapacity_real32_T(&b_st, B, i, &kc_emlrtRTEI);
  B_data = B->data;
  i = seq_StrelArray->size[1];
  emxInit_boolean_T(&b_st, &nhood, 3, &sc_emlrtRTEI, true);
  emxInit_real_T(&b_st, &allheight, 3, &uc_emlrtRTEI, true);
  emxInit_real_T(&b_st, &height, 1, &ad_emlrtRTEI, true);
  emxInitStruct_strel(&b_st, &b_obj, &mc_emlrtRTEI);
  emxInit_boolean_T(&b_st, &c_obj, 2, &vc_emlrtRTEI, true);
  emxInit_real_T(&b_st, &d_obj, 2, &wc_emlrtRTEI, true);
  if (i - 1 >= 0) {
    x[2] = false;
  }
  for (sInd = 0; sInd < i; sInd++) {
    c_st.site = &uf_emlrtRSI;
    i1 = obj.StrelArray->size[0] * obj.StrelArray->size[1];
    obj.StrelArray->size[0] = 1;
    loop_ub = seq_StrelArray->size[1];
    obj.StrelArray->size[1] = seq_StrelArray->size[1];
    d_emxEnsureCapacity_images_inte(&c_st, obj.StrelArray, i1, &lc_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      c_emxCopyStruct_images_internal(&c_st, &obj.StrelArray->data[i1],
                                      &seq_StrelArray_data[i1], &gc_emlrtRTEI);
    }
    i1 = obj.DecomposedStrelArray->size[0] * obj.DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[0] = 1;
    loop_ub = seq_DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[1] = seq_DecomposedStrelArray->size[1];
    emxEnsureCapacity_cell_wrap_11(&c_st, obj.DecomposedStrelArray, i1,
                                   &lc_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      emxCopyStruct_cell_wrap_1(&c_st, &obj.DecomposedStrelArray->data[i1],
                                &seq_DecomposedStrelArray_data[i1],
                                &gc_emlrtRTEI);
    }
    d_st.site = &uf_emlrtRSI;
    strel_parenReference(&d_st, &obj, (real_T)sInd + 1.0);
    if (obj.StrelArray->size[1] != 1) {
      emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
                                    "images:getnhood:wrongType",
                                    "images:getnhood:wrongType", 0);
    }
    c_st.site = &tf_emlrtRSI;
    i1 = b_obj.StrelArray->size[0] * b_obj.StrelArray->size[1];
    b_obj.StrelArray->size[0] = 1;
    loop_ub = seq_StrelArray->size[1];
    b_obj.StrelArray->size[1] = seq_StrelArray->size[1];
    d_emxEnsureCapacity_images_inte(&c_st, b_obj.StrelArray, i1, &mc_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      c_emxCopyStruct_images_internal(&c_st, &b_obj.StrelArray->data[i1],
                                      &seq_StrelArray_data[i1], &gc_emlrtRTEI);
    }
    i1 = b_obj.DecomposedStrelArray->size[0] *
         b_obj.DecomposedStrelArray->size[1];
    b_obj.DecomposedStrelArray->size[0] = 1;
    loop_ub = seq_DecomposedStrelArray->size[1];
    b_obj.DecomposedStrelArray->size[1] = seq_DecomposedStrelArray->size[1];
    emxEnsureCapacity_cell_wrap_11(&c_st, b_obj.DecomposedStrelArray, i1,
                                   &mc_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      emxCopyStruct_cell_wrap_1(&c_st, &b_obj.DecomposedStrelArray->data[i1],
                                &seq_DecomposedStrelArray_data[i1],
                                &gc_emlrtRTEI);
    }
    d_st.site = &tf_emlrtRSI;
    strel_parenReference(&d_st, &b_obj, (real_T)sInd + 1.0);
    if (b_obj.StrelArray->size[1] != 1) {
      emlrtErrorWithMessageIdR2018a(&c_st, &l_emlrtRTEI,
                                    "images:getheight:wrongType",
                                    "images:getheight:wrongType", 0);
    }
    if (sInd + 1 > isEachStrelInSE2D->size[1]) {
      emlrtDynamicBoundsCheckR2012b(sInd + 1, 1, isEachStrelInSE2D->size[1],
                                    &x_emlrtBCI, &b_st);
    }
    c_st.site = &sf_emlrtRSI;
    x[0] = (obj.StrelArray->data[0].nhood->size[0] > 200);
    x[1] = (obj.StrelArray->data[0].nhood->size[1] > 200);
    overflow = false;
    b = 0;
    exitg1 = false;
    while ((!exitg1) && (b < 3)) {
      if (x[b]) {
        overflow = true;
        exitg1 = true;
      } else {
        b++;
      }
    }
    a_tmp = 0;
    loop_ub = obj.StrelArray->data[0].nhood->size[0] *
              obj.StrelArray->data[0].nhood->size[1];
    for (b = 0; b < loop_ub; b++) {
      if (obj.StrelArray->data[0].nhood->data[b]) {
        a_tmp++;
      }
    }
    j = b_obj.StrelArray->data[0].height->size[0] *
        b_obj.StrelArray->data[0].height->size[1];
    e_obj = *b_obj.StrelArray->data[0].height;
    f_obj = j;
    e_obj.size = &f_obj;
    e_obj.numDimensions = 1;
    d_st.site = &di_emlrtRSI;
    if ((!any(&d_st, &e_obj)) && (!overflow) &&
        (!((real_T)a_tmp / (real_T)loop_ub < 0.05))) {
      overflow = true;
    } else {
      overflow = false;
    }
    if (overflow && strel_is_all_flat) {
      int8_T iv[3];
      iv[0] = (int8_T)muDoubleScalarRem(obj.StrelArray->data[0].nhood->size[0],
                                        2.0);
      iv[1] = (int8_T)muDoubleScalarRem(obj.StrelArray->data[0].nhood->size[1],
                                        2.0);
      iv[2] = 1;
      c_st.site = &rf_emlrtRSI;
      overflow = false;
      b = 0;
      exitg1 = false;
      while ((!exitg1) && (b < 3)) {
        if (iv[b] == 0) {
          overflow = true;
          exitg1 = true;
        } else {
          b++;
        }
      }
      if (overflow) {
        real_T d1;
        real_T numColPad;
        real_T numRowPad;
        int32_T b_loop_ub;
        numRowPad =
            ((real_T)obj.StrelArray->data[0].nhood->size[0] -
             2.0 * muDoubleScalarCeil(
                       (real_T)obj.StrelArray->data[0].nhood->size[0] / 2.0)) +
            1.0;
        numColPad =
            ((real_T)obj.StrelArray->data[0].nhood->size[1] -
             2.0 * muDoubleScalarCeil(
                       (real_T)obj.StrelArray->data[0].nhood->size[1] / 2.0)) +
            1.0;
        d = (real_T)obj.StrelArray->data[0].nhood->size[0] + numRowPad;
        if (!(d >= 0.0)) {
          emlrtNonNegativeCheckR2012b(d, &j_emlrtDCI, &b_st);
        }
        if (d != (int32_T)d) {
          emlrtIntegerCheckR2012b(d, &i_emlrtDCI, &b_st);
        }
        d1 = (real_T)obj.StrelArray->data[0].nhood->size[1] + numColPad;
        if (!(d1 >= 0.0)) {
          emlrtNonNegativeCheckR2012b(d1, &l_emlrtDCI, &b_st);
        }
        if (d1 != (int32_T)d1) {
          emlrtIntegerCheckR2012b(d1, &k_emlrtDCI, &b_st);
        }
        i1 = nhood->size[0] * nhood->size[1] * nhood->size[2];
        nhood->size[0] = (int32_T)d;
        nhood->size[1] = (int32_T)d1;
        nhood->size[2] = 1;
        emxEnsureCapacity_boolean_T(&b_st, nhood, i1, &sc_emlrtRTEI);
        nhood_data = nhood->data;
        if (d != (int32_T)d) {
          emlrtIntegerCheckR2012b(d, &o_emlrtDCI, &b_st);
        }
        if (!(d1 >= 0.0)) {
          emlrtNonNegativeCheckR2012b(d1, &p_emlrtDCI, &b_st);
        }
        if (d1 != (int32_T)d1) {
          emlrtIntegerCheckR2012b(d1, &o_emlrtDCI, &b_st);
        }
        a_tmp = (int32_T)d * (int32_T)d1;
        for (i1 = 0; i1 < a_tmp; i1++) {
          nhood_data[i1] = false;
        }
        if (d != (int32_T)d) {
          emlrtIntegerCheckR2012b(d, &m_emlrtDCI, &b_st);
        }
        if (d1 != (int32_T)d1) {
          emlrtIntegerCheckR2012b(d1, &n_emlrtDCI, &b_st);
        }
        i1 = allheight->size[0] * allheight->size[1] * allheight->size[2];
        allheight->size[0] = (int32_T)d;
        allheight->size[1] = (int32_T)d1;
        allheight->size[2] = 1;
        emxEnsureCapacity_real_T(&b_st, allheight, i1, &uc_emlrtRTEI);
        allheight_data = allheight->data;
        if (d != (int32_T)d) {
          emlrtIntegerCheckR2012b(d, &q_emlrtDCI, &b_st);
        }
        if (d1 != (int32_T)d1) {
          emlrtIntegerCheckR2012b(d1, &q_emlrtDCI, &b_st);
        }
        for (i1 = 0; i1 < a_tmp; i1++) {
          allheight_data[i1] = 0.0;
        }
        d = muDoubleScalarRem(numRowPad, 4.294967296E+9);
        if (d < 0.0) {
          i1 = -(int32_T)(uint32_T)-d;
        } else {
          i1 = (int32_T)(uint32_T)d;
        }
        i1 += obj.StrelArray->data[0].nhood->size[0];
        if (numRowPad + 1.0 > i1) {
          a_tmp = 0;
          i2 = 0;
        } else {
          if (((int32_T)(numRowPad + 1.0) < 1) ||
              ((int32_T)(numRowPad + 1.0) > i1)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(numRowPad + 1.0), 1, i1,
                                          &db_emlrtBCI, &b_st);
          }
          a_tmp = (int32_T)(numRowPad + 1.0) - 1;
          if (i1 < 1) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, i1, &eb_emlrtBCI, &b_st);
          }
          i2 = i1;
        }
        d = muDoubleScalarRem(numColPad, 4.294967296E+9);
        if (d < 0.0) {
          i3 = -(int32_T)(uint32_T)-d;
        } else {
          i3 = (int32_T)(uint32_T)d;
        }
        i3 += obj.StrelArray->data[0].nhood->size[1];
        if (numColPad + 1.0 > i3) {
          b = 0;
          i4 = 0;
        } else {
          if (((int32_T)(numColPad + 1.0) < 1) ||
              ((int32_T)(numColPad + 1.0) > i3)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(numColPad + 1.0), 1, i3,
                                          &fb_emlrtBCI, &b_st);
          }
          b = (int32_T)(numColPad + 1.0) - 1;
          if (i3 < 1) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i3, &gb_emlrtBCI, &b_st);
          }
          i4 = i3;
        }
        loop_ub = i2 - a_tmp;
        pad_ul1_size[0] = loop_ub;
        j = i4 - b;
        pad_ul1_size[1] = j;
        pad_lr1_size[0] = obj.StrelArray->data[0].nhood->size[0];
        pad_lr1_size[1] = obj.StrelArray->data[0].nhood->size[1];
        emlrtSubAssignSizeCheckR2012b(&pad_ul1_size[0], 2, &pad_lr1_size[0], 2,
                                      &d_emlrtECI, &b_st);
        b_i = obj.StrelArray->data[0].nhood->size[0];
        b_loop_ub = obj.StrelArray->data[0].nhood->size[1];
        i2 = c_obj->size[0] * c_obj->size[1];
        c_obj->size[0] = obj.StrelArray->data[0].nhood->size[0];
        c_obj->size[1] = obj.StrelArray->data[0].nhood->size[1];
        emxEnsureCapacity_boolean_T(&b_st, c_obj, i2, &vc_emlrtRTEI);
        obj_data = c_obj->data;
        for (i2 = 0; i2 < b_loop_ub; i2++) {
          for (i4 = 0; i4 < b_i; i4++) {
            obj_data[i4 + c_obj->size[0] * i2] =
                obj.StrelArray->data[0]
                    .nhood
                    ->data[i4 + obj.StrelArray->data[0].nhood->size[0] * i2];
          }
        }
        for (i2 = 0; i2 < j; i2++) {
          for (i4 = 0; i4 < loop_ub; i4++) {
            nhood_data[(a_tmp + i4) + i1 * (b + i2)] =
                obj_data[i4 + loop_ub * i2];
          }
        }
        if (numRowPad + 1.0 > i1) {
          a_tmp = 0;
          i2 = 0;
        } else {
          if (((int32_T)(numRowPad + 1.0) < 1) ||
              ((int32_T)(numRowPad + 1.0) > i1)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(numRowPad + 1.0), 1, i1,
                                          &y_emlrtBCI, &b_st);
          }
          a_tmp = (int32_T)(numRowPad + 1.0) - 1;
          if (i1 < 1) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, i1, &ab_emlrtBCI, &b_st);
          }
          i2 = i1;
        }
        if (numColPad + 1.0 > i3) {
          b = 0;
          i3 = 0;
        } else {
          if (((int32_T)(numColPad + 1.0) < 1) ||
              ((int32_T)(numColPad + 1.0) > i3)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(numColPad + 1.0), 1, i3,
                                          &bb_emlrtBCI, &b_st);
          }
          b = (int32_T)(numColPad + 1.0) - 1;
          if (i3 < 1) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i3, &cb_emlrtBCI, &b_st);
          }
        }
        loop_ub = i2 - a_tmp;
        pad_ul1_size[0] = loop_ub;
        j = i3 - b;
        pad_ul1_size[1] = j;
        pad_lr1_size[0] = b_obj.StrelArray->data[0].height->size[0];
        pad_lr1_size[1] = b_obj.StrelArray->data[0].height->size[1];
        emlrtSubAssignSizeCheckR2012b(&pad_ul1_size[0], 2, &pad_lr1_size[0], 2,
                                      &c_emlrtECI, &b_st);
        b_i = b_obj.StrelArray->data[0].height->size[0];
        b_loop_ub = b_obj.StrelArray->data[0].height->size[1];
        i2 = d_obj->size[0] * d_obj->size[1];
        d_obj->size[0] = b_obj.StrelArray->data[0].height->size[0];
        d_obj->size[1] = b_obj.StrelArray->data[0].height->size[1];
        emxEnsureCapacity_real_T(&b_st, d_obj, i2, &wc_emlrtRTEI);
        height_data = d_obj->data;
        for (i2 = 0; i2 < b_loop_ub; i2++) {
          for (i3 = 0; i3 < b_i; i3++) {
            height_data[i3 + d_obj->size[0] * i2] =
                b_obj.StrelArray->data[0]
                    .height
                    ->data[i3 + b_obj.StrelArray->data[0].height->size[0] * i2];
          }
        }
        for (i2 = 0; i2 < j; i2++) {
          for (i3 = 0; i3 < loop_ub; i3++) {
            allheight_data[(a_tmp + i3) + i1 * (b + i2)] =
                height_data[i3 + loop_ub * i2];
          }
        }
      } else {
        i1 = nhood->size[0] * nhood->size[1] * nhood->size[2];
        nhood->size[0] = obj.StrelArray->data[0].nhood->size[0];
        nhood->size[1] = obj.StrelArray->data[0].nhood->size[1];
        nhood->size[2] = 1;
        emxEnsureCapacity_boolean_T(&b_st, nhood, i1, &pc_emlrtRTEI);
        nhood_data = nhood->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          nhood_data[i1] = obj.StrelArray->data[0].nhood->data[i1];
        }
        i1 = allheight->size[0] * allheight->size[1] * allheight->size[2];
        allheight->size[0] = b_obj.StrelArray->data[0].height->size[0];
        allheight->size[1] = b_obj.StrelArray->data[0].height->size[1];
        allheight->size[2] = 1;
        emxEnsureCapacity_real_T(&b_st, allheight, i1, &rc_emlrtRTEI);
        allheight_data = allheight->data;
        for (i1 = 0; i1 < j; i1++) {
          allheight_data[i1] = b_obj.StrelArray->data[0].height->data[i1];
        }
      }
      c_st.site = &qf_emlrtRSI;
      flip(allheight);
      c_st.site = &qf_emlrtRSI;
      b_flip(allheight);
      j = allheight->size[0] * allheight->size[1];
      e_obj = *allheight;
      h_obj = j;
      e_obj.size = &h_obj;
      e_obj.numDimensions = 1;
      c_st.site = &pf_emlrtRSI;
      if (any(&c_st, &e_obj)) {
        c_st.site = &of_emlrtRSI;
        c_flip(nhood);
        c_st.site = &of_emlrtRSI;
        d_flip(nhood);
        nhood_data = nhood->data;
      }
      b = nhood->size[0] * nhood->size[1] - 1;
      for (b_i = 0; b_i <= b; b_i++) {
        if (nhood_data[b_i] && (b_i > j - 1)) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, j - 1, &hb_emlrtBCI, &b_st);
        }
      }
      real_T nsizeT_data[3];
      c_st.site = &nf_emlrtRSI;
      d_st.site = &fi_emlrtRSI;
      asizeT[0] = Apad->size[0];
      nsizeT_data[0] = nhood->size[0];
      asizeT[1] = Apad->size[1];
      nsizeT_data[1] = nhood->size[1];
      dilate_real32_ipp(&Apadpre_data[0], &asizeT[0], &nhood_data[0],
                        &nsizeT_data[0], &B_data[0]);
    } else {
      i1 = nhood->size[0] * nhood->size[1] * nhood->size[2];
      nhood->size[0] = obj.StrelArray->data[0].nhood->size[0];
      nhood->size[1] = obj.StrelArray->data[0].nhood->size[1];
      nhood->size[2] = 1;
      emxEnsureCapacity_boolean_T(&b_st, nhood, i1, &nc_emlrtRTEI);
      nhood_data = nhood->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        nhood_data[i1] = obj.StrelArray->data[0].nhood->data[i1];
      }
      i1 = allheight->size[0] * allheight->size[1] * allheight->size[2];
      allheight->size[0] = b_obj.StrelArray->data[0].height->size[0];
      allheight->size[1] = b_obj.StrelArray->data[0].height->size[1];
      allheight->size[2] = 1;
      emxEnsureCapacity_real_T(&b_st, allheight, i1, &oc_emlrtRTEI);
      allheight_data = allheight->data;
      for (i1 = 0; i1 < j; i1++) {
        allheight_data[i1] = b_obj.StrelArray->data[0].height->data[i1];
      }
      c_st.site = &mf_emlrtRSI;
      flip(allheight);
      c_st.site = &mf_emlrtRSI;
      b_flip(allheight);
      allheight_data = allheight->data;
      j = allheight->size[0] * allheight->size[1];
      e_obj = *allheight;
      g_obj = j;
      e_obj.size = &g_obj;
      e_obj.numDimensions = 1;
      c_st.site = &lf_emlrtRSI;
      if (any(&c_st, &e_obj)) {
        i1 = nhood->size[0] * nhood->size[1] * nhood->size[2];
        nhood->size[0] = obj.StrelArray->data[0].nhood->size[0];
        nhood->size[1] = obj.StrelArray->data[0].nhood->size[1];
        nhood->size[2] = 1;
        emxEnsureCapacity_boolean_T(&b_st, nhood, i1, &qc_emlrtRTEI);
        nhood_data = nhood->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          nhood_data[i1] = obj.StrelArray->data[0].nhood->data[i1];
        }
        c_st.site = &kf_emlrtRSI;
        c_flip(nhood);
        c_st.site = &kf_emlrtRSI;
        d_flip(nhood);
        nhood_data = nhood->data;
      }
      b = nhood->size[0] * nhood->size[1] - 1;
      a_tmp = 0;
      for (b_i = 0; b_i <= b; b_i++) {
        if (nhood_data[b_i]) {
          a_tmp++;
        }
      }
      i1 = height->size[0];
      height->size[0] = a_tmp;
      emxEnsureCapacity_real_T(&b_st, height, i1, &gc_emlrtRTEI);
      height_data = height->data;
      a_tmp = 0;
      for (b_i = 0; b_i <= b; b_i++) {
        if (nhood_data[b_i]) {
          if (b_i > j - 1) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, j - 1, &ob_emlrtBCI, &b_st);
          }
          height_data[a_tmp] = allheight_data[b_i];
          a_tmp++;
        }
      }
      c_st.site = &jf_emlrtRSI;
      if (libNameEnum == 7) {
        real_T nsizeT_data[3];
        d_st.site = &gi_emlrtRSI;
        asizeT[0] = Apad->size[0];
        nsizeT_data[0] = nhood->size[0];
        asizeT[1] = Apad->size[1];
        nsizeT_data[1] = nhood->size[1];
        dilate_nonflat_real32_tbb(&Apadpre_data[0], &asizeT[0], 2.0,
                                  &nhood_data[0], &nsizeT_data[0], 2.0,
                                  &height_data[0], &B_data[0]);
      } else {
        real_T nsizeT_data[3];
        d_st.site = &hi_emlrtRSI;
        asizeT[0] = Apad->size[0];
        nsizeT_data[0] = nhood->size[0];
        asizeT[1] = Apad->size[1];
        nsizeT_data[1] = nhood->size[1];
        dilate_flat_real32_tbb(&Apadpre_data[0], &asizeT[0], 2.0,
                               &nhood_data[0], &nsizeT_data[0], 2.0,
                               &B_data[0]);
      }
    }
    i1 = Apad->size[0] * Apad->size[1];
    Apad->size[0] = B->size[0];
    Apad->size[1] = B->size[1];
    emxEnsureCapacity_real32_T(&b_st, Apad, i1, &tc_emlrtRTEI);
    Apadpre_data = Apad->data;
    loop_ub = B->size[0] * B->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      Apadpre_data[i1] = B_data[i1];
    }
  }
  emxFree_real_T(&b_st, &d_obj);
  emxFree_boolean_T(&b_st, &c_obj);
  emxFreeStruct_strel(&b_st, &b_obj);
  emxFreeStruct_strel(&b_st, &obj);
  emxFree_boolean_T(&b_st, &isEachStrelInSE2D);
  emxFree_cell_wrap_1(&b_st, &seq_DecomposedStrelArray);
  c_emxFree_images_internal_coder(&b_st, &seq_StrelArray);
  emxFree_real_T(&b_st, &height);
  emxFree_real_T(&b_st, &allheight);
  emxFree_boolean_T(&b_st, &nhood);
  emxFree_real32_T(&b_st, &Apad);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void e_imdilate(const emlrtStack *sp, const emxArray_boolean_T *A,
                const c_emxArray_images_internal_code *se_StrelArray,
                const emxArray_cell_wrap_1 *se_DecomposedStrelArray,
                emxArray_boolean_T *B)
{
  c_emxArray_images_internal_code *seq_StrelArray;
  const c_images_internal_coder_strel_S *se_StrelArray_data;
  c_images_internal_coder_strel_S *seq_StrelArray_data;
  cell_wrap_1 *seq_DecomposedStrelArray_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  emxArray_boolean_T *Apad;
  emxArray_boolean_T *Apadpre;
  emxArray_boolean_T *isEachStrelInSE2D;
  emxArray_boolean_T *nhood;
  emxArray_cell_wrap_1 *seq_DecomposedStrelArray;
  emxArray_real_T b_allheight;
  emxArray_real_T *allheight;
  emxArray_uint32_T *Apadpack;
  emxArray_uint32_T *Bpack;
  strel b_obj;
  strel obj;
  real_T bwpSize[2];
  real_T padSize_data[2];
  real_T d;
  real_T d1;
  real_T *allheight_data;
  int32_T padSize_size[2];
  int32_T pad_lr1_size[2];
  int32_T allheight_tmp;
  int32_T b;
  int32_T b_i;
  int32_T c_allheight;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T numRows;
  int32_T sInd;
  uint32_T *Apadpack_data;
  uint32_T *Bpack_data;
  int8_T fcnNameEnum;
  int8_T libNameEnum;
  const boolean_T *A_data;
  boolean_T exitg1;
  boolean_T strel_is_all_flat;
  boolean_T strel_is_single;
  boolean_T *Apadpre_data;
  boolean_T *B_data;
  boolean_T *nhood_data;
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  se_StrelArray_data = se_StrelArray->data;
  A_data = A->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &hb_emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  f_emxInit_images_internal_coder(&b_st, &seq_StrelArray, &gc_emlrtRTEI, true);
  emxInit_cell_wrap_1(&b_st, &seq_DecomposedStrelArray, &gc_emlrtRTEI);
  emxInit_boolean_T(&b_st, &isEachStrelInSE2D, 2, &gc_emlrtRTEI, true);
  c_st.site = &cg_emlrtRSI;
  strel_decompose(&c_st, se_StrelArray, se_DecomposedStrelArray, seq_StrelArray,
                  seq_DecomposedStrelArray, isEachStrelInSE2D);
  seq_DecomposedStrelArray_data = seq_DecomposedStrelArray->data;
  seq_StrelArray_data = seq_StrelArray->data;
  strel_is_single = (seq_StrelArray->size[1] == 1);
  c_st.site = &bg_emlrtRSI;
  strel_is_all_flat = true;
  sInd = 0;
  emxInitStruct_strel(&c_st, &obj, &fc_emlrtRTEI);
  exitg1 = false;
  while ((!exitg1) && (sInd <= seq_StrelArray->size[1] - 1)) {
    boolean_T obj_data;
    i = obj.StrelArray->size[0] * obj.StrelArray->size[1];
    obj.StrelArray->size[0] = 1;
    obj.StrelArray->size[1] = seq_StrelArray->size[1];
    d_emxEnsureCapacity_images_inte(&c_st, obj.StrelArray, i, &fc_emlrtRTEI);
    loop_ub = seq_StrelArray->size[1];
    for (i = 0; i < loop_ub; i++) {
      c_emxCopyStruct_images_internal(&c_st, &obj.StrelArray->data[i],
                                      &seq_StrelArray_data[i], &gc_emlrtRTEI);
    }
    i = obj.DecomposedStrelArray->size[0] * obj.DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[0] = 1;
    obj.DecomposedStrelArray->size[1] = seq_DecomposedStrelArray->size[1];
    emxEnsureCapacity_cell_wrap_11(&c_st, obj.DecomposedStrelArray, i,
                                   &fc_emlrtRTEI);
    loop_ub = seq_DecomposedStrelArray->size[1];
    for (i = 0; i < loop_ub; i++) {
      emxCopyStruct_cell_wrap_1(&c_st, &obj.DecomposedStrelArray->data[i],
                                &seq_DecomposedStrelArray_data[i],
                                &gc_emlrtRTEI);
    }
    d_st.site = &ig_emlrtRSI;
    strel_parenReference(&d_st, &obj, (real_T)sInd + 1.0);
    obj_data = !obj.StrelArray->data[0].Flat;
    d_st.site = &ig_emlrtRSI;
    if (ifWhileCond((boolean_T *)&obj_data)) {
      strel_is_all_flat = false;
      exitg1 = true;
    } else {
      sInd++;
    }
  }
  c_st.site = &ag_emlrtRSI;
  i = seq_StrelArray->size[1];
  for (sInd = 0; sInd < i; sInd++) {
    d_st.site = &mg_emlrtRSI;
    i1 = obj.StrelArray->size[0] * obj.StrelArray->size[1];
    obj.StrelArray->size[0] = 1;
    loop_ub = seq_StrelArray->size[1];
    obj.StrelArray->size[1] = seq_StrelArray->size[1];
    d_emxEnsureCapacity_images_inte(&d_st, obj.StrelArray, i1, &ic_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      c_emxCopyStruct_images_internal(&d_st, &obj.StrelArray->data[i1],
                                      &seq_StrelArray_data[i1], &gc_emlrtRTEI);
    }
    i1 = obj.DecomposedStrelArray->size[0] * obj.DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[0] = 1;
    loop_ub = seq_DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[1] = seq_DecomposedStrelArray->size[1];
    emxEnsureCapacity_cell_wrap_11(&d_st, obj.DecomposedStrelArray, i1,
                                   &ic_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      emxCopyStruct_cell_wrap_1(&d_st, &obj.DecomposedStrelArray->data[i1],
                                &seq_DecomposedStrelArray_data[i1],
                                &gc_emlrtRTEI);
    }
    e_st.site = &mg_emlrtRSI;
    strel_parenReference(&e_st, &obj, (real_T)sInd + 1.0);
    if (obj.StrelArray->size[1] != 1) {
      emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                    "images:getnhood:wrongType",
                                    "images:getnhood:wrongType", 0);
    }
  }
  i = isEachStrelInSE2D->size[0] * isEachStrelInSE2D->size[1];
  isEachStrelInSE2D->size[0] = 1;
  emxEnsureCapacity_boolean_T(&b_st, isEachStrelInSE2D, i, &hc_emlrtRTEI);
  Apadpre_data = isEachStrelInSE2D->data;
  loop_ub = isEachStrelInSE2D->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    Apadpre_data[i] = true;
  }
  if (!strel_is_all_flat) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &y_emlrtRTEI, "images:morphop:binaryWithNonflatStrel",
        "images:morphop:binaryWithNonflatStrel", 3, 4, 8, "imdilate");
  }
  c_st.site = &yf_emlrtRSI;
  strel_is_all_flat = all(&c_st, isEachStrelInSE2D);
  strel_is_all_flat = ((!strel_is_single) && strel_is_all_flat);
  if (strel_is_all_flat) {
    fcnNameEnum = -1;
    libNameEnum = 1;
  } else {
    if (strel_is_single) {
      c_st.site = &ij_emlrtRSI;
      if (se_StrelArray->size[1] != 1) {
        emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
                                      "images:getnhood:wrongType",
                                      "images:getnhood:wrongType", 0);
      }
      if (isequal(se_StrelArray_data[0].nhood)) {
        fcnNameEnum = 10;
      } else {
        fcnNameEnum = 11;
      }
    } else {
      fcnNameEnum = 12;
    }
    libNameEnum = 5;
  }
  c_st.site = &xf_emlrtRSI;
  strel_getpadsize(&c_st, se_StrelArray, se_DecomposedStrelArray, padSize_data,
                   padSize_size, bwpSize, pad_lr1_size);
  c_st.site = &wf_emlrtRSI;
  d_st.site = &xh_emlrtRSI;
  e_st.site = &yh_emlrtRSI;
  d_st.site = &wh_emlrtRSI;
  b_validateattributes(&d_st, padSize_data);
  d_st.site = &vh_emlrtRSI;
  d = (real_T)A->size[0] + padSize_data[0];
  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &cb_emlrtDCI, &d_st);
  }
  d1 = (real_T)A->size[1] + padSize_data[1];
  if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
    emlrtIntegerCheckR2012b(d1, &cb_emlrtDCI, &d_st);
  }
  emxInit_boolean_T(&d_st, &Apadpre, 2, &xc_emlrtRTEI, true);
  i = Apadpre->size[0] * Apadpre->size[1];
  Apadpre->size[0] = (int32_T)d;
  Apadpre->size[1] = (int32_T)d1;
  emxEnsureCapacity_boolean_T(&d_st, Apadpre, i, &df_emlrtRTEI);
  Apadpre_data = Apadpre->data;
  i = (int32_T)padSize_data[1];
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, padSize_data[1], mxDOUBLE_CLASS,
                                (int32_T)padSize_data[1], &n_emlrtRTEI, &d_st);
  for (numRows = 0; numRows < i; numRows++) {
    i1 = Apadpre->size[0];
    for (b_i = 0; b_i < i1; b_i++) {
      if (b_i + 1 > Apadpre->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Apadpre->size[0],
                                      &ib_emlrtBCI, &d_st);
      }
      if (((int32_T)((uint32_T)numRows + 1U) < 1) ||
          ((int32_T)((uint32_T)numRows + 1U) > Apadpre->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)numRows + 1U), 1,
                                      Apadpre->size[1], &jb_emlrtBCI, &d_st);
      }
      Apadpre_data[b_i + Apadpre->size[0] * numRows] = false;
    }
  }
  loop_ub = (int32_T)padSize_data[1] + 1;
  b = Apadpre->size[1];
  e_st.site = &ai_emlrtRSI;
  if (((int32_T)padSize_data[1] + 1 <= Apadpre->size[1]) &&
      (Apadpre->size[1] > 2147483646)) {
    f_st.site = &tc_emlrtRSI;
    check_forloop_overflow_error(&f_st);
  }
  for (numRows = loop_ub; numRows <= b; numRows++) {
    i1 = (int32_T)padSize_data[0];
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, padSize_data[0], mxDOUBLE_CLASS,
                                  (int32_T)padSize_data[0], &m_emlrtRTEI,
                                  &d_st);
    for (b_i = 0; b_i < i1; b_i++) {
      if (((int32_T)((uint32_T)b_i + 1U) < 1) ||
          ((int32_T)((uint32_T)b_i + 1U) > Apadpre->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)b_i + 1U), 1,
                                      Apadpre->size[0], &mb_emlrtBCI, &d_st);
      }
      if ((numRows < 1) || (numRows > Apadpre->size[1])) {
        emlrtDynamicBoundsCheckR2012b(numRows, 1, Apadpre->size[1],
                                      &nb_emlrtBCI, &d_st);
      }
      Apadpre_data[b_i + Apadpre->size[0] * (numRows - 1)] = false;
    }
  }
  i1 = A->size[1];
  loop_ub = A->size[0];
  for (numRows = 0; numRows < i1; numRows++) {
    b = (numRows + i) + 1;
    for (b_i = 0; b_i < loop_ub; b_i++) {
      if (b_i + 1 > A->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, A->size[0], &rc_emlrtBCI,
                                      &d_st);
      }
      if (numRows + 1 > A->size[1]) {
        emlrtDynamicBoundsCheckR2012b(numRows + 1, 1, A->size[1], &sc_emlrtBCI,
                                      &d_st);
      }
      allheight_tmp = (b_i + (int32_T)padSize_data[0]) + 1;
      if ((allheight_tmp < 1) || (allheight_tmp > Apadpre->size[0])) {
        emlrtDynamicBoundsCheckR2012b(allheight_tmp, 1, Apadpre->size[0],
                                      &kb_emlrtBCI, &d_st);
      }
      if ((b < 1) || (b > Apadpre->size[1])) {
        emlrtDynamicBoundsCheckR2012b(b, 1, Apadpre->size[1], &lb_emlrtBCI,
                                      &d_st);
      }
      Apadpre_data[(allheight_tmp + Apadpre->size[0] * (b - 1)) - 1] =
          A_data[b_i + A->size[0] * numRows];
    }
  }
  emxInit_boolean_T(&b_st, &Apad, 2, &yc_emlrtRTEI, true);
  c_st.site = &vf_emlrtRSI;
  b_padarray(&c_st, Apadpre, bwpSize, Apad);
  Apadpre_data = Apad->data;
  emxFree_boolean_T(&b_st, &Apadpre);
  emxInit_uint32_T(&b_st, &Apadpack, &hf_emlrtRTEI);
  Apadpack_data = Apadpack->data;
  if (strel_is_all_flat) {
    numRows = Apad->size[0];
    c_st.site = &hj_emlrtRSI;
    i = Apadpack->size[0] * Apadpack->size[1];
    Apadpack->size[0] =
        (int32_T)muDoubleScalarCeil((real_T)Apad->size[0] / 32.0);
    Apadpack->size[1] = Apad->size[1];
    emxEnsureCapacity_uint32_T(&c_st, Apadpack, i, &ef_emlrtRTEI);
    Apadpack_data = Apadpack->data;
    d_st.site = &gb_emlrtRSI;
    padSize_data[0] = Apad->size[0];
    bwpSize[0] = Apadpack->size[0];
    padSize_data[1] = Apad->size[1];
    bwpSize[1] = Apad->size[1];
    bwPackingtbb(&Apadpre_data[0], &padSize_data[0], &Apadpack_data[0],
                 &bwpSize[0], true);
    Apad->size[0] = 0;
    Apad->size[1] = 0;
  } else {
    numRows = -1;
    Apadpack->size[0] = 0;
    Apadpack->size[1] = 0;
  }
  emxInit_uint32_T(&b_st, &Bpack, &if_emlrtRTEI);
  i = Bpack->size[0] * Bpack->size[1];
  Bpack->size[0] = Apadpack->size[0];
  Bpack->size[1] = Apadpack->size[1];
  emxEnsureCapacity_uint32_T(&b_st, Bpack, i, &ff_emlrtRTEI);
  Bpack_data = Bpack->data;
  i = B->size[0] * B->size[1];
  B->size[0] = Apad->size[0];
  B->size[1] = Apad->size[1];
  emxEnsureCapacity_boolean_T(&b_st, B, i, &kc_emlrtRTEI);
  B_data = B->data;
  i = seq_StrelArray->size[1];
  emxInit_boolean_T(&b_st, &nhood, 3, &sc_emlrtRTEI, true);
  emxInit_real_T(&b_st, &allheight, 3, &uc_emlrtRTEI, true);
  emxInitStruct_strel(&b_st, &b_obj, &mc_emlrtRTEI);
  for (sInd = 0; sInd < i; sInd++) {
    c_st.site = &uf_emlrtRSI;
    i1 = obj.StrelArray->size[0] * obj.StrelArray->size[1];
    obj.StrelArray->size[0] = 1;
    loop_ub = seq_StrelArray->size[1];
    obj.StrelArray->size[1] = seq_StrelArray->size[1];
    d_emxEnsureCapacity_images_inte(&c_st, obj.StrelArray, i1, &lc_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      c_emxCopyStruct_images_internal(&c_st, &obj.StrelArray->data[i1],
                                      &seq_StrelArray_data[i1], &gc_emlrtRTEI);
    }
    i1 = obj.DecomposedStrelArray->size[0] * obj.DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[0] = 1;
    loop_ub = seq_DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[1] = seq_DecomposedStrelArray->size[1];
    emxEnsureCapacity_cell_wrap_11(&c_st, obj.DecomposedStrelArray, i1,
                                   &lc_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      emxCopyStruct_cell_wrap_1(&c_st, &obj.DecomposedStrelArray->data[i1],
                                &seq_DecomposedStrelArray_data[i1],
                                &gc_emlrtRTEI);
    }
    d_st.site = &uf_emlrtRSI;
    strel_parenReference(&d_st, &obj, (real_T)sInd + 1.0);
    if (obj.StrelArray->size[1] != 1) {
      emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
                                    "images:getnhood:wrongType",
                                    "images:getnhood:wrongType", 0);
    }
    c_st.site = &tf_emlrtRSI;
    i1 = b_obj.StrelArray->size[0] * b_obj.StrelArray->size[1];
    b_obj.StrelArray->size[0] = 1;
    loop_ub = seq_StrelArray->size[1];
    b_obj.StrelArray->size[1] = seq_StrelArray->size[1];
    d_emxEnsureCapacity_images_inte(&c_st, b_obj.StrelArray, i1, &mc_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      c_emxCopyStruct_images_internal(&c_st, &b_obj.StrelArray->data[i1],
                                      &seq_StrelArray_data[i1], &gc_emlrtRTEI);
    }
    i1 = b_obj.DecomposedStrelArray->size[0] *
         b_obj.DecomposedStrelArray->size[1];
    b_obj.DecomposedStrelArray->size[0] = 1;
    loop_ub = seq_DecomposedStrelArray->size[1];
    b_obj.DecomposedStrelArray->size[1] = seq_DecomposedStrelArray->size[1];
    emxEnsureCapacity_cell_wrap_11(&c_st, b_obj.DecomposedStrelArray, i1,
                                   &mc_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      emxCopyStruct_cell_wrap_1(&c_st, &b_obj.DecomposedStrelArray->data[i1],
                                &seq_DecomposedStrelArray_data[i1],
                                &gc_emlrtRTEI);
    }
    d_st.site = &tf_emlrtRSI;
    strel_parenReference(&d_st, &b_obj, (real_T)sInd + 1.0);
    if (b_obj.StrelArray->size[1] != 1) {
      emlrtErrorWithMessageIdR2018a(&c_st, &l_emlrtRTEI,
                                    "images:getheight:wrongType",
                                    "images:getheight:wrongType", 0);
    }
    if (sInd + 1 > isEachStrelInSE2D->size[1]) {
      emlrtDynamicBoundsCheckR2012b(sInd + 1, 1, isEachStrelInSE2D->size[1],
                                    &x_emlrtBCI, &b_st);
    }
    i1 = nhood->size[0] * nhood->size[1] * nhood->size[2];
    nhood->size[0] = obj.StrelArray->data[0].nhood->size[0];
    nhood->size[1] = obj.StrelArray->data[0].nhood->size[1];
    nhood->size[2] = 1;
    emxEnsureCapacity_boolean_T(&b_st, nhood, i1, &nc_emlrtRTEI);
    nhood_data = nhood->data;
    b = obj.StrelArray->data[0].nhood->size[0] *
        obj.StrelArray->data[0].nhood->size[1];
    for (i1 = 0; i1 < b; i1++) {
      nhood_data[i1] = obj.StrelArray->data[0].nhood->data[i1];
    }
    i1 = allheight->size[0] * allheight->size[1] * allheight->size[2];
    allheight->size[0] = b_obj.StrelArray->data[0].height->size[0];
    allheight->size[1] = b_obj.StrelArray->data[0].height->size[1];
    allheight->size[2] = 1;
    emxEnsureCapacity_real_T(&b_st, allheight, i1, &oc_emlrtRTEI);
    allheight_data = allheight->data;
    loop_ub = b_obj.StrelArray->data[0].height->size[0] *
              b_obj.StrelArray->data[0].height->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      allheight_data[i1] = b_obj.StrelArray->data[0].height->data[i1];
    }
    c_st.site = &mf_emlrtRSI;
    flip(allheight);
    c_st.site = &mf_emlrtRSI;
    b_flip(allheight);
    allheight_tmp = allheight->size[0] * allheight->size[1];
    b_allheight = *allheight;
    c_allheight = allheight_tmp;
    b_allheight.size = &c_allheight;
    b_allheight.numDimensions = 1;
    c_st.site = &lf_emlrtRSI;
    if (any(&c_st, &b_allheight)) {
      i1 = nhood->size[0] * nhood->size[1] * nhood->size[2];
      nhood->size[0] = obj.StrelArray->data[0].nhood->size[0];
      nhood->size[1] = obj.StrelArray->data[0].nhood->size[1];
      nhood->size[2] = 1;
      emxEnsureCapacity_boolean_T(&b_st, nhood, i1, &qc_emlrtRTEI);
      nhood_data = nhood->data;
      for (i1 = 0; i1 < b; i1++) {
        nhood_data[i1] = obj.StrelArray->data[0].nhood->data[i1];
      }
      c_st.site = &kf_emlrtRSI;
      c_flip(nhood);
      c_st.site = &kf_emlrtRSI;
      d_flip(nhood);
      nhood_data = nhood->data;
    }
    loop_ub = nhood->size[0] * nhood->size[1] - 1;
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      if (nhood_data[b_i] && (b_i > allheight_tmp - 1)) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, allheight_tmp - 1, &ob_emlrtBCI,
                                      &b_st);
      }
    }
    c_st.site = &jf_emlrtRSI;
    if (strel_is_all_flat) {
      real_T nsizeT_data[3];
      d_st.site = &jj_emlrtRSI;
      padSize_data[0] = Apadpack->size[0];
      nsizeT_data[0] = nhood->size[0];
      padSize_data[1] = Apadpack->size[1];
      nsizeT_data[1] = nhood->size[1];
      dilate_packed_uint32(&Apadpack_data[0], &padSize_data[0], 2.0,
                           &nhood_data[0], &nsizeT_data[0], 2.0, &Bpack_data[0],
                           true);
    } else if (libNameEnum == 5) {
      if (fcnNameEnum == 10) {
        real_T nsizeT_data[3];
        d_st.site = &kj_emlrtRSI;
        padSize_data[0] = Apad->size[0];
        nsizeT_data[0] = nhood->size[0];
        padSize_data[1] = Apad->size[1];
        nsizeT_data[1] = nhood->size[1];
        dilate_binary_ones33_tbb(&Apadpre_data[0], &padSize_data[0], 2.0,
                                 &nhood_data[0], &nsizeT_data[0], 2.0,
                                 &B_data[0]);
      } else if (fcnNameEnum == 11) {
        real_T nsizeT_data[3];
        d_st.site = &lj_emlrtRSI;
        padSize_data[0] = Apad->size[0];
        nsizeT_data[0] = nhood->size[0];
        padSize_data[1] = Apad->size[1];
        nsizeT_data[1] = nhood->size[1];
        dilate_binary_twod_tbb(&Apadpre_data[0], &padSize_data[0], 2.0,
                               &nhood_data[0], &nsizeT_data[0], 2.0,
                               &B_data[0]);
      } else if (fcnNameEnum == 12) {
        real_T nsizeT_data[3];
        d_st.site = &mj_emlrtRSI;
        padSize_data[0] = Apad->size[0];
        nsizeT_data[0] = nhood->size[0];
        padSize_data[1] = Apad->size[1];
        nsizeT_data[1] = nhood->size[1];
        dilate_binary_tbb(&Apadpre_data[0], &padSize_data[0], 2.0,
                          &nhood_data[0], &nsizeT_data[0], 2.0, &B_data[0]);
      } else {
        rtString c_obj;
        for (i1 = 0; i1 < 21; i1++) {
          c_obj.Value[i1] = cv[i1];
        }
        d_st.site = &bk_emlrtRSI;
        b_error(&d_st, emlrt_marshallOut(&d_st, c_obj), &d_emlrtMCI);
      }
    } else if (fcnNameEnum == 10) {
      real_T nsizeT_data[3];
      d_st.site = &nj_emlrtRSI;
      padSize_data[0] = Apad->size[0];
      nsizeT_data[0] = nhood->size[0];
      padSize_data[1] = Apad->size[1];
      nsizeT_data[1] = nhood->size[1];
      dilate_binary_ones33_tbb(&Apadpre_data[0], &padSize_data[0], 2.0,
                               &nhood_data[0], &nsizeT_data[0], 2.0,
                               &B_data[0]);
    } else if (fcnNameEnum == 11) {
      real_T nsizeT_data[3];
      d_st.site = &oj_emlrtRSI;
      padSize_data[0] = Apad->size[0];
      nsizeT_data[0] = nhood->size[0];
      padSize_data[1] = Apad->size[1];
      nsizeT_data[1] = nhood->size[1];
      dilate_binary_twod_tbb(&Apadpre_data[0], &padSize_data[0], 2.0,
                             &nhood_data[0], &nsizeT_data[0], 2.0, &B_data[0]);
    } else if (fcnNameEnum == 12) {
      real_T nsizeT_data[3];
      d_st.site = &pj_emlrtRSI;
      padSize_data[0] = Apad->size[0];
      nsizeT_data[0] = nhood->size[0];
      padSize_data[1] = Apad->size[1];
      nsizeT_data[1] = nhood->size[1];
      dilate_binary_tbb(&Apadpre_data[0], &padSize_data[0], 2.0, &nhood_data[0],
                        &nsizeT_data[0], 2.0, &B_data[0]);
    } else {
      rtString c_obj;
      for (i1 = 0; i1 < 21; i1++) {
        c_obj.Value[i1] = cv[i1];
      }
      d_st.site = &ck_emlrtRSI;
      b_error(&d_st, emlrt_marshallOut(&d_st, c_obj), &c_emlrtMCI);
    }
    if (strel_is_all_flat) {
      i1 = Apadpack->size[0] * Apadpack->size[1];
      Apadpack->size[0] = Bpack->size[0];
      Apadpack->size[1] = Bpack->size[1];
      emxEnsureCapacity_uint32_T(&b_st, Apadpack, i1, &gf_emlrtRTEI);
      Apadpack_data = Apadpack->data;
      loop_ub = Bpack->size[0] * Bpack->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Apadpack_data[i1] = Bpack_data[i1];
      }
    } else {
      i1 = Apad->size[0] * Apad->size[1];
      Apad->size[0] = B->size[0];
      Apad->size[1] = B->size[1];
      emxEnsureCapacity_boolean_T(&b_st, Apad, i1, &tc_emlrtRTEI);
      Apadpre_data = Apad->data;
      loop_ub = B->size[0] * B->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Apadpre_data[i1] = B_data[i1];
      }
    }
  }
  emxFreeStruct_strel(&b_st, &b_obj);
  emxFreeStruct_strel(&b_st, &obj);
  emxFree_boolean_T(&b_st, &isEachStrelInSE2D);
  emxFree_cell_wrap_1(&b_st, &seq_DecomposedStrelArray);
  c_emxFree_images_internal_coder(&b_st, &seq_StrelArray);
  emxFree_real_T(&b_st, &allheight);
  emxFree_boolean_T(&b_st, &nhood);
  emxFree_uint32_T(&b_st, &Apadpack);
  emxFree_boolean_T(&b_st, &Apad);
  if (strel_is_all_flat) {
    c_st.site = &gj_emlrtRSI;
    c_bwunpack(&c_st, Bpack, numRows, B);
  }
  emxFree_uint32_T(&b_st, &Bpack);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void imdilate(cell_boundaryStackData *SD, const uint32_T A[63720],
              uint32_T B[63720])
{
  real_T asizeT_tmp[2];
  real_T nsizeT[2];
  int32_T i;
  int32_T j;
  boolean_T nhood[7];
  memcpy(&SD->u1.f8.A[0], &A[0], 63720U * sizeof(uint32_T));
  setPackedFillBits(SD->u1.f8.A);
  memset(&SD->u1.f8.Apadpre[0], 0, 322U * sizeof(uint32_T));
  for (j = 0; j < 1416; j++) {
    i = 46 * (j + 7);
    SD->u1.f8.Apadpre[i] = 0U;
    memcpy(&SD->u1.f8.Apadpre[i + 1], &SD->u1.f8.A[j * 45],
           45U * sizeof(uint32_T));
  }
  memset(&SD->u1.f8.Apad[66881], 0, 329U * sizeof(uint32_T));
  for (j = 0; j < 1423; j++) {
    SD->u1.f8.Apad[47 * j + 46] = 0U;
    memcpy(&SD->u1.f8.Apad[j * 47], &SD->u1.f8.Apadpre[j * 46],
           46U * sizeof(uint32_T));
  }
  for (i = 0; i < 7; i++) {
    nhood[i] = true;
  }
  asizeT_tmp[0] = 47.0;
  nsizeT[0] = 7.0;
  asizeT_tmp[1] = 1430.0;
  nsizeT[1] = 1.0;
  dilate_packed_uint32(&SD->u1.f8.Apad[0], &asizeT_tmp[0], 2.0, &nhood[0],
                       &nsizeT[0], 2.0, &SD->u1.f8.Apadpack[0], true);
  nsizeT[0] = 5.0;
  nsizeT[1] = 5.0;
  dilate_packed_uint32(&SD->u1.f8.Apadpack[0], &asizeT_tmp[0], 2.0, &bv[0],
                       &nsizeT[0], 2.0, &SD->u1.f8.Apad[0], true);
  memcpy(&SD->u1.f8.Apadpack[0], &SD->u1.f8.Apad[0], 67210U * sizeof(uint32_T));
  for (i = 0; i < 7; i++) {
    nhood[i] = true;
  }
  nsizeT[0] = 1.0;
  nsizeT[1] = 7.0;
  dilate_packed_uint32(&SD->u1.f8.Apadpack[0], &asizeT_tmp[0], 2.0, &nhood[0],
                       &nsizeT[0], 2.0, &SD->u1.f8.Apad[0], true);
  memcpy(&SD->u1.f8.Apadpack[0], &SD->u1.f8.Apad[0], 67210U * sizeof(uint32_T));
  nsizeT[0] = 5.0;
  nsizeT[1] = 5.0;
  dilate_packed_uint32(&SD->u1.f8.Apadpack[0], &asizeT_tmp[0], 2.0, &bv1[0],
                       &nsizeT[0], 2.0, &SD->u1.f8.Apad[0], true);
  for (i = 0; i < 1416; i++) {
    memcpy(&B[i * 45], &SD->u1.f8.Apad[i * 47 + 330], 45U * sizeof(uint32_T));
  }
}

/* End of code generation (imdilate.c) */
