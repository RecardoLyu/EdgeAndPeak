/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cell_boundary_emxutil.h
 *
 * Code generation for function 'cell_boundary_emxutil'
 *
 */

#pragma once

/* Include files */
#include "cell_boundary_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void c_emxCopyStruct_images_internal(const emlrtStack *sp,
                                     c_images_internal_coder_strel_S *dst,
                                     const c_images_internal_coder_strel_S *src,
                                     const emlrtRTEInfo *srcLocation);

void c_emxCopy_images_internal_coder(
    const emlrtStack *sp, c_emxArray_images_internal_code **dst,
    c_emxArray_images_internal_code *const *src,
    const emlrtRTEInfo *srcLocation);

void c_emxEnsureCapacity_images_inte(const emlrtStack *sp,
                                     c_images_internal_coder_strel_S *data,
                                     const int32_T size[2], int32_T oldNumel,
                                     const emlrtRTEInfo *srcLocation);

void c_emxExpand_images_internal_cod(const emlrtStack *sp,
                                     c_images_internal_coder_strel_S *data,
                                     int32_T fromIndex, int32_T toIndex,
                                     const emlrtRTEInfo *srcLocation);

void c_emxFreeStruct_images_internal(const emlrtStack *sp,
                                     c_images_internal_coder_strel_S *pStruct);

void c_emxFree_images_internal_coder(
    const emlrtStack *sp, c_emxArray_images_internal_code **pEmxArray);

void c_emxInitStruct_images_internal(const emlrtStack *sp,
                                     c_images_internal_coder_strel_S *pStruct,
                                     const emlrtRTEInfo *srcLocation,
                                     boolean_T doPush);

void c_emxInit_images_internal_coder(
    d_emxArray_images_internal_code *pEmxArray);

void c_emxTrim_images_internal_coder(const emlrtStack *sp,
                                     c_images_internal_coder_strel_S *data,
                                     int32_T fromIndex, int32_T toIndex);

void d_emxEnsureCapacity_images_inte(const emlrtStack *sp,
                                     c_emxArray_images_internal_code *emxArray,
                                     int32_T oldNumel,
                                     const emlrtRTEInfo *srcLocation);

void d_emxExpand_images_internal_cod(const emlrtStack *sp,
                                     c_emxArray_images_internal_code *emxArray,
                                     int32_T fromIndex, int32_T toIndex,
                                     const emlrtRTEInfo *srcLocation);

void d_emxFree_images_internal_coder(
    const emlrtStack *sp, d_emxArray_images_internal_code *pEmxArray);

void d_emxInit_images_internal_coder(
    e_emxArray_images_internal_code *pEmxArray);

void d_emxTrim_images_internal_coder(const emlrtStack *sp,
                                     c_emxArray_images_internal_code *emxArray,
                                     int32_T fromIndex, int32_T toIndex);

void e_emxEnsureCapacity_images_inte(const emlrtStack *sp,
                                     c_images_internal_coder_strel_S data[2],
                                     const int32_T size[2], int32_T oldNumel,
                                     const emlrtRTEInfo *srcLocation);

void e_emxExpand_images_internal_cod(const emlrtStack *sp,
                                     c_images_internal_coder_strel_S data[2],
                                     int32_T fromIndex, int32_T toIndex,
                                     const emlrtRTEInfo *srcLocation);

void e_emxFree_images_internal_coder(
    const emlrtStack *sp, e_emxArray_images_internal_code *pEmxArray);

void e_emxInit_images_internal_coder(
    f_emxArray_images_internal_code *pEmxArray);

void e_emxTrim_images_internal_coder(const emlrtStack *sp,
                                     c_images_internal_coder_strel_S data[2],
                                     int32_T fromIndex, int32_T toIndex);

void emxCopyStruct_cell_wrap_1(const emlrtStack *sp, cell_wrap_1 *dst,
                               const cell_wrap_1 *src,
                               const emlrtRTEInfo *srcLocation);

void emxCopy_boolean_T(const emlrtStack *sp, emxArray_boolean_T **dst,
                       emxArray_boolean_T *const *src,
                       const emlrtRTEInfo *srcLocation);

void emxCopy_real_T(const emlrtStack *sp, emxArray_real_T **dst,
                    emxArray_real_T *const *src,
                    const emlrtRTEInfo *srcLocation);

void emxEnsureCapacity_boolean_T(const emlrtStack *sp,
                                 emxArray_boolean_T *emxArray, int32_T oldNumel,
                                 const emlrtRTEInfo *srcLocation);

void emxEnsureCapacity_cell_wrap_1(const emlrtStack *sp, cell_wrap_1 *data,
                                   const int32_T size[2], int32_T oldNumel,
                                   const emlrtRTEInfo *srcLocation);

void emxEnsureCapacity_cell_wrap_11(const emlrtStack *sp,
                                    emxArray_cell_wrap_1 *emxArray,
                                    int32_T oldNumel,
                                    const emlrtRTEInfo *srcLocation);

void emxEnsureCapacity_cell_wrap_12(const emlrtStack *sp, cell_wrap_1 data[2],
                                    const int32_T size[2], int32_T oldNumel,
                                    const emlrtRTEInfo *srcLocation);

void emxEnsureCapacity_cell_wrap_37(const emlrtStack *sp,
                                    emxArray_cell_wrap_37 *emxArray,
                                    int32_T oldNumel,
                                    const emlrtRTEInfo *srcLocation);

void emxEnsureCapacity_int32_T(const emlrtStack *sp, emxArray_int32_T *emxArray,
                               int32_T oldNumel,
                               const emlrtRTEInfo *srcLocation);

void emxEnsureCapacity_real32_T(const emlrtStack *sp,
                                emxArray_real32_T *emxArray, int32_T oldNumel,
                                const emlrtRTEInfo *srcLocation);

void emxEnsureCapacity_real_T(const emlrtStack *sp, emxArray_real_T *emxArray,
                              int32_T oldNumel,
                              const emlrtRTEInfo *srcLocation);

void emxEnsureCapacity_uint32_T(const emlrtStack *sp,
                                emxArray_uint32_T *emxArray, int32_T oldNumel,
                                const emlrtRTEInfo *srcLocation);

void emxExpand_cell_wrap_1(const emlrtStack *sp, emxArray_cell_wrap_1 *emxArray,
                           int32_T fromIndex, int32_T toIndex,
                           const emlrtRTEInfo *srcLocation);

void emxExpand_cell_wrap_1_1x1(const emlrtStack *sp, cell_wrap_1 *data,
                               int32_T fromIndex, int32_T toIndex,
                               const emlrtRTEInfo *srcLocation);

void emxExpand_cell_wrap_1_1x2(const emlrtStack *sp, cell_wrap_1 data[2],
                               int32_T fromIndex, int32_T toIndex,
                               const emlrtRTEInfo *srcLocation);

void emxExpand_cell_wrap_37(const emlrtStack *sp,
                            emxArray_cell_wrap_37 *emxArray, int32_T fromIndex,
                            int32_T toIndex, const emlrtRTEInfo *srcLocation);

void emxFreeMatrix_cell_wrap_38(const emlrtStack *sp, cell_wrap_38 pMatrix[3]);

void emxFreeStruct_cell_wrap_1(const emlrtStack *sp, cell_wrap_1 *pStruct);

void emxFreeStruct_cell_wrap_37(const emlrtStack *sp, cell_wrap_37 *pStruct);

void emxFreeStruct_cell_wrap_38(const emlrtStack *sp, cell_wrap_38 *pStruct);

void emxFreeStruct_strel(const emlrtStack *sp, strel *pStruct);

void emxFree_boolean_T(const emlrtStack *sp, emxArray_boolean_T **pEmxArray);

void emxFree_cell_wrap_1(const emlrtStack *sp,
                         emxArray_cell_wrap_1 **pEmxArray);

void emxFree_cell_wrap_1_1x0(const emlrtStack *sp,
                             const emxArray_cell_wrap_1_1x0 *pEmxArray);

void emxFree_cell_wrap_1_1x1(const emlrtStack *sp,
                             emxArray_cell_wrap_1_1x1 *pEmxArray);

void emxFree_cell_wrap_1_1x2(const emlrtStack *sp,
                             emxArray_cell_wrap_1_1x2 *pEmxArray);

void emxFree_cell_wrap_37(const emlrtStack *sp,
                          emxArray_cell_wrap_37 **pEmxArray);

void emxFree_int32_T(const emlrtStack *sp, emxArray_int32_T **pEmxArray);

void emxFree_real32_T(const emlrtStack *sp, emxArray_real32_T **pEmxArray);

void emxFree_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray);

void emxFree_uint32_T(const emlrtStack *sp, emxArray_uint32_T **pEmxArray);

void emxInitMatrix_cell_wrap_38(const emlrtStack *sp, cell_wrap_38 pMatrix[3],
                                const emlrtRTEInfo *srcLocation);

void emxInitStruct_cell_wrap_1(const emlrtStack *sp, cell_wrap_1 *pStruct,
                               const emlrtRTEInfo *srcLocation);

void emxInitStruct_cell_wrap_37(const emlrtStack *sp, cell_wrap_37 *pStruct,
                                const emlrtRTEInfo *srcLocation);

void emxInitStruct_cell_wrap_38(const emlrtStack *sp, cell_wrap_38 *pStruct,
                                const emlrtRTEInfo *srcLocation);

void emxInitStruct_strel(const emlrtStack *sp, strel *pStruct,
                         const emlrtRTEInfo *srcLocation);

void emxInit_boolean_T(const emlrtStack *sp, emxArray_boolean_T **pEmxArray,
                       int32_T numDimensions, const emlrtRTEInfo *srcLocation,
                       boolean_T doPush);

void emxInit_cell_wrap_1(const emlrtStack *sp, emxArray_cell_wrap_1 **pEmxArray,
                         const emlrtRTEInfo *srcLocation);

void emxInit_cell_wrap_1_1x0(emxArray_cell_wrap_1_1x0 *pEmxArray);

void emxInit_cell_wrap_1_1x1(emxArray_cell_wrap_1_1x1 *pEmxArray);

void emxInit_cell_wrap_1_1x2(emxArray_cell_wrap_1_1x2 *pEmxArray);

void emxInit_cell_wrap_37(const emlrtStack *sp,
                          emxArray_cell_wrap_37 **pEmxArray,
                          const emlrtRTEInfo *srcLocation);

void emxInit_int32_T(const emlrtStack *sp, emxArray_int32_T **pEmxArray,
                     int32_T numDimensions, const emlrtRTEInfo *srcLocation);

void emxInit_real32_T(const emlrtStack *sp, emxArray_real32_T **pEmxArray,
                      const emlrtRTEInfo *srcLocation);

void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
                    int32_T numDimensions, const emlrtRTEInfo *srcLocation,
                    boolean_T doPush);

void emxInit_uint32_T(const emlrtStack *sp, emxArray_uint32_T **pEmxArray,
                      const emlrtRTEInfo *srcLocation);

void emxTrim_cell_wrap_1(const emlrtStack *sp, emxArray_cell_wrap_1 *emxArray,
                         int32_T fromIndex, int32_T toIndex);

void emxTrim_cell_wrap_1_1x1(const emlrtStack *sp, cell_wrap_1 *data,
                             int32_T fromIndex, int32_T toIndex);

void emxTrim_cell_wrap_1_1x2(const emlrtStack *sp, cell_wrap_1 data[2],
                             int32_T fromIndex, int32_T toIndex);

void emxTrim_cell_wrap_37(const emlrtStack *sp, emxArray_cell_wrap_37 *emxArray,
                          int32_T fromIndex, int32_T toIndex);

void f_emxFree_images_internal_coder(
    const emlrtStack *sp, const f_emxArray_images_internal_code *pEmxArray);

void f_emxInit_images_internal_coder(
    const emlrtStack *sp, c_emxArray_images_internal_code **pEmxArray,
    const emlrtRTEInfo *srcLocation, boolean_T doPush);

/* End of code generation (cell_boundary_emxutil.h) */
