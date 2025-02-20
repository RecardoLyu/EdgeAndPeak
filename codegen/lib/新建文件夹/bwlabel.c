/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: bwlabel.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:17:16
 */

/* Include Files */
#include "bwlabel.h"
#include "cell_boundary_rtwutil.h"
#include "rt_nonfinite.h"
#include "omp.h"
#include <math.h>

/* Function Definitions */
/*
 * Arguments    : const boolean_T im[1960000]
 *                double L[1960000]
 * Return Type  : double
 */
double labelingWu_parallel(const boolean_T im[1960000], double L[1960000])
{
  static double P[980001];
  double d;
  double d1;
  double k;
  double label;
  double rootj;
  int chunksSizeAndLabels[1408];
  int L_tmp;
  int b_c;
  int c;
  int c_c;
  int c_i;
  int c_tmp;
  int exitg1;
  int firstLabel;
  int i;
  int i2;
  int i3;
  int qY;
  int r;
  int thread;
  boolean_T guard1;
  boolean_T guard2;
  boolean_T guard3;
  P[0] = 0.0;
#pragma omp parallel for num_threads(omp_get_max_threads()) private(           \
    rootj, b_c, firstLabel, label, c_tmp, L_tmp, c_c, d1, r, i2, guard1,       \
    guard2, guard3, i3, exitg1)

  for (thread = 0; thread < 8; thread++) {
    c_tmp = thread * 175 + 1;
    L_tmp = (thread + 1) * 175;
    chunksSizeAndLabels[c_tmp - 1] = L_tmp + 1;
    label = floor((double)c_tmp / 2.0) * 700.0 + 1.0;
    firstLabel = (int)label;
    L_tmp -= c_tmp;
    for (c_c = 0; c_c <= L_tmp; c_c++) {
      b_c = c_tmp + c_c;
      for (r = 0; r < 1400; r++) {
        i2 = r + 1400 * (b_c - 1);
        if (im[i2]) {
          guard1 = false;
          guard2 = false;
          guard3 = false;
          if (b_c > c_tmp) {
            i3 = r + 1400 * (b_c - 2);
            if (im[i3]) {
              L[i2] = L[i3];
            } else {
              guard3 = true;
            }
          } else {
            guard3 = true;
          }
          if (guard3) {
            if ((r + 1 < 1400) && (b_c > c_tmp)) {
              i3 = r + 1400 * (b_c - 2);
              if (im[i3 + 1]) {
                if ((b_c > c_tmp) && (r + 1 > 1) && im[i3 - 1]) {
                  L[i2] = L[i3 - 1];
                  do {
                    exitg1 = 0;
                    d1 = L[i2];
                    rootj = P[(int)(d1 + 1.0) - 1];
                    if (rootj < d1) {
                      L[i2] = rootj;
                    } else {
                      exitg1 = 1;
                    }
                  } while (exitg1 == 0);
                  if (L[i3 - 1] != L[i3 + 1]) {
                    rootj = L[i3 + 1];
                    while (P[(int)(rootj + 1.0) - 1] < rootj) {
                      rootj = P[(int)(rootj + 1.0) - 1];
                    }
                    if (d1 > rootj) {
                      L[i2] = rootj;
                    }
                    do {
                      exitg1 = 0;
                      d1 = L[i3 + 1];
                      rootj = P[(int)(d1 + 1.0) - 1];
                      if (rootj < d1) {
                        P[(int)(d1 + 1.0) - 1] = L[i2];
                        L[i3 + 1] = rootj;
                      } else {
                        exitg1 = 1;
                      }
                    } while (exitg1 == 0);
                    P[(int)(d1 + 1.0) - 1] = L[i2];
                  }
                  do {
                    exitg1 = 0;
                    d1 = L[i3 - 1];
                    rootj = P[(int)(d1 + 1.0) - 1];
                    if (rootj < d1) {
                      P[(int)(d1 + 1.0) - 1] = L[i2];
                      L[i3 - 1] = rootj;
                    } else {
                      exitg1 = 1;
                    }
                  } while (exitg1 == 0);
                  P[(int)(d1 + 1.0) - 1] = L[i2];
                } else if ((r + 1 > 1) && im[i2 - 1]) {
                  L[i2] = L[i2 - 1];
                  do {
                    exitg1 = 0;
                    d1 = L[i2];
                    rootj = P[(int)(d1 + 1.0) - 1];
                    if (rootj < d1) {
                      L[i2] = rootj;
                    } else {
                      exitg1 = 1;
                    }
                  } while (exitg1 == 0);
                  if (L[i2 - 1] != L[i3 + 1]) {
                    rootj = L[i3 + 1];
                    while (P[(int)(rootj + 1.0) - 1] < rootj) {
                      rootj = P[(int)(rootj + 1.0) - 1];
                    }
                    if (d1 > rootj) {
                      L[i2] = rootj;
                    }
                    do {
                      exitg1 = 0;
                      d1 = L[i3 + 1];
                      rootj = P[(int)(d1 + 1.0) - 1];
                      if (rootj < d1) {
                        P[(int)(d1 + 1.0) - 1] = L[i2];
                        L[i3 + 1] = rootj;
                      } else {
                        exitg1 = 1;
                      }
                    } while (exitg1 == 0);
                    P[(int)(d1 + 1.0) - 1] = L[i2];
                  }
                  do {
                    exitg1 = 0;
                    d1 = L[i2 - 1];
                    rootj = P[(int)(d1 + 1.0) - 1];
                    if (rootj < d1) {
                      P[(int)(d1 + 1.0) - 1] = L[i2];
                      L[i2 - 1] = rootj;
                    } else {
                      exitg1 = 1;
                    }
                  } while (exitg1 == 0);
                  P[(int)(d1 + 1.0) - 1] = L[i2];
                } else {
                  L[i2] = L[i3 + 1];
                }
              } else {
                guard2 = true;
              }
            } else {
              guard2 = true;
            }
          }
          if (guard2) {
            if ((b_c > c_tmp) && (r + 1 > 1)) {
              i3 = (r + 1400 * (b_c - 2)) - 1;
              if (im[i3]) {
                L[i2] = L[i3];
              } else {
                guard1 = true;
              }
            } else {
              guard1 = true;
            }
          }
          if (guard1) {
            if ((r + 1 > 1) && im[i2 - 1]) {
              L[i2] = L[i2 - 1];
            } else {
              L[i2] = label;
              P[(int)(label + 1.0) - 1] = label;
              label++;
            }
          }
        } else {
          L[i2] = 0.0;
        }
      }
    }
    d1 = label - (double)firstLabel;
    if (d1 < 2.147483648E+9) {
      L_tmp = (int)d1;
    } else {
      L_tmp = MAX_int32_T;
    }
    chunksSizeAndLabels[c_tmp] = L_tmp;
  }
  for (c = chunksSizeAndLabels[0] - 1; c + 1 <= 1400;
       c = chunksSizeAndLabels[c] - 1) {
    for (qY = 0; qY < 1400; qY++) {
      i = qY + 1400 * c;
      d = L[i];
      if (d != 0.0) {
        double b_i;
        double b_rootj;
        double root;
        if (qY + 1 > 1) {
          b_i = L[(qY + 1400 * (c - 1)) - 1];
          if (b_i != 0.0) {
            root = b_i;
            while (P[(int)(root + 1.0) - 1] < root) {
              root = P[(int)(root + 1.0) - 1];
            }
            if (b_i != d) {
              b_rootj = L[i];
              while (P[(int)(b_rootj + 1.0) - 1] < b_rootj) {
                b_rootj = P[(int)(b_rootj + 1.0) - 1];
              }
              if (root > b_rootj) {
                root = b_rootj;
              }
              b_rootj = L[i];
              do {
                exitg1 = 0;
                d = P[(int)(b_rootj + 1.0) - 1];
                if (d < b_rootj) {
                  P[(int)(b_rootj + 1.0) - 1] = root;
                  b_rootj = d;
                } else {
                  exitg1 = 1;
                }
              } while (exitg1 == 0);
              P[(int)(b_rootj + 1.0) - 1] = root;
            }
            do {
              exitg1 = 0;
              d = P[(int)(b_i + 1.0) - 1];
              if (d < b_i) {
                P[(int)(b_i + 1.0) - 1] = root;
                b_i = d;
              } else {
                exitg1 = 1;
              }
            } while (exitg1 == 0);
            P[(int)(b_i + 1.0) - 1] = root;
            L[i] = root;
          }
        }
        if (qY + 1 < 1400) {
          b_i = L[(qY + 1400 * (c - 1)) + 1];
          if (b_i != 0.0) {
            root = b_i;
            while (P[(int)(root + 1.0) - 1] < root) {
              root = P[(int)(root + 1.0) - 1];
            }
            if (b_i != L[i]) {
              b_rootj = L[i];
              while (P[(int)(b_rootj + 1.0) - 1] < b_rootj) {
                b_rootj = P[(int)(b_rootj + 1.0) - 1];
              }
              if (root > b_rootj) {
                root = b_rootj;
              }
              b_rootj = L[i];
              do {
                exitg1 = 0;
                d = P[(int)(b_rootj + 1.0) - 1];
                if (d < b_rootj) {
                  P[(int)(b_rootj + 1.0) - 1] = root;
                  b_rootj = d;
                } else {
                  exitg1 = 1;
                }
              } while (exitg1 == 0);
              P[(int)(b_rootj + 1.0) - 1] = root;
            }
            do {
              exitg1 = 0;
              d = P[(int)(b_i + 1.0) - 1];
              if (d < b_i) {
                P[(int)(b_i + 1.0) - 1] = root;
                b_i = d;
              } else {
                exitg1 = 1;
              }
            } while (exitg1 == 0);
            P[(int)(b_i + 1.0) - 1] = root;
            L[i] = root;
          }
        }
        b_i = L[qY + 1400 * (c - 1)];
        if (b_i != 0.0) {
          root = b_i;
          while (P[(int)(root + 1.0) - 1] < root) {
            root = P[(int)(root + 1.0) - 1];
          }
          if (b_i != L[i]) {
            b_rootj = L[i];
            while (P[(int)(b_rootj + 1.0) - 1] < b_rootj) {
              b_rootj = P[(int)(b_rootj + 1.0) - 1];
            }
            if (root > b_rootj) {
              root = b_rootj;
            }
            b_rootj = L[i];
            do {
              exitg1 = 0;
              d = P[(int)(b_rootj + 1.0) - 1];
              if (d < b_rootj) {
                P[(int)(b_rootj + 1.0) - 1] = root;
                b_rootj = d;
              } else {
                exitg1 = 1;
              }
            } while (exitg1 == 0);
            P[(int)(b_rootj + 1.0) - 1] = root;
          }
          do {
            exitg1 = 0;
            d = P[(int)(b_i + 1.0) - 1];
            if (d < b_i) {
              P[(int)(b_i + 1.0) - 1] = root;
              b_i = d;
            } else {
              exitg1 = 1;
            }
          } while (exitg1 == 0);
          P[(int)(b_i + 1.0) - 1] = root;
          L[i] = root;
        }
      }
    }
  }
  k = 1.0;
  c = 1;
  while (c <= 1400) {
    long long i1;
    if (c < -2147483647) {
      qY = MIN_int32_T;
    } else {
      qY = c - 1;
    }
    i1 = (long long)rt_roundd_snf((double)qY / 2.0) * 700LL;
    if (i1 > 2147483647LL) {
      i1 = 2147483647LL;
    } else if (i1 < -2147483648LL) {
      i1 = -2147483648LL;
    }
    i = (int)i1 + 2;
    qY = chunksSizeAndLabels[c];
    if (((int)i1 + 1 < 0) && (qY < MAX_int32_T - (int)i1)) {
      qY = MIN_int32_T;
    } else if (((int)i1 + 1 > 0) && (qY > 2147483646 - (int)i1)) {
      qY = MAX_int32_T;
    } else {
      qY = ((int)i1 + qY) + 1;
    }
    for (c_i = i; c_i <= qY; c_i++) {
      d = P[c_i - 1];
      if (d < (double)c_i - 1.0) {
        P[c_i - 1] = P[(int)(d + 1.0) - 1];
      } else {
        P[c_i - 1] = k;
        k++;
      }
    }
    c = chunksSizeAndLabels[c - 1];
  }
  k--;
#pragma omp parallel for num_threads(omp_get_max_threads()) private(r, L_tmp)

  for (b_c = 0; b_c < 1400; b_c++) {
    for (r = 0; r < 1400; r++) {
      L_tmp = r + 1400 * b_c;
      L[L_tmp] = P[(int)(L[L_tmp] + 1.0) - 1];
    }
  }
  return k;
}

/*
 * File trailer for bwlabel.c
 *
 * [EOF]
 */
