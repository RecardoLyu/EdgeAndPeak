/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * padarray.h
 *
 * Code generation for function 'padarray'
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
void b_padarray(const emlrtStack *sp, const emxArray_boolean_T *varargin_1,
                const real_T varargin_2_data[], emxArray_boolean_T *b);

void c_padarray(const emlrtStack *sp, const emxArray_boolean_T *varargin_1,
                const real_T varargin_2_data[], emxArray_boolean_T *b);

void padarray(const emlrtStack *sp, const emxArray_real32_T *varargin_1,
              const real_T varargin_2_data[], emxArray_real32_T *b);

/* End of code generation (padarray.h) */
