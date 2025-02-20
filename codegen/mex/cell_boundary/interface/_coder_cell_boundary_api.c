/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_cell_boundary_api.c
 *
 * Code generation for function '_coder_cell_boundary_api'
 *
 */

/* Include files */
#include "_coder_cell_boundary_api.h"
#include "cell_boundary.h"
#include "cell_boundary_data.h"
#include "cell_boundary_types.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static uint16_T (
    *b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId))[1960000];

static const mxArray *b_emlrt_marshallOut(const real_T u[1960000]);

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                 const char_T *identifier);

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static uint16_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                     const emlrtMsgIdentifier *msgId))[1960000];

static uint16_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier))[1960000];

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

/* Function Definitions */
static uint16_T (
    *b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId))[1960000]
{
  uint16_T(*y)[1960000];
  y = e_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *b_emlrt_marshallOut(const real_T u[1960000])
{
  static const int32_T iv[2] = {0, 0};
  static const int32_T iv1[2] = {1400, 1400};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, &iv1[0], 2);
  emlrtAssign(&y, m);
  return y;
}

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                 const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static uint16_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                     const emlrtMsgIdentifier *msgId))[1960000]
{
  static const int32_T dims[2] = {1400, 1400};
  int32_T iv[2];
  uint16_T(*ret)[1960000];
  boolean_T b_bv[2] = {false, false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "uint16", false, 2U,
                            (const void *)&dims[0], &b_bv[0], &iv[0]);
  ret = (uint16_T(*)[1960000])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static uint16_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                   const char_T *identifier))[1960000]
{
  emlrtMsgIdentifier thisId;
  uint16_T(*y)[1960000];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 0U,
                          (const void *)&dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void cell_boundary_api(cell_boundaryStackData *SD, const mxArray *const prhs[2],
                       const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  real_T(*edge)[1960000];
  real_T edge_width;
  uint16_T(*img_in)[1960000];
  st.tls = emlrtRootTLSGlobal;
  edge = (real_T(*)[1960000])mxMalloc(sizeof(real_T[1960000]));
  /* Marshall function inputs */
  img_in = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "img_in");
  edge_width = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "edge_width");
  /* Invoke the target function */
  cell_boundary(SD, &st, *img_in, edge_width, *edge);
  /* Marshall function outputs */
  *plhs = b_emlrt_marshallOut(*edge);
}

/* End of code generation (_coder_cell_boundary_api.c) */
