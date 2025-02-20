/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: svd1.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:17:16
 */

/* Include Files */
#include "svd1.h"
#include "rt_nonfinite.h"
#include "xaxpy.h"
#include "xdotc.h"
#include "xnrm2.h"
#include "xrot.h"
#include "xrotg.h"
#include "xswap.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : const double A[100]
 *                double U[100]
 *                double s[10]
 *                double V[100]
 * Return Type  : void
 */
void b_svd(const double A[100], double U[100], double s[10], double V[100])
{
  double b_A[100];
  double e[10];
  double work[10];
  double nrm;
  double rt;
  double snorm;
  double sqds;
  int ii;
  int jj;
  int k;
  int m;
  int q;
  int qjj;
  int qp1;
  int qp1jj;
  int qq;
  memcpy(&b_A[0], &A[0], 100U * sizeof(double));
  memset(&s[0], 0, 10U * sizeof(double));
  memset(&e[0], 0, 10U * sizeof(double));
  memset(&work[0], 0, 10U * sizeof(double));
  memset(&U[0], 0, 100U * sizeof(double));
  memset(&V[0], 0, 100U * sizeof(double));
  for (q = 0; q < 9; q++) {
    boolean_T apply_transform;
    qp1 = q + 2;
    qp1jj = q + 10 * q;
    qq = qp1jj + 1;
    apply_transform = false;
    nrm = xnrm2(10 - q, b_A, qp1jj + 1);
    if (nrm > 0.0) {
      apply_transform = true;
      if (b_A[qp1jj] < 0.0) {
        nrm = -nrm;
      }
      s[q] = nrm;
      if (fabs(nrm) >= 1.0020841800044864E-292) {
        nrm = 1.0 / nrm;
        qjj = (qp1jj - q) + 10;
        for (k = qq; k <= qjj; k++) {
          b_A[k - 1] *= nrm;
        }
      } else {
        qjj = (qp1jj - q) + 10;
        for (k = qq; k <= qjj; k++) {
          b_A[k - 1] /= s[q];
        }
      }
      b_A[qp1jj]++;
      s[q] = -s[q];
    } else {
      s[q] = 0.0;
    }
    for (jj = qp1; jj < 11; jj++) {
      qjj = q + 10 * (jj - 1);
      if (apply_transform) {
        xaxpy(10 - q,
              -(xdotc(10 - q, b_A, qp1jj + 1, b_A, qjj + 1) / b_A[qp1jj]),
              qp1jj + 1, b_A, qjj + 1);
      }
      e[jj - 1] = b_A[qjj];
    }
    for (ii = q + 1; ii < 11; ii++) {
      qjj = (ii + 10 * q) - 1;
      U[qjj] = b_A[qjj];
    }
    if (q + 1 <= 8) {
      nrm = b_xnrm2(9 - q, e, q + 2);
      if (nrm == 0.0) {
        e[q] = 0.0;
      } else {
        if (e[q + 1] < 0.0) {
          e[q] = -nrm;
        } else {
          e[q] = nrm;
        }
        nrm = e[q];
        if (fabs(e[q]) >= 1.0020841800044864E-292) {
          nrm = 1.0 / e[q];
          for (k = qp1; k < 11; k++) {
            e[k - 1] *= nrm;
          }
        } else {
          for (k = qp1; k < 11; k++) {
            e[k - 1] /= nrm;
          }
        }
        e[q + 1]++;
        e[q] = -e[q];
        for (ii = qp1; ii < 11; ii++) {
          work[ii - 1] = 0.0;
        }
        for (jj = qp1; jj < 11; jj++) {
          b_xaxpy(9 - q, e[jj - 1], b_A, (q + 10 * (jj - 1)) + 2, work, q + 2);
        }
        for (jj = qp1; jj < 11; jj++) {
          c_xaxpy(9 - q, -e[jj - 1] / e[q + 1], work, q + 2, b_A,
                  (q + 10 * (jj - 1)) + 2);
        }
      }
      for (ii = qp1; ii < 11; ii++) {
        V[(ii + 10 * q) - 1] = e[ii - 1];
      }
    }
  }
  m = 8;
  s[9] = b_A[99];
  e[8] = b_A[98];
  e[9] = 0.0;
  memset(&U[90], 0, 10U * sizeof(double));
  U[99] = 1.0;
  for (q = 8; q >= 0; q--) {
    qp1 = q + 2;
    qq = q + 10 * q;
    if (s[q] != 0.0) {
      for (jj = qp1; jj < 11; jj++) {
        qjj = (q + 10 * (jj - 1)) + 1;
        xaxpy(10 - q, -(xdotc(10 - q, U, qq + 1, U, qjj) / U[qq]), qq + 1, U,
              qjj);
      }
      for (ii = q + 1; ii < 11; ii++) {
        qjj = (ii + 10 * q) - 1;
        U[qjj] = -U[qjj];
      }
      U[qq]++;
      for (ii = 0; ii < q; ii++) {
        U[ii + 10 * q] = 0.0;
      }
    } else {
      memset(&U[q * 10], 0, 10U * sizeof(double));
      U[qq] = 1.0;
    }
  }
  for (q = 9; q >= 0; q--) {
    if ((q + 1 <= 8) && (e[q] != 0.0)) {
      qp1 = q + 2;
      qjj = (q + 10 * q) + 2;
      for (jj = qp1; jj < 11; jj++) {
        qp1jj = (q + 10 * (jj - 1)) + 2;
        xaxpy(9 - q, -(xdotc(9 - q, V, qjj, V, qp1jj) / V[qjj - 1]), qjj, V,
              qp1jj);
      }
    }
    memset(&V[q * 10], 0, 10U * sizeof(double));
    V[q + 10 * q] = 1.0;
  }
  qq = 0;
  snorm = 0.0;
  for (q = 0; q < 10; q++) {
    nrm = s[q];
    if (nrm != 0.0) {
      rt = fabs(nrm);
      nrm /= rt;
      s[q] = rt;
      if (q + 1 < 10) {
        e[q] /= nrm;
      }
      qp1jj = 10 * q;
      qjj = qp1jj + 10;
      for (k = qp1jj + 1; k <= qjj; k++) {
        U[k - 1] *= nrm;
      }
    }
    if (q + 1 < 10) {
      nrm = e[q];
      if (nrm != 0.0) {
        rt = fabs(nrm);
        nrm = rt / nrm;
        e[q] = rt;
        s[q + 1] *= nrm;
        qp1jj = 10 * (q + 1);
        qjj = qp1jj + 10;
        for (k = qp1jj + 1; k <= qjj; k++) {
          V[k - 1] *= nrm;
        }
      }
    }
    snorm = fmax(snorm, fmax(fabs(s[q]), fabs(e[q])));
  }
  while ((m + 2 > 0) && (qq < 75)) {
    boolean_T exitg1;
    jj = m + 1;
    ii = m + 1;
    exitg1 = false;
    while (!(exitg1 || (ii == 0))) {
      nrm = fabs(e[ii - 1]);
      if ((nrm <= 2.2204460492503131E-16 * (fabs(s[ii - 1]) + fabs(s[ii]))) ||
          (nrm <= 1.0020841800044864E-292) ||
          ((qq > 20) && (nrm <= 2.2204460492503131E-16 * snorm))) {
        e[ii - 1] = 0.0;
        exitg1 = true;
      } else {
        ii--;
      }
    }
    if (ii == m + 1) {
      qjj = 4;
    } else {
      qp1jj = m + 2;
      qjj = m + 2;
      exitg1 = false;
      while ((!exitg1) && (qjj >= ii)) {
        qp1jj = qjj;
        if (qjj == ii) {
          exitg1 = true;
        } else {
          nrm = 0.0;
          if (qjj < m + 2) {
            nrm = fabs(e[qjj - 1]);
          }
          if (qjj > ii + 1) {
            nrm += fabs(e[qjj - 2]);
          }
          rt = fabs(s[qjj - 1]);
          if ((rt <= 2.2204460492503131E-16 * nrm) ||
              (rt <= 1.0020841800044864E-292)) {
            s[qjj - 1] = 0.0;
            exitg1 = true;
          } else {
            qjj--;
          }
        }
      }
      if (qp1jj == ii) {
        qjj = 3;
      } else if (qp1jj == m + 2) {
        qjj = 1;
      } else {
        qjj = 2;
        ii = qp1jj;
      }
    }
    switch (qjj) {
    case 1: {
      rt = e[m];
      e[m] = 0.0;
      for (k = jj; k >= ii + 1; k--) {
        double sm;
        sm = xrotg(&s[k - 1], &rt, &sqds);
        if (k > ii + 1) {
          double b;
          b = e[k - 2];
          rt = -sqds * b;
          e[k - 2] = b * sm;
        }
        xrot(V, 10 * (k - 1) + 1, 10 * (m + 1) + 1, sm, sqds);
      }
    } break;
    case 2: {
      rt = e[ii - 1];
      e[ii - 1] = 0.0;
      for (k = ii + 1; k <= m + 2; k++) {
        double b;
        double sm;
        sm = xrotg(&s[k - 1], &rt, &sqds);
        b = e[k - 1];
        rt = -sqds * b;
        e[k - 1] = b * sm;
        xrot(U, 10 * (k - 1) + 1, 10 * (ii - 1) + 1, sm, sqds);
      }
    } break;
    case 3: {
      double b;
      double scale;
      double sm;
      nrm = s[m + 1];
      scale =
          fmax(fmax(fmax(fmax(fabs(nrm), fabs(s[m])), fabs(e[m])), fabs(s[ii])),
               fabs(e[ii]));
      sm = nrm / scale;
      nrm = s[m] / scale;
      rt = e[m] / scale;
      sqds = s[ii] / scale;
      b = ((nrm + sm) * (nrm - sm) + rt * rt) / 2.0;
      nrm = sm * rt;
      nrm *= nrm;
      if ((b != 0.0) || (nrm != 0.0)) {
        rt = sqrt(b * b + nrm);
        if (b < 0.0) {
          rt = -rt;
        }
        rt = nrm / (b + rt);
      } else {
        rt = 0.0;
      }
      rt += (sqds + sm) * (sqds - sm);
      nrm = sqds * (e[ii] / scale);
      for (k = ii + 1; k <= jj; k++) {
        sm = xrotg(&rt, &nrm, &sqds);
        if (k > ii + 1) {
          e[k - 2] = rt;
        }
        nrm = e[k - 1];
        b = s[k - 1];
        e[k - 1] = sm * nrm - sqds * b;
        rt = sqds * s[k];
        s[k] *= sm;
        qjj = 10 * (k - 1) + 1;
        qp1jj = 10 * k + 1;
        xrot(V, qjj, qp1jj, sm, sqds);
        s[k - 1] = sm * b + sqds * nrm;
        sm = xrotg(&s[k - 1], &rt, &sqds);
        b = e[k - 1];
        rt = sm * b + sqds * s[k];
        s[k] = -sqds * b + sm * s[k];
        nrm = sqds * e[k];
        e[k] *= sm;
        xrot(U, qjj, qp1jj, sm, sqds);
      }
      e[m] = rt;
      qq++;
    } break;
    default:
      if (s[ii] < 0.0) {
        s[ii] = -s[ii];
        qp1jj = 10 * ii;
        qjj = qp1jj + 10;
        for (k = qp1jj + 1; k <= qjj; k++) {
          V[k - 1] = -V[k - 1];
        }
      }
      qp1 = ii + 1;
      while ((ii + 1 < 10) && (s[ii] < s[qp1])) {
        rt = s[ii];
        s[ii] = s[qp1];
        s[qp1] = rt;
        qjj = 10 * ii + 1;
        qp1jj = 10 * (ii + 1) + 1;
        xswap(V, qjj, qp1jj);
        xswap(U, qjj, qp1jj);
        ii = qp1;
        qp1++;
      }
      qq = 0;
      m--;
      break;
    }
  }
}

/*
 * File trailer for svd1.c
 *
 * [EOF]
 */
