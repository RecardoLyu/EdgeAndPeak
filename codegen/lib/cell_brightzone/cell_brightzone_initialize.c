/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: cell_brightzone_initialize.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 15:48:23
 */

/* Include Files */
#include "cell_brightzone_initialize.h"
#include "cell_brightzone_data.h"
#include "rt_nonfinite.h"
#include "omp.h"

/* Function Definitions */
/*
 * Arguments    : void
 * Return Type  : void
 */
void cell_brightzone_initialize(void)
{
  omp_init_nest_lock(&cell_brightzone_nestLockGlobal);
  isInitialized_cell_brightzone = true;
}

/*
 * File trailer for cell_brightzone_initialize.c
 *
 * [EOF]
 */
