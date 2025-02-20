/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * bwmorph.c
 *
 * Code generation for function 'bwmorph'
 *
 */

/* Include files */
#include "bwmorph.h"
#include "algbwmorph.h"
#include "cell_boundary_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void bwmorph(cell_boundaryStackData *SD, boolean_T bwin[1960000])
{
  int32_T k;
  boolean_T exitg1;
  boolean_T p;
  do {
    memcpy(&SD->u2.f13.last_aout[0], &bwin[0], 1960000U * sizeof(boolean_T));
    bwmorphApplyOnce(SD, bwin);
    p = true;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 1960000)) {
      if (SD->u2.f13.last_aout[k] != bwin[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  } while (!p);
  /*  the output is not changing anymore */
}

/* End of code generation (bwmorph.c) */
