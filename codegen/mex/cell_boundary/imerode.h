/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imerode.h
 *
 * Code generation for function 'imerode'
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
void b_imerode(cell_boundaryStackData *SD, const uint32_T A[61600],
               uint32_T B[61600]);

void c_imerode(cell_boundaryStackData *SD, const boolean_T A[1960000],
               boolean_T B[1960000]);

void d_imerode(cell_boundaryStackData *SD, const uint32_T A[61600],
               uint32_T B[61600]);

void imerode(cell_boundaryStackData *SD, const uint32_T A[63720],
             uint32_T B[63720]);

/* End of code generation (imerode.h) */
