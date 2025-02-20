/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: imopen.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:17:16
 */

/* Include Files */
#include "imopen.h"
#include "imdilate.h"
#include "imerode.h"
#include "rt_nonfinite.h"
#include "libmwbwpackctbb.h"
#include "libmwbwunpackctbb.h"

/* Function Definitions */
/*
 * Arguments    : const boolean_T A[1960000]
 *                boolean_T B[1960000]
 * Return Type  : void
 */
void b_imopen(const boolean_T A[1960000], boolean_T B[1960000])
{
  static unsigned int inputImage[61600];
  static unsigned int uv[61600];
  double bwSize[2];
  double bwpSize[2];
  bwSize[0] = 1400.0;
  bwpSize[0] = 44.0;
  bwSize[1] = 1400.0;
  bwpSize[1] = 1400.0;
  bwPackingtbb(&A[0], &bwSize[0], &inputImage[0], &bwpSize[0], true);
  d_imerode(inputImage, uv);
  c_imdilate(uv, inputImage);
  bwpSize[0] = 44.0;
  bwSize[0] = 1400.0;
  bwpSize[1] = 1400.0;
  bwSize[1] = 1400.0;
  bwUnpackingtbb(&inputImage[0], &bwpSize[0], &B[0], &bwSize[0], true);
}

/*
 * Arguments    : const boolean_T A[1960000]
 *                boolean_T B[1960000]
 * Return Type  : void
 */
void imopen(const boolean_T A[1960000], boolean_T B[1960000])
{
  static unsigned int inputImage[61600];
  static unsigned int uv[61600];
  double bwSize[2];
  double bwpSize[2];
  bwSize[0] = 1400.0;
  bwpSize[0] = 44.0;
  bwSize[1] = 1400.0;
  bwpSize[1] = 1400.0;
  bwPackingtbb(&A[0], &bwSize[0], &inputImage[0], &bwpSize[0], true);
  b_imerode(inputImage, uv);
  b_imdilate(uv, inputImage);
  bwpSize[0] = 44.0;
  bwSize[0] = 1400.0;
  bwpSize[1] = 1400.0;
  bwSize[1] = 1400.0;
  bwUnpackingtbb(&inputImage[0], &bwpSize[0], &B[0], &bwSize[0], true);
}

/*
 * File trailer for imopen.c
 *
 * [EOF]
 */
