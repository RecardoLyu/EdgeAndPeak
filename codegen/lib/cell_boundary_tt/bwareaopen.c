/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: bwareaopen.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:11:08
 */

/* Include Files */
#include "bwareaopen.h"
#include "bwlabel.h"
#include "cell_boundary_emxutil.h"
#include "cell_boundary_types.h"
#include "rt_nonfinite.h"
#include "omp.h"

/* Function Definitions */
/*
 * Arguments    : boolean_T varargin_1[1960000]
 * Return Type  : void
 */
void b_bwareaopen(boolean_T varargin_1[1960000])
{
  static double L[1960000];
  emxArray_int32_T *regionLengths;
  double numComponents;
  int c;
  int i;
  int i1;
  int loop_ub_tmp;
  int r;
  int *regionLengths_data;
  numComponents = labelingWu_parallel(varargin_1, L);
  emxInit_int32_T(&regionLengths);
  loop_ub_tmp = (int)numComponents;
  i = regionLengths->size[0];
  regionLengths->size[0] = (int)numComponents;
  emxEnsureCapacity_int32_T(regionLengths, i);
  regionLengths_data = regionLengths->data;
  for (i = 0; i < loop_ub_tmp; i++) {
    regionLengths_data[i] = 0;
  }
  for (loop_ub_tmp = 0; loop_ub_tmp < 1960000; loop_ub_tmp++) {
    i = (int)L[loop_ub_tmp];
    if (i > 0) {
      regionLengths_data[i - 1]++;
    }
  }
#pragma omp parallel for num_threads(omp_get_max_threads()) private(r, i1)

  for (c = 0; c < 1400; c++) {
    for (r = 0; r < 1400; r++) {
      i1 = r + 1400 * c;
      if (varargin_1[i1] && (regionLengths_data[(int)L[i1] - 1] < 25000)) {
        varargin_1[i1] = false;
      }
    }
  }
  emxFree_int32_T(&regionLengths);
}

/*
 * Arguments    : boolean_T varargin_1[1960000]
 * Return Type  : void
 */
void bwareaopen(boolean_T varargin_1[1960000])
{
  static double L[1960000];
  emxArray_int32_T *regionLengths;
  double numComponents;
  int c;
  int i;
  int i1;
  int loop_ub_tmp;
  int r;
  int *regionLengths_data;
  numComponents = labelingWu_parallel(varargin_1, L);
  emxInit_int32_T(&regionLengths);
  loop_ub_tmp = (int)numComponents;
  i = regionLengths->size[0];
  regionLengths->size[0] = (int)numComponents;
  emxEnsureCapacity_int32_T(regionLengths, i);
  regionLengths_data = regionLengths->data;
  for (i = 0; i < loop_ub_tmp; i++) {
    regionLengths_data[i] = 0;
  }
  for (loop_ub_tmp = 0; loop_ub_tmp < 1960000; loop_ub_tmp++) {
    i = (int)L[loop_ub_tmp];
    if (i > 0) {
      regionLengths_data[i - 1]++;
    }
  }
#pragma omp parallel for num_threads(omp_get_max_threads()) private(r, i1)

  for (c = 0; c < 1400; c++) {
    for (r = 0; r < 1400; r++) {
      i1 = r + 1400 * c;
      if (varargin_1[i1] && (regionLengths_data[(int)L[i1] - 1] < 50000)) {
        varargin_1[i1] = false;
      }
    }
  }
  emxFree_int32_T(&regionLengths);
}

/*
 * File trailer for bwareaopen.c
 *
 * [EOF]
 */
