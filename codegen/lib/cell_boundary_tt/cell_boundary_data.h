/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: cell_boundary_data.h
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:11:08
 */

#ifndef CELL_BOUNDARY_DATA_H
#define CELL_BOUNDARY_DATA_H

/* Include Files */
#include "rtwtypes.h"
#include "omp.h"
#include <stddef.h>
#include <stdlib.h>

/* Variable Declarations */
extern omp_nest_lock_t cell_boundary_nestLockGlobal;
extern const boolean_T bv[25];
extern const boolean_T bv1[25];
extern const boolean_T bv2[9];
extern const boolean_T bv3[9];
extern const boolean_T bv4[121];
extern const boolean_T bv5[121];
extern boolean_T isInitialized_cell_boundary;

#endif
/*
 * File trailer for cell_boundary_data.h
 *
 * [EOF]
 */
