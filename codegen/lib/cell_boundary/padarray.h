/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: padarray.h
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:17:16
 */

#ifndef PADARRAY_H
#define PADARRAY_H

/* Include Files */
#include "cell_boundary_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_padarray(const emxArray_real32_T *varargin_1,
                const double varargin_2_data[], emxArray_real32_T *b);

void padarray(const double varargin_2_data[], emxArray_real32_T *b);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for padarray.h
 *
 * [EOF]
 */
