/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: imerode.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:17:16
 */

/* Include Files */
#include "imerode.h"
#include "bwpack.h"
#include "bwunpack.h"
#include "cell_boundary_data.h"
#include "cell_boundary_emxutil.h"
#include "cell_boundary_types.h"
#include "isequal.h"
#include "rt_nonfinite.h"
#include "setPackedFillBits.h"
#include "strel.h"
#include "libmwbwpackctbb.h"
#include "libmwbwunpackctbb.h"
#include "libmwmorphop_binary.h"
#include "libmwmorphop_binary_tbb.h"
#include "libmwmorphop_packed.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : const unsigned int A[61600]
 *                unsigned int B[61600]
 * Return Type  : void
 */
void b_imerode(const unsigned int A[61600], unsigned int B[61600])
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
  c_setPackedFillBits(b_A);
  for (i = 0; i < 225; i++) {
    Apadpre[i] = MAX_uint32_T;
  }
  for (i = 0; i < 1400; i++) {
    int Apadpre_tmp;
    Apadpre_tmp = 45 * (i + 5);
    Apadpre[Apadpre_tmp] = MAX_uint32_T;
    memcpy(&Apadpre[Apadpre_tmp + 1], &b_A[i * 44], 44U * sizeof(unsigned int));
  }
  for (i = 0; i < 230; i++) {
    Apad[i + 64630] = MAX_uint32_T;
  }
  for (i = 0; i < 1405; i++) {
    Apad[46 * i + 45] = MAX_uint32_T;
    memcpy(&Apad[i * 46], &Apadpre[i * 45], 45U * sizeof(unsigned int));
  }
  for (i = 0; i < 5; i++) {
    nhood[i] = true;
  }
  asizeT_tmp[0] = 46.0;
  nsizeT[0] = 5.0;
  asizeT_tmp[1] = 1410.0;
  nsizeT[1] = 1.0;
  erode_packed_uint32(&Apad[0], &asizeT_tmp[0], 2.0, &nhood[0], &nsizeT[0], 2.0,
                      1400.0, &Apadpack[0], true);
  nsizeT[0] = 3.0;
  nsizeT[1] = 3.0;
  erode_packed_uint32(&Apadpack[0], &asizeT_tmp[0], 2.0, &bv2[0], &nsizeT[0],
                      2.0, 1400.0, &Apad[0], true);
  memcpy(&Apadpack[0], &Apad[0], 64860U * sizeof(unsigned int));
  for (i = 0; i < 5; i++) {
    nhood[i] = true;
  }
  boolean_T b_nhood[3];
  nsizeT[0] = 1.0;
  nsizeT[1] = 5.0;
  erode_packed_uint32(&Apadpack[0], &asizeT_tmp[0], 2.0, &nhood[0], &nsizeT[0],
                      2.0, 1400.0, &Apad[0], true);
  memcpy(&Apadpack[0], &Apad[0], 64860U * sizeof(unsigned int));
  nsizeT[0] = 3.0;
  nsizeT[1] = 3.0;
  erode_packed_uint32(&Apadpack[0], &asizeT_tmp[0], 2.0, &bv3[0], &nsizeT[0],
                      2.0, 1400.0, &Apad[0], true);
  memcpy(&Apadpack[0], &Apad[0], 64860U * sizeof(unsigned int));
  b_nhood[0] = true;
  b_nhood[1] = true;
  b_nhood[2] = true;
  nsizeT[0] = 1.0;
  nsizeT[1] = 3.0;
  erode_packed_uint32(&Apadpack[0], &asizeT_tmp[0], 2.0, &b_nhood[0],
                      &nsizeT[0], 2.0, 1400.0, &Apad[0], true);
  memcpy(&Apadpack[0], &Apad[0], 64860U * sizeof(unsigned int));
  b_nhood[0] = true;
  b_nhood[1] = true;
  b_nhood[2] = true;
  nsizeT[0] = 3.0;
  nsizeT[1] = 1.0;
  erode_packed_uint32(&Apadpack[0], &asizeT_tmp[0], 2.0, &b_nhood[0],
                      &nsizeT[0], 2.0, 1400.0, &Apad[0], true);
  for (i = 0; i < 1400; i++) {
    memcpy(&B[i * 44], &Apad[i * 46 + 231], 44U * sizeof(unsigned int));
  }
}

/*
 * Arguments    : const boolean_T A[1960000]
 *                boolean_T B[1960000]
 * Return Type  : void
 */
void c_imerode(const boolean_T A[1960000], boolean_T B[1960000])
{
  static unsigned int Apadpack[63630];
  static unsigned int b_B[63630];
  static boolean_T Apad[1999396];
  static boolean_T Apadpre[1979649];
  double asizeT_tmp[2];
  double nsizeT[2];
  int i;
  int j;
  boolean_T nhood[7];
  for (j = 0; j < 9849; j++) {
    Apadpre[j] = true;
  }
  for (j = 0; j < 1400; j++) {
    for (i = 0; i < 7; i++) {
      Apadpre[i + 1407 * (j + 7)] = true;
    }
    memcpy(&Apadpre[j * 1407 + 9856], &A[j * 1400], 1400U * sizeof(boolean_T));
  }
  for (j = 0; j < 9898; j++) {
    Apad[j + 1989498] = true;
  }
  for (j = 0; j < 1407; j++) {
    for (i = 0; i < 7; i++) {
      Apad[(i + 1414 * j) + 1407] = true;
    }
    memcpy(&Apad[j * 1414], &Apadpre[j * 1407], 1407U * sizeof(boolean_T));
  }
  b_bwpack(Apad, Apadpack);
  for (i = 0; i < 7; i++) {
    nhood[i] = true;
  }
  asizeT_tmp[0] = 45.0;
  nsizeT[0] = 7.0;
  asizeT_tmp[1] = 1414.0;
  nsizeT[1] = 1.0;
  erode_packed_uint32(&Apadpack[0], &asizeT_tmp[0], 2.0, &nhood[0], &nsizeT[0],
                      2.0, 1414.0, &b_B[0], true);
  memcpy(&Apadpack[0], &b_B[0], 63630U * sizeof(unsigned int));
  nsizeT[0] = 5.0;
  nsizeT[1] = 5.0;
  erode_packed_uint32(&Apadpack[0], &asizeT_tmp[0], 2.0, &bv[0], &nsizeT[0],
                      2.0, 1414.0, &b_B[0], true);
  memcpy(&Apadpack[0], &b_B[0], 63630U * sizeof(unsigned int));
  for (i = 0; i < 7; i++) {
    nhood[i] = true;
  }
  nsizeT[0] = 1.0;
  nsizeT[1] = 7.0;
  erode_packed_uint32(&Apadpack[0], &asizeT_tmp[0], 2.0, &nhood[0], &nsizeT[0],
                      2.0, 1414.0, &b_B[0], true);
  memcpy(&Apadpack[0], &b_B[0], 63630U * sizeof(unsigned int));
  nsizeT[0] = 5.0;
  nsizeT[1] = 5.0;
  erode_packed_uint32(&Apadpack[0], &asizeT_tmp[0], 2.0, &bv1[0], &nsizeT[0],
                      2.0, 1414.0, &b_B[0], true);
  b_bwunpack(b_B, Apad);
  for (j = 0; j < 1400; j++) {
    memcpy(&B[j * 1400], &Apad[j * 1414 + 9905], 1400U * sizeof(boolean_T));
  }
}

/*
 * Arguments    : const unsigned int A[61600]
 *                unsigned int B[61600]
 * Return Type  : void
 */
void d_imerode(const unsigned int A[61600], unsigned int B[61600])
{
  static unsigned int Apad[64584];
  static unsigned int Apadpack[64584];
  static unsigned int Apadpre[63090];
  static unsigned int b_A[61600];
  int j;
  memcpy(&b_A[0], &A[0], 61600U * sizeof(unsigned int));
  c_setPackedFillBits(b_A);
  for (j = 0; j < 90; j++) {
    Apadpre[j] = MAX_uint32_T;
  }
  for (j = 0; j < 1400; j++) {
    int Apadpre_tmp;
    Apadpre_tmp = 45 * (j + 2);
    Apadpre[Apadpre_tmp] = MAX_uint32_T;
    memcpy(&Apadpre[Apadpre_tmp + 1], &b_A[j * 44], 44U * sizeof(unsigned int));
  }
  for (j = 0; j < 92; j++) {
    Apad[j + 64492] = MAX_uint32_T;
  }
  for (j = 0; j < 1402; j++) {
    Apad[46 * j + 45] = MAX_uint32_T;
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
  erode_packed_uint32(&Apad[0], &asizeT_tmp[0], 2.0, &nhood[0], &nsizeT_tmp[0],
                      2.0, 1400.0, &Apadpack[0], true);
  b_nhood = true;
  nsizeT[0] = 1.0;
  nsizeT[1] = 1.0;
  erode_packed_uint32(&Apadpack[0], &asizeT_tmp[0], 2.0, &b_nhood, &nsizeT[0],
                      2.0, 1400.0, &Apad[0], true);
  memcpy(&Apadpack[0], &Apad[0], 64584U * sizeof(unsigned int));
  nhood[0] = true;
  nhood[1] = true;
  nhood[2] = true;
  b_nsizeT_tmp[0] = 1.0;
  b_nsizeT_tmp[1] = 3.0;
  erode_packed_uint32(&Apadpack[0], &asizeT_tmp[0], 2.0, &nhood[0],
                      &b_nsizeT_tmp[0], 2.0, 1400.0, &Apad[0], true);
  memcpy(&Apadpack[0], &Apad[0], 64584U * sizeof(unsigned int));
  b_nhood = true;
  nsizeT[0] = 1.0;
  nsizeT[1] = 1.0;
  erode_packed_uint32(&Apadpack[0], &asizeT_tmp[0], 2.0, &b_nhood, &nsizeT[0],
                      2.0, 1400.0, &Apad[0], true);
  memcpy(&Apadpack[0], &Apad[0], 64584U * sizeof(unsigned int));
  nhood[0] = true;
  nhood[1] = true;
  nhood[2] = true;
  erode_packed_uint32(&Apadpack[0], &asizeT_tmp[0], 2.0, &nhood[0],
                      &b_nsizeT_tmp[0], 2.0, 1400.0, &Apad[0], true);
  memcpy(&Apadpack[0], &Apad[0], 64584U * sizeof(unsigned int));
  nhood[0] = true;
  nhood[1] = true;
  nhood[2] = true;
  erode_packed_uint32(&Apadpack[0], &asizeT_tmp[0], 2.0, &nhood[0],
                      &nsizeT_tmp[0], 2.0, 1400.0, &Apad[0], true);
  for (j = 0; j < 1400; j++) {
    memcpy(&B[j * 44], &Apad[j * 46 + 93], 44U * sizeof(unsigned int));
  }
}

/*
 * Arguments    : const boolean_T A[1960000]
 *                const c_emxArray_images_internal_code *se_StrelArray
 *                const emxArray_cell_wrap_1 *se_DecomposedStrelArray
 *                emxArray_boolean_T *B
 * Return Type  : void
 */
void e_imerode(const boolean_T A[1960000],
               const c_emxArray_images_internal_code *se_StrelArray,
               const emxArray_cell_wrap_1 *se_DecomposedStrelArray,
               emxArray_boolean_T *B)
{
  c_emxArray_images_internal_code *seq_StrelArray;
  const c_images_internal_coder_strel_S *se_StrelArray_data;
  c_images_internal_coder_strel_S *seq_StrelArray_data;
  cell_wrap_1 *seq_DecomposedStrelArray_data;
  emxArray_boolean_T *Apad;
  emxArray_boolean_T *Apadpre;
  emxArray_boolean_T *isEachStrelInSE2D;
  emxArray_boolean_T *x;
  emxArray_cell_wrap_1 *seq_DecomposedStrelArray;
  emxArray_uint32_T *Apadpack;
  emxArray_uint32_T *Bpack;
  emxArray_uint32_T *P;
  strel obj;
  strel seq;
  double bwSize[2];
  double bwpSize[2];
  double pad_lr_data[2];
  double pad_ul_data[2];
  int i;
  int i1;
  int i2;
  int loop_ub_tmp;
  int sInd;
  int vlen;
  int xpageoffset;
  unsigned int *Bpack_data;
  unsigned int *P_data;
  signed char fcnNameEnum;
  signed char libNameEnum;
  boolean_T b;
  boolean_T exitg1;
  boolean_T pre_pack;
  boolean_T pre_pad;
  boolean_T strel_is_all_flat;
  boolean_T strel_is_single;
  boolean_T *Apad_data;
  boolean_T *Apadpre_data;
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
  emxInitStruct_strel(&seq);
  exitg1 = false;
  while ((!exitg1) && (sInd <= seq_StrelArray->size[1] - 1)) {
    i = seq.StrelArray->size[0] * seq.StrelArray->size[1];
    seq.StrelArray->size[0] = 1;
    seq.StrelArray->size[1] = seq_StrelArray->size[1];
    d_emxEnsureCapacity_images_inte(seq.StrelArray, i);
    vlen = seq_StrelArray->size[1];
    for (i = 0; i < vlen; i++) {
      c_emxCopyStruct_images_internal(&seq.StrelArray->data[i],
                                      &seq_StrelArray_data[i]);
    }
    i = seq.DecomposedStrelArray->size[0] * seq.DecomposedStrelArray->size[1];
    seq.DecomposedStrelArray->size[0] = 1;
    seq.DecomposedStrelArray->size[1] = seq_DecomposedStrelArray->size[1];
    emxEnsureCapacity_cell_wrap_11(seq.DecomposedStrelArray, i);
    vlen = seq_DecomposedStrelArray->size[1];
    for (i = 0; i < vlen; i++) {
      emxCopyStruct_cell_wrap_1(&seq.DecomposedStrelArray->data[i],
                                &seq_DecomposedStrelArray_data[i]);
    }
    strel_parenReference(&seq, (double)sInd + 1.0);
    if (seq.StrelArray->data[0].Flat) {
      sInd++;
    } else {
      strel_is_all_flat = false;
      exitg1 = true;
    }
  }
  i = seq_StrelArray->size[1];
  for (sInd = 0; sInd < i; sInd++) {
    i1 = seq.StrelArray->size[0] * seq.StrelArray->size[1];
    seq.StrelArray->size[0] = 1;
    vlen = seq_StrelArray->size[1];
    seq.StrelArray->size[1] = seq_StrelArray->size[1];
    d_emxEnsureCapacity_images_inte(seq.StrelArray, i1);
    for (i1 = 0; i1 < vlen; i1++) {
      c_emxCopyStruct_images_internal(&seq.StrelArray->data[i1],
                                      &seq_StrelArray_data[i1]);
    }
    i1 = seq.DecomposedStrelArray->size[0] * seq.DecomposedStrelArray->size[1];
    seq.DecomposedStrelArray->size[0] = 1;
    vlen = seq_DecomposedStrelArray->size[1];
    seq.DecomposedStrelArray->size[1] = seq_DecomposedStrelArray->size[1];
    emxEnsureCapacity_cell_wrap_11(seq.DecomposedStrelArray, i1);
    for (i1 = 0; i1 < vlen; i1++) {
      emxCopyStruct_cell_wrap_1(&seq.DecomposedStrelArray->data[i1],
                                &seq_DecomposedStrelArray_data[i1]);
    }
    strel_parenReference(&seq, (double)sInd + 1.0);
  }
  b = !strel_is_single;
  emxInit_uint32_T(&P);
  emxInit_boolean_T(&x, 2);
  if (b) {
    int nz[3];
    boolean_T b_x[3];
    strel_decomposeImpl(se_StrelArray, se_DecomposedStrelArray, seq.StrelArray,
                        seq.DecomposedStrelArray);
    i = P->size[0] * P->size[1];
    P->size[0] = seq.StrelArray->size[1];
    P->size[1] = 3;
    emxEnsureCapacity_uint32_T(P, i);
    P_data = P->data;
    loop_ub_tmp = seq.StrelArray->size[1] * 3;
    for (i = 0; i < loop_ub_tmp; i++) {
      P_data[i] = 1U;
    }
    i = seq.StrelArray->size[1];
    for (sInd = 0; sInd < i; sInd++) {
      P_data[sInd] = (unsigned int)seq.StrelArray->data[sInd].nhood->size[0];
      P_data[sInd + P->size[0]] =
          (unsigned int)seq.StrelArray->data[sInd].nhood->size[1];
      P_data[sInd + P->size[0] * 2] = 1U;
    }
    vlen = P->size[0] * 3 - 1;
    for (sInd = 0; sInd <= vlen; sInd++) {
      if ((int)P_data[sInd] == 0) {
        P_data[sInd] = 1U;
      }
    }
    i = x->size[0] * x->size[1];
    x->size[0] = P->size[0];
    x->size[1] = 3;
    emxEnsureCapacity_boolean_T(x, i);
    Apadpre_data = x->data;
    for (i = 0; i < loop_ub_tmp; i++) {
      Apadpre_data[i] = ((int)P_data[i] != 1);
    }
    vlen = x->size[0];
    if (x->size[0] == 0) {
      nz[0] = 0;
      nz[1] = 0;
      nz[2] = 0;
    } else {
      for (sInd = 0; sInd < 3; sInd++) {
        xpageoffset = sInd * x->size[0];
        nz[sInd] = Apadpre_data[xpageoffset];
        for (loop_ub_tmp = 2; loop_ub_tmp <= vlen; loop_ub_tmp++) {
          nz[sInd] += Apadpre_data[(xpageoffset + loop_ub_tmp) - 1];
        }
      }
    }
    b_x[0] = (nz[0] == 1);
    b_x[1] = (nz[1] == 1);
    b_x[2] = (nz[2] == 1);
    pre_pack = false;
    loop_ub_tmp = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub_tmp < 3)) {
      if (b_x[loop_ub_tmp]) {
        pre_pack = true;
        exitg1 = true;
      } else {
        loop_ub_tmp++;
      }
    }
    if (!pre_pack) {
      pre_pad = true;
    } else {
      pre_pad = false;
    }
  } else {
    pre_pad = false;
  }
  emxFree_boolean_T(&x);
  emxFree_uint32_T(&P);
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
    double d;
    double d1;
    int pad_lr_size[2];
    int pad_ul_size[2];
    strel_getpadsize(se_StrelArray, se_DecomposedStrelArray, pad_lr_data,
                     pad_lr_size, pad_ul_data, pad_ul_size);
    emxInit_boolean_T(&Apadpre, 2);
    i = Apadpre->size[0] * Apadpre->size[1];
    Apadpre->size[0] = (int)(pad_ul_data[0] + 1400.0);
    Apadpre->size[1] = (int)(pad_ul_data[1] + 1400.0);
    emxEnsureCapacity_boolean_T(Apadpre, i);
    Apadpre_data = Apadpre->data;
    i = (int)pad_ul_data[1];
    for (vlen = 0; vlen < i; vlen++) {
      i1 = Apadpre->size[0];
      for (sInd = 0; sInd < i1; sInd++) {
        Apadpre_data[sInd + Apadpre->size[0] * vlen] = true;
      }
    }
    i = (int)pad_ul_data[1] + 1;
    i1 = Apadpre->size[1];
    for (vlen = i; vlen <= i1; vlen++) {
      xpageoffset = (int)pad_ul_data[0];
      for (sInd = 0; sInd < xpageoffset; sInd++) {
        Apadpre_data[sInd + Apadpre->size[0] * (vlen - 1)] = true;
      }
    }
    d = pad_ul_data[0];
    d1 = pad_ul_data[1];
    for (vlen = 0; vlen < 1400; vlen++) {
      for (sInd = 0; sInd < 1400; sInd++) {
        Apadpre_data[(sInd + (int)d) + Apadpre->size[0] * (vlen + (int)d1)] =
            A[sInd + 1400 * vlen];
      }
    }
    i = Apad->size[0] * Apad->size[1];
    Apad->size[0] = (int)((double)Apadpre->size[0] + pad_lr_data[0]);
    i1 = (int)((double)Apadpre->size[1] + pad_lr_data[1]);
    Apad->size[1] = (int)((double)Apadpre->size[1] + pad_lr_data[1]);
    emxEnsureCapacity_boolean_T(Apad, i);
    Apad_data = Apad->data;
    i = Apadpre->size[1] + 1;
    for (vlen = i; vlen <= i1; vlen++) {
      xpageoffset = Apad->size[0];
      for (sInd = 0; sInd < xpageoffset; sInd++) {
        Apad_data[sInd + Apad->size[0] * (vlen - 1)] = true;
      }
    }
    i = Apadpre->size[1];
    i1 = Apadpre->size[0] + 1;
    for (vlen = 0; vlen < i; vlen++) {
      xpageoffset = Apad->size[0];
      for (sInd = i1; sInd <= xpageoffset; sInd++) {
        Apad_data[(sInd + Apad->size[0] * vlen) - 1] = true;
      }
    }
    i = Apadpre->size[1];
    i1 = Apadpre->size[0];
    for (vlen = 0; vlen < i; vlen++) {
      for (sInd = 0; sInd < i1; sInd++) {
        Apad_data[sInd + Apad->size[0] * vlen] =
            Apadpre_data[sInd + Apadpre->size[0] * vlen];
      }
    }
    emxFree_boolean_T(&Apadpre);
  } else {
    i = Apad->size[0] * Apad->size[1];
    Apad->size[0] = 1400;
    Apad->size[1] = 1400;
    emxEnsureCapacity_boolean_T(Apad, i);
    Apad_data = Apad->data;
    for (i = 0; i < 1960000; i++) {
      Apad_data[i] = A[i];
    }
    pad_ul_data[0] = -1.0;
    pad_lr_data[0] = -1.0;
    pad_ul_data[1] = -1.0;
    pad_lr_data[1] = -1.0;
  }
  emxInit_uint32_T(&Apadpack);
  P_data = Apadpack->data;
  if (pre_pack) {
    xpageoffset = Apad->size[0];
    i = Apadpack->size[0] * Apadpack->size[1];
    Apadpack->size[0] = (int)ceil((double)Apad->size[0] / 32.0);
    Apadpack->size[1] = Apad->size[1];
    emxEnsureCapacity_uint32_T(Apadpack, i);
    P_data = Apadpack->data;
    bwSize[0] = Apad->size[0];
    bwpSize[0] = Apadpack->size[0];
    bwSize[1] = Apad->size[1];
    bwpSize[1] = Apad->size[1];
    bwPackingtbb(&Apad_data[0], &bwSize[0], &P_data[0], &bwpSize[0], true);
    Apad->size[0] = 0;
    Apad->size[1] = 0;
  } else {
    xpageoffset = -1;
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
  Apadpre_data = B->data;
  i = seq_StrelArray->size[1];
  emxInitStruct_strel(&obj);
  for (sInd = 0; sInd < i; sInd++) {
    i1 = seq.StrelArray->size[0] * seq.StrelArray->size[1];
    seq.StrelArray->size[0] = 1;
    vlen = seq_StrelArray->size[1];
    seq.StrelArray->size[1] = seq_StrelArray->size[1];
    d_emxEnsureCapacity_images_inte(seq.StrelArray, i1);
    for (i1 = 0; i1 < vlen; i1++) {
      c_emxCopyStruct_images_internal(&seq.StrelArray->data[i1],
                                      &seq_StrelArray_data[i1]);
    }
    i1 = seq.DecomposedStrelArray->size[0] * seq.DecomposedStrelArray->size[1];
    seq.DecomposedStrelArray->size[0] = 1;
    vlen = seq_DecomposedStrelArray->size[1];
    seq.DecomposedStrelArray->size[1] = seq_DecomposedStrelArray->size[1];
    emxEnsureCapacity_cell_wrap_11(seq.DecomposedStrelArray, i1);
    for (i1 = 0; i1 < vlen; i1++) {
      emxCopyStruct_cell_wrap_1(&seq.DecomposedStrelArray->data[i1],
                                &seq_DecomposedStrelArray_data[i1]);
    }
    strel_parenReference(&seq, (double)sInd + 1.0);
    i1 = obj.StrelArray->size[0] * obj.StrelArray->size[1];
    obj.StrelArray->size[0] = 1;
    vlen = seq_StrelArray->size[1];
    obj.StrelArray->size[1] = seq_StrelArray->size[1];
    d_emxEnsureCapacity_images_inte(obj.StrelArray, i1);
    for (i1 = 0; i1 < vlen; i1++) {
      c_emxCopyStruct_images_internal(&obj.StrelArray->data[i1],
                                      &seq_StrelArray_data[i1]);
    }
    i1 = obj.DecomposedStrelArray->size[0] * obj.DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[0] = 1;
    vlen = seq_DecomposedStrelArray->size[1];
    obj.DecomposedStrelArray->size[1] = seq_DecomposedStrelArray->size[1];
    emxEnsureCapacity_cell_wrap_11(obj.DecomposedStrelArray, i1);
    for (i1 = 0; i1 < vlen; i1++) {
      emxCopyStruct_cell_wrap_1(&obj.DecomposedStrelArray->data[i1],
                                &seq_DecomposedStrelArray_data[i1]);
    }
    strel_parenReference(&obj, (double)sInd + 1.0);
    if (pre_pack) {
      double nsizeT_data[3];
      bwSize[0] = Apadpack->size[0];
      nsizeT_data[0] = seq.StrelArray->data[0].nhood->size[0];
      bwSize[1] = Apadpack->size[1];
      nsizeT_data[1] = seq.StrelArray->data[0].nhood->size[1];
      erode_packed_uint32(
          &P_data[0], &bwSize[0], 2.0, &seq.StrelArray->data[0].nhood->data[0],
          &nsizeT_data[0], 2.0, (double)xpageoffset, &Bpack_data[0], true);
      i1 = Apadpack->size[0] * Apadpack->size[1];
      Apadpack->size[0] = Bpack->size[0];
      Apadpack->size[1] = Bpack->size[1];
      emxEnsureCapacity_uint32_T(Apadpack, i1);
      P_data = Apadpack->data;
      vlen = Bpack->size[0] * Bpack->size[1];
      for (i1 = 0; i1 < vlen; i1++) {
        P_data[i1] = Bpack_data[i1];
      }
    } else {
      if (libNameEnum == 5) {
        if (fcnNameEnum == 10) {
          double nsizeT_data[3];
          bwSize[0] = Apad->size[0];
          nsizeT_data[0] = seq.StrelArray->data[0].nhood->size[0];
          bwSize[1] = Apad->size[1];
          nsizeT_data[1] = seq.StrelArray->data[0].nhood->size[1];
          erode_binary_ones33_tbb(&Apad_data[0], &bwSize[0], 2.0,
                                  &seq.StrelArray->data[0].nhood->data[0],
                                  &nsizeT_data[0], 2.0, &Apadpre_data[0]);
        } else if (fcnNameEnum == 11) {
          double nsizeT_data[3];
          bwSize[0] = Apad->size[0];
          nsizeT_data[0] = seq.StrelArray->data[0].nhood->size[0];
          bwSize[1] = Apad->size[1];
          nsizeT_data[1] = seq.StrelArray->data[0].nhood->size[1];
          erode_binary_twod_tbb(&Apad_data[0], &bwSize[0], 2.0,
                                &seq.StrelArray->data[0].nhood->data[0],
                                &nsizeT_data[0], 2.0, &Apadpre_data[0]);
        } else if (fcnNameEnum == 12) {
          double nsizeT_data[3];
          bwSize[0] = Apad->size[0];
          nsizeT_data[0] = seq.StrelArray->data[0].nhood->size[0];
          bwSize[1] = Apad->size[1];
          nsizeT_data[1] = seq.StrelArray->data[0].nhood->size[1];
          erode_binary_tbb(&Apad_data[0], &bwSize[0], 2.0,
                           &seq.StrelArray->data[0].nhood->data[0],
                           &nsizeT_data[0], 2.0, &Apadpre_data[0]);
        }
      } else if (fcnNameEnum == 10) {
        double nsizeT_data[3];
        bwSize[0] = Apad->size[0];
        nsizeT_data[0] = seq.StrelArray->data[0].nhood->size[0];
        bwSize[1] = Apad->size[1];
        nsizeT_data[1] = seq.StrelArray->data[0].nhood->size[1];
        erode_binary_ones33_tbb(&Apad_data[0], &bwSize[0], 2.0,
                                &seq.StrelArray->data[0].nhood->data[0],
                                &nsizeT_data[0], 2.0, &Apadpre_data[0]);
      } else if (fcnNameEnum == 11) {
        double nsizeT_data[3];
        bwSize[0] = Apad->size[0];
        nsizeT_data[0] = seq.StrelArray->data[0].nhood->size[0];
        bwSize[1] = Apad->size[1];
        nsizeT_data[1] = seq.StrelArray->data[0].nhood->size[1];
        erode_binary_twod_tbb(&Apad_data[0], &bwSize[0], 2.0,
                              &seq.StrelArray->data[0].nhood->data[0],
                              &nsizeT_data[0], 2.0, &Apadpre_data[0]);
      } else if (fcnNameEnum == 12) {
        double nsizeT_data[3];
        bwSize[0] = Apad->size[0];
        nsizeT_data[0] = seq.StrelArray->data[0].nhood->size[0];
        bwSize[1] = Apad->size[1];
        nsizeT_data[1] = seq.StrelArray->data[0].nhood->size[1];
        erode_binary_tbb(&Apad_data[0], &bwSize[0], 2.0,
                         &seq.StrelArray->data[0].nhood->data[0],
                         &nsizeT_data[0], 2.0, &Apadpre_data[0]);
      }
      i1 = Apad->size[0] * Apad->size[1];
      Apad->size[0] = B->size[0];
      Apad->size[1] = B->size[1];
      emxEnsureCapacity_boolean_T(Apad, i1);
      Apad_data = Apad->data;
      vlen = B->size[0] * B->size[1];
      for (i1 = 0; i1 < vlen; i1++) {
        Apad_data[i1] = Apadpre_data[i1];
      }
    }
  }
  emxFreeStruct_strel(&seq);
  emxFreeStruct_strel(&obj);
  emxFree_cell_wrap_1(&seq_DecomposedStrelArray);
  c_emxFree_images_internal_coder(&seq_StrelArray);
  emxFree_uint32_T(&Apadpack);
  emxFree_boolean_T(&Apad);
  if (pre_pack) {
    if ((Bpack->size[0] == 0) || (Bpack->size[1] == 0)) {
      i = B->size[0] * B->size[1];
      B->size[0] = xpageoffset;
      B->size[1] = Bpack->size[1];
      emxEnsureCapacity_boolean_T(B, i);
      Apadpre_data = B->data;
      vlen = xpageoffset * Bpack->size[1];
      for (i = 0; i < vlen; i++) {
        Apadpre_data[i] = false;
      }
    } else {
      i = B->size[0] * B->size[1];
      B->size[0] = xpageoffset;
      B->size[1] = Bpack->size[1];
      emxEnsureCapacity_boolean_T(B, i);
      Apadpre_data = B->data;
      bwpSize[0] = Bpack->size[0];
      bwSize[0] = xpageoffset;
      bwpSize[1] = Bpack->size[1];
      bwSize[1] = Bpack->size[1];
      bwUnpackingtbb(&Bpack_data[0], &bwpSize[0], &Apadpre_data[0], &bwSize[0],
                     true);
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
      xpageoffset = 0;
      sInd = 0;
    } else {
      xpageoffset = (int)(pad_ul_data[1] + 1.0) - 1;
      sInd = (int)bwSize[1];
    }
    loop_ub_tmp = sInd - xpageoffset;
    for (sInd = 0; sInd < loop_ub_tmp; sInd++) {
      vlen = i1 - i;
      for (i2 = 0; i2 < vlen; i2++) {
        Apadpre_data[i2 + vlen * sInd] =
            Apadpre_data[((i + i2) + B->size[0] * (xpageoffset + sInd)) + 1];
      }
    }
    xpageoffset = B->size[0] * B->size[1];
    B->size[0] = i1 - i;
    B->size[1] = loop_ub_tmp;
    emxEnsureCapacity_boolean_T(B, xpageoffset);
  }
}

/*
 * Arguments    : const unsigned int A[63720]
 *                unsigned int B[63720]
 * Return Type  : void
 */
void imerode(const unsigned int A[63720], unsigned int B[63720])
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
  b_setPackedFillBits(b_A);
  for (i = 0; i < 322; i++) {
    Apadpre[i] = MAX_uint32_T;
  }
  for (i = 0; i < 1416; i++) {
    int Apadpre_tmp;
    Apadpre_tmp = 46 * (i + 7);
    Apadpre[Apadpre_tmp] = MAX_uint32_T;
    memcpy(&Apadpre[Apadpre_tmp + 1], &b_A[i * 45], 45U * sizeof(unsigned int));
  }
  for (i = 0; i < 329; i++) {
    Apad[i + 66881] = MAX_uint32_T;
  }
  for (i = 0; i < 1423; i++) {
    Apad[47 * i + 46] = MAX_uint32_T;
    memcpy(&Apad[i * 47], &Apadpre[i * 46], 46U * sizeof(unsigned int));
  }
  for (i = 0; i < 7; i++) {
    nhood[i] = true;
  }
  asizeT_tmp[0] = 47.0;
  nsizeT[0] = 7.0;
  asizeT_tmp[1] = 1430.0;
  nsizeT[1] = 1.0;
  erode_packed_uint32(&Apad[0], &asizeT_tmp[0], 2.0, &nhood[0], &nsizeT[0], 2.0,
                      1416.0, &Apadpack[0], true);
  nsizeT[0] = 5.0;
  nsizeT[1] = 5.0;
  erode_packed_uint32(&Apadpack[0], &asizeT_tmp[0], 2.0, &bv[0], &nsizeT[0],
                      2.0, 1416.0, &Apad[0], true);
  memcpy(&Apadpack[0], &Apad[0], 67210U * sizeof(unsigned int));
  for (i = 0; i < 7; i++) {
    nhood[i] = true;
  }
  nsizeT[0] = 1.0;
  nsizeT[1] = 7.0;
  erode_packed_uint32(&Apadpack[0], &asizeT_tmp[0], 2.0, &nhood[0], &nsizeT[0],
                      2.0, 1416.0, &Apad[0], true);
  memcpy(&Apadpack[0], &Apad[0], 67210U * sizeof(unsigned int));
  nsizeT[0] = 5.0;
  nsizeT[1] = 5.0;
  erode_packed_uint32(&Apadpack[0], &asizeT_tmp[0], 2.0, &bv1[0], &nsizeT[0],
                      2.0, 1416.0, &Apad[0], true);
  for (i = 0; i < 1416; i++) {
    memcpy(&B[i * 45], &Apad[i * 47 + 330], 45U * sizeof(unsigned int));
  }
}

/*
 * File trailer for imerode.c
 *
 * [EOF]
 */
