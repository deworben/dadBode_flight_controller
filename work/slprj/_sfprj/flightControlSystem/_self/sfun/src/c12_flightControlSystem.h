#ifndef __c12_flightControlSystem_h__
#define __c12_flightControlSystem_h__

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

#ifndef typedef_c12_cell_0
#define typedef_c12_cell_0

typedef struct tag_1cLa9LcSjPFVyTnqRkh4VB c12_cell_0;

#endif                                 /*typedef_c12_cell_0*/

#ifndef struct_tag_xzcDJVCDY5ygSyoXSlHfkH
#define struct_tag_xzcDJVCDY5ygSyoXSlHfkH

struct tag_xzcDJVCDY5ygSyoXSlHfkH
{
  char_T f1[4];
};

#endif                                 /*struct_tag_xzcDJVCDY5ygSyoXSlHfkH*/

#ifndef typedef_c12_cell_wrap_1
#define typedef_c12_cell_wrap_1

typedef struct tag_xzcDJVCDY5ygSyoXSlHfkH c12_cell_wrap_1;

#endif                                 /*typedef_c12_cell_wrap_1*/

#ifndef struct_tag_DSOsCbkMJXmOomV3xOVirB
#define struct_tag_DSOsCbkMJXmOomV3xOVirB

struct tag_DSOsCbkMJXmOomV3xOVirB
{
  c12_cell_0 _data;
};

#endif                                 /*struct_tag_DSOsCbkMJXmOomV3xOVirB*/

#ifndef typedef_c12_s_DSOsCbkMJXmOomV3xOVirB
#define typedef_c12_s_DSOsCbkMJXmOomV3xOVirB

typedef struct tag_DSOsCbkMJXmOomV3xOVirB c12_s_DSOsCbkMJXmOomV3xOVirB;

#endif                                 /*typedef_c12_s_DSOsCbkMJXmOomV3xOVirB*/

#ifndef struct_tag_e7jvQoFbvOwJ3sc92LdjpG
#define struct_tag_e7jvQoFbvOwJ3sc92LdjpG

struct tag_e7jvQoFbvOwJ3sc92LdjpG
{
  c12_cell_wrap_1 _data;
};

#endif                                 /*struct_tag_e7jvQoFbvOwJ3sc92LdjpG*/

#ifndef typedef_c12_s_e7jvQoFbvOwJ3sc92LdjpG
#define typedef_c12_s_e7jvQoFbvOwJ3sc92LdjpG

typedef struct tag_e7jvQoFbvOwJ3sc92LdjpG c12_s_e7jvQoFbvOwJ3sc92LdjpG;

#endif                                 /*typedef_c12_s_e7jvQoFbvOwJ3sc92LdjpG*/

#ifndef typedef_SFc12_flightControlSystemInstanceStruct
#define typedef_SFc12_flightControlSystemInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c12_sfEvent;
  boolean_T c12_doneDoubleBufferReInit;
  uint8_T c12_is_active_c12_flightControlSystem;
  uint8_T c12_JITStateAnimation[1];
  uint8_T c12_JITTransitionAnimation[1];
  int32_T c12_IsDebuggerActive;
  int32_T c12_IsSequenceViewerPresent;
  int32_T c12_SequenceViewerOptimization;
  void *c12_RuntimeVar;
  uint32_T c12_mlFcnLineNumber;
  void *c12_fcnDataPtrs[11];
  char_T *c12_dataNames[11];
  uint32_T c12_numFcnVars;
  uint32_T c12_ssIds[11];
  uint32_T c12_statuses[11];
  void *c12_outMexFcns[11];
  void *c12_inMexFcns[11];
  real_T c12_I[57600];
  CovrtStateflowInstance *c12_covrtInstance;
  void *c12_fEmlrtCtx;
  uint8_T (*c12_frame_info)[57600];
  boolean_T (*c12_y)[19200];
} SFc12_flightControlSystemInstanceStruct;

#endif                                 /*typedef_SFc12_flightControlSystemInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c12_flightControlSystem_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c12_flightControlSystem_get_check_sum(mxArray *plhs[]);
extern void c12_flightControlSystem_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
