/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: main.c
 *
 * MATLAB Coder version            : 23.2
 * C/C++ source code generated on  : 17-Feb-2025 16:11:08
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/

/* Include Files */
#include "main.h"
#include "cell_boundary.h"
#include "cell_boundary_emxAPI.h"
#include "cell_boundary_terminate.h"
#include "cell_boundary_types.h"
#include "cell_brightzone.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void argInit_1400x1400_real_T(double result[1960000]);

static double argInit_real_T(void);

/* Function Definitions */
/*
 * Arguments    : double result[1960000]
 * Return Type  : void
 */
static void argInit_1400x1400_real_T(double result[1960000])
{
  int i;
  /* Loop over the array to initialize each element. */
  for (i = 0; i < 1960000; i++) {
    /* Set the value of the array element.
Change this value to the value that the application requires. */
    result[i] = argInit_real_T();
  }
}

/*
 * Arguments    : void
 * Return Type  : double
 */
static double argInit_real_T(void)
{
  return 0.0;
}

/*
 * Arguments    : int argc
 *                char **argv
 * Return Type  : int
 */
int main(int argc, char **argv)
{
  (void)argc;
  (void)argv;
  /* The initialize function is being called automatically from your entry-point
   * function. So, a call to initialize is not included here. */
  /* Invoke the entry-point functions.
You can call entry-point functions multiple times. */
  main_cell_boundary();
  main_cell_brightzone();
  /* Terminate the application.
You do not need to do this more than one time. */
  cell_boundary_terminate();
  return 0;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void main_cell_boundary(void)
{
  static double dv[1960000];
  static double edge[1960000];
  /* Initialize function 'cell_boundary' input arguments. */
  /* Initialize function input argument 'img_in'. */
  /* Call the entry-point 'cell_boundary'. */
  argInit_1400x1400_real_T(dv);
  cell_boundary(dv, argInit_real_T(), edge);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void main_cell_brightzone(void)
{
  static double dv[1960000];
  emxArray_boolean_T *peak_mask;
  /* Initialize function 'cell_brightzone' input arguments. */
  /* Initialize function input argument 'img_in'. */
  /* Call the entry-point 'cell_brightzone'. */
  emxInitArray_boolean_T(&peak_mask, 2);
  argInit_1400x1400_real_T(dv);
  cell_brightzone(dv, argInit_real_T(), peak_mask);
  emxDestroyArray_boolean_T(peak_mask);
}

/*
 * File trailer for main.c
 *
 * [EOF]
 */
