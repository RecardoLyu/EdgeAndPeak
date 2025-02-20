/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: xaxpy.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:11:08
 */

/* Include Files */
#include "xaxpy.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * Arguments    : int n
 *                double a
 *                const double x[100]
 *                int ix0
 *                double y[10]
 *                int iy0
 * Return Type  : void
 */
void b_xaxpy(int n, double a, const double x[100], int ix0, double y[10],
             int iy0)
{
  int k;
  if (!(a == 0.0)) {
    int i;
    i = n - 1;
    for (k = 0; k <= i; k++) {
      int i1;
      i1 = (iy0 + k) - 1;
      y[i1] += a * x[(ix0 + k) - 1];
    }
  }
}

/*
 * Arguments    : int n
 *                double a
 *                const double x[10]
 *                int ix0
 *                double y[100]
 *                int iy0
 * Return Type  : void
 */
void c_xaxpy(int n, double a, const double x[10], int ix0, double y[100],
             int iy0)
{
  int k;
  if (!(a == 0.0)) {
    int i;
    i = n - 1;
    for (k = 0; k <= i; k++) {
      int i1;
      i1 = (iy0 + k) - 1;
      y[i1] += a * x[(ix0 + k) - 1];
    }
  }
}

/*
 * Arguments    : int n
 *                double a
 *                int ix0
 *                double y[100]
 *                int iy0
 * Return Type  : void
 */
void xaxpy(int n, double a, int ix0, double y[100], int iy0)
{
  int k;
  if (!(a == 0.0)) {
    int i;
    i = n - 1;
    for (k = 0; k <= i; k++) {
      int i1;
      i1 = (iy0 + k) - 1;
      y[i1] += a * y[(ix0 + k) - 1];
    }
  }
}

/*
 * File trailer for xaxpy.c
 *
 * [EOF]
 */
