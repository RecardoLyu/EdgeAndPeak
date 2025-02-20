/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imdilate.h
 *
 * Code generation for function 'imdilate'
 *
 */

#pragma once

/* Include files */
#include "cell_boundary_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void b_imdilate(cell_boundaryStackData *SD, const uint32_T A[61600],
                uint32_T B[61600]);

void c_imdilate(cell_boundaryStackData *SD, const uint32_T A[61600],
                uint32_T B[61600]);

void d_imdilate(const emlrtStack *sp,
                const c_emxArray_images_internal_code *se_StrelArray,
                const emxArray_cell_wrap_1 *se_DecomposedStrelArray,
                emxArray_real32_T *B);

void e_imdilate(const emlrtStack *sp, const emxArray_boolean_T *A,
                const c_emxArray_images_internal_code *se_StrelArray,
                const emxArray_cell_wrap_1 *se_DecomposedStrelArray,
                emxArray_boolean_T *B);

void imdilate(cell_boundaryStackData *SD, const uint32_T A[63720],
              uint32_T B[63720]);

/* End of code generation (imdilate.h) */
