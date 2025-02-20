/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: padarray.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 15:48:23
 */

/* Include Files */
#include "padarray.h"
#include "cell_brightzone_emxutil.h"
#include "cell_brightzone_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * Arguments    : const emxArray_boolean_T *varargin_1
 *                const double varargin_2_data[]
 *                emxArray_boolean_T *b
 * Return Type  : void
 */
void padarray(const emxArray_boolean_T *varargin_1,
              const double varargin_2_data[], emxArray_boolean_T *b)
{
  int b_i;
  int i;
  int j;
  const boolean_T *varargin_1_data;
  boolean_T *b_data;
  varargin_1_data = varargin_1->data;
  if ((varargin_1->size[0] == 0) || (varargin_1->size[1] == 0)) {
    double sizeB_idx_0;
    double sizeB_idx_1;
    int loop_ub;
    sizeB_idx_0 = (double)varargin_1->size[0] + varargin_2_data[0];
    sizeB_idx_1 = (double)varargin_1->size[1] + varargin_2_data[1];
    i = b->size[0] * b->size[1];
    b->size[0] = (int)sizeB_idx_0;
    b->size[1] = (int)sizeB_idx_1;
    emxEnsureCapacity_boolean_T(b, i);
    b_data = b->data;
    loop_ub = (int)sizeB_idx_0 * (int)sizeB_idx_1;
    for (i = 0; i < loop_ub; i++) {
      b_data[i] = false;
    }
  } else {
    int i1;
    int loop_ub;
    i = b->size[0] * b->size[1];
    b->size[0] = (int)((double)varargin_1->size[0] + varargin_2_data[0]);
    loop_ub = (int)((double)varargin_1->size[1] + varargin_2_data[1]);
    b->size[1] = (int)((double)varargin_1->size[1] + varargin_2_data[1]);
    emxEnsureCapacity_boolean_T(b, i);
    b_data = b->data;
    i = varargin_1->size[1] + 1;
    for (j = i; j <= loop_ub; j++) {
      i1 = b->size[0];
      for (b_i = 0; b_i < i1; b_i++) {
        b_data[b_i + b->size[0] * (j - 1)] = false;
      }
    }
    i = varargin_1->size[1];
    loop_ub = varargin_1->size[0] + 1;
    for (j = 0; j < i; j++) {
      i1 = b->size[0];
      for (b_i = loop_ub; b_i <= i1; b_i++) {
        b_data[(b_i + b->size[0] * j) - 1] = false;
      }
    }
    i = varargin_1->size[1];
    loop_ub = varargin_1->size[0];
    for (j = 0; j < i; j++) {
      for (b_i = 0; b_i < loop_ub; b_i++) {
        b_data[b_i + b->size[0] * j] =
            varargin_1_data[b_i + varargin_1->size[0] * j];
      }
    }
  }
}

/*
 * File trailer for padarray.c
 *
 * [EOF]
 */
