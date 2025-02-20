/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * bwpack.c
 *
 * Code generation for function 'bwpack'
 *
 */

/* Include files */
#include "bwpack.h"
#include "rt_nonfinite.h"
#include "libmwbwpackctbb.h"

/* Function Definitions */
void b_bwpack(const boolean_T varargin_1[1999396], uint32_T BWP[63630])
{
  real_T bwSize[2];
  real_T bwpSize[2];
  bwSize[0] = 1414.0;
  bwpSize[0] = 45.0;
  bwSize[1] = 1414.0;
  bwpSize[1] = 1414.0;
  bwPackingtbb(&varargin_1[0], &bwSize[0], &BWP[0], &bwpSize[0], true);
}

void bwpack(const boolean_T varargin_1[2005056], uint32_T BWP[63720])
{
  real_T bwSize[2];
  real_T bwpSize[2];
  bwSize[0] = 1416.0;
  bwpSize[0] = 45.0;
  bwSize[1] = 1416.0;
  bwpSize[1] = 1416.0;
  bwPackingtbb(&varargin_1[0], &bwSize[0], &BWP[0], &bwpSize[0], true);
}

/* End of code generation (bwpack.c) */
