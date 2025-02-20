/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_cell_brightzone_api.h
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 15:48:23
 */

#ifndef _CODER_CELL_BRIGHTZONE_API_H
#define _CODER_CELL_BRIGHTZONE_API_H

/* Include Files */
#include "emlrt.h"
#include "mex.h"
#include "tmwtypes.h"
#include <string.h>

/* Type Definitions */
#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T
struct emxArray_boolean_T {
  boolean_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_boolean_T */
#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T
typedef struct emxArray_boolean_T emxArray_boolean_T;
#endif /* typedef_emxArray_boolean_T */

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void cell_brightzone(real_T img_in[1960000], real_T strel_size,
                     emxArray_boolean_T *peak_mask);

void cell_brightzone_api(const mxArray *const prhs[2], const mxArray **plhs);

void cell_brightzone_atexit(void);

void cell_brightzone_initialize(void);

void cell_brightzone_terminate(void);

void cell_brightzone_xil_shutdown(void);

void cell_brightzone_xil_terminate(void);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for _coder_cell_brightzone_api.h
 *
 * [EOF]
 */
