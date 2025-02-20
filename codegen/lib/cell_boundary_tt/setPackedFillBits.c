/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: setPackedFillBits.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:11:08
 */

/* Include Files */
#include "setPackedFillBits.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * Arguments    : unsigned int A[63720]
 * Return Type  : void
 */
void b_setPackedFillBits(unsigned int A[63720])
{
  int k;
  unsigned int mask_value;
  mask_value = 0U;
  for (k = 0; k < 8; k++) {
    mask_value |= 1U << k;
  }
  mask_value = ~mask_value;
  for (k = 0; k < 1416; k++) {
    int i;
    i = 45 * k + 44;
    A[i] |= mask_value;
  }
}

/*
 * Arguments    : unsigned int A[61600]
 * Return Type  : void
 */
void c_setPackedFillBits(unsigned int A[61600])
{
  int k;
  unsigned int mask_value;
  mask_value = 0U;
  for (k = 0; k < 24; k++) {
    mask_value |= 1U << k;
  }
  mask_value = ~mask_value;
  for (k = 0; k < 1400; k++) {
    int i;
    i = 44 * k + 43;
    A[i] |= mask_value;
  }
}

/*
 * Arguments    : unsigned int A[61600]
 * Return Type  : void
 */
void d_setPackedFillBits(unsigned int A[61600])
{
  int k;
  unsigned int mask_value;
  mask_value = 0U;
  for (k = 0; k < 24; k++) {
    mask_value |= 1U << k;
  }
  for (k = 0; k < 1400; k++) {
    int i;
    i = 44 * k + 43;
    A[i] &= mask_value;
  }
}

/*
 * Arguments    : unsigned int A[63720]
 * Return Type  : void
 */
void setPackedFillBits(unsigned int A[63720])
{
  int k;
  unsigned int mask_value;
  mask_value = 0U;
  for (k = 0; k < 8; k++) {
    mask_value |= 1U << k;
  }
  for (k = 0; k < 1416; k++) {
    int i;
    i = 45 * k + 44;
    A[i] &= mask_value;
  }
}

/*
 * File trailer for setPackedFillBits.c
 *
 * [EOF]
 */
