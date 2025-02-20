/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: cell_brightzone_data.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 15:48:23
 */

/* Include Files */
#include "cell_brightzone_data.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
omp_nest_lock_t cell_brightzone_nestLockGlobal;

const boolean_T bv[121] = {
    true,  false, false, false, false, false, false, false, false, false, false,
    false, true,  false, false, false, false, false, false, false, false, false,
    false, false, true,  false, false, false, false, false, false, false, false,
    false, false, false, true,  false, false, false, false, false, false, false,
    false, false, false, false, true,  false, false, false, false, false, false,
    false, false, false, false, false, true,  false, false, false, false, false,
    false, false, false, false, false, false, true,  false, false, false, false,
    false, false, false, false, false, false, false, true,  false, false, false,
    false, false, false, false, false, false, false, false, true,  false, false,
    false, false, false, false, false, false, false, false, false, true,  false,
    false, false, false, false, false, false, false, false, false, false, true};

const boolean_T bv1[121] = {
    false, false, false, false, false, false, false, false, false, false,
    true,  false, false, false, false, false, false, false, false, false,
    true,  false, false, false, false, false, false, false, false, false,
    true,  false, false, false, false, false, false, false, false, false,
    true,  false, false, false, false, false, false, false, false, false,
    true,  false, false, false, false, false, false, false, false, false,
    true,  false, false, false, false, false, false, false, false, false,
    true,  false, false, false, false, false, false, false, false, false,
    true,  false, false, false, false, false, false, false, false, false,
    true,  false, false, false, false, false, false, false, false, false,
    true,  false, false, false, false, false, false, false, false, false,
    true,  false, false, false, false, false, false, false, false, false,
    false};

boolean_T isInitialized_cell_brightzone = false;

/*
 * File trailer for cell_brightzone_data.c
 *
 * [EOF]
 */
