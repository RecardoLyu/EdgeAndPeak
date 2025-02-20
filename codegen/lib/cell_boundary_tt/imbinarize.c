/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: imbinarize.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:11:08
 */

/* Include Files */
#include "imbinarize.h"
#include "rt_nonfinite.h"
#include "libmwgetnumcores.h"
#include "libmwgrayto8.h"
#include "libmwtbbhist.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : const double b_I[1960000]
 *                boolean_T BW[1960000]
 * Return Type  : void
 */
void imbinarize(const double b_I[1960000], boolean_T BW[1960000])
{
  static unsigned char u[1960000];
  double localBins1[256];
  double localBins2[256];
  double localBins3[256];
  double y[256];
  double idx;
  double maxval;
  double numCores;
  double num_maxval;
  double p;
  int i;
  int localBins2_tmp;
  grayto8_real64(&b_I[0], &u[0], 1.96E+6);
  numCores = 1.0;
  getnumcores(&numCores);
  if (numCores > 1.0) {
    boolean_T nanFlag;
    boolean_T rngFlag;
    nanFlag = false;
    rngFlag = false;
    tbbhist_uint8(&u[0], 1.96E+6, 1400.0, 1400.0, &y[0], 256.0, 256.0, &rngFlag,
                  &nanFlag);
  } else {
    memset(&y[0], 0, 256U * sizeof(double));
    memset(&localBins1[0], 0, 256U * sizeof(double));
    memset(&localBins2[0], 0, 256U * sizeof(double));
    memset(&localBins3[0], 0, 256U * sizeof(double));
    for (i = 0; i + 4 <= 1960000; i += 4) {
      localBins1[u[i]]++;
      localBins2_tmp = u[i + 1];
      localBins2[localBins2_tmp]++;
      localBins2_tmp = u[i + 2];
      localBins3[localBins2_tmp]++;
      localBins2_tmp = u[i + 3];
      y[localBins2_tmp]++;
    }
    while (i + 1 <= 1960000) {
      y[u[i]]++;
      i++;
    }
    for (i = 0; i < 256; i++) {
      y[i] = ((y[i] + localBins1[i]) + localBins2[i]) + localBins3[i];
    }
  }
  numCores = 0.0;
  for (localBins2_tmp = 0; localBins2_tmp < 256; localBins2_tmp++) {
    numCores += y[localBins2_tmp];
  }
  localBins1[0] = y[0] / numCores;
  localBins2[0] = localBins1[0];
  for (localBins2_tmp = 0; localBins2_tmp < 255; localBins2_tmp++) {
    p = y[localBins2_tmp + 1] / numCores;
    localBins1[localBins2_tmp + 1] = localBins1[localBins2_tmp] + p;
    localBins2[localBins2_tmp + 1] =
        localBins2[localBins2_tmp] + p * ((double)localBins2_tmp + 2.0);
  }
  maxval = rtMinusInf;
  idx = 0.0;
  num_maxval = 0.0;
  for (localBins2_tmp = 0; localBins2_tmp < 255; localBins2_tmp++) {
    numCores = localBins1[localBins2_tmp];
    p = localBins2[255] * numCores - localBins2[localBins2_tmp];
    numCores = p * p / (numCores * (1.0 - numCores));
    if (numCores > maxval) {
      maxval = numCores;
      idx = (double)localBins2_tmp + 1.0;
      num_maxval = 1.0;
    } else if (numCores == maxval) {
      idx += (double)localBins2_tmp + 1.0;
      num_maxval++;
    }
  }
  if (!rtIsInf(maxval)) {
    idx /= num_maxval;
    numCores = (idx - 1.0) / 255.0;
  } else {
    numCores = 0.0;
  }
  for (localBins2_tmp = 0; localBins2_tmp < 1960000; localBins2_tmp++) {
    BW[localBins2_tmp] = (b_I[localBins2_tmp] > numCores);
  }
}

/*
 * File trailer for imbinarize.c
 *
 * [EOF]
 */
