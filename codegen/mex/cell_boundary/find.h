/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * find.h
 *
 * Code generation for function 'find'
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
void b_eml_find(const emlrtStack *sp, const emxArray_boolean_T *x,
                emxArray_int32_T *i, emxArray_int32_T *j);

void eml_find(const emlrtStack *sp, const emxArray_boolean_T *x,
              emxArray_int32_T *i, emxArray_int32_T *j);

/* End of code generation (find.h) */
