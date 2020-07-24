#ifndef __c16_flightControlSystem_h__
#define __c16_flightControlSystem_h__

/* Type Definitions */
#ifndef struct_tag_1cLa9LcSjPFVyTnqRkh4VB
#define struct_tag_1cLa9LcSjPFVyTnqRkh4VB

struct tag_1cLa9LcSjPFVyTnqRkh4VB
{
  char_T f1[5];
  char_T f2[6];
  char_T f3[6];
  char_T f4[6];
};

#endif                                 /*struct_tag_1cLa9LcSjPFVyTnqRkh4VB*/

#ifndef typedef_c16_cell_0
#define typedef_c16_cell_0

typedef struct tag_1cLa9LcSjPFVyTnqRkh4VB c16_cell_0;

#endif                                 /*typedef_c16_cell_0*/

#ifndef struct_tag_xzcDJVCDY5ygSyoXSlHfkH
#define struct_tag_xzcDJVCDY5ygSyoXSlHfkH

struct tag_xzcDJVCDY5ygSyoXSlHfkH
{
  char_T f1[4];
};

#endif                                 /*struct_tag_xzcDJVCDY5ygSyoXSlHfkH*/

#ifndef typedef_c16_cell_wrap_1
#define typedef_c16_cell_wrap_1

typedef struct tag_xzcDJVCDY5ygSyoXSlHfkH c16_cell_wrap_1;

#endif                                 /*typedef_c16_cell_wrap_1*/

#ifndef struct_tag_DSOsCbkMJXmOomV3xOVirB
#define struct_tag_DSOsCbkMJXmOomV3xOVirB

struct tag_DSOsCbkMJXmOomV3xOVirB
{
  c16_cell_0 _data;
};

#endif                                 /*struct_tag_DSOsCbkMJXmOomV3xOVirB*/

#ifndef typedef_c16_s_DSOsCbkMJXmOomV3xOVirB
#define typedef_c16_s_DSOsCbkMJXmOomV3xOVirB

typedef struct tag_DSOsCbkMJXmOomV3xOVirB c16_s_DSOsCbkMJXmOomV3xOVirB;

#endif                                 /*typedef_c16_s_DSOsCbkMJXmOomV3xOVirB*/

#ifndef struct_tag_e7jvQoFbvOwJ3sc92LdjpG
#define struct_tag_e7jvQoFbvOwJ3sc92LdjpG

struct tag_e7jvQoFbvOwJ3sc92LdjpG
{
  c16_cell_wrap_1 _data;
};

#endif                                 /*struct_tag_e7jvQoFbvOwJ3sc92LdjpG*/

#ifndef typedef_c16_s_e7jvQoFbvOwJ3sc92LdjpG
#define typedef_c16_s_e7jvQoFbvOwJ3sc92LdjpG

typedef struct tag_e7jvQoFbvOwJ3sc92LdjpG c16_s_e7jvQoFbvOwJ3sc92LdjpG;

#endif                                 /*typedef_c16_s_e7jvQoFbvOwJ3sc92LdjpG*/

#ifndef typedef_SFc16_flightControlSystemInstanceStruct
#define typedef_SFc16_flightControlSystemInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c16_sfEvent;
  boolean_T c16_doneDoubleBufferReInit;
  uint8_T c16_is_active_c16_flightControlSystem;
  uint8_T c16_JITStateAnimation[1];
  uint8_T c16_JITTransitionAnimation[1];
  int32_T c16_IsDebuggerActive;
  int32_T c16_IsSequenceViewerPresent;
  int32_T c16_SequenceViewerOptimization;
  void *c16_RuntimeVar;
  uint32_T c16_mlFcnLineNumber;
  void *c16_fcnDataPtrs[11];
  char_T *c16_dataNames[11];
  uint32_T c16_numFcnVars;
  uint32_T c16_ssIds[11];
  uint32_T c16_statuses[11];
  void *c16_outMexFcns[11];
  void *c16_inMexFcns[11];
  real_T c16_I[57600];
  CovrtStateflowInstance *c16_covrtInstance;
  void *c16_fEmlrtCtx;
  uint8_T (*c16_frame_info)[57600];
  boolean_T (*c16_y)[19200];
} SFc16_flightControlSystemInstanceStruct;

#endif                                 /*typedef_SFc16_flightControlSystemInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c16_flightControlSystem_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c16_flightControlSystem_get_check_sum(mxArray *plhs[]);
extern void c16_flightControlSystem_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
