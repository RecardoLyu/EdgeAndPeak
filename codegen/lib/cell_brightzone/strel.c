/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: strel.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 15:48:23
 */

/* Include Files */
#include "strel.h"
#include "StrelImpl.h"
#include "cell_brightzone_emxutil.h"
#include "cell_brightzone_types.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Declarations */
static void binary_expand_op(emxArray_boolean_T *in1,
                             const emxArray_real_T *in2,
                             const emxArray_real_T *in3, double in4);

static int div_s32(int numerator, int denominator);

static double rt_powd_snf(double u0, double u1);

static void
strel_decomposeImpl(const c_emxArray_images_internal_code *obj_StrelArray,
                    const emxArray_cell_wrap_1 *obj_DecomposedStrelArray,
                    c_emxArray_images_internal_code *seq_StrelArray,
                    emxArray_cell_wrap_1 *seq_DecomposedStrelArray);

/* Function Definitions */
/*
 * Arguments    : emxArray_boolean_T *in1
 *                const emxArray_real_T *in2
 *                const emxArray_real_T *in3
 *                double in4
 * Return Type  : void
 */
static void binary_expand_op(emxArray_boolean_T *in1,
                             const emxArray_real_T *in2,
                             const emxArray_real_T *in3, double in4)
{
  const double *in2_data;
  const double *in3_data;
  int aux_0_1;
  int aux_1_1;
  int b_loop_ub;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_0_1;
  int stride_1_0;
  int stride_1_1;
  boolean_T *in1_data;
  in3_data = in3->data;
  in2_data = in2->data;
  if (in3->size[0] == 1) {
    loop_ub = in2->size[0];
  } else {
    loop_ub = in3->size[0];
  }
  i = in1->size[0] * in1->size[1];
  in1->size[0] = loop_ub;
  emxEnsureCapacity_boolean_T(in1, i);
  if (in3->size[1] == 1) {
    b_loop_ub = in2->size[1];
  } else {
    b_loop_ub = in3->size[1];
  }
  i = in1->size[0] * in1->size[1];
  in1->size[1] = b_loop_ub;
  emxEnsureCapacity_boolean_T(in1, i);
  in1_data = in1->data;
  stride_0_0 = (in2->size[0] != 1);
  stride_0_1 = (in2->size[1] != 1);
  stride_1_0 = (in3->size[0] != 1);
  stride_1_1 = (in3->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      in1_data[i1 + in1->size[0] * i] =
          (in2_data[i1 * stride_0_0 + in2->size[0] * aux_0_1] +
               in3_data[i1 * stride_1_0 + in3->size[0] * aux_1_1] <=
           in4);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

/*
 * Arguments    : int numerator
 *                int denominator
 * Return Type  : int
 */
static int div_s32(int numerator, int denominator)
{
  int quotient;
  if (denominator == 0) {
    if (numerator >= 0) {
      quotient = MAX_int32_T;
    } else {
      quotient = MIN_int32_T;
    }
  } else {
    unsigned int tempAbsQuotient;
    unsigned int u;
    if (numerator < 0) {
      tempAbsQuotient = ~(unsigned int)numerator + 1U;
    } else {
      tempAbsQuotient = (unsigned int)numerator;
    }
    if (denominator < 0) {
      u = ~(unsigned int)denominator + 1U;
    } else {
      u = (unsigned int)denominator;
    }
    tempAbsQuotient /= u;
    if ((numerator < 0) != (denominator < 0)) {
      quotient = -(int)tempAbsQuotient;
    } else {
      quotient = (int)tempAbsQuotient;
    }
  }
  return quotient;
}

/*
 * Arguments    : double u0
 *                double u1
 * Return Type  : double
 */
static double rt_powd_snf(double u0, double u1)
{
  double y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = rtNaN;
  } else {
    double d;
    double d1;
    d = fabs(u0);
    d1 = fabs(u1);
    if (rtIsInf(u1)) {
      if (d == 1.0) {
        y = 1.0;
      } else if (d > 1.0) {
        if (u1 > 0.0) {
          y = rtInf;
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = rtInf;
      }
    } else if (d1 == 0.0) {
      y = 1.0;
    } else if (d1 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = rtNaN;
    } else {
      y = pow(u0, u1);
    }
  }
  return y;
}

/*
 * Arguments    : const c_emxArray_images_internal_code *obj_StrelArray
 *                const emxArray_cell_wrap_1 *obj_DecomposedStrelArray
 *                c_emxArray_images_internal_code *seq_StrelArray
 *                emxArray_cell_wrap_1 *seq_DecomposedStrelArray
 * Return Type  : void
 */
static void
strel_decomposeImpl(const c_emxArray_images_internal_code *obj_StrelArray,
                    const emxArray_cell_wrap_1 *obj_DecomposedStrelArray,
                    c_emxArray_images_internal_code *seq_StrelArray,
                    emxArray_cell_wrap_1 *seq_DecomposedStrelArray)
{
  const c_images_internal_coder_strel_S *obj_StrelArray_data;
  c_images_internal_coder_strel_S *seq_StrelArray_data;
  const cell_wrap_1 *obj_DecomposedStrelArray_data;
  cell_wrap_1 *seq_DecomposedStrelArray_data;
  int i;
  int n;
  obj_DecomposedStrelArray_data = obj_DecomposedStrelArray->data;
  obj_StrelArray_data = obj_StrelArray->data;
  seq_StrelArray->size[0] = 1;
  seq_StrelArray->size[1] = 0;
  seq_DecomposedStrelArray->size[0] = 1;
  seq_DecomposedStrelArray->size[1] = 0;
  i = obj_DecomposedStrelArray_data[0].f1->size[1];
  if (obj_DecomposedStrelArray_data[0].f1->size[1] == 0) {
    i = seq_StrelArray->size[0] * seq_StrelArray->size[1];
    seq_StrelArray->size[0] = 1;
    seq_StrelArray->size[1] = 1;
    d_emxEnsureCapacity_images_inte(seq_StrelArray, i);
    seq_StrelArray_data = seq_StrelArray->data;
    c_emxCopyStruct_images_internal(&seq_StrelArray_data[0],
                                    &obj_StrelArray_data[0]);
    i = seq_DecomposedStrelArray->size[0] * seq_DecomposedStrelArray->size[1];
    seq_DecomposedStrelArray->size[0] = 1;
    seq_DecomposedStrelArray->size[1] = 1;
    emxEnsureCapacity_cell_wrap_11(seq_DecomposedStrelArray, i);
    seq_DecomposedStrelArray_data = seq_DecomposedStrelArray->data;
    seq_DecomposedStrelArray_data[0].f1->size[0] = 1;
    seq_DecomposedStrelArray_data[0].f1->size[1] = 0;
  } else {
    for (n = 0; n < i; n++) {
      int i1;
      int seq_StrelArray_tmp;
      seq_StrelArray_tmp = seq_StrelArray->size[1] + 1;
      i1 = seq_StrelArray->size[0] * seq_StrelArray->size[1];
      seq_StrelArray->size[0] = 1;
      seq_StrelArray->size[1]++;
      d_emxEnsureCapacity_images_inte(seq_StrelArray, i1);
      seq_StrelArray_data = seq_StrelArray->data;
      c_emxCopyStruct_images_internal(
          &seq_StrelArray_data[seq_StrelArray_tmp - 1],
          &obj_DecomposedStrelArray_data[0].f1->data[n]);
      i1 =
          seq_DecomposedStrelArray->size[0] * seq_DecomposedStrelArray->size[1];
      seq_DecomposedStrelArray->size[0] = 1;
      seq_DecomposedStrelArray->size[1]++;
      emxEnsureCapacity_cell_wrap_11(seq_DecomposedStrelArray, i1);
      seq_DecomposedStrelArray_data = seq_DecomposedStrelArray->data;
      i1 = seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1->size[0] *
           seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1->size[1];
      seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1->size[0] = 1;
      d_emxEnsureCapacity_images_inte(
          seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1, i1);
      seq_DecomposedStrelArray_data[seq_DecomposedStrelArray->size[1] - 1]
          .f1->size[1] = 0;
    }
  }
}

/*
 * Arguments    : const c_emxArray_images_internal_code *obj_StrelArray
 *                const emxArray_cell_wrap_1 *obj_DecomposedStrelArray
 *                c_emxArray_images_internal_code *seq_StrelArray
 *                emxArray_cell_wrap_1 *seq_DecomposedStrelArray
 *                emxArray_boolean_T *isEachStrelObj2D
 * Return Type  : void
 */
void strel_decompose(const c_emxArray_images_internal_code *obj_StrelArray,
                     const emxArray_cell_wrap_1 *obj_DecomposedStrelArray,
                     c_emxArray_images_internal_code *seq_StrelArray,
                     emxArray_cell_wrap_1 *seq_DecomposedStrelArray,
                     emxArray_boolean_T *isEachStrelObj2D)
{
  const c_images_internal_coder_strel_S *obj_StrelArray_data;
  c_images_internal_coder_strel_S *seq_StrelArray_data;
  const cell_wrap_1 *obj_DecomposedStrelArray_data;
  cell_wrap_1 *seq_DecomposedStrelArray_data;
  int i;
  int n;
  boolean_T *isEachStrelObj2D_data;
  obj_DecomposedStrelArray_data = obj_DecomposedStrelArray->data;
  obj_StrelArray_data = obj_StrelArray->data;
  seq_StrelArray->size[0] = 1;
  seq_StrelArray->size[1] = 0;
  seq_DecomposedStrelArray->size[0] = 1;
  seq_DecomposedStrelArray->size[1] = 0;
  isEachStrelObj2D->size[0] = 1;
  isEachStrelObj2D->size[1] = 0;
  i = obj_DecomposedStrelArray_data[0].f1->size[1];
  if (obj_DecomposedStrelArray_data[0].f1->size[1] == 0) {
    i = seq_StrelArray->size[0] * seq_StrelArray->size[1];
    seq_StrelArray->size[0] = 1;
    seq_StrelArray->size[1] = 1;
    d_emxEnsureCapacity_images_inte(seq_StrelArray, i);
    seq_StrelArray_data = seq_StrelArray->data;
    c_emxCopyStruct_images_internal(&seq_StrelArray_data[0],
                                    &obj_StrelArray_data[0]);
    i = seq_DecomposedStrelArray->size[0] * seq_DecomposedStrelArray->size[1];
    seq_DecomposedStrelArray->size[0] = 1;
    seq_DecomposedStrelArray->size[1] = 1;
    emxEnsureCapacity_cell_wrap_11(seq_DecomposedStrelArray, i);
    seq_DecomposedStrelArray_data = seq_DecomposedStrelArray->data;
    seq_DecomposedStrelArray_data[0].f1->size[0] = 1;
    seq_DecomposedStrelArray_data[0].f1->size[1] = 0;
    i = isEachStrelObj2D->size[0] * isEachStrelObj2D->size[1];
    isEachStrelObj2D->size[1] = 1;
    emxEnsureCapacity_boolean_T(isEachStrelObj2D, i);
    isEachStrelObj2D_data = isEachStrelObj2D->data;
    isEachStrelObj2D_data[0] = true;
  } else {
    for (n = 0; n < i; n++) {
      int i1;
      int seq_StrelArray_tmp;
      seq_StrelArray_tmp = seq_StrelArray->size[1] + 1;
      i1 = seq_StrelArray->size[0] * seq_StrelArray->size[1];
      seq_StrelArray->size[0] = 1;
      seq_StrelArray->size[1]++;
      d_emxEnsureCapacity_images_inte(seq_StrelArray, i1);
      seq_StrelArray_data = seq_StrelArray->data;
      c_emxCopyStruct_images_internal(
          &seq_StrelArray_data[seq_StrelArray_tmp - 1],
          &obj_DecomposedStrelArray_data[0].f1->data[n]);
      i1 =
          seq_DecomposedStrelArray->size[0] * seq_DecomposedStrelArray->size[1];
      seq_DecomposedStrelArray->size[0] = 1;
      seq_DecomposedStrelArray->size[1]++;
      emxEnsureCapacity_cell_wrap_11(seq_DecomposedStrelArray, i1);
      seq_DecomposedStrelArray_data = seq_DecomposedStrelArray->data;
      i1 = seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1->size[0] *
           seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1->size[1];
      seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1->size[0] = 1;
      d_emxEnsureCapacity_images_inte(
          seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1, i1);
      seq_DecomposedStrelArray_data[seq_DecomposedStrelArray->size[1] - 1]
          .f1->size[1] = 0;
      i1 = isEachStrelObj2D->size[1];
      seq_StrelArray_tmp =
          isEachStrelObj2D->size[0] * isEachStrelObj2D->size[1];
      isEachStrelObj2D->size[1]++;
      emxEnsureCapacity_boolean_T(isEachStrelObj2D, seq_StrelArray_tmp);
      isEachStrelObj2D_data = isEachStrelObj2D->data;
      isEachStrelObj2D_data[i1] = true;
    }
  }
}

/*
 * Arguments    : const c_emxArray_images_internal_code *obj_StrelArray
 *                const emxArray_cell_wrap_1 *obj_DecomposedStrelArray
 *                double pad_ul_data[]
 *                int pad_ul_size[2]
 *                double pad_lr_data[]
 *                int pad_lr_size[2]
 * Return Type  : void
 */
void strel_getpadsize(const c_emxArray_images_internal_code *obj_StrelArray,
                      const emxArray_cell_wrap_1 *obj_DecomposedStrelArray,
                      double pad_ul_data[], int pad_ul_size[2],
                      double pad_lr_data[], int pad_lr_size[2])
{
  c_emxArray_images_internal_code *seq_StrelArray;
  c_images_internal_coder_strel_S *seq_StrelArray_data;
  cell_wrap_26 *offsets_data;
  cell_wrap_27 subs[3];
  emxArray_cell_wrap_1 *expl_temp;
  emxArray_cell_wrap_26 *offsets;
  emxArray_int32_T *idx;
  emxArray_int32_T *ii;
  emxArray_int32_T *varargout_6;
  emxArray_int32_T *vk;
  emxArray_real_T *a;
  emxArray_real_T *minval;
  emxArray_real_T *offsets_;
  double *a_data;
  double *offsets__data;
  int center[3];
  int b_idx;
  int b_ii;
  int i;
  int i1;
  int i2;
  int k;
  int nx;
  int sInd;
  int *idx_data;
  int *ii_data;
  int *varargout_6_data;
  d_emxInit_images_internal_coder(&seq_StrelArray);
  emxInit_cell_wrap_1(&expl_temp);
  strel_decomposeImpl(obj_StrelArray, obj_DecomposedStrelArray, seq_StrelArray,
                      expl_temp);
  seq_StrelArray_data = seq_StrelArray->data;
  emxFree_cell_wrap_1(&expl_temp);
  i = seq_StrelArray->size[1];
  emxInit_cell_wrap_26(&offsets);
  i1 = offsets->size[0] * offsets->size[1];
  offsets->size[0] = 1;
  offsets->size[1] = seq_StrelArray->size[1];
  emxEnsureCapacity_cell_wrap_26(offsets, i1);
  offsets_data = offsets->data;
  emxInit_int32_T(&idx);
  emxInitMatrix_cell_wrap_27(subs);
  emxInit_real_T(&offsets_, 2);
  emxInit_int32_T(&ii);
  emxInit_int32_T(&varargout_6);
  emxInit_int32_T(&vk);
  emxInit_real_T(&a, 2);
  if (i - 1 >= 0) {
    center[2] = 1;
  }
  for (sInd = 0; sInd < i; sInd++) {
    unsigned int size_nhood_idx_0;
    if (seq_StrelArray_data[sInd].nhood->size[0] == 1) {
      boolean_T exitg1;
      nx = seq_StrelArray_data[sInd].nhood->size[0] *
           seq_StrelArray_data[sInd].nhood->size[1];
      b_idx = 0;
      i1 = ii->size[0];
      ii->size[0] = nx;
      emxEnsureCapacity_int32_T(ii, i1);
      ii_data = ii->data;
      b_ii = 0;
      exitg1 = false;
      while ((!exitg1) && (b_ii <= nx - 1)) {
        if (seq_StrelArray_data[sInd].nhood->data[b_ii]) {
          b_idx++;
          ii_data[b_idx - 1] = b_ii + 1;
          if (b_idx >= nx) {
            exitg1 = true;
          } else {
            b_ii++;
          }
        } else {
          b_ii++;
        }
      }
      if (nx == 1) {
        if (b_idx == 0) {
          ii->size[0] = 0;
        }
      } else {
        i1 = ii->size[0];
        if (b_idx < 1) {
          ii->size[0] = 0;
        } else {
          ii->size[0] = b_idx;
        }
        emxEnsureCapacity_int32_T(ii, i1);
        ii_data = ii->data;
      }
      i1 = idx->size[0];
      idx->size[0] = ii->size[0];
      emxEnsureCapacity_int32_T(idx, i1);
      idx_data = idx->data;
      b_idx = ii->size[0];
      for (i1 = 0; i1 < b_idx; i1++) {
        idx_data[i1] = ii_data[i1];
      }
    } else {
      boolean_T exitg1;
      nx = seq_StrelArray_data[sInd].nhood->size[0] *
           seq_StrelArray_data[sInd].nhood->size[1];
      b_idx = 0;
      i1 = ii->size[0];
      ii->size[0] = nx;
      emxEnsureCapacity_int32_T(ii, i1);
      ii_data = ii->data;
      b_ii = 0;
      exitg1 = false;
      while ((!exitg1) && (b_ii <= nx - 1)) {
        if (seq_StrelArray_data[sInd].nhood->data[b_ii]) {
          b_idx++;
          ii_data[b_idx - 1] = b_ii + 1;
          if (b_idx >= nx) {
            exitg1 = true;
          } else {
            b_ii++;
          }
        } else {
          b_ii++;
        }
      }
      if (nx == 1) {
        if (b_idx == 0) {
          ii->size[0] = 0;
        }
      } else {
        i1 = ii->size[0];
        if (b_idx < 1) {
          ii->size[0] = 0;
        } else {
          ii->size[0] = b_idx;
        }
        emxEnsureCapacity_int32_T(ii, i1);
        ii_data = ii->data;
      }
      i1 = idx->size[0];
      idx->size[0] = ii->size[0];
      emxEnsureCapacity_int32_T(idx, i1);
      idx_data = idx->data;
      b_idx = ii->size[0];
      for (i1 = 0; i1 < b_idx; i1++) {
        idx_data[i1] = ii_data[i1];
      }
    }
    size_nhood_idx_0 = (unsigned int)seq_StrelArray_data[sInd].nhood->size[0];
    center[0] = (int)floor(
        ((double)seq_StrelArray_data[sInd].nhood->size[0] + 1.0) / 2.0);
    center[1] = (int)floor(
        ((double)seq_StrelArray_data[sInd].nhood->size[1] + 1.0) / 2.0);
    nx = (int)size_nhood_idx_0 * seq_StrelArray_data[sInd].nhood->size[1];
    i1 = ii->size[0];
    ii->size[0] = idx->size[0];
    emxEnsureCapacity_int32_T(ii, i1);
    ii_data = ii->data;
    b_idx = idx->size[0];
    for (i1 = 0; i1 < b_idx; i1++) {
      ii_data[i1] = idx_data[i1] - 1;
    }
    i1 = vk->size[0];
    vk->size[0] = ii->size[0];
    emxEnsureCapacity_int32_T(vk, i1);
    idx_data = vk->data;
    b_idx = ii->size[0];
    for (i1 = 0; i1 < b_idx; i1++) {
      idx_data[i1] = div_s32(ii_data[i1], nx);
    }
    i1 = varargout_6->size[0];
    varargout_6->size[0] = vk->size[0];
    emxEnsureCapacity_int32_T(varargout_6, i1);
    varargout_6_data = varargout_6->data;
    b_idx = vk->size[0];
    for (i1 = 0; i1 < b_idx; i1++) {
      varargout_6_data[i1] = idx_data[i1] + 1;
      ii_data[i1] -= idx_data[i1] * nx;
    }
    i1 = vk->size[0];
    vk->size[0] = ii->size[0];
    emxEnsureCapacity_int32_T(vk, i1);
    idx_data = vk->data;
    b_idx = ii->size[0];
    for (i1 = 0; i1 < b_idx; i1++) {
      i2 = div_s32(ii_data[i1], (int)size_nhood_idx_0);
      idx_data[i1] = i2;
      ii_data[i1] -= i2 * (int)size_nhood_idx_0;
    }
    i1 = subs[0].f1->size[0];
    subs[0].f1->size[0] = ii->size[0];
    emxEnsureCapacity_real_T(subs[0].f1, i1);
    b_idx = ii->size[0];
    i1 = subs[1].f1->size[0];
    subs[1].f1->size[0] = vk->size[0];
    emxEnsureCapacity_real_T(subs[1].f1, i1);
    i1 = subs[2].f1->size[0];
    subs[2].f1->size[0] = varargout_6->size[0];
    emxEnsureCapacity_real_T(subs[2].f1, i1);
    for (i1 = 0; i1 < b_idx; i1++) {
      subs[0].f1->data[i1] = ii_data[i1] + 1;
      subs[1].f1->data[i1] = idx_data[i1] + 1;
      subs[2].f1->data[i1] = varargout_6_data[i1];
    }
    i1 = offsets_->size[0] * offsets_->size[1];
    offsets_->size[0] = subs[0].f1->size[0];
    offsets_->size[1] = 3;
    emxEnsureCapacity_real_T(offsets_, i1);
    offsets__data = offsets_->data;
    nx = 1;
    for (b_ii = 0; b_ii < 3; b_ii++) {
      i1 = subs[b_ii].f1->size[0] - 1;
      for (b_idx = 0; b_idx <= i1; b_idx++) {
        offsets__data[(nx + b_idx) - 1] = subs[b_ii].f1->data[b_idx];
      }
      if (subs[b_ii].f1->size[0] - 1 >= 0) {
        nx += subs[b_ii].f1->size[0];
      }
    }
    i1 = a->size[0] * a->size[1];
    a->size[0] = idx->size[0];
    a->size[1] = 3;
    emxEnsureCapacity_real_T(a, i1);
    a_data = a->data;
    b_idx = idx->size[0] * 3;
    for (i1 = 0; i1 < b_idx; i1++) {
      a_data[i1] = offsets__data[i1];
    }
    i1 = offsets_->size[0] * offsets_->size[1];
    offsets_->size[0] = idx->size[0];
    offsets_->size[1] = 3;
    emxEnsureCapacity_real_T(offsets_, i1);
    offsets__data = offsets_->data;
    if (idx->size[0] != 0) {
      nx = (a->size[0] != 1);
      for (k = 0; k < 3; k++) {
        i1 = offsets_->size[0] - 1;
        for (b_ii = 0; b_ii <= i1; b_ii++) {
          offsets__data[b_ii + offsets_->size[0] * k] =
              a_data[nx * b_ii + a->size[0] * k] - (double)center[k];
        }
      }
    }
    b_idx = offsets_->size[0];
    i1 = offsets_data[sInd].f1->size[0] * offsets_data[sInd].f1->size[1];
    offsets_data[sInd].f1->size[0] = offsets_->size[0];
    offsets_data[sInd].f1->size[1] = 2;
    emxEnsureCapacity_real_T(offsets_data[sInd].f1, i1);
    for (i1 = 0; i1 < 2; i1++) {
      for (i2 = 0; i2 < b_idx; i2++) {
        offsets_data[sInd].f1->data[i2 + offsets_data[sInd].f1->size[0] * i1] =
            offsets__data[i2 + offsets_->size[0] * i1];
      }
    }
  }
  emxFree_real_T(&a);
  emxFree_int32_T(&vk);
  emxFree_int32_T(&varargout_6);
  emxFree_int32_T(&ii);
  emxFree_real_T(&offsets_);
  emxFreeMatrix_cell_wrap_27(subs);
  emxFree_int32_T(&idx);
  c_emxFree_images_internal_coder(&seq_StrelArray);
  if (offsets->size[1] == 0) {
    pad_ul_size[0] = 1;
    pad_ul_size[1] = 2;
    pad_lr_size[0] = 1;
    pad_lr_size[1] = 2;
    pad_ul_data[0] = 0.0;
    pad_lr_data[0] = 0.0;
    pad_ul_data[1] = 0.0;
    pad_lr_data[1] = 0.0;
  } else {
    i = offsets->size[1];
    for (k = 0; k < i; k++) {
      boolean_T b;
      boolean_T empty_non_axis_sizes;
      b = ((offsets_data[k].f1->size[0] != 0) &&
           (offsets_data[k].f1->size[1] != 0));
      if (b) {
        nx = offsets_data[k].f1->size[0];
      } else if ((offsets_data[k].f1->size[0] != 0) &&
                 (2 - offsets_data[k].f1->size[1] != 0)) {
        nx = offsets_data[k].f1->size[0];
      } else {
        nx = offsets_data[k].f1->size[0];
        if (offsets_data[k].f1->size[0] > nx) {
          nx = offsets_data[k].f1->size[0];
        }
      }
      empty_non_axis_sizes = (nx == 0);
      if (empty_non_axis_sizes || b) {
        b_idx = offsets_data[k].f1->size[1];
      } else {
        b_idx = 0;
      }
      if (empty_non_axis_sizes || ((offsets_data[k].f1->size[0] != 0) &&
                                   (2 - offsets_data[k].f1->size[1] != 0))) {
        b_ii = 2 - offsets_data[k].f1->size[1];
      } else {
        b_ii = 0;
      }
      for (i1 = 0; i1 < b_idx; i1++) {
        for (i2 = 0; i2 < nx; i2++) {
          offsets_data[k].f1->data[i2 + offsets_data[k].f1->size[0] * i1] =
              offsets_data[k].f1->data[i2 + nx * i1];
        }
      }
      i1 = offsets_data[k].f1->size[0] * offsets_data[k].f1->size[1];
      offsets_data[k].f1->size[0] = nx;
      offsets_data[k].f1->size[1] = b_idx + b_ii;
      emxEnsureCapacity_real_T(offsets_data[k].f1, i1);
      for (i1 = 0; i1 < b_ii; i1++) {
        for (i2 = 0; i2 < nx; i2++) {
          offsets_data[k]
              .f1->data[i2 + offsets_data[k].f1->size[0] * (i1 + b_idx)] = 0.0;
        }
      }
    }
    pad_ul_size[0] = 1;
    pad_ul_size[1] = 2;
    pad_lr_size[0] = 1;
    pad_lr_size[1] = 2;
    pad_ul_data[0] = 0.0;
    pad_lr_data[0] = 0.0;
    pad_ul_data[1] = 0.0;
    pad_lr_data[1] = 0.0;
    i = offsets->size[1];
    emxInit_real_T(&minval, 2);
    for (k = 0; k < i; k++) {
      i1 = offsets_data[k].f1->size[0];
      i2 = offsets_data[k].f1->size[1];
      if ((offsets_data[k].f1->size[0] != 0) &&
          (offsets_data[k].f1->size[1] != 0)) {
        double b_b;
        nx = minval->size[0] * minval->size[1];
        minval->size[0] = 1;
        minval->size[1] = offsets_data[k].f1->size[1];
        emxEnsureCapacity_real_T(minval, nx);
        offsets__data = minval->data;
        if (offsets_data[k].f1->size[1] >= 1) {
          for (b_ii = 0; b_ii < i2; b_ii++) {
            offsets__data[b_ii] =
                offsets_data[k].f1->data[offsets_data[k].f1->size[0] * b_ii];
            for (b_idx = 2; b_idx <= i1; b_idx++) {
              b_b =
                  offsets_data[k]
                      .f1
                      ->data[(b_idx + offsets_data[k].f1->size[0] * b_ii) - 1];
              if (offsets__data[b_ii] > b_b) {
                offsets__data[b_ii] = b_b;
              }
            }
          }
        }
        pad_ul_size[0] = 1;
        pad_ul_size[1] = 2;
        b_b = -offsets__data[0];
        pad_ul_data[0] += fmax(0.0, b_b);
        b_b = -offsets__data[1];
        pad_ul_data[1] += fmax(0.0, b_b);
        nx = offsets_data[k].f1->size[0];
        i1 = offsets_data[k].f1->size[1];
        i2 = minval->size[0] * minval->size[1];
        minval->size[0] = 1;
        minval->size[1] = offsets_data[k].f1->size[1];
        emxEnsureCapacity_real_T(minval, i2);
        offsets__data = minval->data;
        if (offsets_data[k].f1->size[1] >= 1) {
          for (b_ii = 0; b_ii < i1; b_ii++) {
            offsets__data[b_ii] =
                offsets_data[k].f1->data[offsets_data[k].f1->size[0] * b_ii];
            for (b_idx = 2; b_idx <= nx; b_idx++) {
              b_b =
                  offsets_data[k]
                      .f1
                      ->data[(b_idx + offsets_data[k].f1->size[0] * b_ii) - 1];
              if (offsets__data[b_ii] < b_b) {
                offsets__data[b_ii] = b_b;
              }
            }
          }
        }
        pad_lr_size[0] = 1;
        pad_lr_size[1] = 2;
        b_b = offsets__data[0];
        pad_lr_data[0] += fmax(0.0, b_b);
        b_b = offsets__data[1];
        pad_lr_data[1] += fmax(0.0, b_b);
      }
    }
    emxFree_real_T(&minval);
  }
  emxFree_cell_wrap_26(&offsets);
}

/*
 * Arguments    : const c_emxArray_images_internal_code *obj_StrelArray
 *                const emxArray_cell_wrap_1 *obj_DecomposedStrelArray
 * Return Type  : boolean_T
 */
boolean_T strel_isdecompositionorthogonal(
    const c_emxArray_images_internal_code *obj_StrelArray,
    const emxArray_cell_wrap_1 *obj_DecomposedStrelArray)
{
  c_emxArray_images_internal_code *seq_StrelArray;
  c_images_internal_coder_strel_S *seq_StrelArray_data;
  emxArray_boolean_T *x;
  emxArray_cell_wrap_1 *expl_temp;
  emxArray_uint32_T *P;
  int nz[3];
  int i;
  int sInd;
  int vlen;
  int xpageoffset;
  unsigned int *P_data;
  boolean_T b_x[3];
  boolean_T TF;
  boolean_T exitg1;
  boolean_T *x_data;
  d_emxInit_images_internal_coder(&seq_StrelArray);
  emxInit_cell_wrap_1(&expl_temp);
  strel_decomposeImpl(obj_StrelArray, obj_DecomposedStrelArray, seq_StrelArray,
                      expl_temp);
  seq_StrelArray_data = seq_StrelArray->data;
  emxFree_cell_wrap_1(&expl_temp);
  emxInit_uint32_T(&P);
  vlen = P->size[0] * P->size[1];
  P->size[0] = seq_StrelArray->size[1];
  P->size[1] = 3;
  emxEnsureCapacity_uint32_T(P, vlen);
  P_data = P->data;
  xpageoffset = seq_StrelArray->size[1] * 3;
  for (vlen = 0; vlen < xpageoffset; vlen++) {
    P_data[vlen] = 1U;
  }
  vlen = seq_StrelArray->size[1];
  for (sInd = 0; sInd < vlen; sInd++) {
    P_data[sInd] = (unsigned int)seq_StrelArray_data[sInd].nhood->size[0];
    P_data[sInd + P->size[0]] =
        (unsigned int)seq_StrelArray_data[sInd].nhood->size[1];
    P_data[sInd + P->size[0] * 2] = 1U;
  }
  c_emxFree_images_internal_coder(&seq_StrelArray);
  vlen = P->size[0] * 3 - 1;
  for (i = 0; i <= vlen; i++) {
    if ((int)P_data[i] == 0) {
      P_data[i] = 1U;
    }
  }
  emxInit_boolean_T(&x, 2);
  vlen = x->size[0] * x->size[1];
  x->size[0] = P->size[0];
  x->size[1] = 3;
  emxEnsureCapacity_boolean_T(x, vlen);
  x_data = x->data;
  for (vlen = 0; vlen < xpageoffset; vlen++) {
    x_data[vlen] = ((int)P_data[vlen] != 1);
  }
  emxFree_uint32_T(&P);
  vlen = x->size[0];
  if (x->size[0] == 0) {
    nz[0] = 0;
    nz[1] = 0;
    nz[2] = 0;
  } else {
    for (i = 0; i < 3; i++) {
      xpageoffset = i * x->size[0];
      nz[i] = x_data[xpageoffset];
      for (sInd = 2; sInd <= vlen; sInd++) {
        nz[i] += x_data[(xpageoffset + sInd) - 1];
      }
    }
  }
  emxFree_boolean_T(&x);
  b_x[0] = (nz[0] == 1);
  b_x[1] = (nz[1] == 1);
  b_x[2] = (nz[2] == 1);
  TF = false;
  sInd = 0;
  exitg1 = false;
  while ((!exitg1) && (sInd < 3)) {
    if (b_x[sInd]) {
      TF = true;
      exitg1 = true;
    } else {
      sInd++;
    }
  }
  return TF;
}

/*
 * Arguments    : strel *obj
 *                double idx
 * Return Type  : void
 */
void strel_parenReference(strel *obj, double idx)
{
  d_emxArray_images_internal_code strelArray;
  emxArray_cell_wrap_1_1x1 decomposedStrelArray;
  int i;
  int loop_ub;
  c_emxInit_images_internal_coder(&strelArray);
  i = strelArray.size[0] * strelArray.size[1];
  strelArray.size[0] = 1;
  strelArray.size[1] = 1;
  c_emxEnsureCapacity_images_inte(&strelArray.data[0], strelArray.size, i);
  c_emxCopyStruct_images_internal(&strelArray.data[0],
                                  &obj->StrelArray->data[(int)idx - 1]);
  emxInit_cell_wrap_1_1x1(&decomposedStrelArray);
  i = decomposedStrelArray.size[0] * decomposedStrelArray.size[1];
  decomposedStrelArray.size[0] = 1;
  decomposedStrelArray.size[1] = 1;
  emxEnsureCapacity_cell_wrap_1(&decomposedStrelArray.data[0],
                                decomposedStrelArray.size, i);
  i = decomposedStrelArray.data[0].f1->size[0] *
      decomposedStrelArray.data[0].f1->size[1];
  decomposedStrelArray.data[0].f1->size[0] = 1;
  decomposedStrelArray.data[0].f1->size[1] =
      obj->DecomposedStrelArray->data[(int)idx - 1].f1->size[1];
  d_emxEnsureCapacity_images_inte(decomposedStrelArray.data[0].f1, i);
  loop_ub = obj->DecomposedStrelArray->data[(int)idx - 1].f1->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_emxCopyStruct_images_internal(
        &decomposedStrelArray.data[0].f1->data[i],
        &obj->DecomposedStrelArray->data[(int)idx - 1].f1->data[i]);
  }
  i = obj->StrelArray->size[0] * obj->StrelArray->size[1];
  obj->StrelArray->size[0] = 1;
  obj->StrelArray->size[1] = 1;
  d_emxEnsureCapacity_images_inte(obj->StrelArray, i);
  c_emxCopyStruct_images_internal(&obj->StrelArray->data[0],
                                  &strelArray.data[0]);
  d_emxFree_images_internal_coder(&strelArray);
  i = obj->DecomposedStrelArray->size[0] * obj->DecomposedStrelArray->size[1];
  obj->DecomposedStrelArray->size[0] = 1;
  obj->DecomposedStrelArray->size[1] = 1;
  emxEnsureCapacity_cell_wrap_11(obj->DecomposedStrelArray, i);
  emxCopyStruct_cell_wrap_1(&obj->DecomposedStrelArray->data[0],
                            &decomposedStrelArray.data[0]);
  emxFree_cell_wrap_1_1x1(&decomposedStrelArray);
}

/*
 * Arguments    : double varargin_2
 *                c_emxArray_images_internal_code *obj_StrelArray
 *                emxArray_cell_wrap_1 *obj_DecomposedStrelArray
 * Return Type  : void
 */
void strel_strel(double varargin_2,
                 c_emxArray_images_internal_code *obj_StrelArray,
                 emxArray_cell_wrap_1 *obj_DecomposedStrelArray)
{
  static const boolean_T logicalNhood[9] = {false, true,  false, true, true,
                                            true,  false, true,  false};
  c_emxArray_images_internal_code *tempStrelArray;
  c_images_internal_coder_strel_S *tempStrelArray_data;
  cell_wrap_1 *obj_DecomposedStrelArray_data;
  d_emxArray_images_internal_code strelArray;
  emxArray_boolean_T *b_nhood;
  emxArray_boolean_T *t0_nhood;
  emxArray_cell_wrap_1_1x1 decomposedStrelArray;
  emxArray_int8_T *t0_height;
  emxArray_real_T *cc;
  emxArray_real_T *nhood;
  emxArray_real_T *r;
  emxArray_real_T *y;
  double apnd;
  double cdiff;
  double ndbl;
  double *cc_data;
  double *nhood_data;
  double *y_data;
  int eint;
  int i;
  int k;
  int n;
  int nm1d2;
  unsigned int unnamed_idx_0_tmp;
  signed char *t0_height_data;
  boolean_T *b_nhood_data;
  boolean_T *t0_nhood_data;
  d_emxInit_images_internal_coder(&tempStrelArray);
  tempStrelArray_data = tempStrelArray->data;
  tempStrelArray->size[0] = 1;
  tempStrelArray->size[1] = 0;
  emxInit_real_T(&y, 2);
  y_data = y->data;
  if (rtIsNaN(-varargin_2) || rtIsNaN(varargin_2)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, i);
    y_data = y->data;
    y_data[0] = rtNaN;
  } else if (varargin_2 < -varargin_2) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else if ((rtIsInf(-varargin_2) || rtIsInf(varargin_2)) &&
             (-varargin_2 == varargin_2)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, i);
    y_data = y->data;
    y_data[0] = rtNaN;
  } else if (floor(-varargin_2) == -varargin_2) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    nm1d2 = (int)(varargin_2 - (-varargin_2));
    y->size[1] = nm1d2 + 1;
    emxEnsureCapacity_real_T(y, i);
    y_data = y->data;
    for (i = 0; i <= nm1d2; i++) {
      y_data[i] = -varargin_2 + (double)i;
    }
  } else {
    ndbl = floor((varargin_2 - (-varargin_2)) + 0.5);
    apnd = -varargin_2 + ndbl;
    cdiff = apnd - varargin_2;
    if (fabs(cdiff) <
        4.4408920985006262E-16 * fmax(fabs(-varargin_2), fabs(varargin_2))) {
      ndbl++;
      apnd = varargin_2;
    } else if (cdiff > 0.0) {
      apnd = -varargin_2 + (ndbl - 1.0);
    } else {
      ndbl++;
    }
    if (ndbl >= 0.0) {
      n = (int)ndbl;
    } else {
      n = 0;
    }
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = n;
    emxEnsureCapacity_real_T(y, i);
    y_data = y->data;
    if (n > 0) {
      y_data[0] = -varargin_2;
      if (n > 1) {
        y_data[n - 1] = apnd;
        nm1d2 = (n - 1) / 2;
        for (k = 0; k <= nm1d2 - 2; k++) {
          y_data[k + 1] = -varargin_2 + ((double)k + 1.0);
          y_data[(n - k) - 2] = apnd - ((double)k + 1.0);
        }
        if (nm1d2 << 1 == n - 1) {
          y_data[nm1d2] = (-varargin_2 + apnd) / 2.0;
        } else {
          y_data[nm1d2] = -varargin_2 + (double)nm1d2;
          y_data[nm1d2 + 1] = apnd - (double)nm1d2;
        }
      }
    }
  }
  nm1d2 = y->size[1] - 1;
  emxInit_real_T(&nhood, 2);
  i = nhood->size[0] * nhood->size[1];
  nhood->size[0] = y->size[1];
  nhood->size[1] = y->size[1];
  emxEnsureCapacity_real_T(nhood, i);
  nhood_data = nhood->data;
  emxInit_real_T(&cc, 2);
  i = cc->size[0] * cc->size[1];
  cc->size[0] = y->size[1];
  cc->size[1] = y->size[1];
  emxEnsureCapacity_real_T(cc, i);
  cc_data = cc->data;
  if (y->size[1] != 0) {
    for (n = 0; n <= nm1d2; n++) {
      for (k = 0; k <= nm1d2; k++) {
        nhood_data[k + nhood->size[0] * n] = y_data[n];
        cc_data[k + cc->size[0] * n] = y_data[k];
      }
    }
  }
  emxFree_real_T(&y);
  nm1d2 = nhood->size[0] * nhood->size[1];
  unnamed_idx_0_tmp = (unsigned int)nhood->size[0];
  emxInit_real_T(&r, 2);
  i = r->size[0] * r->size[1];
  r->size[0] = nhood->size[0];
  r->size[1] = nhood->size[0];
  emxEnsureCapacity_real_T(r, i);
  y_data = r->data;
  for (k = 0; k < nm1d2; k++) {
    y_data[k] = fabs(nhood_data[k]);
  }
  i = nhood->size[0] * nhood->size[1];
  nhood->size[0] = (int)unnamed_idx_0_tmp;
  nhood->size[1] = (int)unnamed_idx_0_tmp;
  emxEnsureCapacity_real_T(nhood, i);
  nhood_data = nhood->data;
  for (k = 0; k < nm1d2; k++) {
    nhood_data[k] = fabs(cc_data[k]);
  }
  emxFree_real_T(&cc);
  emxInit_boolean_T(&b_nhood, 2);
  if ((r->size[0] == nhood->size[0]) && (r->size[1] == nhood->size[1])) {
    i = b_nhood->size[0] * b_nhood->size[1];
    b_nhood->size[0] = r->size[0];
    b_nhood->size[1] = r->size[1];
    emxEnsureCapacity_boolean_T(b_nhood, i);
    b_nhood_data = b_nhood->data;
    nm1d2 = r->size[0] * r->size[1];
    for (i = 0; i < nm1d2; i++) {
      b_nhood_data[i] = (y_data[i] + nhood_data[i] <= varargin_2);
    }
  } else {
    binary_expand_op(b_nhood, r, nhood, varargin_2);
    b_nhood_data = b_nhood->data;
  }
  emxFree_real_T(&r);
  emxInit_boolean_T(&t0_nhood, 3);
  i = t0_nhood->size[0] * t0_nhood->size[1] * t0_nhood->size[2];
  t0_nhood->size[0] = b_nhood->size[0];
  t0_nhood->size[1] = b_nhood->size[1];
  t0_nhood->size[2] = 1;
  emxEnsureCapacity_boolean_T(t0_nhood, i);
  t0_nhood_data = t0_nhood->data;
  nm1d2 = b_nhood->size[0] * b_nhood->size[1];
  for (i = 0; i < nm1d2; i++) {
    t0_nhood_data[i] = b_nhood_data[i];
  }
  emxInit_int8_T(&t0_height);
  i = t0_height->size[0] * t0_height->size[1] * t0_height->size[2];
  t0_height->size[0] = b_nhood->size[0];
  t0_height->size[1] = b_nhood->size[1];
  t0_height->size[2] = 1;
  emxEnsureCapacity_int8_T(t0_height, i);
  t0_height_data = t0_height->data;
  n = b_nhood->size[0] * b_nhood->size[1];
  emxFree_boolean_T(&b_nhood);
  for (i = 0; i < n; i++) {
    t0_height_data[i] = 0;
  }
  c_emxInit_images_internal_coder(&strelArray);
  i = strelArray.size[0] * strelArray.size[1];
  strelArray.size[0] = 1;
  strelArray.size[1] = 1;
  c_emxEnsureCapacity_images_inte(&strelArray.data[0], strelArray.size, i);
  i = strelArray.data[0].nhood->size[0] * strelArray.data[0].nhood->size[1] *
      strelArray.data[0].nhood->size[2];
  strelArray.data[0].nhood->size[0] = t0_nhood->size[0];
  strelArray.data[0].nhood->size[1] = t0_nhood->size[1];
  strelArray.data[0].nhood->size[2] = 1;
  emxEnsureCapacity_boolean_T(strelArray.data[0].nhood, i);
  for (i = 0; i < nm1d2; i++) {
    strelArray.data[0].nhood->data[i] = t0_nhood_data[i];
  }
  i = strelArray.data[0].height->size[0] * strelArray.data[0].height->size[1] *
      strelArray.data[0].height->size[2];
  strelArray.data[0].height->size[0] = t0_height->size[0];
  strelArray.data[0].height->size[1] = t0_height->size[1];
  strelArray.data[0].height->size[2] = 1;
  emxEnsureCapacity_real_T(strelArray.data[0].height, i);
  for (i = 0; i < n; i++) {
    strelArray.data[0].height->data[i] = 0.0;
  }
  strelArray.data[0].Flat = true;
  if (varargin_2 > 2.0) {
    if (!rtIsInf(varargin_2)) {
      ndbl = frexp(varargin_2, &eint);
      if (ndbl == 0.5) {
        ndbl = (double)eint - 1.0;
      } else if ((eint == 1) && (ndbl < 0.75)) {
        ndbl = log(2.0 * ndbl) / 0.69314718055994529;
      } else {
        ndbl = log(ndbl) / 0.69314718055994529 + (double)eint;
      }
    } else {
      ndbl = varargin_2;
    }
    ndbl = floor(ndbl);
    i = t0_nhood->size[0] * t0_nhood->size[1] * t0_nhood->size[2];
    t0_nhood->size[0] = 3;
    t0_nhood->size[1] = 3;
    t0_nhood->size[2] = 1;
    emxEnsureCapacity_boolean_T(t0_nhood, i);
    t0_nhood_data = t0_nhood->data;
    for (i = 0; i < 9; i++) {
      t0_nhood_data[i] = logicalNhood[i];
    }
    i = tempStrelArray->size[0] * tempStrelArray->size[1];
    tempStrelArray->size[0] = 1;
    tempStrelArray->size[1] = 1;
    d_emxEnsureCapacity_images_inte(tempStrelArray, i);
    tempStrelArray_data = tempStrelArray->data;
    i = tempStrelArray_data[0].nhood->size[0] *
        tempStrelArray_data[0].nhood->size[1] *
        tempStrelArray_data[0].nhood->size[2];
    tempStrelArray_data[0].nhood->size[0] = 3;
    tempStrelArray_data[0].nhood->size[1] = 3;
    tempStrelArray_data[0].nhood->size[2] = 1;
    emxEnsureCapacity_boolean_T(tempStrelArray_data[0].nhood, i);
    for (i = 0; i < 9; i++) {
      tempStrelArray_data[0].nhood->data[i] = t0_nhood_data[i];
    }
    i = tempStrelArray_data[0].height->size[0] *
        tempStrelArray_data[0].height->size[1] *
        tempStrelArray_data[0].height->size[2];
    tempStrelArray_data[0].height->size[0] = 3;
    tempStrelArray_data[0].height->size[1] = 3;
    tempStrelArray_data[0].height->size[2] = 1;
    emxEnsureCapacity_real_T(tempStrelArray_data[0].height, i);
    for (i = 0; i < 9; i++) {
      tempStrelArray_data[0].height->data[i] = 0.0;
    }
    tempStrelArray_data[0].Flat = true;
    i = (int)((ndbl - 1.0) + 1.0);
    for (k = 0; k < i; k++) {
      apnd = rt_powd_snf(2.0, (double)k + 1.0);
      cdiff = ((apnd + 1.0) + 1.0) / 2.0;
      n = nhood->size[0] * nhood->size[1];
      nhood->size[0] = (int)(apnd + 1.0);
      nhood->size[1] = (int)(apnd + 1.0);
      emxEnsureCapacity_real_T(nhood, n);
      nhood_data = nhood->data;
      nm1d2 = (int)(apnd + 1.0) * (int)(apnd + 1.0);
      for (n = 0; n < nm1d2; n++) {
        nhood_data[n] = 0.0;
      }
      nhood_data[nhood->size[0] * ((int)cdiff - 1)] = 1.0;
      nhood_data[((int)(apnd + 1.0) + nhood->size[0] * ((int)cdiff - 1)) - 1] =
          1.0;
      nhood_data[(int)cdiff - 1] = 1.0;
      nhood_data[((int)cdiff + nhood->size[0] * ((int)(apnd + 1.0) - 1)) - 1] =
          1.0;
      nm1d2 = tempStrelArray->size[1] + 1;
      n = tempStrelArray->size[0] * tempStrelArray->size[1];
      tempStrelArray->size[0] = 1;
      tempStrelArray->size[1]++;
      d_emxEnsureCapacity_images_inte(tempStrelArray, n);
      tempStrelArray_data = tempStrelArray->data;
      tempStrelArray_data[nm1d2 - 1].Flat =
          StrelImpl_StrelImpl(nhood, tempStrelArray_data[nm1d2 - 1].nhood,
                              tempStrelArray_data[nm1d2 - 1].height);
    }
    ndbl = varargin_2 - rt_powd_snf(2.0, ndbl);
    if (ndbl > 0.0) {
      ndbl = 2.0 * ndbl + 1.0;
      cdiff = (ndbl + 1.0) / 2.0;
      i = nhood->size[0] * nhood->size[1];
      nhood->size[0] = (int)ndbl;
      nhood->size[1] = (int)ndbl;
      emxEnsureCapacity_real_T(nhood, i);
      nhood_data = nhood->data;
      nm1d2 = (int)ndbl * (int)ndbl;
      for (i = 0; i < nm1d2; i++) {
        nhood_data[i] = 0.0;
      }
      nhood_data[nhood->size[0] * ((int)cdiff - 1)] = 1.0;
      nhood_data[((int)ndbl + nhood->size[0] * ((int)cdiff - 1)) - 1] = 1.0;
      nhood_data[(int)cdiff - 1] = 1.0;
      nhood_data[((int)cdiff + nhood->size[0] * ((int)ndbl - 1)) - 1] = 1.0;
      nm1d2 = tempStrelArray->size[1] + 1;
      i = tempStrelArray->size[0] * tempStrelArray->size[1];
      tempStrelArray->size[0] = 1;
      tempStrelArray->size[1]++;
      d_emxEnsureCapacity_images_inte(tempStrelArray, i);
      tempStrelArray_data = tempStrelArray->data;
      tempStrelArray_data[nm1d2 - 1].Flat =
          StrelImpl_StrelImpl(nhood, tempStrelArray_data[nm1d2 - 1].nhood,
                              tempStrelArray_data[nm1d2 - 1].height);
    }
  }
  emxFree_real_T(&nhood);
  emxFree_int8_T(&t0_height);
  emxFree_boolean_T(&t0_nhood);
  emxInit_cell_wrap_1_1x1(&decomposedStrelArray);
  i = decomposedStrelArray.size[0] * decomposedStrelArray.size[1];
  decomposedStrelArray.size[0] = 1;
  decomposedStrelArray.size[1] = 1;
  emxEnsureCapacity_cell_wrap_1(&decomposedStrelArray.data[0],
                                decomposedStrelArray.size, i);
  i = decomposedStrelArray.data[0].f1->size[0] *
      decomposedStrelArray.data[0].f1->size[1];
  decomposedStrelArray.data[0].f1->size[0] = 1;
  decomposedStrelArray.data[0].f1->size[1] = tempStrelArray->size[1];
  d_emxEnsureCapacity_images_inte(decomposedStrelArray.data[0].f1, i);
  nm1d2 = tempStrelArray->size[1];
  for (i = 0; i < nm1d2; i++) {
    c_emxCopyStruct_images_internal(&decomposedStrelArray.data[0].f1->data[i],
                                    &tempStrelArray_data[i]);
  }
  c_emxFree_images_internal_coder(&tempStrelArray);
  i = obj_StrelArray->size[0] * obj_StrelArray->size[1];
  obj_StrelArray->size[0] = 1;
  obj_StrelArray->size[1] = 1;
  d_emxEnsureCapacity_images_inte(obj_StrelArray, i);
  tempStrelArray_data = obj_StrelArray->data;
  c_emxCopyStruct_images_internal(&tempStrelArray_data[0], &strelArray.data[0]);
  d_emxFree_images_internal_coder(&strelArray);
  i = obj_DecomposedStrelArray->size[0] * obj_DecomposedStrelArray->size[1];
  obj_DecomposedStrelArray->size[0] = 1;
  obj_DecomposedStrelArray->size[1] = 1;
  emxEnsureCapacity_cell_wrap_11(obj_DecomposedStrelArray, i);
  obj_DecomposedStrelArray_data = obj_DecomposedStrelArray->data;
  emxCopyStruct_cell_wrap_1(&obj_DecomposedStrelArray_data[0],
                            &decomposedStrelArray.data[0]);
  emxFree_cell_wrap_1_1x1(&decomposedStrelArray);
}

/*
 * File trailer for strel.c
 *
 * [EOF]
 */
