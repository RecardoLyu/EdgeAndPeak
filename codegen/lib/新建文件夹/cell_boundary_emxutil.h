/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: cell_boundary_emxutil.h
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:17:16
 */

#ifndef CELL_BOUNDARY_EMXUTIL_H
#define CELL_BOUNDARY_EMXUTIL_H

/* Include Files */
#include "cell_boundary_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void
c_emxCopyStruct_images_internal(c_images_internal_coder_strel_S *dst,
                                const c_images_internal_coder_strel_S *src);

extern void
c_emxCopy_images_internal_coder(c_emxArray_images_internal_code **dst,
                                c_emxArray_images_internal_code *const *src);

extern void
c_emxEnsureCapacity_images_inte(c_images_internal_coder_strel_S *data,
                                const int size[2], int oldNumel);

extern void
c_emxExpand_images_internal_cod(c_images_internal_coder_strel_S *data,
                                int fromIndex, int toIndex);

extern void
c_emxFreeStruct_images_internal(c_images_internal_coder_strel_S *pStruct);

extern void
c_emxFree_images_internal_coder(c_emxArray_images_internal_code **pEmxArray);

extern void
c_emxInitStruct_images_internal(c_images_internal_coder_strel_S *pStruct);

extern void
c_emxInit_images_internal_coder(d_emxArray_images_internal_code *pEmxArray);

extern void
c_emxTrim_images_internal_coder(c_images_internal_coder_strel_S *data,
                                int fromIndex, int toIndex);

extern void
d_emxEnsureCapacity_images_inte(c_emxArray_images_internal_code *emxArray,
                                int oldNumel);

extern void
d_emxExpand_images_internal_cod(c_emxArray_images_internal_code *emxArray,
                                int fromIndex, int toIndex);

extern void
d_emxFree_images_internal_coder(d_emxArray_images_internal_code *pEmxArray);

extern void
d_emxInit_images_internal_coder(e_emxArray_images_internal_code *pEmxArray);

extern void
d_emxTrim_images_internal_coder(c_emxArray_images_internal_code *emxArray,
                                int fromIndex, int toIndex);

extern void
e_emxEnsureCapacity_images_inte(c_images_internal_coder_strel_S data[2],
                                const int size[2], int oldNumel);

extern void
e_emxExpand_images_internal_cod(c_images_internal_coder_strel_S data[2],
                                int fromIndex, int toIndex);

extern void
e_emxFree_images_internal_coder(e_emxArray_images_internal_code *pEmxArray);

extern void
e_emxInit_images_internal_coder(c_emxArray_images_internal_code **pEmxArray);

extern void
e_emxTrim_images_internal_coder(c_images_internal_coder_strel_S data[2],
                                int fromIndex, int toIndex);

extern void emxCopyStruct_cell_wrap_1(cell_wrap_1 *dst, const cell_wrap_1 *src);

extern void emxCopy_boolean_T(emxArray_boolean_T **dst,
                              emxArray_boolean_T *const *src);

extern void emxCopy_real_T(emxArray_real_T **dst, emxArray_real_T *const *src);

extern void emxEnsureCapacity_boolean_T(emxArray_boolean_T *emxArray,
                                        int oldNumel);

extern void emxEnsureCapacity_cell_wrap_1(cell_wrap_1 *data, const int size[2],
                                          int oldNumel);

extern void emxEnsureCapacity_cell_wrap_11(emxArray_cell_wrap_1 *emxArray,
                                           int oldNumel);

extern void emxEnsureCapacity_cell_wrap_12(cell_wrap_1 data[2],
                                           const int size[2], int oldNumel);

extern void emxEnsureCapacity_cell_wrap_38(emxArray_cell_wrap_38 *emxArray,
                                           int oldNumel);

extern void emxEnsureCapacity_int32_T(emxArray_int32_T *emxArray, int oldNumel);

extern void emxEnsureCapacity_real32_T(emxArray_real32_T *emxArray,
                                       int oldNumel);

extern void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int oldNumel);

extern void emxEnsureCapacity_uint32_T(emxArray_uint32_T *emxArray,
                                       int oldNumel);

extern void emxExpand_cell_wrap_1(emxArray_cell_wrap_1 *emxArray, int fromIndex,
                                  int toIndex);

extern void emxExpand_cell_wrap_1_1x1(cell_wrap_1 *data, int fromIndex,
                                      int toIndex);

extern void emxExpand_cell_wrap_1_1x2(cell_wrap_1 data[2], int fromIndex,
                                      int toIndex);

extern void emxExpand_cell_wrap_38(emxArray_cell_wrap_38 *emxArray,
                                   int fromIndex, int toIndex);

extern void emxFreeMatrix_cell_wrap_39(cell_wrap_39 pMatrix[3]);

extern void emxFreeStruct_cell_wrap_1(cell_wrap_1 *pStruct);

extern void emxFreeStruct_cell_wrap_38(cell_wrap_38 *pStruct);

extern void emxFreeStruct_cell_wrap_39(cell_wrap_39 *pStruct);

extern void emxFreeStruct_strel(strel *pStruct);

extern void emxFree_boolean_T(emxArray_boolean_T **pEmxArray);

extern void emxFree_cell_wrap_1(emxArray_cell_wrap_1 **pEmxArray);

extern void emxFree_cell_wrap_1_1x1(emxArray_cell_wrap_1_1x1 *pEmxArray);

extern void emxFree_cell_wrap_1_1x2(emxArray_cell_wrap_1_1x2 *pEmxArray);

extern void emxFree_cell_wrap_38(emxArray_cell_wrap_38 **pEmxArray);

extern void emxFree_int32_T(emxArray_int32_T **pEmxArray);

extern void emxFree_real32_T(emxArray_real32_T **pEmxArray);

extern void emxFree_real_T(emxArray_real_T **pEmxArray);

extern void emxFree_uint32_T(emxArray_uint32_T **pEmxArray);

extern void emxInitMatrix_cell_wrap_39(cell_wrap_39 pMatrix[3]);

extern void emxInitStruct_cell_wrap_1(cell_wrap_1 *pStruct);

extern void emxInitStruct_cell_wrap_38(cell_wrap_38 *pStruct);

extern void emxInitStruct_cell_wrap_39(cell_wrap_39 *pStruct);

extern void emxInitStruct_strel(strel *pStruct);

extern void emxInit_boolean_T(emxArray_boolean_T **pEmxArray,
                              int numDimensions);

extern void emxInit_cell_wrap_1(emxArray_cell_wrap_1 **pEmxArray);

extern void emxInit_cell_wrap_1_1x1(emxArray_cell_wrap_1_1x1 *pEmxArray);

extern void emxInit_cell_wrap_1_1x2(emxArray_cell_wrap_1_1x2 *pEmxArray);

extern void emxInit_cell_wrap_38(emxArray_cell_wrap_38 **pEmxArray);

extern void emxInit_int32_T(emxArray_int32_T **pEmxArray);

extern void emxInit_real32_T(emxArray_real32_T **pEmxArray);

extern void emxInit_real_T(emxArray_real_T **pEmxArray, int numDimensions);

extern void emxInit_uint32_T(emxArray_uint32_T **pEmxArray);

extern void emxTrim_cell_wrap_1(emxArray_cell_wrap_1 *emxArray, int fromIndex,
                                int toIndex);

extern void emxTrim_cell_wrap_1_1x1(cell_wrap_1 *data, int fromIndex,
                                    int toIndex);

extern void emxTrim_cell_wrap_1_1x2(cell_wrap_1 data[2], int fromIndex,
                                    int toIndex);

extern void emxTrim_cell_wrap_38(emxArray_cell_wrap_38 *emxArray, int fromIndex,
                                 int toIndex);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for cell_boundary_emxutil.h
 *
 * [EOF]
 */
