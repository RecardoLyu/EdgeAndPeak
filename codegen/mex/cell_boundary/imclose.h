/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imclose.h
 *
 * Code generation for function 'imclose'
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
void imclose(cell_boundaryStackData *SD, const boolean_T A[1960000],
             boolean_T B[1960000]);

/* End of code generation (imclose.h) */
