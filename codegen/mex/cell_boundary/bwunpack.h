/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * bwunpack.h
 *
 * Code generation for function 'bwunpack'
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
void b_bwunpack(const uint32_T varargin_1[63630], boolean_T BW[1999396]);

void bwunpack(const uint32_T varargin_1[63720], boolean_T BW[2005056]);

void c_bwunpack(const emlrtStack *sp, const emxArray_uint32_T *varargin_1,
                real_T varargin_2, emxArray_boolean_T *BW);

/* End of code generation (bwunpack.h) */
