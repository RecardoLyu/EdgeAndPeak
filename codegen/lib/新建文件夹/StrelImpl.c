/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: StrelImpl.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 15:48:23
 */

/* Include Files */
#include "StrelImpl.h"
#include "cell_brightzone_emxutil.h"
#include "cell_brightzone_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * Arguments    : const emxArray_real_T *varargin_1
 *                emxArray_boolean_T *se_nhood
 *                emxArray_real_T *se_height
 * Return Type  : boolean_T
 */
boolean_T StrelImpl_StrelImpl(const emxArray_real_T *varargin_1,
                              emxArray_boolean_T *se_nhood,
                              emxArray_real_T *se_height)
{
  emxArray_boolean_T *nhood;
  const double *varargin_1_data;
  double *se_height_data;
  int i;
  int loop_ub_tmp;
  boolean_T *nhood_data;
  boolean_T *se_nhood_data;
  varargin_1_data = varargin_1->data;
  emxInit_boolean_T(&nhood, 2);
  i = nhood->size[0] * nhood->size[1];
  nhood->size[0] = varargin_1->size[0];
  nhood->size[1] = varargin_1->size[1];
  emxEnsureCapacity_boolean_T(nhood, i);
  nhood_data = nhood->data;
  loop_ub_tmp = varargin_1->size[0] * varargin_1->size[1];
  for (i = 0; i < loop_ub_tmp; i++) {
    nhood_data[i] = (varargin_1_data[i] != 0.0);
  }
  i = se_nhood->size[0] * se_nhood->size[1] * se_nhood->size[2];
  se_nhood->size[0] = nhood->size[0];
  se_nhood->size[1] = nhood->size[1];
  se_nhood->size[2] = 1;
  emxEnsureCapacity_boolean_T(se_nhood, i);
  se_nhood_data = se_nhood->data;
  for (i = 0; i < loop_ub_tmp; i++) {
    se_nhood_data[i] = nhood_data[i];
  }
  i = se_height->size[0] * se_height->size[1] * se_height->size[2];
  se_height->size[0] = nhood->size[0];
  se_height->size[1] = nhood->size[1];
  emxFree_boolean_T(&nhood);
  se_height->size[2] = 1;
  emxEnsureCapacity_real_T(se_height, i);
  se_height_data = se_height->data;
  for (i = 0; i < loop_ub_tmp; i++) {
    se_height_data[i] = 0.0;
  }
  return true;
}

/*
 * File trailer for StrelImpl.c
 *
 * [EOF]
 */
