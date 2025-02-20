/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_cell_boundary_api.h
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:17:16
 */

#ifndef _CODER_CELL_BOUNDARY_API_H
#define _CODER_CELL_BOUNDARY_API_H

/* Include Files */
#include "emlrt.h"
#include "mex.h"
#include "tmwtypes.h"
#include <string.h>

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void cell_boundary(real_T img_in[1960000], real_T edge_width,
                   real_T edge[1960000]);

void cell_boundary_api(const mxArray *const prhs[2], const mxArray **plhs);

void cell_boundary_atexit(void);

void cell_boundary_initialize(void);

void cell_boundary_terminate(void);

void cell_boundary_xil_shutdown(void);

void cell_boundary_xil_terminate(void);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for _coder_cell_boundary_api.h
 *
 * [EOF]
 */
