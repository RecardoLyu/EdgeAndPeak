/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: cell_brightzone.h
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 15:48:23
 */

#ifndef CELL_BRIGHTZONE_H
#define CELL_BRIGHTZONE_H

/* Include Files */
#include "cell_brightzone_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void cell_brightzone(const double img_in[1960000], double strel_size,
                            emxArray_boolean_T *peak_mask);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for cell_brightzone.h
 *
 * [EOF]
 */
