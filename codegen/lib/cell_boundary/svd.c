/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: svd.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:17:16
 */

/* Include Files */
#include "svd.h"
#include "rt_nonfinite.h"
#include "svd1.h"
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : const double A[100]
 *                double U[100]
 *                double S[100]
 *                double V[100]
 * Return Type  : void
 */
void svd(const double A[100], double U[100], double S[100], double V[100])
{
  double s[10];
  int k;
  b_svd(A, U, s, V);
  memset(&S[0], 0, 100U * sizeof(double));
  for (k = 0; k < 10; k++) {
    S[k + 10 * k] = s[k];
  }
}

/*
 * File trailer for svd.c
 *
 * [EOF]
 */
