/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: bwmorph.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:11:08
 */

/* Include Files */
#include "bwmorph.h"
#include "rt_nonfinite.h"
#include "libmwbwlookup_tbb.h"
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : boolean_T bwin[1960000]
 * Return Type  : void
 */
void bwmorph(boolean_T bwin[1960000])
{
  static const boolean_T lut[512] = {
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, true,  true,  true,  true,
      true,  true,  true,  true,  true,  true,  true,  true,  true,  true,
      true,  true,  false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, true,  true,
      true,  true,  true,  true,  true,  true,  true,  true,  true,  true,
      true,  true,  true,  true,  false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      true,  true,  true,  true,  true,  true,  true,  true,  true,  true,
      true,  true,  true,  true,  true,  true,  false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, true,  true,  true,  true,  true,  true,  true,  true,
      true,  true,  true,  true,  true,  true,  true,  true,  false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, true,  true,  true,  true,  true,  true,
      true,  true,  true,  true,  true,  true,  true,  true,  true,  true,
      false, false, false, false, false, false, false, false, false, false,
      true,  true,  false, false, true,  true,  true,  true,  true,  true,
      true,  true,  true,  true,  true,  true,  true,  true,  true,  true,
      true,  true,  false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, true,  true,
      true,  true,  true,  true,  true,  true,  true,  true,  true,  true,
      true,  true,  true,  true,  false, false, false, false, false, false,
      false, false, false, false, true,  true,  false, false, true,  true,
      true,  true,  true,  true,  true,  true,  true,  true,  true,  true,
      true,  true,  true,  true,  true,  true,  false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, true,  true,  true,  true,  true,  true,  true,  true,
      true,  true,  true,  true,  true,  true,  true,  true,  false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, true,  true,  true,  true,  true,  true,
      true,  true,  true,  true,  true,  true,  true,  true,  true,  true,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, true,  true,  true,  true,
      true,  true,  true,  true,  true,  true,  true,  true,  true,  true,
      true,  true,  false, false, false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, true,  true,
      true,  true,  true,  true,  true,  true,  true,  true,  true,  true,
      true,  true,  true,  true,  false, false, false, false, false, false,
      false, false, false, false, false, false, false, false, false, false,
      true,  true,  true,  true,  true,  true,  true,  true,  true,  true,
      true,  true,  true,  true,  true,  true,  false, false, false, false,
      false, false, false, false, false, false, true,  true,  false, false,
      true,  true,  true,  true,  true,  true,  true,  true,  true,  true,
      true,  true,  true,  true,  true,  true,  true,  true,  false, false,
      false, false, false, false, false, false, false, false, false, false,
      false, false, false, false, true,  true,  true,  true,  true,  true,
      true,  true,  true,  true,  true,  true,  true,  true,  true,  true,
      false, false, false, false, false, false, false, false, false, false,
      true,  true,  false, false, true,  true,  true,  true,  true,  true,
      true,  true,  true,  true,  true,  true,  true,  true,  true,  true,
      true,  true};
  static boolean_T last_aout[1960000];
  double sizeIn[2];
  int k;
  boolean_T exitg1;
  boolean_T p;
  do {
    memcpy(&last_aout[0], &bwin[0], 1960000U * sizeof(boolean_T));
    sizeIn[0] = 1400.0;
    sizeIn[1] = 1400.0;
    bwlookup_tbb_boolean(&last_aout[0], &sizeIn[0], 2.0, &lut[0], 512.0,
                         &bwin[0]);
    p = true;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 1960000)) {
      if (last_aout[k] != bwin[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  } while (!p);
  /*  the output is not changing anymore */
}

/*
 * File trailer for bwmorph.c
 *
 * [EOF]
 */
