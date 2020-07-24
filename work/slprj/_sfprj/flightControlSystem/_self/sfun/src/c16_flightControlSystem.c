/* Include files */

#include "flightControlSystem_sfun.h"
#include "c16_flightControlSystem.h"
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
static emlrtRSInfo c16_emlrtRSI = { 4, /* lineNo */
  "Image Processing System/Colour_img_to_BW",/* fcnName */
  "#flightControlSystem:3161"          /* pathName */
};

static emlrtRSInfo c16_b_emlrtRSI = { 51,/* lineNo */
  "rgb2hsv",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020a\\toolbox\\eml\\lib\\matlab\\images\\rgb2hsv.m"/* pathName */
};

/* Function Declarations */
static void initialize_c16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance);
static void initialize_params_c16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance);
static void enable_c16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance);
static void disable_c16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance);
static void c16_update_jit_animation_state_c16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance);
static void c16_do_animation_call_c16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance);
static void ext_mode_exec_c16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance);
static void set_sim_state_c16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance, const mxArray *c16_st);
static void sf_gateway_c16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance);
static void mdl_start_c16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance);
static void mdl_terminate_c16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance);
static void c16_chartstep_c16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance);
static void initSimStructsc16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance);
static void c16_rgb2hsv(SFc16_flightControlSystemInstanceStruct *chartInstance,
  uint8_T c16_X[57600], real_T c16_hsv[57600]);
static void c16_emlrt_marshallIn(SFc16_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c16_b_y, const char_T *c16_identifier,
  boolean_T c16_c_y[19200]);
static void c16_b_emlrt_marshallIn(SFc16_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c16_u, const emlrtMsgIdentifier *c16_parentId,
  boolean_T c16_b_y[19200]);
static uint8_T c16_c_emlrt_marshallIn(SFc16_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c16_b_is_active_c16_flightControlSystem, const
  char_T *c16_identifier);
static uint8_T c16_d_emlrt_marshallIn(SFc16_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c16_u, const emlrtMsgIdentifier *c16_parentId);
static const mxArray *c16_chart_data_browse_helper
  (SFc16_flightControlSystemInstanceStruct *chartInstance, int32_T
   c16_ssIdNumber);
static void init_dsm_address_info(SFc16_flightControlSystemInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc16_flightControlSystemInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c16_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c16_is_active_c16_flightControlSystem = 0U;
}

static void initialize_params_c16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c16_update_jit_animation_state_c16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c16_do_animation_call_c16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance)
{
  const mxArray *c16_st;
  const mxArray *c16_b_y = NULL;
  const mxArray *c16_c_y = NULL;
  const mxArray *c16_d_y = NULL;
  c16_st = NULL;
  c16_st = NULL;
  c16_b_y = NULL;
  sf_mex_assign(&c16_b_y, sf_mex_createcellmatrix(2, 1), false);
  c16_c_y = NULL;
  sf_mex_assign(&c16_c_y, sf_mex_create("y", *chartInstance->c16_y, 11, 0U, 1U,
    0U, 2, 120, 160), false);
  sf_mex_setcell(c16_b_y, 0, c16_c_y);
  c16_d_y = NULL;
  sf_mex_assign(&c16_d_y, sf_mex_create("y",
    &chartInstance->c16_is_active_c16_flightControlSystem, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c16_b_y, 1, c16_d_y);
  sf_mex_assign(&c16_st, c16_b_y, false);
  return c16_st;
}

static void set_sim_state_c16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance, const mxArray *c16_st)
{
  const mxArray *c16_u;
  boolean_T c16_bv[19200];
  int32_T c16_i;
  chartInstance->c16_doneDoubleBufferReInit = true;
  c16_u = sf_mex_dup(c16_st);
  c16_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c16_u, 0)), "y",
                       c16_bv);
  for (c16_i = 0; c16_i < 19200; c16_i++) {
    (*chartInstance->c16_y)[c16_i] = c16_bv[c16_i];
  }

  chartInstance->c16_is_active_c16_flightControlSystem = c16_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c16_u, 1)),
     "is_active_c16_flightControlSystem");
  sf_mex_destroy(&c16_u);
  sf_mex_destroy(&c16_st);
}

static void sf_gateway_c16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance)
{
  int32_T c16_i;
  int32_T c16_i1;
  chartInstance->c16_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c16_i = 0; c16_i < 57600; c16_i++) {
    covrtSigUpdateFcn(chartInstance->c16_covrtInstance, 0U, (real_T)
                      (*chartInstance->c16_frame_info)[c16_i]);
  }

  chartInstance->c16_sfEvent = CALL_EVENT;
  c16_chartstep_c16_flightControlSystem(chartInstance);
  c16_do_animation_call_c16_flightControlSystem(chartInstance);
  for (c16_i1 = 0; c16_i1 < 19200; c16_i1++) {
    covrtSigUpdateFcn(chartInstance->c16_covrtInstance, 1U, (real_T)
                      (*chartInstance->c16_y)[c16_i1]);
  }
}

static void mdl_start_c16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance)
{
  static const uint32_T c16_decisionTxtStartIdx = 0U;
  static const uint32_T c16_decisionTxtEndIdx = 0U;
  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c16_chart_data_browse_helper);
  chartInstance->c16_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c16_RuntimeVar,
    &chartInstance->c16_IsDebuggerActive,
    &chartInstance->c16_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c16_mlFcnLineNumber);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c16_covrtInstance, 1U, 0U, 1U,
    73U);
  covrtChartInitFcn(chartInstance->c16_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c16_covrtInstance, 0U, 0U, false, false,
                    false, 0U, &c16_decisionTxtStartIdx, &c16_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c16_covrtInstance, 0U, 0, NULL, NULL, 0U,
                    NULL);
  covrtEmlInitFcn(chartInstance->c16_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c16_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 712);
}

static void mdl_cleanup_runtime_resources_c16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c16_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c16_covrtInstance);
}

static void c16_chartstep_c16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance)
{
  int32_T c16_i;
  uint8_T c16_uv[57600];
  int32_T c16_i1;
  int32_T c16_i2;
  int32_T c16_i3;
  int32_T c16_i4;
  int32_T c16_i5;
  int32_T c16_i6;
  int32_T c16_i7;
  int32_T c16_i8;
  boolean_T c16_bv[19200];
  int32_T c16_i9;
  int32_T c16_i10;
  int32_T c16_i11;
  int32_T c16_i12;
  int32_T c16_i13;
  int32_T c16_i14;
  int32_T c16_i15;
  int32_T c16_i16;
  int32_T c16_i17;
  int32_T c16_i18;
  int32_T c16_i19;
  int32_T c16_i20;
  int32_T c16_i21;
  int32_T c16_i22;
  int32_T c16_i23;
  covrtEmlFcnEval(chartInstance->c16_covrtInstance, 4U, 0, 0);
  for (c16_i = 0; c16_i < 57600; c16_i++) {
    c16_uv[c16_i] = (*chartInstance->c16_frame_info)[c16_i];
  }

  c16_rgb2hsv(chartInstance, c16_uv, chartInstance->c16_I);
  c16_i1 = 0;
  for (c16_i2 = 0; c16_i2 < 160; c16_i2++) {
    for (c16_i4 = 0; c16_i4 < 120; c16_i4++) {
      (*chartInstance->c16_y)[c16_i4 + c16_i1] = (chartInstance->c16_I[c16_i4 +
        c16_i1] >= 0.938);
    }

    c16_i1 += 120;
  }

  c16_i3 = 0;
  for (c16_i5 = 0; c16_i5 < 160; c16_i5++) {
    for (c16_i7 = 0; c16_i7 < 120; c16_i7++) {
      c16_bv[c16_i7 + c16_i3] = (chartInstance->c16_I[c16_i7 + c16_i3] <= 0.0);
    }

    c16_i3 += 120;
  }

  for (c16_i6 = 0; c16_i6 < 19200; c16_i6++) {
    (*chartInstance->c16_y)[c16_i6] = ((*chartInstance->c16_y)[c16_i6] ||
      c16_bv[c16_i6]);
  }

  c16_i8 = 0;
  for (c16_i9 = 0; c16_i9 < 160; c16_i9++) {
    for (c16_i11 = 0; c16_i11 < 120; c16_i11++) {
      c16_bv[c16_i11 + c16_i8] = (chartInstance->c16_I[(c16_i11 + c16_i8) +
        19200] >= 0.419);
    }

    c16_i8 += 120;
  }

  for (c16_i10 = 0; c16_i10 < 19200; c16_i10++) {
    (*chartInstance->c16_y)[c16_i10] = ((*chartInstance->c16_y)[c16_i10] &&
      c16_bv[c16_i10]);
  }

  c16_i12 = 0;
  for (c16_i13 = 0; c16_i13 < 160; c16_i13++) {
    for (c16_i15 = 0; c16_i15 < 120; c16_i15++) {
      c16_bv[c16_i15 + c16_i12] = (chartInstance->c16_I[(c16_i15 + c16_i12) +
        19200] <= 1.0);
    }

    c16_i12 += 120;
  }

  for (c16_i14 = 0; c16_i14 < 19200; c16_i14++) {
    (*chartInstance->c16_y)[c16_i14] = ((*chartInstance->c16_y)[c16_i14] &&
      c16_bv[c16_i14]);
  }

  c16_i16 = 0;
  for (c16_i17 = 0; c16_i17 < 160; c16_i17++) {
    for (c16_i19 = 0; c16_i19 < 120; c16_i19++) {
      c16_bv[c16_i19 + c16_i16] = (chartInstance->c16_I[(c16_i19 + c16_i16) +
        38400] >= 0.841);
    }

    c16_i16 += 120;
  }

  for (c16_i18 = 0; c16_i18 < 19200; c16_i18++) {
    (*chartInstance->c16_y)[c16_i18] = ((*chartInstance->c16_y)[c16_i18] &&
      c16_bv[c16_i18]);
  }

  c16_i20 = 0;
  for (c16_i21 = 0; c16_i21 < 160; c16_i21++) {
    for (c16_i23 = 0; c16_i23 < 120; c16_i23++) {
      c16_bv[c16_i23 + c16_i20] = (chartInstance->c16_I[(c16_i23 + c16_i20) +
        38400] <= 1.0);
    }

    c16_i20 += 120;
  }

  for (c16_i22 = 0; c16_i22 < 19200; c16_i22++) {
    (*chartInstance->c16_y)[c16_i22] = ((*chartInstance->c16_y)[c16_i22] &&
      c16_bv[c16_i22]);
  }
}

static void initSimStructsc16_flightControlSystem
  (SFc16_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray *sf_c16_flightControlSystem_get_eml_resolved_functions_info(void)
{
  const mxArray *c16_nameCaptureInfo = NULL;
  c16_nameCaptureInfo = NULL;
  sf_mex_assign(&c16_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c16_nameCaptureInfo;
}

static void c16_rgb2hsv(SFc16_flightControlSystemInstanceStruct *chartInstance,
  uint8_T c16_X[57600], real_T c16_hsv[57600])
{
  (void)chartInstance;
  rgb2hsv_tbb_uint8(c16_X, 19200.0, c16_hsv, true);
}

static void c16_emlrt_marshallIn(SFc16_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c16_b_y, const char_T *c16_identifier,
  boolean_T c16_c_y[19200])
{
  emlrtMsgIdentifier c16_thisId;
  c16_thisId.fIdentifier = (const char *)c16_identifier;
  c16_thisId.fParent = NULL;
  c16_thisId.bParentIsCell = false;
  c16_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c16_b_y), &c16_thisId,
    c16_c_y);
  sf_mex_destroy(&c16_b_y);
}

static void c16_b_emlrt_marshallIn(SFc16_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c16_u, const emlrtMsgIdentifier *c16_parentId,
  boolean_T c16_b_y[19200])
{
  boolean_T c16_bv[19200];
  int32_T c16_i;
  (void)chartInstance;
  sf_mex_import(c16_parentId, sf_mex_dup(c16_u), c16_bv, 1, 11, 0U, 1, 0U, 2,
                120, 160);
  for (c16_i = 0; c16_i < 19200; c16_i++) {
    c16_b_y[c16_i] = c16_bv[c16_i];
  }

  sf_mex_destroy(&c16_u);
}

static uint8_T c16_c_emlrt_marshallIn(SFc16_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c16_b_is_active_c16_flightControlSystem, const
  char_T *c16_identifier)
{
  uint8_T c16_b_y;
  emlrtMsgIdentifier c16_thisId;
  c16_thisId.fIdentifier = (const char *)c16_identifier;
  c16_thisId.fParent = NULL;
  c16_thisId.bParentIsCell = false;
  c16_b_y = c16_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c16_b_is_active_c16_flightControlSystem), &c16_thisId);
  sf_mex_destroy(&c16_b_is_active_c16_flightControlSystem);
  return c16_b_y;
}

static uint8_T c16_d_emlrt_marshallIn(SFc16_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c16_u, const emlrtMsgIdentifier *c16_parentId)
{
  uint8_T c16_b_y;
  uint8_T c16_b_u;
  (void)chartInstance;
  sf_mex_import(c16_parentId, sf_mex_dup(c16_u), &c16_b_u, 1, 3, 0U, 0, 0U, 0);
  c16_b_y = c16_b_u;
  sf_mex_destroy(&c16_u);
  return c16_b_y;
}

static const mxArray *c16_chart_data_browse_helper
  (SFc16_flightControlSystemInstanceStruct *chartInstance, int32_T
   c16_ssIdNumber)
{
  const mxArray *c16_mxData = NULL;
  c16_mxData = NULL;
  switch (c16_ssIdNumber) {
   case 4U:
    sf_mex_assign(&c16_mxData, sf_mex_create("mxData",
      *chartInstance->c16_frame_info, 3, 0U, 1U, 0U, 3, 120, 160, 3), false);
    break;

   case 5U:
    sf_mex_assign(&c16_mxData, sf_mex_create("mxData", *chartInstance->c16_y, 11,
      0U, 1U, 0U, 2, 120, 160), false);
    break;
  }

  return c16_mxData;
}

static void init_dsm_address_info(SFc16_flightControlSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc16_flightControlSystemInstanceStruct
  *chartInstance)
{
  chartInstance->c16_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c16_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c16_frame_info = (uint8_T (*)[57600])
    ssGetInputPortSignal_wrapper(chartInstance->S, 0);
  chartInstance->c16_y = (boolean_T (*)[19200])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c16_flightControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2041434167U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3017673879U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(697197174U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2327866927U);
}

mxArray *sf_c16_flightControlSystem_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,1);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Rgb2hsvBuildable"));
  return(mxcell3p);
}

mxArray *sf_c16_flightControlSystem_jit_fallback_info(void)
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

mxArray *sf_c16_flightControlSystem_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c16_flightControlSystem(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPhDBxMDABqQ4IEwwYIXyGaFijHBxFri4AhCXVBakgsSLi5I9U4B0XmIumJ9YWuG"
    "Zl5YPNt+CAWE+GxbzGZHM54SKQ8AHe8r0iziA9Bsg6WchoF8AyKqEhQuUJt9+BQfK9EPsjyDgfk"
    "UU90P4mcXxicklmWWp8cmGZvFpOZnpGSXO+XklRfk5wZXFJam5SOaDAABcnhv+"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c16_flightControlSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "soIgahr8hgXkau4BSN7YJ7E";
}

static void sf_opaque_initialize_c16_flightControlSystem(void *chartInstanceVar)
{
  initialize_params_c16_flightControlSystem
    ((SFc16_flightControlSystemInstanceStruct*) chartInstanceVar);
  initialize_c16_flightControlSystem((SFc16_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c16_flightControlSystem(void *chartInstanceVar)
{
  enable_c16_flightControlSystem((SFc16_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c16_flightControlSystem(void *chartInstanceVar)
{
  disable_c16_flightControlSystem((SFc16_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c16_flightControlSystem(void *chartInstanceVar)
{
  sf_gateway_c16_flightControlSystem((SFc16_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c16_flightControlSystem(SimStruct*
  S)
{
  return get_sim_state_c16_flightControlSystem
    ((SFc16_flightControlSystemInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c16_flightControlSystem(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c16_flightControlSystem((SFc16_flightControlSystemInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c16_flightControlSystem(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc16_flightControlSystemInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_flightControlSystem_optimization_info();
    }

    mdl_cleanup_runtime_resources_c16_flightControlSystem
      ((SFc16_flightControlSystemInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c16_flightControlSystem(void *chartInstanceVar)
{
  mdl_start_c16_flightControlSystem((SFc16_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c16_flightControlSystem(void
  *chartInstanceVar)
{
  mdl_terminate_c16_flightControlSystem((SFc16_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc16_flightControlSystem((SFc16_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c16_flightControlSystem(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c16_flightControlSystem
      ((SFc16_flightControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
    initSimStructsc16_flightControlSystem
      ((SFc16_flightControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c16_flightControlSystem_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [17] = {
    "eNrtV8tu00AUdaKCQAIUJCQ2SNANdAkS4rGhJU4igpK2wuW1qqb2TTzKeMbMI20kFrDvAokf4XN",
    "Y8BF8AndsNw2O7RAiKpAYaWKPfe6Z+5p7HafW7Ts4ruD8dNVxzuP1As66k45z2bo2M9Pna86dbL",
    "2JQtxEu0SSSDmVg5MIXoASzGgqeJcPRCGM8gFI4D5iYyF1GZuikWGUjzqG+5ZPvQ6pH3qhMCxoo",
    "iwJdjibIFts9C7ytKgEX3cAAh1KYYZhh5HhVGOpD90Q/JEyUZUJCrRnYquW6humacygfQR+lytN",
    "UGN1qpuniQZXH5WaaS1V3glQRDGjhBdaGxLlQYwO1vAyDvB3x2g0Kg/zQyJ1E0IyBtWjo4RTcMh",
    "zUoUvDignWkhKWDtirhWc122XoT59EQCrcAjq1pRARrGgXJfH3+ugpW1ODhi04MAMy9k8eGds8F",
    "9ROARZ6reBK8YgyRB2eOmmiUPaR0m0plkyD9M0gldEPvUxfgqC0uzFzFEewTjBHkqUwSAxsqv2J",
    "B2je0vZTNS1mbnoyJgoDbZaBEvY2mOoisKUreNzlzCmSmF7Iu7BGFjC2iKaVMNS1mKcUjTYE+hg",
    "m97lp8FwioHPYK7gAS0M1zgHSOrONhaWn5G+UVpELiZvq9ebfz0P63INckB8KKoCklAF6LPEveV",
    "sAVU29ghErXSiXhE4zZBFKEcNDG8dCjlCn1QUkVMTbERLgZEaYizxJLxUeGiqYDaWi3A+8UMIbI",
    "GhDPp4bBBb4BNlS9tTPHdjqictUL6kcVFUbf+565z2n0u/0H9O5PLXjRmeWgGPM3PN73uxXr1vH",
    "e9qmdzWjNzl3D5rOTmLa+C8fnvz8fHo+N23jY/vPx99aK6y/5f6cv36Sra+cVIYp4k+nssvi302",
    "o9daAf/1Gf5GtlaiOyShfBQO34yIud/0th++ff6wncZngb71nL4nz2/ZCj2Jk3qrpN8Nsg8JuyY",
    "mba+W/9GMvucX+ONi9jwd3zdXk7+2lY/j2gL5Bt5Ncnn7+/vf2lpNPt3/zQL913PxXk/68D6xpx",
    "v2/XsP9geMDkNbmbUUzJsoDVHB+fzdfF9WzjljuX9Fz/9++fP2/Ur/Oms554zlVrVv2T7+t+Gr+",
    "oGTwzf+YjtW/b760/ivznLfQTez9ZPpXxM3pCwo+ErNXveADIrenoF9PwAVR5nB",
    ""
  };

  static char newstr [1189] = "";
  newstr[0] = '\0';
  for (i = 0; i < 17; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c16_flightControlSystem(SimStruct *S)
{
  const char* newstr = sf_c16_flightControlSystem_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(960439831U));
  ssSetChecksum1(S,(1905027980U));
  ssSetChecksum2(S,(2088839388U));
  ssSetChecksum3(S,(1115715731U));
}

static void mdlRTW_c16_flightControlSystem(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c16_flightControlSystem(SimStruct *S)
{
  SFc16_flightControlSystemInstanceStruct *chartInstance;
  chartInstance = (SFc16_flightControlSystemInstanceStruct *)utMalloc(sizeof
    (SFc16_flightControlSystemInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc16_flightControlSystemInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c16_flightControlSystem;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c16_flightControlSystem;
  chartInstance->chartInfo.mdlStart =
    sf_opaque_mdl_start_c16_flightControlSystem;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c16_flightControlSystem;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c16_flightControlSystem;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c16_flightControlSystem;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c16_flightControlSystem;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c16_flightControlSystem;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c16_flightControlSystem;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c16_flightControlSystem;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c16_flightControlSystem;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c16_flightControlSystem;
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
    chartInstance->c16_JITStateAnimation,
    chartInstance->c16_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c16_flightControlSystem(chartInstance);
}

void c16_flightControlSystem_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c16_flightControlSystem(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c16_flightControlSystem(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c16_flightControlSystem(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c16_flightControlSystem_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
