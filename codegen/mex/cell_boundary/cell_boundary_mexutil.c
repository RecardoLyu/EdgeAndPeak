/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cell_boundary_mexutil.c
 *
 * Code generation for function 'cell_boundary_mexutil'
 *
 */

/* Include files */
#include "cell_boundary_mexutil.h"
#include "cell_boundary_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void b_error(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, NULL, 1, &pArray, "error", true,
                        location);
}

const mxArray *emlrt_marshallOut(const emlrtStack *sp, const rtString u)
{
  static const int32_T iv[2] = {1, 21};
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *propValues;
  const mxArray *y;
  const char_T *propClasses = "coder.internal.string";
  const char_T *propNames = "Value";
  y = NULL;
  m = NULL;
  emlrtAssign(
      &y, emlrtCreateClassInstance2022a((emlrtCTX)sp, "coder.internal.string"));
  m = NULL;
  b_y = NULL;
  propValues = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 21, propValues, &u.Value[0]);
  emlrtAssign(&b_y, propValues);
  emlrtAssign(&m, b_y);
  propValues = m;
  emlrtSetAllProperties((emlrtCTX)sp, &y, 0, 1, (const char_T **)&propNames,
                        (const char_T **)&propClasses, &propValues);
  emlrtAssign(&y, emlrtConvertInstanceToRedirectSource(
                      (emlrtCTX)sp, y, 0, "coder.internal.string"));
  return y;
}

/* End of code generation (cell_boundary_mexutil.c) */
