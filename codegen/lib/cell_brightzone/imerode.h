/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: imerode.h
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 15:48:23
 */

#ifndef IMERODE_H
#define IMERODE_H

/* Include Files */
#include "cell_brightzone_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_imerode(const boolean_T A[1960000],
               const c_emxArray_images_internal_code *se_StrelArray,
               const emxArray_cell_wrap_1 *se_DecomposedStrelArray,
               emxArray_boolean_T *B);

void imerode(const double A[1960000], double B[1960000]);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for imerode.h
 *
 * [EOF]
 */
