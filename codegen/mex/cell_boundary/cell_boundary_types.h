/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cell_boundary_types.h
 *
 * Code generation for function 'cell_boundary'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"

/* Type Definitions */
#ifndef typedef_rtString
#define typedef_rtString
typedef struct {
  char_T Value[21];
} rtString;
#endif /* typedef_rtString */

#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T
struct emxArray_boolean_T {
  boolean_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_boolean_T */
#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T
typedef struct emxArray_boolean_T emxArray_boolean_T;
#endif /* typedef_emxArray_boolean_T */

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T {
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_real_T */
#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T
typedef struct emxArray_real_T emxArray_real_T;
#endif /* typedef_emxArray_real_T */

#ifndef typedef_c_images_internal_coder_strel_S
#define typedef_c_images_internal_coder_strel_S
typedef struct {
  emxArray_boolean_T *nhood;
  emxArray_real_T *height;
  boolean_T Flat;
} c_images_internal_coder_strel_S;
#endif /* typedef_c_images_internal_coder_strel_S */

#ifndef typedef_c_emxArray_images_internal_code
#define typedef_c_emxArray_images_internal_code
typedef struct {
  c_images_internal_coder_strel_S *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
} c_emxArray_images_internal_code;
#endif /* typedef_c_emxArray_images_internal_code */

#ifndef typedef_cell_wrap_1
#define typedef_cell_wrap_1
typedef struct {
  c_emxArray_images_internal_code *f1;
} cell_wrap_1;
#endif /* typedef_cell_wrap_1 */

#ifndef typedef_emxArray_cell_wrap_1
#define typedef_emxArray_cell_wrap_1
typedef struct {
  cell_wrap_1 *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
} emxArray_cell_wrap_1;
#endif /* typedef_emxArray_cell_wrap_1 */

#ifndef typedef_strel
#define typedef_strel
typedef struct {
  c_emxArray_images_internal_code *StrelArray;
  emxArray_cell_wrap_1 *DecomposedStrelArray;
} strel;
#endif /* typedef_strel */

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T
struct emxArray_int32_T {
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_int32_T */
#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T
typedef struct emxArray_int32_T emxArray_int32_T;
#endif /* typedef_emxArray_int32_T */

#ifndef typedef_d_emxArray_images_internal_code
#define typedef_d_emxArray_images_internal_code
typedef struct {
  c_images_internal_coder_strel_S data[1];
  int32_T size[2];
} d_emxArray_images_internal_code;
#endif /* typedef_d_emxArray_images_internal_code */

#ifndef typedef_emxArray_cell_wrap_1_1x1
#define typedef_emxArray_cell_wrap_1_1x1
typedef struct {
  cell_wrap_1 data[1];
  int32_T size[2];
} emxArray_cell_wrap_1_1x1;
#endif /* typedef_emxArray_cell_wrap_1_1x1 */

#ifndef struct_emxArray_real32_T
#define struct_emxArray_real32_T
struct emxArray_real32_T {
  real32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_real32_T */
#ifndef typedef_emxArray_real32_T
#define typedef_emxArray_real32_T
typedef struct emxArray_real32_T emxArray_real32_T;
#endif /* typedef_emxArray_real32_T */

#ifndef typedef_cell_wrap_37
#define typedef_cell_wrap_37
typedef struct {
  emxArray_real_T *f1;
} cell_wrap_37;
#endif /* typedef_cell_wrap_37 */

#ifndef typedef_emxArray_cell_wrap_37
#define typedef_emxArray_cell_wrap_37
typedef struct {
  cell_wrap_37 *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
} emxArray_cell_wrap_37;
#endif /* typedef_emxArray_cell_wrap_37 */

#ifndef typedef_cell_wrap_38
#define typedef_cell_wrap_38
typedef struct {
  emxArray_real_T *f1;
} cell_wrap_38;
#endif /* typedef_cell_wrap_38 */

#ifndef struct_emxArray_uint32_T
#define struct_emxArray_uint32_T
struct emxArray_uint32_T {
  uint32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_uint32_T */
#ifndef typedef_emxArray_uint32_T
#define typedef_emxArray_uint32_T
typedef struct emxArray_uint32_T emxArray_uint32_T;
#endif /* typedef_emxArray_uint32_T */

#ifndef typedef_e_emxArray_images_internal_code
#define typedef_e_emxArray_images_internal_code
typedef struct {
  c_images_internal_coder_strel_S data[2];
  int32_T size[2];
} e_emxArray_images_internal_code;
#endif /* typedef_e_emxArray_images_internal_code */

#ifndef typedef_emxArray_cell_wrap_1_1x2
#define typedef_emxArray_cell_wrap_1_1x2
typedef struct {
  cell_wrap_1 data[2];
  int32_T size[2];
} emxArray_cell_wrap_1_1x2;
#endif /* typedef_emxArray_cell_wrap_1_1x2 */

#ifndef typedef_f_emxArray_images_internal_code
#define typedef_f_emxArray_images_internal_code
typedef struct {
  int32_T size[2];
} f_emxArray_images_internal_code;
#endif /* typedef_f_emxArray_images_internal_code */

#ifndef typedef_emxArray_cell_wrap_1_1x0
#define typedef_emxArray_cell_wrap_1_1x0
typedef struct {
  int32_T size[2];
} emxArray_cell_wrap_1_1x0;
#endif /* typedef_emxArray_cell_wrap_1_1x0 */

#ifndef typedef_b_labelingWu_parallel
#define typedef_b_labelingWu_parallel
typedef struct {
  real_T P[980001];
} b_labelingWu_parallel;
#endif /* typedef_b_labelingWu_parallel */

#ifndef typedef_f_imdilate
#define typedef_f_imdilate
typedef struct {
  uint32_T Apad[64584];
  uint32_T Apadpack[64584];
  uint32_T Apadpre[63090];
  uint32_T A[61600];
} f_imdilate;
#endif /* typedef_f_imdilate */

#ifndef typedef_e_imerode
#define typedef_e_imerode
typedef struct {
  uint32_T Apad[64584];
  uint32_T Apadpack[64584];
  uint32_T Apadpre[63090];
  uint32_T A[61600];
} e_imerode;
#endif /* typedef_e_imerode */

#ifndef typedef_f_imerode
#define typedef_f_imerode
typedef struct {
  boolean_T Apad[1999396];
  boolean_T Apadpre[1979649];
  uint32_T Apadpack[63630];
  uint32_T B[63630];
} f_imerode;
#endif /* typedef_f_imerode */

#ifndef typedef_b_bwmorphApplyOnce
#define typedef_b_bwmorphApplyOnce
typedef struct {
  boolean_T in[1960000];
} b_bwmorphApplyOnce;
#endif /* typedef_b_bwmorphApplyOnce */

#ifndef typedef_g_imdilate
#define typedef_g_imdilate
typedef struct {
  uint32_T Apad[64860];
  uint32_T Apadpack[64860];
  uint32_T Apadpre[63225];
  uint32_T A[61600];
} g_imdilate;
#endif /* typedef_g_imdilate */

#ifndef typedef_g_imerode
#define typedef_g_imerode
typedef struct {
  uint32_T Apad[64860];
  uint32_T Apadpack[64860];
  uint32_T Apadpre[63225];
  uint32_T A[61600];
} g_imerode;
#endif /* typedef_g_imerode */

#ifndef typedef_h_imerode
#define typedef_h_imerode
typedef struct {
  uint32_T Apad[67210];
  uint32_T Apadpack[67210];
  uint32_T Apadpre[65458];
  uint32_T A[63720];
} h_imerode;
#endif /* typedef_h_imerode */

#ifndef typedef_h_imdilate
#define typedef_h_imdilate
typedef struct {
  uint32_T Apad[67210];
  uint32_T Apadpack[67210];
  uint32_T Apadpre[65458];
  uint32_T A[63720];
} h_imdilate;
#endif /* typedef_h_imdilate */

#ifndef typedef_b_imfilter
#define typedef_b_imfilter
typedef struct {
  uint16_T a[1988100];
} b_imfilter;
#endif /* typedef_b_imfilter */

#ifndef typedef_c_bwareaopen
#define typedef_c_bwareaopen
typedef struct {
  real_T L[1960000];
} c_bwareaopen;
#endif /* typedef_c_bwareaopen */

#ifndef typedef_c_imopen
#define typedef_c_imopen
typedef struct {
  uint32_T inputImage[61600];
  uint32_T uv[61600];
} c_imopen;
#endif /* typedef_c_imopen */

#ifndef typedef_b_bwmorph
#define typedef_b_bwmorph
typedef struct {
  boolean_T last_aout[1960000];
} b_bwmorph;
#endif /* typedef_b_bwmorph */

#ifndef typedef_b_imclose
#define typedef_b_imclose
typedef struct {
  boolean_T Ap[2005056];
  uint32_T inputImage[63720];
  uint32_T uv[63720];
} b_imclose;
#endif /* typedef_b_imclose */

#ifndef typedef_b_cell_boundary
#define typedef_b_cell_boundary
typedef struct {
  uint16_T img_gaussian[1960000];
  boolean_T edge[1960000];
  boolean_T temp[1960000];
} b_cell_boundary;
#endif /* typedef_b_cell_boundary */

#ifndef typedef_cell_boundaryStackData
#define typedef_cell_boundaryStackData
typedef struct {
  union {
    b_labelingWu_parallel f0;
    f_imdilate f1;
    e_imerode f2;
    f_imerode f3;
    b_bwmorphApplyOnce f4;
    g_imdilate f5;
    g_imerode f6;
    h_imerode f7;
    h_imdilate f8;
    b_imfilter f9;
  } u1;
  union {
    c_bwareaopen f10;
    c_bwareaopen f11;
    c_imopen f12;
    b_bwmorph f13;
    c_imopen f14;
    b_imclose f15;
  } u2;
  b_cell_boundary f16;
} cell_boundaryStackData;
#endif /* typedef_cell_boundaryStackData */

/* End of code generation (cell_boundary_types.h) */
