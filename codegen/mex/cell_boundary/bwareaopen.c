/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * bwareaopen.c
 *
 * Code generation for function 'bwareaopen'
 *
 */

/* Include files */
#include "bwareaopen.h"
#include "bwlabel.h"
#include "cell_boundary_emxutil.h"
#include "cell_boundary_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "omp.h"

/* Variable Definitions */
static emlrtRSInfo ic_emlrtRSI = {
    45,           /* lineNo */
    "bwareaopen", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwareaopen.m" /* pathName
                                                                        */
};

static emlrtRSInfo jc_emlrtRSI = {
    49,           /* lineNo */
    "bwareaopen", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwareaopen.m" /* pathName
                                                                        */
};

static emlrtRSInfo kc_emlrtRSI =
    {
        63,        /* lineNo */
        "bwlabel", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m" /* pathName
                                                                         */
};

static emlrtBCInfo bd_emlrtBCI = {
    -1,                               /* iFirst */
    -1,                               /* iLast */
    45,                               /* lineNo */
    62,                               /* colNo */
    "",                               /* aName */
    "computeConnectedComponentAreas", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\computeConnectedComponentAreas.m", /* pName */
    0                                          /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI = {
    49,           /* lineNo */
    1,            /* colNo */
    "bwareaopen", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwareaopen.m", /* pName
                                                                         */
    1 /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    57,           /* lineNo */
    42,           /* colNo */
    "",           /* aName */
    "bwareaopen", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwareaopen.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtRTEInfo sf_emlrtRTEI = {
    49,           /* lineNo */
    1,            /* colNo */
    "bwareaopen", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwareaopen.m" /* pName
                                                                        */
};

/* Function Definitions */
void b_bwareaopen(cell_boundaryStackData *SD, const emlrtStack *sp,
                  boolean_T varargin_1[1960000])
{
  jmp_buf emlrtJBEnviron;
  jmp_buf *volatile emlrtJBStack;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_int32_T *regionLengths;
  real_T numComponents;
  int32_T b_bwareaopen_numThreads;
  int32_T c;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T loop_ub_tmp;
  int32_T r;
  int32_T *regionLengths_data;
  boolean_T emlrtHadParallelError = false;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &ic_emlrtRSI;
  b_st.site = &kc_emlrtRSI;
  numComponents = labelingWu_parallel(SD, &b_st, varargin_1, SD->u2.f10.L);
  st.site = &jc_emlrtRSI;
  emxInit_int32_T(&st, &regionLengths, 1, &sf_emlrtRTEI);
  i = (int32_T)muDoubleScalarFloor(numComponents);
  if (numComponents != i) {
    emlrtIntegerCheckR2012b(numComponents, &hb_emlrtDCI, &st);
  }
  loop_ub_tmp = (int32_T)numComponents;
  i1 = regionLengths->size[0];
  regionLengths->size[0] = loop_ub_tmp;
  emxEnsureCapacity_int32_T(&st, regionLengths, i1, &sf_emlrtRTEI);
  regionLengths_data = regionLengths->data;
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(numComponents, &hb_emlrtDCI, &st);
  }
  for (i = 0; i < loop_ub_tmp; i++) {
    regionLengths_data[i] = 0;
  }
  for (loop_ub_tmp = 0; loop_ub_tmp < 1960000; loop_ub_tmp++) {
    i = (int32_T)SD->u2.f10.L[loop_ub_tmp];
    if (i > 0) {
      if (i > regionLengths->size[0]) {
        emlrtDynamicBoundsCheckR2012b(i, 1, regionLengths->size[0],
                                      &bd_emlrtBCI, &st);
      }
      regionLengths_data[i - 1]++;
    }
  }
  emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
  emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  b_bwareaopen_numThreads = emlrtAllocRegionTLSs(
      sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(b_bwareaopen_numThreads) private(             \
    c_st, emlrtJBEnviron, r, i2, i3) firstprivate(emlrtHadParallelError)
  {
    if (setjmp(emlrtJBEnviron) == 0) {
      c_st.prev = sp;
      c_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
      c_st.site = NULL;
      emlrtSetJmpBuf(&c_st, &emlrtJBEnviron);
    } else {
      emlrtHadParallelError = true;
    }
#pragma omp for nowait
    for (c = 0; c < 1400; c++) {
      if (emlrtHadParallelError) {
        continue;
      }
      if (setjmp(emlrtJBEnviron) == 0) {
        for (r = 0; r < 1400; r++) {
          i2 = r + 1400 * c;
          if (varargin_1[i2]) {
            i3 = (int32_T)SD->u2.f10.L[i2];
            if ((i3 < 1) || (i3 > regionLengths->size[0])) {
              emlrtDynamicBoundsCheckR2012b(i3, 1, regionLengths->size[0],
                                            &cd_emlrtBCI, &c_st);
            }
            if (regionLengths_data[i3 - 1] < 25000) {
              varargin_1[i2] = false;
            }
          }
        }
      } else {
        emlrtHadParallelError = true;
      }
    }
  }
  emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
  emxFree_int32_T(sp, &regionLengths);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void bwareaopen(cell_boundaryStackData *SD, const emlrtStack *sp,
                boolean_T varargin_1[1960000])
{
  jmp_buf emlrtJBEnviron;
  jmp_buf *volatile emlrtJBStack;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_int32_T *regionLengths;
  real_T numComponents;
  int32_T bwareaopen_numThreads;
  int32_T c;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T loop_ub_tmp;
  int32_T r;
  int32_T *regionLengths_data;
  boolean_T emlrtHadParallelError = false;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &ic_emlrtRSI;
  b_st.site = &kc_emlrtRSI;
  numComponents = labelingWu_parallel(SD, &b_st, varargin_1, SD->u2.f11.L);
  st.site = &jc_emlrtRSI;
  emxInit_int32_T(&st, &regionLengths, 1, &sf_emlrtRTEI);
  i = (int32_T)muDoubleScalarFloor(numComponents);
  if (numComponents != i) {
    emlrtIntegerCheckR2012b(numComponents, &hb_emlrtDCI, &st);
  }
  loop_ub_tmp = (int32_T)numComponents;
  i1 = regionLengths->size[0];
  regionLengths->size[0] = loop_ub_tmp;
  emxEnsureCapacity_int32_T(&st, regionLengths, i1, &sf_emlrtRTEI);
  regionLengths_data = regionLengths->data;
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(numComponents, &hb_emlrtDCI, &st);
  }
  for (i = 0; i < loop_ub_tmp; i++) {
    regionLengths_data[i] = 0;
  }
  for (loop_ub_tmp = 0; loop_ub_tmp < 1960000; loop_ub_tmp++) {
    i = (int32_T)SD->u2.f11.L[loop_ub_tmp];
    if (i > 0) {
      if (i > regionLengths->size[0]) {
        emlrtDynamicBoundsCheckR2012b(i, 1, regionLengths->size[0],
                                      &bd_emlrtBCI, &st);
      }
      regionLengths_data[i - 1]++;
    }
  }
  emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
  emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  bwareaopen_numThreads = emlrtAllocRegionTLSs(
      sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(bwareaopen_numThreads) private(               \
    c_st, emlrtJBEnviron, r, i2, i3) firstprivate(emlrtHadParallelError)
  {
    if (setjmp(emlrtJBEnviron) == 0) {
      c_st.prev = sp;
      c_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
      c_st.site = NULL;
      emlrtSetJmpBuf(&c_st, &emlrtJBEnviron);
    } else {
      emlrtHadParallelError = true;
    }
#pragma omp for nowait
    for (c = 0; c < 1400; c++) {
      if (emlrtHadParallelError) {
        continue;
      }
      if (setjmp(emlrtJBEnviron) == 0) {
        for (r = 0; r < 1400; r++) {
          i2 = r + 1400 * c;
          if (varargin_1[i2]) {
            i3 = (int32_T)SD->u2.f11.L[i2];
            if ((i3 < 1) || (i3 > regionLengths->size[0])) {
              emlrtDynamicBoundsCheckR2012b(i3, 1, regionLengths->size[0],
                                            &cd_emlrtBCI, &c_st);
            }
            if (regionLengths_data[i3 - 1] < 50000) {
              varargin_1[i2] = false;
            }
          }
        }
      } else {
        emlrtHadParallelError = true;
      }
    }
  }
  emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
  emxFree_int32_T(sp, &regionLengths);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (bwareaopen.c) */
