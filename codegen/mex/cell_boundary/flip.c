/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * flip.c
 *
 * Code generation for function 'flip'
 *
 */

/* Include files */
#include "flip.h"
#include "cell_boundary_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void b_flip(emxArray_real_T *x)
{
  real_T *x_data;
  int32_T b_i;
  int32_T k;
  x_data = x->data;
  if ((x->size[0] != 0) && (x->size[1] != 0) && (x->size[1] > 1)) {
    int32_T i;
    int32_T n;
    int32_T nd2;
    int32_T vstride;
    vstride = x->size[0];
    n = x->size[1] - 1;
    nd2 = x->size[1] >> 1;
    i = vstride - 1;
    for (b_i = 0; b_i <= i; b_i++) {
      for (k = 0; k < nd2; k++) {
        real_T tmp;
        int32_T i1;
        int32_T tmp_tmp;
        tmp_tmp = b_i + k * vstride;
        tmp = x_data[tmp_tmp];
        i1 = b_i + (n - k) * vstride;
        x_data[tmp_tmp] = x_data[i1];
        x_data[i1] = tmp;
      }
    }
  }
}

void c_flip(emxArray_boolean_T *x)
{
  int32_T j;
  int32_T k;
  boolean_T *x_data;
  x_data = x->data;
  if ((x->size[0] != 0) && (x->size[1] != 0) && (x->size[0] > 1)) {
    int32_T i;
    int32_T n;
    int32_T nd2;
    n = x->size[0] - 1;
    nd2 = x->size[0] >> 1;
    i = x->size[1] - 1;
    for (j = 0; j <= i; j++) {
      int32_T offset;
      offset = j * x->size[0];
      for (k = 0; k < nd2; k++) {
        int32_T i1;
        int32_T tmp_tmp;
        boolean_T tmp;
        tmp_tmp = offset + k;
        tmp = x_data[tmp_tmp];
        i1 = (offset + n) - k;
        x_data[tmp_tmp] = x_data[i1];
        x_data[i1] = tmp;
      }
    }
  }
}

void d_flip(emxArray_boolean_T *x)
{
  int32_T b_i;
  int32_T k;
  boolean_T *x_data;
  x_data = x->data;
  if ((x->size[0] != 0) && (x->size[1] != 0) && (x->size[1] > 1)) {
    int32_T i;
    int32_T n;
    int32_T nd2;
    int32_T vstride;
    vstride = x->size[0];
    n = x->size[1] - 1;
    nd2 = x->size[1] >> 1;
    i = vstride - 1;
    for (b_i = 0; b_i <= i; b_i++) {
      for (k = 0; k < nd2; k++) {
        int32_T i1;
        int32_T tmp_tmp;
        boolean_T tmp;
        tmp_tmp = b_i + k * vstride;
        tmp = x_data[tmp_tmp];
        i1 = b_i + (n - k) * vstride;
        x_data[tmp_tmp] = x_data[i1];
        x_data[i1] = tmp;
      }
    }
  }
}

void flip(emxArray_real_T *x)
{
  real_T *x_data;
  int32_T j;
  int32_T k;
  x_data = x->data;
  if ((x->size[0] != 0) && (x->size[1] != 0) && (x->size[0] > 1)) {
    int32_T i;
    int32_T n;
    int32_T nd2;
    n = x->size[0] - 1;
    nd2 = x->size[0] >> 1;
    i = x->size[1] - 1;
    for (j = 0; j <= i; j++) {
      int32_T offset;
      offset = j * x->size[0];
      for (k = 0; k < nd2; k++) {
        real_T tmp;
        int32_T i1;
        int32_T tmp_tmp;
        tmp_tmp = offset + k;
        tmp = x_data[tmp_tmp];
        i1 = (offset + n) - k;
        x_data[tmp_tmp] = x_data[i1];
        x_data[i1] = tmp;
      }
    }
  }
}

/* End of code generation (flip.c) */
