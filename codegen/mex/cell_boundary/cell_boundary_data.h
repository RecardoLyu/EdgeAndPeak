/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cell_boundary_data.h
 *
 * Code generation for function 'cell_boundary_data'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;
extern emlrtRSInfo ab_emlrtRSI;
extern emlrtRSInfo gb_emlrtRSI;
extern emlrtRSInfo ib_emlrtRSI;
extern emlrtRSInfo tc_emlrtRSI;
extern emlrtRSInfo uc_emlrtRSI;
extern emlrtRSInfo yd_emlrtRSI;
extern emlrtRSInfo ae_emlrtRSI;
extern emlrtRSInfo ce_emlrtRSI;
extern emlrtRSInfo ee_emlrtRSI;
extern emlrtRSInfo fe_emlrtRSI;
extern emlrtRSInfo df_emlrtRSI;
extern emlrtRSInfo jf_emlrtRSI;
extern emlrtRSInfo tf_emlrtRSI;
extern emlrtRSInfo uf_emlrtRSI;
extern emlrtRSInfo vf_emlrtRSI;
extern emlrtRSInfo wf_emlrtRSI;
extern emlrtRSInfo yf_emlrtRSI;
extern emlrtRSInfo ag_emlrtRSI;
extern emlrtRSInfo bg_emlrtRSI;
extern emlrtRSInfo cg_emlrtRSI;
extern emlrtRSInfo ig_emlrtRSI;
extern emlrtRSInfo mg_emlrtRSI;
extern emlrtRSInfo eh_emlrtRSI;
extern emlrtRSInfo vh_emlrtRSI;
extern emlrtRSInfo wh_emlrtRSI;
extern emlrtRSInfo xh_emlrtRSI;
extern emlrtRSInfo yh_emlrtRSI;
extern emlrtRSInfo ai_emlrtRSI;
extern emlrtRSInfo gj_emlrtRSI;
extern emlrtRSInfo hj_emlrtRSI;
extern emlrtRSInfo ij_emlrtRSI;
extern emlrtRSInfo kj_emlrtRSI;
extern emlrtRSInfo lj_emlrtRSI;
extern emlrtRSInfo mj_emlrtRSI;
extern emlrtRSInfo nj_emlrtRSI;
extern emlrtRSInfo oj_emlrtRSI;
extern emlrtRSInfo pj_emlrtRSI;
extern emlrtMCInfo c_emlrtMCI;
extern emlrtMCInfo d_emlrtMCI;
extern omp_lock_t emlrtLockGlobal;
extern omp_nest_lock_t cell_boundary_nestLockGlobal;
extern emlrtRTEInfo b_emlrtRTEI;
extern emlrtRTEInfo d_emlrtRTEI;
extern emlrtRTEInfo e_emlrtRTEI;
extern emlrtRTEInfo l_emlrtRTEI;
extern emlrtBCInfo x_emlrtBCI;
extern emlrtRTEInfo m_emlrtRTEI;
extern emlrtRTEInfo n_emlrtRTEI;
extern emlrtBCInfo ib_emlrtBCI;
extern emlrtBCInfo jb_emlrtBCI;
extern emlrtBCInfo kb_emlrtBCI;
extern emlrtBCInfo lb_emlrtBCI;
extern emlrtBCInfo mb_emlrtBCI;
extern emlrtBCInfo nb_emlrtBCI;
extern emlrtBCInfo ob_emlrtBCI;
extern emlrtDCInfo r_emlrtDCI;
extern emlrtRTEInfo y_emlrtRTEI;
extern emlrtDCInfo cb_emlrtDCI;
extern emlrtRTEInfo hb_emlrtRTEI;
extern emlrtRTEInfo xb_emlrtRTEI;
extern emlrtRTEInfo fc_emlrtRTEI;
extern emlrtRTEInfo hc_emlrtRTEI;
extern emlrtRTEInfo ic_emlrtRTEI;
extern emlrtRTEInfo jc_emlrtRTEI;
extern emlrtRTEInfo kc_emlrtRTEI;
extern emlrtRTEInfo lc_emlrtRTEI;
extern emlrtRTEInfo mc_emlrtRTEI;
extern emlrtRTEInfo tc_emlrtRTEI;
extern emlrtRTEInfo xc_emlrtRTEI;
extern emlrtRTEInfo yc_emlrtRTEI;
extern emlrtRTEInfo df_emlrtRTEI;
extern emlrtRTEInfo ef_emlrtRTEI;
extern emlrtRTEInfo ff_emlrtRTEI;
extern emlrtRTEInfo gf_emlrtRTEI;
extern emlrtRTEInfo hf_emlrtRTEI;
extern emlrtRTEInfo if_emlrtRTEI;
extern const boolean_T bv[25];
extern const boolean_T bv1[25];
extern const boolean_T bv2[9];
extern const boolean_T bv3[9];
extern const char_T cv[21];
extern emlrtRSInfo bk_emlrtRSI;
extern emlrtRSInfo ck_emlrtRSI;

/* End of code generation (cell_boundary_data.h) */
