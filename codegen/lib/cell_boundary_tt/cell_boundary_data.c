/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: cell_boundary_data.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:11:08
 */

/* Include Files */
#include "cell_boundary_data.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
omp_nest_lock_t cell_boundary_nestLockGlobal;

const boolean_T bv[25] = {true,  false, false, false, false, false, true,
                          false, false, false, false, false, true,  false,
                          false, false, false, false, true,  false, false,
                          false, false, false, true};

const boolean_T bv1[25] = {false, false, false, false, true,  false, false,
                           false, true,  false, false, false, true,  false,
                           false, false, true,  false, false, false, true,
                           false, false, false, false};

const boolean_T bv2[9] = {true,  false, false, false, true,
                          false, false, false, true};

const boolean_T bv3[9] = {false, false, true,  false, true,
                          false, true,  false, false};

const boolean_T bv4[121] = {
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

const boolean_T bv5[121] = {
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

boolean_T isInitialized_cell_boundary = false;

/*
 * File trailer for cell_boundary_data.c
 *
 * [EOF]
 */
