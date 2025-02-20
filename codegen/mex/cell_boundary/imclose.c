/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imclose.c
 *
 * Code generation for function 'imclose'
 *
 */

/* Include files */
#include "imclose.h"
#include "bwpack.h"
#include "bwunpack.h"
#include "cell_boundary_types.h"
#include "imdilate.h"
#include "imerode.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void imclose(cell_boundaryStackData *SD, const boolean_T A[1960000],
             boolean_T B[1960000])
{
  int32_T Ap_tmp;
  int32_T i;
  int32_T j;
  for (Ap_tmp = 0; Ap_tmp < 11328; Ap_tmp++) {
    SD->u2.f15.Ap[Ap_tmp] = false;
    SD->u2.f15.Ap[Ap_tmp + 1993728] = false;
  }
  for (j = 0; j < 1400; j++) {
    for (i = 0; i < 8; i++) {
      Ap_tmp = i + 1416 * (j + 8);
      SD->u2.f15.Ap[Ap_tmp] = false;
      SD->u2.f15.Ap[Ap_tmp + 1408] = false;
    }
    memcpy(&SD->u2.f15.Ap[j * 1416 + 11336], &A[j * 1400],
           1400U * sizeof(boolean_T));
  }
  bwpack(SD->u2.f15.Ap, SD->u2.f15.inputImage);
  imdilate(SD, SD->u2.f15.inputImage, SD->u2.f15.uv);
  imerode(SD, SD->u2.f15.uv, SD->u2.f15.inputImage);
  bwunpack(SD->u2.f15.inputImage, SD->u2.f15.Ap);
  for (Ap_tmp = 0; Ap_tmp < 1400; Ap_tmp++) {
    memcpy(&B[Ap_tmp * 1400], &SD->u2.f15.Ap[Ap_tmp * 1416 + 11336],
           1400U * sizeof(boolean_T));
  }
}

/* End of code generation (imclose.c) */
