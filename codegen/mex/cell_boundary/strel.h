/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * strel.h
 *
 * Code generation for function 'strel'
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
void strel_decompose(const emlrtStack *sp,
                     const c_emxArray_images_internal_code *obj_StrelArray,
                     const emxArray_cell_wrap_1 *obj_DecomposedStrelArray,
                     c_emxArray_images_internal_code *seq_StrelArray,
                     emxArray_cell_wrap_1 *seq_DecomposedStrelArray,
                     emxArray_boolean_T *isEachStrelObj2D);

void strel_getpadsize(const emlrtStack *sp,
                      const c_emxArray_images_internal_code *obj_StrelArray,
                      const emxArray_cell_wrap_1 *obj_DecomposedStrelArray,
                      real_T pad_ul_data[], int32_T pad_ul_size[2],
                      real_T pad_lr_data[], int32_T pad_lr_size[2]);

boolean_T strel_isdecompositionorthogonal(
    const emlrtStack *sp, const c_emxArray_images_internal_code *obj_StrelArray,
    const emxArray_cell_wrap_1 *obj_DecomposedStrelArray);

void strel_makeDiskStrel(const emlrtStack *sp, strel *se, real_T r, real_T n);

void strel_parenReference(const emlrtStack *sp, strel *obj, real_T idx);

/* End of code generation (strel.h) */
