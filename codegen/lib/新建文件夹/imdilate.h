/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: imdilate.h
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:17:16
 */

#ifndef IMDILATE_H
#define IMDILATE_H

/* Include Files */
#include "cell_boundary_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_imdilate(const unsigned int A[61600], unsigned int B[61600]);

void c_imdilate(const unsigned int A[61600], unsigned int B[61600]);

void d_imdilate(const c_emxArray_images_internal_code *se_StrelArray,
                const emxArray_cell_wrap_1 *se_DecomposedStrelArray,
                emxArray_real32_T *B);

void e_imdilate(const emxArray_boolean_T *A,
                const c_emxArray_images_internal_code *se_StrelArray,
                const emxArray_cell_wrap_1 *se_DecomposedStrelArray,
                emxArray_boolean_T *B);

void imdilate(const unsigned int A[63720], unsigned int B[63720]);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for imdilate.h
 *
 * [EOF]
 */
