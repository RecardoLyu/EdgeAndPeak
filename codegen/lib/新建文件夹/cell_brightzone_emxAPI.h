/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: cell_brightzone_emxAPI.h
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 15:48:23
 */

#ifndef CELL_BRIGHTZONE_EMXAPI_H
#define CELL_BRIGHTZONE_EMXAPI_H

/* Include Files */
#include "cell_brightzone_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern emxArray_boolean_T *emxCreateND_boolean_T(int numDimensions,
                                                 const int *size);

extern emxArray_boolean_T *emxCreateWrapperND_boolean_T(boolean_T *data,
                                                        int numDimensions,
                                                        const int *size);

extern emxArray_boolean_T *emxCreateWrapper_boolean_T(boolean_T *data, int rows,
                                                      int cols);

extern emxArray_boolean_T *emxCreate_boolean_T(int rows, int cols);

extern void emxDestroyArray_boolean_T(emxArray_boolean_T *emxArray);

extern void emxInitArray_boolean_T(emxArray_boolean_T **pEmxArray,
                                   int numDimensions);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for cell_brightzone_emxAPI.h
 *
 * [EOF]
 */
