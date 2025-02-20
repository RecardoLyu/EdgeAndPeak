/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_cell_boundary_mex.c
 *
 * Code generation for function '_coder_cell_boundary_mex'
 *
 */

/* Include files */
#include "_coder_cell_boundary_mex.h"
#include "_coder_cell_boundary_api.h"
#include "cell_boundary.h"
#include "cell_boundary_data.h"
#include "cell_boundary_initialize.h"
#include "cell_boundary_terminate.h"
#include "cell_boundary_types.h"
#include "rt_nonfinite.h"
#include "omp.h"

/* Function Definitions */
void cell_boundary_mexFunction(cell_boundaryStackData *SD, int32_T nlhs,
                               mxArray *plhs[1], int32_T nrhs,
                               const mxArray *prhs[2])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 2, 4,
                        13, "cell_boundary");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 13,
                        "cell_boundary");
  }
  /* Call the function. */
  cell_boundary_api(SD, prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  static jmp_buf emlrtJBEnviron;
  cell_boundaryStackData *cell_boundaryStackDataGlobal = NULL;
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  cell_boundaryStackDataGlobal = (cell_boundaryStackData *)emlrtMxCalloc(
      (size_t)1, (size_t)1U * sizeof(cell_boundaryStackData));
  mexAtExit(&cell_boundary_atexit);
  /* Initialize the memory manager. */
  omp_init_lock(&emlrtLockGlobal);
  omp_init_nest_lock(&cell_boundary_nestLockGlobal);
  /* Module initialization. */
  cell_boundary_initialize();
  st.tls = emlrtRootTLSGlobal;
  emlrtSetJmpBuf(&st, &emlrtJBEnviron);
  if (setjmp(emlrtJBEnviron) == 0) {
    /* Dispatch the entry-point. */
    cell_boundary_mexFunction(cell_boundaryStackDataGlobal, nlhs, plhs, nrhs,
                              prhs);
    /* Module termination. */
    cell_boundary_terminate();
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&cell_boundary_nestLockGlobal);
  } else {
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&cell_boundary_nestLockGlobal);
    emlrtReportParallelRunTimeError(&st);
  }
  emlrtMxFree(cell_boundaryStackDataGlobal);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal,
                           &emlrtLockerFunction, omp_get_num_procs(), NULL,
                           "GBK", true);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_cell_boundary_mex.c) */
