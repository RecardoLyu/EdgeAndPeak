/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * setPackedFillBits.c
 *
 * Code generation for function 'setPackedFillBits'
 *
 */

/* Include files */
#include "setPackedFillBits.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void b_setPackedFillBits(uint32_T A[63720])
{
  int32_T k;
  uint32_T mask_value;
  mask_value = 0U;
  for (k = 0; k < 8; k++) {
    mask_value |= 1U << k;
  }
  mask_value = ~mask_value;
  for (k = 0; k < 1416; k++) {
    int32_T i;
    i = 45 * k + 44;
    A[i] |= mask_value;
  }
}

void c_setPackedFillBits(uint32_T A[61600])
{
  int32_T k;
  uint32_T mask_value;
  mask_value = 0U;
  for (k = 0; k < 24; k++) {
    mask_value |= 1U << k;
  }
  mask_value = ~mask_value;
  for (k = 0; k < 1400; k++) {
    int32_T i;
    i = 44 * k + 43;
    A[i] |= mask_value;
  }
}

void d_setPackedFillBits(uint32_T A[61600])
{
  int32_T k;
  uint32_T mask_value;
  mask_value = 0U;
  for (k = 0; k < 24; k++) {
    mask_value |= 1U << k;
  }
  for (k = 0; k < 1400; k++) {
    int32_T i;
    i = 44 * k + 43;
    A[i] &= mask_value;
  }
}

void setPackedFillBits(uint32_T A[63720])
{
  int32_T k;
  uint32_T mask_value;
  mask_value = 0U;
  for (k = 0; k < 8; k++) {
    mask_value |= 1U << k;
  }
  for (k = 0; k < 1416; k++) {
    int32_T i;
    i = 45 * k + 44;
    A[i] &= mask_value;
  }
}

/* End of code generation (setPackedFillBits.c) */
