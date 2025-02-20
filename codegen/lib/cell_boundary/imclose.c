/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: imclose.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:17:16
 */

/* Include Files */
#include "imclose.h"
#include "bwpack.h"
#include "bwunpack.h"
#include "imdilate.h"
#include "imerode.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : const boolean_T A[1960000]
 *                boolean_T B[1960000]
 * Return Type  : void
 */
void imclose(const boolean_T A[1960000], boolean_T B[1960000])
{
  static unsigned int inputImage[63720];
  static unsigned int uv[63720];
  static boolean_T Ap[2005056];
  int i;
  int j;
  for (j = 0; j < 11328; j++) {
    Ap[j] = false;
    Ap[j + 1993728] = false;
  }
  for (j = 0; j < 1400; j++) {
    for (i = 0; i < 8; i++) {
      int Ap_tmp;
      Ap_tmp = i + 1416 * (j + 8);
      Ap[Ap_tmp] = false;
      Ap[Ap_tmp + 1408] = false;
    }
    memcpy(&Ap[j * 1416 + 11336], &A[j * 1400], 1400U * sizeof(boolean_T));
  }
  bwpack(Ap, inputImage);
  imdilate(inputImage, uv);
  imerode(uv, inputImage);
  bwunpack(inputImage, Ap);
  for (j = 0; j < 1400; j++) {
    memcpy(&B[j * 1400], &Ap[j * 1416 + 11336], 1400U * sizeof(boolean_T));
  }
}

/*
 * File trailer for imclose.c
 *
 * [EOF]
 */
