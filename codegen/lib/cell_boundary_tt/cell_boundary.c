/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: cell_boundary.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:11:08
 */

/* Include Files */
#include "cell_boundary.h"
#include "bwareaopen.h"
#include "bwmorph.h"
#include "cell_boundary_data.h"
#include "cell_boundary_emxutil.h"
#include "cell_boundary_initialize.h"
#include "cell_boundary_types.h"
#include "imbinarize.h"
#include "imclose.h"
#include "imerode.h"
#include "imfilter.h"
#include "imopen.h"
#include "rt_nonfinite.h"
#include "strel.h"
#include <string.h>

/* Function Declarations */
static void binary_expand_op(double in1[1960000], const boolean_T in2[1960000],
                             const emxArray_boolean_T *in3);

/* Function Definitions */
/*
 * Arguments    : double in1[1960000]
 *                const boolean_T in2[1960000]
 *                const emxArray_boolean_T *in3
 * Return Type  : void
 */
static void binary_expand_op(double in1[1960000], const boolean_T in2[1960000],
                             const emxArray_boolean_T *in3)
{
  int aux_0_1;
  int i;
  int i1;
  int stride_0_0;
  int stride_0_1;
  const boolean_T *in3_data;
  in3_data = in3->data;
  stride_0_0 = (in3->size[0] != 1);
  stride_0_1 = (in3->size[1] != 1);
  aux_0_1 = 0;
  for (i = 0; i < 1400; i++) {
    for (i1 = 0; i1 < 1400; i1++) {
      int i2;
      i2 = i1 + 1400 * i;
      in1[i2] = (double)in2[i2] -
                (double)in3_data[i1 * stride_0_0 + in3->size[0] * aux_0_1];
    }
    aux_0_1 += stride_0_1;
  }
}

/*
 * GET_BOUNDARY , Yunhui Lyu, 2025/2/17, segment boudary of the Cell in
 * img_in
 *  img_input: 输入图像，
 *  edge_width: 提取的边界宽度(pxl)
 *
 * Arguments    : const double img_in[1960000]
 *                double edge_width
 *                double edge[1960000]
 * Return Type  : void
 */
void cell_boundary(const double img_in[1960000], double edge_width,
                   double edge[1960000])
{
  static double img_gaussian[1960000];
  static boolean_T b_edge[1960000];
  static boolean_T temp[1960000];
  c_emxArray_images_internal_code *SE_StrelArray;
  emxArray_boolean_T *temp_in;
  emxArray_cell_wrap_1 *SE_DecomposedStrelArray;
  int i;
  boolean_T *temp_in_data;
  if (!isInitialized_cell_boundary) {
    cell_boundary_initialize();
  }
  /*  Gaussian filter process */
  imfilter(img_in, img_gaussian);
  /*  Binarize the image */
  imbinarize(img_gaussian, b_edge);
  /*  BW image morphological operation */
  imclose(b_edge, temp);
  memcpy(&b_edge[0], &temp[0], 1960000U * sizeof(boolean_T));
  imopen(b_edge, temp);
  bwmorph(temp);
  memcpy(&b_edge[0], &temp[0], 1960000U * sizeof(boolean_T));
  c_imerode(b_edge, temp);
  memcpy(&b_edge[0], &temp[0], 1960000U * sizeof(boolean_T));
  b_imopen(b_edge, temp);
  /*  Edge detection */
  for (i = 0; i < 1960000; i++) {
    temp[i] = !temp[i];
  }
  bwareaopen(temp);
  for (i = 0; i < 1960000; i++) {
    b_edge[i] = !temp[i];
  }
  b_bwareaopen(b_edge);
  /*  修改边界宽度 */
  e_emxInit_images_internal_coder(&SE_StrelArray);
  emxInit_cell_wrap_1(&SE_DecomposedStrelArray);
  strel_strel(edge_width, SE_StrelArray, SE_DecomposedStrelArray);
  emxInit_boolean_T(&temp_in, 2);
  e_imerode(b_edge, SE_StrelArray, SE_DecomposedStrelArray, temp_in);
  temp_in_data = temp_in->data;
  emxFree_cell_wrap_1(&SE_DecomposedStrelArray);
  c_emxFree_images_internal_coder(&SE_StrelArray);
  if ((temp_in->size[0] == 1400) && (temp_in->size[1] == 1400)) {
    for (i = 0; i < 1960000; i++) {
      edge[i] = (double)b_edge[i] - (double)temp_in_data[i];
    }
  } else {
    binary_expand_op(edge, b_edge, temp_in);
  }
  emxFree_boolean_T(&temp_in);
  /*  imwrite(boundary,['./resource/boundary_',num2str(save_idx),'.png']) */
}

/*
 * File trailer for cell_boundary.c
 *
 * [EOF]
 */
