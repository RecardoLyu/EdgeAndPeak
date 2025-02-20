/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: find.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:17:16
 */

/* Include Files */
#include "find.h"
#include "cell_boundary_emxutil.h"
#include "cell_boundary_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * Arguments    : const emxArray_boolean_T *x
 *                emxArray_int32_T *i
 *                emxArray_int32_T *j
 * Return Type  : void
 */
void b_eml_find(const emxArray_boolean_T *x, emxArray_int32_T *i,
                emxArray_int32_T *j)
{
  int b_i;
  int idx;
  int ii;
  int *i_data;
  int *j_data;
  const boolean_T *x_data;
  x_data = x->data;
  idx = 0;
  b_i = i->size[0];
  i->size[0] = x->size[0];
  emxEnsureCapacity_int32_T(i, b_i);
  i_data = i->data;
  b_i = j->size[0];
  j->size[0] = x->size[0];
  emxEnsureCapacity_int32_T(j, b_i);
  j_data = j->data;
  ii = 1;
  int exitg1;
  boolean_T guard1;
  do {
    exitg1 = 0;
    guard1 = false;
    if (x_data[ii - 1]) {
      idx++;
      i_data[idx - 1] = ii;
      j_data[idx - 1] = 1;
      if (idx >= x->size[0]) {
        exitg1 = 1;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
    if (guard1) {
      ii++;
      if (ii > x->size[0]) {
        exitg1 = 1;
      }
    }
  } while (exitg1 == 0);
  if (x->size[0] == 1) {
    if (idx == 0) {
      i->size[0] = 0;
      j->size[0] = 0;
    }
  } else {
    if (idx < 1) {
      b_i = 0;
    } else {
      b_i = idx;
    }
    ii = i->size[0];
    i->size[0] = b_i;
    emxEnsureCapacity_int32_T(i, ii);
    ii = j->size[0];
    j->size[0] = b_i;
    emxEnsureCapacity_int32_T(j, ii);
  }
}

/*
 * Arguments    : const emxArray_boolean_T *x
 *                emxArray_int32_T *i
 *                emxArray_int32_T *j
 * Return Type  : void
 */
void eml_find(const emxArray_boolean_T *x, emxArray_int32_T *i,
              emxArray_int32_T *j)
{
  int idx;
  int ii;
  int jj;
  int k;
  int *i_data;
  int *j_data;
  const boolean_T *x_data;
  boolean_T exitg1;
  x_data = x->data;
  k = x->size[0] * x->size[1];
  idx = 0;
  jj = i->size[0];
  i->size[0] = k;
  emxEnsureCapacity_int32_T(i, jj);
  i_data = i->data;
  jj = j->size[0];
  j->size[0] = k;
  emxEnsureCapacity_int32_T(j, jj);
  j_data = j->data;
  ii = 1;
  jj = 1;
  exitg1 = false;
  while ((!exitg1) && (jj <= x->size[1])) {
    boolean_T guard1;
    guard1 = false;
    if (x_data[(ii + x->size[0] * (jj - 1)) - 1]) {
      idx++;
      i_data[idx - 1] = ii;
      j_data[idx - 1] = jj;
      if (idx >= k) {
        exitg1 = true;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
    if (guard1) {
      ii++;
      if (ii > x->size[0]) {
        ii = 1;
        jj++;
      }
    }
  }
  if (k == 1) {
    if (idx == 0) {
      i->size[0] = 0;
      j->size[0] = 0;
    }
  } else {
    if (idx < 1) {
      jj = 0;
    } else {
      jj = idx;
    }
    ii = i->size[0];
    i->size[0] = jj;
    emxEnsureCapacity_int32_T(i, ii);
    ii = j->size[0];
    j->size[0] = jj;
    emxEnsureCapacity_int32_T(j, ii);
  }
}

/*
 * File trailer for find.c
 *
 * [EOF]
 */
