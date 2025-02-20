/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: imdilate.h
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 15:48:23
 */

#ifndef IMDILATE_H
#define IMDILATE_H

/* Include Files */
#include "cell_brightzone_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void imdilate(const emxArray_boolean_T *A,
              const c_emxArray_images_internal_code *se_StrelArray,
              const emxArray_cell_wrap_1 *se_DecomposedStrelArray,
              emxArray_boolean_T *B);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for imdilate.h
 *
 * [EOF]
 */
