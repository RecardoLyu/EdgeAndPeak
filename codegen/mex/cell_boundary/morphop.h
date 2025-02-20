/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * morphop.h
 *
 * Code generation for function 'morphop'
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
void morphop(const emlrtStack *sp, const boolean_T varargin_1[1960000],
             const c_emxArray_images_internal_code *varargin_2_StrelArray,
             const emxArray_cell_wrap_1 *varargin_2_DecomposedStrelArray,
             emxArray_boolean_T *B);

/* End of code generation (morphop.h) */
