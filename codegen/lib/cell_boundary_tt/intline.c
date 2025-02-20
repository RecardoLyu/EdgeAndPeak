/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: intline.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:11:08
 */

/* Include Files */
#include "intline.h"
#include "cell_boundary_emxutil.h"
#include "cell_boundary_rtwutil.h"
#include "cell_boundary_types.h"
#include "colon.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
/*
 * Arguments    : double x1
 *                double x2
 *                double b_y1
 *                double y2
 *                emxArray_real_T *x
 *                emxArray_real_T *y
 * Return Type  : void
 */
void intline(double x1, double x2, double b_y1, double y2, emxArray_real_T *x,
             emxArray_real_T *y)
{
  emxArray_real_T *b_y;
  double dx;
  double dx_tmp;
  double dy;
  double dy_tmp;
  double *b_y_data;
  double *x_data;
  double *y_data;
  int i;
  int k;
  dx_tmp = x2 - x1;
  dx = fabs(dx_tmp);
  dy_tmp = y2 - b_y1;
  dy = fabs(dy_tmp);
  emxInit_real_T(&b_y, 2);
  y_data = b_y->data;
  if ((dx == 0.0) && (dy == 0.0)) {
    k = x->size[0];
    x->size[0] = 1;
    emxEnsureCapacity_real_T(x, k);
    x_data = x->data;
    x_data[0] = x1;
    k = y->size[0];
    y->size[0] = 1;
    emxEnsureCapacity_real_T(y, k);
    b_y_data = y->data;
    b_y_data[0] = b_y1;
  } else {
    int flip;
    int nx;
    flip = 0;
    if (dx >= dy) {
      dy_tmp /= dx_tmp;
      if (rtIsNaN(x1) || rtIsNaN(x2)) {
        k = b_y->size[0] * b_y->size[1];
        b_y->size[0] = 1;
        b_y->size[1] = 1;
        emxEnsureCapacity_real_T(b_y, k);
        y_data = b_y->data;
        y_data[0] = rtNaN;
      } else if (x2 < x1) {
        b_y->size[0] = 1;
        b_y->size[1] = 0;
      } else if ((rtIsInf(x1) || rtIsInf(x2)) && (x1 == x2)) {
        k = b_y->size[0] * b_y->size[1];
        b_y->size[0] = 1;
        b_y->size[1] = 1;
        emxEnsureCapacity_real_T(b_y, k);
        y_data = b_y->data;
        y_data[0] = rtNaN;
      } else if (floor(x1) == x1) {
        k = b_y->size[0] * b_y->size[1];
        b_y->size[0] = 1;
        nx = (int)dx_tmp;
        b_y->size[1] = (int)dx_tmp + 1;
        emxEnsureCapacity_real_T(b_y, k);
        y_data = b_y->data;
        for (k = 0; k <= nx; k++) {
          y_data[k] = x1 + (double)k;
        }
      } else {
        eml_float_colon(x1, x2, b_y);
        y_data = b_y->data;
      }
      k = x->size[0];
      x->size[0] = b_y->size[1];
      emxEnsureCapacity_real_T(x, k);
      x_data = x->data;
      nx = b_y->size[1];
      for (k = 0; k < nx; k++) {
        x_data[k] = y_data[k];
      }
      k = y->size[0];
      y->size[0] = x->size[0];
      emxEnsureCapacity_real_T(y, k);
      b_y_data = y->data;
      nx = x->size[0];
      for (k = 0; k < nx; k++) {
        b_y_data[k] = b_y1 + dy_tmp * (x_data[k] - x1);
      }
      nx = y->size[0];
      for (k = 0; k < nx; k++) {
        b_y_data[k] = rt_roundd_snf(b_y_data[k]);
      }
    } else {
      if (b_y1 > y2) {
        dx = x1;
        x1 = x2;
        x2 = dx;
        dx = b_y1;
        b_y1 = y2;
        y2 = dx;
        flip = 1;
      }
      dx = y2 - b_y1;
      dy_tmp = (x2 - x1) / dx;
      if (rtIsNaN(b_y1) || rtIsNaN(y2)) {
        k = b_y->size[0] * b_y->size[1];
        b_y->size[0] = 1;
        b_y->size[1] = 1;
        emxEnsureCapacity_real_T(b_y, k);
        y_data = b_y->data;
        y_data[0] = rtNaN;
      } else if (y2 < b_y1) {
        b_y->size[0] = 1;
        b_y->size[1] = 0;
      } else if ((rtIsInf(b_y1) || rtIsInf(y2)) && (b_y1 == y2)) {
        k = b_y->size[0] * b_y->size[1];
        b_y->size[0] = 1;
        b_y->size[1] = 1;
        emxEnsureCapacity_real_T(b_y, k);
        y_data = b_y->data;
        y_data[0] = rtNaN;
      } else if (floor(b_y1) == b_y1) {
        k = b_y->size[0] * b_y->size[1];
        b_y->size[0] = 1;
        nx = (int)dx;
        b_y->size[1] = (int)dx + 1;
        emxEnsureCapacity_real_T(b_y, k);
        y_data = b_y->data;
        for (k = 0; k <= nx; k++) {
          y_data[k] = b_y1 + (double)k;
        }
      } else {
        eml_float_colon(b_y1, y2, b_y);
        y_data = b_y->data;
      }
      k = y->size[0];
      y->size[0] = b_y->size[1];
      emxEnsureCapacity_real_T(y, k);
      b_y_data = y->data;
      nx = b_y->size[1];
      for (k = 0; k < nx; k++) {
        b_y_data[k] = y_data[k];
      }
      k = x->size[0];
      x->size[0] = y->size[0];
      emxEnsureCapacity_real_T(x, k);
      x_data = x->data;
      nx = y->size[0];
      for (k = 0; k < nx; k++) {
        x_data[k] = x1 + dy_tmp * (b_y_data[k] - b_y1);
      }
      nx = x->size[0];
      for (k = 0; k < nx; k++) {
        x_data[k] = rt_roundd_snf(x_data[k]);
      }
    }
    if (flip != 0) {
      flip = x->size[0] - 1;
      k = x->size[0] >> 1;
      for (i = 0; i < k; i++) {
        dx = x_data[i];
        nx = flip - i;
        x_data[i] = x_data[nx];
        x_data[nx] = dx;
      }
      for (i = 0; i < k; i++) {
        dx = b_y_data[i];
        nx = flip - i;
        b_y_data[i] = b_y_data[nx];
        b_y_data[nx] = dx;
      }
    }
  }
  emxFree_real_T(&b_y);
}

/*
 * File trailer for intline.c
 *
 * [EOF]
 */
