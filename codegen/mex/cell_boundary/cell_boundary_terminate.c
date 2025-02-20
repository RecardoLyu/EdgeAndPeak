/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cell_boundary_terminate.c
 *
 * Code generation for function 'cell_boundary_terminate'
 *
 */

/* Include files */
#include "cell_boundary_terminate.h"
#include "_coder_cell_boundary_mex.h"
#include "cell_boundary_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void cell_boundary_atexit(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void cell_boundary_terminate(void)
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (cell_boundary_terminate.c) */
