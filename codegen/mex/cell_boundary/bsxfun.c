/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * bsxfun.c
 *
 * Code generation for function 'bsxfun'
 *
 */

/* Include files */
#include "bsxfun.h"
#include "cell_boundary_data.h"
#include "cell_boundary_emxutil.h"
#include "cell_boundary_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void bsxfun(const emlrtStack *sp, const emxArray_real_T *a, const real_T b[2],
            emxArray_real_T *c)
{
  const real_T *a_data;
  real_T *c_data;
  int32_T b_k;
  int32_T i;
  int32_T k;
  a_data = a->data;
  i = c->size[0] * c->size[1];
  c->size[0] = a->size[0];
  c->size[1] = 2;
  emxEnsureCapacity_real_T(sp, c, i, &xb_emlrtRTEI);
  c_data = c->data;
  if (a->size[0] != 0) {
    int32_T acoef;
    acoef = (a->size[0] != 1);
    for (k = 0; k < 2; k++) {
      i = c->size[0] - 1;
      for (b_k = 0; b_k <= i; b_k++) {
        c_data[b_k + c->size[0] * k] =
            a_data[acoef * b_k + a->size[0] * k] * b[k];
      }
    }
  }
}

/* End of code generation (bsxfun.c) */
