/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imopen.c
 *
 * Code generation for function 'imopen'
 *
 */

/* Include files */
#include "imopen.h"
#include "cell_boundary_types.h"
#include "imdilate.h"
#include "imerode.h"
#include "rt_nonfinite.h"
#include "libmwbwpackctbb.h"
#include "libmwbwunpackctbb.h"

/* Function Definitions */
void b_imopen(cell_boundaryStackData *SD, const boolean_T A[1960000],
              boolean_T B[1960000])
{
  real_T bwSize[2];
  real_T bwpSize[2];
  bwSize[0] = 1400.0;
  bwpSize[0] = 44.0;
  bwSize[1] = 1400.0;
  bwpSize[1] = 1400.0;
  bwPackingtbb(&A[0], &bwSize[0], &SD->u2.f12.inputImage[0], &bwpSize[0], true);
  d_imerode(SD, SD->u2.f12.inputImage, SD->u2.f12.uv);
  c_imdilate(SD, SD->u2.f12.uv, SD->u2.f12.inputImage);
  bwpSize[0] = 44.0;
  bwSize[0] = 1400.0;
  bwpSize[1] = 1400.0;
  bwSize[1] = 1400.0;
  bwUnpackingtbb(&SD->u2.f12.inputImage[0], &bwpSize[0], &B[0], &bwSize[0],
                 true);
}

void imopen(cell_boundaryStackData *SD, const boolean_T A[1960000],
            boolean_T B[1960000])
{
  real_T bwSize[2];
  real_T bwpSize[2];
  bwSize[0] = 1400.0;
  bwpSize[0] = 44.0;
  bwSize[1] = 1400.0;
  bwpSize[1] = 1400.0;
  bwPackingtbb(&A[0], &bwSize[0], &SD->u2.f14.inputImage[0], &bwpSize[0], true);
  b_imerode(SD, SD->u2.f14.inputImage, SD->u2.f14.uv);
  b_imdilate(SD, SD->u2.f14.uv, SD->u2.f14.inputImage);
  bwpSize[0] = 44.0;
  bwSize[0] = 1400.0;
  bwpSize[1] = 1400.0;
  bwSize[1] = 1400.0;
  bwUnpackingtbb(&SD->u2.f14.inputImage[0], &bwpSize[0], &B[0], &bwSize[0],
                 true);
}

/* End of code generation (imopen.c) */
