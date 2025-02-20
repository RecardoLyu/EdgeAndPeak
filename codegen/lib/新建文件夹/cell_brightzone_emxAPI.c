/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: cell_brightzone_emxAPI.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 15:48:23
 */

/* Include Files */
#include "cell_brightzone_emxAPI.h"
#include "cell_brightzone_emxutil.h"
#include "cell_brightzone_types.h"
#include "rt_nonfinite.h"
#include <stdlib.h>

/* Function Definitions */
/*
 * Arguments    : int numDimensions
 *                const int *size
 * Return Type  : emxArray_boolean_T *
 */
emxArray_boolean_T *emxCreateND_boolean_T(int numDimensions, const int *size)
{
  emxArray_boolean_T *emx;
  int i;
  int numEl;
  emxInit_boolean_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }
  emx->data = (boolean_T *)malloc((unsigned int)numEl * sizeof(boolean_T));
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : boolean_T *data
 *                int numDimensions
 *                const int *size
 * Return Type  : emxArray_boolean_T *
 */
emxArray_boolean_T *emxCreateWrapperND_boolean_T(boolean_T *data,
                                                 int numDimensions,
                                                 const int *size)
{
  emxArray_boolean_T *emx;
  int i;
  int numEl;
  emxInit_boolean_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }
  emx->data = data;
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : boolean_T *data
 *                int rows
 *                int cols
 * Return Type  : emxArray_boolean_T *
 */
emxArray_boolean_T *emxCreateWrapper_boolean_T(boolean_T *data, int rows,
                                               int cols)
{
  emxArray_boolean_T *emx;
  emxInit_boolean_T(&emx, 2);
  emx->size[0] = rows;
  emx->size[1] = cols;
  emx->data = data;
  emx->numDimensions = 2;
  emx->allocatedSize = rows * cols;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : int rows
 *                int cols
 * Return Type  : emxArray_boolean_T *
 */
emxArray_boolean_T *emxCreate_boolean_T(int rows, int cols)
{
  emxArray_boolean_T *emx;
  int numEl;
  emxInit_boolean_T(&emx, 2);
  emx->size[0] = rows;
  numEl = rows * cols;
  emx->size[1] = cols;
  emx->data = (boolean_T *)malloc((unsigned int)numEl * sizeof(boolean_T));
  emx->numDimensions = 2;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : emxArray_boolean_T *emxArray
 * Return Type  : void
 */
void emxDestroyArray_boolean_T(emxArray_boolean_T *emxArray)
{
  emxFree_boolean_T(&emxArray);
}

/*
 * Arguments    : emxArray_boolean_T **pEmxArray
 *                int numDimensions
 * Return Type  : void
 */
void emxInitArray_boolean_T(emxArray_boolean_T **pEmxArray, int numDimensions)
{
  emxInit_boolean_T(pEmxArray, numDimensions);
}

/*
 * File trailer for cell_brightzone_emxAPI.c
 *
 * [EOF]
 */
