/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * flip.h
 *
 * Code generation for function 'flip'
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
void b_flip(emxArray_real_T *x);

void c_flip(emxArray_boolean_T *x);

void d_flip(emxArray_boolean_T *x);

void flip(emxArray_real_T *x);

/* End of code generation (flip.h) */
