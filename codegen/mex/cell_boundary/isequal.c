/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * isequal.c
 *
 * Code generation for function 'isequal'
 *
 */

/* Include files */
#include "isequal.h"
#include "cell_boundary_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
boolean_T isequal(const emxArray_boolean_T *varargin_1)
{
  const boolean_T *varargin_1_data;
  boolean_T p;
  varargin_1_data = varargin_1->data;
  p = false;
  if ((varargin_1->size[0] == 3) && (varargin_1->size[1] == 3)) {
    p = true;
  }
  if (p && ((varargin_1->size[0] != 0) && (varargin_1->size[1] != 0))) {
    int32_T k;
    boolean_T exitg1;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 9)) {
      if (!varargin_1_data[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  return p;
}

/* End of code generation (isequal.c) */
