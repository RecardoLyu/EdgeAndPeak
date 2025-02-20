/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: imdilate.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:11:08
 */

/* Include Files */
#include "imdilate.h"
#include "any.h"
#include "cell_boundary_data.h"
#include "cell_boundary_emxutil.h"
#include "cell_boundary_types.h"
#include "isequal.h"
#include "padarray.h"
#include "rt_nonfinite.h"
#include "setPackedFillBits.h"
#include "strel.h"
#include "libmwbwpackctbb.h"
#include "libmwbwunpackctbb.h"
#include "libmwmorphop_binary.h"
#include "libmwmorphop_binary_tbb.h"
#include "libmwmorphop_flat_tbb.h"
#include "libmwmorphop_ipp.h"
#include "libmwmorphop_nonflat_tbb.h"
#include "libmwmorphop_packed.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : const unsigned int A[61600]
 *                unsigned int B[61600]
 * Return Type  : void
 */
void b_imdilate(const unsigned int A[61600], unsigned int B[61600])
{
  static unsigned int Apad[64860];
  static unsigned int Apadpack[64860];
  static unsigned int Apadpre[63225];
  static unsigned int b_A[61600];
  double asizeT_tmp[2];
  double nsizeT[2];
  int i;
  boolean_T nhood[5];
  memcpy(&b_A[0], &A[0], 61600U * sizeof(unsigned int));
  d_setPackedFillBits(b_A);
  memset(&Apadpre[0], 0, 225U * sizeof(unsigned int));
  for (i = 0; i < 1400; i++) {
    int Apadpre_tmp;
    Apadpre_tmp = 45 * (i + 5);
    Apadpre[Apadpre_tmp] = 0U;
    memcpy(&Apadpre[Apadpre_tmp + 1], &b_A[i * 44], 44U * sizeof(unsigned int));
  }
  memset(&Apad[64630], 0, 230U * sizeof(unsigned int));
  for (i = 0; i < 1405; i++) {
    Apad[46 * i + 45] = 0U;
    memcpy(&Apad[i * 46], &Apadpre[i * 45], 45U * sizeof(unsigned int));
  }
  for (i = 0; i < 5; i++) {
    nhood[i] = true;
  }
  asizeT_tmp[0] = 46.0;
  nsizeT[0] = 5.0;
  asizeT_tmp[1] = 1410.0;
  nsizeT[1] = 1.0;
  dilate_packed_uint32(&Apad[0], &asizeT_tmp[0], 2.0, &nhood[0], &nsizeT[0],
                       2.0, &Apadpack[0], true);
  nsizeT[0] = 3.0;
  nsizeT[1] = 3.0;
  dilate_packed_uint32(&Apadpack[0], &asizeT_tmp[0], 2.0, &bv2[0], &nsizeT[0],
                       2.0, &Apad[0], true);
  memcpy(&Apadpack[0], &Apad[0], 64860U * sizeof(unsigned int));
  for (i = 0; i < 5; i++) {
    nhood[i] = true;
  }
  boolean_T b_nhood[3];
  nsizeT[0] = 1.0;
  nsizeT[1] = 5.0;
  dilate_packed_uint32(&Apadpack[0], &asizeT_tmp[0], 2.0, &nhood[0], &nsizeT[0],
                       2.0, &Apad[0], true);
  memcpy(&Apadpack[0], &Apad[0], 64860U * sizeof(unsigned int));
  nsizeT[0] = 3.0;
  nsizeT[1] = 3.0;
  dilate_packed_uint32(&Apadpack[0], &asizeT_tmp[0], 2.0, &bv3[0], &nsizeT[0],
                       2.0, &Apad[0], true);
  memcpy(&Apadpack[0], &Apad[0], 64860U * sizeof(unsigned int));
  b_nhood[0] = true;
  b_nhood[1] = true;
  b_nhood[2] = true;
  nsizeT[0] = 1.0;
  nsizeT[1] = 3.0;
  dilate_packed_uint32(&Apadpack[0], &asizeT_tmp[0], 2.0, &b_nhood[0],
                       &nsizeT[0], 2.0, &Apad[0], true);
  memcpy(&Apadpack[0], &Apad[0], 64860U * sizeof(unsigned int));
  b_nhood[0] = true;
  b_nhood[1] = true;
  b_nhood[2] = true;
  nsizeT[0] = 3.0;
  nsizeT[1] = 1.0;
  dilate_packed_uint32(&Apadpack[0], &asizeT_tmp[0], 2.0, &b_nhood[0],
                       &nsizeT[0], 2.0, &Apad[0], true);
  for (i = 0; i < 1400; i++) {
    memcpy(&B[i * 44], &Apad[i * 46 + 231], 44U * sizeof(unsigned int));
  }
}

/*
 * Arguments    : const unsigned int A[61600]
 *                unsigned int B[61600]
 * Return Type  : void
 */
void c_imdilate(const unsigned int A[61600], unsigned int B[61600])
{
  static unsigned int Apad[64584];
  static unsigned int Apadpack[64584];
  static unsigned int Apadpre[63090];
  static unsigned int b_A[61600];
  int j;
  memcpy(&b_A[0], &A[0], 61600U * sizeof(unsigned int));
  d_setPackedFillBits(b_A);
  memset(&Apadpre[0], 0, 90U * sizeof(unsigned int));
  for (j = 0; j < 1400; j++) {
    int Apadpre_tmp;
    Apadpre_tmp = 45 * (j + 2);
    Apadpre[Apadpre_tmp] = 0U;
    memcpy(&Apadpre[Apadpre_tmp + 1], &b_A[j * 44], 44U * sizeof(unsigned int));
  }
  memset(&Apad[64492], 0, 92U * sizeof(unsigned int));
  for (j = 0; j < 1402; j++) {
    Apad[46 * j + 45] = 0U;
    memcpy(&Apad[j * 46], &Apadpre[j * 45], 45U * sizeof(unsigned int));
  }
  double asizeT_tmp[2];
  double b_nsizeT_tmp[2];
  double nsizeT[2];
  double nsizeT_tmp[2];
  boolean_T nhood[3];
  boolean_T b_nhood;
  nhood[0] = true;
  nhood[1] = true;
  nhood[2] = true;
  asizeT_tmp[0] = 46.0;
  nsizeT_tmp[0] = 3.0;
  asizeT_tmp[1] = 1404.0;
  nsizeT_tmp[1] = 1.0;
  dilate_packed_uint32(&Apad[0], &asizeT_tmp[0], 2.0, &nhood[0], &nsizeT_tmp[0],
                       2.0, &Apadpack[0], true);
  b_nhood = true;
  nsizeT[0] = 1.0;
  nsizeT[1] = 1.0;
  dilate_packed_uint32(&Apadpack[0], &asizeT_tmp[0], 2.0, &b_nhood, &nsizeT[0],
                       2.0, &Apad[0], true);
  memcpy(&Apadpack[0], &Apad[0], 64584U * sizeof(unsigned int));
  nhood[0] = true;
  nhood[1] = true;
  nhood[2] = true;
  b_nsizeT_tmp[0] = 1.0;
  b_nsizeT_tmp[1] = 3.0;
  dilate_packed_uint32(&Apadpack[0], &asizeT_tmp[0], 2.0, &nhood[0],
                       &b_nsizeT_tmp[0], 2.0, &Apad[0], true);
  memcpy(&Apadpack[0], &Apad[0], 64584U * sizeof(unsigned int));
  b_nhood = true;
  nsizeT[0] = 1.0;
  nsizeT[1] = 1.0;
  dilate_packed_uint32(&Apadpack[0], &asizeT_tmp[0], 2.0, &b_nhood, &nsizeT[0],
                       2.0, &Apad[0], true);
  memcpy(&Apadpack[0], &Apad[0], 64584U * sizeof(unsigned int));
  nhood[0] = true;
  nhood[1] = true;
  nhood[2] = true;
  dilate_packed_uint32(&Apadpack[0], &asizeT_tmp[0], 2.0, &nhood[0],
                       &b_nsizeT_tmp[0], 2.0, &Apad[0], true);
  memcpy(&Apadpack[0], &Apad[0], 64584U * sizeof(unsigned int));
  nhood[0] = true;
  nhood[1] = true;
  nhood[2] = true;
  dilate_packed_uint32(&Apadpack[0], &asizeT_tmp[0], 2.0, &nhood[0],
                       &nsizeT_tmp[0], 2.0, &Apad[0], true);
  for (j = 0; j < 1400; j++) {
    memcpy(&B[j * 44], &Apad[j * 46 + 93], 44U * sizeof(unsigned int));
  }
}

/*
 * Arguments    : const c_emxArray_images_internal_code *se_StrelArray
 *                const emxArray_cell_wrap_1 *se_DecomposedStrelArray
 *                emxArray_real32_T *B
 * Return Type  : void
 */
void d_imdilate(const c_emxArray_images_internal_code *se_StrelArray,
                const emxArray_cell_wrap_1 *se_DecomposedStrelArray,
                emxArray_real32_T *B)
{
  c_emxArray_images_internal_code *seq_StrelArray;
  c_images_internal_coder_strel_S *seq_StrelArray_data;
  cell_wrap_1 *seq_DecomposedStrelArray_data;
  emxArray_boolean_T *c_obj;
  emxArray_boolean_T *isEachStrelInSE2D;
  emxArray_boolean_T *nhood;
  emxArray_cell_wrap_1 *seq_DecomposedStrelArray;
  emxArray_real32_T *Apad;
  emxArray_real32_T *r;
  emxArray_real_T e_obj;
  emxArray_real_T *allheight;
  emxArray_real_T *d_obj;
  emxArray_real_T *height;
  strel b_obj;
  strel obj;
  double asizeT[2];
  double pad_lr1_data[2];
  double *allheight_data;
  double *height_data;
  float *Apad_data;
  float *B_data;
  int pad_lr1_size[2];
  int pad_ul1_size[2];
  int b_i;
  int f_obj;
  int g_obj;
  int h_obj;
  int i;
  int i1;
  int i2;
  int k;
  int loop_ub;
  int nd2;
  int sInd;
  int tmp_tmp;
  int vstride;
  signed char libNameEnum;
  boolean_T x[3];
  boolean_T exitg1;
  boolean_T strel_is_all_flat;
  boolean_T *nhood_data;
  boolean_T *obj_data;
  e_emxInit_images_internal_coder(&seq_StrelArray);
  emxInit_cell_wrap_1(&seq_DecomposedStrelArray);
  emxInit_boolean_T(&isEachStrelInSE2D, 2);
  strel_decompose(se_StrelArray, se_DecomposedStrelArray, seq_StrelArray,
                  seq_DecomposedStrelArray, isEachStrelInSE2D);
  seq_DecomposedStrelArray_data = seq_DecomposedStrelArray->data;
  seq_StrelArray_data = seq_StrelArray->data;
  emxFree_boolean_T(&isEachStrelInSE2D);
  strel_is_all_flat = true;
  sInd = 0;
  emxInitStruct_strel(&obj);
  exitg1 = false;
  while ((!exitg1) && (sInd <= seq_StrelArray->size[1] - 1)) {
    i = obj.StrelArray->size[0] * obj.StrelArray->size[1];
    obj.StrelArray->size[0] = 1;
    obj.StrelArray->size[1] = seq_StrelArray->size[1];
    d_emxEnsureCapacity_images_inte(obj.StrelArray, i);
    loop_ub = seq_StrelArray->size[1];
    for (i = 0; i < loop_ub; i++) {
      c_emxCopyStruct_images_internal(&obj.StrelArray->data[i],
                                      &seq_StrelArray_data[i]);
    }
    i = obj.DecomposedStrelArray->size[0] * obj.DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[0] = 1;
    obj.DecomposedStrelArray->size[1] = seq_DecomposedStrelArray->size[1];
    emxEnsureCapacity_cell_wrap_11(obj.DecomposedStrelArray, i);
    loop_ub = seq_DecomposedStrelArray->size[1];
    for (i = 0; i < loop_ub; i++) {
      emxCopyStruct_cell_wrap_1(&obj.DecomposedStrelArray->data[i],
                                &seq_DecomposedStrelArray_data[i]);
    }
    strel_parenReference(&obj, (double)sInd + 1.0);
    if (obj.StrelArray->data[0].Flat) {
      sInd++;
    } else {
      strel_is_all_flat = false;
      exitg1 = true;
    }
  }
  i = seq_StrelArray->size[1];
  for (sInd = 0; sInd < i; sInd++) {
    i1 = obj.StrelArray->size[0] * obj.StrelArray->size[1];
    obj.StrelArray->size[0] = 1;
    loop_ub = seq_StrelArray->size[1];
    obj.StrelArray->size[1] = seq_StrelArray->size[1];
    d_emxEnsureCapacity_images_inte(obj.StrelArray, i1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      c_emxCopyStruct_images_internal(&obj.StrelArray->data[i1],
                                      &seq_StrelArray_data[i1]);
    }
    i1 = obj.DecomposedStrelArray->size[0] * obj.DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[0] = 1;
    loop_ub = seq_DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[1] = seq_DecomposedStrelArray->size[1];
    emxEnsureCapacity_cell_wrap_11(obj.DecomposedStrelArray, i1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      emxCopyStruct_cell_wrap_1(&obj.DecomposedStrelArray->data[i1],
                                &seq_DecomposedStrelArray_data[i1]);
    }
    strel_parenReference(&obj, (double)sInd + 1.0);
  }
  if (strel_is_all_flat) {
    libNameEnum = 6;
  } else {
    libNameEnum = 7;
  }
  strel_getpadsize(se_StrelArray, se_DecomposedStrelArray, asizeT, pad_ul1_size,
                   pad_lr1_data, pad_lr1_size);
  emxInit_real32_T(&r);
  padarray(asizeT, r);
  emxInit_real32_T(&Apad);
  b_padarray(r, pad_lr1_data, Apad);
  Apad_data = Apad->data;
  emxFree_real32_T(&r);
  i = B->size[0] * B->size[1];
  B->size[0] = Apad->size[0];
  B->size[1] = Apad->size[1];
  emxEnsureCapacity_real32_T(B, i);
  B_data = B->data;
  i = seq_StrelArray->size[1];
  emxInit_boolean_T(&nhood, 3);
  emxInit_real_T(&allheight, 3);
  emxInit_real_T(&height, 1);
  emxInitStruct_strel(&b_obj);
  emxInit_boolean_T(&c_obj, 2);
  emxInit_real_T(&d_obj, 2);
  if (i - 1 >= 0) {
    x[2] = false;
  }
  for (sInd = 0; sInd < i; sInd++) {
    int n;
    int obj_tmp;
    boolean_T y;
    i1 = obj.StrelArray->size[0] * obj.StrelArray->size[1];
    obj.StrelArray->size[0] = 1;
    loop_ub = seq_StrelArray->size[1];
    obj.StrelArray->size[1] = seq_StrelArray->size[1];
    d_emxEnsureCapacity_images_inte(obj.StrelArray, i1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      c_emxCopyStruct_images_internal(&obj.StrelArray->data[i1],
                                      &seq_StrelArray_data[i1]);
    }
    i1 = obj.DecomposedStrelArray->size[0] * obj.DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[0] = 1;
    loop_ub = seq_DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[1] = seq_DecomposedStrelArray->size[1];
    emxEnsureCapacity_cell_wrap_11(obj.DecomposedStrelArray, i1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      emxCopyStruct_cell_wrap_1(&obj.DecomposedStrelArray->data[i1],
                                &seq_DecomposedStrelArray_data[i1]);
    }
    strel_parenReference(&obj, (double)sInd + 1.0);
    i1 = b_obj.StrelArray->size[0] * b_obj.StrelArray->size[1];
    b_obj.StrelArray->size[0] = 1;
    loop_ub = seq_StrelArray->size[1];
    b_obj.StrelArray->size[1] = seq_StrelArray->size[1];
    d_emxEnsureCapacity_images_inte(b_obj.StrelArray, i1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      c_emxCopyStruct_images_internal(&b_obj.StrelArray->data[i1],
                                      &seq_StrelArray_data[i1]);
    }
    i1 = b_obj.DecomposedStrelArray->size[0] *
         b_obj.DecomposedStrelArray->size[1];
    b_obj.DecomposedStrelArray->size[0] = 1;
    loop_ub = seq_DecomposedStrelArray->size[1];
    b_obj.DecomposedStrelArray->size[1] = seq_DecomposedStrelArray->size[1];
    emxEnsureCapacity_cell_wrap_11(b_obj.DecomposedStrelArray, i1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      emxCopyStruct_cell_wrap_1(&b_obj.DecomposedStrelArray->data[i1],
                                &seq_DecomposedStrelArray_data[i1]);
    }
    strel_parenReference(&b_obj, (double)sInd + 1.0);
    x[0] = (obj.StrelArray->data[0].nhood->size[0] > 200);
    x[1] = (obj.StrelArray->data[0].nhood->size[1] > 200);
    y = false;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 3)) {
      if (x[k]) {
        y = true;
        exitg1 = true;
      } else {
        k++;
      }
    }
    n = 0;
    loop_ub = obj.StrelArray->data[0].nhood->size[0] *
              obj.StrelArray->data[0].nhood->size[1];
    for (k = 0; k < loop_ub; k++) {
      if (obj.StrelArray->data[0].nhood->data[k]) {
        n++;
      }
    }
    obj_tmp = b_obj.StrelArray->data[0].height->size[0] *
              b_obj.StrelArray->data[0].height->size[1];
    e_obj = *b_obj.StrelArray->data[0].height;
    f_obj = obj_tmp;
    e_obj.size = &f_obj;
    e_obj.numDimensions = 1;
    if ((!any(&e_obj)) && (!y) && (!((double)n / (double)loop_ub < 0.05)) &&
        strel_is_all_flat) {
      double nsizeT_data[3];
      double tmp;
      int offset;
      signed char iv[3];
      iv[0] = (signed char)fmod(obj.StrelArray->data[0].nhood->size[0], 2.0);
      iv[1] = (signed char)fmod(obj.StrelArray->data[0].nhood->size[1], 2.0);
      iv[2] = 1;
      y = false;
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k < 3)) {
        if (iv[k] == 0) {
          y = true;
          exitg1 = true;
        } else {
          k++;
        }
      }
      if (y) {
        double d;
        double numColPad;
        tmp =
            ((double)obj.StrelArray->data[0].nhood->size[0] -
             2.0 * ceil((double)obj.StrelArray->data[0].nhood->size[0] / 2.0)) +
            1.0;
        numColPad =
            ((double)obj.StrelArray->data[0].nhood->size[1] -
             2.0 * ceil((double)obj.StrelArray->data[0].nhood->size[1] / 2.0)) +
            1.0;
        i1 = (int)((double)obj.StrelArray->data[0].nhood->size[0] + tmp);
        i2 = nhood->size[0] * nhood->size[1] * nhood->size[2];
        nhood->size[0] = i1;
        k = (int)((double)obj.StrelArray->data[0].nhood->size[1] + numColPad);
        nhood->size[1] = k;
        nhood->size[2] = 1;
        emxEnsureCapacity_boolean_T(nhood, i2);
        nhood_data = nhood->data;
        offset = i1 * k;
        for (i2 = 0; i2 < offset; i2++) {
          nhood_data[i2] = false;
        }
        i2 = allheight->size[0] * allheight->size[1] * allheight->size[2];
        allheight->size[0] = i1;
        allheight->size[1] = k;
        allheight->size[2] = 1;
        emxEnsureCapacity_real_T(allheight, i2);
        allheight_data = allheight->data;
        for (i1 = 0; i1 < offset; i1++) {
          allheight_data[i1] = 0.0;
        }
        d = fmod(tmp, 4.294967296E+9);
        if (d < 0.0) {
          i1 = -(int)(unsigned int)-d;
        } else {
          i1 = (int)(unsigned int)d;
        }
        n = obj.StrelArray->data[0].nhood->size[0] + i1;
        if (tmp + 1.0 > n) {
          i1 = 0;
          i2 = 0;
        } else {
          i1 = (int)(tmp + 1.0) - 1;
          i2 = n;
        }
        d = fmod(numColPad, 4.294967296E+9);
        if (d < 0.0) {
          loop_ub = -(int)(unsigned int)-d;
        } else {
          loop_ub = (int)(unsigned int)d;
        }
        k = obj.StrelArray->data[0].nhood->size[1] + loop_ub;
        if (numColPad + 1.0 > k) {
          obj_tmp = 0;
          tmp_tmp = 0;
        } else {
          obj_tmp = (int)(numColPad + 1.0) - 1;
          tmp_tmp = k;
        }
        loop_ub = obj.StrelArray->data[0].nhood->size[0];
        offset = obj.StrelArray->data[0].nhood->size[1];
        vstride = c_obj->size[0] * c_obj->size[1];
        c_obj->size[0] = obj.StrelArray->data[0].nhood->size[0];
        c_obj->size[1] = obj.StrelArray->data[0].nhood->size[1];
        emxEnsureCapacity_boolean_T(c_obj, vstride);
        obj_data = c_obj->data;
        for (vstride = 0; vstride < offset; vstride++) {
          for (nd2 = 0; nd2 < loop_ub; nd2++) {
            obj_data[nd2 + c_obj->size[0] * vstride] =
                obj.StrelArray->data[0]
                    .nhood->data[nd2 + obj.StrelArray->data[0].nhood->size[0] *
                                           vstride];
          }
        }
        offset = i2 - i1;
        vstride = tmp_tmp - obj_tmp;
        for (i2 = 0; i2 < vstride; i2++) {
          for (tmp_tmp = 0; tmp_tmp < offset; tmp_tmp++) {
            nhood_data[(i1 + tmp_tmp) + n * (obj_tmp + i2)] =
                obj_data[tmp_tmp + offset * i2];
          }
        }
        if (tmp + 1.0 > n) {
          i1 = 0;
          i2 = 0;
        } else {
          i1 = (int)(tmp + 1.0) - 1;
          i2 = n;
        }
        if (numColPad + 1.0 > k) {
          obj_tmp = 0;
          k = 0;
        } else {
          obj_tmp = (int)(numColPad + 1.0) - 1;
        }
        loop_ub = b_obj.StrelArray->data[0].height->size[0];
        offset = b_obj.StrelArray->data[0].height->size[1];
        tmp_tmp = d_obj->size[0] * d_obj->size[1];
        d_obj->size[0] = b_obj.StrelArray->data[0].height->size[0];
        d_obj->size[1] = b_obj.StrelArray->data[0].height->size[1];
        emxEnsureCapacity_real_T(d_obj, tmp_tmp);
        height_data = d_obj->data;
        for (tmp_tmp = 0; tmp_tmp < offset; tmp_tmp++) {
          for (vstride = 0; vstride < loop_ub; vstride++) {
            height_data[vstride + d_obj->size[0] * tmp_tmp] =
                b_obj.StrelArray->data[0]
                    .height
                    ->data[vstride +
                           b_obj.StrelArray->data[0].height->size[0] * tmp_tmp];
          }
        }
        offset = i2 - i1;
        vstride = k - obj_tmp;
        for (i2 = 0; i2 < vstride; i2++) {
          for (k = 0; k < offset; k++) {
            allheight_data[(i1 + k) + n * (obj_tmp + i2)] =
                height_data[k + offset * i2];
          }
        }
      } else {
        i1 = nhood->size[0] * nhood->size[1] * nhood->size[2];
        nhood->size[0] = obj.StrelArray->data[0].nhood->size[0];
        nhood->size[1] = obj.StrelArray->data[0].nhood->size[1];
        nhood->size[2] = 1;
        emxEnsureCapacity_boolean_T(nhood, i1);
        nhood_data = nhood->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          nhood_data[i1] = obj.StrelArray->data[0].nhood->data[i1];
        }
        i1 = allheight->size[0] * allheight->size[1] * allheight->size[2];
        allheight->size[0] = b_obj.StrelArray->data[0].height->size[0];
        allheight->size[1] = b_obj.StrelArray->data[0].height->size[1];
        allheight->size[2] = 1;
        emxEnsureCapacity_real_T(allheight, i1);
        allheight_data = allheight->data;
        for (i1 = 0; i1 < obj_tmp; i1++) {
          allheight_data[i1] = b_obj.StrelArray->data[0].height->data[i1];
        }
      }
      y = ((allheight->size[0] != 0) && (allheight->size[1] != 0));
      if (y && (allheight->size[0] > 1)) {
        n = allheight->size[0] - 1;
        nd2 = allheight->size[0] >> 1;
        i1 = allheight->size[1] - 1;
        for (vstride = 0; vstride <= i1; vstride++) {
          offset = vstride * allheight->size[0];
          for (k = 0; k < nd2; k++) {
            tmp_tmp = offset + k;
            tmp = allheight_data[tmp_tmp];
            i2 = (offset + n) - k;
            allheight_data[tmp_tmp] = allheight_data[i2];
            allheight_data[i2] = tmp;
          }
        }
      }
      if (y && (allheight->size[1] > 1)) {
        vstride = allheight->size[0];
        n = allheight->size[1] - 1;
        nd2 = allheight->size[1] >> 1;
        i1 = allheight->size[0] - 1;
        for (b_i = 0; b_i <= i1; b_i++) {
          for (k = 0; k < nd2; k++) {
            tmp_tmp = b_i + k * vstride;
            tmp = allheight_data[tmp_tmp];
            i2 = b_i + (n - k) * vstride;
            allheight_data[tmp_tmp] = allheight_data[i2];
            allheight_data[i2] = tmp;
          }
        }
      }
      offset = allheight->size[0] * allheight->size[1];
      e_obj = *allheight;
      h_obj = offset;
      e_obj.size = &h_obj;
      e_obj.numDimensions = 1;
      if (any(&e_obj)) {
        boolean_T b_tmp;
        y = ((nhood->size[0] != 0) && (nhood->size[1] != 0));
        if (y && (nhood->size[0] > 1)) {
          n = nhood->size[0] - 1;
          nd2 = nhood->size[0] >> 1;
          i1 = nhood->size[1] - 1;
          for (vstride = 0; vstride <= i1; vstride++) {
            offset = vstride * nhood->size[0];
            for (k = 0; k < nd2; k++) {
              tmp_tmp = offset + k;
              b_tmp = nhood_data[tmp_tmp];
              i2 = (offset + n) - k;
              nhood_data[tmp_tmp] = nhood_data[i2];
              nhood_data[i2] = b_tmp;
            }
          }
        }
        if (y && (nhood->size[1] > 1)) {
          vstride = nhood->size[0];
          n = nhood->size[1] - 1;
          nd2 = nhood->size[1] >> 1;
          i1 = nhood->size[0] - 1;
          for (b_i = 0; b_i <= i1; b_i++) {
            for (k = 0; k < nd2; k++) {
              tmp_tmp = b_i + k * vstride;
              b_tmp = nhood_data[tmp_tmp];
              i2 = b_i + (n - k) * vstride;
              nhood_data[tmp_tmp] = nhood_data[i2];
              nhood_data[i2] = b_tmp;
            }
          }
        }
      }
      asizeT[0] = Apad->size[0];
      nsizeT_data[0] = nhood->size[0];
      asizeT[1] = Apad->size[1];
      nsizeT_data[1] = nhood->size[1];
      dilate_real32_ipp(&Apad_data[0], &asizeT[0], &nhood_data[0],
                        &nsizeT_data[0], &B_data[0]);
    } else {
      double tmp;
      int offset;
      i1 = nhood->size[0] * nhood->size[1] * nhood->size[2];
      nhood->size[0] = obj.StrelArray->data[0].nhood->size[0];
      nhood->size[1] = obj.StrelArray->data[0].nhood->size[1];
      nhood->size[2] = 1;
      emxEnsureCapacity_boolean_T(nhood, i1);
      nhood_data = nhood->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        nhood_data[i1] = obj.StrelArray->data[0].nhood->data[i1];
      }
      i1 = allheight->size[0] * allheight->size[1] * allheight->size[2];
      allheight->size[0] = b_obj.StrelArray->data[0].height->size[0];
      allheight->size[1] = b_obj.StrelArray->data[0].height->size[1];
      allheight->size[2] = 1;
      emxEnsureCapacity_real_T(allheight, i1);
      allheight_data = allheight->data;
      for (i1 = 0; i1 < obj_tmp; i1++) {
        allheight_data[i1] = b_obj.StrelArray->data[0].height->data[i1];
      }
      y = ((b_obj.StrelArray->data[0].height->size[0] != 0) &&
           (b_obj.StrelArray->data[0].height->size[1] != 0));
      if (y && (b_obj.StrelArray->data[0].height->size[0] > 1)) {
        n = b_obj.StrelArray->data[0].height->size[0] - 1;
        nd2 = b_obj.StrelArray->data[0].height->size[0] >> 1;
        i1 = b_obj.StrelArray->data[0].height->size[1] - 1;
        for (vstride = 0; vstride <= i1; vstride++) {
          offset = vstride * allheight->size[0];
          for (k = 0; k < nd2; k++) {
            tmp_tmp = offset + k;
            tmp = allheight_data[tmp_tmp];
            i2 = (offset + n) - k;
            allheight_data[tmp_tmp] = allheight_data[i2];
            allheight_data[i2] = tmp;
          }
        }
      }
      if (y && (allheight->size[1] > 1)) {
        vstride = allheight->size[0];
        n = allheight->size[1] - 1;
        nd2 = allheight->size[1] >> 1;
        i1 = allheight->size[0] - 1;
        for (b_i = 0; b_i <= i1; b_i++) {
          for (k = 0; k < nd2; k++) {
            tmp_tmp = b_i + k * vstride;
            tmp = allheight_data[tmp_tmp];
            i2 = b_i + (n - k) * vstride;
            allheight_data[tmp_tmp] = allheight_data[i2];
            allheight_data[i2] = tmp;
          }
        }
      }
      e_obj = *allheight;
      g_obj = obj_tmp;
      e_obj.size = &g_obj;
      e_obj.numDimensions = 1;
      if (any(&e_obj)) {
        boolean_T b_tmp;
        i1 = nhood->size[0] * nhood->size[1] * nhood->size[2];
        nhood->size[0] = obj.StrelArray->data[0].nhood->size[0];
        nhood->size[1] = obj.StrelArray->data[0].nhood->size[1];
        nhood->size[2] = 1;
        emxEnsureCapacity_boolean_T(nhood, i1);
        nhood_data = nhood->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          nhood_data[i1] = obj.StrelArray->data[0].nhood->data[i1];
        }
        y = ((obj.StrelArray->data[0].nhood->size[0] != 0) &&
             (obj.StrelArray->data[0].nhood->size[1] != 0));
        if (y && (obj.StrelArray->data[0].nhood->size[0] > 1)) {
          n = obj.StrelArray->data[0].nhood->size[0] - 1;
          nd2 = obj.StrelArray->data[0].nhood->size[0] >> 1;
          i1 = obj.StrelArray->data[0].nhood->size[1] - 1;
          for (vstride = 0; vstride <= i1; vstride++) {
            offset = vstride * nhood->size[0];
            for (k = 0; k < nd2; k++) {
              tmp_tmp = offset + k;
              b_tmp = nhood_data[tmp_tmp];
              i2 = (offset + n) - k;
              nhood_data[tmp_tmp] = nhood_data[i2];
              nhood_data[i2] = b_tmp;
            }
          }
        }
        if (y && (nhood->size[1] > 1)) {
          vstride = nhood->size[0];
          n = nhood->size[1] - 1;
          nd2 = nhood->size[1] >> 1;
          i1 = nhood->size[0] - 1;
          for (b_i = 0; b_i <= i1; b_i++) {
            for (k = 0; k < nd2; k++) {
              tmp_tmp = b_i + k * vstride;
              b_tmp = nhood_data[tmp_tmp];
              i2 = b_i + (n - k) * vstride;
              nhood_data[tmp_tmp] = nhood_data[i2];
              nhood_data[i2] = b_tmp;
            }
          }
        }
      }
      vstride = loop_ub - 1;
      offset = 0;
      for (b_i = 0; b_i <= vstride; b_i++) {
        if (nhood_data[b_i]) {
          offset++;
        }
      }
      i1 = height->size[0];
      height->size[0] = offset;
      emxEnsureCapacity_real_T(height, i1);
      height_data = height->data;
      offset = 0;
      for (b_i = 0; b_i <= vstride; b_i++) {
        if (nhood_data[b_i]) {
          height_data[offset] = allheight_data[b_i];
          offset++;
        }
      }
      if (libNameEnum == 7) {
        double nsizeT_data[3];
        asizeT[0] = Apad->size[0];
        nsizeT_data[0] = nhood->size[0];
        asizeT[1] = Apad->size[1];
        nsizeT_data[1] = nhood->size[1];
        dilate_nonflat_real32_tbb(&Apad_data[0], &asizeT[0], 2.0,
                                  &nhood_data[0], &nsizeT_data[0], 2.0,
                                  &height_data[0], &B_data[0]);
      } else {
        double nsizeT_data[3];
        asizeT[0] = Apad->size[0];
        nsizeT_data[0] = nhood->size[0];
        asizeT[1] = Apad->size[1];
        nsizeT_data[1] = nhood->size[1];
        dilate_flat_real32_tbb(&Apad_data[0], &asizeT[0], 2.0, &nhood_data[0],
                               &nsizeT_data[0], 2.0, &B_data[0]);
      }
    }
    i1 = Apad->size[0] * Apad->size[1];
    Apad->size[0] = B->size[0];
    Apad->size[1] = B->size[1];
    emxEnsureCapacity_real32_T(Apad, i1);
    Apad_data = Apad->data;
    loop_ub = B->size[0] * B->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      Apad_data[i1] = B_data[i1];
    }
  }
  emxFree_real_T(&d_obj);
  emxFree_boolean_T(&c_obj);
  emxFreeStruct_strel(&b_obj);
  emxFreeStruct_strel(&obj);
  emxFree_cell_wrap_1(&seq_DecomposedStrelArray);
  c_emxFree_images_internal_coder(&seq_StrelArray);
  emxFree_real_T(&height);
  emxFree_real_T(&allheight);
  emxFree_boolean_T(&nhood);
  emxFree_real32_T(&Apad);
}

/*
 * Arguments    : const emxArray_boolean_T *A
 *                const c_emxArray_images_internal_code *se_StrelArray
 *                const emxArray_cell_wrap_1 *se_DecomposedStrelArray
 *                emxArray_boolean_T *B
 * Return Type  : void
 */
void e_imdilate(const emxArray_boolean_T *A,
                const c_emxArray_images_internal_code *se_StrelArray,
                const emxArray_cell_wrap_1 *se_DecomposedStrelArray,
                emxArray_boolean_T *B)
{
  c_emxArray_images_internal_code *seq_StrelArray;
  const c_images_internal_coder_strel_S *se_StrelArray_data;
  c_images_internal_coder_strel_S *seq_StrelArray_data;
  cell_wrap_1 *seq_DecomposedStrelArray_data;
  emxArray_boolean_T *Apad;
  emxArray_boolean_T *isEachStrelInSE2D;
  emxArray_boolean_T *nhood;
  emxArray_boolean_T *r;
  emxArray_cell_wrap_1 *seq_DecomposedStrelArray;
  emxArray_real_T *allheight;
  emxArray_uint32_T *Apadpack;
  emxArray_uint32_T *Bpack;
  strel b_obj;
  strel obj;
  double bwSize[2];
  double bwpSize[2];
  double *allheight_data;
  int pad_lr1_size[2];
  int pad_ul1_size[2];
  int i;
  int i1;
  int j;
  int k;
  int numRows;
  int offset;
  int sInd;
  unsigned int *Apadpack_data;
  unsigned int *Bpack_data;
  signed char fcnNameEnum;
  signed char libNameEnum;
  boolean_T exitg1;
  boolean_T pre_pack;
  boolean_T strel_is_all_flat;
  boolean_T strel_is_single;
  boolean_T *Apad_data;
  boolean_T *B_data;
  boolean_T *nhood_data;
  se_StrelArray_data = se_StrelArray->data;
  e_emxInit_images_internal_coder(&seq_StrelArray);
  emxInit_cell_wrap_1(&seq_DecomposedStrelArray);
  emxInit_boolean_T(&isEachStrelInSE2D, 2);
  strel_decompose(se_StrelArray, se_DecomposedStrelArray, seq_StrelArray,
                  seq_DecomposedStrelArray, isEachStrelInSE2D);
  seq_DecomposedStrelArray_data = seq_DecomposedStrelArray->data;
  seq_StrelArray_data = seq_StrelArray->data;
  emxFree_boolean_T(&isEachStrelInSE2D);
  strel_is_single = (seq_StrelArray->size[1] == 1);
  strel_is_all_flat = true;
  sInd = 0;
  emxInitStruct_strel(&obj);
  exitg1 = false;
  while ((!exitg1) && (sInd <= seq_StrelArray->size[1] - 1)) {
    i = obj.StrelArray->size[0] * obj.StrelArray->size[1];
    obj.StrelArray->size[0] = 1;
    obj.StrelArray->size[1] = seq_StrelArray->size[1];
    d_emxEnsureCapacity_images_inte(obj.StrelArray, i);
    offset = seq_StrelArray->size[1];
    for (i = 0; i < offset; i++) {
      c_emxCopyStruct_images_internal(&obj.StrelArray->data[i],
                                      &seq_StrelArray_data[i]);
    }
    i = obj.DecomposedStrelArray->size[0] * obj.DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[0] = 1;
    obj.DecomposedStrelArray->size[1] = seq_DecomposedStrelArray->size[1];
    emxEnsureCapacity_cell_wrap_11(obj.DecomposedStrelArray, i);
    offset = seq_DecomposedStrelArray->size[1];
    for (i = 0; i < offset; i++) {
      emxCopyStruct_cell_wrap_1(&obj.DecomposedStrelArray->data[i],
                                &seq_DecomposedStrelArray_data[i]);
    }
    strel_parenReference(&obj, (double)sInd + 1.0);
    if (obj.StrelArray->data[0].Flat) {
      sInd++;
    } else {
      strel_is_all_flat = false;
      exitg1 = true;
    }
  }
  i = seq_StrelArray->size[1];
  for (sInd = 0; sInd < i; sInd++) {
    i1 = obj.StrelArray->size[0] * obj.StrelArray->size[1];
    obj.StrelArray->size[0] = 1;
    offset = seq_StrelArray->size[1];
    obj.StrelArray->size[1] = seq_StrelArray->size[1];
    d_emxEnsureCapacity_images_inte(obj.StrelArray, i1);
    for (i1 = 0; i1 < offset; i1++) {
      c_emxCopyStruct_images_internal(&obj.StrelArray->data[i1],
                                      &seq_StrelArray_data[i1]);
    }
    i1 = obj.DecomposedStrelArray->size[0] * obj.DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[0] = 1;
    offset = seq_DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[1] = seq_DecomposedStrelArray->size[1];
    emxEnsureCapacity_cell_wrap_11(obj.DecomposedStrelArray, i1);
    for (i1 = 0; i1 < offset; i1++) {
      emxCopyStruct_cell_wrap_1(&obj.DecomposedStrelArray->data[i1],
                                &seq_DecomposedStrelArray_data[i1]);
    }
    strel_parenReference(&obj, (double)sInd + 1.0);
  }
  pre_pack = ((!strel_is_single) && strel_is_all_flat);
  if (pre_pack) {
    fcnNameEnum = -1;
    libNameEnum = 1;
  } else {
    if (strel_is_single) {
      if (isequal(se_StrelArray_data[0].nhood)) {
        fcnNameEnum = 10;
      } else {
        fcnNameEnum = 11;
      }
    } else {
      fcnNameEnum = 12;
    }
    libNameEnum = 5;
  }
  strel_getpadsize(se_StrelArray, se_DecomposedStrelArray, bwSize, pad_ul1_size,
                   bwpSize, pad_lr1_size);
  emxInit_boolean_T(&r, 2);
  c_padarray(A, bwSize, r);
  emxInit_boolean_T(&Apad, 2);
  d_padarray(r, bwpSize, Apad);
  Apad_data = Apad->data;
  emxFree_boolean_T(&r);
  emxInit_uint32_T(&Apadpack);
  Apadpack_data = Apadpack->data;
  if (pre_pack) {
    numRows = Apad->size[0];
    offset = (int)ceil((double)Apad->size[0] / 32.0);
    if ((Apad->size[0] == 0) || (Apad->size[1] == 0)) {
      i = Apadpack->size[0] * Apadpack->size[1];
      Apadpack->size[0] = offset;
      Apadpack->size[1] = Apad->size[1];
      emxEnsureCapacity_uint32_T(Apadpack, i);
      Apadpack_data = Apadpack->data;
      offset *= Apad->size[1];
      for (i = 0; i < offset; i++) {
        Apadpack_data[i] = 0U;
      }
    } else {
      i = Apadpack->size[0] * Apadpack->size[1];
      Apadpack->size[0] = offset;
      Apadpack->size[1] = Apad->size[1];
      emxEnsureCapacity_uint32_T(Apadpack, i);
      Apadpack_data = Apadpack->data;
      bwSize[0] = Apad->size[0];
      bwSize[1] = Apad->size[1];
      bwpSize[0] = offset;
      bwpSize[1] = Apad->size[1];
      bwPackingtbb(&Apad_data[0], &bwSize[0], &Apadpack_data[0], &bwpSize[0],
                   true);
    }
    Apad->size[0] = 0;
    Apad->size[1] = 0;
  } else {
    numRows = -1;
    Apadpack->size[0] = 0;
    Apadpack->size[1] = 0;
  }
  emxInit_uint32_T(&Bpack);
  i = Bpack->size[0] * Bpack->size[1];
  Bpack->size[0] = Apadpack->size[0];
  Bpack->size[1] = Apadpack->size[1];
  emxEnsureCapacity_uint32_T(Bpack, i);
  Bpack_data = Bpack->data;
  i = B->size[0] * B->size[1];
  B->size[0] = Apad->size[0];
  B->size[1] = Apad->size[1];
  emxEnsureCapacity_boolean_T(B, i);
  B_data = B->data;
  i = seq_StrelArray->size[1];
  emxInit_boolean_T(&nhood, 3);
  emxInit_real_T(&allheight, 3);
  emxInitStruct_strel(&b_obj);
  for (sInd = 0; sInd < i; sInd++) {
    double tmp;
    int b_loop_ub_tmp;
    int i2;
    int loop_ub_tmp;
    int n;
    int nd2;
    int tmp_tmp;
    i1 = obj.StrelArray->size[0] * obj.StrelArray->size[1];
    obj.StrelArray->size[0] = 1;
    offset = seq_StrelArray->size[1];
    obj.StrelArray->size[1] = seq_StrelArray->size[1];
    d_emxEnsureCapacity_images_inte(obj.StrelArray, i1);
    for (i1 = 0; i1 < offset; i1++) {
      c_emxCopyStruct_images_internal(&obj.StrelArray->data[i1],
                                      &seq_StrelArray_data[i1]);
    }
    i1 = obj.DecomposedStrelArray->size[0] * obj.DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[0] = 1;
    offset = seq_DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[1] = seq_DecomposedStrelArray->size[1];
    emxEnsureCapacity_cell_wrap_11(obj.DecomposedStrelArray, i1);
    for (i1 = 0; i1 < offset; i1++) {
      emxCopyStruct_cell_wrap_1(&obj.DecomposedStrelArray->data[i1],
                                &seq_DecomposedStrelArray_data[i1]);
    }
    strel_parenReference(&obj, (double)sInd + 1.0);
    i1 = b_obj.StrelArray->size[0] * b_obj.StrelArray->size[1];
    b_obj.StrelArray->size[0] = 1;
    offset = seq_StrelArray->size[1];
    b_obj.StrelArray->size[1] = seq_StrelArray->size[1];
    d_emxEnsureCapacity_images_inte(b_obj.StrelArray, i1);
    for (i1 = 0; i1 < offset; i1++) {
      c_emxCopyStruct_images_internal(&b_obj.StrelArray->data[i1],
                                      &seq_StrelArray_data[i1]);
    }
    i1 = b_obj.DecomposedStrelArray->size[0] *
         b_obj.DecomposedStrelArray->size[1];
    b_obj.DecomposedStrelArray->size[0] = 1;
    offset = seq_DecomposedStrelArray->size[1];
    b_obj.DecomposedStrelArray->size[1] = seq_DecomposedStrelArray->size[1];
    emxEnsureCapacity_cell_wrap_11(b_obj.DecomposedStrelArray, i1);
    for (i1 = 0; i1 < offset; i1++) {
      emxCopyStruct_cell_wrap_1(&b_obj.DecomposedStrelArray->data[i1],
                                &seq_DecomposedStrelArray_data[i1]);
    }
    strel_parenReference(&b_obj, (double)sInd + 1.0);
    i1 = nhood->size[0] * nhood->size[1] * nhood->size[2];
    nhood->size[0] = obj.StrelArray->data[0].nhood->size[0];
    nhood->size[1] = obj.StrelArray->data[0].nhood->size[1];
    nhood->size[2] = 1;
    emxEnsureCapacity_boolean_T(nhood, i1);
    nhood_data = nhood->data;
    loop_ub_tmp = obj.StrelArray->data[0].nhood->size[0] *
                  obj.StrelArray->data[0].nhood->size[1];
    for (i1 = 0; i1 < loop_ub_tmp; i1++) {
      nhood_data[i1] = obj.StrelArray->data[0].nhood->data[i1];
    }
    i1 = allheight->size[0] * allheight->size[1] * allheight->size[2];
    allheight->size[0] = b_obj.StrelArray->data[0].height->size[0];
    allheight->size[1] = b_obj.StrelArray->data[0].height->size[1];
    allheight->size[2] = 1;
    emxEnsureCapacity_real_T(allheight, i1);
    allheight_data = allheight->data;
    b_loop_ub_tmp = b_obj.StrelArray->data[0].height->size[0] *
                    b_obj.StrelArray->data[0].height->size[1];
    for (i1 = 0; i1 < b_loop_ub_tmp; i1++) {
      allheight_data[i1] = b_obj.StrelArray->data[0].height->data[i1];
    }
    strel_is_all_flat = ((b_obj.StrelArray->data[0].height->size[0] != 0) &&
                         (b_obj.StrelArray->data[0].height->size[1] != 0));
    if (strel_is_all_flat && (b_obj.StrelArray->data[0].height->size[0] > 1)) {
      n = b_obj.StrelArray->data[0].height->size[0] - 1;
      nd2 = b_obj.StrelArray->data[0].height->size[0] >> 1;
      i1 = b_obj.StrelArray->data[0].height->size[1] - 1;
      for (j = 0; j <= i1; j++) {
        offset = j * allheight->size[0];
        for (k = 0; k < nd2; k++) {
          tmp_tmp = offset + k;
          tmp = allheight_data[tmp_tmp];
          i2 = (offset + n) - k;
          allheight_data[tmp_tmp] = allheight_data[i2];
          allheight_data[i2] = tmp;
        }
      }
    }
    if (strel_is_all_flat && (allheight->size[1] > 1)) {
      offset = allheight->size[0];
      n = allheight->size[1] - 1;
      nd2 = allheight->size[1] >> 1;
      i1 = allheight->size[0] - 1;
      for (j = 0; j <= i1; j++) {
        for (k = 0; k < nd2; k++) {
          tmp_tmp = j + k * offset;
          tmp = allheight_data[tmp_tmp];
          i2 = j + (n - k) * offset;
          allheight_data[tmp_tmp] = allheight_data[i2];
          allheight_data[i2] = tmp;
        }
      }
    }
    strel_is_all_flat = false;
    offset = 0;
    exitg1 = false;
    while ((!exitg1) && (offset + 1 <= b_loop_ub_tmp)) {
      if ((allheight_data[offset] == 0.0) || rtIsNaN(allheight_data[offset])) {
        offset++;
      } else {
        strel_is_all_flat = true;
        exitg1 = true;
      }
    }
    if (strel_is_all_flat) {
      i1 = nhood->size[0] * nhood->size[1] * nhood->size[2];
      nhood->size[0] = obj.StrelArray->data[0].nhood->size[0];
      nhood->size[1] = obj.StrelArray->data[0].nhood->size[1];
      nhood->size[2] = 1;
      emxEnsureCapacity_boolean_T(nhood, i1);
      nhood_data = nhood->data;
      for (i1 = 0; i1 < loop_ub_tmp; i1++) {
        nhood_data[i1] = obj.StrelArray->data[0].nhood->data[i1];
      }
      strel_is_all_flat = ((obj.StrelArray->data[0].nhood->size[0] != 0) &&
                           (obj.StrelArray->data[0].nhood->size[1] != 0));
      if (strel_is_all_flat && (obj.StrelArray->data[0].nhood->size[0] > 1)) {
        n = obj.StrelArray->data[0].nhood->size[0] - 1;
        nd2 = obj.StrelArray->data[0].nhood->size[0] >> 1;
        i1 = obj.StrelArray->data[0].nhood->size[1] - 1;
        for (j = 0; j <= i1; j++) {
          offset = j * nhood->size[0];
          for (k = 0; k < nd2; k++) {
            tmp_tmp = offset + k;
            strel_is_single = nhood_data[tmp_tmp];
            i2 = (offset + n) - k;
            nhood_data[tmp_tmp] = nhood_data[i2];
            nhood_data[i2] = strel_is_single;
          }
        }
      }
      if (strel_is_all_flat && (nhood->size[1] > 1)) {
        offset = nhood->size[0];
        n = nhood->size[1] - 1;
        nd2 = nhood->size[1] >> 1;
        i1 = nhood->size[0] - 1;
        for (j = 0; j <= i1; j++) {
          for (k = 0; k < nd2; k++) {
            tmp_tmp = j + k * offset;
            strel_is_single = nhood_data[tmp_tmp];
            i2 = j + (n - k) * offset;
            nhood_data[tmp_tmp] = nhood_data[i2];
            nhood_data[i2] = strel_is_single;
          }
        }
      }
    }
    if (pre_pack) {
      double nsizeT_data[3];
      bwSize[0] = Apadpack->size[0];
      nsizeT_data[0] = nhood->size[0];
      bwSize[1] = Apadpack->size[1];
      nsizeT_data[1] = nhood->size[1];
      dilate_packed_uint32(&Apadpack_data[0], &bwSize[0], 2.0, &nhood_data[0],
                           &nsizeT_data[0], 2.0, &Bpack_data[0], true);
      i1 = Apadpack->size[0] * Apadpack->size[1];
      Apadpack->size[0] = Bpack->size[0];
      Apadpack->size[1] = Bpack->size[1];
      emxEnsureCapacity_uint32_T(Apadpack, i1);
      Apadpack_data = Apadpack->data;
      offset = Bpack->size[0] * Bpack->size[1];
      for (i1 = 0; i1 < offset; i1++) {
        Apadpack_data[i1] = Bpack_data[i1];
      }
    } else {
      if (libNameEnum == 5) {
        if (fcnNameEnum == 10) {
          double nsizeT_data[3];
          bwSize[0] = Apad->size[0];
          nsizeT_data[0] = nhood->size[0];
          bwSize[1] = Apad->size[1];
          nsizeT_data[1] = nhood->size[1];
          dilate_binary_ones33_tbb(&Apad_data[0], &bwSize[0], 2.0,
                                   &nhood_data[0], &nsizeT_data[0], 2.0,
                                   &B_data[0]);
        } else if (fcnNameEnum == 11) {
          double nsizeT_data[3];
          bwSize[0] = Apad->size[0];
          nsizeT_data[0] = nhood->size[0];
          bwSize[1] = Apad->size[1];
          nsizeT_data[1] = nhood->size[1];
          dilate_binary_twod_tbb(&Apad_data[0], &bwSize[0], 2.0, &nhood_data[0],
                                 &nsizeT_data[0], 2.0, &B_data[0]);
        } else if (fcnNameEnum == 12) {
          double nsizeT_data[3];
          bwSize[0] = Apad->size[0];
          nsizeT_data[0] = nhood->size[0];
          bwSize[1] = Apad->size[1];
          nsizeT_data[1] = nhood->size[1];
          dilate_binary_tbb(&Apad_data[0], &bwSize[0], 2.0, &nhood_data[0],
                            &nsizeT_data[0], 2.0, &B_data[0]);
        }
      } else if (fcnNameEnum == 10) {
        double nsizeT_data[3];
        bwSize[0] = Apad->size[0];
        nsizeT_data[0] = nhood->size[0];
        bwSize[1] = Apad->size[1];
        nsizeT_data[1] = nhood->size[1];
        dilate_binary_ones33_tbb(&Apad_data[0], &bwSize[0], 2.0, &nhood_data[0],
                                 &nsizeT_data[0], 2.0, &B_data[0]);
      } else if (fcnNameEnum == 11) {
        double nsizeT_data[3];
        bwSize[0] = Apad->size[0];
        nsizeT_data[0] = nhood->size[0];
        bwSize[1] = Apad->size[1];
        nsizeT_data[1] = nhood->size[1];
        dilate_binary_twod_tbb(&Apad_data[0], &bwSize[0], 2.0, &nhood_data[0],
                               &nsizeT_data[0], 2.0, &B_data[0]);
      } else if (fcnNameEnum == 12) {
        double nsizeT_data[3];
        bwSize[0] = Apad->size[0];
        nsizeT_data[0] = nhood->size[0];
        bwSize[1] = Apad->size[1];
        nsizeT_data[1] = nhood->size[1];
        dilate_binary_tbb(&Apad_data[0], &bwSize[0], 2.0, &nhood_data[0],
                          &nsizeT_data[0], 2.0, &B_data[0]);
      }
      i1 = Apad->size[0] * Apad->size[1];
      Apad->size[0] = B->size[0];
      Apad->size[1] = B->size[1];
      emxEnsureCapacity_boolean_T(Apad, i1);
      Apad_data = Apad->data;
      offset = B->size[0] * B->size[1];
      for (i1 = 0; i1 < offset; i1++) {
        Apad_data[i1] = B_data[i1];
      }
    }
  }
  emxFreeStruct_strel(&b_obj);
  emxFreeStruct_strel(&obj);
  emxFree_cell_wrap_1(&seq_DecomposedStrelArray);
  c_emxFree_images_internal_coder(&seq_StrelArray);
  emxFree_real_T(&allheight);
  emxFree_boolean_T(&nhood);
  emxFree_uint32_T(&Apadpack);
  emxFree_boolean_T(&Apad);
  if (pre_pack) {
    if ((Bpack->size[0] == 0) || (Bpack->size[1] == 0)) {
      i = B->size[0] * B->size[1];
      B->size[0] = numRows;
      B->size[1] = Bpack->size[1];
      emxEnsureCapacity_boolean_T(B, i);
      B_data = B->data;
      offset = numRows * Bpack->size[1];
      for (i = 0; i < offset; i++) {
        B_data[i] = false;
      }
    } else {
      i = B->size[0] * B->size[1];
      B->size[0] = numRows;
      B->size[1] = Bpack->size[1];
      emxEnsureCapacity_boolean_T(B, i);
      B_data = B->data;
      bwpSize[0] = Bpack->size[0];
      bwSize[0] = numRows;
      bwpSize[1] = Bpack->size[1];
      bwSize[1] = Bpack->size[1];
      bwUnpackingtbb(&Bpack_data[0], &bwpSize[0], &B_data[0], &bwSize[0], true);
    }
  }
  emxFree_uint32_T(&Bpack);
}

/*
 * Arguments    : const emxArray_boolean_T *A
 *                const c_emxArray_images_internal_code *se_StrelArray
 *                const emxArray_cell_wrap_1 *se_DecomposedStrelArray
 *                emxArray_boolean_T *B
 * Return Type  : void
 */
void f_imdilate(const emxArray_boolean_T *A,
                const c_emxArray_images_internal_code *se_StrelArray,
                const emxArray_cell_wrap_1 *se_DecomposedStrelArray,
                emxArray_boolean_T *B)
{
  c_emxArray_images_internal_code *seq_StrelArray;
  const c_images_internal_coder_strel_S *se_StrelArray_data;
  c_images_internal_coder_strel_S *seq_StrelArray_data;
  cell_wrap_1 *seq_DecomposedStrelArray_data;
  emxArray_boolean_T *Apad;
  emxArray_boolean_T *isEachStrelInSE2D;
  emxArray_boolean_T *nhood;
  emxArray_boolean_T *r;
  emxArray_cell_wrap_1 *seq_DecomposedStrelArray;
  emxArray_real_T *allheight;
  emxArray_uint32_T *Apadpack;
  emxArray_uint32_T *Bpack;
  strel b_obj;
  strel obj;
  double bwSize[2];
  double bwpSize[2];
  double pad_lr_data[2];
  double pad_ul_data[2];
  double *allheight_data;
  int b_loop_ub_tmp;
  int i;
  int i1;
  int i2;
  int j;
  int k;
  int loop_ub_tmp;
  int n;
  int numRows;
  int offset;
  int sInd;
  unsigned int *Apadpack_data;
  unsigned int *Bpack_data;
  signed char fcnNameEnum;
  signed char libNameEnum;
  const boolean_T *A_data;
  boolean_T b;
  boolean_T exitg1;
  boolean_T pre_pack;
  boolean_T pre_pad;
  boolean_T strel_is_all_flat;
  boolean_T strel_is_single;
  boolean_T *Apad_data;
  boolean_T *B_data;
  boolean_T *nhood_data;
  se_StrelArray_data = se_StrelArray->data;
  A_data = A->data;
  e_emxInit_images_internal_coder(&seq_StrelArray);
  emxInit_cell_wrap_1(&seq_DecomposedStrelArray);
  emxInit_boolean_T(&isEachStrelInSE2D, 2);
  strel_decompose(se_StrelArray, se_DecomposedStrelArray, seq_StrelArray,
                  seq_DecomposedStrelArray, isEachStrelInSE2D);
  seq_DecomposedStrelArray_data = seq_DecomposedStrelArray->data;
  seq_StrelArray_data = seq_StrelArray->data;
  emxFree_boolean_T(&isEachStrelInSE2D);
  strel_is_single = (seq_StrelArray->size[1] == 1);
  strel_is_all_flat = true;
  sInd = 0;
  emxInitStruct_strel(&obj);
  exitg1 = false;
  while ((!exitg1) && (sInd <= seq_StrelArray->size[1] - 1)) {
    i = obj.StrelArray->size[0] * obj.StrelArray->size[1];
    obj.StrelArray->size[0] = 1;
    obj.StrelArray->size[1] = seq_StrelArray->size[1];
    d_emxEnsureCapacity_images_inte(obj.StrelArray, i);
    offset = seq_StrelArray->size[1];
    for (i = 0; i < offset; i++) {
      c_emxCopyStruct_images_internal(&obj.StrelArray->data[i],
                                      &seq_StrelArray_data[i]);
    }
    i = obj.DecomposedStrelArray->size[0] * obj.DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[0] = 1;
    obj.DecomposedStrelArray->size[1] = seq_DecomposedStrelArray->size[1];
    emxEnsureCapacity_cell_wrap_11(obj.DecomposedStrelArray, i);
    offset = seq_DecomposedStrelArray->size[1];
    for (i = 0; i < offset; i++) {
      emxCopyStruct_cell_wrap_1(&obj.DecomposedStrelArray->data[i],
                                &seq_DecomposedStrelArray_data[i]);
    }
    strel_parenReference(&obj, (double)sInd + 1.0);
    if (obj.StrelArray->data[0].Flat) {
      sInd++;
    } else {
      strel_is_all_flat = false;
      exitg1 = true;
    }
  }
  i = seq_StrelArray->size[1];
  for (sInd = 0; sInd < i; sInd++) {
    i1 = obj.StrelArray->size[0] * obj.StrelArray->size[1];
    obj.StrelArray->size[0] = 1;
    offset = seq_StrelArray->size[1];
    obj.StrelArray->size[1] = seq_StrelArray->size[1];
    d_emxEnsureCapacity_images_inte(obj.StrelArray, i1);
    for (i1 = 0; i1 < offset; i1++) {
      c_emxCopyStruct_images_internal(&obj.StrelArray->data[i1],
                                      &seq_StrelArray_data[i1]);
    }
    i1 = obj.DecomposedStrelArray->size[0] * obj.DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[0] = 1;
    offset = seq_DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[1] = seq_DecomposedStrelArray->size[1];
    emxEnsureCapacity_cell_wrap_11(obj.DecomposedStrelArray, i1);
    for (i1 = 0; i1 < offset; i1++) {
      emxCopyStruct_cell_wrap_1(&obj.DecomposedStrelArray->data[i1],
                                &seq_DecomposedStrelArray_data[i1]);
    }
    strel_parenReference(&obj, (double)sInd + 1.0);
  }
  b = !strel_is_single;
  if (b && (!strel_isdecompositionorthogonal(se_StrelArray,
                                             se_DecomposedStrelArray))) {
    pre_pad = true;
  } else {
    pre_pad = false;
  }
  pre_pack = (b && strel_is_all_flat);
  if (pre_pack) {
    fcnNameEnum = -1;
    libNameEnum = 1;
  } else {
    if (strel_is_single) {
      if (isequal(se_StrelArray_data[0].nhood)) {
        fcnNameEnum = 10;
      } else {
        fcnNameEnum = 11;
      }
    } else {
      fcnNameEnum = 12;
    }
    libNameEnum = 5;
  }
  emxInit_boolean_T(&Apad, 2);
  if (pre_pad) {
    int pad_lr_size[2];
    int pad_ul_size[2];
    strel_getpadsize(se_StrelArray, se_DecomposedStrelArray, pad_ul_data,
                     pad_ul_size, pad_lr_data, pad_lr_size);
    emxInit_boolean_T(&r, 2);
    c_padarray(A, pad_ul_data, r);
    d_padarray(r, pad_lr_data, Apad);
    Apad_data = Apad->data;
    emxFree_boolean_T(&r);
  } else {
    i = Apad->size[0] * Apad->size[1];
    Apad->size[0] = A->size[0];
    Apad->size[1] = A->size[1];
    emxEnsureCapacity_boolean_T(Apad, i);
    Apad_data = Apad->data;
    offset = A->size[0] * A->size[1];
    for (i = 0; i < offset; i++) {
      Apad_data[i] = A_data[i];
    }
    pad_ul_data[0] = -1.0;
    pad_lr_data[0] = -1.0;
    pad_ul_data[1] = -1.0;
    pad_lr_data[1] = -1.0;
  }
  emxInit_uint32_T(&Apadpack);
  Apadpack_data = Apadpack->data;
  if (pre_pack) {
    numRows = Apad->size[0];
    offset = (int)ceil((double)Apad->size[0] / 32.0);
    if ((Apad->size[0] == 0) || (Apad->size[1] == 0)) {
      i = Apadpack->size[0] * Apadpack->size[1];
      Apadpack->size[0] = offset;
      Apadpack->size[1] = Apad->size[1];
      emxEnsureCapacity_uint32_T(Apadpack, i);
      Apadpack_data = Apadpack->data;
      offset *= Apad->size[1];
      for (i = 0; i < offset; i++) {
        Apadpack_data[i] = 0U;
      }
    } else {
      i = Apadpack->size[0] * Apadpack->size[1];
      Apadpack->size[0] = offset;
      Apadpack->size[1] = Apad->size[1];
      emxEnsureCapacity_uint32_T(Apadpack, i);
      Apadpack_data = Apadpack->data;
      bwSize[0] = Apad->size[0];
      bwSize[1] = Apad->size[1];
      bwpSize[0] = offset;
      bwpSize[1] = Apad->size[1];
      bwPackingtbb(&Apad_data[0], &bwSize[0], &Apadpack_data[0], &bwpSize[0],
                   true);
    }
    Apad->size[0] = 0;
    Apad->size[1] = 0;
  } else {
    numRows = -1;
    Apadpack->size[0] = 0;
    Apadpack->size[1] = 0;
  }
  emxInit_uint32_T(&Bpack);
  i = Bpack->size[0] * Bpack->size[1];
  Bpack->size[0] = Apadpack->size[0];
  Bpack->size[1] = Apadpack->size[1];
  emxEnsureCapacity_uint32_T(Bpack, i);
  Bpack_data = Bpack->data;
  i = B->size[0] * B->size[1];
  B->size[0] = Apad->size[0];
  B->size[1] = Apad->size[1];
  emxEnsureCapacity_boolean_T(B, i);
  B_data = B->data;
  i = seq_StrelArray->size[1];
  emxInit_boolean_T(&nhood, 3);
  emxInit_real_T(&allheight, 3);
  emxInitStruct_strel(&b_obj);
  for (sInd = 0; sInd < i; sInd++) {
    double tmp;
    int nd2;
    int tmp_tmp;
    i1 = obj.StrelArray->size[0] * obj.StrelArray->size[1];
    obj.StrelArray->size[0] = 1;
    offset = seq_StrelArray->size[1];
    obj.StrelArray->size[1] = seq_StrelArray->size[1];
    d_emxEnsureCapacity_images_inte(obj.StrelArray, i1);
    for (i1 = 0; i1 < offset; i1++) {
      c_emxCopyStruct_images_internal(&obj.StrelArray->data[i1],
                                      &seq_StrelArray_data[i1]);
    }
    i1 = obj.DecomposedStrelArray->size[0] * obj.DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[0] = 1;
    offset = seq_DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[1] = seq_DecomposedStrelArray->size[1];
    emxEnsureCapacity_cell_wrap_11(obj.DecomposedStrelArray, i1);
    for (i1 = 0; i1 < offset; i1++) {
      emxCopyStruct_cell_wrap_1(&obj.DecomposedStrelArray->data[i1],
                                &seq_DecomposedStrelArray_data[i1]);
    }
    strel_parenReference(&obj, (double)sInd + 1.0);
    i1 = b_obj.StrelArray->size[0] * b_obj.StrelArray->size[1];
    b_obj.StrelArray->size[0] = 1;
    offset = seq_StrelArray->size[1];
    b_obj.StrelArray->size[1] = seq_StrelArray->size[1];
    d_emxEnsureCapacity_images_inte(b_obj.StrelArray, i1);
    for (i1 = 0; i1 < offset; i1++) {
      c_emxCopyStruct_images_internal(&b_obj.StrelArray->data[i1],
                                      &seq_StrelArray_data[i1]);
    }
    i1 = b_obj.DecomposedStrelArray->size[0] *
         b_obj.DecomposedStrelArray->size[1];
    b_obj.DecomposedStrelArray->size[0] = 1;
    offset = seq_DecomposedStrelArray->size[1];
    b_obj.DecomposedStrelArray->size[1] = seq_DecomposedStrelArray->size[1];
    emxEnsureCapacity_cell_wrap_11(b_obj.DecomposedStrelArray, i1);
    for (i1 = 0; i1 < offset; i1++) {
      emxCopyStruct_cell_wrap_1(&b_obj.DecomposedStrelArray->data[i1],
                                &seq_DecomposedStrelArray_data[i1]);
    }
    strel_parenReference(&b_obj, (double)sInd + 1.0);
    i1 = nhood->size[0] * nhood->size[1] * nhood->size[2];
    nhood->size[0] = obj.StrelArray->data[0].nhood->size[0];
    nhood->size[1] = obj.StrelArray->data[0].nhood->size[1];
    nhood->size[2] = 1;
    emxEnsureCapacity_boolean_T(nhood, i1);
    nhood_data = nhood->data;
    loop_ub_tmp = obj.StrelArray->data[0].nhood->size[0] *
                  obj.StrelArray->data[0].nhood->size[1];
    for (i1 = 0; i1 < loop_ub_tmp; i1++) {
      nhood_data[i1] = obj.StrelArray->data[0].nhood->data[i1];
    }
    i1 = allheight->size[0] * allheight->size[1] * allheight->size[2];
    allheight->size[0] = b_obj.StrelArray->data[0].height->size[0];
    allheight->size[1] = b_obj.StrelArray->data[0].height->size[1];
    allheight->size[2] = 1;
    emxEnsureCapacity_real_T(allheight, i1);
    allheight_data = allheight->data;
    b_loop_ub_tmp = b_obj.StrelArray->data[0].height->size[0] *
                    b_obj.StrelArray->data[0].height->size[1];
    for (i1 = 0; i1 < b_loop_ub_tmp; i1++) {
      allheight_data[i1] = b_obj.StrelArray->data[0].height->data[i1];
    }
    b = ((b_obj.StrelArray->data[0].height->size[0] != 0) &&
         (b_obj.StrelArray->data[0].height->size[1] != 0));
    if (b && (b_obj.StrelArray->data[0].height->size[0] > 1)) {
      n = b_obj.StrelArray->data[0].height->size[0] - 1;
      nd2 = b_obj.StrelArray->data[0].height->size[0] >> 1;
      i1 = b_obj.StrelArray->data[0].height->size[1] - 1;
      for (j = 0; j <= i1; j++) {
        offset = j * allheight->size[0];
        for (k = 0; k < nd2; k++) {
          tmp_tmp = offset + k;
          tmp = allheight_data[tmp_tmp];
          i2 = (offset + n) - k;
          allheight_data[tmp_tmp] = allheight_data[i2];
          allheight_data[i2] = tmp;
        }
      }
    }
    if (b && (allheight->size[1] > 1)) {
      offset = allheight->size[0];
      n = allheight->size[1] - 1;
      nd2 = allheight->size[1] >> 1;
      i1 = allheight->size[0] - 1;
      for (j = 0; j <= i1; j++) {
        for (k = 0; k < nd2; k++) {
          tmp_tmp = j + k * offset;
          tmp = allheight_data[tmp_tmp];
          i2 = j + (n - k) * offset;
          allheight_data[tmp_tmp] = allheight_data[i2];
          allheight_data[i2] = tmp;
        }
      }
    }
    strel_is_all_flat = false;
    offset = 0;
    exitg1 = false;
    while ((!exitg1) && (offset + 1 <= b_loop_ub_tmp)) {
      if ((allheight_data[offset] == 0.0) || rtIsNaN(allheight_data[offset])) {
        offset++;
      } else {
        strel_is_all_flat = true;
        exitg1 = true;
      }
    }
    if (strel_is_all_flat) {
      i1 = nhood->size[0] * nhood->size[1] * nhood->size[2];
      nhood->size[0] = obj.StrelArray->data[0].nhood->size[0];
      nhood->size[1] = obj.StrelArray->data[0].nhood->size[1];
      nhood->size[2] = 1;
      emxEnsureCapacity_boolean_T(nhood, i1);
      nhood_data = nhood->data;
      for (i1 = 0; i1 < loop_ub_tmp; i1++) {
        nhood_data[i1] = obj.StrelArray->data[0].nhood->data[i1];
      }
      b = ((obj.StrelArray->data[0].nhood->size[0] != 0) &&
           (obj.StrelArray->data[0].nhood->size[1] != 0));
      if (b && (obj.StrelArray->data[0].nhood->size[0] > 1)) {
        n = obj.StrelArray->data[0].nhood->size[0] - 1;
        nd2 = obj.StrelArray->data[0].nhood->size[0] >> 1;
        i1 = obj.StrelArray->data[0].nhood->size[1] - 1;
        for (j = 0; j <= i1; j++) {
          offset = j * nhood->size[0];
          for (k = 0; k < nd2; k++) {
            tmp_tmp = offset + k;
            strel_is_all_flat = nhood_data[tmp_tmp];
            i2 = (offset + n) - k;
            nhood_data[tmp_tmp] = nhood_data[i2];
            nhood_data[i2] = strel_is_all_flat;
          }
        }
      }
      if (b && (nhood->size[1] > 1)) {
        offset = nhood->size[0];
        n = nhood->size[1] - 1;
        nd2 = nhood->size[1] >> 1;
        i1 = nhood->size[0] - 1;
        for (j = 0; j <= i1; j++) {
          for (k = 0; k < nd2; k++) {
            tmp_tmp = j + k * offset;
            strel_is_all_flat = nhood_data[tmp_tmp];
            i2 = j + (n - k) * offset;
            nhood_data[tmp_tmp] = nhood_data[i2];
            nhood_data[i2] = strel_is_all_flat;
          }
        }
      }
    }
    if (pre_pack) {
      double nsizeT_data[3];
      bwSize[0] = Apadpack->size[0];
      nsizeT_data[0] = nhood->size[0];
      bwSize[1] = Apadpack->size[1];
      nsizeT_data[1] = nhood->size[1];
      dilate_packed_uint32(&Apadpack_data[0], &bwSize[0], 2.0, &nhood_data[0],
                           &nsizeT_data[0], 2.0, &Bpack_data[0], true);
      i1 = Apadpack->size[0] * Apadpack->size[1];
      Apadpack->size[0] = Bpack->size[0];
      Apadpack->size[1] = Bpack->size[1];
      emxEnsureCapacity_uint32_T(Apadpack, i1);
      Apadpack_data = Apadpack->data;
      offset = Bpack->size[0] * Bpack->size[1];
      for (i1 = 0; i1 < offset; i1++) {
        Apadpack_data[i1] = Bpack_data[i1];
      }
    } else {
      if (libNameEnum == 5) {
        if (fcnNameEnum == 10) {
          double nsizeT_data[3];
          bwSize[0] = Apad->size[0];
          nsizeT_data[0] = nhood->size[0];
          bwSize[1] = Apad->size[1];
          nsizeT_data[1] = nhood->size[1];
          dilate_binary_ones33_tbb(&Apad_data[0], &bwSize[0], 2.0,
                                   &nhood_data[0], &nsizeT_data[0], 2.0,
                                   &B_data[0]);
        } else if (fcnNameEnum == 11) {
          double nsizeT_data[3];
          bwSize[0] = Apad->size[0];
          nsizeT_data[0] = nhood->size[0];
          bwSize[1] = Apad->size[1];
          nsizeT_data[1] = nhood->size[1];
          dilate_binary_twod_tbb(&Apad_data[0], &bwSize[0], 2.0, &nhood_data[0],
                                 &nsizeT_data[0], 2.0, &B_data[0]);
        } else if (fcnNameEnum == 12) {
          double nsizeT_data[3];
          bwSize[0] = Apad->size[0];
          nsizeT_data[0] = nhood->size[0];
          bwSize[1] = Apad->size[1];
          nsizeT_data[1] = nhood->size[1];
          dilate_binary_tbb(&Apad_data[0], &bwSize[0], 2.0, &nhood_data[0],
                            &nsizeT_data[0], 2.0, &B_data[0]);
        }
      } else if (fcnNameEnum == 10) {
        double nsizeT_data[3];
        bwSize[0] = Apad->size[0];
        nsizeT_data[0] = nhood->size[0];
        bwSize[1] = Apad->size[1];
        nsizeT_data[1] = nhood->size[1];
        dilate_binary_ones33_tbb(&Apad_data[0], &bwSize[0], 2.0, &nhood_data[0],
                                 &nsizeT_data[0], 2.0, &B_data[0]);
      } else if (fcnNameEnum == 11) {
        double nsizeT_data[3];
        bwSize[0] = Apad->size[0];
        nsizeT_data[0] = nhood->size[0];
        bwSize[1] = Apad->size[1];
        nsizeT_data[1] = nhood->size[1];
        dilate_binary_twod_tbb(&Apad_data[0], &bwSize[0], 2.0, &nhood_data[0],
                               &nsizeT_data[0], 2.0, &B_data[0]);
      } else if (fcnNameEnum == 12) {
        double nsizeT_data[3];
        bwSize[0] = Apad->size[0];
        nsizeT_data[0] = nhood->size[0];
        bwSize[1] = Apad->size[1];
        nsizeT_data[1] = nhood->size[1];
        dilate_binary_tbb(&Apad_data[0], &bwSize[0], 2.0, &nhood_data[0],
                          &nsizeT_data[0], 2.0, &B_data[0]);
      }
      i1 = Apad->size[0] * Apad->size[1];
      Apad->size[0] = B->size[0];
      Apad->size[1] = B->size[1];
      emxEnsureCapacity_boolean_T(Apad, i1);
      Apad_data = Apad->data;
      offset = B->size[0] * B->size[1];
      for (i1 = 0; i1 < offset; i1++) {
        Apad_data[i1] = B_data[i1];
      }
    }
  }
  emxFreeStruct_strel(&b_obj);
  emxFreeStruct_strel(&obj);
  emxFree_cell_wrap_1(&seq_DecomposedStrelArray);
  c_emxFree_images_internal_coder(&seq_StrelArray);
  emxFree_real_T(&allheight);
  emxFree_boolean_T(&nhood);
  emxFree_uint32_T(&Apadpack);
  emxFree_boolean_T(&Apad);
  if (pre_pack) {
    if ((Bpack->size[0] == 0) || (Bpack->size[1] == 0)) {
      i = B->size[0] * B->size[1];
      B->size[0] = numRows;
      B->size[1] = Bpack->size[1];
      emxEnsureCapacity_boolean_T(B, i);
      B_data = B->data;
      offset = numRows * Bpack->size[1];
      for (i = 0; i < offset; i++) {
        B_data[i] = false;
      }
    } else {
      i = B->size[0] * B->size[1];
      B->size[0] = numRows;
      B->size[1] = Bpack->size[1];
      emxEnsureCapacity_boolean_T(B, i);
      B_data = B->data;
      bwpSize[0] = Bpack->size[0];
      bwSize[0] = numRows;
      bwpSize[1] = Bpack->size[1];
      bwSize[1] = Bpack->size[1];
      bwUnpackingtbb(&Bpack_data[0], &bwpSize[0], &B_data[0], &bwSize[0], true);
    }
  }
  emxFree_uint32_T(&Bpack);
  if (pre_pad) {
    bwSize[0] =
        ((((pad_ul_data[0] + 1.0) + (double)B->size[0]) - pad_ul_data[0]) -
         pad_lr_data[0]) -
        1.0;
    bwSize[1] =
        ((((pad_ul_data[1] + 1.0) + (double)B->size[1]) - pad_ul_data[1]) -
         pad_lr_data[1]) -
        1.0;
    if (pad_ul_data[0] + 1.0 > bwSize[0]) {
      i = -1;
      i1 = -1;
    } else {
      i = (int)(pad_ul_data[0] + 1.0) - 2;
      i1 = (int)bwSize[0] - 1;
    }
    if (pad_ul_data[1] + 1.0 > bwSize[1]) {
      i2 = 0;
      offset = 0;
    } else {
      i2 = (int)(pad_ul_data[1] + 1.0) - 1;
      offset = (int)bwSize[1];
    }
    loop_ub_tmp = offset - i2;
    for (offset = 0; offset < loop_ub_tmp; offset++) {
      b_loop_ub_tmp = i1 - i;
      for (n = 0; n < b_loop_ub_tmp; n++) {
        B_data[n + b_loop_ub_tmp * offset] =
            B_data[((i + n) + B->size[0] * (i2 + offset)) + 1];
      }
    }
    i2 = B->size[0] * B->size[1];
    B->size[0] = i1 - i;
    B->size[1] = loop_ub_tmp;
    emxEnsureCapacity_boolean_T(B, i2);
  }
}

/*
 * Arguments    : const unsigned int A[63720]
 *                unsigned int B[63720]
 * Return Type  : void
 */
void imdilate(const unsigned int A[63720], unsigned int B[63720])
{
  static unsigned int Apad[67210];
  static unsigned int Apadpack[67210];
  static unsigned int Apadpre[65458];
  static unsigned int b_A[63720];
  double asizeT_tmp[2];
  double nsizeT[2];
  int i;
  boolean_T nhood[7];
  memcpy(&b_A[0], &A[0], 63720U * sizeof(unsigned int));
  setPackedFillBits(b_A);
  memset(&Apadpre[0], 0, 322U * sizeof(unsigned int));
  for (i = 0; i < 1416; i++) {
    int Apadpre_tmp;
    Apadpre_tmp = 46 * (i + 7);
    Apadpre[Apadpre_tmp] = 0U;
    memcpy(&Apadpre[Apadpre_tmp + 1], &b_A[i * 45], 45U * sizeof(unsigned int));
  }
  memset(&Apad[66881], 0, 329U * sizeof(unsigned int));
  for (i = 0; i < 1423; i++) {
    Apad[47 * i + 46] = 0U;
    memcpy(&Apad[i * 47], &Apadpre[i * 46], 46U * sizeof(unsigned int));
  }
  for (i = 0; i < 7; i++) {
    nhood[i] = true;
  }
  asizeT_tmp[0] = 47.0;
  nsizeT[0] = 7.0;
  asizeT_tmp[1] = 1430.0;
  nsizeT[1] = 1.0;
  dilate_packed_uint32(&Apad[0], &asizeT_tmp[0], 2.0, &nhood[0], &nsizeT[0],
                       2.0, &Apadpack[0], true);
  nsizeT[0] = 5.0;
  nsizeT[1] = 5.0;
  dilate_packed_uint32(&Apadpack[0], &asizeT_tmp[0], 2.0, &bv[0], &nsizeT[0],
                       2.0, &Apad[0], true);
  memcpy(&Apadpack[0], &Apad[0], 67210U * sizeof(unsigned int));
  for (i = 0; i < 7; i++) {
    nhood[i] = true;
  }
  nsizeT[0] = 1.0;
  nsizeT[1] = 7.0;
  dilate_packed_uint32(&Apadpack[0], &asizeT_tmp[0], 2.0, &nhood[0], &nsizeT[0],
                       2.0, &Apad[0], true);
  memcpy(&Apadpack[0], &Apad[0], 67210U * sizeof(unsigned int));
  nsizeT[0] = 5.0;
  nsizeT[1] = 5.0;
  dilate_packed_uint32(&Apadpack[0], &asizeT_tmp[0], 2.0, &bv1[0], &nsizeT[0],
                       2.0, &Apad[0], true);
  for (i = 0; i < 1416; i++) {
    memcpy(&B[i * 45], &Apad[i * 47 + 330], 45U * sizeof(unsigned int));
  }
}

/*
 * File trailer for imdilate.c
 *
 * [EOF]
 */
