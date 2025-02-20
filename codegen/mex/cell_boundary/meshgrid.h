/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * meshgrid.h
 *
 * Code generation for function 'meshgrid'
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
void meshgrid(const emlrtStack *sp, const emxArray_real_T *x,
              emxArray_real_T *xx, emxArray_real_T *yy);

/* End of code generation (meshgrid.h) */
