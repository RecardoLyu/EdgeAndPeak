/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cell_boundary_initialize.c
 *
 * Code generation for function 'cell_boundary_initialize'
 *
 */

/* Include files */
#include "cell_boundary_initialize.h"
#include "_coder_cell_boundary_mex.h"
#include "cell_boundary_data.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void cell_boundary_once(void);

/* Function Definitions */
static void cell_boundary_once(void)
{
  mex_InitInfAndNan();
}

void cell_boundary_initialize(void)
{
  static const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2022b(&st);
  emlrtClearAllocCountR2012b(&st, false, 0U, NULL);
  emlrtEnterRtStackR2012b(&st);
  emlrtLicenseCheckR2022a(&st, "EMLRT:runTime:MexFunctionNeedsLicense",
                          "image_toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    cell_boundary_once();
  }
}

/* End of code generation (cell_boundary_initialize.c) */
