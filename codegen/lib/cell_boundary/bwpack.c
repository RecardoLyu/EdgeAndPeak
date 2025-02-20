/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: bwpack.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:17:16
 */

/* Include Files */
#include "bwpack.h"
#include "rt_nonfinite.h"
#include "libmwbwpackctbb.h"

/* Function Definitions */
/*
 * Arguments    : const boolean_T varargin_1[1999396]
 *                unsigned int BWP[63630]
 * Return Type  : void
 */
void b_bwpack(const boolean_T varargin_1[1999396], unsigned int BWP[63630])
{
  double bwSize[2];
  double bwpSize[2];
  bwSize[0] = 1414.0;
  bwpSize[0] = 45.0;
  bwSize[1] = 1414.0;
  bwpSize[1] = 1414.0;
  bwPackingtbb(&varargin_1[0], &bwSize[0], &BWP[0], &bwpSize[0], true);
}

/*
 * Arguments    : const boolean_T varargin_1[2005056]
 *                unsigned int BWP[63720]
 * Return Type  : void
 */
void bwpack(const boolean_T varargin_1[2005056], unsigned int BWP[63720])
{
  double bwSize[2];
  double bwpSize[2];
  bwSize[0] = 1416.0;
  bwpSize[0] = 45.0;
  bwSize[1] = 1416.0;
  bwpSize[1] = 1416.0;
  bwPackingtbb(&varargin_1[0], &bwSize[0], &BWP[0], &bwpSize[0], true);
}

/*
 * File trailer for bwpack.c
 *
 * [EOF]
 */
