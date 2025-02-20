/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cell_boundary_mexutil.h
 *
 * Code generation for function 'cell_boundary_mexutil'
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
void b_error(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location);

const mxArray *emlrt_marshallOut(const emlrtStack *sp, const rtString u);

/* End of code generation (cell_boundary_mexutil.h) */
