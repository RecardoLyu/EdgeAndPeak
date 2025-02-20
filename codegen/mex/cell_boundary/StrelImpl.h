/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * StrelImpl.h
 *
 * Code generation for function 'StrelImpl'
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
boolean_T StrelImpl_StrelImpl(const emlrtStack *sp,
                              emxArray_boolean_T *se_nhood,
                              emxArray_real_T *se_height);

boolean_T b_StrelImpl_StrelImpl(const emlrtStack *sp,
                                const emxArray_boolean_T *varargin_2,
                                const emxArray_real_T *varargin_3,
                                emxArray_boolean_T *se_nhood,
                                emxArray_real_T *se_height);

/* End of code generation (StrelImpl.h) */
