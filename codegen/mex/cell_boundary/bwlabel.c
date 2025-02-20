/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * bwlabel.c
 *
 * Code generation for function 'bwlabel'
 *
 */

/* Include files */
#include "bwlabel.h"
#include "cell_boundary_data.h"
#include "cell_boundary_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "omp.h"

/* Variable Definitions */
static emlrtRSInfo ec_emlrtRSI =
    {
        344,         /* lineNo */
        "set_union", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m" /* pathName
                                                                         */
};

static emlrtRSInfo fc_emlrtRSI =
    {
        346,         /* lineNo */
        "set_union", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m" /* pathName
                                                                         */
};

static emlrtRSInfo gc_emlrtRSI =
    {
        350,         /* lineNo */
        "set_union", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m" /* pathName
                                                                         */
};

static emlrtRSInfo hc_emlrtRSI =
    {
        352,         /* lineNo */
        "set_union", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m" /* pathName
                                                                         */
};

static emlrtRSInfo lc_emlrtRSI =
    {
        197,                   /* lineNo */
        "labelingWu_parallel", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m" /* pathName
                                                                         */
};

static emlrtRSInfo mc_emlrtRSI =
    {
        198,                   /* lineNo */
        "labelingWu_parallel", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m" /* pathName
                                                                         */
};

static emlrtRSInfo nc_emlrtRSI =
    {
        199,                   /* lineNo */
        "labelingWu_parallel", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m" /* pathName
                                                                         */
};

static emlrtRSInfo oc_emlrtRSI =
    {
        201,                   /* lineNo */
        "labelingWu_parallel", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m" /* pathName
                                                                         */
};

static emlrtRSInfo pc_emlrtRSI =
    {
        202,                   /* lineNo */
        "labelingWu_parallel", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m" /* pathName
                                                                         */
};

static emlrtRSInfo qc_emlrtRSI =
    {
        204,                   /* lineNo */
        "labelingWu_parallel", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m" /* pathName
                                                                         */
};

static emlrtRSInfo rc_emlrtRSI =
    {
        205,                   /* lineNo */
        "labelingWu_parallel", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m" /* pathName
                                                                         */
};

static emlrtRSInfo sc_emlrtRSI =
    {
        217,                   /* lineNo */
        "labelingWu_parallel", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m" /* pathName
                                                                         */
};

static emlrtBCInfo emlrtBCI =
    {
        1,                     /* iFirst */
        1400,                  /* iLast */
        197,                   /* lineNo */
        24,                    /* colNo */
        "",                    /* aName */
        "labelingWu_parallel", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m", /* pName
                                                                          */
        0 /* checkKind */
};

static emlrtBCInfo b_emlrtBCI =
    {
        1,                     /* iFirst */
        980001,                /* iLast */
        172,                   /* lineNo */
        43,                    /* colNo */
        "",                    /* aName */
        "labelingWu_parallel", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m", /* pName
                                                                          */
        3 /* checkKind */
};

static emlrtBCInfo c_emlrtBCI =
    {
        1,                     /* iFirst */
        1408,                  /* iLast */
        209,                   /* lineNo */
        37,                    /* colNo */
        "",                    /* aName */
        "labelingWu_parallel", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m", /* pName
                                                                          */
        0 /* checkKind */
};

static emlrtBCInfo d_emlrtBCI =
    {
        1,                     /* iFirst */
        1408,                  /* iLast */
        217,                   /* lineNo */
        75,                    /* colNo */
        "",                    /* aName */
        "labelingWu_parallel", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m", /* pName
                                                                          */
        0 /* checkKind */
};

static emlrtBCInfo e_emlrtBCI =
    {
        1,                     /* iFirst */
        1400,                  /* iLast */
        198,                   /* lineNo */
        38,                    /* colNo */
        "",                    /* aName */
        "labelingWu_parallel", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m", /* pName
                                                                          */
        0 /* checkKind */
};

static emlrtBCInfo f_emlrtBCI =
    {
        1,                     /* iFirst */
        1400,                  /* iLast */
        201,                   /* lineNo */
        38,                    /* colNo */
        "",                    /* aName */
        "labelingWu_parallel", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m", /* pName
                                                                          */
        0 /* checkKind */
};

static emlrtBCInfo g_emlrtBCI =
    {
        1,                     /* iFirst */
        980001,                /* iLast */
        336,                   /* lineNo */
        24,                    /* colNo */
        "",                    /* aName */
        "labelingWu_parallel", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m", /* pName
                                                                          */
        0 /* checkKind */
};

static emlrtBCInfo h_emlrtBCI =
    {
        1,                     /* iFirst */
        1400,                  /* iLast */
        204,                   /* lineNo */
        28,                    /* colNo */
        "",                    /* aName */
        "labelingWu_parallel", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m", /* pName
                                                                          */
        0 /* checkKind */
};

static emlrtBCInfo i_emlrtBCI =
    {
        1,                     /* iFirst */
        1408,                  /* iLast */
        225,                   /* lineNo */
        37,                    /* colNo */
        "",                    /* aName */
        "labelingWu_parallel", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m", /* pName
                                                                          */
        0 /* checkKind */
};

static emlrtBCInfo j_emlrtBCI =
    {
        1,                     /* iFirst */
        980001,                /* iLast */
        218,                   /* lineNo */
        22,                    /* colNo */
        "",                    /* aName */
        "labelingWu_parallel", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m", /* pName
                                                                          */
        0 /* checkKind */
};

static emlrtBCInfo k_emlrtBCI =
    {
        1,          /* iFirst */
        980001,     /* iLast */
        358,        /* lineNo */
        13,         /* colNo */
        "",         /* aName */
        "findRoot", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m", /* pName
                                                                          */
        0 /* checkKind */
};

static emlrtBCInfo l_emlrtBCI =
    {
        1,                     /* iFirst */
        980001,                /* iLast */
        219,                   /* lineNo */
        30,                    /* colNo */
        "",                    /* aName */
        "labelingWu_parallel", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m", /* pName
                                                                          */
        0 /* checkKind */
};

static emlrtBCInfo m_emlrtBCI =
    {
        1,         /* iFirst */
        980001,    /* iLast */
        365,       /* lineNo */
        13,        /* colNo */
        "",        /* aName */
        "setRoot", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m", /* pName
                                                                          */
        0 /* checkKind */
};

static emlrtBCInfo n_emlrtBCI =
    {
        1,                     /* iFirst */
        1400,                  /* iLast */
        97,                    /* lineNo */
        29,                    /* colNo */
        "",                    /* aName */
        "labelingWu_parallel", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m", /* pName
                                                                          */
        0 /* checkKind */
};

static emlrtBCInfo o_emlrtBCI =
    {
        1,                     /* iFirst */
        980001,                /* iLast */
        106,                   /* lineNo */
        45,                    /* colNo */
        "",                    /* aName */
        "labelingWu_parallel", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m", /* pName
                                                                          */
        0 /* checkKind */
};

static emlrtBCInfo p_emlrtBCI =
    {
        1,                     /* iFirst */
        980001,                /* iLast */
        135,                   /* lineNo */
        49,                    /* colNo */
        "",                    /* aName */
        "labelingWu_parallel", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m", /* pName
                                                                          */
        0 /* checkKind */
};

static emlrtBCInfo q_emlrtBCI =
    {
        1,                     /* iFirst */
        980001,                /* iLast */
        124,                   /* lineNo */
        45,                    /* colNo */
        "",                    /* aName */
        "labelingWu_parallel", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m", /* pName
                                                                          */
        0 /* checkKind */
};

static emlrtBCInfo r_emlrtBCI =
    {
        1,                     /* iFirst */
        980001,                /* iLast */
        111,                   /* lineNo */
        49,                    /* colNo */
        "",                    /* aName */
        "labelingWu_parallel", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m", /* pName
                                                                          */
        0 /* checkKind */
};

static emlrtBCInfo s_emlrtBCI =
    {
        1,                     /* iFirst */
        980001,                /* iLast */
        153,                   /* lineNo */
        49,                    /* colNo */
        "",                    /* aName */
        "labelingWu_parallel", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m", /* pName
                                                                          */
        0 /* checkKind */
};

static emlrtBCInfo t_emlrtBCI =
    {
        1,                     /* iFirst */
        980001,                /* iLast */
        140,                   /* lineNo */
        53,                    /* colNo */
        "",                    /* aName */
        "labelingWu_parallel", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m", /* pName
                                                                          */
        0 /* checkKind */
};

static emlrtBCInfo u_emlrtBCI =
    {
        1,                     /* iFirst */
        980001,                /* iLast */
        117,                   /* lineNo */
        49,                    /* colNo */
        "",                    /* aName */
        "labelingWu_parallel", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m", /* pName
                                                                          */
        0 /* checkKind */
};

static emlrtBCInfo v_emlrtBCI =
    {
        1,                     /* iFirst */
        980001,                /* iLast */
        146,                   /* lineNo */
        53,                    /* colNo */
        "",                    /* aName */
        "labelingWu_parallel", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwlabel.m", /* pName
                                                                          */
        0 /* checkKind */
};

/* Function Definitions */
real_T labelingWu_parallel(cell_boundaryStackData *SD, const emlrtStack *sp,
                           const boolean_T im[1960000], real_T L[1960000])
{
  jmp_buf emlrtJBEnviron;
  jmp_buf *volatile emlrtJBStack;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int64_T i;
  real_T b_i;
  real_T b_rootj;
  real_T c_i;
  real_T d;
  real_T d1;
  real_T d2;
  real_T k;
  real_T label;
  real_T root;
  real_T rootj;
  int32_T chunksSizeAndLabels[1408];
  int32_T a_tmp;
  int32_T b_c;
  int32_T c;
  int32_T c_c;
  int32_T c_tmp;
  int32_T d_i;
  int32_T exitg1;
  int32_T firstLabel;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T labelingWu_parallel_numThreads;
  int32_T qY;
  int32_T r;
  int32_T thread;
  boolean_T emlrtHadParallelError = false;
  boolean_T guard1;
  boolean_T guard2;
  boolean_T guard3;
  c_st.prev = sp;
  c_st.tls = sp->tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  SD->u1.f0.P[0] = 0.0;
  emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
  emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  labelingWu_parallel_numThreads = emlrtAllocRegionTLSs(
      sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(labelingWu_parallel_numThreads) private(      \
    rootj, b_c, firstLabel, label, st, emlrtJBEnviron, c_tmp, i1, c_c, d, r,   \
    i2, guard1, guard2, guard3, i3, exitg1, d2)                                \
    firstprivate(emlrtHadParallelError)
  {
    if (setjmp(emlrtJBEnviron) == 0) {
      st.prev = sp;
      st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
      st.site = NULL;
      emlrtSetJmpBuf(&st, &emlrtJBEnviron);
    } else {
      emlrtHadParallelError = true;
    }
#pragma omp for nowait
    for (thread = 0; thread < 8; thread++) {
      if (emlrtHadParallelError) {
        continue;
      }
      if (setjmp(emlrtJBEnviron) == 0) {
        c_tmp = thread * 175 + 1;
        b_c = (thread + 1) * 175;
        chunksSizeAndLabels[c_tmp - 1] = b_c + 1;
        label = muDoubleScalarFloor((real_T)c_tmp / 2.0) * 700.0 + 1.0;
        firstLabel = (int32_T)label;
        i1 = b_c - c_tmp;
        for (c_c = 0; c_c <= i1; c_c++) {
          b_c = c_tmp + c_c;
          for (r = 0; r < 1400; r++) {
            if (b_c > 1400) {
              emlrtDynamicBoundsCheckR2012b(b_c, 1, 1400, &n_emlrtBCI, &st);
            }
            i2 = r + 1400 * (b_c - 1);
            if (im[i2]) {
              guard1 = false;
              guard2 = false;
              guard3 = false;
              if (b_c > c_tmp) {
                i3 = r + 1400 * (b_c - 2);
                if (im[i3]) {
                  L[i2] = L[i3];
                } else {
                  guard3 = true;
                }
              } else {
                guard3 = true;
              }
              if (guard3) {
                if ((r + 1 < 1400) && (b_c > c_tmp)) {
                  i3 = r + 1400 * (b_c - 2);
                  if (im[i3 + 1]) {
                    if ((b_c > c_tmp) && (r + 1 > 1) && im[i3 - 1]) {
                      L[i2] = L[i3 - 1];
                      do {
                        exitg1 = 0;
                        d = L[i2];
                        if (((int32_T)(d + 1.0) < 1) ||
                            ((int32_T)(d + 1.0) > 980001)) {
                          emlrtDynamicBoundsCheckR2012b(
                              (int32_T)(d + 1.0), 1, 980001, &o_emlrtBCI, &st);
                        }
                        d2 = SD->u1.f0.P[(int32_T)(d + 1.0) - 1];
                        if (d2 < d) {
                          L[i2] = d2;
                        } else {
                          exitg1 = 1;
                        }
                      } while (exitg1 == 0);
                      rootj = L[i3 + 1];
                      if (L[i3 - 1] != rootj) {
                        do {
                          exitg1 = 0;
                          if (((int32_T)(rootj + 1.0) < 1) ||
                              ((int32_T)(rootj + 1.0) > 980001)) {
                            emlrtDynamicBoundsCheckR2012b(
                                (int32_T)(rootj + 1.0), 1, 980001, &r_emlrtBCI,
                                &st);
                          }
                          d2 = SD->u1.f0.P[(int32_T)(rootj + 1.0) - 1];
                          if (d2 < rootj) {
                            rootj = d2;
                          } else {
                            exitg1 = 1;
                          }
                        } while (exitg1 == 0);
                        if (d > rootj) {
                          L[i2] = rootj;
                        }
                        do {
                          exitg1 = 0;
                          d = L[i3 + 1];
                          if (((int32_T)(d + 1.0) < 1) ||
                              ((int32_T)(d + 1.0) > 980001)) {
                            emlrtDynamicBoundsCheckR2012b((int32_T)(d + 1.0), 1,
                                                          980001, &u_emlrtBCI,
                                                          &st);
                          }
                          d2 = SD->u1.f0.P[(int32_T)(d + 1.0) - 1];
                          if (d2 < d) {
                            SD->u1.f0.P[(int32_T)(d + 1.0) - 1] = L[i2];
                            L[i3 + 1] = d2;
                          } else {
                            exitg1 = 1;
                          }
                        } while (exitg1 == 0);
                        SD->u1.f0.P[(int32_T)(d + 1.0) - 1] = L[i2];
                      }
                      do {
                        exitg1 = 0;
                        d = L[i3 - 1];
                        if (((int32_T)(d + 1.0) < 1) ||
                            ((int32_T)(d + 1.0) > 980001)) {
                          emlrtDynamicBoundsCheckR2012b(
                              (int32_T)(d + 1.0), 1, 980001, &q_emlrtBCI, &st);
                        }
                        d2 = SD->u1.f0.P[(int32_T)(d + 1.0) - 1];
                        if (d2 < d) {
                          SD->u1.f0.P[(int32_T)(d + 1.0) - 1] = L[i2];
                          L[i3 - 1] = d2;
                        } else {
                          exitg1 = 1;
                        }
                      } while (exitg1 == 0);
                      SD->u1.f0.P[(int32_T)(d + 1.0) - 1] = L[i2];
                    } else if ((r + 1 > 1) && im[i2 - 1]) {
                      L[i2] = L[i2 - 1];
                      do {
                        exitg1 = 0;
                        d = L[i2];
                        if (((int32_T)(d + 1.0) < 1) ||
                            ((int32_T)(d + 1.0) > 980001)) {
                          emlrtDynamicBoundsCheckR2012b(
                              (int32_T)(d + 1.0), 1, 980001, &p_emlrtBCI, &st);
                        }
                        d2 = SD->u1.f0.P[(int32_T)(d + 1.0) - 1];
                        if (d2 < d) {
                          L[i2] = d2;
                        } else {
                          exitg1 = 1;
                        }
                      } while (exitg1 == 0);
                      rootj = L[i3 + 1];
                      if (L[i2 - 1] != rootj) {
                        do {
                          exitg1 = 0;
                          if (((int32_T)(rootj + 1.0) < 1) ||
                              ((int32_T)(rootj + 1.0) > 980001)) {
                            emlrtDynamicBoundsCheckR2012b(
                                (int32_T)(rootj + 1.0), 1, 980001, &t_emlrtBCI,
                                &st);
                          }
                          d2 = SD->u1.f0.P[(int32_T)(rootj + 1.0) - 1];
                          if (d2 < rootj) {
                            rootj = d2;
                          } else {
                            exitg1 = 1;
                          }
                        } while (exitg1 == 0);
                        if (d > rootj) {
                          L[i2] = rootj;
                        }
                        do {
                          exitg1 = 0;
                          d = L[i3 + 1];
                          if (((int32_T)(d + 1.0) < 1) ||
                              ((int32_T)(d + 1.0) > 980001)) {
                            emlrtDynamicBoundsCheckR2012b((int32_T)(d + 1.0), 1,
                                                          980001, &v_emlrtBCI,
                                                          &st);
                          }
                          d2 = SD->u1.f0.P[(int32_T)(d + 1.0) - 1];
                          if (d2 < d) {
                            SD->u1.f0.P[(int32_T)(d + 1.0) - 1] = L[i2];
                            L[i3 + 1] = d2;
                          } else {
                            exitg1 = 1;
                          }
                        } while (exitg1 == 0);
                        SD->u1.f0.P[(int32_T)(d + 1.0) - 1] = L[i2];
                      }
                      do {
                        exitg1 = 0;
                        d = L[i2 - 1];
                        if (((int32_T)(d + 1.0) < 1) ||
                            ((int32_T)(d + 1.0) > 980001)) {
                          emlrtDynamicBoundsCheckR2012b(
                              (int32_T)(d + 1.0), 1, 980001, &s_emlrtBCI, &st);
                        }
                        d2 = SD->u1.f0.P[(int32_T)(d + 1.0) - 1];
                        if (d2 < d) {
                          SD->u1.f0.P[(int32_T)(d + 1.0) - 1] = L[i2];
                          L[i2 - 1] = d2;
                        } else {
                          exitg1 = 1;
                        }
                      } while (exitg1 == 0);
                      SD->u1.f0.P[(int32_T)(d + 1.0) - 1] = L[i2];
                    } else {
                      L[i2] = L[i3 + 1];
                    }
                  } else {
                    guard2 = true;
                  }
                } else {
                  guard2 = true;
                }
              }
              if (guard2) {
                if ((b_c > c_tmp) && (r + 1 > 1)) {
                  i3 = (r + 1400 * (b_c - 2)) - 1;
                  if (im[i3]) {
                    L[i2] = L[i3];
                  } else {
                    guard1 = true;
                  }
                } else {
                  guard1 = true;
                }
              }
              if (guard1) {
                if ((r + 1 > 1) && im[i2 - 1]) {
                  L[i2] = L[i2 - 1];
                } else {
                  L[i2] = label;
                  if (((int32_T)(label + 1.0) < 1) ||
                      ((int32_T)(label + 1.0) > 980001)) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)(label + 1.0), 1,
                                                  980001, &b_emlrtBCI, &st);
                  }
                  SD->u1.f0.P[(int32_T)(label + 1.0) - 1] = label;
                  label++;
                }
              }
            } else {
              L[i2] = 0.0;
            }
          }
        }
        d = label - (real_T)firstLabel;
        if (d < 2.147483648E+9) {
          i1 = (int32_T)d;
        } else {
          i1 = MAX_int32_T;
        }
        chunksSizeAndLabels[c_tmp] = i1;
      } else {
        emlrtHadParallelError = true;
      }
    }
  }
  emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
  for (c = chunksSizeAndLabels[0] - 1; c + 1 <= 1400;
       c = chunksSizeAndLabels[c] - 1) {
    for (a_tmp = 0; a_tmp < 1400; a_tmp++) {
      if ((c + 1 < 1) || (c + 1 > 1400)) {
        emlrtDynamicBoundsCheckR2012b(c + 1, 1, 1400, &emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      c_st.site = &lc_emlrtRSI;
      qY = a_tmp + 1400 * c;
      b_i = L[qY];
      if (b_i != 0.0) {
        if (a_tmp + 1 > 1) {
          if ((c < 1) || (c > 1400)) {
            emlrtDynamicBoundsCheckR2012b(c, 1, 1400, &e_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          c_st.site = &mc_emlrtRSI;
          c_i = L[(a_tmp + 1400 * (c - 1)) - 1];
          if (c_i != 0.0) {
            c_st.site = &nc_emlrtRSI;
            d_st.site = &ec_emlrtRSI;
            root = c_i;
            do {
              exitg1 = 0;
              if (((int32_T)(root + 1.0) < 1) ||
                  ((int32_T)(root + 1.0) > 980001)) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(root + 1.0), 1, 980001,
                                              &k_emlrtBCI, &d_st);
              }
              d1 = SD->u1.f0.P[(int32_T)(root + 1.0) - 1];
              if (d1 < root) {
                root = d1;
              } else {
                exitg1 = 1;
              }
            } while (exitg1 == 0);
            if (c_i != b_i) {
              d_st.site = &fc_emlrtRSI;
              b_rootj = b_i;
              do {
                exitg1 = 0;
                if (((int32_T)(b_rootj + 1.0) < 1) ||
                    ((int32_T)(b_rootj + 1.0) > 980001)) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)(b_rootj + 1.0), 1,
                                                980001, &k_emlrtBCI, &d_st);
                }
                d1 = SD->u1.f0.P[(int32_T)(b_rootj + 1.0) - 1];
                if (d1 < b_rootj) {
                  b_rootj = d1;
                } else {
                  exitg1 = 1;
                }
              } while (exitg1 == 0);
              if (root > b_rootj) {
                root = b_rootj;
              }
              d_st.site = &gc_emlrtRSI;
              do {
                exitg1 = 0;
                if (((int32_T)(b_i + 1.0) < 1) ||
                    ((int32_T)(b_i + 1.0) > 980001)) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1.0), 1, 980001,
                                                &m_emlrtBCI, &d_st);
                }
                d1 = SD->u1.f0.P[(int32_T)(b_i + 1.0) - 1];
                if (d1 < b_i) {
                  SD->u1.f0.P[(int32_T)(b_i + 1.0) - 1] = root;
                  b_i = d1;
                } else {
                  exitg1 = 1;
                }
              } while (exitg1 == 0);
              SD->u1.f0.P[(int32_T)(b_i + 1.0) - 1] = root;
            }
            d_st.site = &hc_emlrtRSI;
            do {
              exitg1 = 0;
              if (((int32_T)(c_i + 1.0) < 1) ||
                  ((int32_T)(c_i + 1.0) > 980001)) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1.0), 1, 980001,
                                              &m_emlrtBCI, &d_st);
              }
              d1 = SD->u1.f0.P[(int32_T)(c_i + 1.0) - 1];
              if (d1 < c_i) {
                SD->u1.f0.P[(int32_T)(c_i + 1.0) - 1] = root;
                c_i = d1;
              } else {
                exitg1 = 1;
              }
            } while (exitg1 == 0);
            SD->u1.f0.P[(int32_T)(c_i + 1.0) - 1] = root;
            L[qY] = root;
          }
        }
        if (a_tmp + 1 < 1400) {
          if ((c < 1) || (c > 1400)) {
            emlrtDynamicBoundsCheckR2012b(c, 1, 1400, &f_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          c_st.site = &oc_emlrtRSI;
          c_i = L[(a_tmp + 1400 * (c - 1)) + 1];
          if (c_i != 0.0) {
            c_st.site = &pc_emlrtRSI;
            d_st.site = &ec_emlrtRSI;
            root = c_i;
            do {
              exitg1 = 0;
              if (((int32_T)(root + 1.0) < 1) ||
                  ((int32_T)(root + 1.0) > 980001)) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(root + 1.0), 1, 980001,
                                              &k_emlrtBCI, &d_st);
              }
              d1 = SD->u1.f0.P[(int32_T)(root + 1.0) - 1];
              if (d1 < root) {
                root = d1;
              } else {
                exitg1 = 1;
              }
            } while (exitg1 == 0);
            b_i = L[qY];
            if (c_i != b_i) {
              d_st.site = &fc_emlrtRSI;
              b_rootj = b_i;
              do {
                exitg1 = 0;
                if (((int32_T)(b_rootj + 1.0) < 1) ||
                    ((int32_T)(b_rootj + 1.0) > 980001)) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)(b_rootj + 1.0), 1,
                                                980001, &k_emlrtBCI, &d_st);
                }
                d1 = SD->u1.f0.P[(int32_T)(b_rootj + 1.0) - 1];
                if (d1 < b_rootj) {
                  b_rootj = d1;
                } else {
                  exitg1 = 1;
                }
              } while (exitg1 == 0);
              if (root > b_rootj) {
                root = b_rootj;
              }
              d_st.site = &gc_emlrtRSI;
              do {
                exitg1 = 0;
                if (((int32_T)(b_i + 1.0) < 1) ||
                    ((int32_T)(b_i + 1.0) > 980001)) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1.0), 1, 980001,
                                                &m_emlrtBCI, &d_st);
                }
                d1 = SD->u1.f0.P[(int32_T)(b_i + 1.0) - 1];
                if (d1 < b_i) {
                  SD->u1.f0.P[(int32_T)(b_i + 1.0) - 1] = root;
                  b_i = d1;
                } else {
                  exitg1 = 1;
                }
              } while (exitg1 == 0);
              SD->u1.f0.P[(int32_T)(b_i + 1.0) - 1] = root;
            }
            d_st.site = &hc_emlrtRSI;
            do {
              exitg1 = 0;
              if (((int32_T)(c_i + 1.0) < 1) ||
                  ((int32_T)(c_i + 1.0) > 980001)) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1.0), 1, 980001,
                                              &m_emlrtBCI, &d_st);
              }
              d1 = SD->u1.f0.P[(int32_T)(c_i + 1.0) - 1];
              if (d1 < c_i) {
                SD->u1.f0.P[(int32_T)(c_i + 1.0) - 1] = root;
                c_i = d1;
              } else {
                exitg1 = 1;
              }
            } while (exitg1 == 0);
            SD->u1.f0.P[(int32_T)(c_i + 1.0) - 1] = root;
            L[qY] = root;
          }
        }
        if ((c < 1) || (c > 1400)) {
          emlrtDynamicBoundsCheckR2012b(c, 1, 1400, &h_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        c_st.site = &qc_emlrtRSI;
        c_i = L[a_tmp + 1400 * (c - 1)];
        if (c_i != 0.0) {
          c_st.site = &rc_emlrtRSI;
          d_st.site = &ec_emlrtRSI;
          root = c_i;
          do {
            exitg1 = 0;
            if (((int32_T)(root + 1.0) < 1) ||
                ((int32_T)(root + 1.0) > 980001)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(root + 1.0), 1, 980001,
                                            &k_emlrtBCI, &d_st);
            }
            d1 = SD->u1.f0.P[(int32_T)(root + 1.0) - 1];
            if (d1 < root) {
              root = d1;
            } else {
              exitg1 = 1;
            }
          } while (exitg1 == 0);
          b_i = L[qY];
          if (c_i != b_i) {
            d_st.site = &fc_emlrtRSI;
            b_rootj = b_i;
            do {
              exitg1 = 0;
              if (((int32_T)(b_rootj + 1.0) < 1) ||
                  ((int32_T)(b_rootj + 1.0) > 980001)) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(b_rootj + 1.0), 1,
                                              980001, &k_emlrtBCI, &d_st);
              }
              d1 = SD->u1.f0.P[(int32_T)(b_rootj + 1.0) - 1];
              if (d1 < b_rootj) {
                b_rootj = d1;
              } else {
                exitg1 = 1;
              }
            } while (exitg1 == 0);
            if (root > b_rootj) {
              root = b_rootj;
            }
            d_st.site = &gc_emlrtRSI;
            do {
              exitg1 = 0;
              if (((int32_T)(b_i + 1.0) < 1) ||
                  ((int32_T)(b_i + 1.0) > 980001)) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1.0), 1, 980001,
                                              &m_emlrtBCI, &d_st);
              }
              d1 = SD->u1.f0.P[(int32_T)(b_i + 1.0) - 1];
              if (d1 < b_i) {
                SD->u1.f0.P[(int32_T)(b_i + 1.0) - 1] = root;
                b_i = d1;
              } else {
                exitg1 = 1;
              }
            } while (exitg1 == 0);
            SD->u1.f0.P[(int32_T)(b_i + 1.0) - 1] = root;
          }
          d_st.site = &hc_emlrtRSI;
          do {
            exitg1 = 0;
            if (((int32_T)(c_i + 1.0) < 1) || ((int32_T)(c_i + 1.0) > 980001)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1.0), 1, 980001,
                                            &m_emlrtBCI, &d_st);
            }
            d1 = SD->u1.f0.P[(int32_T)(c_i + 1.0) - 1];
            if (d1 < c_i) {
              SD->u1.f0.P[(int32_T)(c_i + 1.0) - 1] = root;
              c_i = d1;
            } else {
              exitg1 = 1;
            }
          } while (exitg1 == 0);
          SD->u1.f0.P[(int32_T)(c_i + 1.0) - 1] = root;
          L[qY] = root;
        }
      }
    }
    if ((c + 1 < 1) || (c + 1 > 1408)) {
      emlrtDynamicBoundsCheckR2012b(c + 1, 1, 1408, &c_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
  }
  k = 1.0;
  c = 1;
  while (c <= 1400) {
    if (c < -2147483647) {
      qY = MIN_int32_T;
    } else {
      qY = c - 1;
    }
    i = (int64_T)muDoubleScalarRound((real_T)qY / 2.0) * 700LL;
    if (i > 2147483647LL) {
      i = 2147483647LL;
    } else if (i < -2147483648LL) {
      i = -2147483648LL;
    }
    a_tmp = (int32_T)i + 2;
    if (c + 1 < 1) {
      emlrtDynamicBoundsCheckR2012b(c + 1, 1, 1408, &d_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    qY = chunksSizeAndLabels[c];
    if (((int32_T)i + 1 < 0) && (qY < MAX_int32_T - (int32_T)i)) {
      qY = MIN_int32_T;
    } else if (((int32_T)i + 1 > 0) && (qY > 2147483646 - (int32_T)i)) {
      qY = MAX_int32_T;
    } else {
      qY = ((int32_T)i + qY) + 1;
    }
    c_st.site = &sc_emlrtRSI;
    if (((int32_T)i + 2 <= qY) && (qY > 2147483646)) {
      d_st.site = &tc_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (d_i = a_tmp; d_i <= qY; d_i++) {
      if ((d_i < 1) || (d_i > 980001)) {
        emlrtDynamicBoundsCheckR2012b(d_i, 1, 980001, &j_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      d1 = SD->u1.f0.P[d_i - 1];
      if (d1 < (real_T)d_i - 1.0) {
        if (((int32_T)(d1 + 1.0) < 1) || ((int32_T)(d1 + 1.0) > 980001)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(d1 + 1.0), 1, 980001,
                                        &l_emlrtBCI, (emlrtConstCTX)sp);
        }
        SD->u1.f0.P[d_i - 1] = SD->u1.f0.P[(int32_T)(d1 + 1.0) - 1];
      } else {
        SD->u1.f0.P[d_i - 1] = k;
        k++;
      }
    }
    if (c < 1) {
      emlrtDynamicBoundsCheckR2012b(c, 1, 1408, &i_emlrtBCI, (emlrtConstCTX)sp);
    }
    c = chunksSizeAndLabels[c - 1];
  }
  k--;
  emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
  emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  labelingWu_parallel_numThreads = emlrtAllocRegionTLSs(
      sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs());
#pragma omp parallel num_threads(labelingWu_parallel_numThreads) private(      \
    b_st, r, i1, i2, emlrtJBEnviron) firstprivate(emlrtHadParallelError)
  {
    if (setjmp(emlrtJBEnviron) == 0) {
      b_st.prev = sp;
      b_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
      b_st.site = NULL;
      emlrtSetJmpBuf(&b_st, &emlrtJBEnviron);
    } else {
      emlrtHadParallelError = true;
    }
#pragma omp for nowait
    for (b_c = 0; b_c < 1400; b_c++) {
      if (emlrtHadParallelError) {
        continue;
      }
      if (setjmp(emlrtJBEnviron) == 0) {
        for (r = 0; r < 1400; r++) {
          i1 = r + 1400 * b_c;
          i2 = (int32_T)(L[i1] + 1.0);
          if ((i2 < 1) || (i2 > 980001)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, 980001, &g_emlrtBCI, &b_st);
          }
          L[i1] = SD->u1.f0.P[i2 - 1];
        }
      } else {
        emlrtHadParallelError = true;
      }
    }
  }
  emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
  return k;
}

/* End of code generation (bwlabel.c) */
