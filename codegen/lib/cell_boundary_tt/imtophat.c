/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: imtophat.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:11:08
 */

/* Include Files */
#include "imtophat.h"
#include "cell_boundary_data.h"
#include "imerode.h"
#include "rt_nonfinite.h"
#include "libmwmorphop_flat_tbb.h"
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : const double A[1960000]
 *                double B[1960000]
 * Return Type  : void
 */
void imtophat(const double A[1960000], double B[1960000])
{
  static double Apad[2067844];
  static double Apadpack[2067844];
  static double Apadpre[2013561];
  static double b_A[1960000];
  double asizeT[2];
  double nsizeT[2];
  int i;
  int j;
  boolean_T nhood[15];
  boolean_T b_nhood[5];
  f_imerode(A, b_A);
  for (j = 0; j < 26961; j++) {
    Apadpre[j] = rtMinusInf;
  }
  for (j = 0; j < 1400; j++) {
    for (i = 0; i < 19; i++) {
      Apadpre[i + 1419 * (j + 19)] = rtMinusInf;
    }
    memcpy(&Apadpre[j * 1419 + 26980], &b_A[j * 1400], 1400U * sizeof(double));
  }
  for (j = 0; j < 27322; j++) {
    Apad[j + 2040522] = rtMinusInf;
  }
  for (j = 0; j < 1419; j++) {
    for (i = 0; i < 19; i++) {
      Apad[(i + 1438 * j) + 1419] = rtMinusInf;
    }
    memcpy(&Apad[j * 1438], &Apadpre[j * 1419], 1419U * sizeof(double));
  }
  for (i = 0; i < 15; i++) {
    nhood[i] = true;
  }
  asizeT[0] = 1438.0;
  nsizeT[0] = 15.0;
  asizeT[1] = 1438.0;
  nsizeT[1] = 1.0;
  dilate_flat_real64_tbb(&Apad[0], &asizeT[0], 2.0, &nhood[0], &nsizeT[0], 2.0,
                         &Apadpack[0]);
  asizeT[0] = 1438.0;
  nsizeT[0] = 11.0;
  asizeT[1] = 1438.0;
  nsizeT[1] = 11.0;
  dilate_flat_real64_tbb(&Apadpack[0], &asizeT[0], 2.0, &bv4[0], &nsizeT[0],
                         2.0, &Apad[0]);
  memcpy(&Apadpack[0], &Apad[0], 2067844U * sizeof(double));
  for (i = 0; i < 15; i++) {
    nhood[i] = true;
  }
  asizeT[0] = 1438.0;
  nsizeT[0] = 1.0;
  asizeT[1] = 1438.0;
  nsizeT[1] = 15.0;
  dilate_flat_real64_tbb(&Apadpack[0], &asizeT[0], 2.0, &nhood[0], &nsizeT[0],
                         2.0, &Apad[0]);
  memcpy(&Apadpack[0], &Apad[0], 2067844U * sizeof(double));
  asizeT[0] = 1438.0;
  nsizeT[0] = 11.0;
  asizeT[1] = 1438.0;
  nsizeT[1] = 11.0;
  dilate_flat_real64_tbb(&Apadpack[0], &asizeT[0], 2.0, &bv5[0], &nsizeT[0],
                         2.0, &Apad[0]);
  memcpy(&Apadpack[0], &Apad[0], 2067844U * sizeof(double));
  for (j = 0; j < 5; j++) {
    b_nhood[j] = true;
  }
  asizeT[0] = 1438.0;
  nsizeT[0] = 1.0;
  asizeT[1] = 1438.0;
  nsizeT[1] = 5.0;
  dilate_flat_real64_tbb(&Apadpack[0], &asizeT[0], 2.0, &b_nhood[0], &nsizeT[0],
                         2.0, &Apad[0]);
  memcpy(&Apadpack[0], &Apad[0], 2067844U * sizeof(double));
  for (j = 0; j < 5; j++) {
    b_nhood[j] = true;
  }
  asizeT[0] = 1438.0;
  nsizeT[0] = 5.0;
  asizeT[1] = 1438.0;
  nsizeT[1] = 1.0;
  dilate_flat_real64_tbb(&Apadpack[0], &asizeT[0], 2.0, &b_nhood[0], &nsizeT[0],
                         2.0, &Apad[0]);
  for (j = 0; j < 1400; j++) {
    for (i = 0; i < 1400; i++) {
      int B_tmp;
      B_tmp = i + 1400 * j;
      B[B_tmp] = A[B_tmp] - Apad[(i + 1438 * (j + 19)) + 19];
    }
  }
}

/*
 * File trailer for imtophat.c
 *
 * [EOF]
 */
