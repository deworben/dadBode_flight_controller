/* Include files */

#include "flightControlSystem_sfun.h"
#include "c1_flightControlSystem.h"
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c1_emlrtMCI = { 1,  /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "N:\\MATLAB\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pName */
};

static emlrtRSInfo c1_emlrtRSI = { 1,  /* lineNo */
  "matlabCodegenHandle",               /* fcnName */
  "N:\\MATLAB\\toolbox\\coder\\coder\\+coder\\+internal\\matlabCodegenHandle.p"/* pathName */
};

static emlrtRSInfo c1_b_emlrtRSI = { 1,/* lineNo */
  "SystemCore",                        /* fcnName */
  "N:\\MATLAB\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pathName */
};

static emlrtRSInfo c1_c_emlrtRSI = { 10,/* lineNo */
  "Image Processing System/LZ_flag is set to 1 when the landing zone  is detected, and 0 otherwise",/* fcnName */
  "#flightControlSystem:2454"          /* pathName */
};

static emlrtRSInfo c1_d_emlrtRSI = { 41,/* lineNo */
  "Image Processing System/LZ_flag is set to 1 when the landing zone  is detected, and 0 otherwise",/* fcnName */
  "#flightControlSystem:2454"          /* pathName */
};

static emlrtRSInfo c1_e_emlrtRSI = { 42,/* lineNo */
  "Image Processing System/LZ_flag is set to 1 when the landing zone  is detected, and 0 otherwise",/* fcnName */
  "#flightControlSystem:2454"          /* pathName */
};

static emlrtRSInfo c1_f_emlrtRSI = { 54,/* lineNo */
  "Image Processing System/LZ_flag is set to 1 when the landing zone  is detected, and 0 otherwise",/* fcnName */
  "#flightControlSystem:2454"          /* pathName */
};

static emlrtRSInfo c1_g_emlrtRSI = { 51,/* lineNo */
  "rgb2hsv",                           /* fcnName */
  "N:\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\rgb2hsv.m"/* pathName */
};

static emlrtRSInfo c1_h_emlrtRSI = { 1,/* lineNo */
  "BlobAnalysis",                      /* fcnName */
  "N:\\MATLAB\\toolbox\\vision\\vision\\+visioncodegen\\BlobAnalysis.p"/* pathName */
};

static emlrtRSInfo c1_i_emlrtRSI = { 1,/* lineNo */
  "System",                            /* fcnName */
  "N:\\MATLAB\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\System.p"/* pathName */
};

static emlrtRSInfo c1_j_emlrtRSI = { 1,/* lineNo */
  "SystemProp",                        /* fcnName */
  "N:\\MATLAB\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"/* pathName */
};

static emlrtRSInfo c1_k_emlrtRSI = { 1,/* lineNo */
  "Nondirect",                         /* fcnName */
  "N:\\MATLAB\\toolbox\\matlab\\system\\+matlab\\+system\\+mixin\\Nondirect.p"/* pathName */
};

static emlrtRSInfo c1_l_emlrtRSI = { 1,/* lineNo */
  "ProcessConstructorArguments",       /* fcnName */
  "N:\\MATLAB\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\ProcessConstructorArguments.p"/* pathName */
};

static emlrtRTEInfo c1_emlrtRTEI = { 1,/* lineNo */
  1,                                   /* colNo */
  "BlobAnalysis",                      /* fName */
  "N:\\MATLAB\\toolbox\\vision\\vision\\+visioncodegen\\BlobAnalysis.p"/* pName */
};

static emlrtRTEInfo c1_b_emlrtRTEI = { 54,/* lineNo */
  7,                                   /* colNo */
  "Image Processing System/LZ_flag is set to 1 when the landing zone  is detected, and 0 otherwise",/* fName */
  "#flightControlSystem:2454"          /* pName */
};

static emlrtBCInfo c1_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  13,                                  /* colNo */
  "bboxOut",                           /* aName */
  "Image Processing System/LZ_flag is set to 1 when the landing zone  is detected, and 0 otherwise",/* fName */
  "#flightControlSystem:2454",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_emlrtDCI = { 59, /* lineNo */
  13,                                  /* colNo */
  "Image Processing System/LZ_flag is set to 1 when the landing zone  is detected, and 0 otherwise",/* fName */
  "#flightControlSystem:2454",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_b_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  29,                                  /* colNo */
  "bboxOut",                           /* aName */
  "Image Processing System/LZ_flag is set to 1 when the landing zone  is detected, and 0 otherwise",/* fName */
  "#flightControlSystem:2454",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_b_emlrtDCI = { 59,/* lineNo */
  29,                                  /* colNo */
  "Image Processing System/LZ_flag is set to 1 when the landing zone  is detected, and 0 otherwise",/* fName */
  "#flightControlSystem:2454",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_c_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  18,                                  /* colNo */
  "bboxOut",                           /* aName */
  "Image Processing System/LZ_flag is set to 1 when the landing zone  is detected, and 0 otherwise",/* fName */
  "#flightControlSystem:2454",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_c_emlrtDCI = { 60,/* lineNo */
  18,                                  /* colNo */
  "Image Processing System/LZ_flag is set to 1 when the landing zone  is detected, and 0 otherwise",/* fName */
  "#flightControlSystem:2454",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_d_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  46,                                  /* colNo */
  "bboxOut",                           /* aName */
  "Image Processing System/LZ_flag is set to 1 when the landing zone  is detected, and 0 otherwise",/* fName */
  "#flightControlSystem:2454",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_d_emlrtDCI = { 60,/* lineNo */
  46,                                  /* colNo */
  "Image Processing System/LZ_flag is set to 1 when the landing zone  is detected, and 0 otherwise",/* fName */
  "#flightControlSystem:2454",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_e_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  66,                                  /* lineNo */
  36,                                  /* colNo */
  "bboxOut",                           /* aName */
  "Image Processing System/LZ_flag is set to 1 when the landing zone  is detected, and 0 otherwise",/* fName */
  "#flightControlSystem:2454",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_e_emlrtDCI = { 66,/* lineNo */
  36,                                  /* colNo */
  "Image Processing System/LZ_flag is set to 1 when the landing zone  is detected, and 0 otherwise",/* fName */
  "#flightControlSystem:2454",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_f_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  66,                                  /* lineNo */
  20,                                  /* colNo */
  "bboxOut",                           /* aName */
  "Image Processing System/LZ_flag is set to 1 when the landing zone  is detected, and 0 otherwise",/* fName */
  "#flightControlSystem:2454",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_f_emlrtDCI = { 66,/* lineNo */
  20,                                  /* colNo */
  "Image Processing System/LZ_flag is set to 1 when the landing zone  is detected, and 0 otherwise",/* fName */
  "#flightControlSystem:2454",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_g_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  67,                                  /* lineNo */
  36,                                  /* colNo */
  "bboxOut",                           /* aName */
  "Image Processing System/LZ_flag is set to 1 when the landing zone  is detected, and 0 otherwise",/* fName */
  "#flightControlSystem:2454",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_g_emlrtDCI = { 67,/* lineNo */
  36,                                  /* colNo */
  "Image Processing System/LZ_flag is set to 1 when the landing zone  is detected, and 0 otherwise",/* fName */
  "#flightControlSystem:2454",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_h_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  67,                                  /* lineNo */
  20,                                  /* colNo */
  "bboxOut",                           /* aName */
  "Image Processing System/LZ_flag is set to 1 when the landing zone  is detected, and 0 otherwise",/* fName */
  "#flightControlSystem:2454",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_h_emlrtDCI = { 67,/* lineNo */
  20,                                  /* colNo */
  "Image Processing System/LZ_flag is set to 1 when the landing zone  is detected, and 0 otherwise",/* fName */
  "#flightControlSystem:2454",         /* pName */
  1                                    /* checkKind */
};

/* Function Declarations */
static void initialize_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void initialize_params_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void enable_c1_flightControlSystem(SFc1_flightControlSystemInstanceStruct
  *chartInstance);
static void disable_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void c1_update_jit_animation_state_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void c1_do_animation_call_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void ext_mode_exec_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void set_sim_state_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance, const mxArray *c1_st);
static void sf_gateway_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void mdl_start_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void mdl_terminate_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void c1_chartstep_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c1_sp);
static void initSimStructsc1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void c1_matlabCodegenHandle_matlabCodegenDestructor
  (SFc1_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_visioncodegen_BlobAnalysis *c1_obj);
static void c1_rgb2hsv(SFc1_flightControlSystemInstanceStruct *chartInstance,
  uint8_T c1_X[57600], real_T c1_hsv[57600]);
static c1_visioncodegen_BlobAnalysis *c1_BlobAnalysis_BlobAnalysis
  (SFc1_flightControlSystemInstanceStruct *chartInstance,
   c1_visioncodegen_BlobAnalysis *c1_obj);
static void c1_SystemCore_step(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_visioncodegen_BlobAnalysis *c1_obj,
  boolean_T c1_varargin_1[19200], int32_T c1_varargout_1_data[], int32_T
  c1_varargout_1_size[2], real_T c1_varargout_2_data[], int32_T
  c1_varargout_2_size[2], int32_T c1_varargout_3_data[], int32_T
  c1_varargout_3_size[2]);
static void c1_BlobAnalysis_outputImpl(SFc1_flightControlSystemInstanceStruct
  *chartInstance, c1_visioncodegen_BlobAnalysis *c1_obj, boolean_T
  c1_varargin_1[19200], int32_T c1_varargout_1_data[], int32_T
  c1_varargout_1_size[2], real_T c1_varargout_2_data[], int32_T
  c1_varargout_2_size[2], int32_T c1_varargout_3_data[], int32_T
  c1_varargout_3_size[2]);
static int32_T c1_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_LZ_flag, const char_T *c1_identifier);
static int32_T c1_b_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static boolean_T c1_c_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_isInitialized, const char_T *c1_identifier);
static boolean_T c1_d_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static uint8_T c1_e_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_flightControlSystem, const
  char_T *c1_identifier);
static uint8_T c1_f_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static const mxArray *c1_chart_data_browse_helper
  (SFc1_flightControlSystemInstanceStruct *chartInstance, int32_T c1_ssIdNumber);
static void init_dsm_address_info(SFc1_flightControlSystemInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc1_flightControlSystemInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c1_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c1_is_active_c1_flightControlSystem = 0U;
}

static void initialize_params_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c1_flightControlSystem(SFc1_flightControlSystemInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c1_update_jit_animation_state_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_do_animation_call_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  const mxArray *c1_st;
  const mxArray *c1_y = NULL;
  const mxArray *c1_b_y = NULL;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_e_y = NULL;
  const mxArray *c1_f_y = NULL;
  c1_st = NULL;
  c1_st = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_createcellmatrix(5, 1), false);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", chartInstance->c1_LZ_flag, 6, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c1_y, 0, c1_b_y);
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", chartInstance->c1_LZ_x, 6, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c1_y, 1, c1_c_y);
  c1_d_y = NULL;
  sf_mex_assign(&c1_d_y, sf_mex_create("y", chartInstance->c1_LZ_y, 6, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c1_y, 2, c1_d_y);
  c1_e_y = NULL;
  sf_mex_assign(&c1_e_y, sf_mex_create("y", &chartInstance->c1_isInitialized, 11,
    0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 3, c1_e_y);
  c1_f_y = NULL;
  sf_mex_assign(&c1_f_y, sf_mex_create("y",
    &chartInstance->c1_is_active_c1_flightControlSystem, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c1_y, 4, c1_f_y);
  sf_mex_assign(&c1_st, c1_y, false);
  return c1_st;
}

static void set_sim_state_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance, const mxArray *c1_st)
{
  const mxArray *c1_u;
  chartInstance->c1_doneDoubleBufferReInit = true;
  c1_u = sf_mex_dup(c1_st);
  *chartInstance->c1_LZ_flag = c1_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 0)), "LZ_flag");
  *chartInstance->c1_LZ_x = c1_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 1)), "LZ_x");
  *chartInstance->c1_LZ_y = c1_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 2)), "LZ_y");
  chartInstance->c1_isInitialized = c1_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_u, 3)), "isInitialized");
  chartInstance->c1_is_active_c1_flightControlSystem = c1_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 4)),
     "is_active_c1_flightControlSystem");
  sf_mex_destroy(&c1_u);
  sf_mex_destroy(&c1_st);
}

static void sf_gateway_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  emlrtStack c1_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  int32_T c1_i;
  c1_st.tls = chartInstance->c1_fEmlrtCtx;
  chartInstance->c1_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c1_i = 0; c1_i < 57600; c1_i++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 0U, (real_T)
                      (*chartInstance->c1_frame_info)[c1_i]);
  }

  chartInstance->c1_sfEvent = CALL_EVENT;
  c1_chartstep_c1_flightControlSystem(chartInstance, &c1_st);
  c1_do_animation_call_c1_flightControlSystem(chartInstance);
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 1U, (real_T)
                    *chartInstance->c1_LZ_flag);
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 2U, (real_T)
                    *chartInstance->c1_LZ_x);
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 3U, (real_T)
                    *chartInstance->c1_LZ_y);
}

static void mdl_start_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  static const uint32_T c1_decisionTxtStartIdx = 0U;
  static const uint32_T c1_decisionTxtEndIdx = 0U;
  static const int32_T c1_condTxtStartIdx[3] = { 1389, 1468, 1496 };

  static const int32_T c1_condTxtEndIdx[3] = { 1446, 1490, 1520 };

  static const int32_T c1_postfixPredicateTree[5] = { 0, 1, 2, -3, -3 };

  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c1_chart_data_browse_helper);
  chartInstance->c1_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c1_RuntimeVar,
    &chartInstance->c1_IsDebuggerActive,
    &chartInstance->c1_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c1_mlFcnLineNumber);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c1_covrtInstance, 1U, 0U, 1U,
    51U);
  covrtChartInitFcn(chartInstance->c1_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c1_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c1_decisionTxtStartIdx, &c1_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c1_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 4U, 0U, 1U, 0U, 1U, 0U,
                  6U, 0U, 1U, 0U, 3U, 1U);
  covrtEmlFcnInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 2096);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U, 1389,
    -1, 1423);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 1U, 1393,
    -1, 1422);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 2U, 1820,
    -1, 1851);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 3U, 1836,
    -1, 1851);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 4U, 1936,
    -1, 1967);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 5U, 1952,
    -1, 1967);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U, 1385, 1522, -1,
                    1977);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U, 1215, 1239,
                     1981);
  covrtEmlMCDCInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U, 1388, 1522,
                      3U, 0U, c1_condTxtStartIdx, c1_condTxtEndIdx, 5U,
                      c1_postfixPredicateTree);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U, 1389,
    1446, -1, 2U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 1U, 1468,
    1490, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 2U, 1496,
    1520, -1, 2U);
}

static void mdl_cleanup_runtime_resources_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c1_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c1_covrtInstance);
}

static void c1_chartstep_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c1_sp)
{
  emlrtStack c1_st;
  int32_T c1_i;
  uint8_T c1_uv[57600];
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  boolean_T c1_sliderBW[19200];
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  boolean_T c1_bv[19200];
  int32_T c1_i9;
  int32_T c1_i10;
  int32_T c1_i11;
  int32_T c1_i12;
  int32_T c1_i13;
  int32_T c1_i14;
  int32_T c1_i15;
  int32_T c1_i16;
  int32_T c1_i17;
  int32_T c1_i18;
  int32_T c1_i19;
  int32_T c1_i20;
  int32_T c1_i21;
  int32_T c1_i22;
  int32_T c1_i23;
  int32_T c1_objectArea_data[50];
  int32_T c1_objectArea_size[2];
  real_T c1_objCentroid_data[100];
  int32_T c1_objCentroid_size[2];
  int32_T c1_bboxOut_data[200];
  int32_T c1_bboxOut_size[2];
  int32_T c1_i24;
  int32_T c1_b_LZ_flag;
  real_T c1_size_of_bbox[2];
  int32_T c1_b_LZ_x;
  int32_T c1_b_LZ_y;
  real_T c1_d;
  int32_T c1_i25;
  int32_T c1_b_i;
  real_T c1_c_i;
  int32_T c1_i26;
  int32_T c1_i27;
  int32_T c1_i28;
  int32_T c1_i29;
  int32_T c1_q0;
  int32_T c1_q1;
  boolean_T c1_covSaturation;
  int32_T c1_qY;
  int32_T c1_x;
  int32_T c1_b_x;
  int32_T c1_c_x;
  int32_T c1_y;
  int32_T c1_i30;
  boolean_T c1_b_covSaturation;
  real_T c1_d1;
  boolean_T c1_guard1 = false;
  int32_T c1_saturatedUnaryMinus;
  int32_T c1_i31;
  int32_T c1_i32;
  real_T c1_d2;
  int32_T c1_i33;
  int32_T c1_i34;
  real_T c1_d3;
  int32_T c1_i35;
  int32_T c1_i36;
  int32_T c1_d_x;
  int32_T c1_e_x;
  int32_T c1_f_x;
  int32_T c1_g_x;
  int32_T c1_h_x;
  int32_T c1_i_x;
  real_T c1_z;
  real_T c1_d4;
  boolean_T c1_c_covSaturation;
  int32_T c1_i37;
  int32_T c1_b_z;
  int32_T c1_i38;
  int32_T c1_i39;
  int32_T c1_b_q0;
  int32_T c1_b_q1;
  boolean_T c1_d_covSaturation;
  int32_T c1_b_qY;
  int32_T c1_i40;
  int32_T c1_i41;
  int32_T c1_j_x;
  int32_T c1_k_x;
  int32_T c1_l_x;
  int32_T c1_m_x;
  int32_T c1_n_x;
  int32_T c1_o_x;
  real_T c1_c_z;
  real_T c1_d5;
  boolean_T c1_e_covSaturation;
  int32_T c1_i42;
  int32_T c1_d_z;
  int32_T c1_i43;
  int32_T c1_i44;
  int32_T c1_c_q0;
  int32_T c1_c_q1;
  boolean_T c1_f_covSaturation;
  int32_T c1_c_qY;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(c1_sp);
  emlrtPushHeapReferenceStackR2018aSL(c1_sp, chartInstance,
    &chartInstance->c1_hBlobAnalysis,
    &c1_matlabCodegenHandle_matlabCodegenDestructor);
  chartInstance->c1_hBlobAnalysis.matlabCodegenIsDeleted = true;
  covrtEmlFcnEval(chartInstance->c1_covrtInstance, 4U, 0, 0);
  c1_st.site = &c1_c_emlrtRSI;
  for (c1_i = 0; c1_i < 57600; c1_i++) {
    c1_uv[c1_i] = (*chartInstance->c1_frame_info)[c1_i];
  }

  c1_rgb2hsv(chartInstance, c1_uv, chartInstance->c1_I);
  c1_i1 = 0;
  for (c1_i2 = 0; c1_i2 < 160; c1_i2++) {
    for (c1_i4 = 0; c1_i4 < 120; c1_i4++) {
      c1_sliderBW[c1_i4 + c1_i1] = (chartInstance->c1_I[c1_i4 + c1_i1] >= 0.986);
    }

    c1_i1 += 120;
  }

  c1_i3 = 0;
  for (c1_i5 = 0; c1_i5 < 160; c1_i5++) {
    for (c1_i7 = 0; c1_i7 < 120; c1_i7++) {
      c1_bv[c1_i7 + c1_i3] = (chartInstance->c1_I[c1_i7 + c1_i3] <= 0.026);
    }

    c1_i3 += 120;
  }

  for (c1_i6 = 0; c1_i6 < 19200; c1_i6++) {
    c1_sliderBW[c1_i6] = (c1_sliderBW[c1_i6] || c1_bv[c1_i6]);
  }

  c1_i8 = 0;
  for (c1_i9 = 0; c1_i9 < 160; c1_i9++) {
    for (c1_i11 = 0; c1_i11 < 120; c1_i11++) {
      c1_bv[c1_i11 + c1_i8] = (chartInstance->c1_I[(c1_i11 + c1_i8) + 19200] >=
        0.0);
    }

    c1_i8 += 120;
  }

  for (c1_i10 = 0; c1_i10 < 19200; c1_i10++) {
    c1_sliderBW[c1_i10] = (c1_sliderBW[c1_i10] && c1_bv[c1_i10]);
  }

  c1_i12 = 0;
  for (c1_i13 = 0; c1_i13 < 160; c1_i13++) {
    for (c1_i15 = 0; c1_i15 < 120; c1_i15++) {
      c1_bv[c1_i15 + c1_i12] = (chartInstance->c1_I[(c1_i15 + c1_i12) + 19200] <=
        1.0);
    }

    c1_i12 += 120;
  }

  for (c1_i14 = 0; c1_i14 < 19200; c1_i14++) {
    c1_sliderBW[c1_i14] = (c1_sliderBW[c1_i14] && c1_bv[c1_i14]);
  }

  c1_i16 = 0;
  for (c1_i17 = 0; c1_i17 < 160; c1_i17++) {
    for (c1_i19 = 0; c1_i19 < 120; c1_i19++) {
      c1_bv[c1_i19 + c1_i16] = (chartInstance->c1_I[(c1_i19 + c1_i16) + 38400] >=
        0.906);
    }

    c1_i16 += 120;
  }

  for (c1_i18 = 0; c1_i18 < 19200; c1_i18++) {
    c1_sliderBW[c1_i18] = (c1_sliderBW[c1_i18] && c1_bv[c1_i18]);
  }

  c1_i20 = 0;
  for (c1_i21 = 0; c1_i21 < 160; c1_i21++) {
    for (c1_i23 = 0; c1_i23 < 120; c1_i23++) {
      c1_bv[c1_i23 + c1_i20] = (chartInstance->c1_I[(c1_i23 + c1_i20) + 38400] <=
        1.0);
    }

    c1_i20 += 120;
  }

  for (c1_i22 = 0; c1_i22 < 19200; c1_i22++) {
    c1_sliderBW[c1_i22] = (c1_sliderBW[c1_i22] && c1_bv[c1_i22]);
  }

  c1_st.site = &c1_d_emlrtRSI;
  c1_BlobAnalysis_BlobAnalysis(chartInstance, &chartInstance->c1_hBlobAnalysis);
  c1_st.site = &c1_e_emlrtRSI;
  c1_SystemCore_step(chartInstance, &c1_st, &chartInstance->c1_hBlobAnalysis,
                     c1_sliderBW, c1_objectArea_data, c1_objectArea_size,
                     c1_objCentroid_data, c1_objCentroid_size, c1_bboxOut_data,
                     c1_bboxOut_size);
  for (c1_i24 = 0; c1_i24 < 2; c1_i24++) {
    c1_size_of_bbox[c1_i24] = (real_T)c1_bboxOut_size[c1_i24];
  }

  c1_b_LZ_flag = 0;
  c1_b_LZ_x = 0;
  c1_b_LZ_y = 0;
  c1_d = c1_size_of_bbox[0];
  c1_i25 = (int32_T)c1_d;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, c1_d, mxDOUBLE_CLASS, c1_i25,
    &c1_b_emlrtRTEI, c1_sp);
  c1_b_i = 0;
  while (c1_b_i <= c1_i25 - 1) {
    c1_c_i = 1.0 + (real_T)c1_b_i;
    covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 0, 1);
    c1_i26 = (int32_T)emlrtIntegerCheckR2012b(c1_c_i, &c1_emlrtDCI, c1_sp);
    c1_i27 = 3;
    c1_i28 = (int32_T)emlrtIntegerCheckR2012b(c1_c_i, &c1_b_emlrtDCI, c1_sp);
    c1_i29 = 4;
    c1_q0 = c1_bboxOut_data[(emlrtDynamicBoundsCheckR2012b(c1_i26, 1,
      c1_bboxOut_size[0], &c1_emlrtBCI, c1_sp) + c1_bboxOut_size[0] *
      (emlrtDynamicBoundsCheckR2012b(c1_i27, 1, c1_bboxOut_size[1], &c1_emlrtBCI,
      c1_sp) - 1)) - 1];
    c1_q1 = c1_bboxOut_data[(emlrtDynamicBoundsCheckR2012b(c1_i28, 1,
      c1_bboxOut_size[0], &c1_b_emlrtBCI, c1_sp) + c1_bboxOut_size[0] *
      (emlrtDynamicBoundsCheckR2012b(c1_i29, 1, c1_bboxOut_size[1],
      &c1_b_emlrtBCI, c1_sp) - 1)) - 1];
    c1_covSaturation = false;
    if ((c1_q0 >= 0) && (c1_q1 < c1_q0 - MAX_int32_T)) {
      c1_covSaturation = true;
      c1_qY = MAX_int32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 1393, 29);
    } else if ((c1_q0 < 0) && (c1_q1 > c1_q0 - MIN_int32_T)) {
      c1_covSaturation = true;
      c1_qY = MIN_int32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 1393, 29);
    } else {
      c1_qY = c1_q0 - c1_q1;
    }

    covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0, 1, 0,
      c1_covSaturation);
    c1_x = c1_qY;
    c1_b_x = c1_x;
    c1_c_x = c1_b_x;
    if ((real_T)c1_c_x < 0.0) {
      c1_i30 = c1_c_x;
      c1_b_covSaturation = false;
      if (c1_i30 <= MIN_int32_T) {
        c1_b_covSaturation = true;
        c1_saturatedUnaryMinus = MAX_int32_T;
        sf_data_saturate_error(chartInstance->S, 1U, 1389, 34);
      } else {
        c1_saturatedUnaryMinus = -c1_i30;
      }

      covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0, 0, 0,
        c1_b_covSaturation);
      c1_y = c1_saturatedUnaryMinus;
    } else {
      c1_y = c1_c_x;
    }

    c1_d1 = (real_T)c1_y;
    c1_guard1 = false;
    if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 0,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c1_covrtInstance, 4U, 0U, 0U, c1_d1,
                          15.0, -1, 2U, c1_d1 < 15.0))) {
      c1_i31 = (int32_T)emlrtIntegerCheckR2012b(c1_c_i, &c1_c_emlrtDCI, c1_sp);
      c1_i32 = 3;
      c1_d2 = (real_T)c1_bboxOut_data[(emlrtDynamicBoundsCheckR2012b(c1_i31, 1,
        c1_bboxOut_size[0], &c1_c_emlrtBCI, c1_sp) + c1_bboxOut_size[0] *
        (emlrtDynamicBoundsCheckR2012b(c1_i32, 1, c1_bboxOut_size[1],
        &c1_c_emlrtBCI, c1_sp) - 1)) - 1];
      if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 1,
                           covrtRelationalopUpdateFcn
                           (chartInstance->c1_covrtInstance, 4U, 0U, 1U, c1_d2,
                            32.0, -1, 4U, c1_d2 > 32.0))) {
        c1_i33 = (int32_T)emlrtIntegerCheckR2012b(c1_c_i, &c1_d_emlrtDCI, c1_sp);
        c1_i34 = 3;
        c1_d3 = (real_T)c1_bboxOut_data[(emlrtDynamicBoundsCheckR2012b(c1_i33, 1,
          c1_bboxOut_size[0], &c1_d_emlrtBCI, c1_sp) + c1_bboxOut_size[0] *
          (emlrtDynamicBoundsCheckR2012b(c1_i34, 1, c1_bboxOut_size[1],
          &c1_d_emlrtBCI, c1_sp) - 1)) - 1];
        if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 2,
                             covrtRelationalopUpdateFcn
                             (chartInstance->c1_covrtInstance, 4U, 0U, 2U, c1_d3,
                              52.0, -1, 2U, c1_d3 < 52.0))) {
          covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 0, true);
          covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 0, true);
          c1_b_LZ_flag = 1;
          c1_i35 = (int32_T)emlrtIntegerCheckR2012b(c1_c_i, &c1_e_emlrtDCI,
            c1_sp);
          c1_i36 = 3;
          c1_d_x = c1_bboxOut_data[(emlrtDynamicBoundsCheckR2012b(c1_i35, 1,
            c1_bboxOut_size[0], &c1_e_emlrtBCI, c1_sp) + c1_bboxOut_size[0] *
            (emlrtDynamicBoundsCheckR2012b(c1_i36, 1, c1_bboxOut_size[1],
            &c1_e_emlrtBCI, c1_sp) - 1)) - 1];
          c1_e_x = c1_d_x;
          c1_f_x = c1_e_x;
          c1_g_x = c1_f_x;
          c1_h_x = c1_g_x;
          c1_i_x = c1_h_x;
          c1_z = (real_T)c1_i_x / 2.0;
          c1_d4 = muDoubleScalarRound(c1_z);
          c1_c_covSaturation = false;
          if (c1_d4 < 2.147483648E+9) {
            if (c1_d4 >= -2.147483648E+9) {
              c1_i37 = (int32_T)c1_d4;
            } else {
              c1_c_covSaturation = true;
              c1_i37 = MIN_int32_T;
              sf_data_saturate_error(chartInstance->S, 1U, 1836, 15);
            }
          } else if (c1_d4 >= 2.147483648E+9) {
            c1_c_covSaturation = true;
            c1_i37 = MAX_int32_T;
            sf_data_saturate_error(chartInstance->S, 1U, 1836, 15);
          } else {
            c1_i37 = 0;
          }

          covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0, 3, 0,
            c1_c_covSaturation);
          c1_b_z = c1_i37;
          c1_i38 = (int32_T)emlrtIntegerCheckR2012b(c1_c_i, &c1_f_emlrtDCI,
            c1_sp);
          c1_i39 = 1;
          c1_b_q0 = c1_bboxOut_data[(emlrtDynamicBoundsCheckR2012b(c1_i38, 1,
            c1_bboxOut_size[0], &c1_f_emlrtBCI, c1_sp) + c1_bboxOut_size[0] *
            (emlrtDynamicBoundsCheckR2012b(c1_i39, 1, c1_bboxOut_size[1],
            &c1_f_emlrtBCI, c1_sp) - 1)) - 1];
          c1_b_q1 = c1_b_z;
          c1_d_covSaturation = false;
          if ((c1_b_q0 < 0) && (c1_b_q1 < MIN_int32_T - c1_b_q0)) {
            c1_d_covSaturation = true;
            c1_b_qY = MIN_int32_T;
            sf_data_saturate_error(chartInstance->S, 1U, 1820, 31);
          } else if ((c1_b_q0 > 0) && (c1_b_q1 > MAX_int32_T - c1_b_q0)) {
            c1_d_covSaturation = true;
            c1_b_qY = MAX_int32_T;
            sf_data_saturate_error(chartInstance->S, 1U, 1820, 31);
          } else {
            c1_b_qY = c1_b_q0 + c1_b_q1;
          }

          covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0, 2, 0,
            c1_d_covSaturation);
          c1_b_LZ_x = c1_b_qY;
          c1_i40 = (int32_T)emlrtIntegerCheckR2012b(c1_c_i, &c1_g_emlrtDCI,
            c1_sp);
          c1_i41 = 4;
          c1_j_x = c1_bboxOut_data[(emlrtDynamicBoundsCheckR2012b(c1_i40, 1,
            c1_bboxOut_size[0], &c1_g_emlrtBCI, c1_sp) + c1_bboxOut_size[0] *
            (emlrtDynamicBoundsCheckR2012b(c1_i41, 1, c1_bboxOut_size[1],
            &c1_g_emlrtBCI, c1_sp) - 1)) - 1];
          c1_k_x = c1_j_x;
          c1_l_x = c1_k_x;
          c1_m_x = c1_l_x;
          c1_n_x = c1_m_x;
          c1_o_x = c1_n_x;
          c1_c_z = (real_T)c1_o_x / 2.0;
          c1_d5 = muDoubleScalarRound(c1_c_z);
          c1_e_covSaturation = false;
          if (c1_d5 < 2.147483648E+9) {
            if (c1_d5 >= -2.147483648E+9) {
              c1_i42 = (int32_T)c1_d5;
            } else {
              c1_e_covSaturation = true;
              c1_i42 = MIN_int32_T;
              sf_data_saturate_error(chartInstance->S, 1U, 1952, 15);
            }
          } else if (c1_d5 >= 2.147483648E+9) {
            c1_e_covSaturation = true;
            c1_i42 = MAX_int32_T;
            sf_data_saturate_error(chartInstance->S, 1U, 1952, 15);
          } else {
            c1_i42 = 0;
          }

          covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0, 5, 0,
            c1_e_covSaturation);
          c1_d_z = c1_i42;
          c1_i43 = (int32_T)emlrtIntegerCheckR2012b(c1_c_i, &c1_h_emlrtDCI,
            c1_sp);
          c1_i44 = 2;
          c1_c_q0 = c1_bboxOut_data[(emlrtDynamicBoundsCheckR2012b(c1_i43, 1,
            c1_bboxOut_size[0], &c1_h_emlrtBCI, c1_sp) + c1_bboxOut_size[0] *
            (emlrtDynamicBoundsCheckR2012b(c1_i44, 1, c1_bboxOut_size[1],
            &c1_h_emlrtBCI, c1_sp) - 1)) - 1];
          c1_c_q1 = c1_d_z;
          c1_f_covSaturation = false;
          if ((c1_c_q0 < 0) && (c1_c_q1 < MIN_int32_T - c1_c_q0)) {
            c1_f_covSaturation = true;
            c1_c_qY = MIN_int32_T;
            sf_data_saturate_error(chartInstance->S, 1U, 1936, 31);
          } else if ((c1_c_q0 > 0) && (c1_c_q1 > MAX_int32_T - c1_c_q0)) {
            c1_f_covSaturation = true;
            c1_c_qY = MAX_int32_T;
            sf_data_saturate_error(chartInstance->S, 1U, 1936, 31);
          } else {
            c1_c_qY = c1_c_q0 + c1_c_q1;
          }

          covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0, 4, 0,
            c1_f_covSaturation);
          c1_b_LZ_y = c1_c_qY;
        } else {
          c1_guard1 = true;
        }
      } else {
        c1_guard1 = true;
      }
    } else {
      c1_guard1 = true;
    }

    if (c1_guard1) {
      covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 0, false);
      covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 0, false);
    }

    c1_b_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 0, 0);
  c1_st.site = &c1_f_emlrtRSI;
  c1_matlabCodegenHandle_matlabCodegenDestructor(chartInstance, &c1_st,
    &chartInstance->c1_hBlobAnalysis);
  emlrtHeapReferenceStackLeaveFcnR2012b(c1_sp);
  *chartInstance->c1_LZ_flag = c1_b_LZ_flag;
  *chartInstance->c1_LZ_x = c1_b_LZ_x;
  *chartInstance->c1_LZ_y = c1_b_LZ_y;
}

static void initSimStructsc1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_matlabCodegenHandle_matlabCodegenDestructor
  (SFc1_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_visioncodegen_BlobAnalysis *c1_obj)
{
  c1_visioncodegen_BlobAnalysis *c1_b_obj;
  c1_visioncodegen_BlobAnalysis *c1_c_obj;
  (void)chartInstance;
  if (!c1_obj->matlabCodegenIsDeleted) {
    c1_obj->matlabCodegenIsDeleted = true;
    c1_b_obj = c1_obj;
    c1_c_obj = c1_b_obj;
    if (c1_c_obj->isInitialized == 1) {
      c1_c_obj->isInitialized = 2;
    }
  }
}

const mxArray *sf_c1_flightControlSystem_get_eml_resolved_functions_info(void)
{
  const mxArray *c1_nameCaptureInfo = NULL;
  c1_nameCaptureInfo = NULL;
  sf_mex_assign(&c1_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c1_nameCaptureInfo;
}

static void c1_rgb2hsv(SFc1_flightControlSystemInstanceStruct *chartInstance,
  uint8_T c1_X[57600], real_T c1_hsv[57600])
{
  (void)chartInstance;
  rgb2hsv_tbb_uint8(c1_X, 19200.0, c1_hsv, true);
}

static c1_visioncodegen_BlobAnalysis *c1_BlobAnalysis_BlobAnalysis
  (SFc1_flightControlSystemInstanceStruct *chartInstance,
   c1_visioncodegen_BlobAnalysis *c1_obj)
{
  c1_visioncodegen_BlobAnalysis *c1_b_obj;
  c1_visioncodegen_BlobAnalysis *c1_c_obj;
  c1_visioncodegen_BlobAnalysis *c1_d_obj;
  c1_visioncodegen_BlobAnalysis *c1_this;
  c1_visioncodegen_BlobAnalysis *c1_e_obj;
  c1_visioncodegen_BlobAnalysis *c1_b_this;
  c1_visioncodegen_BlobAnalysis *c1_f_obj;
  int32_T c1_i;
  c1_visioncodegen_BlobAnalysis *c1_g_obj;
  c1_visioncodegen_BlobAnalysis *c1_c_this;
  c1_vision_BlobAnalysis_0 *c1_h_obj;
  c1_vision_BlobAnalysis_0 *c1_i_obj;
  int32_T c1_i1;
  c1_visioncodegen_BlobAnalysis *c1_j_obj;
  static int32_T c1_iv[8] = { -1, 121, 122, 123, 1, -121, -122, -123 };

  c1_visioncodegen_BlobAnalysis *c1_k_obj;
  c1_visioncodegen_BlobAnalysis *c1_l_obj;
  c1_visioncodegen_BlobAnalysis *c1_m_obj;
  c1_visioncodegen_BlobAnalysis *c1_n_obj;
  boolean_T c1_flag;
  c1_visioncodegen_BlobAnalysis *c1_o_obj;
  c1_vision_BlobAnalysis_0 *c1_p_obj;
  c1_visioncodegen_BlobAnalysis *c1_q_obj;
  c1_visioncodegen_BlobAnalysis *c1_r_obj;
  boolean_T c1_b_flag;
  c1_visioncodegen_BlobAnalysis *c1_s_obj;
  c1_vision_BlobAnalysis_0 *c1_t_obj;
  (void)chartInstance;
  c1_b_obj = c1_obj;
  c1_c_obj = c1_b_obj;
  c1_b_obj = c1_c_obj;
  c1_d_obj = c1_b_obj;
  c1_b_obj = c1_d_obj;
  c1_this = c1_b_obj;
  c1_b_obj = c1_this;
  c1_e_obj = c1_b_obj;
  c1_b_obj = c1_e_obj;
  c1_b_obj->isInitialized = 0;
  c1_b_this = c1_b_obj;
  c1_b_obj = c1_b_this;
  c1_f_obj = c1_b_obj;
  for (c1_i = 0; c1_i < 2; c1_i++) {
    c1_f_obj->tunablePropertyChanged[c1_i] = false;
  }

  c1_g_obj = c1_b_obj;
  c1_b_obj = c1_g_obj;
  c1_c_this = c1_b_obj;
  c1_b_obj = c1_c_this;
  c1_b_obj->NoTuningBeforeLockingCodeGenError = true;
  c1_h_obj = &c1_b_obj->cSFunObject;

  /* System object Constructor function: vision.BlobAnalysis */
  c1_i_obj = c1_h_obj;
  for (c1_i1 = 0; c1_i1 < 8; c1_i1++) {
    c1_i_obj->P0_WALKER_RTP[c1_i1] = c1_iv[c1_i1];
  }

  c1_j_obj = c1_b_obj;
  c1_k_obj = c1_j_obj;
  c1_l_obj = c1_k_obj;
  c1_m_obj = c1_l_obj;
  c1_n_obj = c1_m_obj;
  c1_flag = (c1_n_obj->isInitialized == 1);
  if (c1_flag) {
    c1_m_obj->TunablePropsChanged = true;
    c1_m_obj->tunablePropertyChanged[0] = true;
  }

  c1_o_obj = c1_l_obj;
  c1_p_obj = &c1_o_obj->cSFunObject;
  c1_p_obj->P1_MINAREA_RTP = 1U;
  c1_o_obj->MinimumBlobArea = 1.0;
  c1_q_obj = c1_l_obj;
  c1_r_obj = c1_q_obj;
  c1_b_flag = (c1_r_obj->isInitialized == 1);
  if (c1_b_flag) {
    c1_q_obj->TunablePropsChanged = true;
    c1_q_obj->tunablePropertyChanged[1] = true;
  }

  c1_s_obj = c1_l_obj;
  c1_t_obj = &c1_s_obj->cSFunObject;
  c1_t_obj->P2_MAXAREA_RTP = 100000U;
  c1_s_obj->MaximumBlobArea = 100000.0;
  c1_b_obj->NoTuningBeforeLockingCodeGenError = false;
  c1_b_obj->matlabCodegenIsDeleted = false;
  return c1_b_obj;
}

static void c1_SystemCore_step(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_visioncodegen_BlobAnalysis *c1_obj,
  boolean_T c1_varargin_1[19200], int32_T c1_varargout_1_data[], int32_T
  c1_varargout_1_size[2], real_T c1_varargout_2_data[], int32_T
  c1_varargout_2_size[2], int32_T c1_varargout_3_data[], int32_T
  c1_varargout_3_size[2])
{
  emlrtStack c1_st;
  emlrtStack c1_b_st;
  const mxArray *c1_y = NULL;
  static char_T c1_cv[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *c1_b_y = NULL;
  c1_visioncodegen_BlobAnalysis *c1_b_obj;
  c1_visioncodegen_BlobAnalysis *c1_c_obj;
  const mxArray *c1_c_y = NULL;
  c1_visioncodegen_BlobAnalysis *c1_d_obj;
  static char_T c1_cv1[4] = { 's', 't', 'e', 'p' };

  int32_T c1_i;
  boolean_T c1_b_varargin_1[19200];
  const mxArray *c1_d_y = NULL;
  static char_T c1_cv2[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  c1_visioncodegen_BlobAnalysis *c1_e_obj;
  const mxArray *c1_e_y = NULL;
  int32_T c1_i1;
  const mxArray *c1_f_y = NULL;
  c1_cell_wrap_3 c1_varSizes[1];
  static char_T c1_cv3[5] = { 's', 'e', 't', 'u', 'p' };

  c1_visioncodegen_BlobAnalysis *c1_f_obj;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  if (c1_obj->isInitialized == 2) {
    c1_y = NULL;
    sf_mex_assign(&c1_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 45),
                  false);
    c1_b_y = NULL;
    sf_mex_assign(&c1_b_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 45),
                  false);
    c1_c_y = NULL;
    sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_cv1, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(c1_sp, &c1_emlrtMCI, "error", 0U, 2U, 14, c1_y, 14, sf_mex_call
                (c1_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call(c1_sp, NULL,
      "message", 1U, 2U, 14, c1_b_y, 14, c1_c_y)));
  }

  if (c1_obj->isInitialized != 1) {
    c1_st.site = &c1_b_emlrtRSI;
    c1_b_obj = c1_obj;
    c1_b_st.site = &c1_b_emlrtRSI;
    c1_d_obj = c1_b_obj;
    c1_d_obj->isSetupComplete = false;
    if (c1_d_obj->isInitialized != 0) {
      c1_d_y = NULL;
      sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                    false);
      c1_e_y = NULL;
      sf_mex_assign(&c1_e_y, sf_mex_create("y", c1_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                    false);
      c1_f_y = NULL;
      sf_mex_assign(&c1_f_y, sf_mex_create("y", c1_cv3, 10, 0U, 1U, 0U, 2, 1, 5),
                    false);
      sf_mex_call(&c1_b_st, &c1_emlrtMCI, "error", 0U, 2U, 14, c1_d_y, 14,
                  sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c1_b_st, NULL, "message", 1U, 2U, 14, c1_e_y, 14, c1_f_y)));
    }

    c1_d_obj->isInitialized = 1;
    c1_e_obj = c1_d_obj;
    for (c1_i1 = 0; c1_i1 < 8; c1_i1++) {
      c1_varSizes[0].f1[c1_i1] = 1U;
    }

    c1_e_obj->inputVarSize[0] = c1_varSizes[0];
    c1_f_obj = c1_d_obj;
    c1_f_obj->NoTuningBeforeLockingCodeGenError = true;
    c1_d_obj->isSetupComplete = true;
  }

  c1_st.site = &c1_b_emlrtRSI;
  c1_c_obj = c1_obj;
  c1_b_st.site = &c1_b_emlrtRSI;
  for (c1_i = 0; c1_i < 19200; c1_i++) {
    c1_b_varargin_1[c1_i] = c1_varargin_1[c1_i];
  }

  c1_BlobAnalysis_outputImpl(chartInstance, c1_c_obj, c1_b_varargin_1,
    c1_varargout_1_data, c1_varargout_1_size, c1_varargout_2_data,
    c1_varargout_2_size, c1_varargout_3_data, c1_varargout_3_size);
}

static void c1_BlobAnalysis_outputImpl(SFc1_flightControlSystemInstanceStruct
  *chartInstance, c1_visioncodegen_BlobAnalysis *c1_obj, boolean_T
  c1_varargin_1[19200], int32_T c1_varargout_1_data[], int32_T
  c1_varargout_1_size[2], real_T c1_varargout_2_data[], int32_T
  c1_varargout_2_size[2], int32_T c1_varargout_3_data[], int32_T
  c1_varargout_3_size[2])
{
  c1_vision_BlobAnalysis_0 *c1_b_obj;
  c1_vision_BlobAnalysis_0 *c1_c_obj;
  boolean_T c1_maxNumBlobsReached;
  int32_T c1_loop;
  uint8_T c1_currentLabel;
  int32_T c1_i;
  int32_T c1_idx;
  int32_T c1_n;
  int32_T c1_b_loop;
  int32_T c1_m;
  int32_T c1_nn;
  uint32_T c1_stackIdx;
  uint32_T c1_pixIdx;
  int32_T c1_b_n;
  int32_T c1_mm;
  uint32_T c1_numBlobs;
  int32_T c1_nnPadRows;
  int32_T c1_b_m;
  int32_T c1_pixListMinc;
  int32_T c1_pixListNinc;
  int32_T c1_b_i;
  uint32_T c1_padIdx;
  uint32_T c1_start_pixIdx;
  int32_T c1_ns;
  int32_T c1_ms;
  int32_T c1_numLoops;
  int32_T c1_j;
  real_T c1_centroid[2];
  int32_T c1_p;
  uint32_T c1_colOffset;
  uint32_T c1_centerIdx;
  int32_T c1_c_i;
  int32_T c1_loopStart;
  int32_T c1_loopEnd;
  int32_T c1_minc;
  uint32_T c1_walkerIdx;
  int32_T c1_minr;
  int32_T c1_maxc;
  int32_T c1_maxr;
  int32_T c1_bbox[4];
  int32_T c1_j_pixListNinc;
  uint32_T c1_b_colOffset;
  int32_T c1_j_pixListMinc;
  (void)chartInstance;
  c1_b_obj = &c1_obj->cSFunObject;
  c1_c_obj = c1_b_obj;

  /* System object Outputs function: vision.BlobAnalysis */
  c1_maxNumBlobsReached = false;
  for (c1_loop = 0; c1_loop < 123; c1_loop++) {
    c1_c_obj->W3_PAD_DW[c1_loop] = 0U;
  }

  c1_currentLabel = 1U;
  c1_i = 0;
  c1_idx = 123;
  for (c1_n = 0; c1_n < 160; c1_n++) {
    for (c1_m = 0; c1_m < 120; c1_m++) {
      if (c1_varargin_1[c1_i]) {
        c1_c_obj->W3_PAD_DW[c1_idx] = MAX_uint8_T;
      } else {
        c1_c_obj->W3_PAD_DW[c1_idx] = 0U;
      }

      c1_i++;
      c1_idx++;
    }

    c1_c_obj->W3_PAD_DW[c1_idx] = 0U;
    c1_c_obj->W3_PAD_DW[c1_idx + 1] = 0U;
    c1_idx += 2;
  }

  for (c1_b_loop = 0; c1_b_loop < 121; c1_b_loop++) {
    c1_c_obj->W3_PAD_DW[c1_b_loop + c1_idx] = 0U;
  }

  c1_nn = 0;
  c1_stackIdx = 0U;
  c1_pixIdx = 0U;
  c1_b_n = 0;
  while (c1_b_n < 160) {
    c1_mm = 0;
    c1_nnPadRows = (c1_nn + 1) * 122;
    c1_b_m = 0;
    while (c1_b_m < 120) {
      c1_padIdx = (uint32_T)((c1_nnPadRows + c1_mm) + 1);
      c1_start_pixIdx = c1_pixIdx;
      if (c1_c_obj->W3_PAD_DW[c1_padIdx] == 255) {
        c1_c_obj->W3_PAD_DW[c1_padIdx] = c1_currentLabel;
        c1_c_obj->W0_N_PIXLIST_DW[c1_pixIdx] = (int16_T)c1_nn;
        c1_c_obj->W1_M_PIXLIST_DW[c1_pixIdx] = (int16_T)c1_mm;
        c1_pixIdx++;
        c1_c_obj->W2_NUM_PIX_DW[c1_currentLabel - 1] = 1U;
        c1_c_obj->W4_STACK_DW[c1_stackIdx] = c1_padIdx;
        c1_stackIdx++;
        while (c1_stackIdx != 0U) {
          c1_stackIdx--;
          c1_centerIdx = c1_c_obj->W4_STACK_DW[c1_stackIdx];
          for (c1_c_i = 0; c1_c_i < 8; c1_c_i++) {
            c1_walkerIdx = c1_centerIdx + (uint32_T)c1_c_obj->
              P0_WALKER_RTP[c1_c_i];
            if (c1_c_obj->W3_PAD_DW[c1_walkerIdx] == 255) {
              c1_c_obj->W3_PAD_DW[c1_walkerIdx] = c1_currentLabel;
              c1_c_obj->W0_N_PIXLIST_DW[c1_pixIdx] = (int16_T)((int16_T)
                (c1_walkerIdx / 122U) - 1);
              c1_c_obj->W1_M_PIXLIST_DW[c1_pixIdx] = (int16_T)(c1_walkerIdx %
                122U - 1U);
              c1_pixIdx++;
              c1_c_obj->W2_NUM_PIX_DW[c1_currentLabel - 1]++;
              c1_c_obj->W4_STACK_DW[c1_stackIdx] = c1_walkerIdx;
              c1_stackIdx++;
            }
          }
        }

        if ((c1_c_obj->W2_NUM_PIX_DW[c1_currentLabel - 1] <
             c1_c_obj->P1_MINAREA_RTP) || (c1_c_obj->
             W2_NUM_PIX_DW[c1_currentLabel - 1] > c1_c_obj->P2_MAXAREA_RTP)) {
          c1_currentLabel--;
          c1_pixIdx = c1_start_pixIdx;
        }

        if (c1_currentLabel == 50) {
          c1_maxNumBlobsReached = true;
          c1_b_n = 160;
          c1_b_m = 120;
        }

        if (c1_b_m < 120) {
          c1_currentLabel++;
        }
      }

      c1_mm++;
      c1_b_m++;
    }

    c1_nn++;
    c1_b_n++;
  }

  if (c1_maxNumBlobsReached) {
    c1_numBlobs = c1_currentLabel;
  } else {
    c1_numBlobs = (uint8_T)((uint32_T)c1_currentLabel - 1U);
  }

  c1_pixListMinc = 0;
  c1_pixListNinc = 0;
  for (c1_b_i = 0; c1_b_i < (int32_T)c1_numBlobs; c1_b_i++) {
    c1_varargout_1_data[c1_b_i] = (int32_T)c1_c_obj->W2_NUM_PIX_DW[c1_b_i];
    c1_ns = 0;
    c1_ms = 0;
    if (c1_c_obj->W2_NUM_PIX_DW[c1_b_i] <= 260000U) {
      for (c1_j = 0; c1_j < (int32_T)c1_c_obj->W2_NUM_PIX_DW[c1_b_i]; c1_j++) {
        c1_ns += c1_c_obj->W0_N_PIXLIST_DW[c1_j + c1_pixListNinc];
        c1_ms += c1_c_obj->W1_M_PIXLIST_DW[c1_j + c1_pixListMinc];
      }

      c1_centroid[0] = (real_T)c1_ms / (real_T)c1_c_obj->W2_NUM_PIX_DW[c1_b_i];
      c1_centroid[1] = (real_T)c1_ns / (real_T)c1_c_obj->W2_NUM_PIX_DW[c1_b_i];
    } else {
      c1_numLoops = (int32_T)((real_T)c1_c_obj->W2_NUM_PIX_DW[c1_b_i] / 260000.0);
      c1_centroid[0] = 0.0;
      c1_centroid[1] = 0.0;
      for (c1_p = 0; c1_p < c1_numLoops; c1_p++) {
        c1_ns = 0;
        c1_ms = 0;
        for (c1_j = 0; c1_j < 260000; c1_j++) {
          c1_ns += c1_c_obj->W0_N_PIXLIST_DW[(c1_pixListNinc + c1_j) + c1_p *
            260000];
          c1_ms += c1_c_obj->W1_M_PIXLIST_DW[(c1_pixListMinc + c1_j) + c1_p *
            260000];
        }

        c1_centroid[0] += (real_T)c1_ms / (real_T)c1_c_obj->W2_NUM_PIX_DW[c1_b_i];
        c1_centroid[1] += (real_T)c1_ns / (real_T)c1_c_obj->W2_NUM_PIX_DW[c1_b_i];
      }

      c1_ns = 0;
      c1_ms = 0;
      c1_loopStart = c1_numLoops * 260000;
      c1_loopEnd = (int32_T)(c1_c_obj->W2_NUM_PIX_DW[c1_b_i] - (uint32_T)
        c1_loopStart);
      for (c1_j = 0; c1_j < c1_loopEnd; c1_j++) {
        c1_ns += c1_c_obj->W0_N_PIXLIST_DW[(c1_j + c1_pixListNinc) +
          c1_loopStart];
        c1_ms += c1_c_obj->W1_M_PIXLIST_DW[(c1_j + c1_pixListMinc) +
          c1_loopStart];
      }

      c1_centroid[0] += (real_T)c1_ms / (real_T)c1_c_obj->W2_NUM_PIX_DW[c1_b_i];
      c1_centroid[1] += (real_T)c1_ns / (real_T)c1_c_obj->W2_NUM_PIX_DW[c1_b_i];
    }

    c1_colOffset = c1_numBlobs;
    c1_varargout_2_data[c1_b_i] = c1_centroid[1] + 1.0;
    c1_varargout_2_data[c1_colOffset + (uint32_T)c1_b_i] = c1_centroid[0] + 1.0;
    c1_minc = 160;
    c1_minr = 120;
    c1_maxc = 0;
    c1_maxr = 0;
    for (c1_j = 0; c1_j < (int32_T)c1_c_obj->W2_NUM_PIX_DW[c1_b_i]; c1_j++) {
      c1_j_pixListNinc = c1_j + c1_pixListNinc;
      if (c1_c_obj->W0_N_PIXLIST_DW[c1_j_pixListNinc] < c1_minc) {
        c1_minc = c1_c_obj->W0_N_PIXLIST_DW[c1_j_pixListNinc];
      }

      if (c1_c_obj->W0_N_PIXLIST_DW[c1_j_pixListNinc] > c1_maxc) {
        c1_maxc = c1_c_obj->W0_N_PIXLIST_DW[c1_j_pixListNinc];
      }

      c1_j_pixListMinc = c1_j + c1_pixListMinc;
      if (c1_c_obj->W1_M_PIXLIST_DW[c1_j_pixListMinc] < c1_minr) {
        c1_minr = c1_c_obj->W1_M_PIXLIST_DW[c1_j_pixListMinc];
      }

      if (c1_c_obj->W1_M_PIXLIST_DW[c1_j_pixListMinc] > c1_maxr) {
        c1_maxr = c1_c_obj->W1_M_PIXLIST_DW[c1_j_pixListMinc];
      }
    }

    c1_bbox[0] = c1_minr;
    c1_bbox[1] = c1_minc;
    c1_bbox[2] = (c1_maxr - c1_minr) + 1;
    c1_bbox[3] = (c1_maxc - c1_minc) + 1;
    c1_b_colOffset = c1_numBlobs;
    c1_varargout_3_data[c1_b_i] = c1_bbox[1] + 1;
    c1_varargout_3_data[c1_b_colOffset + (uint32_T)c1_b_i] = c1_bbox[0] + 1;
    c1_varargout_3_data[((int32_T)c1_b_colOffset << 1) + c1_b_i] = c1_bbox[3];
    c1_varargout_3_data[3 * (int32_T)c1_b_colOffset + c1_b_i] = c1_bbox[2];
    c1_pixListMinc += (int32_T)c1_c_obj->W2_NUM_PIX_DW[c1_b_i];
    c1_pixListNinc += (int32_T)c1_c_obj->W2_NUM_PIX_DW[c1_b_i];
  }

  c1_varargout_1_size[0] = (int32_T)c1_numBlobs;
  c1_varargout_1_size[1] = 1;
  c1_varargout_2_size[0] = (int32_T)c1_numBlobs;
  c1_varargout_2_size[1] = 2;
  c1_varargout_3_size[0] = (int32_T)c1_numBlobs;
  c1_varargout_3_size[1] = 4;
}

static int32_T c1_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_LZ_flag, const char_T *c1_identifier)
{
  int32_T c1_y;
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_LZ_flag),
    &c1_thisId);
  sf_mex_destroy(&c1_b_LZ_flag);
  return c1_y;
}

static int32_T c1_b_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  int32_T c1_y;
  int32_T c1_i;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_i, 1, 6, 0U, 0, 0U, 0);
  c1_y = c1_i;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static boolean_T c1_c_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_isInitialized, const char_T *c1_identifier)
{
  boolean_T c1_y;
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_isInitialized),
    &c1_thisId);
  sf_mex_destroy(&c1_b_isInitialized);
  return c1_y;
}

static boolean_T c1_d_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  boolean_T c1_y;
  boolean_T c1_b;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_b, 1, 11, 0U, 0, 0U, 0);
  c1_y = c1_b;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static uint8_T c1_e_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_flightControlSystem, const
  char_T *c1_identifier)
{
  uint8_T c1_y;
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_b_is_active_c1_flightControlSystem), &c1_thisId);
  sf_mex_destroy(&c1_b_is_active_c1_flightControlSystem);
  return c1_y;
}

static uint8_T c1_f_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  uint8_T c1_y;
  uint8_T c1_b_u;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_b_u, 1, 3, 0U, 0, 0U, 0);
  c1_y = c1_b_u;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static const mxArray *c1_chart_data_browse_helper
  (SFc1_flightControlSystemInstanceStruct *chartInstance, int32_T c1_ssIdNumber)
{
  const mxArray *c1_mxData = NULL;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  c1_mxData = NULL;
  switch (c1_ssIdNumber) {
   case 4U:
    sf_mex_assign(&c1_mxData, sf_mex_create("mxData",
      *chartInstance->c1_frame_info, 3, 0U, 1U, 0U, 3, 120, 160, 3), false);
    break;

   case 5U:
    c1_i = *chartInstance->c1_LZ_flag;
    sf_mex_assign(&c1_mxData, sf_mex_create("mxData", &c1_i, 6, 0U, 0U, 0U, 0),
                  false);
    break;

   case 7U:
    c1_i1 = *chartInstance->c1_LZ_x;
    sf_mex_assign(&c1_mxData, sf_mex_create("mxData", &c1_i1, 6, 0U, 0U, 0U, 0),
                  false);
    break;

   case 8U:
    c1_i2 = *chartInstance->c1_LZ_y;
    sf_mex_assign(&c1_mxData, sf_mex_create("mxData", &c1_i2, 6, 0U, 0U, 0U, 0),
                  false);
    break;
  }

  return c1_mxData;
}

static void init_dsm_address_info(SFc1_flightControlSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc1_flightControlSystemInstanceStruct
  *chartInstance)
{
  chartInstance->c1_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c1_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c1_frame_info = (uint8_T (*)[57600])
    ssGetInputPortSignal_wrapper(chartInstance->S, 0);
  chartInstance->c1_LZ_flag = (int32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c1_LZ_x = (int32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c1_LZ_y = (int32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c1_flightControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3631252873U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3018664549U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3145039803U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2825147805U);
}

mxArray *sf_c1_flightControlSystem_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,1);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Rgb2hsvBuildable"));
  return(mxcell3p);
}

mxArray *sf_c1_flightControlSystem_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("rgb2hsv_tbb_uint8");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c1_flightControlSystem_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c1_flightControlSystem(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiAOYGFgYAPSHEDMxAABrFA+I5TNCBdngYsrAHFJZUEqSLy4KNkzBUjnJeaC+Ym"
    "lFZ55aflg8y0YEOazYTGfEcl8Tqg4BHywp0y/iAO6fhYs+tmR9AtA+T5R8Wk5ielg98PCaeD8IQ"
    "P2hwEBf7Cg+IMF5IeKweF+BXLdX0kd9ws4UKYfYr8DAffzoqUjED+z2DMvsyQzMSezKjUFag7l/"
    "lGgin8CCPhHAc0/CmD/xCcml2SWpcYnGwJzSGZ6Rolzfl5JUX5OcGVxSWouzH8Axqkulw=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_flightControlSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sW4MhrW4i5Kp061gNgHdcGF";
}

static void sf_opaque_initialize_c1_flightControlSystem(void *chartInstanceVar)
{
  initialize_params_c1_flightControlSystem
    ((SFc1_flightControlSystemInstanceStruct*) chartInstanceVar);
  initialize_c1_flightControlSystem((SFc1_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c1_flightControlSystem(void *chartInstanceVar)
{
  enable_c1_flightControlSystem((SFc1_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c1_flightControlSystem(void *chartInstanceVar)
{
  disable_c1_flightControlSystem((SFc1_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c1_flightControlSystem(void *chartInstanceVar)
{
  sf_gateway_c1_flightControlSystem((SFc1_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c1_flightControlSystem(SimStruct*
  S)
{
  return get_sim_state_c1_flightControlSystem
    ((SFc1_flightControlSystemInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c1_flightControlSystem(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c1_flightControlSystem((SFc1_flightControlSystemInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c1_flightControlSystem(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_flightControlSystemInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_flightControlSystem_optimization_info();
    }

    mdl_cleanup_runtime_resources_c1_flightControlSystem
      ((SFc1_flightControlSystemInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c1_flightControlSystem(void *chartInstanceVar)
{
  mdl_start_c1_flightControlSystem((SFc1_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c1_flightControlSystem(void
  *chartInstanceVar)
{
  mdl_terminate_c1_flightControlSystem((SFc1_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc1_flightControlSystem((SFc1_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_flightControlSystem(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c1_flightControlSystem
      ((SFc1_flightControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
    initSimStructsc1_flightControlSystem((SFc1_flightControlSystemInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c1_flightControlSystem_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [19] = {
    "eNrtV81u20YQplw5aYrYMNAAvQSokEtzTICkaC+NY/0kQqVYCJ0YyMVYL0fkQstdZn9kq3mNnnP",
    "JY+SeZ8ix91zyBEVnKVqWKZKKIyc10BKg6SW/+Xa+mdnZlVfr9j28NvH+63vPu4LPb/Fe86bXej",
    "auzd3T93Xvp2z8AI2EjQdEkVh7lZcgMTwFLbk1TIquGMpCGBNDUCAoYhOpTBmbZrHlTIw6VlDHp",
    "/cjRiM/kpYHO2hLgl3BJ8iWWDNAnhZTQE0HIDCRkjaMOpyEM4+VOWpGQEfaxlUSNBjfJs4t3bfc",
    "sIRD+xhoV2hD0GN96ptviIGmOS6V6ZRq/wQo44QzIgrVRkT7kGCADTxLAvy7aw2KysNoRJTZgYi",
    "MQffYKOWUAvKcTOOHQyaIkYoR3o550xku+jbg6E9fBsArAoK+7Sggo0QyYcrz73dQaVuQQw4tOL",
    "RhOZsPL61L/nMGR6BK4zZsyjEoEsKuKJ00DUj7OM3WrEoWYYbF8JyohxTzpyEorV6sHO0TzBPso",
    "UUZDFKRXb2n2BjDW8pm466rzGVLxsbTZOtlsJStPYaqLMzYOlQ0Cee6FLYnkx6MgaesLWJINWzK",
    "WozTmgV7EgPsyrt8NVjBMPEZrClFwArTNc4B0r7zBBvLWSS12si4icXb6vUWPy/CusKAGhIKRV1",
    "AEaYBY5aGt5wtYNrlHoHolUndKwJPK2QZytNDK1pHUo0wJhVN5FSCy2gpMNYh5hJXwjONi6YK5n",
    "K5DEcJjSBwDYZx6OOyQWxBTLRrbQ9x3Y2ZmbRAU8WSoqy6/eeOd7r/XP+E/efELv+8PcdTK+Dx5",
    "p75ea+tVc+7hv/VMrvtObuN3Dz1nJ3DbeH93Z8vP7778Cp88+utd6/X3/69yvwOdJ79ejMb3zxp",
    "jLNCHy/Ul8M+nvOrXsD/wxz/VjbW+/f6kdq/x+7/ntz5+W74JHwc0EedlG9Qr/Z3PefvyfuG69C",
    "TJO23WtFukB0k3JjY6fbq+H+Z8/fKknhcy95Pr48PVrO/sZ23L4rX1Vy83Lj34mCIh5Az9fvv6b",
    "i5na/HIh31MzrqTsPx5fC/8bn+Ty7G/63t1ewX+0qR/xu5OtpIz0NdgRsJ4eyP9PxyMXoaF6Jns",
    "ERPI6enkeo5IG7XgAN6F1cICyO34RsluT/RBuLNC+jf57Xz/re7FHa1/6C+TzkPfa7dNyuev76W",
    "3ar6znsuvGz4qn3Ny+G3LrGOVc/rXxr/3jvfufrHbPzb7KduM2I8KPjVk33uARkWff0K+v4Bjy6",
    "tuw==",
    ""
  };

  static char newstr [1281] = "";
  newstr[0] = '\0';
  for (i = 0; i < 19; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c1_flightControlSystem(SimStruct *S)
{
  const char* newstr = sf_c1_flightControlSystem_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(4033975306U));
  ssSetChecksum1(S,(1736174534U));
  ssSetChecksum2(S,(3324131747U));
  ssSetChecksum3(S,(4273669534U));
}

static void mdlRTW_c1_flightControlSystem(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c1_flightControlSystem(SimStruct *S)
{
  SFc1_flightControlSystemInstanceStruct *chartInstance;
  chartInstance = (SFc1_flightControlSystemInstanceStruct *)utMalloc(sizeof
    (SFc1_flightControlSystemInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc1_flightControlSystemInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  if (ssGetSampleTime(S, 0) == CONTINUOUS_SAMPLE_TIME && ssGetOffsetTime(S, 0) ==
      0 && ssGetNumContStates(ssGetRootSS(S)) > 0) {
    sf_error_out_about_continuous_sample_time_with_persistent_vars(S);
  }

  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c1_flightControlSystem;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c1_flightControlSystem;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c1_flightControlSystem;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c1_flightControlSystem;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c1_flightControlSystem;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c1_flightControlSystem;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c1_flightControlSystem;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c1_flightControlSystem;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c1_flightControlSystem;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c1_flightControlSystem;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c1_flightControlSystem;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c1_flightControlSystem;
  chartInstance->chartInfo.callGetHoverDataForMsg = NULL;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c1_JITStateAnimation,
    chartInstance->c1_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c1_flightControlSystem(chartInstance);
}

void c1_flightControlSystem_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c1_flightControlSystem(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_flightControlSystem(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_flightControlSystem(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_flightControlSystem_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
