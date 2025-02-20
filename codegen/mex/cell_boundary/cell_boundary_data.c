/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cell_boundary_data.c
 *
 * Code generation for function 'cell_boundary_data'
 *
 */

/* Include files */
#include "cell_boundary_data.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;

emlrtContext emlrtContextGlobal = {
    true,                                                 /* bFirstTime */
    false,                                                /* bInitialized */
    131643U,                                              /* fVersionInfo */
    NULL,                                                 /* fErrorFunction */
    "cell_boundary",                                      /* fFunctionName */
    NULL,                                                 /* fRTCallStack */
    false,                                                /* bDebugMode */
    {3334497894U, 1318968193U, 3466680636U, 2802620837U}, /* fSigWrd */
    NULL                                                  /* fSigMem */
};

emlrtRSInfo ab_emlrtRSI = {
    93,                   /* lineNo */
    "validateattributes", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes."
    "m" /* pathName */
};

emlrtRSInfo gb_emlrtRSI =
    {
        37,       /* lineNo */
        "bwpack", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwpack.m" /* pathName
                                                                        */
};

emlrtRSInfo ib_emlrtRSI = {
    17,        /* lineNo */
    "morphop", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+"
    "internal\\morphop.m" /* pathName */
};

emlrtRSInfo tc_emlrtRSI = {
    20,                               /* lineNo */
    "eml_int_forloop_overflow_check", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_"
    "overflow_check.m" /* pathName */
};

emlrtRSInfo uc_emlrtRSI = {
    51,                                                  /* lineNo */
    "StructuringElementHelper/StructuringElementHelper", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pathName */
};

emlrtRSInfo yd_emlrtRSI = {
    26,                    /* lineNo */
    "StrelImpl/StrelImpl", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StrelImpl.m" /* pathName */
};

emlrtRSInfo ae_emlrtRSI = {
    114,           /* lineNo */
    "parseInputs", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StrelImpl.m" /* pathName */
};

emlrtRSInfo
    ce_emlrtRSI =
        {
            143,        /* lineNo */
            "allOrAny", /* fcnName */
            "D:\\Program "
            "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\allOrAny.m" /* pathName */
};

emlrtRSInfo ee_emlrtRSI =
    {
        28,      /* lineNo */
        "colon", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pathName
                                                                         */
};

emlrtRSInfo fe_emlrtRSI =
    {
        125,     /* lineNo */
        "colon", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pathName
                                                                         */
};

emlrtRSInfo df_emlrtRSI = {
    132,           /* lineNo */
    "parseInputs", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StrelImpl.m" /* pathName */
};

emlrtRSInfo jf_emlrtRSI = {
    356,       /* lineNo */
    "morphop", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

emlrtRSInfo tf_emlrtRSI = {
    245,       /* lineNo */
    "morphop", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

emlrtRSInfo uf_emlrtRSI = {
    244,       /* lineNo */
    "morphop", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

emlrtRSInfo vf_emlrtRSI = {
    212,       /* lineNo */
    "morphop", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

emlrtRSInfo wf_emlrtRSI = {
    211,       /* lineNo */
    "morphop", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

emlrtRSInfo yf_emlrtRSI = {
    112,       /* lineNo */
    "morphop", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

emlrtRSInfo ag_emlrtRSI = {
    58,        /* lineNo */
    "morphop", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

emlrtRSInfo bg_emlrtRSI = {
    57,        /* lineNo */
    "morphop", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

emlrtRSInfo cg_emlrtRSI = {
    54,        /* lineNo */
    "morphop", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

emlrtRSInfo ig_emlrtRSI = {
    504,                 /* lineNo */
    "is_strel_all_flat", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

emlrtRSInfo mg_emlrtRSI = {
    518,               /* lineNo */
    "is_strel_all_2d", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

emlrtRSInfo eh_emlrtRSI =
    {
        158,        /* lineNo */
        "eml_find", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                          */
};

emlrtRSInfo vh_emlrtRSI =
    {
        91,         /* lineNo */
        "padarray", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\padarray.m" /* pathName
                                                                          */
};

emlrtRSInfo wh_emlrtRSI =
    {
        20,         /* lineNo */
        "padarray", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\padarray.m" /* pathName
                                                                          */
};

emlrtRSInfo xh_emlrtRSI =
    {
        15,         /* lineNo */
        "padarray", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\padarray.m" /* pathName
                                                                          */
};

emlrtRSInfo yh_emlrtRSI =
    {
        200,          /* lineNo */
        "getPadSize", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\padarray.m" /* pathName
                                                                          */
};

emlrtRSInfo ai_emlrtRSI =
    {
        671,           /* lineNo */
        "ConstantPad", /* fcnName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\padarray.m" /* pathName
                                                                          */
};

emlrtRSInfo gj_emlrtRSI = {
    384,       /* lineNo */
    "morphop", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

emlrtRSInfo hj_emlrtRSI = {
    227,       /* lineNo */
    "morphop", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

emlrtRSInfo ij_emlrtRSI = {
    145,       /* lineNo */
    "morphop", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

emlrtRSInfo kj_emlrtRSI = {
    551,                 /* lineNo */
    "callSharedLibrary", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

emlrtRSInfo lj_emlrtRSI = {
    557,                 /* lineNo */
    "callSharedLibrary", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

emlrtRSInfo mj_emlrtRSI = {
    563,                 /* lineNo */
    "callSharedLibrary", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

emlrtRSInfo nj_emlrtRSI = {
    575,                 /* lineNo */
    "callSharedLibrary", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

emlrtRSInfo oj_emlrtRSI = {
    581,                 /* lineNo */
    "callSharedLibrary", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

emlrtRSInfo pj_emlrtRSI = {
    587,                 /* lineNo */
    "callSharedLibrary", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

emlrtMCInfo c_emlrtMCI = {
    594,                 /* lineNo */
    13,                  /* colNo */
    "callSharedLibrary", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pName */
};

emlrtMCInfo d_emlrtMCI = {
    570,                 /* lineNo */
    13,                  /* colNo */
    "callSharedLibrary", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pName */
};

omp_lock_t emlrtLockGlobal;

omp_nest_lock_t cell_boundary_nestLockGlobal;

emlrtRTEInfo b_emlrtRTEI = {
    128,                                 /* lineNo */
    17,                                  /* colNo */
    "StructuringElementHelper/getnhood", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

emlrtRTEInfo d_emlrtRTEI = {
    14,                    /* lineNo */
    37,                    /* colNo */
    "validatenonnegative", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatenonnegative.m" /* pName */
};

emlrtRTEInfo e_emlrtRTEI = {
    13,                /* lineNo */
    37,                /* colNo */
    "validateinteger", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validateinteger.m" /* pName */
};

emlrtRTEInfo l_emlrtRTEI = {
    150,                                  /* lineNo */
    17,                                   /* colNo */
    "StructuringElementHelper/getheight", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\+strel\\StructuringElementHelper.m" /* pName */
};

emlrtBCInfo x_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    248,       /* lineNo */
    46,        /* colNo */
    "",        /* aName */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m", /* pName */
    0                   /* checkKind */
};

emlrtRTEInfo m_emlrtRTEI =
    {
        672,           /* lineNo */
        21,            /* colNo */
        "ConstantPad", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\padarray.m" /* pName
                                                                          */
};

emlrtRTEInfo n_emlrtRTEI =
    {
        665,           /* lineNo */
        17,            /* colNo */
        "ConstantPad", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\padarray.m" /* pName
                                                                          */
};

emlrtBCInfo ib_emlrtBCI = {
    -1,            /* iFirst */
    -1,            /* iLast */
    667,           /* lineNo */
    19,            /* colNo */
    "",            /* aName */
    "ConstantPad", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\padarray.m", /* pName
                                                                       */
    0 /* checkKind */
};

emlrtBCInfo jb_emlrtBCI = {
    -1,            /* iFirst */
    -1,            /* iLast */
    667,           /* lineNo */
    21,            /* colNo */
    "",            /* aName */
    "ConstantPad", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\padarray.m", /* pName
                                                                       */
    0 /* checkKind */
};

emlrtBCInfo kb_emlrtBCI = {
    -1,            /* iFirst */
    -1,            /* iLast */
    724,           /* lineNo */
    19,            /* colNo */
    "",            /* aName */
    "ConstantPad", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\padarray.m", /* pName
                                                                       */
    0 /* checkKind */
};

emlrtBCInfo lb_emlrtBCI = {
    -1,            /* iFirst */
    -1,            /* iLast */
    724,           /* lineNo */
    58,            /* colNo */
    "",            /* aName */
    "ConstantPad", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\padarray.m", /* pName
                                                                       */
    0 /* checkKind */
};

emlrtBCInfo mb_emlrtBCI = {
    -1,            /* iFirst */
    -1,            /* iLast */
    673,           /* lineNo */
    19,            /* colNo */
    "",            /* aName */
    "ConstantPad", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\padarray.m", /* pName
                                                                       */
    0 /* checkKind */
};

emlrtBCInfo nb_emlrtBCI = {
    -1,            /* iFirst */
    -1,            /* iLast */
    673,           /* lineNo */
    21,            /* colNo */
    "",            /* aName */
    "ConstantPad", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\padarray.m", /* pName
                                                                       */
    0 /* checkKind */
};

emlrtBCInfo ob_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    354,       /* lineNo */
    38,        /* colNo */
    "",        /* aName */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m", /* pName */
    0                   /* checkKind */
};

emlrtDCInfo r_emlrtDCI = {
    540,           /* lineNo */
    35,            /* colNo */
    "ConstantPad", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\padarray.m", /* pName
                                                                       */
    1 /* checkKind */
};

emlrtRTEInfo y_emlrtRTEI = {
    101,       /* lineNo */
    5,         /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pName */
};

emlrtDCInfo cb_emlrtDCI = {
    538,           /* lineNo */
    35,            /* colNo */
    "ConstantPad", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\padarray.m", /* pName
                                                                       */
    1 /* checkKind */
};

emlrtRTEInfo hb_emlrtRTEI =
    {
        28,      /* lineNo */
        9,       /* colNo */
        "colon", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pName
                                                                         */
};

emlrtRTEInfo xb_emlrtRTEI = {
    60,       /* lineNo */
    20,       /* colNo */
    "bsxfun", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m" /* pName
                                                                        */
};

emlrtRTEInfo fc_emlrtRTEI = {
    504,       /* lineNo */
    17,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pName */
};

emlrtRTEInfo hc_emlrtRTEI = {
    62,        /* lineNo */
    5,         /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pName */
};

emlrtRTEInfo ic_emlrtRTEI = {
    518,       /* lineNo */
    28,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pName */
};

emlrtRTEInfo jc_emlrtRTEI =
    {
        540,        /* lineNo */
        28,         /* colNo */
        "padarray", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\padarray.m" /* pName
                                                                          */
};

emlrtRTEInfo kc_emlrtRTEI = {
    241,       /* lineNo */
    27,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pName */
};

emlrtRTEInfo lc_emlrtRTEI = {
    244,       /* lineNo */
    28,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pName */
};

emlrtRTEInfo mc_emlrtRTEI = {
    245,       /* lineNo */
    29,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pName */
};

emlrtRTEInfo tc_emlrtRTEI = {
    377,       /* lineNo */
    9,         /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pName */
};

emlrtRTEInfo xc_emlrtRTEI = {
    211,       /* lineNo */
    5,         /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pName */
};

emlrtRTEInfo yc_emlrtRTEI = {
    212,       /* lineNo */
    5,         /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pName */
};

emlrtRTEInfo df_emlrtRTEI =
    {
        538,        /* lineNo */
        28,         /* colNo */
        "padarray", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\padarray.m" /* pName
                                                                          */
};

emlrtRTEInfo ef_emlrtRTEI =
    {
        26,       /* lineNo */
        26,       /* colNo */
        "bwpack", /* fName */
        "D:\\Program "
        "Files\\MATLAB\\2023b\\toolbox\\images\\images\\eml\\bwpack.m" /* pName
                                                                        */
};

emlrtRTEInfo ff_emlrtRTEI = {
    240,       /* lineNo */
    24,        /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pName */
};

emlrtRTEInfo gf_emlrtRTEI = {
    375,       /* lineNo */
    9,         /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pName */
};

emlrtRTEInfo hf_emlrtRTEI = {
    222,       /* lineNo */
    5,         /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pName */
};

emlrtRTEInfo if_emlrtRTEI = {
    240,       /* lineNo */
    1,         /* colNo */
    "morphop", /* fName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pName */
};

const boolean_T bv[25] = {true,  false, false, false, false, false, true,
                          false, false, false, false, false, true,  false,
                          false, false, false, false, true,  false, false,
                          false, false, false, true};

const boolean_T bv1[25] = {false, false, false, false, true,  false, false,
                           false, true,  false, false, false, true,  false,
                           false, false, true,  false, false, false, true,
                           false, false, false, false};

const boolean_T bv2[9] = {true,  false, false, false, true,
                          false, false, false, true};

const boolean_T bv3[9] = {false, false, true,  false, true,
                          false, true,  false, false};

const char_T cv[21] = {'U', 'n', 'r', 'e', 'c', 'o', 'g', 'n', 'i', 'z', 'e',
                       'd', ' ', 'F', 'u', 'n', 'c', 't', 'i', 'o', 'n'};

emlrtRSInfo bk_emlrtRSI = {
    570,                 /* lineNo */
    "callSharedLibrary", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

emlrtRSInfo ck_emlrtRSI = {
    594,                 /* lineNo */
    "callSharedLibrary", /* fcnName */
    "D:\\Program "
    "Files\\MATLAB\\2023b\\toolbox\\images\\images\\+images\\+internal\\+"
    "coder\\morphop.m" /* pathName */
};

/* End of code generation (cell_boundary_data.c) */
