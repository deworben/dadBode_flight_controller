/* Include files */

#include "flightControlSystem_sfun.h"
#include "c12_flightControlSystem.h"
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
static emlrtRSInfo c12_emlrtRSI = { 14,/* lineNo */
  "Image Processing System/Landing zone detection flag and landing zone pixel centre/Colour_img_to_BW",/* fcnName */
  "#flightControlSystem:3141"          /* pathName */
};

static emlrtRSInfo c12_b_emlrtRSI = { 51,/* lineNo */
  "rgb2hsv",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\images\\rgb2hsv.m"/* pathName */
};

/* Function Declarations */
static void initialize_c12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance);
static void initialize_params_c12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance);
static void enable_c12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance);
static void disable_c12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance);
static void c12_update_jit_animation_state_c12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance);
static void c12_do_animation_call_c12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance);
static void ext_mode_exec_c12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance);
static void set_sim_state_c12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance, const mxArray *c12_st);
static void sf_gateway_c12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance);
static void mdl_start_c12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance);
static void mdl_terminate_c12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance);
static void c12_chartstep_c12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance);
static void initSimStructsc12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance);
static void c12_rgb2hsv(SFc12_flightControlSystemInstanceStruct *chartInstance,
  uint8_T c12_X[57600], real_T c12_hsv[57600]);
static void c12_emlrt_marshallIn(SFc12_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c12_b_y, const char_T *c12_identifier,
  boolean_T c12_c_y[19200]);
static void c12_b_emlrt_marshallIn(SFc12_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId,
  boolean_T c12_b_y[19200]);
static uint8_T c12_c_emlrt_marshallIn(SFc12_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c12_b_is_active_c12_flightControlSystem, const
  char_T *c12_identifier);
static uint8_T c12_d_emlrt_marshallIn(SFc12_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId);
static const mxArray *c12_chart_data_browse_helper
  (SFc12_flightControlSystemInstanceStruct *chartInstance, int32_T
   c12_ssIdNumber);
static void init_dsm_address_info(SFc12_flightControlSystemInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc12_flightControlSystemInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c12_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c12_is_active_c12_flightControlSystem = 0U;
}

static void initialize_params_c12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c12_update_jit_animation_state_c12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c12_do_animation_call_c12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance)
{
  const mxArray *c12_st;
  const mxArray *c12_b_y = NULL;
  const mxArray *c12_c_y = NULL;
  const mxArray *c12_d_y = NULL;
  c12_st = NULL;
  c12_st = NULL;
  c12_b_y = NULL;
  sf_mex_assign(&c12_b_y, sf_mex_createcellmatrix(2, 1), false);
  c12_c_y = NULL;
  sf_mex_assign(&c12_c_y, sf_mex_create("y", *chartInstance->c12_y, 11, 0U, 1U,
    0U, 2, 120, 160), false);
  sf_mex_setcell(c12_b_y, 0, c12_c_y);
  c12_d_y = NULL;
  sf_mex_assign(&c12_d_y, sf_mex_create("y",
    &chartInstance->c12_is_active_c12_flightControlSystem, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c12_b_y, 1, c12_d_y);
  sf_mex_assign(&c12_st, c12_b_y, false);
  return c12_st;
}

static void set_sim_state_c12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance, const mxArray *c12_st)
{
  const mxArray *c12_u;
  boolean_T c12_bv[19200];
  int32_T c12_i;
  chartInstance->c12_doneDoubleBufferReInit = true;
  c12_u = sf_mex_dup(c12_st);
  c12_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c12_u, 0)), "y",
                       c12_bv);
  for (c12_i = 0; c12_i < 19200; c12_i++) {
    (*chartInstance->c12_y)[c12_i] = c12_bv[c12_i];
  }

  chartInstance->c12_is_active_c12_flightControlSystem = c12_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c12_u, 1)),
     "is_active_c12_flightControlSystem");
  sf_mex_destroy(&c12_u);
  sf_mex_destroy(&c12_st);
}

static void sf_gateway_c12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance)
{
  int32_T c12_i;
  int32_T c12_i1;
  chartInstance->c12_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c12_i = 0; c12_i < 57600; c12_i++) {
    covrtSigUpdateFcn(chartInstance->c12_covrtInstance, 0U, (real_T)
                      (*chartInstance->c12_frame_info)[c12_i]);
  }

  chartInstance->c12_sfEvent = CALL_EVENT;
  c12_chartstep_c12_flightControlSystem(chartInstance);
  c12_do_animation_call_c12_flightControlSystem(chartInstance);
  for (c12_i1 = 0; c12_i1 < 19200; c12_i1++) {
    covrtSigUpdateFcn(chartInstance->c12_covrtInstance, 1U, (real_T)
                      (*chartInstance->c12_y)[c12_i1]);
  }
}

static void mdl_start_c12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance)
{
  static const uint32_T c12_decisionTxtStartIdx = 0U;
  static const uint32_T c12_decisionTxtEndIdx = 0U;
  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c12_chart_data_browse_helper);
  chartInstance->c12_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c12_RuntimeVar,
    &chartInstance->c12_IsDebuggerActive,
    &chartInstance->c12_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c12_mlFcnLineNumber);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c12_covrtInstance, 1U, 0U, 1U,
    67U);
  covrtChartInitFcn(chartInstance->c12_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c12_covrtInstance, 0U, 0U, false, false,
                    false, 0U, &c12_decisionTxtStartIdx, &c12_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c12_covrtInstance, 0U, 0, NULL, NULL, 0U,
                    NULL);
  covrtEmlInitFcn(chartInstance->c12_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c12_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 1031);
}

static void mdl_cleanup_runtime_resources_c12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c12_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c12_covrtInstance);
}

static void c12_chartstep_c12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance)
{
  int32_T c12_i;
  uint8_T c12_uv[57600];
  int32_T c12_i1;
  int32_T c12_i2;
  int32_T c12_i3;
  int32_T c12_i4;
  int32_T c12_i5;
  int32_T c12_i6;
  int32_T c12_i7;
  int32_T c12_i8;
  boolean_T c12_bv[19200];
  int32_T c12_i9;
  int32_T c12_i10;
  int32_T c12_i11;
  int32_T c12_i12;
  int32_T c12_i13;
  int32_T c12_i14;
  int32_T c12_i15;
  int32_T c12_i16;
  int32_T c12_i17;
  int32_T c12_i18;
  int32_T c12_i19;
  int32_T c12_i20;
  int32_T c12_i21;
  int32_T c12_i22;
  int32_T c12_i23;
  covrtEmlFcnEval(chartInstance->c12_covrtInstance, 4U, 0, 0);
  for (c12_i = 0; c12_i < 57600; c12_i++) {
    c12_uv[c12_i] = (*chartInstance->c12_frame_info)[c12_i];
  }

  c12_rgb2hsv(chartInstance, c12_uv, chartInstance->c12_I);
  c12_i1 = 0;
  for (c12_i2 = 0; c12_i2 < 160; c12_i2++) {
    for (c12_i4 = 0; c12_i4 < 120; c12_i4++) {
      (*chartInstance->c12_y)[c12_i4 + c12_i1] = (chartInstance->c12_I[c12_i4 +
        c12_i1] >= 0.938);
    }

    c12_i1 += 120;
  }

  c12_i3 = 0;
  for (c12_i5 = 0; c12_i5 < 160; c12_i5++) {
    for (c12_i7 = 0; c12_i7 < 120; c12_i7++) {
      c12_bv[c12_i7 + c12_i3] = (chartInstance->c12_I[c12_i7 + c12_i3] <= 0.0);
    }

    c12_i3 += 120;
  }

  for (c12_i6 = 0; c12_i6 < 19200; c12_i6++) {
    (*chartInstance->c12_y)[c12_i6] = ((*chartInstance->c12_y)[c12_i6] ||
      c12_bv[c12_i6]);
  }

  c12_i8 = 0;
  for (c12_i9 = 0; c12_i9 < 160; c12_i9++) {
    for (c12_i11 = 0; c12_i11 < 120; c12_i11++) {
      c12_bv[c12_i11 + c12_i8] = (chartInstance->c12_I[(c12_i11 + c12_i8) +
        19200] >= 0.419);
    }

    c12_i8 += 120;
  }

  for (c12_i10 = 0; c12_i10 < 19200; c12_i10++) {
    (*chartInstance->c12_y)[c12_i10] = ((*chartInstance->c12_y)[c12_i10] &&
      c12_bv[c12_i10]);
  }

  c12_i12 = 0;
  for (c12_i13 = 0; c12_i13 < 160; c12_i13++) {
    for (c12_i15 = 0; c12_i15 < 120; c12_i15++) {
      c12_bv[c12_i15 + c12_i12] = (chartInstance->c12_I[(c12_i15 + c12_i12) +
        19200] <= 1.0);
    }

    c12_i12 += 120;
  }

  for (c12_i14 = 0; c12_i14 < 19200; c12_i14++) {
    (*chartInstance->c12_y)[c12_i14] = ((*chartInstance->c12_y)[c12_i14] &&
      c12_bv[c12_i14]);
  }

  c12_i16 = 0;
  for (c12_i17 = 0; c12_i17 < 160; c12_i17++) {
    for (c12_i19 = 0; c12_i19 < 120; c12_i19++) {
      c12_bv[c12_i19 + c12_i16] = (chartInstance->c12_I[(c12_i19 + c12_i16) +
        38400] >= 0.841);
    }

    c12_i16 += 120;
  }

  for (c12_i18 = 0; c12_i18 < 19200; c12_i18++) {
    (*chartInstance->c12_y)[c12_i18] = ((*chartInstance->c12_y)[c12_i18] &&
      c12_bv[c12_i18]);
  }

  c12_i20 = 0;
  for (c12_i21 = 0; c12_i21 < 160; c12_i21++) {
    for (c12_i23 = 0; c12_i23 < 120; c12_i23++) {
      c12_bv[c12_i23 + c12_i20] = (chartInstance->c12_I[(c12_i23 + c12_i20) +
        38400] <= 1.0);
    }

    c12_i20 += 120;
  }

  for (c12_i22 = 0; c12_i22 < 19200; c12_i22++) {
    (*chartInstance->c12_y)[c12_i22] = ((*chartInstance->c12_y)[c12_i22] &&
      c12_bv[c12_i22]);
  }
}

static void initSimStructsc12_flightControlSystem
  (SFc12_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray *sf_c12_flightControlSystem_get_eml_resolved_functions_info(void)
{
  const mxArray *c12_nameCaptureInfo = NULL;
  c12_nameCaptureInfo = NULL;
  sf_mex_assign(&c12_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c12_nameCaptureInfo;
}

static void c12_rgb2hsv(SFc12_flightControlSystemInstanceStruct *chartInstance,
  uint8_T c12_X[57600], real_T c12_hsv[57600])
{
  (void)chartInstance;
  rgb2hsv_tbb_uint8(c12_X, 19200.0, c12_hsv, true);
}

static void c12_emlrt_marshallIn(SFc12_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c12_b_y, const char_T *c12_identifier,
  boolean_T c12_c_y[19200])
{
  emlrtMsgIdentifier c12_thisId;
  c12_thisId.fIdentifier = (const char *)c12_identifier;
  c12_thisId.fParent = NULL;
  c12_thisId.bParentIsCell = false;
  c12_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c12_b_y), &c12_thisId,
    c12_c_y);
  sf_mex_destroy(&c12_b_y);
}

static void c12_b_emlrt_marshallIn(SFc12_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId,
  boolean_T c12_b_y[19200])
{
  boolean_T c12_bv[19200];
  int32_T c12_i;
  (void)chartInstance;
  sf_mex_import(c12_parentId, sf_mex_dup(c12_u), c12_bv, 1, 11, 0U, 1, 0U, 2,
                120, 160);
  for (c12_i = 0; c12_i < 19200; c12_i++) {
    c12_b_y[c12_i] = c12_bv[c12_i];
  }

  sf_mex_destroy(&c12_u);
}

static uint8_T c12_c_emlrt_marshallIn(SFc12_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c12_b_is_active_c12_flightControlSystem, const
  char_T *c12_identifier)
{
  uint8_T c12_b_y;
  emlrtMsgIdentifier c12_thisId;
  c12_thisId.fIdentifier = (const char *)c12_identifier;
  c12_thisId.fParent = NULL;
  c12_thisId.bParentIsCell = false;
  c12_b_y = c12_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c12_b_is_active_c12_flightControlSystem), &c12_thisId);
  sf_mex_destroy(&c12_b_is_active_c12_flightControlSystem);
  return c12_b_y;
}

static uint8_T c12_d_emlrt_marshallIn(SFc12_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c12_u, const emlrtMsgIdentifier *c12_parentId)
{
  uint8_T c12_b_y;
  uint8_T c12_b_u;
  (void)chartInstance;
  sf_mex_import(c12_parentId, sf_mex_dup(c12_u), &c12_b_u, 1, 3, 0U, 0, 0U, 0);
  c12_b_y = c12_b_u;
  sf_mex_destroy(&c12_u);
  return c12_b_y;
}

static const mxArray *c12_chart_data_browse_helper
  (SFc12_flightControlSystemInstanceStruct *chartInstance, int32_T
   c12_ssIdNumber)
{
  const mxArray *c12_mxData = NULL;
  c12_mxData = NULL;
  switch (c12_ssIdNumber) {
   case 4U:
    sf_mex_assign(&c12_mxData, sf_mex_create("mxData",
      *chartInstance->c12_frame_info, 3, 0U, 1U, 0U, 3, 120, 160, 3), false);
    break;

   case 5U:
    sf_mex_assign(&c12_mxData, sf_mex_create("mxData", *chartInstance->c12_y, 11,
      0U, 1U, 0U, 2, 120, 160), false);
    break;
  }

  return c12_mxData;
}

static void init_dsm_address_info(SFc12_flightControlSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc12_flightControlSystemInstanceStruct
  *chartInstance)
{
  chartInstance->c12_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c12_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c12_frame_info = (uint8_T (*)[57600])
    ssGetInputPortSignal_wrapper(chartInstance->S, 0);
  chartInstance->c12_y = (boolean_T (*)[19200])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c12_flightControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1912295291U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(4020190243U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(559044776U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(562847053U);
}

mxArray *sf_c12_flightControlSystem_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,1);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Rgb2hsvBuildable"));
  return(mxcell3p);
}

mxArray *sf_c12_flightControlSystem_jit_fallback_info(void)
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

mxArray *sf_c12_flightControlSystem_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c12_flightControlSystem(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPhDBxMDABqQ4IEwwYIXyGaFijHBxFri4AhCXVBakgsSLi5I9U4B0XmIumJ9YWuG"
    "Zl5YPNt+CAWE+GxbzGZHM54SKQ8AHe8r0iziA9Bsg6WchoF8AyKqEhQuUJt9+BQfK9EPsjyDgfk"
    "UU90P4mcXxicklmWWp8cmGRvFpOZnpGSXO+XklRfk5wZXFJam5SOaDAABcDhv6"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c12_flightControlSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sKVKgU4ExbwM9ABhWi3VzbG";
}

static void sf_opaque_initialize_c12_flightControlSystem(void *chartInstanceVar)
{
  initialize_params_c12_flightControlSystem
    ((SFc12_flightControlSystemInstanceStruct*) chartInstanceVar);
  initialize_c12_flightControlSystem((SFc12_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c12_flightControlSystem(void *chartInstanceVar)
{
  enable_c12_flightControlSystem((SFc12_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c12_flightControlSystem(void *chartInstanceVar)
{
  disable_c12_flightControlSystem((SFc12_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c12_flightControlSystem(void *chartInstanceVar)
{
  sf_gateway_c12_flightControlSystem((SFc12_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c12_flightControlSystem(SimStruct*
  S)
{
  return get_sim_state_c12_flightControlSystem
    ((SFc12_flightControlSystemInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c12_flightControlSystem(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c12_flightControlSystem((SFc12_flightControlSystemInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c12_flightControlSystem(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc12_flightControlSystemInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_flightControlSystem_optimization_info();
    }

    mdl_cleanup_runtime_resources_c12_flightControlSystem
      ((SFc12_flightControlSystemInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c12_flightControlSystem(void *chartInstanceVar)
{
  mdl_start_c12_flightControlSystem((SFc12_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c12_flightControlSystem(void
  *chartInstanceVar)
{
  mdl_terminate_c12_flightControlSystem((SFc12_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc12_flightControlSystem((SFc12_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c12_flightControlSystem(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c12_flightControlSystem
      ((SFc12_flightControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
    initSimStructsc12_flightControlSystem
      ((SFc12_flightControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c12_flightControlSystem_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [17] = {
    "eNrtV8tu00AUdaOCqARVkZBggcRjA0JC4inBhrZ5QdSEVrgtSCyqiX0TjzKeMfNIGz6BFWxZ8Ql",
    "8Dp/BJ3DHdtPg2A5t1AokRprYY5975r7mXsdZaHUcHMs4P192nPN4vYCz4iTjXLpemJjJ80XnTr",
    "peRSFuwi0iSaic0sFJCG9ACWY0FbzFeyIXRnkPJHAPsZGQuohN0dAwygdNwz3Lp94G1AvcQBjmV",
    "1GW+JucjZAtMnoLeepUgqebAL4OpDD9oMlIf6yx1Pu1ALyBMmGZCQq0ayKrluoYpmnEoHEAXosr",
    "TVBjdaSbq4mGmj4oNNNaqtxDoAgjRgnPtTYgyoUIHaxhJ/Lxd9NoNCoL8wIidRUCMgTVpoOYU3D",
    "IclKFL7qUEy0kJawRspoVnNZti6E+HeEDK3EI6laVQAaRoFwXx99toqUNTroM6tA1/WI2Fz4YG/",
    "xdCvsgC/3Wq4khSNKHTV64aeyQxkEcrXGWTMM0DWGXyHUP46fAL8xezBzlEowTbKNEEQxiI1tqW",
    "9IhureQzYQtm5mzjowJk2CrWbCYrTGEsiiM2ZoerxHGVCFsW0RtGAKLWetEk3JYwpqPU4r62wId",
    "bNO7+DQYTjHwKawmuE9zwzXMAOK68xoLy+9Izygtwhomb73dnn49DWtxDbJHPMirApJQBeiz2L3",
    "FbD5VNvYIRK10rF4eOMmQWShH9Qyv7ws5QJ+UFJEjE2xEC4Gh6mMs8STsKDw0ZTAby1k4j3gB+L",
    "bAUAYdPDaIzfGJsqVtHc/dkOpRHZQnaZQXVdt/HjhH/efiH/SfQ7ns9e4Ez0IOjzNxze67VCnft",
    "4J3C6nc2oTcpcw+ixk5i1vBefvavcbjp5+q4fvmt6/8/pd59v9eOV6/Xk7X1w8L4zjRh1P5ZbGv",
    "JvRazOG/OsG/kq7Vxu5Gf+dJ46C733m+Xg3e0se7H7svk/jM0LeS0ffw+U1boUdRXG+V9Fp++iF",
    "h18Qk7dXyP5vQ9/wMfyylz5Pxc3U++Str2TguzpBfwbtRJm9Pvv/Ntfnkk/3fzdD/Vibet+I+vE",
    "fs6YY97+GjvR6j/cBWZi0Fc0dKQ5hzPk+a78eVc85Y7l/R879fTt++P+lfZy3nnLHcvPYdt4//b",
    "fiyfuBk8Ct/sR3zfl+dNv6Hc7zvoBvp+sX4r0ktoMzP+UpNX7eB9PLenoF9vwBk/Zh/",
    ""
  };

  static char newstr [1193] = "";
  newstr[0] = '\0';
  for (i = 0; i < 17; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c12_flightControlSystem(SimStruct *S)
{
  const char* newstr = sf_c12_flightControlSystem_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(1160386594U));
  ssSetChecksum1(S,(1116353843U));
  ssSetChecksum2(S,(2688965485U));
  ssSetChecksum3(S,(2435673754U));
}

static void mdlRTW_c12_flightControlSystem(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c12_flightControlSystem(SimStruct *S)
{
  SFc12_flightControlSystemInstanceStruct *chartInstance;
  chartInstance = (SFc12_flightControlSystemInstanceStruct *)utMalloc(sizeof
    (SFc12_flightControlSystemInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc12_flightControlSystemInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c12_flightControlSystem;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c12_flightControlSystem;
  chartInstance->chartInfo.mdlStart =
    sf_opaque_mdl_start_c12_flightControlSystem;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c12_flightControlSystem;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c12_flightControlSystem;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c12_flightControlSystem;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c12_flightControlSystem;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c12_flightControlSystem;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c12_flightControlSystem;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c12_flightControlSystem;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c12_flightControlSystem;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c12_flightControlSystem;
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
    chartInstance->c12_JITStateAnimation,
    chartInstance->c12_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c12_flightControlSystem(chartInstance);
}

void c12_flightControlSystem_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c12_flightControlSystem(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c12_flightControlSystem(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c12_flightControlSystem(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c12_flightControlSystem_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
