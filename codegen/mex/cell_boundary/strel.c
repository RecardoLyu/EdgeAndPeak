/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * strel.c
 *
 * Code generation for function 'strel'
 *
 */

/* Include files */
#include "strel.h"
#include "StrelImpl.h"
#include "abs.h"
#include "any.h"
#include "bsxfun.h"
#include "cell_boundary_data.h"
#include "cell_boundary_emxutil.h"
#include "cell_boundary_types.h"
#include "colon.h"
#include "eml_int_forloop_overflow_check.h"
#include "find.h"
#include "imdilate.h"
#include "indexShapeCheck.h"
#include "intline.h"
#include "meshgrid.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "sub2ind.h"
#include "warning.h"
#include "mwmathutil.h"
#include <emmintrin.h>

/* Variable Definitions */
static emlrtRSInfo bb_emlrtRSI = {
    44,       /* lineNo */
    "mpower", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m" /* pathName
                                                                         */
};

static emlrtRSInfo cb_emlrtRSI =
    {
        71,      /* lineNo */
        "power", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\ops\\power.m" /* pathName
                                                                         */
};

static emlrtRSInfo ad_emlrtRSI = {
    930,                                      /* lineNo */
    "StructuringElementHelper/makeDiskStrel", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo bd_emlrtRSI = {
    940,                                      /* lineNo */
    "StructuringElementHelper/makeDiskStrel", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo cd_emlrtRSI = {
    941,                                      /* lineNo */
    "StructuringElementHelper/makeDiskStrel", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo dd_emlrtRSI = {
    988,                                      /* lineNo */
    "StructuringElementHelper/makeDiskStrel", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo ed_emlrtRSI = {
    992,                                      /* lineNo */
    "StructuringElementHelper/makeDiskStrel", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo fd_emlrtRSI = {
    1000,                                     /* lineNo */
    "StructuringElementHelper/makeDiskStrel", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo gd_emlrtRSI = {
    1010,                                     /* lineNo */
    "StructuringElementHelper/makeDiskStrel", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo hd_emlrtRSI = {
    1014,                                     /* lineNo */
    "StructuringElementHelper/makeDiskStrel", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo id_emlrtRSI = {
    1017,                                     /* lineNo */
    "StructuringElementHelper/makeDiskStrel", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo jd_emlrtRSI = {
    1025,                                     /* lineNo */
    "StructuringElementHelper/makeDiskStrel", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo kd_emlrtRSI = {
    1029,                                     /* lineNo */
    "StructuringElementHelper/makeDiskStrel", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo ld_emlrtRSI = {
    1037,                                     /* lineNo */
    "StructuringElementHelper/makeDiskStrel", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo md_emlrtRSI = {
    1042,                                     /* lineNo */
    "StructuringElementHelper/makeDiskStrel", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo nd_emlrtRSI = {
    1051,                                     /* lineNo */
    "StructuringElementHelper/makeDiskStrel", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo od_emlrtRSI = {
    995,                                      /* lineNo */
    "StructuringElementHelper/makeDiskStrel", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo pd_emlrtRSI = {
    1038,                                     /* lineNo */
    "StructuringElementHelper/makeDiskStrel", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo qd_emlrtRSI = {
    1039,                                     /* lineNo */
    "StructuringElementHelper/makeDiskStrel", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo rd_emlrtRSI = {
    1043,                                     /* lineNo */
    "StructuringElementHelper/makeDiskStrel", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo sd_emlrtRSI = {
    1044,                                     /* lineNo */
    "StructuringElementHelper/makeDiskStrel", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo td_emlrtRSI = {
    1060,                                     /* lineNo */
    "StructuringElementHelper/makeDiskStrel", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo ud_emlrtRSI = {
    1731,                  /* lineNo */
    "initializeStrelData", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo vd_emlrtRSI = {
    1735,                  /* lineNo */
    "initializeStrelData", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo wd_emlrtRSI = {
    1734,                  /* lineNo */
    "initializeStrelData", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo xd_emlrtRSI = {
    1739,                  /* lineNo */
    "initializeStrelData", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo de_emlrtRSI = {
    28,       /* lineNo */
    "repmat", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" /* pathName
                                                                        */
};

static emlrtRSInfo ke_emlrtRSI = {
    1617,                                      /* lineNo */
    "getNhoodAndHeightFromPeriodicLineParams", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo le_emlrtRSI = {
    1618,                                      /* lineNo */
    "getNhoodAndHeightFromPeriodicLineParams", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo me_emlrtRSI = {
    1622,                                      /* lineNo */
    "getNhoodAndHeightFromPeriodicLineParams", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo ne_emlrtRSI = {
    1623,                                      /* lineNo */
    "getNhoodAndHeightFromPeriodicLineParams", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo oe_emlrtRSI = {
    1625,                                      /* lineNo */
    "getNhoodAndHeightFromPeriodicLineParams", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo se_emlrtRSI = {
    15,    /* lineNo */
    "max", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\datafun\\max.m" /* pathName
                                                                       */
};

static emlrtRSInfo
    te_emlrtRSI =
        {
            44,         /* lineNo */
            "minOrMax", /* fcnName */
            "D:\\Program "
            "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\minOrMax.m" /* pathName */
};

static emlrtRSInfo
    ue_emlrtRSI =
        {
            79,        /* lineNo */
            "maximum", /* fcnName */
            "D:\\Program "
            "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\minOrMax.m" /* pathName */
};

static emlrtRSInfo ve_emlrtRSI = {
    190,             /* lineNo */
    "unaryMinOrMax", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax."
    "m" /* pathName */
};

static emlrtRSInfo we_emlrtRSI = {
    901,                    /* lineNo */
    "maxRealVectorOmitNaN", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax."
    "m" /* pathName */
};

static emlrtRSInfo xe_emlrtRSI = {
    73,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo ye_emlrtRSI = {
    65,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo af_emlrtRSI = {
    114,         /* lineNo */
    "findFirst", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo bf_emlrtRSI = {
    131,                        /* lineNo */
    "minOrMaxRealVectorKernel", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo cf_emlrtRSI = {
    16,        /* lineNo */
    "sub2ind", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m" /* pathName
                                                                         */
};

static emlrtRSInfo ef_emlrtRSI = {
    31,                                           /* lineNo */
    "StructuringElementHelper/makeuninitialized", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo ff_emlrtRSI = {
    579,                                  /* lineNo */
    "StructuringElementHelper/makeStrel", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo gf_emlrtRSI = {
    587,                                  /* lineNo */
    "StructuringElementHelper/makeStrel", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo hf_emlrtRSI = {
    690,                                           /* lineNo */
    "StructuringElementHelper/makeArbitraryStrel", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo if_emlrtRSI = {
    693,                                           /* lineNo */
    "StructuringElementHelper/makeArbitraryStrel", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo dg_emlrtRSI = {
    59,                                   /* lineNo */
    "StructuringElementHelper/decompose", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo eg_emlrtRSI = {
    660,                                      /* lineNo */
    "StructuringElementHelper/decomposeImpl", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo fg_emlrtRSI = {
    1678,                               /* lineNo */
    "decomposeReflectAndTranslateAlgo", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo gg_emlrtRSI = {
    1680,                               /* lineNo */
    "decomposeReflectAndTranslateAlgo", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo hg_emlrtRSI = {
    1705,                               /* lineNo */
    "decomposeReflectAndTranslateAlgo", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo jg_emlrtRSI = {
    386,                                       /* lineNo */
    "StructuringElementHelper/parenReference", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo og_emlrtRSI = {
    257,                                   /* lineNo */
    "StructuringElementHelper/getpadsize", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo pg_emlrtRSI = {
    265,                                   /* lineNo */
    "StructuringElementHelper/getpadsize", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo qg_emlrtRSI = {
    278,                                   /* lineNo */
    "StructuringElementHelper/getpadsize", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo rg_emlrtRSI = {
    288,                                   /* lineNo */
    "StructuringElementHelper/getpadsize", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo sg_emlrtRSI = {
    289,                                   /* lineNo */
    "StructuringElementHelper/getpadsize", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo tg_emlrtRSI = {
    1665,               /* lineNo */
    "getneighborsImpl", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo ug_emlrtRSI = {
    1664,               /* lineNo */
    "getneighborsImpl", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo vg_emlrtRSI = {
    1663,               /* lineNo */
    "getneighborsImpl", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo wg_emlrtRSI = {
    1639,               /* lineNo */
    "getneighborsImpl", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo xg_emlrtRSI = {
    1637,               /* lineNo */
    "getneighborsImpl", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo yg_emlrtRSI =
    {
        39,     /* lineNo */
        "find", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                          */
};

static emlrtRSInfo ah_emlrtRSI =
    {
        144,        /* lineNo */
        "eml_find", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                          */
};

static emlrtRSInfo bh_emlrtRSI =
    {
        382,                  /* lineNo */
        "find_first_indices", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                          */
};

static emlrtRSInfo ch_emlrtRSI =
    {
        402,                  /* lineNo */
        "find_first_indices", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                          */
};

static emlrtRSInfo fh_emlrtRSI = {
    19,        /* lineNo */
    "ind2sub", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m" /* pathName
                                                                         */
};

static emlrtRSInfo gh_emlrtRSI = {
    27,                /* lineNo */
    "horzcatCellList", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\horzcatCellList.m" /* pathName */
};

static emlrtRSInfo hh_emlrtRSI = {
    103,           /* lineNo */
    "allocOutput", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\horzcatCellList.m" /* pathName */
};

static emlrtRSInfo ih_emlrtRSI = {
    195,       /* lineNo */
    "outSize", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\horzcatCellList.m" /* pathName */
};

static emlrtRSInfo jh_emlrtRSI = {
    51,                  /* lineNo */
    "reshapeSizeChecks", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" /* pathName */
};

static emlrtRSInfo kh_emlrtRSI = {
    119,               /* lineNo */
    "computeDimsData", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" /* pathName */
};

static emlrtRSInfo lh_emlrtRSI = {
    41,    /* lineNo */
    "cat", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pathName
                                                                         */
};

static emlrtRSInfo mh_emlrtRSI = {
    113,        /* lineNo */
    "cat_impl", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pathName
                                                                         */
};

static emlrtRSInfo nh_emlrtRSI = {
    15,    /* lineNo */
    "min", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\datafun\\min.m" /* pathName
                                                                       */
};

static emlrtRSInfo
    oh_emlrtRSI =
        {
            46,         /* lineNo */
            "minOrMax", /* fcnName */
            "D:\\Program "
            "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\minOrMax.m" /* pathName */
};

static emlrtRSInfo
    ph_emlrtRSI =
        {
            92,        /* lineNo */
            "minimum", /* fcnName */
            "D:\\Program "
            "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\minOrMax.m" /* pathName */
};

static emlrtRSInfo qh_emlrtRSI = {
    225,             /* lineNo */
    "unaryMinOrMax", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax."
    "m" /* pathName */
};

static emlrtRSInfo rh_emlrtRSI = {
    318,                     /* lineNo */
    "unaryMinOrMaxDispatch", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax."
    "m" /* pathName */
};

static emlrtRSInfo sh_emlrtRSI = {
    386,          /* lineNo */
    "minOrMax2D", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax."
    "m" /* pathName */
};

static emlrtRSInfo th_emlrtRSI = {
    468,                         /* lineNo */
    "minOrMax2DColumnMajorDim1", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax."
    "m" /* pathName */
};

static emlrtRSInfo uh_emlrtRSI = {
    466,                         /* lineNo */
    "minOrMax2DColumnMajorDim1", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax."
    "m" /* pathName */
};

static emlrtRSInfo ii_emlrtRSI = {
    15,    /* lineNo */
    "sum", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m" /* pathName
                                                                       */
};

static emlrtRSInfo ji_emlrtRSI = {
    99,        /* lineNo */
    "sumprod", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod"
    ".m" /* pathName */
};

static emlrtRSInfo ki_emlrtRSI = {
    149,                     /* lineNo */
    "combineVectorElements", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combine"
    "VectorElements.m" /* pathName */
};

static emlrtRSInfo li_emlrtRSI = {
    209,                /* lineNo */
    "colMajorFlatIter", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combine"
    "VectorElements.m" /* pathName */
};

static emlrtRSInfo ni_emlrtRSI =
    {
        35,     /* lineNo */
        "find", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                          */
};

static emlrtRSInfo si_emlrtRSI = {
    1604,                              /* lineNo */
    "getNhoodAndHeightFromLineParams", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo ti_emlrtRSI = {
    1602,                              /* lineNo */
    "getNhoodAndHeightFromLineParams", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo ui_emlrtRSI = {
    1601,                              /* lineNo */
    "getNhoodAndHeightFromLineParams", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo vi_emlrtRSI = {
    1600,                              /* lineNo */
    "getNhoodAndHeightFromLineParams", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo xj_emlrtRSI = {
    230,                                                  /* lineNo */
    "StructuringElementHelper/isdecompositionorthogonal", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRSInfo yj_emlrtRSI = {
    244,                                                  /* lineNo */
    "StructuringElementHelper/isdecompositionorthogonal", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

static emlrtRTEInfo h_emlrtRTEI = {
    134,             /* lineNo */
    27,              /* colNo */
    "unaryMinOrMax", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax."
    "m" /* pName */
};

static emlrtDCInfo emlrtDCI = {
    1624,                                      /* lineNo */
    15,                                        /* colNo */
    "getNhoodAndHeightFromPeriodicLineParams", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    1                                            /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    1624,                                      /* lineNo */
    15,                                        /* colNo */
    "getNhoodAndHeightFromPeriodicLineParams", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    4                                            /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = {
    1624,                                      /* lineNo */
    17,                                        /* colNo */
    "getNhoodAndHeightFromPeriodicLineParams", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    1                                            /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = {
    1624,                                      /* lineNo */
    17,                                        /* colNo */
    "getNhoodAndHeightFromPeriodicLineParams", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    4                                            /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = {
    1627,                                      /* lineNo */
    16,                                        /* colNo */
    "getNhoodAndHeightFromPeriodicLineParams", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    1                                            /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = {
    1627,                                      /* lineNo */
    18,                                        /* colNo */
    "getNhoodAndHeightFromPeriodicLineParams", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    1                                            /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = {
    1624,                                      /* lineNo */
    1,                                         /* colNo */
    "getNhoodAndHeightFromPeriodicLineParams", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    1                                            /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = {
    -1,                                        /* iFirst */
    -1,                                        /* iLast */
    1626,                                      /* lineNo */
    7,                                         /* colNo */
    "",                                        /* aName */
    "getNhoodAndHeightFromPeriodicLineParams", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    0                                            /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = {
    1627,                                      /* lineNo */
    1,                                         /* colNo */
    "getNhoodAndHeightFromPeriodicLineParams", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    1                                            /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    1690,                               /* lineNo */
    43,                                 /* colNo */
    "",                                 /* aName */
    "decomposeReflectAndTranslateAlgo", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    0                                            /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    1697,                               /* lineNo */
    54,                                 /* colNo */
    "",                                 /* aName */
    "decomposeReflectAndTranslateAlgo", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    0                                            /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    1691,                               /* lineNo */
    48,                                 /* colNo */
    "",                                 /* aName */
    "decomposeReflectAndTranslateAlgo", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    0                                            /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    1698,                               /* lineNo */
    62,                                 /* colNo */
    "",                                 /* aName */
    "decomposeReflectAndTranslateAlgo", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    0                                            /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    1698,                               /* lineNo */
    67,                                 /* colNo */
    "",                                 /* aName */
    "decomposeReflectAndTranslateAlgo", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    0                                            /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    1694,                               /* lineNo */
    82,                                 /* colNo */
    "",                                 /* aName */
    "decomposeReflectAndTranslateAlgo", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    0                                            /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    1701,                               /* lineNo */
    86,                                 /* colNo */
    "",                                 /* aName */
    "decomposeReflectAndTranslateAlgo", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    0                                            /* checkKind */
};

static emlrtECInfo e_emlrtECI = {
    2,                  /* nDims */
    26,                 /* lineNo */
    26,                 /* colNo */
    "sameSizeBinaryOp", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\shared\\coder\\coder\\lib\\+"
    "coder\\sameSizeBinaryOp.m" /* pName */
};

static emlrtRTEInfo o_emlrtRTEI = {
    23,                 /* lineNo */
    27,                 /* colNo */
    "sameSizeBinaryOp", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\shared\\coder\\coder\\lib\\+"
    "coder\\sameSizeBinaryOp.m" /* pName */
};

static emlrtRTEInfo p_emlrtRTEI = {
    288,                   /* lineNo */
    27,                    /* colNo */
    "check_non_axis_size", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pName
                                                                         */
};

static emlrtBCInfo wb_emlrtBCI = {
    -1,                                    /* iFirst */
    -1,                                    /* iLast */
    286,                                   /* lineNo */
    45,                                    /* colNo */
    "",                                    /* aName */
    "StructuringElementHelper/getpadsize", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    0                                            /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = {
    -1,                                    /* iFirst */
    -1,                                    /* iLast */
    278,                                   /* lineNo */
    47,                                    /* colNo */
    "",                                    /* aName */
    "StructuringElementHelper/getpadsize", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    0                                            /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = {
    -1,                                    /* iFirst */
    -1,                                    /* iLast */
    278,                                   /* lineNo */
    69,                                    /* colNo */
    "",                                    /* aName */
    "StructuringElementHelper/getpadsize", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    0                                            /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = {
    -1,                                    /* iFirst */
    -1,                                    /* iLast */
    275,                                   /* lineNo */
    63,                                    /* colNo */
    "",                                    /* aName */
    "StructuringElementHelper/getpadsize", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    0                                            /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = {
    -1,                                    /* iFirst */
    -1,                                    /* iLast */
    262,                                   /* lineNo */
    44,                                    /* colNo */
    "",                                    /* aName */
    "StructuringElementHelper/getpadsize", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    0                                            /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = {
    279,                                   /* lineNo */
    29,                                    /* colNo */
    "StructuringElementHelper/getpadsize", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    4                                            /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = {
    -1,                                    /* iFirst */
    -1,                                    /* iLast */
    265,                                   /* lineNo */
    29,                                    /* colNo */
    "",                                    /* aName */
    "StructuringElementHelper/getpadsize", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    0                                            /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = {
    -1,                                    /* iFirst */
    -1,                                    /* iLast */
    278,                                   /* lineNo */
    33,                                    /* colNo */
    "",                                    /* aName */
    "StructuringElementHelper/getpadsize", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    0                                            /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = {
    -1,                                    /* iFirst */
    -1,                                    /* iLast */
    259,                                   /* lineNo */
    37,                                    /* colNo */
    "",                                    /* aName */
    "StructuringElementHelper/getpadsize", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    0                                            /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = {
    -1,                                    /* iFirst */
    -1,                                    /* iLast */
    265,                                   /* lineNo */
    21,                                    /* colNo */
    "",                                    /* aName */
    "StructuringElementHelper/getpadsize", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    0                                            /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = {
    -1,                                    /* iFirst */
    -1,                                    /* iLast */
    278,                                   /* lineNo */
    25,                                    /* colNo */
    "",                                    /* aName */
    "StructuringElementHelper/getpadsize", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    0                                            /* checkKind */
};

static emlrtRTEInfo q_emlrtRTEI = {
    81,                  /* lineNo */
    23,                  /* colNo */
    "reshapeSizeChecks", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" /* pName */
};

static emlrtRTEInfo r_emlrtRTEI = {
    74,                  /* lineNo */
    13,                  /* colNo */
    "reshapeSizeChecks", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" /* pName */
};

static emlrtRTEInfo s_emlrtRTEI =
    {
        392,                  /* lineNo */
        1,                    /* colNo */
        "find_first_indices", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                          */
};

static emlrtRTEInfo
    t_emlrtRTEI =
        {
            21,        /* lineNo */
            15,        /* colNo */
            "ind2sub", /* fName */
            "D:\\Program "
            "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\ind2sub.m" /* pName */
};

static emlrtBCInfo hc_emlrtBCI = {
    -1,                 /* iFirst */
    -1,                 /* iLast */
    1643,               /* lineNo */
    22,                 /* colNo */
    "",                 /* aName */
    "getneighborsImpl", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    0                                            /* checkKind */
};

static emlrtRTEInfo u_emlrtRTEI = {
    188,       /* lineNo */
    27,        /* colNo */
    "outSize", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\horzcatCellList.m" /* pName */
};

static emlrtDCInfo t_emlrtDCI = {
    1603,                              /* lineNo */
    19,                                /* colNo */
    "getNhoodAndHeightFromLineParams", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    1                                            /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = {
    1603,                              /* lineNo */
    19,                                /* colNo */
    "getNhoodAndHeightFromLineParams", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    4                                            /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = {
    1603,                              /* lineNo */
    21,                                /* colNo */
    "getNhoodAndHeightFromLineParams", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    1                                            /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = {
    1603,                              /* lineNo */
    21,                                /* colNo */
    "getNhoodAndHeightFromLineParams", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    4                                            /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = {
    1606,                              /* lineNo */
    20,                                /* colNo */
    "getNhoodAndHeightFromLineParams", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    1                                            /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = {
    1606,                              /* lineNo */
    22,                                /* colNo */
    "getNhoodAndHeightFromLineParams", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    1                                            /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = {
    1603,                              /* lineNo */
    5,                                 /* colNo */
    "getNhoodAndHeightFromLineParams", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    1                                            /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = {
    -1,                                /* iFirst */
    -1,                                /* iLast */
    1605,                              /* lineNo */
    11,                                /* colNo */
    "",                                /* aName */
    "getNhoodAndHeightFromLineParams", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    0                                            /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = {
    1606,                              /* lineNo */
    5,                                 /* colNo */
    "getNhoodAndHeightFromLineParams", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    1                                            /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = {
    -1,                                                   /* iFirst */
    -1,                                                   /* iLast */
    238,                                                  /* lineNo */
    23,                                                   /* colNo */
    "",                                                   /* aName */
    "StructuringElementHelper/isdecompositionorthogonal", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    0                                            /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = {
    -1,                                                   /* iFirst */
    -1,                                                   /* iLast */
    237,                                                  /* lineNo */
    54,                                                   /* colNo */
    "",                                                   /* aName */
    "StructuringElementHelper/isdecompositionorthogonal", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    0                                            /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = {
    -1,                                                   /* iFirst */
    -1,                                                   /* iLast */
    242,                                                  /* lineNo */
    19,                                                   /* colNo */
    "",                                                   /* aName */
    "StructuringElementHelper/isdecompositionorthogonal", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    0                                            /* checkKind */
};

static emlrtECInfo f_emlrtECI = {
    1,                                        /* nDims */
    941,                                      /* lineNo */
    25,                                       /* colNo */
    "StructuringElementHelper/makeDiskStrel", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtECInfo g_emlrtECI = {
    2,                                        /* nDims */
    941,                                      /* lineNo */
    25,                                       /* colNo */
    "StructuringElementHelper/makeDiskStrel", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = {
    974,                                      /* lineNo */
    25,                                       /* colNo */
    "StructuringElementHelper/makeDiskStrel", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtBCInfo dd_emlrtBCI = {
    -1,                                        /* iFirst */
    -1,                                        /* iLast */
    389,                                       /* lineNo */
    52,                                        /* colNo */
    "",                                        /* aName */
    "StructuringElementHelper/parenReference", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    0                                            /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = {
    -1,                                        /* iFirst */
    -1,                                        /* iLast */
    390,                                       /* lineNo */
    72,                                        /* colNo */
    "",                                        /* aName */
    "StructuringElementHelper/parenReference", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m", /* pName */
    0                                            /* checkKind */
};

static emlrtRTEInfo ib_emlrtRTEI = {
    1617,                       /* lineNo */
    5,                          /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = {
    1620,                       /* lineNo */
    1,                          /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = {
    1621,                       /* lineNo */
    1,                          /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = {
    1624,                       /* lineNo */
    1,                          /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = {
    1625,                       /* lineNo */
    22,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = {
    1625,                       /* lineNo */
    43,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = {
    1625,                       /* lineNo */
    1,                          /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = {
    1626,                       /* lineNo */
    7,                          /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = {
    1627,                       /* lineNo */
    1,                          /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = {
    1618,                       /* lineNo */
    1,                          /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = {
    1619,                       /* lineNo */
    1,                          /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = {
    1617,                       /* lineNo */
    6,                          /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = {
    1622,                       /* lineNo */
    11,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = {
    16,        /* lineNo */
    14,        /* colNo */
    "sub2ind", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m" /* pName
                                                                         */
};

static emlrtRTEInfo dc_emlrtRTEI = {
    587,                        /* lineNo */
    22,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = {
    51,                         /* lineNo */
    17,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo bd_emlrtRTEI = {
    660,                        /* lineNo */
    13,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = {
    1691,                       /* lineNo */
    13,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = {
    1692,                       /* lineNo */
    13,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = {
    1698,                       /* lineNo */
    17,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = {
    56,                         /* lineNo */
    44,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = {
    1699,                       /* lineNo */
    17,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = {
    31,                         /* lineNo */
    18,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo id_emlrtRTEI = {
    249,                        /* lineNo */
    37,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = {
    259,                        /* lineNo */
    37,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = {
    265,                        /* lineNo */
    21,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = {
    458,             /* lineNo */
    21,              /* colNo */
    "unaryMinOrMax", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax."
    "m" /* pName */
};

static emlrtRTEInfo md_emlrtRTEI = {
    310,   /* lineNo */
    14,    /* colNo */
    "cat", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pName
                                                                         */
};

static emlrtRTEInfo nd_emlrtRTEI = {
    15,    /* lineNo */
    5,     /* colNo */
    "max", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\datafun\\max.m" /* pName
                                                                       */
};

static emlrtRTEInfo od_emlrtRTEI = {
    278,                        /* lineNo */
    25,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = {
    257,                        /* lineNo */
    17,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = {
    259,                        /* lineNo */
    17,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = {
    288,                        /* lineNo */
    84,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = {
    265,                        /* lineNo */
    37,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo td_emlrtRTEI = {
    257,                        /* lineNo */
    23,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo ud_emlrtRTEI =
    {
        369,    /* lineNo */
        24,     /* colNo */
        "find", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                          */
};

static emlrtRTEInfo vd_emlrtRTEI =
    {
        39,     /* lineNo */
        5,      /* colNo */
        "find", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                          */
};

static emlrtRTEInfo wd_emlrtRTEI = {
    1637,                       /* lineNo */
    5,                          /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo xd_emlrtRTEI = {
    1639,                       /* lineNo */
    5,                          /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo
    yd_emlrtRTEI =
        {
            25,        /* lineNo */
            5,         /* colNo */
            "ind2sub", /* fName */
            "D:\\Program "
            "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\ind2sub.m" /* pName */
};

static emlrtRTEInfo
    ae_emlrtRTEI =
        {
            26,        /* lineNo */
            5,         /* colNo */
            "ind2sub", /* fName */
            "D:\\Program "
            "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\ind2sub.m" /* pName */
};

static emlrtRTEInfo be_emlrtRTEI = {
    1663,                       /* lineNo */
    2,                          /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo ce_emlrtRTEI = {
    27,                /* lineNo */
    5,                 /* colNo */
    "horzcatCellList", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\horzcatCellList.m" /* pName */
};

static emlrtRTEInfo de_emlrtRTEI = {
    1666,                       /* lineNo */
    27,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo ee_emlrtRTEI = {
    1669,                       /* lineNo */
    5,                          /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo fe_emlrtRTEI = {
    1662,                       /* lineNo */
    1,                          /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo ge_emlrtRTEI = {
    1664,                       /* lineNo */
    1,                          /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo he_emlrtRTEI =
    {
        31,     /* lineNo */
        6,      /* colNo */
        "find", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                          */
};

static emlrtRTEInfo ie_emlrtRTEI = {
    1631,                       /* lineNo */
    31,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo pe_emlrtRTEI = {
    1603,                       /* lineNo */
    5,                          /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo qe_emlrtRTEI = {
    1604,                       /* lineNo */
    5,                          /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo re_emlrtRTEI = {
    1605,                       /* lineNo */
    11,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo se_emlrtRTEI = {
    1606,                       /* lineNo */
    5,                          /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo te_emlrtRTEI = {
    1604,                       /* lineNo */
    26,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo ue_emlrtRTEI = {
    1601,                       /* lineNo */
    15,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo of_emlrtRTEI = {
    234,                        /* lineNo */
    17,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo pf_emlrtRTEI = {
    244,                        /* lineNo */
    31,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo qf_emlrtRTEI = {
    230,                        /* lineNo */
    17,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo rf_emlrtRTEI = {
    230,                        /* lineNo */
    23,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo tf_emlrtRTEI = {
    941,                        /* lineNo */
    25,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo uf_emlrtRTEI = {
    1011,                       /* lineNo */
    17,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo vf_emlrtRTEI = {
    941,                        /* lineNo */
    33,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo wf_emlrtRTEI =
    {
        36,     /* lineNo */
        5,      /* colNo */
        "find", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                          */
};

static emlrtRTEInfo xf_emlrtRTEI = {
    927,                        /* lineNo */
    23,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo yf_emlrtRTEI = {
    995,                        /* lineNo */
    21,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo ag_emlrtRTEI = {
    996,                        /* lineNo */
    21,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo bg_emlrtRTEI = {
    941,                        /* lineNo */
    17,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo cg_emlrtRTEI = {
    1057,                       /* lineNo */
    22,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo dg_emlrtRTEI = {
    1060,                       /* lineNo */
    13,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo eg_emlrtRTEI = {
    1063,                       /* lineNo */
    13,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo fg_emlrtRTEI = {
    1067,                       /* lineNo */
    13,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo gg_emlrtRTEI = {
    1068,                       /* lineNo */
    13,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo hg_emlrtRTEI = {
    1038,                       /* lineNo */
    21,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo ig_emlrtRTEI = {
    1039,                       /* lineNo */
    21,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo jg_emlrtRTEI = {
    1043,                       /* lineNo */
    21,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo kg_emlrtRTEI = {
    1044,                       /* lineNo */
    21,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo lg_emlrtRTEI = {
    1049,                       /* lineNo */
    21,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo mg_emlrtRTEI = {
    1050,                       /* lineNo */
    21,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo ng_emlrtRTEI = {
    1051,                       /* lineNo */
    38,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo og_emlrtRTEI = {
    930,                        /* lineNo */
    48,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo pg_emlrtRTEI = {
    988,                        /* lineNo */
    21,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo qg_emlrtRTEI = {
    1014,                       /* lineNo */
    26,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo rg_emlrtRTEI = {
    1731,                       /* lineNo */
    22,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo sg_emlrtRTEI = {
    940,                        /* lineNo */
    36,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo tg_emlrtRTEI = {
    375,                        /* lineNo */
    24,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo ug_emlrtRTEI = {
    389,                        /* lineNo */
    17,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo vg_emlrtRTEI = {
    390,                        /* lineNo */
    17,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo wg_emlrtRTEI = {
    395,                        /* lineNo */
    13,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRTEInfo xg_emlrtRTEI = {
    396,                        /* lineNo */
    13,                         /* colNo */
    "StructuringElementHelper", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

static emlrtRSInfo ek_emlrtRSI =
    {
        19,            /* lineNo */
        "indexDivide", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\indexDivide.m" /* pathName */
};

static emlrtRSInfo fk_emlrtRSI = {
    1619,                                      /* lineNo */
    "getNhoodAndHeightFromPeriodicLineParams", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

/* Function Declarations */
static void b_getNhoodAndHeightFromLinePara(const emlrtStack *sp, real_T len,
                                            emxArray_boolean_T *nhood,
                                            emxArray_real_T *height);

static void binary_expand_op_1(const emlrtStack *sp, emxArray_boolean_T *in1,
                               const emxArray_real_T *in2,
                               const emxArray_real_T *in3, real_T in4);

static void c_getNhoodAndHeightFromPeriodic(const emlrtStack *sp, real_T p,
                                            const real_T v[2],
                                            emxArray_boolean_T *nhood,
                                            emxArray_real_T *height);

static int32_T div_s32(const emlrtStack *sp, int32_T numerator,
                       int32_T denominator);

static void getNhoodAndHeightFromLineParams(const emlrtStack *sp, real_T len,
                                            emxArray_boolean_T *nhood,
                                            emxArray_real_T *height);

static void getneighborsImpl(const emlrtStack *sp,
                             const emxArray_boolean_T *nhood,
                             const emxArray_real_T *height,
                             emxArray_real_T *offsets);

static void
strel_decomposeImpl(const emlrtStack *sp,
                    const c_emxArray_images_internal_code *obj_StrelArray,
                    const emxArray_cell_wrap_1 *obj_DecomposedStrelArray,
                    c_emxArray_images_internal_code *seq_StrelArray,
                    emxArray_cell_wrap_1 *seq_DecomposedStrelArray);

static void strel_strel(const emlrtStack *sp,
                        c_emxArray_images_internal_code *obj_StrelArray,
                        emxArray_cell_wrap_1 *obj_DecomposedStrelArray);

/* Function Definitions */
static void b_getNhoodAndHeightFromLinePara(const emlrtStack *sp, real_T len,
                                            emxArray_boolean_T *nhood,
                                            emxArray_real_T *height)
{
  __m128d b_r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emxArray_int32_T *r1;
  emxArray_real_T *idx;
  emxArray_real_T *r;
  emxArray_real_T *varargin_1;
  real_T M;
  real_T N;
  real_T ex;
  real_T x;
  real_T x_tmp;
  real_T *height_data;
  real_T *idx_data;
  real_T *varargin_1_data;
  int32_T b_M[2];
  int32_T a;
  int32_T b_idx;
  int32_T b_loop_ub_tmp_tmp;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T last;
  int32_T loop_ub_tmp;
  int32_T loop_ub_tmp_tmp;
  int32_T *r2;
  boolean_T exitg1;
  boolean_T *nhood_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &idx, 1, &qe_emlrtRTEI, true);
  emxInit_real_T(sp, &r, 1, &te_emlrtRTEI, true);
  x_tmp = (len - 1.0) / 2.0;
  x = muDoubleScalarRound(x_tmp * 6.123233995736766E-17);
  x_tmp = muDoubleScalarRound(x_tmp);
  st.site = &vi_emlrtRSI;
  intline(&st, -x, x, x_tmp, -x_tmp, idx, r);
  height_data = r->data;
  idx_data = idx->data;
  st.site = &ui_emlrtRSI;
  emxInit_real_T(&st, &varargin_1, 1, &ue_emlrtRTEI, true);
  b_st.site = &ui_emlrtRSI;
  b_abs(&b_st, r, varargin_1);
  varargin_1_data = varargin_1->data;
  b_st.site = &se_emlrtRSI;
  c_st.site = &te_emlrtRSI;
  d_st.site = &ue_emlrtRSI;
  if (varargin_1->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &h_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &ve_emlrtRSI;
  f_st.site = &we_emlrtRSI;
  last = varargin_1->size[0];
  if (varargin_1->size[0] <= 2) {
    if (varargin_1->size[0] == 1) {
      x_tmp = varargin_1_data[0];
    } else if ((varargin_1_data[0] < varargin_1_data[1]) ||
               (muDoubleScalarIsNaN(varargin_1_data[0]) &&
                (!muDoubleScalarIsNaN(varargin_1_data[1])))) {
      x_tmp = varargin_1_data[1];
    } else {
      x_tmp = varargin_1_data[0];
    }
  } else {
    g_st.site = &ye_emlrtRSI;
    if (!muDoubleScalarIsNaN(varargin_1_data[0])) {
      b_idx = 1;
    } else {
      b_idx = 0;
      h_st.site = &af_emlrtRSI;
      if (varargin_1->size[0] > 2147483646) {
        i_st.site = &tc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(varargin_1_data[k - 1])) {
          b_idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (b_idx == 0) {
      x_tmp = varargin_1_data[0];
    } else {
      g_st.site = &xe_emlrtRSI;
      x_tmp = varargin_1_data[b_idx - 1];
      a = b_idx + 1;
      h_st.site = &bf_emlrtRSI;
      if ((b_idx + 1 <= varargin_1->size[0]) &&
          (varargin_1->size[0] > 2147483646)) {
        i_st.site = &tc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (k = a; k <= last; k++) {
        x = varargin_1_data[k - 1];
        if (x_tmp < x) {
          x_tmp = x;
        }
      }
    }
  }
  M = 2.0 * x_tmp + 1.0;
  st.site = &ti_emlrtRSI;
  b_st.site = &ti_emlrtRSI;
  b_abs(&b_st, idx, varargin_1);
  varargin_1_data = varargin_1->data;
  b_st.site = &se_emlrtRSI;
  c_st.site = &te_emlrtRSI;
  d_st.site = &ue_emlrtRSI;
  if (varargin_1->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &h_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &ve_emlrtRSI;
  f_st.site = &we_emlrtRSI;
  last = varargin_1->size[0];
  if (varargin_1->size[0] <= 2) {
    if (varargin_1->size[0] == 1) {
      x_tmp = varargin_1_data[0];
    } else if ((varargin_1_data[0] < varargin_1_data[1]) ||
               (muDoubleScalarIsNaN(varargin_1_data[0]) &&
                (!muDoubleScalarIsNaN(varargin_1_data[1])))) {
      x_tmp = varargin_1_data[1];
    } else {
      x_tmp = varargin_1_data[0];
    }
  } else {
    g_st.site = &ye_emlrtRSI;
    if (!muDoubleScalarIsNaN(varargin_1_data[0])) {
      b_idx = 1;
    } else {
      b_idx = 0;
      h_st.site = &af_emlrtRSI;
      if (varargin_1->size[0] > 2147483646) {
        i_st.site = &tc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(varargin_1_data[k - 1])) {
          b_idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (b_idx == 0) {
      x_tmp = varargin_1_data[0];
    } else {
      g_st.site = &xe_emlrtRSI;
      x_tmp = varargin_1_data[b_idx - 1];
      a = b_idx + 1;
      h_st.site = &bf_emlrtRSI;
      if ((b_idx + 1 <= varargin_1->size[0]) &&
          (varargin_1->size[0] > 2147483646)) {
        i_st.site = &tc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (k = a; k <= last; k++) {
        x = varargin_1_data[k - 1];
        if (x_tmp < x) {
          x_tmp = x;
        }
      }
    }
  }
  N = 2.0 * x_tmp + 1.0;
  if (!(M >= 0.0)) {
    emlrtNonNegativeCheckR2012b(M, &u_emlrtDCI, (emlrtConstCTX)sp);
  }
  i = (int32_T)muDoubleScalarFloor(M);
  if (M != i) {
    emlrtIntegerCheckR2012b(M, &t_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (!(N >= 0.0)) {
    emlrtNonNegativeCheckR2012b(N, &w_emlrtDCI, (emlrtConstCTX)sp);
  }
  i1 = (int32_T)muDoubleScalarFloor(N);
  if (N != i1) {
    emlrtIntegerCheckR2012b(N, &v_emlrtDCI, (emlrtConstCTX)sp);
  }
  k = nhood->size[0] * nhood->size[1];
  nhood->size[0] = (int32_T)M;
  nhood->size[1] = (int32_T)N;
  emxEnsureCapacity_boolean_T(sp, nhood, k, &pe_emlrtRTEI);
  nhood_data = nhood->data;
  if (M != i) {
    emlrtIntegerCheckR2012b(M, &ab_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (N != i1) {
    emlrtIntegerCheckR2012b(N, &ab_emlrtDCI, (emlrtConstCTX)sp);
  }
  loop_ub_tmp_tmp = (int32_T)M;
  b_loop_ub_tmp_tmp = (int32_T)N;
  loop_ub_tmp = loop_ub_tmp_tmp * b_loop_ub_tmp_tmp;
  for (k = 0; k < loop_ub_tmp; k++) {
    nhood_data[k] = false;
  }
  st.site = &si_emlrtRSI;
  b_st.site = &si_emlrtRSI;
  b_abs(&b_st, r, varargin_1);
  varargin_1_data = varargin_1->data;
  b_st.site = &se_emlrtRSI;
  c_st.site = &te_emlrtRSI;
  d_st.site = &ue_emlrtRSI;
  if (varargin_1->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &h_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &ve_emlrtRSI;
  f_st.site = &we_emlrtRSI;
  last = varargin_1->size[0];
  if (varargin_1->size[0] <= 2) {
    if (varargin_1->size[0] == 1) {
      x_tmp = varargin_1_data[0];
    } else if ((varargin_1_data[0] < varargin_1_data[1]) ||
               (muDoubleScalarIsNaN(varargin_1_data[0]) &&
                (!muDoubleScalarIsNaN(varargin_1_data[1])))) {
      x_tmp = varargin_1_data[1];
    } else {
      x_tmp = varargin_1_data[0];
    }
  } else {
    g_st.site = &ye_emlrtRSI;
    if (!muDoubleScalarIsNaN(varargin_1_data[0])) {
      b_idx = 1;
    } else {
      b_idx = 0;
      h_st.site = &af_emlrtRSI;
      if (varargin_1->size[0] > 2147483646) {
        i_st.site = &tc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(varargin_1_data[k - 1])) {
          b_idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (b_idx == 0) {
      x_tmp = varargin_1_data[0];
    } else {
      g_st.site = &xe_emlrtRSI;
      x_tmp = varargin_1_data[b_idx - 1];
      a = b_idx + 1;
      h_st.site = &bf_emlrtRSI;
      if ((b_idx + 1 <= varargin_1->size[0]) &&
          (varargin_1->size[0] > 2147483646)) {
        i_st.site = &tc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (k = a; k <= last; k++) {
        x = varargin_1_data[k - 1];
        if (x_tmp < x) {
          x_tmp = x;
        }
      }
    }
  }
  st.site = &si_emlrtRSI;
  b_st.site = &si_emlrtRSI;
  b_abs(&b_st, idx, varargin_1);
  varargin_1_data = varargin_1->data;
  b_st.site = &se_emlrtRSI;
  c_st.site = &te_emlrtRSI;
  d_st.site = &ue_emlrtRSI;
  if (varargin_1->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &h_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &ve_emlrtRSI;
  f_st.site = &we_emlrtRSI;
  last = varargin_1->size[0];
  if (varargin_1->size[0] <= 2) {
    if (varargin_1->size[0] == 1) {
      ex = varargin_1_data[0];
    } else if ((varargin_1_data[0] < varargin_1_data[1]) ||
               (muDoubleScalarIsNaN(varargin_1_data[0]) &&
                (!muDoubleScalarIsNaN(varargin_1_data[1])))) {
      ex = varargin_1_data[1];
    } else {
      ex = varargin_1_data[0];
    }
  } else {
    g_st.site = &ye_emlrtRSI;
    if (!muDoubleScalarIsNaN(varargin_1_data[0])) {
      b_idx = 1;
    } else {
      b_idx = 0;
      h_st.site = &af_emlrtRSI;
      if (varargin_1->size[0] > 2147483646) {
        i_st.site = &tc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(varargin_1_data[k - 1])) {
          b_idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (b_idx == 0) {
      ex = varargin_1_data[0];
    } else {
      g_st.site = &xe_emlrtRSI;
      ex = varargin_1_data[b_idx - 1];
      a = b_idx + 1;
      h_st.site = &bf_emlrtRSI;
      if ((b_idx + 1 <= varargin_1->size[0]) &&
          (varargin_1->size[0] > 2147483646)) {
        i_st.site = &tc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (k = a; k <= last; k++) {
        x = varargin_1_data[k - 1];
        if (ex < x) {
          ex = x;
        }
      }
    }
  }
  emxFree_real_T(&f_st, &varargin_1);
  st.site = &si_emlrtRSI;
  b_M[0] = loop_ub_tmp_tmp;
  b_M[1] = b_loop_ub_tmp_tmp;
  a = r->size[0];
  last = (a / 2) << 1;
  b_idx = last - 2;
  for (k = 0; k <= b_idx; k += 2) {
    b_r = _mm_loadu_pd(&height_data[k]);
    _mm_storeu_pd(
        &height_data[k],
        _mm_add_pd(_mm_add_pd(b_r, _mm_set1_pd(x_tmp)), _mm_set1_pd(1.0)));
  }
  for (k = last; k < a; k++) {
    height_data[k] = (height_data[k] + x_tmp) + 1.0;
  }
  a = idx->size[0];
  last = (a / 2) << 1;
  b_idx = last - 2;
  for (k = 0; k <= b_idx; k += 2) {
    b_r = _mm_loadu_pd(&idx_data[k]);
    _mm_storeu_pd(&idx_data[k], _mm_add_pd(_mm_add_pd(b_r, _mm_set1_pd(ex)),
                                           _mm_set1_pd(1.0)));
  }
  for (k = last; k < a; k++) {
    idx_data[k] = (idx_data[k] + ex) + 1.0;
  }
  emxInit_int32_T(&st, &r1, 1, &vb_emlrtRTEI);
  b_st.site = &cf_emlrtRSI;
  sub2ind(&b_st, b_M, r, idx, r1);
  r2 = r1->data;
  k = idx->size[0];
  idx->size[0] = r1->size[0];
  emxEnsureCapacity_real_T(&st, idx, k, &qe_emlrtRTEI);
  idx_data = idx->data;
  a = r1->size[0];
  for (k = 0; k < a; k++) {
    idx_data[k] = r2[k];
  }
  k = r1->size[0];
  r1->size[0] = idx->size[0];
  emxEnsureCapacity_int32_T(sp, r1, k, &re_emlrtRTEI);
  r2 = r1->data;
  a = idx->size[0];
  for (k = 0; k < a; k++) {
    last = (int32_T)idx_data[k];
    if ((last < 1) || (last > loop_ub_tmp)) {
      emlrtDynamicBoundsCheckR2012b(last, 1, loop_ub_tmp, &qc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    r2[k] = last;
  }
  a = r1->size[0];
  for (k = 0; k < a; k++) {
    nhood_data[r2[k] - 1] = true;
  }
  emxFree_int32_T(sp, &r1);
  if (loop_ub_tmp_tmp != i) {
    emlrtIntegerCheckR2012b(M, &x_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (b_loop_ub_tmp_tmp != i1) {
    emlrtIntegerCheckR2012b(N, &y_emlrtDCI, (emlrtConstCTX)sp);
  }
  k = height->size[0] * height->size[1];
  height->size[0] = loop_ub_tmp_tmp;
  height->size[1] = b_loop_ub_tmp_tmp;
  emxEnsureCapacity_real_T(sp, height, k, &se_emlrtRTEI);
  height_data = height->data;
  if (loop_ub_tmp_tmp != i) {
    emlrtIntegerCheckR2012b(M, &bb_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (b_loop_ub_tmp_tmp != i1) {
    emlrtIntegerCheckR2012b(N, &bb_emlrtDCI, (emlrtConstCTX)sp);
  }
  for (i = 0; i < loop_ub_tmp; i++) {
    height_data[i] = 0.0;
  }
  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &idx);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void binary_expand_op_1(const emlrtStack *sp, emxArray_boolean_T *in1,
                               const emxArray_real_T *in2,
                               const emxArray_real_T *in3, real_T in4)
{
  const real_T *in2_data;
  const real_T *in3_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  boolean_T *in1_data;
  in3_data = in3->data;
  in2_data = in2->data;
  if (in3->size[0] == 1) {
    loop_ub = in2->size[0];
  } else {
    loop_ub = in3->size[0];
  }
  i = in1->size[0] * in1->size[1];
  in1->size[0] = loop_ub;
  emxEnsureCapacity_boolean_T(sp, in1, i, &bg_emlrtRTEI);
  if (in3->size[1] == 1) {
    b_loop_ub = in2->size[1];
  } else {
    b_loop_ub = in3->size[1];
  }
  i = in1->size[0] * in1->size[1];
  in1->size[1] = b_loop_ub;
  emxEnsureCapacity_boolean_T(sp, in1, i, &bg_emlrtRTEI);
  in1_data = in1->data;
  stride_0_0 = (in2->size[0] != 1);
  stride_0_1 = (in2->size[1] != 1);
  stride_1_0 = (in3->size[0] != 1);
  stride_1_1 = (in3->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      in1_data[i1 + in1->size[0] * i] =
          (in2_data[i1 * stride_0_0 + in2->size[0] * aux_0_1] +
               in3_data[i1 * stride_1_0 + in3->size[0] * aux_1_1] <=
           in4);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

static void c_getNhoodAndHeightFromPeriodic(const emlrtStack *sp, real_T p,
                                            const real_T v[2],
                                            emxArray_boolean_T *nhood,
                                            emxArray_real_T *height)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emxArray_int32_T *r1;
  emxArray_real_T *c;
  emxArray_real_T *pp;
  emxArray_real_T *r;
  emxArray_real_T *rc;
  emxArray_real_T *varargin_1;
  emxArray_real_T *y;
  real_T M;
  real_T N;
  real_T b_ex;
  real_T d;
  real_T ex;
  real_T *c_data;
  real_T *r_data;
  real_T *rc_data;
  int32_T b_M[2];
  int32_T b_loop_ub_tmp_tmp;
  int32_T i;
  int32_T i1;
  int32_T idx;
  int32_T k;
  int32_T last;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T loop_ub_tmp_tmp;
  int32_T *r3;
  boolean_T exitg1;
  boolean_T *nhood_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &rc, 2, &sb_emlrtRTEI, true);
  emxInit_real_T(sp, &r, 1, &jb_emlrtRTEI, true);
  emxInit_real_T(sp, &c, 1, &kb_emlrtRTEI, true);
  emxInit_real_T(sp, &y, 2, &tb_emlrtRTEI, true);
  c_data = y->data;
  st.site = &ke_emlrtRSI;
  b_st.site = &ee_emlrtRSI;
  if (muDoubleScalarIsNaN(-p) || muDoubleScalarIsNaN(p)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, y, i, &hb_emlrtRTEI);
    c_data = y->data;
    c_data[0] = rtNaN;
  } else if (p < -p) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else if ((muDoubleScalarIsInf(-p) || muDoubleScalarIsInf(p)) && (-p == p)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, y, i, &hb_emlrtRTEI);
    c_data = y->data;
    c_data[0] = rtNaN;
  } else if (muDoubleScalarFloor(-p) == -p) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    loop_ub = (int32_T)(p - (-p));
    y->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&b_st, y, i, &hb_emlrtRTEI);
    c_data = y->data;
    for (i = 0; i <= loop_ub; i++) {
      c_data[i] = -p + (real_T)i;
    }
  } else {
    c_st.site = &fe_emlrtRSI;
    eml_float_colon(&c_st, -p, p, y);
    c_data = y->data;
  }
  i = r->size[0];
  r->size[0] = y->size[1];
  emxEnsureCapacity_real_T(sp, r, i, &ib_emlrtRTEI);
  r_data = r->data;
  loop_ub = y->size[1];
  for (i = 0; i < loop_ub; i++) {
    r_data[i] = c_data[i];
  }
  emxFree_real_T(sp, &y);
  emxInit_real_T(sp, &pp, 2, &rb_emlrtRTEI, true);
  st.site = &le_emlrtRSI;
  repmat(&st, r, pp);
  st.site = &fk_emlrtRSI;
  bsxfun(&st, pp, v, rc);
  rc_data = rc->data;
  emxFree_real_T(sp, &pp);
  i = r->size[0];
  r->size[0] = rc->size[0];
  emxEnsureCapacity_real_T(sp, r, i, &jb_emlrtRTEI);
  r_data = r->data;
  loop_ub = rc->size[0];
  i = c->size[0];
  c->size[0] = rc->size[0];
  emxEnsureCapacity_real_T(sp, c, i, &kb_emlrtRTEI);
  c_data = c->data;
  for (i = 0; i < loop_ub; i++) {
    r_data[i] = rc_data[i];
    c_data[i] = rc_data[i + rc->size[0]];
  }
  st.site = &me_emlrtRSI;
  emxInit_real_T(&st, &varargin_1, 1, &ub_emlrtRTEI, true);
  b_st.site = &me_emlrtRSI;
  b_abs(&b_st, r, varargin_1);
  c_data = varargin_1->data;
  b_st.site = &se_emlrtRSI;
  c_st.site = &te_emlrtRSI;
  d_st.site = &ue_emlrtRSI;
  if (varargin_1->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &h_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &ve_emlrtRSI;
  f_st.site = &we_emlrtRSI;
  last = varargin_1->size[0];
  if (varargin_1->size[0] <= 2) {
    if (varargin_1->size[0] == 1) {
      ex = c_data[0];
    } else if ((c_data[0] < c_data[1]) || (muDoubleScalarIsNaN(c_data[0]) &&
                                           (!muDoubleScalarIsNaN(c_data[1])))) {
      ex = c_data[1];
    } else {
      ex = c_data[0];
    }
  } else {
    g_st.site = &ye_emlrtRSI;
    if (!muDoubleScalarIsNaN(c_data[0])) {
      idx = 1;
    } else {
      idx = 0;
      h_st.site = &af_emlrtRSI;
      if (varargin_1->size[0] > 2147483646) {
        i_st.site = &tc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(c_data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      ex = c_data[0];
    } else {
      g_st.site = &xe_emlrtRSI;
      ex = c_data[idx - 1];
      loop_ub = idx + 1;
      h_st.site = &bf_emlrtRSI;
      if ((idx + 1 <= varargin_1->size[0]) &&
          (varargin_1->size[0] > 2147483646)) {
        i_st.site = &tc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (k = loop_ub; k <= last; k++) {
        d = c_data[k - 1];
        if (ex < d) {
          ex = d;
        }
      }
    }
  }
  M = 2.0 * ex + 1.0;
  st.site = &ne_emlrtRSI;
  b_st.site = &ne_emlrtRSI;
  b_abs(&b_st, c, varargin_1);
  c_data = varargin_1->data;
  b_st.site = &se_emlrtRSI;
  c_st.site = &te_emlrtRSI;
  d_st.site = &ue_emlrtRSI;
  if (varargin_1->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &h_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &ve_emlrtRSI;
  f_st.site = &we_emlrtRSI;
  last = varargin_1->size[0];
  if (varargin_1->size[0] <= 2) {
    if (varargin_1->size[0] == 1) {
      ex = c_data[0];
    } else if ((c_data[0] < c_data[1]) || (muDoubleScalarIsNaN(c_data[0]) &&
                                           (!muDoubleScalarIsNaN(c_data[1])))) {
      ex = c_data[1];
    } else {
      ex = c_data[0];
    }
  } else {
    g_st.site = &ye_emlrtRSI;
    if (!muDoubleScalarIsNaN(c_data[0])) {
      idx = 1;
    } else {
      idx = 0;
      h_st.site = &af_emlrtRSI;
      if (varargin_1->size[0] > 2147483646) {
        i_st.site = &tc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(c_data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      ex = c_data[0];
    } else {
      g_st.site = &xe_emlrtRSI;
      ex = c_data[idx - 1];
      loop_ub = idx + 1;
      h_st.site = &bf_emlrtRSI;
      if ((idx + 1 <= varargin_1->size[0]) &&
          (varargin_1->size[0] > 2147483646)) {
        i_st.site = &tc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (k = loop_ub; k <= last; k++) {
        d = c_data[k - 1];
        if (ex < d) {
          ex = d;
        }
      }
    }
  }
  N = 2.0 * ex + 1.0;
  if (!(M >= 0.0)) {
    emlrtNonNegativeCheckR2012b(M, &b_emlrtDCI, (emlrtConstCTX)sp);
  }
  i = (int32_T)muDoubleScalarFloor(M);
  if (M != i) {
    emlrtIntegerCheckR2012b(M, &emlrtDCI, (emlrtConstCTX)sp);
  }
  if (!(N >= 0.0)) {
    emlrtNonNegativeCheckR2012b(N, &d_emlrtDCI, (emlrtConstCTX)sp);
  }
  i1 = (int32_T)muDoubleScalarFloor(N);
  if (N != i1) {
    emlrtIntegerCheckR2012b(N, &c_emlrtDCI, (emlrtConstCTX)sp);
  }
  k = nhood->size[0] * nhood->size[1];
  nhood->size[0] = (int32_T)M;
  nhood->size[1] = (int32_T)N;
  emxEnsureCapacity_boolean_T(sp, nhood, k, &lb_emlrtRTEI);
  nhood_data = nhood->data;
  if (M != i) {
    emlrtIntegerCheckR2012b(M, &g_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (N != i1) {
    emlrtIntegerCheckR2012b(N, &g_emlrtDCI, (emlrtConstCTX)sp);
  }
  loop_ub_tmp_tmp = (int32_T)M;
  b_loop_ub_tmp_tmp = (int32_T)N;
  loop_ub_tmp = loop_ub_tmp_tmp * b_loop_ub_tmp_tmp;
  for (k = 0; k < loop_ub_tmp; k++) {
    nhood_data[k] = false;
  }
  st.site = &oe_emlrtRSI;
  b_st.site = &oe_emlrtRSI;
  b_abs(&b_st, r, varargin_1);
  c_data = varargin_1->data;
  b_st.site = &se_emlrtRSI;
  c_st.site = &te_emlrtRSI;
  d_st.site = &ue_emlrtRSI;
  if (varargin_1->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &h_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &ve_emlrtRSI;
  f_st.site = &we_emlrtRSI;
  last = varargin_1->size[0];
  if (varargin_1->size[0] <= 2) {
    if (varargin_1->size[0] == 1) {
      ex = c_data[0];
    } else if ((c_data[0] < c_data[1]) || (muDoubleScalarIsNaN(c_data[0]) &&
                                           (!muDoubleScalarIsNaN(c_data[1])))) {
      ex = c_data[1];
    } else {
      ex = c_data[0];
    }
  } else {
    g_st.site = &ye_emlrtRSI;
    if (!muDoubleScalarIsNaN(c_data[0])) {
      idx = 1;
    } else {
      idx = 0;
      h_st.site = &af_emlrtRSI;
      if (varargin_1->size[0] > 2147483646) {
        i_st.site = &tc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(c_data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      ex = c_data[0];
    } else {
      g_st.site = &xe_emlrtRSI;
      ex = c_data[idx - 1];
      loop_ub = idx + 1;
      h_st.site = &bf_emlrtRSI;
      if ((idx + 1 <= varargin_1->size[0]) &&
          (varargin_1->size[0] > 2147483646)) {
        i_st.site = &tc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (k = loop_ub; k <= last; k++) {
        d = c_data[k - 1];
        if (ex < d) {
          ex = d;
        }
      }
    }
  }
  st.site = &oe_emlrtRSI;
  b_st.site = &oe_emlrtRSI;
  b_abs(&b_st, c, varargin_1);
  c_data = varargin_1->data;
  b_st.site = &se_emlrtRSI;
  c_st.site = &te_emlrtRSI;
  d_st.site = &ue_emlrtRSI;
  if (varargin_1->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &h_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &ve_emlrtRSI;
  f_st.site = &we_emlrtRSI;
  last = varargin_1->size[0];
  if (varargin_1->size[0] <= 2) {
    if (varargin_1->size[0] == 1) {
      b_ex = c_data[0];
    } else if ((c_data[0] < c_data[1]) || (muDoubleScalarIsNaN(c_data[0]) &&
                                           (!muDoubleScalarIsNaN(c_data[1])))) {
      b_ex = c_data[1];
    } else {
      b_ex = c_data[0];
    }
  } else {
    g_st.site = &ye_emlrtRSI;
    if (!muDoubleScalarIsNaN(c_data[0])) {
      idx = 1;
    } else {
      idx = 0;
      h_st.site = &af_emlrtRSI;
      if (varargin_1->size[0] > 2147483646) {
        i_st.site = &tc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(c_data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      b_ex = c_data[0];
    } else {
      g_st.site = &xe_emlrtRSI;
      b_ex = c_data[idx - 1];
      loop_ub = idx + 1;
      h_st.site = &bf_emlrtRSI;
      if ((idx + 1 <= varargin_1->size[0]) &&
          (varargin_1->size[0] > 2147483646)) {
        i_st.site = &tc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (k = loop_ub; k <= last; k++) {
        d = c_data[k - 1];
        if (b_ex < d) {
          b_ex = d;
        }
      }
    }
  }
  emxFree_real_T(&f_st, &varargin_1);
  st.site = &oe_emlrtRSI;
  b_M[0] = loop_ub_tmp_tmp;
  b_M[1] = b_loop_ub_tmp_tmp;
  k = r->size[0];
  r->size[0] = rc->size[0];
  emxEnsureCapacity_real_T(&st, r, k, &mb_emlrtRTEI);
  r_data = r->data;
  loop_ub = rc->size[0];
  k = c->size[0];
  c->size[0] = rc->size[0];
  emxEnsureCapacity_real_T(&st, c, k, &nb_emlrtRTEI);
  c_data = c->data;
  last = (loop_ub / 2) << 1;
  idx = last - 2;
  for (k = 0; k <= idx; k += 2) {
    __m128d b_r;
    __m128d r2;
    b_r = _mm_loadu_pd(&rc_data[k]);
    r2 = _mm_set1_pd(1.0);
    _mm_storeu_pd(&r_data[k], _mm_add_pd(_mm_add_pd(b_r, _mm_set1_pd(ex)), r2));
    b_r = _mm_loadu_pd(&rc_data[k + rc->size[0]]);
    _mm_storeu_pd(&c_data[k],
                  _mm_add_pd(_mm_add_pd(b_r, _mm_set1_pd(b_ex)), r2));
  }
  for (k = last; k < loop_ub; k++) {
    r_data[k] = (rc_data[k] + ex) + 1.0;
    c_data[k] = (rc_data[k + rc->size[0]] + b_ex) + 1.0;
  }
  emxInit_int32_T(&st, &r1, 1, &vb_emlrtRTEI);
  b_st.site = &cf_emlrtRSI;
  sub2ind(&b_st, b_M, r, c, r1);
  r3 = r1->data;
  k = r->size[0];
  r->size[0] = r1->size[0];
  emxEnsureCapacity_real_T(&st, r, k, &ob_emlrtRTEI);
  r_data = r->data;
  loop_ub = r1->size[0];
  for (k = 0; k < loop_ub; k++) {
    r_data[k] = r3[k];
  }
  k = r1->size[0];
  r1->size[0] = r->size[0];
  emxEnsureCapacity_int32_T(sp, r1, k, &pb_emlrtRTEI);
  r3 = r1->data;
  loop_ub = r->size[0];
  for (k = 0; k < loop_ub; k++) {
    last = (int32_T)r_data[k];
    if ((last < 1) || (last > loop_ub_tmp)) {
      emlrtDynamicBoundsCheckR2012b(last, 1, loop_ub_tmp, &w_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    r3[k] = last;
  }
  loop_ub = r1->size[0];
  for (k = 0; k < loop_ub; k++) {
    nhood_data[r3[k] - 1] = true;
  }
  emxFree_int32_T(sp, &r1);
  if (loop_ub_tmp_tmp != i) {
    emlrtIntegerCheckR2012b(M, &e_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (b_loop_ub_tmp_tmp != i1) {
    emlrtIntegerCheckR2012b(N, &f_emlrtDCI, (emlrtConstCTX)sp);
  }
  k = height->size[0] * height->size[1];
  height->size[0] = loop_ub_tmp_tmp;
  height->size[1] = b_loop_ub_tmp_tmp;
  emxEnsureCapacity_real_T(sp, height, k, &qb_emlrtRTEI);
  c_data = height->data;
  if (loop_ub_tmp_tmp != i) {
    emlrtIntegerCheckR2012b(M, &h_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (b_loop_ub_tmp_tmp != i1) {
    emlrtIntegerCheckR2012b(N, &h_emlrtDCI, (emlrtConstCTX)sp);
  }
  for (i = 0; i < loop_ub_tmp; i++) {
    c_data[i] = 0.0;
  }
  emxFree_real_T(sp, &c);
  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &rc);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static int32_T div_s32(const emlrtStack *sp, int32_T numerator,
                       int32_T denominator)
{
  int32_T quotient;
  if (denominator == 0) {
    emlrtDivisionByZeroErrorR2012b(NULL, (emlrtConstCTX)sp);
  } else {
    uint32_T tempAbsQuotient;
    uint32_T u;
    if (numerator < 0) {
      tempAbsQuotient = ~(uint32_T)numerator + 1U;
    } else {
      tempAbsQuotient = (uint32_T)numerator;
    }
    if (denominator < 0) {
      u = ~(uint32_T)denominator + 1U;
    } else {
      u = (uint32_T)denominator;
    }
    tempAbsQuotient /= u;
    if ((numerator < 0) != (denominator < 0)) {
      quotient = -(int32_T)tempAbsQuotient;
    } else {
      quotient = (int32_T)tempAbsQuotient;
    }
  }
  return quotient;
}

static void getNhoodAndHeightFromLineParams(const emlrtStack *sp, real_T len,
                                            emxArray_boolean_T *nhood,
                                            emxArray_real_T *height)
{
  __m128d b_r;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emxArray_int32_T *r1;
  emxArray_real_T *idx;
  emxArray_real_T *r;
  emxArray_real_T *varargin_1;
  real_T M;
  real_T N;
  real_T ex;
  real_T x;
  real_T x_tmp;
  real_T *height_data;
  real_T *idx_data;
  real_T *varargin_1_data;
  int32_T b_M[2];
  int32_T a;
  int32_T b_idx;
  int32_T b_loop_ub_tmp_tmp;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T last;
  int32_T loop_ub_tmp;
  int32_T loop_ub_tmp_tmp;
  int32_T *r2;
  boolean_T exitg1;
  boolean_T *nhood_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &idx, 1, &qe_emlrtRTEI, true);
  emxInit_real_T(sp, &r, 1, &te_emlrtRTEI, true);
  x_tmp = (len - 1.0) / 2.0;
  x = muDoubleScalarRound(x_tmp);
  x_tmp *= 0.0;
  st.site = &vi_emlrtRSI;
  intline(&st, -x, x, x_tmp, -x_tmp, idx, r);
  height_data = r->data;
  idx_data = idx->data;
  st.site = &ui_emlrtRSI;
  emxInit_real_T(&st, &varargin_1, 1, &ue_emlrtRTEI, true);
  b_st.site = &ui_emlrtRSI;
  b_abs(&b_st, r, varargin_1);
  varargin_1_data = varargin_1->data;
  b_st.site = &se_emlrtRSI;
  c_st.site = &te_emlrtRSI;
  d_st.site = &ue_emlrtRSI;
  if (varargin_1->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &h_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &ve_emlrtRSI;
  f_st.site = &we_emlrtRSI;
  last = varargin_1->size[0];
  if (varargin_1->size[0] <= 2) {
    if (varargin_1->size[0] == 1) {
      x_tmp = varargin_1_data[0];
    } else if ((varargin_1_data[0] < varargin_1_data[1]) ||
               (muDoubleScalarIsNaN(varargin_1_data[0]) &&
                (!muDoubleScalarIsNaN(varargin_1_data[1])))) {
      x_tmp = varargin_1_data[1];
    } else {
      x_tmp = varargin_1_data[0];
    }
  } else {
    g_st.site = &ye_emlrtRSI;
    if (!muDoubleScalarIsNaN(varargin_1_data[0])) {
      b_idx = 1;
    } else {
      b_idx = 0;
      h_st.site = &af_emlrtRSI;
      if (varargin_1->size[0] > 2147483646) {
        i_st.site = &tc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(varargin_1_data[k - 1])) {
          b_idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (b_idx == 0) {
      x_tmp = varargin_1_data[0];
    } else {
      g_st.site = &xe_emlrtRSI;
      x_tmp = varargin_1_data[b_idx - 1];
      a = b_idx + 1;
      h_st.site = &bf_emlrtRSI;
      if ((b_idx + 1 <= varargin_1->size[0]) &&
          (varargin_1->size[0] > 2147483646)) {
        i_st.site = &tc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (k = a; k <= last; k++) {
        x = varargin_1_data[k - 1];
        if (x_tmp < x) {
          x_tmp = x;
        }
      }
    }
  }
  M = 2.0 * x_tmp + 1.0;
  st.site = &ti_emlrtRSI;
  b_st.site = &ti_emlrtRSI;
  b_abs(&b_st, idx, varargin_1);
  varargin_1_data = varargin_1->data;
  b_st.site = &se_emlrtRSI;
  c_st.site = &te_emlrtRSI;
  d_st.site = &ue_emlrtRSI;
  if (varargin_1->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &h_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &ve_emlrtRSI;
  f_st.site = &we_emlrtRSI;
  last = varargin_1->size[0];
  if (varargin_1->size[0] <= 2) {
    if (varargin_1->size[0] == 1) {
      x_tmp = varargin_1_data[0];
    } else if ((varargin_1_data[0] < varargin_1_data[1]) ||
               (muDoubleScalarIsNaN(varargin_1_data[0]) &&
                (!muDoubleScalarIsNaN(varargin_1_data[1])))) {
      x_tmp = varargin_1_data[1];
    } else {
      x_tmp = varargin_1_data[0];
    }
  } else {
    g_st.site = &ye_emlrtRSI;
    if (!muDoubleScalarIsNaN(varargin_1_data[0])) {
      b_idx = 1;
    } else {
      b_idx = 0;
      h_st.site = &af_emlrtRSI;
      if (varargin_1->size[0] > 2147483646) {
        i_st.site = &tc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(varargin_1_data[k - 1])) {
          b_idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (b_idx == 0) {
      x_tmp = varargin_1_data[0];
    } else {
      g_st.site = &xe_emlrtRSI;
      x_tmp = varargin_1_data[b_idx - 1];
      a = b_idx + 1;
      h_st.site = &bf_emlrtRSI;
      if ((b_idx + 1 <= varargin_1->size[0]) &&
          (varargin_1->size[0] > 2147483646)) {
        i_st.site = &tc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (k = a; k <= last; k++) {
        x = varargin_1_data[k - 1];
        if (x_tmp < x) {
          x_tmp = x;
        }
      }
    }
  }
  N = 2.0 * x_tmp + 1.0;
  if (!(M >= 0.0)) {
    emlrtNonNegativeCheckR2012b(M, &u_emlrtDCI, (emlrtConstCTX)sp);
  }
  i = (int32_T)muDoubleScalarFloor(M);
  if (M != i) {
    emlrtIntegerCheckR2012b(M, &t_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (!(N >= 0.0)) {
    emlrtNonNegativeCheckR2012b(N, &w_emlrtDCI, (emlrtConstCTX)sp);
  }
  i1 = (int32_T)muDoubleScalarFloor(N);
  if (N != i1) {
    emlrtIntegerCheckR2012b(N, &v_emlrtDCI, (emlrtConstCTX)sp);
  }
  k = nhood->size[0] * nhood->size[1];
  nhood->size[0] = (int32_T)M;
  nhood->size[1] = (int32_T)N;
  emxEnsureCapacity_boolean_T(sp, nhood, k, &pe_emlrtRTEI);
  nhood_data = nhood->data;
  if (M != i) {
    emlrtIntegerCheckR2012b(M, &ab_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (N != i1) {
    emlrtIntegerCheckR2012b(N, &ab_emlrtDCI, (emlrtConstCTX)sp);
  }
  loop_ub_tmp_tmp = (int32_T)M;
  b_loop_ub_tmp_tmp = (int32_T)N;
  loop_ub_tmp = loop_ub_tmp_tmp * b_loop_ub_tmp_tmp;
  for (k = 0; k < loop_ub_tmp; k++) {
    nhood_data[k] = false;
  }
  st.site = &si_emlrtRSI;
  b_st.site = &si_emlrtRSI;
  b_abs(&b_st, r, varargin_1);
  varargin_1_data = varargin_1->data;
  b_st.site = &se_emlrtRSI;
  c_st.site = &te_emlrtRSI;
  d_st.site = &ue_emlrtRSI;
  if (varargin_1->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &h_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &ve_emlrtRSI;
  f_st.site = &we_emlrtRSI;
  last = varargin_1->size[0];
  if (varargin_1->size[0] <= 2) {
    if (varargin_1->size[0] == 1) {
      x_tmp = varargin_1_data[0];
    } else if ((varargin_1_data[0] < varargin_1_data[1]) ||
               (muDoubleScalarIsNaN(varargin_1_data[0]) &&
                (!muDoubleScalarIsNaN(varargin_1_data[1])))) {
      x_tmp = varargin_1_data[1];
    } else {
      x_tmp = varargin_1_data[0];
    }
  } else {
    g_st.site = &ye_emlrtRSI;
    if (!muDoubleScalarIsNaN(varargin_1_data[0])) {
      b_idx = 1;
    } else {
      b_idx = 0;
      h_st.site = &af_emlrtRSI;
      if (varargin_1->size[0] > 2147483646) {
        i_st.site = &tc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(varargin_1_data[k - 1])) {
          b_idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (b_idx == 0) {
      x_tmp = varargin_1_data[0];
    } else {
      g_st.site = &xe_emlrtRSI;
      x_tmp = varargin_1_data[b_idx - 1];
      a = b_idx + 1;
      h_st.site = &bf_emlrtRSI;
      if ((b_idx + 1 <= varargin_1->size[0]) &&
          (varargin_1->size[0] > 2147483646)) {
        i_st.site = &tc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (k = a; k <= last; k++) {
        x = varargin_1_data[k - 1];
        if (x_tmp < x) {
          x_tmp = x;
        }
      }
    }
  }
  st.site = &si_emlrtRSI;
  b_st.site = &si_emlrtRSI;
  b_abs(&b_st, idx, varargin_1);
  varargin_1_data = varargin_1->data;
  b_st.site = &se_emlrtRSI;
  c_st.site = &te_emlrtRSI;
  d_st.site = &ue_emlrtRSI;
  if (varargin_1->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &h_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &ve_emlrtRSI;
  f_st.site = &we_emlrtRSI;
  last = varargin_1->size[0];
  if (varargin_1->size[0] <= 2) {
    if (varargin_1->size[0] == 1) {
      ex = varargin_1_data[0];
    } else if ((varargin_1_data[0] < varargin_1_data[1]) ||
               (muDoubleScalarIsNaN(varargin_1_data[0]) &&
                (!muDoubleScalarIsNaN(varargin_1_data[1])))) {
      ex = varargin_1_data[1];
    } else {
      ex = varargin_1_data[0];
    }
  } else {
    g_st.site = &ye_emlrtRSI;
    if (!muDoubleScalarIsNaN(varargin_1_data[0])) {
      b_idx = 1;
    } else {
      b_idx = 0;
      h_st.site = &af_emlrtRSI;
      if (varargin_1->size[0] > 2147483646) {
        i_st.site = &tc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(varargin_1_data[k - 1])) {
          b_idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (b_idx == 0) {
      ex = varargin_1_data[0];
    } else {
      g_st.site = &xe_emlrtRSI;
      ex = varargin_1_data[b_idx - 1];
      a = b_idx + 1;
      h_st.site = &bf_emlrtRSI;
      if ((b_idx + 1 <= varargin_1->size[0]) &&
          (varargin_1->size[0] > 2147483646)) {
        i_st.site = &tc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (k = a; k <= last; k++) {
        x = varargin_1_data[k - 1];
        if (ex < x) {
          ex = x;
        }
      }
    }
  }
  emxFree_real_T(&f_st, &varargin_1);
  st.site = &si_emlrtRSI;
  b_M[0] = loop_ub_tmp_tmp;
  b_M[1] = b_loop_ub_tmp_tmp;
  a = r->size[0];
  last = (a / 2) << 1;
  b_idx = last - 2;
  for (k = 0; k <= b_idx; k += 2) {
    b_r = _mm_loadu_pd(&height_data[k]);
    _mm_storeu_pd(
        &height_data[k],
        _mm_add_pd(_mm_add_pd(b_r, _mm_set1_pd(x_tmp)), _mm_set1_pd(1.0)));
  }
  for (k = last; k < a; k++) {
    height_data[k] = (height_data[k] + x_tmp) + 1.0;
  }
  a = idx->size[0];
  last = (a / 2) << 1;
  b_idx = last - 2;
  for (k = 0; k <= b_idx; k += 2) {
    b_r = _mm_loadu_pd(&idx_data[k]);
    _mm_storeu_pd(&idx_data[k], _mm_add_pd(_mm_add_pd(b_r, _mm_set1_pd(ex)),
                                           _mm_set1_pd(1.0)));
  }
  for (k = last; k < a; k++) {
    idx_data[k] = (idx_data[k] + ex) + 1.0;
  }
  emxInit_int32_T(&st, &r1, 1, &vb_emlrtRTEI);
  b_st.site = &cf_emlrtRSI;
  sub2ind(&b_st, b_M, r, idx, r1);
  r2 = r1->data;
  k = idx->size[0];
  idx->size[0] = r1->size[0];
  emxEnsureCapacity_real_T(&st, idx, k, &qe_emlrtRTEI);
  idx_data = idx->data;
  a = r1->size[0];
  for (k = 0; k < a; k++) {
    idx_data[k] = r2[k];
  }
  k = r1->size[0];
  r1->size[0] = idx->size[0];
  emxEnsureCapacity_int32_T(sp, r1, k, &re_emlrtRTEI);
  r2 = r1->data;
  a = idx->size[0];
  for (k = 0; k < a; k++) {
    last = (int32_T)idx_data[k];
    if ((last < 1) || (last > loop_ub_tmp)) {
      emlrtDynamicBoundsCheckR2012b(last, 1, loop_ub_tmp, &qc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    r2[k] = last;
  }
  a = r1->size[0];
  for (k = 0; k < a; k++) {
    nhood_data[r2[k] - 1] = true;
  }
  emxFree_int32_T(sp, &r1);
  if (loop_ub_tmp_tmp != i) {
    emlrtIntegerCheckR2012b(M, &x_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (b_loop_ub_tmp_tmp != i1) {
    emlrtIntegerCheckR2012b(N, &y_emlrtDCI, (emlrtConstCTX)sp);
  }
  k = height->size[0] * height->size[1];
  height->size[0] = loop_ub_tmp_tmp;
  height->size[1] = b_loop_ub_tmp_tmp;
  emxEnsureCapacity_real_T(sp, height, k, &se_emlrtRTEI);
  height_data = height->data;
  if (loop_ub_tmp_tmp != i) {
    emlrtIntegerCheckR2012b(M, &bb_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (b_loop_ub_tmp_tmp != i1) {
    emlrtIntegerCheckR2012b(N, &bb_emlrtDCI, (emlrtConstCTX)sp);
  }
  for (i = 0; i < loop_ub_tmp; i++) {
    height_data[i] = 0.0;
  }
  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &idx);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void getneighborsImpl(const emlrtStack *sp,
                             const emxArray_boolean_T *nhood,
                             const emxArray_real_T *height,
                             emxArray_real_T *offsets)
{
  __m128i r;
  __m128i r1;
  cell_wrap_38 subs[3];
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_int32_T *a;
  emxArray_int32_T *idx;
  emxArray_int32_T *ii;
  emxArray_int32_T *varargout_6;
  emxArray_int32_T *vk;
  emxArray_real_T *offsets_;
  real_T *offsets__data;
  real_T *offsets_data;
  int32_T iv1[4];
  int32_T iv2[4];
  int32_T iv3[4];
  int32_T center[3];
  int32_T acoef;
  int32_T b_idx;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T nx;
  int32_T *idx_data;
  int32_T *ii_data;
  int32_T *varargout_6_data;
  uint32_T size_nhood_idx_0;
  const boolean_T *nhood_data;
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  nhood_data = nhood->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_int32_T(sp, &idx, 1, &wd_emlrtRTEI);
  emxInit_int32_T(sp, &ii, 1, &he_emlrtRTEI);
  emxInit_int32_T(sp, &varargout_6, 1, &ie_emlrtRTEI);
  emxInit_int32_T(sp, &vk, 1, &yd_emlrtRTEI);
  if (nhood->size[0] == 1) {
    st.site = &xg_emlrtRSI;
    b_st.site = &yg_emlrtRSI;
    nx = nhood->size[1];
    c_st.site = &ah_emlrtRSI;
    b_idx = 0;
    i = ii->size[0];
    ii->size[0] = nhood->size[1];
    emxEnsureCapacity_int32_T(&c_st, ii, i, &ud_emlrtRTEI);
    ii_data = ii->data;
    d_st.site = &bh_emlrtRSI;
    if (nhood->size[1] > 2147483646) {
      e_st.site = &tc_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }
    acoef = 0;
    exitg1 = false;
    while ((!exitg1) && (acoef <= nx - 1)) {
      if (nhood_data[acoef]) {
        b_idx++;
        ii_data[b_idx - 1] = acoef + 1;
        if (b_idx >= nx) {
          exitg1 = true;
        } else {
          acoef++;
        }
      } else {
        acoef++;
      }
    }
    if (b_idx > nhood->size[1]) {
      emlrtErrorWithMessageIdR2018a(&c_st, &s_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (nhood->size[1] == 1) {
      if (b_idx == 0) {
        ii->size[0] = 0;
      }
    } else {
      int32_T iv[2];
      if (b_idx < 1) {
        i = 0;
      } else {
        i = b_idx;
      }
      iv[0] = 1;
      iv[1] = i;
      d_st.site = &ch_emlrtRSI;
      indexShapeCheck(&d_st, ii->size[0], iv);
      i1 = ii->size[0];
      ii->size[0] = i;
      emxEnsureCapacity_int32_T(&c_st, ii, i1, &vd_emlrtRTEI);
      ii_data = ii->data;
    }
    i = idx->size[0];
    idx->size[0] = ii->size[0];
    emxEnsureCapacity_int32_T(&st, idx, i, &wd_emlrtRTEI);
    idx_data = idx->data;
    acoef = ii->size[0];
    for (i = 0; i < acoef; i++) {
      idx_data[i] = ii_data[i];
    }
  } else {
    st.site = &wg_emlrtRSI;
    b_st.site = &yg_emlrtRSI;
    nx = nhood->size[0] * nhood->size[1];
    c_st.site = &ah_emlrtRSI;
    b_idx = 0;
    i = ii->size[0];
    ii->size[0] = nx;
    emxEnsureCapacity_int32_T(&c_st, ii, i, &ud_emlrtRTEI);
    ii_data = ii->data;
    d_st.site = &bh_emlrtRSI;
    if (nx > 2147483646) {
      e_st.site = &tc_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }
    acoef = 0;
    exitg1 = false;
    while ((!exitg1) && (acoef <= nx - 1)) {
      if (nhood_data[acoef]) {
        b_idx++;
        ii_data[b_idx - 1] = acoef + 1;
        if (b_idx >= nx) {
          exitg1 = true;
        } else {
          acoef++;
        }
      } else {
        acoef++;
      }
    }
    if (b_idx > nx) {
      emlrtErrorWithMessageIdR2018a(&c_st, &s_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (nx == 1) {
      if (b_idx == 0) {
        ii->size[0] = 0;
      }
    } else {
      int32_T iv[2];
      if (b_idx < 1) {
        i = 0;
      } else {
        i = b_idx;
      }
      iv[0] = 1;
      iv[1] = i;
      d_st.site = &ch_emlrtRSI;
      indexShapeCheck(&d_st, ii->size[0], iv);
      i1 = ii->size[0];
      ii->size[0] = i;
      emxEnsureCapacity_int32_T(&c_st, ii, i1, &vd_emlrtRTEI);
      ii_data = ii->data;
    }
    if (nhood->size[0] == 1) {
      p = (ii->size[0] == 1);
      if ((!p) && (nhood->size[1] >= 2)) {
        c_st.site = &eh_emlrtRSI;
        c_warning(&c_st);
      }
    }
    i = idx->size[0];
    idx->size[0] = ii->size[0];
    emxEnsureCapacity_int32_T(&st, idx, i, &xd_emlrtRTEI);
    idx_data = idx->data;
    acoef = ii->size[0];
    for (i = 0; i < acoef; i++) {
      idx_data[i] = ii_data[i];
    }
  }
  acoef = nhood->size[0] * nhood->size[1] - 1;
  for (b_idx = 0; b_idx <= acoef; b_idx++) {
    if (nhood_data[b_idx]) {
      i = height->size[0] * height->size[1] - 1;
      if (b_idx > i) {
        emlrtDynamicBoundsCheckR2012b(b_idx, 0, i, &hc_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
    }
  }
  size_nhood_idx_0 = (uint32_T)nhood->size[0];
  center[0] =
      (int32_T)muDoubleScalarFloor(((real_T)nhood->size[0] + 1.0) / 2.0);
  center[1] =
      (int32_T)muDoubleScalarFloor(((real_T)nhood->size[1] + 1.0) / 2.0);
  center[2] = 1;
  emxInitMatrix_cell_wrap_38(sp, subs, &fe_emlrtRTEI);
  st.site = &vg_emlrtRSI;
  b_st.site = &fh_emlrtRSI;
  nx = nhood->size[0] * nhood->size[1];
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= ii->size[0] - 1)) {
    p = (ii_data[k] <= nx);
    if (!p) {
      emlrtErrorWithMessageIdR2018a(&b_st, &t_emlrtRTEI,
                                    "Coder:MATLAB:ind2sub_IndexOutOfRange",
                                    "Coder:MATLAB:ind2sub_IndexOutOfRange", 0);
    } else {
      k++;
    }
  }
  acoef = ii->size[0];
  k = (acoef / 4) << 2;
  b_idx = k - 4;
  for (i = 0; i <= b_idx; i += 4) {
    r = _mm_loadu_si128((const __m128i *)&ii_data[i]);
    _mm_storeu_si128((__m128i *)&ii_data[i],
                     _mm_sub_epi32(r, _mm_set1_epi32(1)));
  }
  for (i = k; i < acoef; i++) {
    ii_data[i]--;
  }
  i = vk->size[0];
  vk->size[0] = ii->size[0];
  emxEnsureCapacity_int32_T(&b_st, vk, i, &yd_emlrtRTEI);
  idx_data = vk->data;
  acoef = ii->size[0];
  for (i = 0; i < acoef; i++) {
    c_st.site = &ek_emlrtRSI;
    idx_data[i] = div_s32(&c_st, ii_data[i], nx);
  }
  i = varargout_6->size[0];
  varargout_6->size[0] = vk->size[0];
  emxEnsureCapacity_int32_T(&b_st, varargout_6, i, &ae_emlrtRTEI);
  varargout_6_data = varargout_6->data;
  acoef = vk->size[0];
  k = (acoef / 4) << 2;
  b_idx = k - 4;
  for (i = 0; i <= b_idx; i += 4) {
    r = _mm_loadu_si128((const __m128i *)&idx_data[i]);
    _mm_storeu_si128((__m128i *)&varargout_6_data[i],
                     _mm_add_epi32(r, _mm_set1_epi32(1)));
    iv1[0] = idx_data[i] * nx;
    iv1[1] = idx_data[i + 1] * nx;
    iv1[2] = idx_data[i + 2] * nx;
    iv1[3] = idx_data[i + 3] * nx;
    r = _mm_loadu_si128((const __m128i *)&ii_data[i]);
    r1 = _mm_loadu_si128((const __m128i *)&iv1[0]);
    _mm_storeu_si128((__m128i *)&ii_data[i], _mm_sub_epi32(r, r1));
  }
  for (i = k; i < acoef; i++) {
    i1 = idx_data[i];
    varargout_6_data[i] = i1 + 1;
    ii_data[i] -= i1 * nx;
  }
  i = vk->size[0];
  vk->size[0] = ii->size[0];
  emxEnsureCapacity_int32_T(&b_st, vk, i, &yd_emlrtRTEI);
  idx_data = vk->data;
  acoef = ii->size[0];
  k = (acoef / 4) << 2;
  b_idx = k - 4;
  for (i = 0; i <= b_idx; i += 4) {
    c_st.site = &ek_emlrtRSI;
    iv2[0] = div_s32(&c_st, ii_data[i], (int32_T)size_nhood_idx_0);
    c_st.site = &ek_emlrtRSI;
    iv2[1] = div_s32(&c_st, ii_data[i + 1], (int32_T)size_nhood_idx_0);
    c_st.site = &ek_emlrtRSI;
    iv2[2] = div_s32(&c_st, ii_data[i + 2], (int32_T)size_nhood_idx_0);
    c_st.site = &ek_emlrtRSI;
    iv2[3] = div_s32(&c_st, ii_data[i + 3], (int32_T)size_nhood_idx_0);
    r = _mm_loadu_si128((const __m128i *)&iv2[0]);
    _mm_storeu_si128((__m128i *)&idx_data[i], r);
    iv3[0] = iv2[0] * (int32_T)size_nhood_idx_0;
    iv3[1] = iv2[1] * (int32_T)size_nhood_idx_0;
    iv3[2] = iv2[2] * (int32_T)size_nhood_idx_0;
    iv3[3] = iv2[3] * (int32_T)size_nhood_idx_0;
    r = _mm_loadu_si128((const __m128i *)&ii_data[i]);
    r1 = _mm_loadu_si128((const __m128i *)&iv3[0]);
    _mm_storeu_si128((__m128i *)&ii_data[i], _mm_sub_epi32(r, r1));
  }
  for (i = k; i < acoef; i++) {
    i1 = ii_data[i];
    c_st.site = &ek_emlrtRSI;
    b_idx = div_s32(&c_st, i1, (int32_T)size_nhood_idx_0);
    idx_data[i] = b_idx;
    i1 -= b_idx * (int32_T)size_nhood_idx_0;
    ii_data[i] = i1;
  }
  i = subs[0].f1->size[0];
  subs[0].f1->size[0] = ii->size[0];
  emxEnsureCapacity_real_T(&st, subs[0].f1, i, &be_emlrtRTEI);
  acoef = ii->size[0];
  i = subs[1].f1->size[0];
  subs[1].f1->size[0] = vk->size[0];
  emxEnsureCapacity_real_T(&st, subs[1].f1, i, &be_emlrtRTEI);
  i = subs[2].f1->size[0];
  subs[2].f1->size[0] = varargout_6->size[0];
  emxEnsureCapacity_real_T(&st, subs[2].f1, i, &be_emlrtRTEI);
  for (i = 0; i < acoef; i++) {
    subs[0].f1->data[i] = ii_data[i] + 1;
    subs[1].f1->data[i] = idx_data[i] + 1;
    subs[2].f1->data[i] = varargout_6_data[i];
  }
  st.site = &ug_emlrtRSI;
  b_st.site = &gh_emlrtRSI;
  c_st.site = &hh_emlrtRSI;
  d_st.site = &ih_emlrtRSI;
  d_st.site = &ih_emlrtRSI;
  if (subs[1].f1->size[0] != subs[0].f1->size[0]) {
    emlrtErrorWithMessageIdR2018a(&d_st, &u_emlrtRTEI,
                                  "Coder:builtins:CellCatNotRectangular",
                                  "Coder:builtins:CellCatNotRectangular", 0);
  }
  d_st.site = &ih_emlrtRSI;
  if (subs[2].f1->size[0] != subs[0].f1->size[0]) {
    emlrtErrorWithMessageIdR2018a(&d_st, &u_emlrtRTEI,
                                  "Coder:builtins:CellCatNotRectangular",
                                  "Coder:builtins:CellCatNotRectangular", 0);
  }
  emxInit_real_T(&b_st, &offsets_, 2, &ge_emlrtRTEI, true);
  i = offsets_->size[0] * offsets_->size[1];
  offsets_->size[0] = subs[0].f1->size[0];
  offsets_->size[1] = 3;
  emxEnsureCapacity_real_T(&b_st, offsets_, i, &ce_emlrtRTEI);
  offsets__data = offsets_->data;
  acoef = 1;
  for (b_idx = 0; b_idx < 3; b_idx++) {
    i = subs[b_idx].f1->size[0] - 1;
    for (nx = 0; nx <= i; nx++) {
      offsets__data[(acoef + nx) - 1] = subs[b_idx].f1->data[nx];
    }
    if (subs[b_idx].f1->size[0] - 1 >= 0) {
      acoef += subs[b_idx].f1->size[0];
    }
  }
  emxFreeMatrix_cell_wrap_38(&st, subs);
  st.site = &tg_emlrtRSI;
  nx = offsets_->size[0] * 3;
  b_st.site = &jh_emlrtRSI;
  c_st.site = &kh_emlrtRSI;
  acoef = offsets_->size[0];
  if (offsets_->size[0] < 3) {
    acoef = 3;
  }
  if (idx->size[0] > muIntScalarMax_sint32(nx, acoef)) {
    emlrtErrorWithMessageIdR2018a(&st, &r_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if (idx->size[0] * 3 != nx) {
    emlrtErrorWithMessageIdR2018a(
        &st, &q_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  emxInit_int32_T(sp, &a, 2, &de_emlrtRTEI);
  i = a->size[0] * a->size[1];
  a->size[0] = idx->size[0];
  a->size[1] = 3;
  emxEnsureCapacity_int32_T(sp, a, i, &de_emlrtRTEI);
  idx_data = a->data;
  acoef = idx->size[0] * 3;
  for (i = 0; i < acoef; i++) {
    idx_data[i] = (int32_T)offsets__data[i];
  }
  i = offsets_->size[0] * offsets_->size[1];
  offsets_->size[0] = idx->size[0];
  offsets_->size[1] = 3;
  emxEnsureCapacity_real_T(sp, offsets_, i, &xb_emlrtRTEI);
  offsets__data = offsets_->data;
  if (idx->size[0] != 0) {
    acoef = (a->size[0] != 1);
    for (k = 0; k < 3; k++) {
      i = offsets_->size[0] - 1;
      for (b_idx = 0; b_idx <= i; b_idx++) {
        offsets__data[b_idx + offsets_->size[0] * k] =
            (real_T)idx_data[acoef * b_idx + a->size[0] * k] -
            (real_T)center[k];
      }
    }
  }
  emxFree_int32_T(sp, &a);
  emxFree_int32_T(sp, &idx);
  i = offsets->size[0] * offsets->size[1];
  offsets->size[0] = offsets_->size[0];
  offsets->size[1] = 2;
  emxEnsureCapacity_real_T(sp, offsets, i, &ee_emlrtRTEI);
  offsets_data = offsets->data;
  acoef = offsets_->size[0];
  for (i = 0; i < 2; i++) {
    for (i1 = 0; i1 < acoef; i1++) {
      offsets_data[i1 + offsets->size[0] * i] =
          offsets__data[i1 + offsets_->size[0] * i];
    }
  }
  emxFree_real_T(sp, &offsets_);
  emxFree_int32_T(sp, &vk);
  emxFree_int32_T(sp, &varargout_6);
  emxFree_int32_T(sp, &ii);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void
strel_decomposeImpl(const emlrtStack *sp,
                    const c_emxArray_images_internal_code *obj_StrelArray,
                    const emxArray_cell_wrap_1 *obj_DecomposedStrelArray,
                    c_emxArray_images_internal_code *seq_StrelArray,
                    emxArray_cell_wrap_1 *seq_DecomposedStrelArray)
{
  c_emxArray_images_internal_code *expl_temp;
  const c_images_internal_coder_strel_S *obj_StrelArray_data;
  c_images_internal_coder_strel_S *seq_StrelArray_data;
  const cell_wrap_1 *obj_DecomposedStrelArray_data;
  cell_wrap_1 *seq_DecomposedStrelArray_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_cell_wrap_1 *b_expl_temp;
  emxArray_real_T b_height_tmp_data;
  emxArray_real_T c_height_tmp_data;
  emxArray_real_T d_height_tmp_data;
  emxArray_real_T height_tmp_data;
  int32_T i = 0;
  int32_T i1 = 0;
  int32_T i2 = 0;
  int32_T i3;
  int32_T i7 = 0;
  int32_T len;
  int32_T n;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  obj_DecomposedStrelArray_data = obj_DecomposedStrelArray->data;
  obj_StrelArray_data = obj_StrelArray->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &eg_emlrtRSI;
  b_st.site = &fg_emlrtRSI;
  f_emxInit_images_internal_coder(&b_st, &expl_temp, &hd_emlrtRTEI, true);
  emxInit_cell_wrap_1(&b_st, &b_expl_temp, &hd_emlrtRTEI);
  c_st.site = &ef_emlrtRSI;
  strel_strel(&c_st, expl_temp, b_expl_temp);
  emxFree_cell_wrap_1(&b_st, &b_expl_temp);
  c_emxFree_images_internal_coder(&b_st, &expl_temp);
  b_st.site = &gg_emlrtRSI;
  c_st.site = &ud_emlrtRSI;
  d_st.site = &yd_emlrtRSI;
  height_tmp_data.size = &i;
  height_tmp_data.allocatedSize = 0;
  height_tmp_data.numDimensions = 1;
  height_tmp_data.canFreeData = false;
  e_st.site = &ae_emlrtRSI;
  any(&e_st, &height_tmp_data);
  c_st.site = &ud_emlrtRSI;
  d_st.site = &de_emlrtRSI;
  c_st.site = &vd_emlrtRSI;
  d_st.site = &yd_emlrtRSI;
  b_height_tmp_data.size = &i1;
  b_height_tmp_data.allocatedSize = 0;
  b_height_tmp_data.numDimensions = 1;
  b_height_tmp_data.canFreeData = false;
  e_st.site = &ae_emlrtRSI;
  any(&e_st, &b_height_tmp_data);
  c_st.site = &vd_emlrtRSI;
  d_st.site = &de_emlrtRSI;
  c_st.site = &wd_emlrtRSI;
  d_st.site = &de_emlrtRSI;
  c_st.site = &xd_emlrtRSI;
  d_st.site = &yd_emlrtRSI;
  c_height_tmp_data.size = &i2;
  c_height_tmp_data.allocatedSize = 0;
  c_height_tmp_data.numDimensions = 1;
  c_height_tmp_data.canFreeData = false;
  e_st.site = &ae_emlrtRSI;
  any(&e_st, &c_height_tmp_data);
  c_st.site = &xd_emlrtRSI;
  d_st.site = &de_emlrtRSI;
  seq_StrelArray->size[0] = 1;
  seq_StrelArray->size[1] = 0;
  seq_DecomposedStrelArray->size[0] = 1;
  seq_DecomposedStrelArray->size[1] = 0;
  i3 = obj_StrelArray->size[1];
  for (len = 0; len < i3; len++) {
    int32_T i4;
    i4 = obj_DecomposedStrelArray->size[1] - 1;
    if (len > obj_DecomposedStrelArray->size[1] - 1) {
      emlrtDynamicBoundsCheckR2012b(
          len, 0, obj_DecomposedStrelArray->size[1] - 1, &pb_emlrtBCI, &st);
    }
    if (obj_DecomposedStrelArray_data[len].f1->size[1] == 0) {
      int32_T seq_StrelArray_tmp;
      if (len > obj_StrelArray->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(len, 0, obj_StrelArray->size[1] - 1,
                                      &rb_emlrtBCI, &st);
      }
      seq_StrelArray_tmp = seq_StrelArray->size[1] + 1;
      i4 = seq_StrelArray->size[0] * seq_StrelArray->size[1];
      seq_StrelArray->size[0] = 1;
      seq_StrelArray->size[1]++;
      d_emxEnsureCapacity_images_inte(&st, seq_StrelArray, i4, &bd_emlrtRTEI);
      seq_StrelArray_data = seq_StrelArray->data;
      c_emxCopyStruct_images_internal(
          &st, &seq_StrelArray_data[seq_StrelArray_tmp - 1],
          &obj_StrelArray_data[len], &cd_emlrtRTEI);
      i4 =
          seq_DecomposedStrelArray->size[0] * seq_DecomposedStrelArray->size[1];
      seq_DecomposedStrelArray->size[0] = 1;
      seq_DecomposedStrelArray->size[1]++;
      emxEnsureCapacity_cell_wrap_11(&st, seq_DecomposedStrelArray, i4,
                                     &bd_emlrtRTEI);
      seq_DecomposedStrelArray_data = seq_DecomposedStrelArray->data;
      i4 = seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1->size[0] *
           seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1->size[1];
      seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1->size[0] = 1;
      d_emxEnsureCapacity_images_inte(
          &st, seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1, i4,
          &dd_emlrtRTEI);
      seq_DecomposedStrelArray_data[seq_DecomposedStrelArray->size[1] - 1]
          .f1->size[1] = 0;
      if (len > obj_StrelArray->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(len, 0, obj_StrelArray->size[1] - 1,
                                      &ub_emlrtBCI, &st);
      }
    } else {
      int32_T i5;
      if (len > obj_DecomposedStrelArray->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(
            len, 0, obj_DecomposedStrelArray->size[1] - 1, &qb_emlrtBCI, &st);
      }
      i5 = obj_DecomposedStrelArray_data[len].f1->size[1];
      for (n = 0; n < i5; n++) {
        int32_T i6;
        int32_T seq_StrelArray_tmp;
        if (len > i4) {
          emlrtDynamicBoundsCheckR2012b(len, 0, i4, &sb_emlrtBCI, &st);
        }
        i6 = obj_DecomposedStrelArray_data[len].f1->size[1] - 1;
        if (n > i6) {
          emlrtDynamicBoundsCheckR2012b(n, 0, i6, &tb_emlrtBCI, &st);
        }
        seq_StrelArray_tmp = seq_StrelArray->size[1] + 1;
        i6 = seq_StrelArray->size[0] * seq_StrelArray->size[1];
        seq_StrelArray->size[0] = 1;
        seq_StrelArray->size[1]++;
        d_emxEnsureCapacity_images_inte(&st, seq_StrelArray, i6, &bd_emlrtRTEI);
        seq_StrelArray_data = seq_StrelArray->data;
        c_emxCopyStruct_images_internal(
            &st, &seq_StrelArray_data[seq_StrelArray_tmp - 1],
            &obj_DecomposedStrelArray_data[len].f1->data[n], &ed_emlrtRTEI);
        i6 = seq_DecomposedStrelArray->size[0] *
             seq_DecomposedStrelArray->size[1];
        seq_DecomposedStrelArray->size[0] = 1;
        seq_DecomposedStrelArray->size[1]++;
        emxEnsureCapacity_cell_wrap_11(&st, seq_DecomposedStrelArray, i6,
                                       &bd_emlrtRTEI);
        seq_DecomposedStrelArray_data = seq_DecomposedStrelArray->data;
        i6 = seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1->size[0] *
             seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1->size[1];
        seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1->size[0] = 1;
        d_emxEnsureCapacity_images_inte(
            &st, seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1, i6,
            &gd_emlrtRTEI);
        seq_DecomposedStrelArray_data[seq_DecomposedStrelArray->size[1] - 1]
            .f1->size[1] = 0;
        if (len > obj_StrelArray->size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(len, 0, obj_StrelArray->size[1] - 1,
                                        &vb_emlrtBCI, &st);
        }
      }
    }
    b_st.site = &hg_emlrtRSI;
    c_st.site = &yd_emlrtRSI;
    d_height_tmp_data.size = &i7;
    d_height_tmp_data.allocatedSize = 0;
    d_height_tmp_data.numDimensions = 1;
    d_height_tmp_data.canFreeData = false;
    d_st.site = &ae_emlrtRSI;
    any(&d_st, &d_height_tmp_data);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void strel_strel(const emlrtStack *sp,
                        c_emxArray_images_internal_code *obj_StrelArray,
                        emxArray_cell_wrap_1 *obj_DecomposedStrelArray)
{
  c_images_internal_coder_strel_S *obj_StrelArray_data;
  cell_wrap_1 *obj_DecomposedStrelArray_data;
  d_emxArray_images_internal_code strelArray;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  emxArray_cell_wrap_1_1x1 decomposedStrelArray;
  emxArray_real_T b_height_tmp_data;
  emxArray_real_T c_height_tmp_data;
  emxArray_real_T d_height_tmp_data;
  emxArray_real_T height_tmp_data;
  int32_T i = 0;
  int32_T i1 = 0;
  int32_T i2 = 0;
  int32_T i3 = 0;
  int32_T i4;
  boolean_T t0_Flat;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &uc_emlrtRSI;
  b_st.site = &ff_emlrtRSI;
  c_st.site = &gf_emlrtRSI;
  d_st.site = &hf_emlrtRSI;
  e_st.site = &ud_emlrtRSI;
  f_st.site = &yd_emlrtRSI;
  height_tmp_data.size = &i;
  height_tmp_data.allocatedSize = 0;
  height_tmp_data.numDimensions = 1;
  height_tmp_data.canFreeData = false;
  g_st.site = &ae_emlrtRSI;
  any(&g_st, &height_tmp_data);
  e_st.site = &ud_emlrtRSI;
  f_st.site = &de_emlrtRSI;
  e_st.site = &vd_emlrtRSI;
  f_st.site = &yd_emlrtRSI;
  b_height_tmp_data.size = &i1;
  b_height_tmp_data.allocatedSize = 0;
  b_height_tmp_data.numDimensions = 1;
  b_height_tmp_data.canFreeData = false;
  g_st.site = &ae_emlrtRSI;
  any(&g_st, &b_height_tmp_data);
  e_st.site = &vd_emlrtRSI;
  f_st.site = &de_emlrtRSI;
  e_st.site = &wd_emlrtRSI;
  f_st.site = &de_emlrtRSI;
  e_st.site = &xd_emlrtRSI;
  f_st.site = &yd_emlrtRSI;
  c_height_tmp_data.size = &i2;
  c_height_tmp_data.allocatedSize = 0;
  c_height_tmp_data.numDimensions = 1;
  c_height_tmp_data.canFreeData = false;
  g_st.site = &ae_emlrtRSI;
  any(&g_st, &c_height_tmp_data);
  e_st.site = &xd_emlrtRSI;
  f_st.site = &de_emlrtRSI;
  d_st.site = &if_emlrtRSI;
  e_st.site = &yd_emlrtRSI;
  d_height_tmp_data.size = &i3;
  d_height_tmp_data.allocatedSize = 0;
  d_height_tmp_data.numDimensions = 1;
  d_height_tmp_data.canFreeData = false;
  f_st.site = &df_emlrtRSI;
  t0_Flat = !any(&f_st, &d_height_tmp_data);
  c_emxInit_images_internal_coder(&strelArray);
  i4 = strelArray.size[0] * strelArray.size[1];
  strelArray.size[0] = 1;
  strelArray.size[1] = 1;
  c_emxEnsureCapacity_images_inte(&c_st, &strelArray.data[0], strelArray.size,
                                  i4, &dc_emlrtRTEI);
  strelArray.data[0].nhood->size[0] = 0;
  strelArray.data[0].nhood->size[1] = 0;
  strelArray.data[0].nhood->size[2] = 1;
  strelArray.data[0].height->size[0] = 0;
  strelArray.data[0].height->size[1] = 0;
  strelArray.data[0].height->size[2] = 1;
  strelArray.data[0].Flat = t0_Flat;
  emxInit_cell_wrap_1_1x1(&decomposedStrelArray);
  i4 = decomposedStrelArray.size[0] * decomposedStrelArray.size[1];
  decomposedStrelArray.size[0] = 1;
  decomposedStrelArray.size[1] = 1;
  emxEnsureCapacity_cell_wrap_1(&c_st, &decomposedStrelArray.data[0],
                                decomposedStrelArray.size, i4, &dc_emlrtRTEI);
  decomposedStrelArray.data[0].f1->size[0] = 1;
  decomposedStrelArray.data[0].f1->size[1] = 0;
  i4 = obj_StrelArray->size[0] * obj_StrelArray->size[1];
  obj_StrelArray->size[0] = 1;
  obj_StrelArray->size[1] = 1;
  d_emxEnsureCapacity_images_inte(&c_st, obj_StrelArray, i4, &ec_emlrtRTEI);
  obj_StrelArray_data = obj_StrelArray->data;
  c_emxCopyStruct_images_internal(&c_st, &obj_StrelArray_data[0],
                                  &strelArray.data[0], &ec_emlrtRTEI);
  d_emxFree_images_internal_coder(&c_st, &strelArray);
  i4 = obj_DecomposedStrelArray->size[0] * obj_DecomposedStrelArray->size[1];
  obj_DecomposedStrelArray->size[0] = 1;
  obj_DecomposedStrelArray->size[1] = 1;
  emxEnsureCapacity_cell_wrap_11(&c_st, obj_DecomposedStrelArray, i4,
                                 &ec_emlrtRTEI);
  obj_DecomposedStrelArray_data = obj_DecomposedStrelArray->data;
  emxCopyStruct_cell_wrap_1(&c_st, &obj_DecomposedStrelArray_data[0],
                            &decomposedStrelArray.data[0], &ec_emlrtRTEI);
  emxFree_cell_wrap_1_1x1(&c_st, &decomposedStrelArray);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void strel_decompose(const emlrtStack *sp,
                     const c_emxArray_images_internal_code *obj_StrelArray,
                     const emxArray_cell_wrap_1 *obj_DecomposedStrelArray,
                     c_emxArray_images_internal_code *seq_StrelArray,
                     emxArray_cell_wrap_1 *seq_DecomposedStrelArray,
                     emxArray_boolean_T *isEachStrelObj2D)
{
  c_emxArray_images_internal_code *expl_temp;
  const c_images_internal_coder_strel_S *obj_StrelArray_data;
  c_images_internal_coder_strel_S *seq_StrelArray_data;
  const cell_wrap_1 *obj_DecomposedStrelArray_data;
  cell_wrap_1 *seq_DecomposedStrelArray_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  emxArray_cell_wrap_1 *b_expl_temp;
  emxArray_real_T b_height_tmp_data;
  emxArray_real_T c_height_tmp_data;
  emxArray_real_T d_height_tmp_data;
  emxArray_real_T height_tmp_data;
  int32_T i = 0;
  int32_T i1 = 0;
  int32_T i2 = 0;
  int32_T i3;
  int32_T i7 = 0;
  int32_T len;
  int32_T n;
  boolean_T *isEachStrelObj2D_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  obj_DecomposedStrelArray_data = obj_DecomposedStrelArray->data;
  obj_StrelArray_data = obj_StrelArray->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &dg_emlrtRSI;
  b_st.site = &eg_emlrtRSI;
  c_st.site = &fg_emlrtRSI;
  f_emxInit_images_internal_coder(&c_st, &expl_temp, &hd_emlrtRTEI, true);
  emxInit_cell_wrap_1(&c_st, &b_expl_temp, &hd_emlrtRTEI);
  d_st.site = &ef_emlrtRSI;
  strel_strel(&d_st, expl_temp, b_expl_temp);
  emxFree_cell_wrap_1(&c_st, &b_expl_temp);
  c_emxFree_images_internal_coder(&c_st, &expl_temp);
  c_st.site = &gg_emlrtRSI;
  d_st.site = &ud_emlrtRSI;
  e_st.site = &yd_emlrtRSI;
  height_tmp_data.size = &i;
  height_tmp_data.allocatedSize = 0;
  height_tmp_data.numDimensions = 1;
  height_tmp_data.canFreeData = false;
  f_st.site = &ae_emlrtRSI;
  any(&f_st, &height_tmp_data);
  d_st.site = &ud_emlrtRSI;
  e_st.site = &de_emlrtRSI;
  d_st.site = &vd_emlrtRSI;
  e_st.site = &yd_emlrtRSI;
  b_height_tmp_data.size = &i1;
  b_height_tmp_data.allocatedSize = 0;
  b_height_tmp_data.numDimensions = 1;
  b_height_tmp_data.canFreeData = false;
  f_st.site = &ae_emlrtRSI;
  any(&f_st, &b_height_tmp_data);
  d_st.site = &vd_emlrtRSI;
  e_st.site = &de_emlrtRSI;
  d_st.site = &wd_emlrtRSI;
  e_st.site = &de_emlrtRSI;
  d_st.site = &xd_emlrtRSI;
  e_st.site = &yd_emlrtRSI;
  c_height_tmp_data.size = &i2;
  c_height_tmp_data.allocatedSize = 0;
  c_height_tmp_data.numDimensions = 1;
  c_height_tmp_data.canFreeData = false;
  f_st.site = &ae_emlrtRSI;
  any(&f_st, &c_height_tmp_data);
  d_st.site = &xd_emlrtRSI;
  e_st.site = &de_emlrtRSI;
  seq_StrelArray->size[0] = 1;
  seq_StrelArray->size[1] = 0;
  seq_DecomposedStrelArray->size[0] = 1;
  seq_DecomposedStrelArray->size[1] = 0;
  isEachStrelObj2D->size[0] = 1;
  isEachStrelObj2D->size[1] = 0;
  i3 = obj_StrelArray->size[1];
  for (len = 0; len < i3; len++) {
    int32_T i4;
    i4 = obj_DecomposedStrelArray->size[1] - 1;
    if (len > obj_DecomposedStrelArray->size[1] - 1) {
      emlrtDynamicBoundsCheckR2012b(
          len, 0, obj_DecomposedStrelArray->size[1] - 1, &pb_emlrtBCI, &b_st);
    }
    if (obj_DecomposedStrelArray_data[len].f1->size[1] == 0) {
      int32_T i5;
      int32_T seq_StrelArray_tmp;
      if (len > obj_StrelArray->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(len, 0, obj_StrelArray->size[1] - 1,
                                      &rb_emlrtBCI, &b_st);
      }
      seq_StrelArray_tmp = seq_StrelArray->size[1] + 1;
      i4 = seq_StrelArray->size[0] * seq_StrelArray->size[1];
      seq_StrelArray->size[0] = 1;
      seq_StrelArray->size[1]++;
      d_emxEnsureCapacity_images_inte(&b_st, seq_StrelArray, i4, &bd_emlrtRTEI);
      seq_StrelArray_data = seq_StrelArray->data;
      c_emxCopyStruct_images_internal(
          &b_st, &seq_StrelArray_data[seq_StrelArray_tmp - 1],
          &obj_StrelArray_data[len], &cd_emlrtRTEI);
      i4 =
          seq_DecomposedStrelArray->size[0] * seq_DecomposedStrelArray->size[1];
      seq_DecomposedStrelArray->size[0] = 1;
      seq_DecomposedStrelArray->size[1]++;
      emxEnsureCapacity_cell_wrap_11(&b_st, seq_DecomposedStrelArray, i4,
                                     &bd_emlrtRTEI);
      seq_DecomposedStrelArray_data = seq_DecomposedStrelArray->data;
      i4 = seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1->size[0] *
           seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1->size[1];
      seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1->size[0] = 1;
      d_emxEnsureCapacity_images_inte(
          &b_st, seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1, i4,
          &dd_emlrtRTEI);
      seq_DecomposedStrelArray_data[seq_DecomposedStrelArray->size[1] - 1]
          .f1->size[1] = 0;
      if (len > obj_StrelArray->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(len, 0, obj_StrelArray->size[1] - 1,
                                      &ub_emlrtBCI, &b_st);
      }
      i4 = isEachStrelObj2D->size[1];
      i5 = isEachStrelObj2D->size[0] * isEachStrelObj2D->size[1];
      isEachStrelObj2D->size[1]++;
      emxEnsureCapacity_boolean_T(&b_st, isEachStrelObj2D, i5, &fd_emlrtRTEI);
      isEachStrelObj2D_data = isEachStrelObj2D->data;
      isEachStrelObj2D_data[i4] = true;
    } else {
      int32_T i5;
      if (len > obj_DecomposedStrelArray->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(
            len, 0, obj_DecomposedStrelArray->size[1] - 1, &qb_emlrtBCI, &b_st);
      }
      i5 = obj_DecomposedStrelArray_data[len].f1->size[1];
      for (n = 0; n < i5; n++) {
        int32_T i6;
        int32_T seq_StrelArray_tmp;
        if (len > i4) {
          emlrtDynamicBoundsCheckR2012b(len, 0, i4, &sb_emlrtBCI, &b_st);
        }
        i6 = obj_DecomposedStrelArray_data[len].f1->size[1] - 1;
        if (n > i6) {
          emlrtDynamicBoundsCheckR2012b(n, 0, i6, &tb_emlrtBCI, &b_st);
        }
        seq_StrelArray_tmp = seq_StrelArray->size[1] + 1;
        i6 = seq_StrelArray->size[0] * seq_StrelArray->size[1];
        seq_StrelArray->size[0] = 1;
        seq_StrelArray->size[1]++;
        d_emxEnsureCapacity_images_inte(&b_st, seq_StrelArray, i6,
                                        &bd_emlrtRTEI);
        seq_StrelArray_data = seq_StrelArray->data;
        c_emxCopyStruct_images_internal(
            &b_st, &seq_StrelArray_data[seq_StrelArray_tmp - 1],
            &obj_DecomposedStrelArray_data[len].f1->data[n], &ed_emlrtRTEI);
        i6 = seq_DecomposedStrelArray->size[0] *
             seq_DecomposedStrelArray->size[1];
        seq_DecomposedStrelArray->size[0] = 1;
        seq_DecomposedStrelArray->size[1]++;
        emxEnsureCapacity_cell_wrap_11(&b_st, seq_DecomposedStrelArray, i6,
                                       &bd_emlrtRTEI);
        seq_DecomposedStrelArray_data = seq_DecomposedStrelArray->data;
        i6 = seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1->size[0] *
             seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1->size[1];
        seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1->size[0] = 1;
        d_emxEnsureCapacity_images_inte(
            &b_st, seq_DecomposedStrelArray_data[seq_StrelArray_tmp - 1].f1, i6,
            &gd_emlrtRTEI);
        seq_DecomposedStrelArray_data[seq_DecomposedStrelArray->size[1] - 1]
            .f1->size[1] = 0;
        if (len > obj_StrelArray->size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(len, 0, obj_StrelArray->size[1] - 1,
                                        &vb_emlrtBCI, &b_st);
        }
        i6 = isEachStrelObj2D->size[1];
        seq_StrelArray_tmp =
            isEachStrelObj2D->size[0] * isEachStrelObj2D->size[1];
        isEachStrelObj2D->size[1]++;
        emxEnsureCapacity_boolean_T(&b_st, isEachStrelObj2D, seq_StrelArray_tmp,
                                    &fd_emlrtRTEI);
        isEachStrelObj2D_data = isEachStrelObj2D->data;
        isEachStrelObj2D_data[i6] = true;
      }
    }
    c_st.site = &hg_emlrtRSI;
    d_st.site = &yd_emlrtRSI;
    d_height_tmp_data.size = &i7;
    d_height_tmp_data.allocatedSize = 0;
    d_height_tmp_data.numDimensions = 1;
    d_height_tmp_data.canFreeData = false;
    e_st.site = &ae_emlrtRSI;
    any(&e_st, &d_height_tmp_data);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void strel_getpadsize(const emlrtStack *sp,
                      const c_emxArray_images_internal_code *obj_StrelArray,
                      const emxArray_cell_wrap_1 *obj_DecomposedStrelArray,
                      real_T pad_ul_data[], int32_T pad_ul_size[2],
                      real_T pad_lr_data[], int32_T pad_lr_size[2])
{
  static const int32_T b_offsets[4] = {0, 1, 2, 3};
  c_emxArray_images_internal_code *seq_StrelArray;
  c_images_internal_coder_strel_S *seq_StrelArray_data;
  cell_wrap_37 *offsets_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emxArray_cell_wrap_1 *expl_temp;
  emxArray_cell_wrap_37 *offsets;
  emxArray_real_T *c_offsets;
  emxArray_real_T *minval;
  emxArray_real_T *r;
  real_T *b_offsets_data;
  int32_T iv[4];
  int32_T sizes[2];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T j;
  int32_T k;
  int32_T loop_ub;
  int32_T m;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  f_emxInit_images_internal_coder(sp, &seq_StrelArray, &pd_emlrtRTEI, true);
  emxInit_real_T(sp, &minval, 2, &rd_emlrtRTEI, true);
  emxInit_cell_wrap_1(sp, &expl_temp, &td_emlrtRTEI);
  st.site = &og_emlrtRSI;
  strel_decomposeImpl(&st, obj_StrelArray, obj_DecomposedStrelArray,
                      seq_StrelArray, expl_temp);
  seq_StrelArray_data = seq_StrelArray->data;
  emxFree_cell_wrap_1(sp, &expl_temp);
  sizes[1] = seq_StrelArray->size[1];
  emxInit_cell_wrap_37(sp, &offsets, &qd_emlrtRTEI);
  i = offsets->size[0] * offsets->size[1];
  offsets->size[0] = 1;
  offsets->size[1] = seq_StrelArray->size[1];
  emxEnsureCapacity_cell_wrap_37(sp, offsets, i, &id_emlrtRTEI);
  offsets_data = offsets->data;
  for (i = 0; i < sizes[1]; i++) {
    if (i > offsets->size[1] - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, offsets->size[1] - 1, &ec_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    offsets_data[i].f1->size[0] = 0;
    if (i > offsets->size[1] - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, offsets->size[1] - 1, &ec_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    offsets_data[i].f1->size[1] = 0;
  }
  i = seq_StrelArray->size[1];
  i1 = offsets->size[0] * offsets->size[1];
  offsets->size[0] = 1;
  offsets->size[1] = seq_StrelArray->size[1];
  emxEnsureCapacity_cell_wrap_37(sp, offsets, i1, &jd_emlrtRTEI);
  offsets_data = offsets->data;
  emxInit_real_T(sp, &r, 2, &sd_emlrtRTEI, true);
  for (m = 0; m < i; m++) {
    i1 = seq_StrelArray->size[1] - 1;
    if (m > seq_StrelArray->size[1] - 1) {
      emlrtDynamicBoundsCheckR2012b(m, 0, seq_StrelArray->size[1] - 1,
                                    &bc_emlrtBCI, (emlrtConstCTX)sp);
    }
    st.site = &pg_emlrtRSI;
    getneighborsImpl(&st, seq_StrelArray_data[m].nhood,
                     seq_StrelArray_data[m].height, r);
    b_offsets_data = r->data;
    if (m > seq_StrelArray->size[1] - 1) {
      emlrtDynamicBoundsCheckR2012b(m, 0, seq_StrelArray->size[1] - 1,
                                    &cc_emlrtBCI, (emlrtConstCTX)sp);
    }
    b_i = offsets_data[m].f1->size[0] * offsets_data[m].f1->size[1];
    offsets_data[m].f1->size[0] = r->size[0];
    emxEnsureCapacity_real_T(sp, offsets_data[m].f1, b_i, &kd_emlrtRTEI);
    if (m > seq_StrelArray->size[1] - 1) {
      emlrtDynamicBoundsCheckR2012b(m, 0, seq_StrelArray->size[1] - 1,
                                    &cc_emlrtBCI, (emlrtConstCTX)sp);
    }
    b_i = offsets_data[m].f1->size[0] * offsets_data[m].f1->size[1];
    offsets_data[m].f1->size[1] = 2;
    emxEnsureCapacity_real_T(sp, offsets_data[m].f1, b_i, &kd_emlrtRTEI);
    if (m > seq_StrelArray->size[1] - 1) {
      emlrtDynamicBoundsCheckR2012b(m, 0, seq_StrelArray->size[1] - 1,
                                    &cc_emlrtBCI, (emlrtConstCTX)sp);
    }
    loop_ub = r->size[0] << 1;
    for (b_i = 0; b_i < loop_ub; b_i++) {
      if (m > i1) {
        emlrtDynamicBoundsCheckR2012b(m, 0, i1, &fc_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      offsets_data[m].f1->data[b_i] = b_offsets_data[b_i];
    }
  }
  emxFree_real_T(sp, &r);
  c_emxFree_images_internal_coder(sp, &seq_StrelArray);
  if (offsets->size[1] == 0) {
    pad_ul_size[0] = 1;
    pad_ul_size[1] = 2;
    pad_lr_size[0] = 1;
    pad_lr_size[1] = 2;
    pad_ul_data[0] = 0.0;
    pad_lr_data[0] = 0.0;
    pad_ul_data[1] = 0.0;
    pad_lr_data[1] = 0.0;
  } else {
    real_T a;
    int32_T n;
    boolean_T empty_non_axis_sizes;
    boolean_T overflow;
    i = offsets->size[1];
    m = ((offsets->size[1] - 1) / 4) << 2;
    n = m - 4;
    for (k = 0; k <= n; k += 4) {
      __m128i r1;
      r1 = _mm_add_epi32(
          _mm_add_epi32(_mm_set1_epi32(k),
                        _mm_loadu_si128((const __m128i *)&b_offsets[0])),
          _mm_set1_epi32(1));
      _mm_storeu_si128((__m128i *)&iv[0], r1);
      if ((iv[0] < 0) || (iv[0] > offsets->size[1] - 1)) {
        emlrtDynamicBoundsCheckR2012b(iv[0], 0, offsets->size[1] - 1,
                                      &ac_emlrtBCI, (emlrtConstCTX)sp);
      }
      if ((iv[1] < 0) || (iv[1] > offsets->size[1] - 1)) {
        emlrtDynamicBoundsCheckR2012b(iv[1], 0, offsets->size[1] - 1,
                                      &ac_emlrtBCI, (emlrtConstCTX)sp);
      }
      if ((iv[2] < 0) || (iv[2] > offsets->size[1] - 1)) {
        emlrtDynamicBoundsCheckR2012b(iv[2], 0, offsets->size[1] - 1,
                                      &ac_emlrtBCI, (emlrtConstCTX)sp);
      }
      if ((iv[3] < 0) || (iv[3] > offsets->size[1] - 1)) {
        emlrtDynamicBoundsCheckR2012b(iv[3], 0, offsets->size[1] - 1,
                                      &ac_emlrtBCI, (emlrtConstCTX)sp);
      }
    }
    for (k = m; k <= i - 2; k++) {
      if (k + 1 > offsets->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 0, offsets->size[1] - 1,
                                      &ac_emlrtBCI, (emlrtConstCTX)sp);
      }
    }
    i = offsets->size[1];
    emxInit_real_T(sp, &c_offsets, 2, &md_emlrtRTEI, true);
    for (k = 0; k < i; k++) {
      i1 = offsets->size[1] - 1;
      if (k > offsets->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(k, 0, offsets->size[1] - 1, &yb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      st.site = &qg_emlrtRSI;
      if (k > offsets->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(k, 0, offsets->size[1] - 1, &xb_emlrtBCI,
                                      &st);
      }
      a = 2.0 - (real_T)offsets_data[k].f1->size[1];
      if (!(a >= 0.0)) {
        emlrtNonNegativeCheckR2012b(a, &s_emlrtDCI, &st);
      }
      b_st.site = &lh_emlrtRSI;
      overflow = ((offsets_data[k].f1->size[0] != 0) &&
                  (offsets_data[k].f1->size[1] != 0));
      if (overflow) {
        m = offsets_data[k].f1->size[0];
      } else if ((offsets_data[k].f1->size[0] != 0) &&
                 (2 - offsets_data[k].f1->size[1] != 0)) {
        m = offsets_data[k].f1->size[0];
      } else {
        m = offsets_data[k].f1->size[0];
        if (offsets_data[k].f1->size[0] > m) {
          m = offsets_data[k].f1->size[0];
        }
      }
      c_st.site = &mh_emlrtRSI;
      if ((offsets_data[k].f1->size[0] != m) &&
          ((offsets_data[k].f1->size[0] != 0) &&
           (offsets_data[k].f1->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(
            &c_st, &p_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
      }
      if ((offsets_data[k].f1->size[0] != m) &&
          ((offsets_data[k].f1->size[0] != 0) &&
           (2 - offsets_data[k].f1->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(
            &c_st, &p_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
      }
      empty_non_axis_sizes = (m == 0);
      if (empty_non_axis_sizes || overflow) {
        loop_ub = offsets_data[k].f1->size[1];
      } else {
        loop_ub = 0;
      }
      if (empty_non_axis_sizes || ((offsets_data[k].f1->size[0] != 0) &&
                                   (2 - offsets_data[k].f1->size[1] != 0))) {
        sizes[1] = 2 - offsets_data[k].f1->size[1];
      } else {
        sizes[1] = 0;
      }
      b_i = c_offsets->size[0] * c_offsets->size[1];
      c_offsets->size[0] = m;
      c_offsets->size[1] = loop_ub + sizes[1];
      emxEnsureCapacity_real_T(&b_st, c_offsets, b_i, &md_emlrtRTEI);
      b_offsets_data = c_offsets->data;
      for (b_i = 0; b_i < loop_ub; b_i++) {
        for (j = 0; j < m; j++) {
          b_offsets_data[j + c_offsets->size[0] * b_i] =
              offsets_data[k].f1->data[j + m * b_i];
        }
      }
      n = sizes[1];
      for (b_i = 0; b_i < n; b_i++) {
        for (j = 0; j < m; j++) {
          b_offsets_data[j + c_offsets->size[0] * (b_i + loop_ub)] = 0.0;
        }
      }
      if (k > offsets->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(k, 0, offsets->size[1] - 1, &dc_emlrtBCI,
                                      &b_st);
      }
      b_i = offsets_data[k].f1->size[0] * offsets_data[k].f1->size[1];
      offsets_data[k].f1->size[0] = c_offsets->size[0];
      emxEnsureCapacity_real_T(&b_st, offsets_data[k].f1, b_i, &od_emlrtRTEI);
      if (k > offsets->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(k, 0, offsets->size[1] - 1, &dc_emlrtBCI,
                                      &b_st);
      }
      b_i = offsets_data[k].f1->size[0] * offsets_data[k].f1->size[1];
      offsets_data[k].f1->size[1] = c_offsets->size[1];
      emxEnsureCapacity_real_T(&b_st, offsets_data[k].f1, b_i, &od_emlrtRTEI);
      if (k > offsets->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(k, 0, offsets->size[1] - 1, &dc_emlrtBCI,
                                      &b_st);
      }
      loop_ub = c_offsets->size[0] * c_offsets->size[1];
      for (b_i = 0; b_i < loop_ub; b_i++) {
        if (k > i1) {
          emlrtDynamicBoundsCheckR2012b(k, 0, i1, &gc_emlrtBCI, &b_st);
        }
        offsets_data[k].f1->data[b_i] = b_offsets_data[b_i];
      }
    }
    emxFree_real_T(sp, &c_offsets);
    pad_ul_size[0] = 1;
    pad_ul_size[1] = 2;
    pad_lr_size[0] = 1;
    pad_lr_size[1] = 2;
    pad_ul_data[0] = 0.0;
    pad_lr_data[0] = 0.0;
    pad_ul_data[1] = 0.0;
    pad_lr_data[1] = 0.0;
    i = offsets->size[1];
    for (k = 0; k < i; k++) {
      if (k > offsets->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(k, 0, offsets->size[1] - 1, &wb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if ((offsets_data[k].f1->size[0] != 0) &&
          (offsets_data[k].f1->size[1] != 0)) {
        __m128d r2;
        __m128d r3;
        real_T b;
        st.site = &rg_emlrtRSI;
        b_st.site = &nh_emlrtRSI;
        c_st.site = &oh_emlrtRSI;
        d_st.site = &ph_emlrtRSI;
        if (offsets_data[k].f1->size[0] < 1) {
          emlrtErrorWithMessageIdR2018a(
              &d_st, &h_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
              "Coder:toolbox:eml_min_or_max_varDimZero", 0);
        }
        e_st.site = &qh_emlrtRSI;
        f_st.site = &rh_emlrtRSI;
        g_st.site = &sh_emlrtRSI;
        m = offsets_data[k].f1->size[0];
        n = offsets_data[k].f1->size[1];
        i1 = minval->size[0] * minval->size[1];
        minval->size[0] = 1;
        minval->size[1] = offsets_data[k].f1->size[1];
        emxEnsureCapacity_real_T(&g_st, minval, i1, &ld_emlrtRTEI);
        b_offsets_data = minval->data;
        if (offsets_data[k].f1->size[1] >= 1) {
          h_st.site = &uh_emlrtRSI;
          if (offsets_data[k].f1->size[1] > 2147483646) {
            i_st.site = &tc_emlrtRSI;
            check_forloop_overflow_error(&i_st);
          }
          overflow = (offsets_data[k].f1->size[0] > 2147483646);
          for (j = 0; j < n; j++) {
            b_offsets_data[j] =
                offsets_data[k].f1->data[offsets_data[k].f1->size[0] * j];
            h_st.site = &th_emlrtRSI;
            if (overflow) {
              i_st.site = &tc_emlrtRSI;
              check_forloop_overflow_error(&i_st);
            }
            for (b_i = 2; b_i <= m; b_i++) {
              a = b_offsets_data[j];
              b = offsets_data[k]
                      .f1->data[(b_i + offsets_data[k].f1->size[0] * j) - 1];
              if (muDoubleScalarIsNaN(b)) {
                empty_non_axis_sizes = false;
              } else if (muDoubleScalarIsNaN(a)) {
                empty_non_axis_sizes = true;
              } else {
                empty_non_axis_sizes = (a > b);
              }
              if (empty_non_axis_sizes) {
                b_offsets_data[j] = b;
              }
            }
          }
        }
        i1 = minval->size[1];
        b_i = minval->size[0] * minval->size[1];
        minval->size[0] = 1;
        emxEnsureCapacity_real_T(sp, minval, b_i, &nd_emlrtRTEI);
        b_offsets_data = minval->data;
        loop_ub = i1 - 1;
        for (i1 = 0; i1 <= loop_ub; i1++) {
          a = -b_offsets_data[i1];
          b_offsets_data[i1] = muDoubleScalarMax(0.0, a);
        }
        st.site = &rg_emlrtRSI;
        if (minval->size[1] != 2) {
          emlrtErrorWithMessageIdR2018a(
              &st, &o_emlrtRTEI, "EMLRT:runTime:SizesMismatchOnDim",
              "EMLRT:runTime:SizesMismatchOnDim", 6, 6, 2.0, 6, 2.0, 6,
              (real_T)minval->size[1]);
        }
        sizes[0] = 1;
        sizes[1] = 2;
        if (minval->size[1] != 2) {
          emlrtSizeEqCheckNDErrorR2021b(&sizes[0], &minval->size[0],
                                        &e_emlrtECI, &st);
        }
        pad_ul_size[0] = 1;
        pad_ul_size[1] = 2;
        r2 = _mm_loadu_pd(&pad_ul_data[0]);
        r3 = _mm_loadu_pd(&b_offsets_data[0]);
        _mm_storeu_pd(&pad_ul_data[0], _mm_add_pd(r2, r3));
        st.site = &sg_emlrtRSI;
        b_st.site = &se_emlrtRSI;
        c_st.site = &te_emlrtRSI;
        d_st.site = &ue_emlrtRSI;
        e_st.site = &qh_emlrtRSI;
        f_st.site = &rh_emlrtRSI;
        g_st.site = &sh_emlrtRSI;
        m = offsets_data[k].f1->size[0];
        n = offsets_data[k].f1->size[1];
        i1 = minval->size[0] * minval->size[1];
        minval->size[0] = 1;
        minval->size[1] = offsets_data[k].f1->size[1];
        emxEnsureCapacity_real_T(&g_st, minval, i1, &ld_emlrtRTEI);
        b_offsets_data = minval->data;
        if (offsets_data[k].f1->size[1] >= 1) {
          h_st.site = &uh_emlrtRSI;
          if (offsets_data[k].f1->size[1] > 2147483646) {
            i_st.site = &tc_emlrtRSI;
            check_forloop_overflow_error(&i_st);
          }
          overflow = (offsets_data[k].f1->size[0] > 2147483646);
          for (j = 0; j < n; j++) {
            b_offsets_data[j] =
                offsets_data[k].f1->data[offsets_data[k].f1->size[0] * j];
            h_st.site = &th_emlrtRSI;
            if (overflow) {
              i_st.site = &tc_emlrtRSI;
              check_forloop_overflow_error(&i_st);
            }
            for (b_i = 2; b_i <= m; b_i++) {
              a = b_offsets_data[j];
              b = offsets_data[k]
                      .f1->data[(b_i + offsets_data[k].f1->size[0] * j) - 1];
              if (muDoubleScalarIsNaN(b)) {
                empty_non_axis_sizes = false;
              } else if (muDoubleScalarIsNaN(a)) {
                empty_non_axis_sizes = true;
              } else {
                empty_non_axis_sizes = (a < b);
              }
              if (empty_non_axis_sizes) {
                b_offsets_data[j] = b;
              }
            }
          }
        }
        i1 = minval->size[0] * minval->size[1];
        minval->size[0] = 1;
        emxEnsureCapacity_real_T(sp, minval, i1, &nd_emlrtRTEI);
        b_offsets_data = minval->data;
        for (i1 = 0; i1 <= loop_ub; i1++) {
          a = b_offsets_data[i1];
          b_offsets_data[i1] = muDoubleScalarMax(0.0, a);
        }
        st.site = &sg_emlrtRSI;
        if (minval->size[1] != 2) {
          emlrtErrorWithMessageIdR2018a(
              &st, &o_emlrtRTEI, "EMLRT:runTime:SizesMismatchOnDim",
              "EMLRT:runTime:SizesMismatchOnDim", 6, 6, 2.0, 6, 2.0, 6,
              (real_T)minval->size[1]);
        }
        sizes[0] = 1;
        sizes[1] = 2;
        if (minval->size[1] != 2) {
          emlrtSizeEqCheckNDErrorR2021b(&sizes[0], &minval->size[0],
                                        &e_emlrtECI, &st);
        }
        pad_lr_size[0] = 1;
        pad_lr_size[1] = 2;
        r2 = _mm_loadu_pd(&pad_lr_data[0]);
        r3 = _mm_loadu_pd(&b_offsets_data[0]);
        _mm_storeu_pd(&pad_lr_data[0], _mm_add_pd(r2, r3));
      }
    }
  }
  emxFree_cell_wrap_37(sp, &offsets);
  emxFree_real_T(sp, &minval);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

boolean_T strel_isdecompositionorthogonal(
    const emlrtStack *sp, const c_emxArray_images_internal_code *obj_StrelArray,
    const emxArray_cell_wrap_1 *obj_DecomposedStrelArray)
{
  c_emxArray_images_internal_code *seq_StrelArray;
  c_images_internal_coder_strel_S *seq_StrelArray_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  emxArray_boolean_T *x;
  emxArray_cell_wrap_1 *expl_temp;
  emxArray_uint32_T *P;
  int32_T nz[3];
  int32_T i;
  int32_T k;
  int32_T vlen;
  int32_T xpageoffset;
  uint32_T *P_data;
  boolean_T b_x[3];
  boolean_T TF;
  boolean_T exitg1;
  boolean_T *x_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  f_emxInit_images_internal_coder(sp, &seq_StrelArray, &qf_emlrtRTEI, true);
  emxInit_cell_wrap_1(sp, &expl_temp, &rf_emlrtRTEI);
  st.site = &xj_emlrtRSI;
  strel_decomposeImpl(&st, obj_StrelArray, obj_DecomposedStrelArray,
                      seq_StrelArray, expl_temp);
  seq_StrelArray_data = seq_StrelArray->data;
  emxFree_cell_wrap_1(sp, &expl_temp);
  emxInit_uint32_T(sp, &P, &of_emlrtRTEI);
  xpageoffset = P->size[0] * P->size[1];
  P->size[0] = seq_StrelArray->size[1];
  P->size[1] = 3;
  emxEnsureCapacity_uint32_T(sp, P, xpageoffset, &of_emlrtRTEI);
  P_data = P->data;
  vlen = seq_StrelArray->size[1] * 3;
  for (xpageoffset = 0; xpageoffset < vlen; xpageoffset++) {
    P_data[xpageoffset] = 1U;
  }
  xpageoffset = seq_StrelArray->size[1];
  for (vlen = 0; vlen < xpageoffset; vlen++) {
    if (vlen > seq_StrelArray->size[1] - 1) {
      emlrtDynamicBoundsCheckR2012b(vlen, 0, seq_StrelArray->size[1] - 1,
                                    &yc_emlrtBCI, (emlrtConstCTX)sp);
    }
    if (vlen + 1 > P->size[0]) {
      emlrtDynamicBoundsCheckR2012b(vlen + 1, 1, P->size[0], &xc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    P_data[vlen] = (uint32_T)seq_StrelArray_data[vlen].nhood->size[0];
    P_data[vlen + P->size[0]] =
        (uint32_T)seq_StrelArray_data[vlen].nhood->size[1];
    P_data[vlen + P->size[0] * 2] = 1U;
  }
  c_emxFree_images_internal_coder(sp, &seq_StrelArray);
  vlen = P->size[0] * 3 - 1;
  for (i = 0; i <= vlen; i++) {
    if ((int32_T)P_data[i] == 0) {
      xpageoffset = P->size[0] * 3 - 1;
      if (i > xpageoffset) {
        emlrtDynamicBoundsCheckR2012b(i, 0, xpageoffset, &ad_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      P_data[i] = 1U;
    }
  }
  st.site = &yj_emlrtRSI;
  emxInit_boolean_T(&st, &x, 2, &pf_emlrtRTEI, true);
  xpageoffset = x->size[0] * x->size[1];
  x->size[0] = P->size[0];
  x->size[1] = 3;
  emxEnsureCapacity_boolean_T(&st, x, xpageoffset, &pf_emlrtRTEI);
  x_data = x->data;
  vlen = P->size[0] * 3;
  for (xpageoffset = 0; xpageoffset < vlen; xpageoffset++) {
    x_data[xpageoffset] = ((int32_T)P_data[xpageoffset] != 1);
  }
  emxFree_uint32_T(&st, &P);
  b_st.site = &ii_emlrtRSI;
  c_st.site = &ji_emlrtRSI;
  vlen = x->size[0];
  if (x->size[0] == 0) {
    nz[0] = 0;
    nz[1] = 0;
    nz[2] = 0;
  } else {
    boolean_T overflow;
    d_st.site = &ki_emlrtRSI;
    overflow = (x->size[0] > 2147483646);
    for (i = 0; i < 3; i++) {
      xpageoffset = i * x->size[0];
      nz[i] = x_data[xpageoffset];
      e_st.site = &li_emlrtRSI;
      if (overflow) {
        f_st.site = &tc_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }
      for (k = 2; k <= vlen; k++) {
        nz[i] += x_data[(xpageoffset + k) - 1];
      }
    }
  }
  emxFree_boolean_T(&c_st, &x);
  b_x[0] = (nz[0] == 1);
  b_x[1] = (nz[1] == 1);
  b_x[2] = (nz[2] == 1);
  TF = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 3)) {
    if (b_x[k]) {
      TF = true;
      exitg1 = true;
    } else {
      k++;
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
  return TF;
}

void strel_makeDiskStrel(const emlrtStack *sp, strel *se, real_T r, real_T n)
{
  static const int8_T iv[8] = {1, 1, 0, -1, 0, 1, 1, 1};
  c_emxArray_images_internal_code *expl_temp;
  c_emxArray_images_internal_code *tempStrelArray;
  c_images_internal_coder_strel_S b_r;
  c_images_internal_coder_strel_S *expl_temp_data;
  c_images_internal_coder_strel_S *tempStrelArray_data;
  cell_wrap_1 *decomposedData_data;
  d_emxArray_images_internal_code strelArray;
  e_emxArray_images_internal_code data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emxArray_boolean_T c_nhood;
  emxArray_boolean_T *nhood;
  emxArray_boolean_T *nhood_local;
  emxArray_cell_wrap_1 *b_expl_temp;
  emxArray_cell_wrap_1 *decomposedData;
  emxArray_cell_wrap_1_1x0 ik_emlrtRSI;
  emxArray_cell_wrap_1_1x0 mk_emlrtRSI;
  emxArray_cell_wrap_1_1x0 qk_emlrtRSI;
  emxArray_cell_wrap_1_1x1 decomposedStrelArray;
  emxArray_cell_wrap_1_1x2 b_decomposedData;
  emxArray_int32_T *ii;
  emxArray_int32_T *jj;
  emxArray_real32_T *b_nhood;
  emxArray_real_T *height_local;
  emxArray_real_T *r1;
  emxArray_real_T *rd;
  emxArray_real_T *y;
  emxArray_real_T *yy;
  f_emxArray_images_internal_code gk_emlrtRSI;
  f_emxArray_images_internal_code hk_emlrtRSI;
  f_emxArray_images_internal_code jk_emlrtRSI;
  f_emxArray_images_internal_code kk_emlrtRSI;
  f_emxArray_images_internal_code lk_emlrtRSI;
  f_emxArray_images_internal_code nk_emlrtRSI;
  f_emxArray_images_internal_code ok_emlrtRSI;
  f_emxArray_images_internal_code pk_emlrtRSI;
  f_emxArray_images_internal_code rk_emlrtRSI;
  real_T *height_local_data;
  real_T *r2;
  real_T *rd_data;
  int32_T d_nhood;
  int32_T i;
  int32_T loop_ub;
  int32_T q;
  int32_T scalarLB;
  int32_T *ii_data;
  real32_T *nhood_data;
  int8_T v_data[16];
  boolean_T *b_nhood_data;
  boolean_T *nhood_local_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &rd, 1, &qg_emlrtRTEI, true);
  st.site = &ad_emlrtRSI;
  c_emxInitStruct_images_internal(&st, &b_r, &rg_emlrtRTEI, true);
  b_st.site = &ud_emlrtRSI;
  StrelImpl_StrelImpl(&b_st, b_r.nhood, b_r.height);
  e_emxInit_images_internal_coder(&gk_emlrtRSI);
  b_st.site = &ud_emlrtRSI;
  b_repmat(gk_emlrtRSI.size);
  f_emxFree_images_internal_coder(&st, &gk_emlrtRSI);
  b_st.site = &vd_emlrtRSI;
  StrelImpl_StrelImpl(&b_st, b_r.nhood, b_r.height);
  e_emxInit_images_internal_coder(&hk_emlrtRSI);
  b_st.site = &vd_emlrtRSI;
  b_repmat(hk_emlrtRSI.size);
  f_emxFree_images_internal_coder(&st, &hk_emlrtRSI);
  emxInit_cell_wrap_1_1x0(&ik_emlrtRSI);
  b_st.site = &wd_emlrtRSI;
  b_repmat(ik_emlrtRSI.size);
  emxFree_cell_wrap_1_1x0(&st, &ik_emlrtRSI);
  b_st.site = &xd_emlrtRSI;
  StrelImpl_StrelImpl(&b_st, b_r.nhood, b_r.height);
  e_emxInit_images_internal_coder(&jk_emlrtRSI);
  b_st.site = &xd_emlrtRSI;
  b_repmat(jk_emlrtRSI.size);
  f_emxFree_images_internal_coder(&st, &jk_emlrtRSI);
  c_emxInit_images_internal_coder(&strelArray);
  emxInit_cell_wrap_1_1x1(&decomposedStrelArray);
  f_emxInit_images_internal_coder(sp, &tempStrelArray, &og_emlrtRTEI, true);
  tempStrelArray_data = tempStrelArray->data;
  tempStrelArray->size[0] = 1;
  tempStrelArray->size[1] = 0;
  if (r < 3.0) {
    n = 0.0;
  }
  emxInit_real_T(sp, &height_local, 2, &tf_emlrtRTEI, true);
  emxInit_boolean_T(sp, &nhood, 2, &bg_emlrtRTEI, true);
  emxInit_real_T(sp, &r1, 2, &tf_emlrtRTEI, true);
  if (n == 0.0) {
    real_T theta;
    int32_T absxk;
    emxInit_real_T(sp, &y, 2, &sg_emlrtRTEI, true);
    st.site = &bd_emlrtRSI;
    b_st.site = &ee_emlrtRSI;
    if (muDoubleScalarIsNaN(-r) || muDoubleScalarIsNaN(r)) {
      i = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = 1;
      emxEnsureCapacity_real_T(&b_st, y, i, &hb_emlrtRTEI);
      rd_data = y->data;
      rd_data[0] = rtNaN;
    } else if (r < -r) {
      y->size[0] = 1;
      y->size[1] = 0;
    } else if ((muDoubleScalarIsInf(-r) || muDoubleScalarIsInf(r)) &&
               (-r == r)) {
      i = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = 1;
      emxEnsureCapacity_real_T(&b_st, y, i, &hb_emlrtRTEI);
      rd_data = y->data;
      rd_data[0] = rtNaN;
    } else if (muDoubleScalarFloor(-r) == -r) {
      i = y->size[0] * y->size[1];
      y->size[0] = 1;
      loop_ub = (int32_T)(r - (-r));
      y->size[1] = loop_ub + 1;
      emxEnsureCapacity_real_T(&b_st, y, i, &hb_emlrtRTEI);
      rd_data = y->data;
      for (i = 0; i <= loop_ub; i++) {
        rd_data[i] = -r + (real_T)i;
      }
    } else {
      c_st.site = &fe_emlrtRSI;
      eml_float_colon(&c_st, -r, r, y);
    }
    emxInit_real_T(sp, &yy, 2, &xf_emlrtRTEI, true);
    st.site = &bd_emlrtRSI;
    meshgrid(&st, y, height_local, yy);
    rd_data = yy->data;
    height_local_data = height_local->data;
    emxFree_real_T(sp, &y);
    st.site = &cd_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    i = r1->size[0] * r1->size[1];
    r1->size[0] = height_local->size[0];
    r1->size[1] = height_local->size[1];
    emxEnsureCapacity_real_T(&b_st, r1, i, &tf_emlrtRTEI);
    r2 = r1->data;
    absxk = height_local->size[0] * height_local->size[1];
    for (i = 0; i < absxk; i++) {
      theta = height_local_data[i];
      r2[i] = theta * theta;
    }
    st.site = &cd_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    i = height_local->size[0] * height_local->size[1];
    height_local->size[0] = yy->size[0];
    height_local->size[1] = yy->size[1];
    emxEnsureCapacity_real_T(&b_st, height_local, i, &vf_emlrtRTEI);
    height_local_data = height_local->data;
    loop_ub = yy->size[0] * yy->size[1];
    for (i = 0; i < loop_ub; i++) {
      theta = rd_data[i];
      height_local_data[i] = theta * theta;
    }
    emxFree_real_T(&b_st, &yy);
    if ((r1->size[0] != height_local->size[0]) &&
        ((r1->size[0] != 1) && (height_local->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(r1->size[0], height_local->size[0],
                                  &f_emlrtECI, (emlrtConstCTX)sp);
    }
    if ((r1->size[1] != height_local->size[1]) &&
        ((r1->size[1] != 1) && (height_local->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(r1->size[1], height_local->size[1],
                                  &g_emlrtECI, (emlrtConstCTX)sp);
    }
    st.site = &cd_emlrtRSI;
    b_st.site = &bb_emlrtRSI;
    c_st.site = &cb_emlrtRSI;
    theta = r * r;
    if ((r1->size[0] == height_local->size[0]) &&
        (r1->size[1] == height_local->size[1])) {
      i = nhood->size[0] * nhood->size[1];
      nhood->size[0] = r1->size[0];
      nhood->size[1] = r1->size[1];
      emxEnsureCapacity_boolean_T(sp, nhood, i, &bg_emlrtRTEI);
      b_nhood_data = nhood->data;
      for (i = 0; i < absxk; i++) {
        b_nhood_data[i] = (r2[i] + height_local_data[i] <= theta);
      }
    } else {
      st.site = &cd_emlrtRSI;
      binary_expand_op_1(&st, nhood, r1, height_local, theta);
    }
  } else {
    real_T scale;
    real_T theta;
    int32_T absxk;
    if ((int32_T)n == 4) {
      for (i = 0; i < 8; i++) {
        v_data[i] = iv[i];
      }
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &bb_emlrtRTEI,
                                    "images:getheight:invalidN",
                                    "images:getheight:invalidN", 0);
    }
    theta = 3.1415926535897931 / (2.0 * n);
    theta = 2.0 * r /
            (1.0 / muDoubleScalarTan(theta) + 1.0 / muDoubleScalarSin(theta));
    st.site = &dd_emlrtRSI;
    b_st.site = &ud_emlrtRSI;
    StrelImpl_StrelImpl(&b_st, b_r.nhood, b_r.height);
    e_emxInit_images_internal_coder(&kk_emlrtRSI);
    b_st.site = &ud_emlrtRSI;
    b_repmat(kk_emlrtRSI.size);
    f_emxFree_images_internal_coder(&st, &kk_emlrtRSI);
    b_st.site = &vd_emlrtRSI;
    StrelImpl_StrelImpl(&b_st, b_r.nhood, b_r.height);
    e_emxInit_images_internal_coder(&lk_emlrtRSI);
    b_st.site = &vd_emlrtRSI;
    b_repmat(lk_emlrtRSI.size);
    f_emxFree_images_internal_coder(&st, &lk_emlrtRSI);
    emxInit_cell_wrap_1_1x0(&mk_emlrtRSI);
    b_st.site = &wd_emlrtRSI;
    b_repmat(mk_emlrtRSI.size);
    emxFree_cell_wrap_1_1x0(&st, &mk_emlrtRSI);
    b_st.site = &xd_emlrtRSI;
    StrelImpl_StrelImpl(&b_st, b_r.nhood, b_r.height);
    e_emxInit_images_internal_coder(&nk_emlrtRSI);
    b_st.site = &xd_emlrtRSI;
    b_repmat(nk_emlrtRSI.size);
    f_emxFree_images_internal_coder(&st, &nk_emlrtRSI);
    emxInit_cell_wrap_1(sp, &decomposedData, &pg_emlrtRTEI);
    decomposedData->size[0] = 1;
    decomposedData->size[1] = 0;
    i = (int32_T)n;
    emxInit_boolean_T(sp, &nhood_local, 2, &ng_emlrtRTEI, true);
    for (q = 0; q < i; q++) {
      real_T v[2];
      real_T b_y;
      real_T t;
      int8_T i1;
      scale = 3.3121686421112381E-170;
      i1 = v_data[q];
      absxk = (int32_T)muDoubleScalarAbs(i1);
      if (absxk > 3.3121686421112381E-170) {
        b_y = 1.0;
        scale = 1.0;
      } else {
        t = (real_T)absxk / 3.3121686421112381E-170;
        b_y = t * t;
      }
      v[0] = i1;
      i1 = v_data[q + 4];
      absxk = (int32_T)muDoubleScalarAbs(i1);
      if (absxk > scale) {
        b_y = b_y * scale * scale + 1.0;
        scale = 1.0;
      } else {
        t = (real_T)absxk / scale;
        b_y += t * t;
      }
      v[1] = i1;
      b_y = scale * muDoubleScalarSqrt(b_y);
      st.site = &ed_emlrtRSI;
      c_getNhoodAndHeightFromPeriodic(&st, muDoubleScalarFloor(theta / b_y), v,
                                      nhood_local, height_local);
      st.site = &od_emlrtRSI;
      b_r.Flat = b_StrelImpl_StrelImpl(&st, nhood_local, height_local,
                                       b_r.nhood, b_r.height);
      absxk = tempStrelArray->size[1] + 1;
      scalarLB = tempStrelArray->size[0] * tempStrelArray->size[1];
      tempStrelArray->size[0] = 1;
      tempStrelArray->size[1]++;
      d_emxEnsureCapacity_images_inte(sp, tempStrelArray, scalarLB,
                                      &xf_emlrtRTEI);
      tempStrelArray_data = tempStrelArray->data;
      c_emxCopyStruct_images_internal(sp, &tempStrelArray_data[absxk - 1], &b_r,
                                      &yf_emlrtRTEI);
      scalarLB = decomposedData->size[0] * decomposedData->size[1];
      decomposedData->size[0] = 1;
      decomposedData->size[1]++;
      emxEnsureCapacity_cell_wrap_11(sp, decomposedData, scalarLB,
                                     &xf_emlrtRTEI);
      decomposedData_data = decomposedData->data;
      scalarLB = decomposedData_data[absxk - 1].f1->size[0] *
                 decomposedData_data[absxk - 1].f1->size[1];
      decomposedData_data[absxk - 1].f1->size[0] = 1;
      d_emxEnsureCapacity_images_inte(sp, decomposedData_data[absxk - 1].f1,
                                      scalarLB, &ag_emlrtRTEI);
      decomposedData_data[decomposedData->size[1] - 1].f1->size[1] = 0;
    }
    st.site = &fd_emlrtRSI;
    f_emxInit_images_internal_coder(&st, &expl_temp, &hd_emlrtRTEI, true);
    emxInit_cell_wrap_1(&st, &b_expl_temp, &hd_emlrtRTEI);
    b_st.site = &ef_emlrtRSI;
    strel_strel(&b_st, expl_temp, b_expl_temp);
    emxFree_cell_wrap_1(&st, &b_expl_temp);
    emxInit_real32_T(sp, &b_nhood, &bg_emlrtRTEI);
    st.site = &gd_emlrtRSI;
    d_imdilate(&st, tempStrelArray, decomposedData, b_nhood);
    nhood_data = b_nhood->data;
    i = nhood->size[0] * nhood->size[1];
    nhood->size[0] = b_nhood->size[0];
    nhood->size[1] = b_nhood->size[1];
    emxEnsureCapacity_boolean_T(sp, nhood, i, &uf_emlrtRTEI);
    b_nhood_data = nhood->data;
    loop_ub = b_nhood->size[0] * b_nhood->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_nhood_data[i] = (nhood_data[i] > 0.0F);
    }
    emxFree_real32_T(sp, &b_nhood);
    emxInit_int32_T(sp, &ii, 1, &xf_emlrtRTEI);
    emxInit_int32_T(sp, &jj, 1, &xf_emlrtRTEI);
    if (nhood->size[0] != 1) {
      st.site = &hd_emlrtRSI;
      b_st.site = &ni_emlrtRSI;
      eml_find(&b_st, nhood, ii, jj);
      ii_data = ii->data;
      i = rd->size[0];
      rd->size[0] = ii->size[0];
      emxEnsureCapacity_real_T(&st, rd, i, &wf_emlrtRTEI);
      rd_data = rd->data;
      loop_ub = ii->size[0];
      for (i = 0; i < loop_ub; i++) {
        rd_data[i] = ii_data[i];
      }
    } else {
      st.site = &id_emlrtRSI;
      absxk = nhood->size[1];
      c_nhood = *nhood;
      d_nhood = absxk;
      c_nhood.size = &d_nhood;
      c_nhood.numDimensions = 1;
      b_st.site = &ni_emlrtRSI;
      b_eml_find(&b_st, &c_nhood, ii, jj);
      ii_data = ii->data;
      i = rd->size[0];
      rd->size[0] = ii->size[0];
      emxEnsureCapacity_real_T(&st, rd, i, &wf_emlrtRTEI);
      rd_data = rd->data;
      loop_ub = ii->size[0];
      for (i = 0; i < loop_ub; i++) {
        rd_data[i] = ii_data[i];
      }
    }
    emxFree_int32_T(sp, &jj);
    emxFree_int32_T(sp, &ii);
    absxk = (int32_T)muDoubleScalarFloor(((real_T)nhood->size[0] + 1.0) / 2.0);
    loop_ub = rd->size[0];
    scalarLB = (loop_ub / 2) << 1;
    q = scalarLB - 2;
    for (i = 0; i <= q; i += 2) {
      __m128d r3;
      r3 = _mm_loadu_pd(&rd_data[i]);
      _mm_storeu_pd(&rd_data[i], _mm_sub_pd(r3, _mm_set1_pd(absxk)));
    }
    for (i = scalarLB; i < loop_ub; i++) {
      rd_data[i] -= (real_T)absxk;
    }
    st.site = &jd_emlrtRSI;
    b_st.site = &se_emlrtRSI;
    c_st.site = &te_emlrtRSI;
    d_st.site = &ue_emlrtRSI;
    if (rd->size[0] < 1) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &h_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }
    e_st.site = &ve_emlrtRSI;
    f_st.site = &we_emlrtRSI;
    absxk = rd->size[0];
    if (rd->size[0] <= 2) {
      if (rd->size[0] == 1) {
        scale = rd_data[0];
      } else if (rd_data[0] < rd_data[1]) {
        scale = rd_data[1];
      } else {
        scale = rd_data[0];
      }
    } else {
      boolean_T overflow;
      g_st.site = &ye_emlrtRSI;
      g_st.site = &xe_emlrtRSI;
      scale = rd_data[0];
      h_st.site = &bf_emlrtRSI;
      overflow = (rd->size[0] > 2147483646);
      if (overflow) {
        i_st.site = &tc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (scalarLB = 2; scalarLB <= absxk; scalarLB++) {
        theta = rd_data[scalarLB - 1];
        if (scale < theta) {
          scale = theta;
        }
      }
    }
    st.site = &kd_emlrtRSI;
    b_st.site = &ud_emlrtRSI;
    StrelImpl_StrelImpl(&b_st, b_r.nhood, b_r.height);
    e_emxInit_images_internal_coder(&ok_emlrtRSI);
    b_st.site = &ud_emlrtRSI;
    b_repmat(ok_emlrtRSI.size);
    f_emxFree_images_internal_coder(&st, &ok_emlrtRSI);
    b_st.site = &vd_emlrtRSI;
    StrelImpl_StrelImpl(&b_st, b_r.nhood, b_r.height);
    e_emxInit_images_internal_coder(&pk_emlrtRSI);
    b_st.site = &vd_emlrtRSI;
    b_repmat(pk_emlrtRSI.size);
    f_emxFree_images_internal_coder(&st, &pk_emlrtRSI);
    emxInit_cell_wrap_1_1x0(&qk_emlrtRSI);
    b_st.site = &wd_emlrtRSI;
    b_repmat(qk_emlrtRSI.size);
    emxFree_cell_wrap_1_1x0(&st, &qk_emlrtRSI);
    b_st.site = &xd_emlrtRSI;
    StrelImpl_StrelImpl(&b_st, b_r.nhood, b_r.height);
    e_emxInit_images_internal_coder(&rk_emlrtRSI);
    b_st.site = &xd_emlrtRSI;
    b_repmat(rk_emlrtRSI.size);
    f_emxFree_images_internal_coder(&st, &rk_emlrtRSI);
    theta = 2.0 * ((r - scale) - 1.0) + 1.0;
    if (theta >= 3.0) {
      st.site = &ld_emlrtRSI;
      getNhoodAndHeightFromLineParams(&st, theta, nhood_local, height_local);
      st.site = &pd_emlrtRSI;
      b_r.Flat = b_StrelImpl_StrelImpl(&st, nhood_local, height_local,
                                       b_r.nhood, b_r.height);
      if ((real_T)tempStrelArray->size[1] + 1.0 < 2.147483648E+9) {
        i = tempStrelArray->size[1] + 1;
      } else {
        i = MAX_int32_T;
      }
      scalarLB = tempStrelArray->size[0] * tempStrelArray->size[1];
      tempStrelArray->size[0] = 1;
      tempStrelArray->size[1]++;
      d_emxEnsureCapacity_images_inte(sp, tempStrelArray, scalarLB,
                                      &xf_emlrtRTEI);
      tempStrelArray_data = tempStrelArray->data;
      c_emxCopyStruct_images_internal(sp, &tempStrelArray_data[i - 1], &b_r,
                                      &hg_emlrtRTEI);
      st.site = &qd_emlrtRSI;
      b_r.Flat = b_StrelImpl_StrelImpl(&st, nhood_local, height_local,
                                       b_r.nhood, b_r.height);
      d_emxInit_images_internal_coder(&data);
      i = data.size[0] * data.size[1];
      data.size[0] = 1;
      data.size[1] = 1;
      e_emxEnsureCapacity_images_inte(sp, data.data, data.size, i,
                                      &xf_emlrtRTEI);
      c_emxCopyStruct_images_internal(sp, &data.data[0], &b_r, &ig_emlrtRTEI);
      emxInit_cell_wrap_1_1x2(&b_decomposedData);
      i = b_decomposedData.size[0] * b_decomposedData.size[1];
      b_decomposedData.size[0] = 1;
      b_decomposedData.size[1] = 1;
      emxEnsureCapacity_cell_wrap_12(sp, b_decomposedData.data,
                                     b_decomposedData.size, i, &xf_emlrtRTEI);
      b_decomposedData.data[0].f1->size[0] = 1;
      b_decomposedData.data[0].f1->size[1] = 0;
      st.site = &md_emlrtRSI;
      b_getNhoodAndHeightFromLinePara(&st, theta, nhood_local, height_local);
      st.site = &rd_emlrtRSI;
      b_r.Flat = b_StrelImpl_StrelImpl(&st, nhood_local, height_local,
                                       b_r.nhood, b_r.height);
      if ((real_T)tempStrelArray->size[1] + 1.0 < 2.147483648E+9) {
        i = tempStrelArray->size[1] + 1;
      } else {
        i = MAX_int32_T;
      }
      scalarLB = tempStrelArray->size[0] * tempStrelArray->size[1];
      tempStrelArray->size[0] = 1;
      tempStrelArray->size[1]++;
      d_emxEnsureCapacity_images_inte(sp, tempStrelArray, scalarLB,
                                      &xf_emlrtRTEI);
      tempStrelArray_data = tempStrelArray->data;
      c_emxCopyStruct_images_internal(sp, &tempStrelArray_data[i - 1], &b_r,
                                      &jg_emlrtRTEI);
      st.site = &sd_emlrtRSI;
      b_r.Flat = b_StrelImpl_StrelImpl(&st, nhood_local, height_local,
                                       b_r.nhood, b_r.height);
      i = data.size[0] * data.size[1];
      data.size[0] = 1;
      data.size[1] = 2;
      e_emxEnsureCapacity_images_inte(sp, data.data, data.size, i,
                                      &xf_emlrtRTEI);
      c_emxCopyStruct_images_internal(sp, &data.data[1], &b_r, &kg_emlrtRTEI);
      i = b_decomposedData.size[0] * b_decomposedData.size[1];
      b_decomposedData.size[0] = 1;
      b_decomposedData.size[1] = 2;
      emxEnsureCapacity_cell_wrap_12(sp, b_decomposedData.data,
                                     b_decomposedData.size, i, &xf_emlrtRTEI);
      b_decomposedData.data[1].f1->size[0] = 1;
      b_decomposedData.data[1].f1->size[1] = 0;
      i = expl_temp->size[0] * expl_temp->size[1];
      expl_temp->size[0] = 1;
      expl_temp->size[1] = 2;
      d_emxEnsureCapacity_images_inte(sp, expl_temp, i, &lg_emlrtRTEI);
      expl_temp_data = expl_temp->data;
      for (i = 0; i < 2; i++) {
        c_emxCopyStruct_images_internal(sp, &expl_temp_data[i], &data.data[i],
                                        &lg_emlrtRTEI);
      }
      e_emxFree_images_internal_coder(sp, &data);
      i = decomposedData->size[0] * decomposedData->size[1];
      decomposedData->size[0] = 1;
      decomposedData->size[1] = 2;
      emxEnsureCapacity_cell_wrap_11(sp, decomposedData, i, &mg_emlrtRTEI);
      decomposedData_data = decomposedData->data;
      for (i = 0; i < 2; i++) {
        emxCopyStruct_cell_wrap_1(sp, &decomposedData_data[i],
                                  &b_decomposedData.data[i], &mg_emlrtRTEI);
      }
      emxFree_cell_wrap_1_1x2(sp, &b_decomposedData);
      i = nhood_local->size[0] * nhood_local->size[1];
      nhood_local->size[0] = nhood->size[0];
      nhood_local->size[1] = nhood->size[1];
      emxEnsureCapacity_boolean_T(sp, nhood_local, i, &ng_emlrtRTEI);
      nhood_local_data = nhood_local->data;
      loop_ub = nhood->size[0] * nhood->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        nhood_local_data[i] = b_nhood_data[i];
      }
      st.site = &nd_emlrtRSI;
      e_imdilate(&st, nhood_local, expl_temp, decomposedData, nhood);
    }
    c_emxFree_images_internal_coder(sp, &expl_temp);
    emxFree_boolean_T(sp, &nhood_local);
    emxFree_cell_wrap_1(sp, &decomposedData);
  }
  emxFree_real_T(sp, &height_local);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = nhood->size[0];
  r1->size[1] = nhood->size[1];
  emxEnsureCapacity_real_T(sp, r1, i, &cg_emlrtRTEI);
  r2 = r1->data;
  loop_ub = nhood->size[0] * nhood->size[1];
  for (i = 0; i < loop_ub; i++) {
    r2[i] = 0.0;
  }
  st.site = &td_emlrtRSI;
  b_r.Flat = b_StrelImpl_StrelImpl(&st, nhood, r1, b_r.nhood, b_r.height);
  emxFree_real_T(sp, &r1);
  emxFree_boolean_T(sp, &nhood);
  i = strelArray.size[0] * strelArray.size[1];
  strelArray.size[0] = 1;
  strelArray.size[1] = 1;
  c_emxEnsureCapacity_images_inte(sp, &strelArray.data[0], strelArray.size, i,
                                  &xf_emlrtRTEI);
  c_emxCopyStruct_images_internal(sp, &strelArray.data[0], &b_r, &dg_emlrtRTEI);
  c_emxFreeStruct_images_internal(sp, &b_r);
  i = decomposedStrelArray.size[0] * decomposedStrelArray.size[1];
  decomposedStrelArray.size[0] = 1;
  decomposedStrelArray.size[1] = 1;
  emxEnsureCapacity_cell_wrap_1(sp, &decomposedStrelArray.data[0],
                                decomposedStrelArray.size, i, &xf_emlrtRTEI);
  i = decomposedStrelArray.data[0].f1->size[0] *
      decomposedStrelArray.data[0].f1->size[1];
  decomposedStrelArray.data[0].f1->size[0] = 1;
  decomposedStrelArray.data[0].f1->size[1] = tempStrelArray->size[1];
  d_emxEnsureCapacity_images_inte(sp, decomposedStrelArray.data[0].f1, i,
                                  &eg_emlrtRTEI);
  loop_ub = tempStrelArray->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_emxCopyStruct_images_internal(sp,
                                    &decomposedStrelArray.data[0].f1->data[i],
                                    &tempStrelArray_data[i], &eg_emlrtRTEI);
  }
  c_emxFree_images_internal_coder(sp, &tempStrelArray);
  i = se->StrelArray->size[0] * se->StrelArray->size[1];
  se->StrelArray->size[0] = 1;
  se->StrelArray->size[1] = 1;
  d_emxEnsureCapacity_images_inte(sp, se->StrelArray, i, &fg_emlrtRTEI);
  c_emxCopyStruct_images_internal(sp, &se->StrelArray->data[0],
                                  &strelArray.data[0], &fg_emlrtRTEI);
  d_emxFree_images_internal_coder(sp, &strelArray);
  i = se->DecomposedStrelArray->size[0] * se->DecomposedStrelArray->size[1];
  se->DecomposedStrelArray->size[0] = 1;
  se->DecomposedStrelArray->size[1] = 1;
  emxEnsureCapacity_cell_wrap_11(sp, se->DecomposedStrelArray, i,
                                 &gg_emlrtRTEI);
  emxCopyStruct_cell_wrap_1(sp, &se->DecomposedStrelArray->data[0],
                            &decomposedStrelArray.data[0], &gg_emlrtRTEI);
  emxFree_cell_wrap_1_1x1(sp, &decomposedStrelArray);
  emxFree_real_T(sp, &rd);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void strel_parenReference(const emlrtStack *sp, strel *obj, real_T idx)
{
  d_emxArray_images_internal_code strelArray;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_cell_wrap_1_1x1 decomposedStrelArray;
  emxArray_real_T b_height_tmp_data;
  emxArray_real_T c_height_tmp_data;
  emxArray_real_T height_tmp_data;
  int32_T i = 0;
  int32_T i1 = 0;
  int32_T i2 = 0;
  int32_T i3;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &jg_emlrtRSI;
  b_st.site = &ud_emlrtRSI;
  c_st.site = &yd_emlrtRSI;
  height_tmp_data.size = &i;
  height_tmp_data.allocatedSize = 0;
  height_tmp_data.numDimensions = 1;
  height_tmp_data.canFreeData = false;
  d_st.site = &ae_emlrtRSI;
  any(&d_st, &height_tmp_data);
  b_st.site = &ud_emlrtRSI;
  c_st.site = &de_emlrtRSI;
  b_st.site = &vd_emlrtRSI;
  c_st.site = &yd_emlrtRSI;
  b_height_tmp_data.size = &i1;
  b_height_tmp_data.allocatedSize = 0;
  b_height_tmp_data.numDimensions = 1;
  b_height_tmp_data.canFreeData = false;
  d_st.site = &ae_emlrtRSI;
  any(&d_st, &b_height_tmp_data);
  b_st.site = &vd_emlrtRSI;
  c_st.site = &de_emlrtRSI;
  b_st.site = &wd_emlrtRSI;
  c_st.site = &de_emlrtRSI;
  b_st.site = &xd_emlrtRSI;
  c_st.site = &yd_emlrtRSI;
  c_height_tmp_data.size = &i2;
  c_height_tmp_data.allocatedSize = 0;
  c_height_tmp_data.numDimensions = 1;
  c_height_tmp_data.canFreeData = false;
  d_st.site = &ae_emlrtRSI;
  any(&d_st, &c_height_tmp_data);
  b_st.site = &xd_emlrtRSI;
  c_st.site = &de_emlrtRSI;
  i3 = obj->StrelArray->size[1] - 1;
  if (((int32_T)idx - 1 < 0) || ((int32_T)idx - 1 > i3)) {
    emlrtDynamicBoundsCheckR2012b((int32_T)idx - 1, 0, i3, &dd_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  c_emxInit_images_internal_coder(&strelArray);
  i3 = strelArray.size[0] * strelArray.size[1];
  strelArray.size[0] = 1;
  strelArray.size[1] = 1;
  c_emxEnsureCapacity_images_inte(sp, &strelArray.data[0], strelArray.size, i3,
                                  &tg_emlrtRTEI);
  c_emxCopyStruct_images_internal(sp, &strelArray.data[0],
                                  &obj->StrelArray->data[(int32_T)idx - 1],
                                  &ug_emlrtRTEI);
  i3 = obj->DecomposedStrelArray->size[1] - 1;
  if (((int32_T)idx - 1 < 0) || ((int32_T)idx - 1 > i3)) {
    emlrtDynamicBoundsCheckR2012b((int32_T)idx - 1, 0, i3, &ed_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  emxInit_cell_wrap_1_1x1(&decomposedStrelArray);
  i3 = decomposedStrelArray.size[0] * decomposedStrelArray.size[1];
  decomposedStrelArray.size[0] = 1;
  decomposedStrelArray.size[1] = 1;
  emxEnsureCapacity_cell_wrap_1(sp, &decomposedStrelArray.data[0],
                                decomposedStrelArray.size, i3, &tg_emlrtRTEI);
  i3 = decomposedStrelArray.data[0].f1->size[0] *
       decomposedStrelArray.data[0].f1->size[1];
  decomposedStrelArray.data[0].f1->size[0] = 1;
  decomposedStrelArray.data[0].f1->size[1] =
      obj->DecomposedStrelArray->data[(int32_T)idx - 1].f1->size[1];
  d_emxEnsureCapacity_images_inte(sp, decomposedStrelArray.data[0].f1, i3,
                                  &vg_emlrtRTEI);
  loop_ub = obj->DecomposedStrelArray->data[(int32_T)idx - 1].f1->size[1];
  for (i3 = 0; i3 < loop_ub; i3++) {
    c_emxCopyStruct_images_internal(
        sp, &decomposedStrelArray.data[0].f1->data[i3],
        &obj->DecomposedStrelArray->data[(int32_T)idx - 1].f1->data[i3],
        &vg_emlrtRTEI);
  }
  i3 = obj->StrelArray->size[0] * obj->StrelArray->size[1];
  obj->StrelArray->size[0] = 1;
  obj->StrelArray->size[1] = 1;
  d_emxEnsureCapacity_images_inte(sp, obj->StrelArray, i3, &wg_emlrtRTEI);
  c_emxCopyStruct_images_internal(sp, &obj->StrelArray->data[0],
                                  &strelArray.data[0], &wg_emlrtRTEI);
  d_emxFree_images_internal_coder(sp, &strelArray);
  i3 = obj->DecomposedStrelArray->size[0] * obj->DecomposedStrelArray->size[1];
  obj->DecomposedStrelArray->size[0] = 1;
  obj->DecomposedStrelArray->size[1] = 1;
  emxEnsureCapacity_cell_wrap_11(sp, obj->DecomposedStrelArray, i3,
                                 &xg_emlrtRTEI);
  emxCopyStruct_cell_wrap_1(sp, &obj->DecomposedStrelArray->data[0],
                            &decomposedStrelArray.data[0], &xg_emlrtRTEI);
  emxFree_cell_wrap_1_1x1(sp, &decomposedStrelArray);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (strel.c) */
