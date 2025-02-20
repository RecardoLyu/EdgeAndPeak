/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imerode.c
 *
 * Code generation for function 'imerode'
 *
 */

/* Include files */
#include "imerode.h"
#include "bwpack.h"
#include "bwunpack.h"
#include "cell_boundary_data.h"
#include "cell_boundary_types.h"
#include "rt_nonfinite.h"
#include "setPackedFillBits.h"
#include "libmwmorphop_packed.h"
#include <string.h>

/* Function Definitions */
void b_imerode(cell_boundaryStackData *SD, const uint32_T A[61600],
               uint32_T B[61600])
{
  real_T asizeT_tmp[2];
  real_T nsizeT[2];
  int32_T i;
  int32_T j;
  boolean_T nhood[5];
  memcpy(&SD->u1.f6.A[0], &A[0], 61600U * sizeof(uint32_T));
  c_setPackedFillBits(SD->u1.f6.A);
  for (i = 0; i < 225; i++) {
    SD->u1.f6.Apadpre[i] = MAX_uint32_T;
  }
  for (j = 0; j < 1400; j++) {
    i = 45 * (j + 5);
    SD->u1.f6.Apadpre[i] = MAX_uint32_T;
    memcpy(&SD->u1.f6.Apadpre[i + 1], &SD->u1.f6.A[j * 44],
           44U * sizeof(uint32_T));
  }
  for (i = 0; i < 230; i++) {
    SD->u1.f6.Apad[i + 64630] = MAX_uint32_T;
  }
  for (j = 0; j < 1405; j++) {
    SD->u1.f6.Apad[46 * j + 45] = MAX_uint32_T;
    memcpy(&SD->u1.f6.Apad[j * 46], &SD->u1.f6.Apadpre[j * 45],
           45U * sizeof(uint32_T));
  }
  for (i = 0; i < 5; i++) {
    nhood[i] = true;
  }
  asizeT_tmp[0] = 46.0;
  nsizeT[0] = 5.0;
  asizeT_tmp[1] = 1410.0;
  nsizeT[1] = 1.0;
  erode_packed_uint32(&SD->u1.f6.Apad[0], &asizeT_tmp[0], 2.0, &nhood[0],
                      &nsizeT[0], 2.0, 1400.0, &SD->u1.f6.Apadpack[0], true);
  nsizeT[0] = 3.0;
  nsizeT[1] = 3.0;
  erode_packed_uint32(&SD->u1.f6.Apadpack[0], &asizeT_tmp[0], 2.0, &bv2[0],
                      &nsizeT[0], 2.0, 1400.0, &SD->u1.f6.Apad[0], true);
  memcpy(&SD->u1.f6.Apadpack[0], &SD->u1.f6.Apad[0], 64860U * sizeof(uint32_T));
  for (i = 0; i < 5; i++) {
    nhood[i] = true;
  }
  boolean_T b_nhood[3];
  nsizeT[0] = 1.0;
  nsizeT[1] = 5.0;
  erode_packed_uint32(&SD->u1.f6.Apadpack[0], &asizeT_tmp[0], 2.0, &nhood[0],
                      &nsizeT[0], 2.0, 1400.0, &SD->u1.f6.Apad[0], true);
  memcpy(&SD->u1.f6.Apadpack[0], &SD->u1.f6.Apad[0], 64860U * sizeof(uint32_T));
  nsizeT[0] = 3.0;
  nsizeT[1] = 3.0;
  erode_packed_uint32(&SD->u1.f6.Apadpack[0], &asizeT_tmp[0], 2.0, &bv3[0],
                      &nsizeT[0], 2.0, 1400.0, &SD->u1.f6.Apad[0], true);
  memcpy(&SD->u1.f6.Apadpack[0], &SD->u1.f6.Apad[0], 64860U * sizeof(uint32_T));
  b_nhood[0] = true;
  b_nhood[1] = true;
  b_nhood[2] = true;
  nsizeT[0] = 1.0;
  nsizeT[1] = 3.0;
  erode_packed_uint32(&SD->u1.f6.Apadpack[0], &asizeT_tmp[0], 2.0, &b_nhood[0],
                      &nsizeT[0], 2.0, 1400.0, &SD->u1.f6.Apad[0], true);
  memcpy(&SD->u1.f6.Apadpack[0], &SD->u1.f6.Apad[0], 64860U * sizeof(uint32_T));
  b_nhood[0] = true;
  b_nhood[1] = true;
  b_nhood[2] = true;
  nsizeT[0] = 3.0;
  nsizeT[1] = 1.0;
  erode_packed_uint32(&SD->u1.f6.Apadpack[0], &asizeT_tmp[0], 2.0, &b_nhood[0],
                      &nsizeT[0], 2.0, 1400.0, &SD->u1.f6.Apad[0], true);
  for (i = 0; i < 1400; i++) {
    memcpy(&B[i * 44], &SD->u1.f6.Apad[i * 46 + 231], 44U * sizeof(uint32_T));
  }
}

void c_imerode(cell_boundaryStackData *SD, const boolean_T A[1960000],
               boolean_T B[1960000])
{
  real_T asizeT_tmp[2];
  real_T nsizeT[2];
  int32_T i;
  int32_T j;
  boolean_T nhood[7];
  for (j = 0; j < 9849; j++) {
    SD->u1.f3.Apadpre[j] = true;
  }
  for (j = 0; j < 1400; j++) {
    for (i = 0; i < 7; i++) {
      SD->u1.f3.Apadpre[i + 1407 * (j + 7)] = true;
    }
    memcpy(&SD->u1.f3.Apadpre[j * 1407 + 9856], &A[j * 1400],
           1400U * sizeof(boolean_T));
  }
  for (j = 0; j < 9898; j++) {
    SD->u1.f3.Apad[j + 1989498] = true;
  }
  for (j = 0; j < 1407; j++) {
    for (i = 0; i < 7; i++) {
      SD->u1.f3.Apad[(i + 1414 * j) + 1407] = true;
    }
    memcpy(&SD->u1.f3.Apad[j * 1414], &SD->u1.f3.Apadpre[j * 1407],
           1407U * sizeof(boolean_T));
  }
  b_bwpack(SD->u1.f3.Apad, SD->u1.f3.Apadpack);
  for (i = 0; i < 7; i++) {
    nhood[i] = true;
  }
  asizeT_tmp[0] = 45.0;
  nsizeT[0] = 7.0;
  asizeT_tmp[1] = 1414.0;
  nsizeT[1] = 1.0;
  erode_packed_uint32(&SD->u1.f3.Apadpack[0], &asizeT_tmp[0], 2.0, &nhood[0],
                      &nsizeT[0], 2.0, 1414.0, &SD->u1.f3.B[0], true);
  memcpy(&SD->u1.f3.Apadpack[0], &SD->u1.f3.B[0], 63630U * sizeof(uint32_T));
  nsizeT[0] = 5.0;
  nsizeT[1] = 5.0;
  erode_packed_uint32(&SD->u1.f3.Apadpack[0], &asizeT_tmp[0], 2.0, &bv[0],
                      &nsizeT[0], 2.0, 1414.0, &SD->u1.f3.B[0], true);
  memcpy(&SD->u1.f3.Apadpack[0], &SD->u1.f3.B[0], 63630U * sizeof(uint32_T));
  for (i = 0; i < 7; i++) {
    nhood[i] = true;
  }
  nsizeT[0] = 1.0;
  nsizeT[1] = 7.0;
  erode_packed_uint32(&SD->u1.f3.Apadpack[0], &asizeT_tmp[0], 2.0, &nhood[0],
                      &nsizeT[0], 2.0, 1414.0, &SD->u1.f3.B[0], true);
  memcpy(&SD->u1.f3.Apadpack[0], &SD->u1.f3.B[0], 63630U * sizeof(uint32_T));
  nsizeT[0] = 5.0;
  nsizeT[1] = 5.0;
  erode_packed_uint32(&SD->u1.f3.Apadpack[0], &asizeT_tmp[0], 2.0, &bv1[0],
                      &nsizeT[0], 2.0, 1414.0, &SD->u1.f3.B[0], true);
  b_bwunpack(SD->u1.f3.B, SD->u1.f3.Apad);
  for (j = 0; j < 1400; j++) {
    memcpy(&B[j * 1400], &SD->u1.f3.Apad[j * 1414 + 9905],
           1400U * sizeof(boolean_T));
  }
}

void d_imerode(cell_boundaryStackData *SD, const uint32_T A[61600],
               uint32_T B[61600])
{
  int32_T Apadpre_tmp;
  int32_T j;
  memcpy(&SD->u1.f2.A[0], &A[0], 61600U * sizeof(uint32_T));
  c_setPackedFillBits(SD->u1.f2.A);
  for (Apadpre_tmp = 0; Apadpre_tmp < 90; Apadpre_tmp++) {
    SD->u1.f2.Apadpre[Apadpre_tmp] = MAX_uint32_T;
  }
  for (j = 0; j < 1400; j++) {
    Apadpre_tmp = 45 * (j + 2);
    SD->u1.f2.Apadpre[Apadpre_tmp] = MAX_uint32_T;
    memcpy(&SD->u1.f2.Apadpre[Apadpre_tmp + 1], &SD->u1.f2.A[j * 44],
           44U * sizeof(uint32_T));
  }
  for (Apadpre_tmp = 0; Apadpre_tmp < 92; Apadpre_tmp++) {
    SD->u1.f2.Apad[Apadpre_tmp + 64492] = MAX_uint32_T;
  }
  for (j = 0; j < 1402; j++) {
    SD->u1.f2.Apad[46 * j + 45] = MAX_uint32_T;
    memcpy(&SD->u1.f2.Apad[j * 46], &SD->u1.f2.Apadpre[j * 45],
           45U * sizeof(uint32_T));
  }
  real_T asizeT_tmp[2];
  real_T b_nsizeT_tmp[2];
  real_T nsizeT[2];
  real_T nsizeT_tmp[2];
  boolean_T nhood[3];
  boolean_T b_nhood;
  nhood[0] = true;
  nhood[1] = true;
  nhood[2] = true;
  asizeT_tmp[0] = 46.0;
  nsizeT_tmp[0] = 3.0;
  asizeT_tmp[1] = 1404.0;
  nsizeT_tmp[1] = 1.0;
  erode_packed_uint32(&SD->u1.f2.Apad[0], &asizeT_tmp[0], 2.0, &nhood[0],
                      &nsizeT_tmp[0], 2.0, 1400.0, &SD->u1.f2.Apadpack[0],
                      true);
  b_nhood = true;
  nsizeT[0] = 1.0;
  nsizeT[1] = 1.0;
  erode_packed_uint32(&SD->u1.f2.Apadpack[0], &asizeT_tmp[0], 2.0, &b_nhood,
                      &nsizeT[0], 2.0, 1400.0, &SD->u1.f2.Apad[0], true);
  memcpy(&SD->u1.f2.Apadpack[0], &SD->u1.f2.Apad[0], 64584U * sizeof(uint32_T));
  nhood[0] = true;
  nhood[1] = true;
  nhood[2] = true;
  b_nsizeT_tmp[0] = 1.0;
  b_nsizeT_tmp[1] = 3.0;
  erode_packed_uint32(&SD->u1.f2.Apadpack[0], &asizeT_tmp[0], 2.0, &nhood[0],
                      &b_nsizeT_tmp[0], 2.0, 1400.0, &SD->u1.f2.Apad[0], true);
  memcpy(&SD->u1.f2.Apadpack[0], &SD->u1.f2.Apad[0], 64584U * sizeof(uint32_T));
  b_nhood = true;
  nsizeT[0] = 1.0;
  nsizeT[1] = 1.0;
  erode_packed_uint32(&SD->u1.f2.Apadpack[0], &asizeT_tmp[0], 2.0, &b_nhood,
                      &nsizeT[0], 2.0, 1400.0, &SD->u1.f2.Apad[0], true);
  memcpy(&SD->u1.f2.Apadpack[0], &SD->u1.f2.Apad[0], 64584U * sizeof(uint32_T));
  nhood[0] = true;
  nhood[1] = true;
  nhood[2] = true;
  erode_packed_uint32(&SD->u1.f2.Apadpack[0], &asizeT_tmp[0], 2.0, &nhood[0],
                      &b_nsizeT_tmp[0], 2.0, 1400.0, &SD->u1.f2.Apad[0], true);
  memcpy(&SD->u1.f2.Apadpack[0], &SD->u1.f2.Apad[0], 64584U * sizeof(uint32_T));
  nhood[0] = true;
  nhood[1] = true;
  nhood[2] = true;
  erode_packed_uint32(&SD->u1.f2.Apadpack[0], &asizeT_tmp[0], 2.0, &nhood[0],
                      &nsizeT_tmp[0], 2.0, 1400.0, &SD->u1.f2.Apad[0], true);
  for (Apadpre_tmp = 0; Apadpre_tmp < 1400; Apadpre_tmp++) {
    memcpy(&B[Apadpre_tmp * 44], &SD->u1.f2.Apad[Apadpre_tmp * 46 + 93],
           44U * sizeof(uint32_T));
  }
}

void imerode(cell_boundaryStackData *SD, const uint32_T A[63720],
             uint32_T B[63720])
{
  real_T asizeT_tmp[2];
  real_T nsizeT[2];
  int32_T i;
  int32_T j;
  boolean_T nhood[7];
  memcpy(&SD->u1.f7.A[0], &A[0], 63720U * sizeof(uint32_T));
  b_setPackedFillBits(SD->u1.f7.A);
  for (i = 0; i < 322; i++) {
    SD->u1.f7.Apadpre[i] = MAX_uint32_T;
  }
  for (j = 0; j < 1416; j++) {
    i = 46 * (j + 7);
    SD->u1.f7.Apadpre[i] = MAX_uint32_T;
    memcpy(&SD->u1.f7.Apadpre[i + 1], &SD->u1.f7.A[j * 45],
           45U * sizeof(uint32_T));
  }
  for (i = 0; i < 329; i++) {
    SD->u1.f7.Apad[i + 66881] = MAX_uint32_T;
  }
  for (j = 0; j < 1423; j++) {
    SD->u1.f7.Apad[47 * j + 46] = MAX_uint32_T;
    memcpy(&SD->u1.f7.Apad[j * 47], &SD->u1.f7.Apadpre[j * 46],
           46U * sizeof(uint32_T));
  }
  for (i = 0; i < 7; i++) {
    nhood[i] = true;
  }
  asizeT_tmp[0] = 47.0;
  nsizeT[0] = 7.0;
  asizeT_tmp[1] = 1430.0;
  nsizeT[1] = 1.0;
  erode_packed_uint32(&SD->u1.f7.Apad[0], &asizeT_tmp[0], 2.0, &nhood[0],
                      &nsizeT[0], 2.0, 1416.0, &SD->u1.f7.Apadpack[0], true);
  nsizeT[0] = 5.0;
  nsizeT[1] = 5.0;
  erode_packed_uint32(&SD->u1.f7.Apadpack[0], &asizeT_tmp[0], 2.0, &bv[0],
                      &nsizeT[0], 2.0, 1416.0, &SD->u1.f7.Apad[0], true);
  memcpy(&SD->u1.f7.Apadpack[0], &SD->u1.f7.Apad[0], 67210U * sizeof(uint32_T));
  for (i = 0; i < 7; i++) {
    nhood[i] = true;
  }
  nsizeT[0] = 1.0;
  nsizeT[1] = 7.0;
  erode_packed_uint32(&SD->u1.f7.Apadpack[0], &asizeT_tmp[0], 2.0, &nhood[0],
                      &nsizeT[0], 2.0, 1416.0, &SD->u1.f7.Apad[0], true);
  memcpy(&SD->u1.f7.Apadpack[0], &SD->u1.f7.Apad[0], 67210U * sizeof(uint32_T));
  nsizeT[0] = 5.0;
  nsizeT[1] = 5.0;
  erode_packed_uint32(&SD->u1.f7.Apadpack[0], &asizeT_tmp[0], 2.0, &bv1[0],
                      &nsizeT[0], 2.0, 1416.0, &SD->u1.f7.Apad[0], true);
  for (i = 0; i < 1416; i++) {
    memcpy(&B[i * 45], &SD->u1.f7.Apad[i * 47 + 330], 45U * sizeof(uint32_T));
  }
}

/* End of code generation (imerode.c) */
