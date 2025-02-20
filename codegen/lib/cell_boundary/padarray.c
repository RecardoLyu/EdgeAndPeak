/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: padarray.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:17:16
 */

/* Include Files */
#include "padarray.h"
#include "cell_boundary_emxutil.h"
#include "cell_boundary_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * Arguments    : const emxArray_real32_T *varargin_1
 *                const double varargin_2_data[]
 *                emxArray_real32_T *b
 * Return Type  : void
 */
void b_padarray(const emxArray_real32_T *varargin_1,
                const double varargin_2_data[], emxArray_real32_T *b)
{
  const float *varargin_1_data;
  float *b_data;
  int b_i;
  int i;
  int i1;
  int i2;
  int j;
  varargin_1_data = varargin_1->data;
  i = b->size[0] * b->size[1];
  b->size[0] = (int)((double)varargin_1->size[0] + varargin_2_data[0]);
  i1 = (int)((double)varargin_1->size[1] + varargin_2_data[1]);
  b->size[1] = (int)((double)varargin_1->size[1] + varargin_2_data[1]);
  emxEnsureCapacity_real32_T(b, i);
  b_data = b->data;
  i = varargin_1->size[1] + 1;
  for (j = i; j <= i1; j++) {
    i2 = b->size[0];
    for (b_i = 0; b_i < i2; b_i++) {
      b_data[b_i + b->size[0] * (j - 1)] = rtMinusInfF;
    }
  }
  i = varargin_1->size[1];
  i1 = varargin_1->size[0] + 1;
  for (j = 0; j < i; j++) {
    i2 = b->size[0];
    for (b_i = i1; b_i <= i2; b_i++) {
      b_data[(b_i + b->size[0] * j) - 1] = rtMinusInfF;
    }
  }
  i = varargin_1->size[1];
  i1 = varargin_1->size[0];
  for (j = 0; j < i; j++) {
    for (b_i = 0; b_i < i1; b_i++) {
      b_data[b_i + b->size[0] * j] =
          varargin_1_data[b_i + varargin_1->size[0] * j];
    }
  }
}

/*
 * Arguments    : const double varargin_2_data[]
 *                emxArray_real32_T *b
 * Return Type  : void
 */
void padarray(const double varargin_2_data[], emxArray_real32_T *b)
{
  float *b_data;
  int b_i;
  int i;
  int i1;
  int i2;
  int j;
  i = b->size[0] * b->size[1];
  b->size[0] = (int)(varargin_2_data[0] + 1.0);
  b->size[1] = (int)(varargin_2_data[1] + 1.0);
  emxEnsureCapacity_real32_T(b, i);
  b_data = b->data;
  i = (int)varargin_2_data[1];
  for (j = 0; j < i; j++) {
    i1 = b->size[0];
    for (b_i = 0; b_i < i1; b_i++) {
      b_data[b_i + b->size[0] * j] = rtMinusInfF;
    }
  }
  i1 = i + 1;
  i2 = b->size[1];
  for (j = i1; j <= i2; j++) {
    int i3;
    i3 = (int)varargin_2_data[0];
    for (b_i = 0; b_i < i3; b_i++) {
      b_data[b_i + b->size[0] * (j - 1)] = rtMinusInfF;
    }
  }
  b_data[(int)varargin_2_data[0] + b->size[0] * i] = 1.0F;
}

/*
 * File trailer for padarray.c
 *
 * [EOF]
 */
