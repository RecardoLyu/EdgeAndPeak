/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: isequal.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:17:16
 */

/* Include Files */
#include "isequal.h"
#include "cell_boundary_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * Arguments    : const emxArray_boolean_T *varargin_1
 * Return Type  : boolean_T
 */
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
    int k;
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

/*
 * File trailer for isequal.c
 *
 * [EOF]
 */
