/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * intline.h
 *
 * Code generation for function 'intline'
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
void intline(const emlrtStack *sp, real_T x1, real_T x2, real_T b_y1, real_T y2,
             emxArray_real_T *x, emxArray_real_T *y);

/* End of code generation (intline.h) */
