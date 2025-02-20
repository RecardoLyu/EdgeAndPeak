/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * bwlabel.h
 *
 * Code generation for function 'bwlabel'
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
real_T labelingWu_parallel(cell_boundaryStackData *SD, const emlrtStack *sp,
                           const boolean_T im[1960000], real_T L[1960000]);

/* End of code generation (bwlabel.h) */
