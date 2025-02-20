/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: bwunpack.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:17:16
 */

/* Include Files */
#include "bwunpack.h"
#include "rt_nonfinite.h"
#include "libmwbwunpackctbb.h"

/* Function Definitions */
/*
 * Arguments    : const unsigned int varargin_1[63630]
 *                boolean_T BW[1999396]
 * Return Type  : void
 */
void b_bwunpack(const unsigned int varargin_1[63630], boolean_T BW[1999396])
{
  double bwSize[2];
  double bwpSize[2];
  bwpSize[0] = 45.0;
  bwSize[0] = 1414.0;
  bwpSize[1] = 1414.0;
  bwSize[1] = 1414.0;
  bwUnpackingtbb(&varargin_1[0], &bwpSize[0], &BW[0], &bwSize[0], true);
}

/*
 * Arguments    : const unsigned int varargin_1[63720]
 *                boolean_T BW[2005056]
 * Return Type  : void
 */
void bwunpack(const unsigned int varargin_1[63720], boolean_T BW[2005056])
{
  double bwSize[2];
  double bwpSize[2];
  bwpSize[0] = 45.0;
  bwSize[0] = 1416.0;
  bwpSize[1] = 1416.0;
  bwSize[1] = 1416.0;
  bwUnpackingtbb(&varargin_1[0], &bwpSize[0], &BW[0], &bwSize[0], true);
}

/*
 * File trailer for bwunpack.c
 *
 * [EOF]
 */
