/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: cell_brightzone.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 15:48:23
 */

/* Include Files */
#include "cell_brightzone.h"
#include "cell_brightzone_data.h"
#include "cell_brightzone_emxutil.h"
#include "cell_brightzone_initialize.h"
#include "cell_brightzone_types.h"
#include "imbinarize.h"
#include "imdilate.h"
#include "imerode.h"
#include "imfilter.h"
#include "imtophat.h"
#include "rt_nonfinite.h"
#include "strel.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * CELL_BRIGHTZONE, Yunhui Lyu, 2025/2/17,  Detect areas of the image with
 *  rapid brightness changes.
 *  img_in:输入待求图片
 *  peak_mask:图片较亮点/亮度变化较为剧烈的位置的mask
 *  strel_size:结构元素尺寸(pxl)，该值越大，得到的结果的面积就越大
 *
 * Arguments    : const double img_in[1960000]
 *                double strel_size
 *                emxArray_boolean_T *peak_mask
 * Return Type  : void
 */
void cell_brightzone(const double img_in[1960000], double strel_size,
                     emxArray_boolean_T *peak_mask)
{
  static double img_lap1[1960000];
  static double img_tophat[1960000];
  static boolean_T b_peak_mask[1960000];
  c_emxArray_images_internal_code *SE_StrelArray;
  emxArray_boolean_T *c_peak_mask;
  emxArray_cell_wrap_1 *SE_DecomposedStrelArray;
  double maxval[1400];
  double d;
  double img_max;
  double img_min;
  int b_i;
  int i;
  int idx;
  boolean_T exitg1;
  boolean_T p;
  boolean_T *b_peak_mask_data;
  boolean_T *peak_mask_data;
  if (!isInitialized_cell_brightzone) {
    cell_brightzone_initialize();
  }
  for (idx = 0; idx < 1400; idx++) {
    maxval[idx] = img_in[1400 * idx];
    for (i = 0; i < 1399; i++) {
      d = img_in[(i + 1400 * idx) + 1];
      if (rtIsNaN(d)) {
        p = false;
      } else {
        img_min = maxval[idx];
        if (rtIsNaN(img_min)) {
          p = true;
        } else {
          p = (img_min < d);
        }
      }
      if (p) {
        maxval[idx] = d;
      }
    }
  }
  if (!rtIsNaN(maxval[0])) {
    idx = 1;
  } else {
    idx = 0;
    i = 2;
    exitg1 = false;
    while ((!exitg1) && (i < 1401)) {
      if (!rtIsNaN(maxval[i - 1])) {
        idx = i;
        exitg1 = true;
      } else {
        i++;
      }
    }
  }
  if (idx == 0) {
    img_max = maxval[0];
  } else {
    img_max = maxval[idx - 1];
    b_i = idx + 1;
    for (i = b_i; i < 1401; i++) {
      d = maxval[i - 1];
      if (img_max < d) {
        img_max = d;
      }
    }
  }
  for (idx = 0; idx < 1400; idx++) {
    maxval[idx] = img_in[1400 * idx];
    for (i = 0; i < 1399; i++) {
      d = img_in[(i + 1400 * idx) + 1];
      if (rtIsNaN(d)) {
        p = false;
      } else {
        img_min = maxval[idx];
        if (rtIsNaN(img_min)) {
          p = true;
        } else {
          p = (img_min > d);
        }
      }
      if (p) {
        maxval[idx] = d;
      }
    }
  }
  if (!rtIsNaN(maxval[0])) {
    idx = 1;
  } else {
    idx = 0;
    i = 2;
    exitg1 = false;
    while ((!exitg1) && (i < 1401)) {
      if (!rtIsNaN(maxval[i - 1])) {
        idx = i;
        exitg1 = true;
      } else {
        i++;
      }
    }
  }
  if (idx == 0) {
    img_min = maxval[0];
  } else {
    img_min = maxval[idx - 1];
    b_i = idx + 1;
    for (i = b_i; i < 1401; i++) {
      d = maxval[i - 1];
      if (img_min > d) {
        img_min = d;
      }
    }
  }
  img_max -= img_min;
  for (b_i = 0; b_i < 1960000; b_i++) {
    img_lap1[b_i] = (img_in[b_i] - img_min) / img_max;
  }
  imtophat(img_lap1, img_tophat);
  /*  Laplacian filter */
  imfilter(img_tophat, img_lap1);
  imbinarize(img_lap1, b_peak_mask);
  d_emxInit_images_internal_coder(&SE_StrelArray);
  emxInit_cell_wrap_1(&SE_DecomposedStrelArray);
  strel_strel(strel_size, SE_StrelArray, SE_DecomposedStrelArray);
  b_imerode(b_peak_mask, SE_StrelArray, SE_DecomposedStrelArray, peak_mask);
  peak_mask_data = peak_mask->data;
  strel_strel(strel_size - 1.0, SE_StrelArray, SE_DecomposedStrelArray);
  emxInit_boolean_T(&c_peak_mask, 2);
  b_i = c_peak_mask->size[0] * c_peak_mask->size[1];
  c_peak_mask->size[0] = peak_mask->size[0];
  c_peak_mask->size[1] = peak_mask->size[1];
  emxEnsureCapacity_boolean_T(c_peak_mask, b_i);
  b_peak_mask_data = c_peak_mask->data;
  idx = peak_mask->size[0] * peak_mask->size[1] - 1;
  for (b_i = 0; b_i <= idx; b_i++) {
    b_peak_mask_data[b_i] = peak_mask_data[b_i];
  }
  imdilate(c_peak_mask, SE_StrelArray, SE_DecomposedStrelArray, peak_mask);
  emxFree_boolean_T(&c_peak_mask);
  emxFree_cell_wrap_1(&SE_DecomposedStrelArray);
  c_emxFree_images_internal_coder(&SE_StrelArray);
  /*  imwrite(peak_mask,['./resource/peak_',num2str(save_idx),'.png']) */
}

/*
 * File trailer for cell_brightzone.c
 *
 * [EOF]
 */
