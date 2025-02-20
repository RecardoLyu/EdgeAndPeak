/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: padarray.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:11:08
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
 * Arguments    : const emxArray_boolean_T *varargin_1
 *                const double varargin_2_data[]
 *                emxArray_boolean_T *b
 * Return Type  : void
 */
void c_padarray(const emxArray_boolean_T *varargin_1,
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
    b->size[1] = (int)((double)varargin_1->size[1] + varargin_2_data[1]);
    emxEnsureCapacity_boolean_T(b, i);
    b_data = b->data;
    i = (int)varargin_2_data[1];
    for (j = 0; j < i; j++) {
      loop_ub = b->size[0];
      for (b_i = 0; b_i < loop_ub; b_i++) {
        b_data[b_i + b->size[0] * j] = false;
      }
    }
    loop_ub = i + 1;
    i1 = b->size[1];
    for (j = loop_ub; j <= i1; j++) {
      int i2;
      i2 = (int)varargin_2_data[0];
      for (b_i = 0; b_i < i2; b_i++) {
        b_data[b_i + b->size[0] * (j - 1)] = false;
      }
    }
    loop_ub = varargin_1->size[1];
    i1 = varargin_1->size[0];
    for (j = 0; j < loop_ub; j++) {
      for (b_i = 0; b_i < i1; b_i++) {
        b_data[(b_i + (int)varargin_2_data[0]) + b->size[0] * (j + i)] =
            varargin_1_data[b_i + varargin_1->size[0] * j];
      }
    }
  }
}

/*
 * Arguments    : const emxArray_boolean_T *varargin_1
 *                const double varargin_2_data[]
 *                emxArray_boolean_T *b
 * Return Type  : void
 */
void d_padarray(const emxArray_boolean_T *varargin_1,
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
