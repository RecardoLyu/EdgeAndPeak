/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: cell_boundary_emxutil.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:11:08
 */

/* Include Files */
#include "cell_boundary_emxutil.h"
#include "cell_boundary_types.h"
#include "rt_nonfinite.h"
#include <stdlib.h>
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : c_images_internal_coder_strel_S *dst
 *                const c_images_internal_coder_strel_S *src
 * Return Type  : void
 */
void c_emxCopyStruct_images_internal(c_images_internal_coder_strel_S *dst,
                                     const c_images_internal_coder_strel_S *src)
{
  emxCopy_boolean_T(&dst->nhood, &src->nhood);
  emxCopy_real_T(&dst->height, &src->height);
  dst->Flat = src->Flat;
}

/*
 * Arguments    : c_emxArray_images_internal_code **dst
 *                c_emxArray_images_internal_code * const *src
 * Return Type  : void
 */
void c_emxCopy_images_internal_coder(
    c_emxArray_images_internal_code **dst,
    c_emxArray_images_internal_code *const *src)
{
  int i;
  int numElDst;
  int numElSrc;
  numElDst = 1;
  numElSrc = 1;
  for (i = 0; i < (*dst)->numDimensions; i++) {
    numElDst *= (*dst)->size[i];
    numElSrc *= (*src)->size[i];
  }
  for (i = 0; i < (*dst)->numDimensions; i++) {
    (*dst)->size[i] = (*src)->size[i];
  }
  d_emxEnsureCapacity_images_inte(*dst, numElDst);
  for (i = 0; i < numElSrc; i++) {
    c_emxCopyStruct_images_internal(&(*dst)->data[i], &(*src)->data[i]);
  }
}

/*
 * Arguments    : c_images_internal_coder_strel_S *data
 *                const int size[2]
 *                int oldNumel
 * Return Type  : void
 */
void c_emxEnsureCapacity_images_inte(c_images_internal_coder_strel_S *data,
                                     const int size[2], int oldNumel)
{
  int newNumel;
  if (oldNumel < 0) {
    oldNumel = 0;
  }
  newNumel = size[0] * size[1];
  if (oldNumel > newNumel) {
    c_emxTrim_images_internal_coder(data, newNumel, oldNumel);
  } else if (oldNumel < newNumel) {
    c_emxExpand_images_internal_cod(data, oldNumel, newNumel);
  }
}

/*
 * Arguments    : c_images_internal_coder_strel_S *data
 *                int fromIndex
 *                int toIndex
 * Return Type  : void
 */
void c_emxExpand_images_internal_cod(c_images_internal_coder_strel_S *data,
                                     int fromIndex, int toIndex)
{
  int i;
  for (i = fromIndex; i < toIndex; i++) {
    c_emxInitStruct_images_internal(data);
  }
}

/*
 * Arguments    : c_images_internal_coder_strel_S *pStruct
 * Return Type  : void
 */
void c_emxFreeStruct_images_internal(c_images_internal_coder_strel_S *pStruct)
{
  emxFree_boolean_T(&pStruct->nhood);
  emxFree_real_T(&pStruct->height);
}

/*
 * Arguments    : c_emxArray_images_internal_code **pEmxArray
 * Return Type  : void
 */
void c_emxFree_images_internal_coder(
    c_emxArray_images_internal_code **pEmxArray)
{
  int i;
  if (*pEmxArray != (c_emxArray_images_internal_code *)NULL) {
    if ((*pEmxArray)->data != (c_images_internal_coder_strel_S *)NULL) {
      int numEl;
      numEl = 1;
      for (i = 0; i < (*pEmxArray)->numDimensions; i++) {
        numEl *= (*pEmxArray)->size[i];
      }
      for (i = 0; i < numEl; i++) {
        c_emxFreeStruct_images_internal(&(*pEmxArray)->data[i]);
      }
      if ((*pEmxArray)->canFreeData) {
        free((*pEmxArray)->data);
      }
    }
    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (c_emxArray_images_internal_code *)NULL;
  }
}

/*
 * Arguments    : c_images_internal_coder_strel_S *pStruct
 * Return Type  : void
 */
void c_emxInitStruct_images_internal(c_images_internal_coder_strel_S *pStruct)
{
  emxInit_boolean_T(&pStruct->nhood, 3);
  emxInit_real_T(&pStruct->height, 3);
}

/*
 * Arguments    : d_emxArray_images_internal_code *pEmxArray
 * Return Type  : void
 */
void c_emxInit_images_internal_coder(d_emxArray_images_internal_code *pEmxArray)
{
  pEmxArray->size[0] = 0;
  pEmxArray->size[1] = 0;
}

/*
 * Arguments    : c_images_internal_coder_strel_S *data
 *                int fromIndex
 *                int toIndex
 * Return Type  : void
 */
void c_emxTrim_images_internal_coder(c_images_internal_coder_strel_S *data,
                                     int fromIndex, int toIndex)
{
  int i;
  for (i = fromIndex; i < toIndex; i++) {
    c_emxFreeStruct_images_internal(data);
  }
}

/*
 * Arguments    : c_emxArray_images_internal_code *emxArray
 *                int oldNumel
 * Return Type  : void
 */
void d_emxEnsureCapacity_images_inte(c_emxArray_images_internal_code *emxArray,
                                     int oldNumel)
{
  int i;
  int newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }
  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }
    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }
    newData = calloc((unsigned int)i, sizeof(c_images_internal_coder_strel_S));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data,
             sizeof(c_images_internal_coder_strel_S) * (unsigned int)oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }
    emxArray->data = (c_images_internal_coder_strel_S *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
  if (oldNumel > newNumel) {
    d_emxTrim_images_internal_coder(emxArray, newNumel, oldNumel);
  } else if (oldNumel < newNumel) {
    d_emxExpand_images_internal_cod(emxArray, oldNumel, newNumel);
  }
}

/*
 * Arguments    : c_emxArray_images_internal_code *emxArray
 *                int fromIndex
 *                int toIndex
 * Return Type  : void
 */
void d_emxExpand_images_internal_cod(c_emxArray_images_internal_code *emxArray,
                                     int fromIndex, int toIndex)
{
  int i;
  for (i = fromIndex; i < toIndex; i++) {
    c_emxInitStruct_images_internal(&emxArray->data[i]);
  }
}

/*
 * Arguments    : d_emxArray_images_internal_code *pEmxArray
 * Return Type  : void
 */
void d_emxFree_images_internal_coder(d_emxArray_images_internal_code *pEmxArray)
{
  int i;
  int numEl;
  numEl = 1;
  for (i = 0; i < 2; i++) {
    numEl *= pEmxArray->size[i];
  }
  for (i = 0; i < numEl; i++) {
    c_emxFreeStruct_images_internal(&pEmxArray->data[i]);
  }
}

/*
 * Arguments    : e_emxArray_images_internal_code *pEmxArray
 * Return Type  : void
 */
void d_emxInit_images_internal_coder(e_emxArray_images_internal_code *pEmxArray)
{
  pEmxArray->size[0] = 0;
  pEmxArray->size[1] = 0;
}

/*
 * Arguments    : c_emxArray_images_internal_code *emxArray
 *                int fromIndex
 *                int toIndex
 * Return Type  : void
 */
void d_emxTrim_images_internal_coder(c_emxArray_images_internal_code *emxArray,
                                     int fromIndex, int toIndex)
{
  int i;
  for (i = fromIndex; i < toIndex; i++) {
    c_emxFreeStruct_images_internal(&emxArray->data[i]);
  }
}

/*
 * Arguments    : c_images_internal_coder_strel_S data[2]
 *                const int size[2]
 *                int oldNumel
 * Return Type  : void
 */
void e_emxEnsureCapacity_images_inte(c_images_internal_coder_strel_S data[2],
                                     const int size[2], int oldNumel)
{
  int newNumel;
  if (oldNumel < 0) {
    oldNumel = 0;
  }
  newNumel = size[0] * size[1];
  if (oldNumel > newNumel) {
    e_emxTrim_images_internal_coder(data, newNumel, oldNumel);
  } else if (oldNumel < newNumel) {
    e_emxExpand_images_internal_cod(data, oldNumel, newNumel);
  }
}

/*
 * Arguments    : c_images_internal_coder_strel_S data[2]
 *                int fromIndex
 *                int toIndex
 * Return Type  : void
 */
void e_emxExpand_images_internal_cod(c_images_internal_coder_strel_S data[2],
                                     int fromIndex, int toIndex)
{
  int i;
  for (i = fromIndex; i < toIndex; i++) {
    c_emxInitStruct_images_internal(&data[i]);
  }
}

/*
 * Arguments    : e_emxArray_images_internal_code *pEmxArray
 * Return Type  : void
 */
void e_emxFree_images_internal_coder(e_emxArray_images_internal_code *pEmxArray)
{
  int i;
  int numEl;
  numEl = 1;
  for (i = 0; i < 2; i++) {
    numEl *= pEmxArray->size[i];
  }
  for (i = 0; i < numEl; i++) {
    c_emxFreeStruct_images_internal(&pEmxArray->data[i]);
  }
}

/*
 * Arguments    : c_emxArray_images_internal_code **pEmxArray
 * Return Type  : void
 */
void e_emxInit_images_internal_coder(
    c_emxArray_images_internal_code **pEmxArray)
{
  c_emxArray_images_internal_code *emxArray;
  int i;
  *pEmxArray = (c_emxArray_images_internal_code *)malloc(
      sizeof(c_emxArray_images_internal_code));
  emxArray = *pEmxArray;
  emxArray->data = (c_images_internal_coder_strel_S *)NULL;
  emxArray->numDimensions = 2;
  emxArray->size = (int *)malloc(sizeof(int) * 2U);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < 2; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : c_images_internal_coder_strel_S data[2]
 *                int fromIndex
 *                int toIndex
 * Return Type  : void
 */
void e_emxTrim_images_internal_coder(c_images_internal_coder_strel_S data[2],
                                     int fromIndex, int toIndex)
{
  int i;
  for (i = fromIndex; i < toIndex; i++) {
    c_emxFreeStruct_images_internal(&data[i]);
  }
}

/*
 * Arguments    : cell_wrap_1 *dst
 *                const cell_wrap_1 *src
 * Return Type  : void
 */
void emxCopyStruct_cell_wrap_1(cell_wrap_1 *dst, const cell_wrap_1 *src)
{
  c_emxCopy_images_internal_coder(&dst->f1, &src->f1);
}

/*
 * Arguments    : emxArray_boolean_T **dst
 *                emxArray_boolean_T * const *src
 * Return Type  : void
 */
void emxCopy_boolean_T(emxArray_boolean_T **dst, emxArray_boolean_T *const *src)
{
  int i;
  int numElDst;
  int numElSrc;
  numElDst = 1;
  numElSrc = 1;
  for (i = 0; i < (*dst)->numDimensions; i++) {
    numElDst *= (*dst)->size[i];
    numElSrc *= (*src)->size[i];
  }
  for (i = 0; i < (*dst)->numDimensions; i++) {
    (*dst)->size[i] = (*src)->size[i];
  }
  emxEnsureCapacity_boolean_T(*dst, numElDst);
  for (i = 0; i < numElSrc; i++) {
    (*dst)->data[i] = (*src)->data[i];
  }
}

/*
 * Arguments    : emxArray_real_T **dst
 *                emxArray_real_T * const *src
 * Return Type  : void
 */
void emxCopy_real_T(emxArray_real_T **dst, emxArray_real_T *const *src)
{
  int i;
  int numElDst;
  int numElSrc;
  numElDst = 1;
  numElSrc = 1;
  for (i = 0; i < (*dst)->numDimensions; i++) {
    numElDst *= (*dst)->size[i];
    numElSrc *= (*src)->size[i];
  }
  for (i = 0; i < (*dst)->numDimensions; i++) {
    (*dst)->size[i] = (*src)->size[i];
  }
  emxEnsureCapacity_real_T(*dst, numElDst);
  for (i = 0; i < numElSrc; i++) {
    (*dst)->data[i] = (*src)->data[i];
  }
}

/*
 * Arguments    : emxArray_boolean_T *emxArray
 *                int oldNumel
 * Return Type  : void
 */
void emxEnsureCapacity_boolean_T(emxArray_boolean_T *emxArray, int oldNumel)
{
  int i;
  int newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }
  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }
    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }
    newData = malloc((unsigned int)i * sizeof(boolean_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data,
             sizeof(boolean_T) * (unsigned int)oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }
    emxArray->data = (boolean_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

/*
 * Arguments    : cell_wrap_1 *data
 *                const int size[2]
 *                int oldNumel
 * Return Type  : void
 */
void emxEnsureCapacity_cell_wrap_1(cell_wrap_1 *data, const int size[2],
                                   int oldNumel)
{
  int newNumel;
  if (oldNumel < 0) {
    oldNumel = 0;
  }
  newNumel = size[0] * size[1];
  if (oldNumel > newNumel) {
    emxTrim_cell_wrap_1_1x1(data, newNumel, oldNumel);
  } else if (oldNumel < newNumel) {
    emxExpand_cell_wrap_1_1x1(data, oldNumel, newNumel);
  }
}

/*
 * Arguments    : emxArray_cell_wrap_1 *emxArray
 *                int oldNumel
 * Return Type  : void
 */
void emxEnsureCapacity_cell_wrap_11(emxArray_cell_wrap_1 *emxArray,
                                    int oldNumel)
{
  int i;
  int newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }
  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }
    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }
    newData = calloc((unsigned int)i, sizeof(cell_wrap_1));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data,
             sizeof(cell_wrap_1) * (unsigned int)oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }
    emxArray->data = (cell_wrap_1 *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
  if (oldNumel > newNumel) {
    emxTrim_cell_wrap_1(emxArray, newNumel, oldNumel);
  } else if (oldNumel < newNumel) {
    emxExpand_cell_wrap_1(emxArray, oldNumel, newNumel);
  }
}

/*
 * Arguments    : cell_wrap_1 data[2]
 *                const int size[2]
 *                int oldNumel
 * Return Type  : void
 */
void emxEnsureCapacity_cell_wrap_12(cell_wrap_1 data[2], const int size[2],
                                    int oldNumel)
{
  int newNumel;
  if (oldNumel < 0) {
    oldNumel = 0;
  }
  newNumel = size[0] * size[1];
  if (oldNumel > newNumel) {
    emxTrim_cell_wrap_1_1x2(data, newNumel, oldNumel);
  } else if (oldNumel < newNumel) {
    emxExpand_cell_wrap_1_1x2(data, oldNumel, newNumel);
  }
}

/*
 * Arguments    : emxArray_cell_wrap_38 *emxArray
 *                int oldNumel
 * Return Type  : void
 */
void emxEnsureCapacity_cell_wrap_38(emxArray_cell_wrap_38 *emxArray,
                                    int oldNumel)
{
  int i;
  int newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }
  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }
    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }
    newData = calloc((unsigned int)i, sizeof(cell_wrap_38));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data,
             sizeof(cell_wrap_38) * (unsigned int)oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }
    emxArray->data = (cell_wrap_38 *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
  if (oldNumel > newNumel) {
    emxTrim_cell_wrap_38(emxArray, newNumel, oldNumel);
  } else if (oldNumel < newNumel) {
    emxExpand_cell_wrap_38(emxArray, oldNumel, newNumel);
  }
}

/*
 * Arguments    : emxArray_int32_T *emxArray
 *                int oldNumel
 * Return Type  : void
 */
void emxEnsureCapacity_int32_T(emxArray_int32_T *emxArray, int oldNumel)
{
  int i;
  int newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }
  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }
    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }
    newData = malloc((unsigned int)i * sizeof(int));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(int) * (unsigned int)oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }
    emxArray->data = (int *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

/*
 * Arguments    : emxArray_int8_T *emxArray
 *                int oldNumel
 * Return Type  : void
 */
void emxEnsureCapacity_int8_T(emxArray_int8_T *emxArray, int oldNumel)
{
  int i;
  int newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }
  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }
    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }
    newData = malloc((unsigned int)i * sizeof(signed char));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data,
             sizeof(signed char) * (unsigned int)oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }
    emxArray->data = (signed char *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

/*
 * Arguments    : emxArray_real32_T *emxArray
 *                int oldNumel
 * Return Type  : void
 */
void emxEnsureCapacity_real32_T(emxArray_real32_T *emxArray, int oldNumel)
{
  int i;
  int newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }
  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }
    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }
    newData = malloc((unsigned int)i * sizeof(float));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(float) * (unsigned int)oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }
    emxArray->data = (float *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

/*
 * Arguments    : emxArray_real_T *emxArray
 *                int oldNumel
 * Return Type  : void
 */
void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int oldNumel)
{
  int i;
  int newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }
  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }
    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }
    newData = malloc((unsigned int)i * sizeof(double));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(double) * (unsigned int)oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }
    emxArray->data = (double *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

/*
 * Arguments    : emxArray_uint32_T *emxArray
 *                int oldNumel
 * Return Type  : void
 */
void emxEnsureCapacity_uint32_T(emxArray_uint32_T *emxArray, int oldNumel)
{
  int i;
  int newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }
  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }
    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }
    newData = malloc((unsigned int)i * sizeof(unsigned int));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data,
             sizeof(unsigned int) * (unsigned int)oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }
    emxArray->data = (unsigned int *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

/*
 * Arguments    : emxArray_cell_wrap_1 *emxArray
 *                int fromIndex
 *                int toIndex
 * Return Type  : void
 */
void emxExpand_cell_wrap_1(emxArray_cell_wrap_1 *emxArray, int fromIndex,
                           int toIndex)
{
  int i;
  for (i = fromIndex; i < toIndex; i++) {
    emxInitStruct_cell_wrap_1(&emxArray->data[i]);
  }
}

/*
 * Arguments    : cell_wrap_1 *data
 *                int fromIndex
 *                int toIndex
 * Return Type  : void
 */
void emxExpand_cell_wrap_1_1x1(cell_wrap_1 *data, int fromIndex, int toIndex)
{
  int i;
  for (i = fromIndex; i < toIndex; i++) {
    emxInitStruct_cell_wrap_1(data);
  }
}

/*
 * Arguments    : cell_wrap_1 data[2]
 *                int fromIndex
 *                int toIndex
 * Return Type  : void
 */
void emxExpand_cell_wrap_1_1x2(cell_wrap_1 data[2], int fromIndex, int toIndex)
{
  int i;
  for (i = fromIndex; i < toIndex; i++) {
    emxInitStruct_cell_wrap_1(&data[i]);
  }
}

/*
 * Arguments    : emxArray_cell_wrap_38 *emxArray
 *                int fromIndex
 *                int toIndex
 * Return Type  : void
 */
void emxExpand_cell_wrap_38(emxArray_cell_wrap_38 *emxArray, int fromIndex,
                            int toIndex)
{
  int i;
  for (i = fromIndex; i < toIndex; i++) {
    emxInitStruct_cell_wrap_38(&emxArray->data[i]);
  }
}

/*
 * Arguments    : cell_wrap_39 pMatrix[3]
 * Return Type  : void
 */
void emxFreeMatrix_cell_wrap_39(cell_wrap_39 pMatrix[3])
{
  int i;
  for (i = 0; i < 3; i++) {
    emxFreeStruct_cell_wrap_39(&pMatrix[i]);
  }
}

/*
 * Arguments    : cell_wrap_1 *pStruct
 * Return Type  : void
 */
void emxFreeStruct_cell_wrap_1(cell_wrap_1 *pStruct)
{
  c_emxFree_images_internal_coder(&pStruct->f1);
}

/*
 * Arguments    : cell_wrap_38 *pStruct
 * Return Type  : void
 */
void emxFreeStruct_cell_wrap_38(cell_wrap_38 *pStruct)
{
  emxFree_real_T(&pStruct->f1);
}

/*
 * Arguments    : cell_wrap_39 *pStruct
 * Return Type  : void
 */
void emxFreeStruct_cell_wrap_39(cell_wrap_39 *pStruct)
{
  emxFree_real_T(&pStruct->f1);
}

/*
 * Arguments    : strel *pStruct
 * Return Type  : void
 */
void emxFreeStruct_strel(strel *pStruct)
{
  c_emxFree_images_internal_coder(&pStruct->StrelArray);
  emxFree_cell_wrap_1(&pStruct->DecomposedStrelArray);
}

/*
 * Arguments    : emxArray_boolean_T **pEmxArray
 * Return Type  : void
 */
void emxFree_boolean_T(emxArray_boolean_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_boolean_T *)NULL) {
    if (((*pEmxArray)->data != (boolean_T *)NULL) &&
        (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }
    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_boolean_T *)NULL;
  }
}

/*
 * Arguments    : emxArray_cell_wrap_1 **pEmxArray
 * Return Type  : void
 */
void emxFree_cell_wrap_1(emxArray_cell_wrap_1 **pEmxArray)
{
  int i;
  if (*pEmxArray != (emxArray_cell_wrap_1 *)NULL) {
    if ((*pEmxArray)->data != (cell_wrap_1 *)NULL) {
      int numEl;
      numEl = 1;
      for (i = 0; i < (*pEmxArray)->numDimensions; i++) {
        numEl *= (*pEmxArray)->size[i];
      }
      for (i = 0; i < numEl; i++) {
        emxFreeStruct_cell_wrap_1(&(*pEmxArray)->data[i]);
      }
      if ((*pEmxArray)->canFreeData) {
        free((*pEmxArray)->data);
      }
    }
    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_cell_wrap_1 *)NULL;
  }
}

/*
 * Arguments    : emxArray_cell_wrap_1_1x1 *pEmxArray
 * Return Type  : void
 */
void emxFree_cell_wrap_1_1x1(emxArray_cell_wrap_1_1x1 *pEmxArray)
{
  int i;
  int numEl;
  numEl = 1;
  for (i = 0; i < 2; i++) {
    numEl *= pEmxArray->size[i];
  }
  for (i = 0; i < numEl; i++) {
    emxFreeStruct_cell_wrap_1(&pEmxArray->data[i]);
  }
}

/*
 * Arguments    : emxArray_cell_wrap_1_1x2 *pEmxArray
 * Return Type  : void
 */
void emxFree_cell_wrap_1_1x2(emxArray_cell_wrap_1_1x2 *pEmxArray)
{
  int i;
  int numEl;
  numEl = 1;
  for (i = 0; i < 2; i++) {
    numEl *= pEmxArray->size[i];
  }
  for (i = 0; i < numEl; i++) {
    emxFreeStruct_cell_wrap_1(&pEmxArray->data[i]);
  }
}

/*
 * Arguments    : emxArray_cell_wrap_38 **pEmxArray
 * Return Type  : void
 */
void emxFree_cell_wrap_38(emxArray_cell_wrap_38 **pEmxArray)
{
  int i;
  if (*pEmxArray != (emxArray_cell_wrap_38 *)NULL) {
    if ((*pEmxArray)->data != (cell_wrap_38 *)NULL) {
      int numEl;
      numEl = 1;
      for (i = 0; i < (*pEmxArray)->numDimensions; i++) {
        numEl *= (*pEmxArray)->size[i];
      }
      for (i = 0; i < numEl; i++) {
        emxFreeStruct_cell_wrap_38(&(*pEmxArray)->data[i]);
      }
      if ((*pEmxArray)->canFreeData) {
        free((*pEmxArray)->data);
      }
    }
    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_cell_wrap_38 *)NULL;
  }
}

/*
 * Arguments    : emxArray_int32_T **pEmxArray
 * Return Type  : void
 */
void emxFree_int32_T(emxArray_int32_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_int32_T *)NULL) {
    if (((*pEmxArray)->data != (int *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }
    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_int32_T *)NULL;
  }
}

/*
 * Arguments    : emxArray_int8_T **pEmxArray
 * Return Type  : void
 */
void emxFree_int8_T(emxArray_int8_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_int8_T *)NULL) {
    if (((*pEmxArray)->data != (signed char *)NULL) &&
        (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }
    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_int8_T *)NULL;
  }
}

/*
 * Arguments    : emxArray_real32_T **pEmxArray
 * Return Type  : void
 */
void emxFree_real32_T(emxArray_real32_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real32_T *)NULL) {
    if (((*pEmxArray)->data != (float *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }
    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_real32_T *)NULL;
  }
}

/*
 * Arguments    : emxArray_real_T **pEmxArray
 * Return Type  : void
 */
void emxFree_real_T(emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T *)NULL) {
    if (((*pEmxArray)->data != (double *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }
    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_real_T *)NULL;
  }
}

/*
 * Arguments    : emxArray_uint32_T **pEmxArray
 * Return Type  : void
 */
void emxFree_uint32_T(emxArray_uint32_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_uint32_T *)NULL) {
    if (((*pEmxArray)->data != (unsigned int *)NULL) &&
        (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }
    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_uint32_T *)NULL;
  }
}

/*
 * Arguments    : cell_wrap_39 pMatrix[3]
 * Return Type  : void
 */
void emxInitMatrix_cell_wrap_39(cell_wrap_39 pMatrix[3])
{
  int i;
  for (i = 0; i < 3; i++) {
    emxInitStruct_cell_wrap_39(&pMatrix[i]);
  }
}

/*
 * Arguments    : cell_wrap_1 *pStruct
 * Return Type  : void
 */
void emxInitStruct_cell_wrap_1(cell_wrap_1 *pStruct)
{
  e_emxInit_images_internal_coder(&pStruct->f1);
}

/*
 * Arguments    : cell_wrap_38 *pStruct
 * Return Type  : void
 */
void emxInitStruct_cell_wrap_38(cell_wrap_38 *pStruct)
{
  emxInit_real_T(&pStruct->f1, 2);
}

/*
 * Arguments    : cell_wrap_39 *pStruct
 * Return Type  : void
 */
void emxInitStruct_cell_wrap_39(cell_wrap_39 *pStruct)
{
  emxInit_real_T(&pStruct->f1, 1);
}

/*
 * Arguments    : strel *pStruct
 * Return Type  : void
 */
void emxInitStruct_strel(strel *pStruct)
{
  e_emxInit_images_internal_coder(&pStruct->StrelArray);
  emxInit_cell_wrap_1(&pStruct->DecomposedStrelArray);
}

/*
 * Arguments    : emxArray_boolean_T **pEmxArray
 *                int numDimensions
 * Return Type  : void
 */
void emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int numDimensions)
{
  emxArray_boolean_T *emxArray;
  int i;
  *pEmxArray = (emxArray_boolean_T *)malloc(sizeof(emxArray_boolean_T));
  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc(sizeof(int) * (unsigned int)numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : emxArray_cell_wrap_1 **pEmxArray
 * Return Type  : void
 */
void emxInit_cell_wrap_1(emxArray_cell_wrap_1 **pEmxArray)
{
  emxArray_cell_wrap_1 *emxArray;
  int i;
  *pEmxArray = (emxArray_cell_wrap_1 *)malloc(sizeof(emxArray_cell_wrap_1));
  emxArray = *pEmxArray;
  emxArray->data = (cell_wrap_1 *)NULL;
  emxArray->numDimensions = 2;
  emxArray->size = (int *)malloc(sizeof(int) * 2U);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < 2; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : emxArray_cell_wrap_1_1x1 *pEmxArray
 * Return Type  : void
 */
void emxInit_cell_wrap_1_1x1(emxArray_cell_wrap_1_1x1 *pEmxArray)
{
  pEmxArray->size[0] = 0;
  pEmxArray->size[1] = 0;
}

/*
 * Arguments    : emxArray_cell_wrap_1_1x2 *pEmxArray
 * Return Type  : void
 */
void emxInit_cell_wrap_1_1x2(emxArray_cell_wrap_1_1x2 *pEmxArray)
{
  pEmxArray->size[0] = 0;
  pEmxArray->size[1] = 0;
}

/*
 * Arguments    : emxArray_cell_wrap_38 **pEmxArray
 * Return Type  : void
 */
void emxInit_cell_wrap_38(emxArray_cell_wrap_38 **pEmxArray)
{
  emxArray_cell_wrap_38 *emxArray;
  int i;
  *pEmxArray = (emxArray_cell_wrap_38 *)malloc(sizeof(emxArray_cell_wrap_38));
  emxArray = *pEmxArray;
  emxArray->data = (cell_wrap_38 *)NULL;
  emxArray->numDimensions = 2;
  emxArray->size = (int *)malloc(sizeof(int) * 2U);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < 2; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : emxArray_int32_T **pEmxArray
 * Return Type  : void
 */
void emxInit_int32_T(emxArray_int32_T **pEmxArray)
{
  emxArray_int32_T *emxArray;
  *pEmxArray = (emxArray_int32_T *)malloc(sizeof(emxArray_int32_T));
  emxArray = *pEmxArray;
  emxArray->data = (int *)NULL;
  emxArray->numDimensions = 1;
  emxArray->size = (int *)malloc(sizeof(int));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  emxArray->size[0] = 0;
}

/*
 * Arguments    : emxArray_int8_T **pEmxArray
 * Return Type  : void
 */
void emxInit_int8_T(emxArray_int8_T **pEmxArray)
{
  emxArray_int8_T *emxArray;
  int i;
  *pEmxArray = (emxArray_int8_T *)malloc(sizeof(emxArray_int8_T));
  emxArray = *pEmxArray;
  emxArray->data = (signed char *)NULL;
  emxArray->numDimensions = 3;
  emxArray->size = (int *)malloc(sizeof(int) * 3U);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < 3; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : emxArray_real32_T **pEmxArray
 * Return Type  : void
 */
void emxInit_real32_T(emxArray_real32_T **pEmxArray)
{
  emxArray_real32_T *emxArray;
  int i;
  *pEmxArray = (emxArray_real32_T *)malloc(sizeof(emxArray_real32_T));
  emxArray = *pEmxArray;
  emxArray->data = (float *)NULL;
  emxArray->numDimensions = 2;
  emxArray->size = (int *)malloc(sizeof(int) * 2U);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < 2; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : emxArray_real_T **pEmxArray
 *                int numDimensions
 * Return Type  : void
 */
void emxInit_real_T(emxArray_real_T **pEmxArray, int numDimensions)
{
  emxArray_real_T *emxArray;
  int i;
  *pEmxArray = (emxArray_real_T *)malloc(sizeof(emxArray_real_T));
  emxArray = *pEmxArray;
  emxArray->data = (double *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc(sizeof(int) * (unsigned int)numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : emxArray_uint32_T **pEmxArray
 * Return Type  : void
 */
void emxInit_uint32_T(emxArray_uint32_T **pEmxArray)
{
  emxArray_uint32_T *emxArray;
  int i;
  *pEmxArray = (emxArray_uint32_T *)malloc(sizeof(emxArray_uint32_T));
  emxArray = *pEmxArray;
  emxArray->data = (unsigned int *)NULL;
  emxArray->numDimensions = 2;
  emxArray->size = (int *)malloc(sizeof(int) * 2U);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < 2; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : emxArray_cell_wrap_1 *emxArray
 *                int fromIndex
 *                int toIndex
 * Return Type  : void
 */
void emxTrim_cell_wrap_1(emxArray_cell_wrap_1 *emxArray, int fromIndex,
                         int toIndex)
{
  int i;
  for (i = fromIndex; i < toIndex; i++) {
    emxFreeStruct_cell_wrap_1(&emxArray->data[i]);
  }
}

/*
 * Arguments    : cell_wrap_1 *data
 *                int fromIndex
 *                int toIndex
 * Return Type  : void
 */
void emxTrim_cell_wrap_1_1x1(cell_wrap_1 *data, int fromIndex, int toIndex)
{
  int i;
  for (i = fromIndex; i < toIndex; i++) {
    emxFreeStruct_cell_wrap_1(data);
  }
}

/*
 * Arguments    : cell_wrap_1 data[2]
 *                int fromIndex
 *                int toIndex
 * Return Type  : void
 */
void emxTrim_cell_wrap_1_1x2(cell_wrap_1 data[2], int fromIndex, int toIndex)
{
  int i;
  for (i = fromIndex; i < toIndex; i++) {
    emxFreeStruct_cell_wrap_1(&data[i]);
  }
}

/*
 * Arguments    : emxArray_cell_wrap_38 *emxArray
 *                int fromIndex
 *                int toIndex
 * Return Type  : void
 */
void emxTrim_cell_wrap_38(emxArray_cell_wrap_38 *emxArray, int fromIndex,
                          int toIndex)
{
  int i;
  for (i = fromIndex; i < toIndex; i++) {
    emxFreeStruct_cell_wrap_38(&emxArray->data[i]);
  }
}

/*
 * File trailer for cell_boundary_emxutil.c
 *
 * [EOF]
 */
