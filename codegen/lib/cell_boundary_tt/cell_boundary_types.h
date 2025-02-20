/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: cell_boundary_types.h
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:11:08
 */

#ifndef CELL_BOUNDARY_TYPES_H
#define CELL_BOUNDARY_TYPES_H

/* Include Files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T
struct emxArray_boolean_T {
  boolean_T *data;
  int *size;
  int allocatedSize;
  int numDimensions;
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
  double *data;
  int *size;
  int allocatedSize;
  int numDimensions;
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
  int *size;
  int allocatedSize;
  int numDimensions;
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
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
} emxArray_cell_wrap_1;
#endif /* typedef_emxArray_cell_wrap_1 */

#ifndef typedef_d_emxArray_images_internal_code
#define typedef_d_emxArray_images_internal_code
typedef struct {
  c_images_internal_coder_strel_S data[1];
  int size[2];
} d_emxArray_images_internal_code;
#endif /* typedef_d_emxArray_images_internal_code */

#ifndef typedef_emxArray_cell_wrap_1_1x1
#define typedef_emxArray_cell_wrap_1_1x1
typedef struct {
  cell_wrap_1 data[1];
  int size[2];
} emxArray_cell_wrap_1_1x1;
#endif /* typedef_emxArray_cell_wrap_1_1x1 */

#ifndef struct_emxArray_real32_T
#define struct_emxArray_real32_T
struct emxArray_real32_T {
  float *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_real32_T */
#ifndef typedef_emxArray_real32_T
#define typedef_emxArray_real32_T
typedef struct emxArray_real32_T emxArray_real32_T;
#endif /* typedef_emxArray_real32_T */

#ifndef typedef_e_emxArray_images_internal_code
#define typedef_e_emxArray_images_internal_code
typedef struct {
  c_images_internal_coder_strel_S data[2];
  int size[2];
} e_emxArray_images_internal_code;
#endif /* typedef_e_emxArray_images_internal_code */

#ifndef typedef_emxArray_cell_wrap_1_1x2
#define typedef_emxArray_cell_wrap_1_1x2
typedef struct {
  cell_wrap_1 data[2];
  int size[2];
} emxArray_cell_wrap_1_1x2;
#endif /* typedef_emxArray_cell_wrap_1_1x2 */

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T
struct emxArray_int32_T {
  int *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_int32_T */
#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T
typedef struct emxArray_int32_T emxArray_int32_T;
#endif /* typedef_emxArray_int32_T */

#ifndef typedef_strel
#define typedef_strel
typedef struct {
  c_emxArray_images_internal_code *StrelArray;
  emxArray_cell_wrap_1 *DecomposedStrelArray;
} strel;
#endif /* typedef_strel */

#ifndef typedef_cell_wrap_38
#define typedef_cell_wrap_38
typedef struct {
  emxArray_real_T *f1;
} cell_wrap_38;
#endif /* typedef_cell_wrap_38 */

#ifndef typedef_emxArray_cell_wrap_38
#define typedef_emxArray_cell_wrap_38
typedef struct {
  cell_wrap_38 *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
} emxArray_cell_wrap_38;
#endif /* typedef_emxArray_cell_wrap_38 */

#ifndef typedef_cell_wrap_39
#define typedef_cell_wrap_39
typedef struct {
  emxArray_real_T *f1;
} cell_wrap_39;
#endif /* typedef_cell_wrap_39 */

#ifndef struct_emxArray_uint32_T
#define struct_emxArray_uint32_T
struct emxArray_uint32_T {
  unsigned int *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_uint32_T */
#ifndef typedef_emxArray_uint32_T
#define typedef_emxArray_uint32_T
typedef struct emxArray_uint32_T emxArray_uint32_T;
#endif /* typedef_emxArray_uint32_T */

#ifndef struct_emxArray_int8_T
#define struct_emxArray_int8_T
struct emxArray_int8_T {
  signed char *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_int8_T */
#ifndef typedef_emxArray_int8_T
#define typedef_emxArray_int8_T
typedef struct emxArray_int8_T emxArray_int8_T;
#endif /* typedef_emxArray_int8_T */

#endif
/*
 * File trailer for cell_boundary_types.h
 *
 * [EOF]
 */
