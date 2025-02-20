/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: imerode.h
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:11:08
 */

#ifndef IMERODE_H
#define IMERODE_H

/* Include Files */
#include "cell_boundary_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_imerode(const unsigned int A[61600], unsigned int B[61600]);

void c_imerode(const boolean_T A[1960000], boolean_T B[1960000]);

void d_imerode(const unsigned int A[61600], unsigned int B[61600]);

void e_imerode(const boolean_T A[1960000],
               const c_emxArray_images_internal_code *se_StrelArray,
               const emxArray_cell_wrap_1 *se_DecomposedStrelArray,
               emxArray_boolean_T *B);

void f_imerode(const double A[1960000], double B[1960000]);

void imerode(const unsigned int A[63720], unsigned int B[63720]);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for imerode.h
 *
 * [EOF]
 */
