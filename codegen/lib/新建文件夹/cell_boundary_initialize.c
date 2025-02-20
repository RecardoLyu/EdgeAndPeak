/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: cell_boundary_initialize.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:17:16
 */

/* Include Files */
#include "cell_boundary_initialize.h"
#include "cell_boundary_data.h"
#include "rt_nonfinite.h"
#include "omp.h"

/* Function Definitions */
/*
 * Arguments    : void
 * Return Type  : void
 */
void cell_boundary_initialize(void)
{
  omp_init_nest_lock(&cell_boundary_nestLockGlobal);
  isInitialized_cell_boundary = true;
}

/*
 * File trailer for cell_boundary_initialize.c
 *
 * [EOF]
 */
