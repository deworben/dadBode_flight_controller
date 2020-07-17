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
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pName */
};

static emlrtMCInfo c1_b_emlrtMCI = { 705,/* lineNo */
  35,                                  /* colNo */
  "insertShape",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\vision\\vision\\insertShape.m"/* pName */
};

static emlrtMCInfo c1_c_emlrtMCI = { 47,/* lineNo */
  5,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtMCInfo c1_d_emlrtMCI = { 49,/* lineNo */
  19,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo c1_e_emlrtMCI = { 64,/* lineNo */
  15,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo c1_f_emlrtMCI = { 88,/* lineNo */
  9,                                   /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtRSInfo c1_emlrtRSI = { 1,  /* lineNo */
  "matlabCodegenHandle",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\coder\\coder\\+coder\\+internal\\matlabCodegenHandle.p"/* pathName */
};

static emlrtRSInfo c1_b_emlrtRSI = { 1,/* lineNo */
  "SystemCore",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pathName */
};

static emlrtRSInfo c1_c_emlrtRSI = { 9,/* lineNo */
  "Image Processing System/MATLAB Function1",/* fcnName */
  "#flightControlSystem:2454"          /* pathName */
};

static emlrtRSInfo c1_d_emlrtRSI = { 35,/* lineNo */
  "Image Processing System/MATLAB Function1",/* fcnName */
  "#flightControlSystem:2454"          /* pathName */
};

static emlrtRSInfo c1_e_emlrtRSI = { 36,/* lineNo */
  "Image Processing System/MATLAB Function1",/* fcnName */
  "#flightControlSystem:2454"          /* pathName */
};

static emlrtRSInfo c1_f_emlrtRSI = { 39,/* lineNo */
  "Image Processing System/MATLAB Function1",/* fcnName */
  "#flightControlSystem:2454"          /* pathName */
};

static emlrtRSInfo c1_g_emlrtRSI = { 40,/* lineNo */
  "Image Processing System/MATLAB Function1",/* fcnName */
  "#flightControlSystem:2454"          /* pathName */
};

static emlrtRSInfo c1_h_emlrtRSI = { 51,/* lineNo */
  "rgb2hsv",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\images\\rgb2hsv.m"/* pathName */
};

static emlrtRSInfo c1_i_emlrtRSI = { 1,/* lineNo */
  "BlobAnalysis",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\vision\\vision\\+visioncodegen\\BlobAnalysis.p"/* pathName */
};

static emlrtRSInfo c1_j_emlrtRSI = { 1,/* lineNo */
  "System",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\System.p"/* pathName */
};

static emlrtRSInfo c1_k_emlrtRSI = { 1,/* lineNo */
  "SystemProp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"/* pathName */
};

static emlrtRSInfo c1_l_emlrtRSI = { 1,/* lineNo */
  "Nondirect",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\matlab\\system\\+matlab\\+system\\+mixin\\Nondirect.p"/* pathName */
};

static emlrtRSInfo c1_m_emlrtRSI = { 1,/* lineNo */
  "ProcessConstructorArguments",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\ProcessConstructorArguments.p"/* pathName */
};

static emlrtRSInfo c1_n_emlrtRSI = { 107,/* lineNo */
  "insertShape",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\vision\\vision\\insertShape.m"/* pathName */
};

static emlrtRSInfo c1_o_emlrtRSI = { 126,/* lineNo */
  "insertShape",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\vision\\vision\\insertShape.m"/* pathName */
};

static emlrtRSInfo c1_p_emlrtRSI = { 252,/* lineNo */
  "insertShape",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\vision\\vision\\insertShape.m"/* pathName */
};

static emlrtRSInfo c1_q_emlrtRSI = { 258,/* lineNo */
  "insertShape",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\vision\\vision\\insertShape.m"/* pathName */
};

static emlrtRSInfo c1_r_emlrtRSI = { 389,/* lineNo */
  "insertShape",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\vision\\vision\\insertShape.m"/* pathName */
};

static emlrtRSInfo c1_s_emlrtRSI = { 419,/* lineNo */
  "insertShape",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\vision\\vision\\insertShape.m"/* pathName */
};

static emlrtRSInfo c1_t_emlrtRSI = { 478,/* lineNo */
  "insertShape",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\vision\\vision\\insertShape.m"/* pathName */
};

static emlrtRSInfo c1_u_emlrtRSI = { 28,/* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo c1_v_emlrtRSI = { 93,/* lineNo */
  "insertShapeBuildable",              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\insertShapeBuildable.m"/* pathName */
};

static emlrtRSInfo c1_w_emlrtRSI = { 96,/* lineNo */
  "insertShapeBuildable",              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\insertShapeBuildable.m"/* pathName */
};

static emlrtRTEInfo c1_emlrtRTEI = { 1,/* lineNo */
  1,                                   /* colNo */
  "BlobAnalysis",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\vision\\vision\\+visioncodegen\\BlobAnalysis.p"/* pName */
};

static emlrtRTEInfo c1_b_emlrtRTEI = { 109,/* lineNo */
  38,                                  /* colNo */
  "insertShape",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\vision\\vision\\insertShape.m"/* pName */
};

static emlrtRTEInfo c1_c_emlrtRTEI = { 255,/* lineNo */
  5,                                   /* colNo */
  "insertShape",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\vision\\vision\\insertShape.m"/* pName */
};

static emlrtRTEInfo c1_d_emlrtRTEI = { 31,/* lineNo */
  1,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtRTEInfo c1_e_emlrtRTEI = { 478,/* lineNo */
  16,                                  /* colNo */
  "insertShape",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\vision\\vision\\insertShape.m"/* pName */
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
static void c1_insertShape(SFc1_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c1_sp, uint8_T c1_b_I[57600], int32_T c1_position_data[],
  int32_T c1_position_size[2], uint8_T c1_RGB[57600]);
static void c1_validateAndParseInputs(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, uint8_T c1_b_I[57600], int32_T
  c1_position_data[], int32_T c1_position_size[2], uint8_T c1_RGB[57600],
  int32_T c1_positionOut_data[], int32_T c1_positionOut_size[2], uint8_T
  c1_colorOut_data[], int32_T c1_colorOut_size[2]);
static void c1_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_y, const char_T *c1_identifier, uint8_T
  c1_c_y[57600]);
static void c1_b_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  uint8_T c1_b_y[57600]);
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
  emlrtStack c1_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c1_st.tls = chartInstance->c1_fEmlrtCtx;
  emlrtLicenseCheckR2012b(&c1_st, "Video_and_Image_Blockset", 2);
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
  const mxArray *c1_b_y = NULL;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_e_y = NULL;
  c1_st = NULL;
  c1_st = NULL;
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_createcellmatrix(3, 1), false);
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", *chartInstance->c1_y, 3, 0U, 1U, 0U,
    3, 120, 160, 3), false);
  sf_mex_setcell(c1_b_y, 0, c1_c_y);
  c1_d_y = NULL;
  sf_mex_assign(&c1_d_y, sf_mex_create("y", &chartInstance->c1_isInitialized, 11,
    0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_b_y, 1, c1_d_y);
  c1_e_y = NULL;
  sf_mex_assign(&c1_e_y, sf_mex_create("y",
    &chartInstance->c1_is_active_c1_flightControlSystem, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c1_b_y, 2, c1_e_y);
  sf_mex_assign(&c1_st, c1_b_y, false);
  return c1_st;
}

static void set_sim_state_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance, const mxArray *c1_st)
{
  const mxArray *c1_u;
  uint8_T c1_b_uv[57600];
  int32_T c1_i;
  chartInstance->c1_doneDoubleBufferReInit = true;
  c1_u = sf_mex_dup(c1_st);
  c1_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 0)), "y",
                      c1_b_uv);
  for (c1_i = 0; c1_i < 57600; c1_i++) {
    (*chartInstance->c1_y)[c1_i] = c1_b_uv[c1_i];
  }

  chartInstance->c1_isInitialized = c1_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_u, 1)), "isInitialized");
  chartInstance->c1_is_active_c1_flightControlSystem = c1_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 2)),
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
  int32_T c1_i1;
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
  for (c1_i1 = 0; c1_i1 < 57600; c1_i1++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 1U, (real_T)
                      (*chartInstance->c1_y)[c1_i1]);
  }
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
    26U);
  covrtChartInitFcn(chartInstance->c1_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c1_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c1_decisionTxtStartIdx, &c1_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c1_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 1088);
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
  int32_T c1_i25;
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
    chartInstance->c1_uv[c1_i] = (*chartInstance->c1_frame_info)[c1_i];
  }

  c1_rgb2hsv(chartInstance, chartInstance->c1_uv, chartInstance->c1_I);
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
  c1_st.site = &c1_f_emlrtRSI;
  for (c1_i24 = 0; c1_i24 < 57600; c1_i24++) {
    chartInstance->c1_uv1[c1_i24] = (*chartInstance->c1_frame_info)[c1_i24];
  }

  c1_insertShape(chartInstance, &c1_st, chartInstance->c1_uv1, c1_bboxOut_data,
                 c1_bboxOut_size, chartInstance->c1_uv2);
  for (c1_i25 = 0; c1_i25 < 57600; c1_i25++) {
    (*chartInstance->c1_y)[c1_i25] = chartInstance->c1_uv2[c1_i25];
  }

  c1_st.site = &c1_g_emlrtRSI;
  c1_matlabCodegenHandle_matlabCodegenDestructor(chartInstance, &c1_st,
    &chartInstance->c1_hBlobAnalysis);
  emlrtHeapReferenceStackLeaveFcnR2012b(c1_sp);
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
  const mxArray *c1_b_y = NULL;
  static char_T c1_cv[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *c1_c_y = NULL;
  c1_visioncodegen_BlobAnalysis *c1_b_obj;
  c1_visioncodegen_BlobAnalysis *c1_c_obj;
  const mxArray *c1_d_y = NULL;
  c1_visioncodegen_BlobAnalysis *c1_d_obj;
  static char_T c1_cv1[4] = { 's', 't', 'e', 'p' };

  int32_T c1_i;
  boolean_T c1_b_varargin_1[19200];
  const mxArray *c1_e_y = NULL;
  static char_T c1_cv2[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  c1_visioncodegen_BlobAnalysis *c1_e_obj;
  const mxArray *c1_f_y = NULL;
  int32_T c1_i1;
  const mxArray *c1_g_y = NULL;
  c1_cell_wrap_3 c1_varSizes[1];
  static char_T c1_cv3[5] = { 's', 'e', 't', 'u', 'p' };

  c1_visioncodegen_BlobAnalysis *c1_f_obj;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  if (c1_obj->isInitialized == 2) {
    c1_b_y = NULL;
    sf_mex_assign(&c1_b_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 45),
                  false);
    c1_c_y = NULL;
    sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 45),
                  false);
    c1_d_y = NULL;
    sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_cv1, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(c1_sp, &c1_emlrtMCI, "error", 0U, 2U, 14, c1_b_y, 14,
                sf_mex_call(c1_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c1_sp, NULL, "message", 1U, 2U, 14, c1_c_y, 14, c1_d_y)));
  }

  if (c1_obj->isInitialized != 1) {
    c1_st.site = &c1_b_emlrtRSI;
    c1_b_obj = c1_obj;
    c1_b_st.site = &c1_b_emlrtRSI;
    c1_d_obj = c1_b_obj;
    c1_d_obj->isSetupComplete = false;
    if (c1_d_obj->isInitialized != 0) {
      c1_e_y = NULL;
      sf_mex_assign(&c1_e_y, sf_mex_create("y", c1_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                    false);
      c1_f_y = NULL;
      sf_mex_assign(&c1_f_y, sf_mex_create("y", c1_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                    false);
      c1_g_y = NULL;
      sf_mex_assign(&c1_g_y, sf_mex_create("y", c1_cv3, 10, 0U, 1U, 0U, 2, 1, 5),
                    false);
      sf_mex_call(&c1_b_st, &c1_emlrtMCI, "error", 0U, 2U, 14, c1_e_y, 14,
                  sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c1_b_st, NULL, "message", 1U, 2U, 14, c1_f_y, 14, c1_g_y)));
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

static void c1_insertShape(SFc1_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c1_sp, uint8_T c1_b_I[57600], int32_T c1_position_data[],
  int32_T c1_position_size[2], uint8_T c1_RGB[57600])
{
  emlrtStack c1_st;
  int32_T c1_b_position_size[2];
  int32_T c1_loop_ub;
  int32_T c1_i;
  int32_T c1_b_position_data[200];
  int32_T c1_i1;
  uint8_T c1_c_I[57600];
  uint8_T c1_tmpRGB[57600];
  int32_T c1_positionOut_data[200];
  int32_T c1_positionOut_size[2];
  uint8_T c1_color_data[150];
  int32_T c1_color_size[2];
  int32_T c1_i2;
  int16_T c1_dimens1;
  int32_T c1_i3;
  int16_T c1_dimens2;
  int32_T c1_i4;
  int16_T c1_numFillColor;
  int32_T c1_i5;
  void* c1_ptrObj;
  uint8_T c1_pixCount[160];
  int16_T c1_i6;
  uint32_T c1_b_dimens1;
  int16_T c1_i7;
  uint32_T c1_b_dimens2;
  void* c1_posPtr;
  int32_T c1_b_i;
  real_T c1_c_i;
  real_T c1_d;
  int16_T c1_i8;
  boolean_T c1_isInitialise;
  real_T c1_d1;
  int16_T c1_i9;
  static boolean_T c1_bv[2] = { false, true };

  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_position_size[0] = c1_position_size[0];
  c1_b_position_size[1] = c1_position_size[1];
  c1_loop_ub = c1_position_size[0] * c1_position_size[1] - 1;
  for (c1_i = 0; c1_i <= c1_loop_ub; c1_i++) {
    c1_b_position_data[c1_i] = c1_position_data[c1_i];
  }

  c1_st.site = &c1_n_emlrtRSI;
  for (c1_i1 = 0; c1_i1 < 57600; c1_i1++) {
    c1_c_I[c1_i1] = c1_b_I[c1_i1];
  }

  c1_validateAndParseInputs(chartInstance, &c1_st, c1_c_I, c1_b_position_data,
    c1_b_position_size, c1_tmpRGB, c1_positionOut_data, c1_positionOut_size,
    c1_color_data, c1_color_size);
  c1_i2 = c1_positionOut_size[0];
  if (c1_i2 > 32767) {
    c1_i2 = 32767;
    sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
  } else {
    if (c1_i2 < -32768) {
      c1_i2 = -32768;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    }
  }

  c1_dimens1 = (int16_T)c1_i2;
  c1_i3 = c1_positionOut_size[1];
  if (c1_i3 > 32767) {
    c1_i3 = 32767;
    sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
  } else {
    if (c1_i3 < -32768) {
      c1_i3 = -32768;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    }
  }

  c1_dimens2 = (int16_T)c1_i3;
  c1_i4 = c1_color_size[0];
  if (c1_i4 > 32767) {
    c1_i4 = 32767;
    sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
  } else {
    if (c1_i4 < -32768) {
      c1_i4 = -32768;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    }
  }

  c1_numFillColor = (int16_T)c1_i4;
  for (c1_i5 = 0; c1_i5 < 160; c1_i5++) {
    c1_pixCount[c1_i5] = 0U;
  }

  c1_ptrObj = NULL;
  constructDrawBaseObjectShape(&c1_ptrObj);
  c1_i6 = c1_dimens1;
  if (c1_i6 < 0) {
    c1_i6 = 0;
    sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
  }

  c1_b_dimens1 = (uint32_T)c1_i6;
  c1_i7 = c1_dimens2;
  if (c1_i7 < 0) {
    c1_i7 = 0;
    sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
  }

  c1_b_dimens2 = (uint32_T)c1_i7;
  c1_posPtr = NULL;
  getPositionDataPointer(&c1_posPtr, &c1_positionOut_data[0], c1_b_dimens1,
    c1_b_dimens2);
  for (c1_b_i = 0; c1_b_i < 2; c1_b_i++) {
    c1_c_i = (real_T)c1_b_i + 1.0;
    c1_d = muDoubleScalarRound(c1_c_i - 1.0);
    if (c1_d < 32768.0) {
      if (c1_d >= -32768.0) {
        c1_i8 = (int16_T)c1_d;
      } else {
        c1_i8 = MIN_int16_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      }
    } else if (c1_d >= 32768.0) {
      c1_i8 = MAX_int16_T;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else {
      c1_i8 = 0;
    }

    c1_isInitialise = initialiseDrawbaseShape(c1_ptrObj, c1_i8, 1);
    if (!c1_isInitialise) {
      c1_d1 = muDoubleScalarRound(c1_c_i - 1.0);
      if (c1_d1 < 32768.0) {
        if (c1_d1 >= -32768.0) {
          c1_i9 = (int16_T)c1_d1;
        } else {
          c1_i9 = MIN_int16_T;
          sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
        }
      } else if (c1_d1 >= 32768.0) {
        c1_i9 = MAX_int16_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      } else {
        c1_i9 = 0;
      }

      instantiateDrawBaseShape_uint8(c1_ptrObj, c1_RGB, c1_tmpRGB, c1_posPtr,
        &c1_color_data[0], 0.6, 5, 1, true, 120, 160, 3, 2, c1_dimens1,
        c1_dimens2, c1_numFillColor, false, c1_bv[(int32_T)c1_c_i - 1],
        c1_pixCount, c1_i9);
    }
  }

  mDrawShapes(c1_ptrObj, false, true, 1, 5, 120, 160);
  deallocateMemoryShape(c1_ptrObj);
  deletePositionDataPointer(c1_posPtr);
}

static void c1_validateAndParseInputs(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, uint8_T c1_b_I[57600], int32_T
  c1_position_data[], int32_T c1_position_size[2], uint8_T c1_RGB[57600],
  int32_T c1_positionOut_data[], int32_T c1_positionOut_size[2], uint8_T
  c1_colorOut_data[], int32_T c1_colorOut_size[2])
{
  emlrtStack c1_st;
  emlrtStack c1_b_st;
  emlrtStack c1_c_st;
  int32_T c1_i;
  boolean_T c1_errCond;
  boolean_T c1_condition;
  const mxArray *c1_b_y = NULL;
  static char_T c1_cv[37] = { 'v', 'i', 's', 'i', 'o', 'n', ':', 'i', 'n', 's',
    'e', 'r', 't', 'S', 'h', 'a', 'p', 'e', ':', 'p', 'o', 's', 'C', 'o', 'l',
    's', 'N', 'o', 't', '4', 'F', 'o', 'r', 'R', 'e', 'c', 't' };

  const mxArray *c1_c_y = NULL;
  int32_T c1_loop_ub;
  int32_T c1_i1;
  const mxArray *c1_d_y = NULL;
  static char_T c1_cv1[9] = { 'R', 'e', 'c', 't', 'a', 'n', 'g', 'l', 'e' };

  real_T c1_numPosition;
  real_T c1_numShapes;
  real_T c1_varargin_1[2];
  int32_T c1_k;
  int32_T c1_exitg1;
  boolean_T c1_p;
  real_T c1_b_k;
  boolean_T c1_b;
  const mxArray *c1_e_y = NULL;
  real_T c1_n;
  static char_T c1_cv2[57] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 's', 's', 'e', 'r', 't', '_',
    'v', 'a', 'l', 'i', 'd', '_', 's', 'i', 'z', 'e', '_', 'a', 'r', 'g', '_',
    'i', 'n', 'v', 'a', 'l', 'i', 'd', 'S', 'i', 'z', 'e', 'V', 'e', 'c', 't',
    'o', 'r' };

  int32_T c1_c_k;
  const mxArray *c1_f_y = NULL;
  real_T c1_d_k;
  int32_T c1_u;
  const mxArray *c1_g_y = NULL;
  const mxArray *c1_h_y = NULL;
  int32_T c1_tile_size[2];
  static char_T c1_cv3[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  int32_T c1_outsize[2];
  const mxArray *c1_i_y = NULL;
  int32_T c1_b_u;
  const mxArray *c1_j_y = NULL;
  const mxArray *c1_k_y = NULL;
  static char_T c1_cv4[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm', 'a',
    'x', 's', 'i', 'z', 'e' };

  int32_T c1_ntilerows;
  int32_T c1_jcol;
  int32_T c1_b_jcol;
  int32_T c1_iacol;
  int32_T c1_ibmat;
  int32_T c1_itilerow;
  int32_T c1_b_itilerow;
  int32_T c1_ibcol;
  static uint8_T c1_b_uv[3] = { MAX_uint8_T, MAX_uint8_T, 0U };

  (void)chartInstance;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_c_st.prev = &c1_b_st;
  c1_c_st.tls = c1_b_st.tls;
  for (c1_i = 0; c1_i < 57600; c1_i++) {
    c1_RGB[c1_i] = c1_b_I[c1_i];
  }

  c1_st.site = &c1_p_emlrtRSI;
  c1_b_st.site = &c1_r_emlrtRSI;
  c1_errCond = ((real_T)c1_position_size[1] != 4.0);
  c1_c_st.site = &c1_s_emlrtRSI;
  c1_condition = c1_errCond;
  if (c1_condition) {
    c1_b_y = NULL;
    sf_mex_assign(&c1_b_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 37),
                  false);
    c1_c_y = NULL;
    sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 37),
                  false);
    c1_d_y = NULL;
    sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_cv1, 10, 0U, 1U, 0U, 2, 1, 9),
                  false);
    sf_mex_call(&c1_c_st, &c1_b_emlrtMCI, "error", 0U, 2U, 14, c1_b_y, 14,
                sf_mex_call(&c1_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_c_st, NULL, "message", 1U, 2U, 14, c1_c_y, 14, c1_d_y)));
  }

  c1_positionOut_size[0] = c1_position_size[0];
  c1_positionOut_size[1] = c1_position_size[1];
  c1_loop_ub = c1_position_size[0] * c1_position_size[1] - 1;
  for (c1_i1 = 0; c1_i1 <= c1_loop_ub; c1_i1++) {
    c1_positionOut_data[c1_i1] = c1_position_data[c1_i1];
  }

  c1_numPosition = (real_T)c1_positionOut_size[0];
  c1_st.site = &c1_q_emlrtRSI;
  c1_numShapes = c1_numPosition;
  c1_b_st.site = &c1_t_emlrtRSI;
  c1_varargin_1[0] = c1_numShapes;
  c1_varargin_1[1] = 1.0;
  c1_c_st.site = &c1_u_emlrtRSI;
  c1_k = 0;
  do {
    c1_exitg1 = 0;
    if (c1_k < 2) {
      c1_b_k = (real_T)c1_k + 1.0;
      if (c1_varargin_1[(int32_T)c1_b_k - 1] != c1_varargin_1[(int32_T)c1_b_k -
          1]) {
        c1_p = false;
        c1_exitg1 = 1;
      } else {
        c1_k++;
      }
    } else {
      c1_p = true;
      c1_exitg1 = 1;
    }
  } while (c1_exitg1 == 0);

  if (c1_p) {
    c1_b = true;
  } else {
    c1_b = false;
  }

  if (!c1_b) {
    c1_e_y = NULL;
    sf_mex_assign(&c1_e_y, sf_mex_create("y", c1_cv2, 10, 0U, 1U, 0U, 2, 1, 57),
                  false);
    c1_f_y = NULL;
    sf_mex_assign(&c1_f_y, sf_mex_create("y", c1_cv2, 10, 0U, 1U, 0U, 2, 1, 57),
                  false);
    c1_u = MIN_int32_T;
    c1_h_y = NULL;
    sf_mex_assign(&c1_h_y, sf_mex_create("y", &c1_u, 6, 0U, 0U, 0U, 0), false);
    c1_b_u = MAX_int32_T;
    c1_j_y = NULL;
    sf_mex_assign(&c1_j_y, sf_mex_create("y", &c1_b_u, 6, 0U, 0U, 0U, 0), false);
    sf_mex_call(&c1_c_st, &c1_d_emlrtMCI, "error", 0U, 2U, 14, c1_e_y, 14,
                sf_mex_call(&c1_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_c_st, NULL, "message", 1U, 3U, 14, c1_f_y, 14, c1_h_y, 14, c1_j_y)));
  }

  c1_n = 1.0;
  for (c1_c_k = 0; c1_c_k < 2; c1_c_k++) {
    c1_d_k = (real_T)c1_c_k + 1.0;
    if (c1_varargin_1[(int32_T)c1_d_k - 1] <= 0.0) {
      c1_n = 0.0;
    } else {
      c1_n *= c1_varargin_1[(int32_T)c1_d_k - 1];
    }
  }

  if (!(c1_n <= 2.147483647E+9)) {
    c1_g_y = NULL;
    sf_mex_assign(&c1_g_y, sf_mex_create("y", c1_cv3, 10, 0U, 1U, 0U, 2, 1, 21),
                  false);
    c1_i_y = NULL;
    sf_mex_assign(&c1_i_y, sf_mex_create("y", c1_cv3, 10, 0U, 1U, 0U, 2, 1, 21),
                  false);
    sf_mex_call(&c1_c_st, &c1_e_emlrtMCI, "error", 0U, 2U, 14, c1_g_y, 14,
                sf_mex_call(&c1_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_c_st, NULL, "message", 1U, 1U, 14, c1_i_y)));
  }

  c1_tile_size[0] = (int32_T)c1_varargin_1[0];
  c1_outsize[0] = c1_tile_size[0];
  if (!((real_T)c1_outsize[0] == (real_T)c1_tile_size[0])) {
    c1_k_y = NULL;
    sf_mex_assign(&c1_k_y, sf_mex_create("y", c1_cv4, 10, 0U, 1U, 0U, 2, 1, 15),
                  false);
    sf_mex_call(&c1_b_st, &c1_c_emlrtMCI, "error", 0U, 1U, 14, c1_k_y);
  }

  c1_colorOut_size[0] = c1_outsize[0];
  c1_colorOut_size[1] = 3;
  c1_ntilerows = c1_tile_size[0];
  for (c1_jcol = 0; c1_jcol < 3; c1_jcol++) {
    c1_b_jcol = c1_jcol;
    c1_iacol = c1_b_jcol;
    c1_ibmat = c1_b_jcol * c1_ntilerows - 1;
    for (c1_itilerow = 1; c1_itilerow - 1 < c1_ntilerows; c1_itilerow++) {
      c1_b_itilerow = c1_itilerow;
      c1_ibcol = c1_ibmat + c1_b_itilerow;
      c1_colorOut_data[c1_ibcol] = c1_b_uv[c1_iacol];
    }
  }
}

static void c1_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_y, const char_T *c1_identifier, uint8_T
  c1_c_y[57600])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_y), &c1_thisId, c1_c_y);
  sf_mex_destroy(&c1_b_y);
}

static void c1_b_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  uint8_T c1_b_y[57600])
{
  uint8_T c1_b_uv[57600];
  int32_T c1_i;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_b_uv, 1, 3, 0U, 1, 0U, 3, 120,
                160, 3);
  for (c1_i = 0; c1_i < 57600; c1_i++) {
    c1_b_y[c1_i] = c1_b_uv[c1_i];
  }

  sf_mex_destroy(&c1_u);
}

static boolean_T c1_c_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_isInitialized, const char_T *c1_identifier)
{
  boolean_T c1_b_y;
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_b_y = c1_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_isInitialized),
    &c1_thisId);
  sf_mex_destroy(&c1_b_isInitialized);
  return c1_b_y;
}

static boolean_T c1_d_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  boolean_T c1_b_y;
  boolean_T c1_b;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_b, 1, 11, 0U, 0, 0U, 0);
  c1_b_y = c1_b;
  sf_mex_destroy(&c1_u);
  return c1_b_y;
}

static uint8_T c1_e_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_flightControlSystem, const
  char_T *c1_identifier)
{
  uint8_T c1_b_y;
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_b_y = c1_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_b_is_active_c1_flightControlSystem), &c1_thisId);
  sf_mex_destroy(&c1_b_is_active_c1_flightControlSystem);
  return c1_b_y;
}

static uint8_T c1_f_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  uint8_T c1_b_y;
  uint8_T c1_b_u;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_b_u, 1, 3, 0U, 0, 0U, 0);
  c1_b_y = c1_b_u;
  sf_mex_destroy(&c1_u);
  return c1_b_y;
}

static const mxArray *c1_chart_data_browse_helper
  (SFc1_flightControlSystemInstanceStruct *chartInstance, int32_T c1_ssIdNumber)
{
  const mxArray *c1_mxData = NULL;
  c1_mxData = NULL;
  switch (c1_ssIdNumber) {
   case 4U:
    sf_mex_assign(&c1_mxData, sf_mex_create("mxData",
      *chartInstance->c1_frame_info, 3, 0U, 1U, 0U, 3, 120, 160, 3), false);
    break;

   case 5U:
    sf_mex_assign(&c1_mxData, sf_mex_create("mxData", *chartInstance->c1_y, 3,
      0U, 1U, 0U, 3, 120, 160, 3), false);
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
  chartInstance->c1_y = (uint8_T (*)[57600])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c1_flightControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3107793076U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1249422679U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1335337217U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1201582057U);
}

mxArray *sf_c1_flightControlSystem_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,2);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Rgb2hsvBuildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "vision.internal.buildable.insertShapeBuildable"));
  return(mxcell3p);
}

mxArray *sf_c1_flightControlSystem_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_functions");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString(
    "insertShapeBuildable_drawBaseConstruct");
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
    "eNpjYPT0ZQACPiA+wcTAwAakOYCYiQECWKF8RiBmhtIQcRa4uAIQl1QWpILEi4uSPVOAdF5iLpi"
    "fWFrhmZeWDzbfggFhPhsW8xmRzOeEikPAB3vK9Is4gPQbIOlnIaBfAMiqhIYLLHzIt1/AgTL9EP"
    "sdCLifF8X9EH5msWdeZklmYk5mVWoK1fyjQBX/BBDwjwKafxTA/olPTC7JLEuNTzaMT8vJTM8oc"
    "c7PKynKzwmuLC5JzYX5DwCUaiPG"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_flightControlSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "seIICWC0qgaNtcoxuYNWynB";
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
  const char* encStrCodegen [18] = {
    "eNrtV01u20YUphzHaIDYEIIA2RSod83S2WURNLYpCSEg/8B04mRljIdP4kDDGWZ+ZKm7nqB3yBV",
    "ygSyz6SLoplcouukR+oaiZYUiqbhyDAMJAYoczve+eX/z3shrBHseXht4v37geWv4/AHvFW9y3c",
    "3HjZl78n3V+zkfP0chYZNDokiivdpLkASOQEtuDZMiED1ZCmOiBwoERWwqlali0yyxnIlBxwrq+",
    "PRJzGgcxtLyaBdlSXQg+BjZUmsOkafFFFDTAYhMrKTtxx1O+lONlTn3Y6ADbZM6EzSY0KZOLb1n",
    "uWEph/YIaCC0IaixvtQtNMSAb0aVZjpLdXgBlEnKGRGl1sZEh5Cigw28TCP8PbAGjSrCaEyU2YW",
    "YDEF32SDjlAKKnEzjxBkTxEjFCG8n3HeC87odctRnT0bAaxyCuu0qIINUMmGq4x920NK2IGccWn",
    "Bm+9VsIby1LvivGJyDqvRbz5dDUKQPB6Jy0cwh7VEWrWmWzMMMS+AVUTsU46chqsxezBwdEowTH",
    "KNEFQwyIwN9rNgQ3VvJZpPAZeaiLWOTSbD1IljG1h5CXRSmbB0qfMK5roQdy7QLQ+AZa4sYUg+b",
    "sJbjtGbRsUQHu/Su3g1WMAx8DvOliFhpuIYFQFZ39rGwfI6kVhuZ+Ji8rW53fnoeFggDqkcolFU",
    "BRZgG9Fnm3mq2iGkXewSiViZTrww8yZBFKE/3rGidSzVAn9QUkUsTXEQrgYnuYyxxJ7zUuGnqYC",
    "6Wi3CU0BgiV2AYhz3cNogt8Yl2pW0H992QmXELNFUsLYuq6z9b3mX/uf8F/edCrvh8PMPTKOHxZ",
    "p7Fde+t1K+7gm+NXG57Rm69sM5qQc7hmnj/9uc7+37n93+OPjz7tPb3H5+WWX9052r9eiMf/3hR",
    "GKeJPpzLL4d9MaPXagn/oxn+Zj7WEAT+ib/1tk/2DZUj+2b/ZCx2M76PK/X63inoe/F901XocZr",
    "VW61oEOUHCTcmdtJeHf/TGX3XFvjjXv59cv37fDn5h9vFOK4ukG/i27iQt/9//eb2cvLz+Vym/3",
    "oh3utZHw4EFjDC2a9Z37weezavxZ7DBfZsFuzZzOw5Ja5awSl9ctrjrB+7RmOU5OFYG0g2rqFuX",
    "FXO+y53K+Qa36B9X9KHb1rOu2G5Ze276nnktuHr+ppXwDdvsR3LnhO/Nv4v72rnuZ/y8S/Tv1h+",
    "zHhUctrOp7tAemWzN2DffwAcpKY=",
    ""
  };

  static char newstr [1229] = "";
  newstr[0] = '\0';
  for (i = 0; i < 18; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c1_flightControlSystem(SimStruct *S)
{
  const char* newstr = sf_c1_flightControlSystem_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(1973605249U));
  ssSetChecksum1(S,(3952034227U));
  ssSetChecksum2(S,(3510419538U));
  ssSetChecksum3(S,(3519932678U));
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
