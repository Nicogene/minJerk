//
// File: Controller_types.h
//
// Code generated for Simulink model 'Controller'.
//
// Model version                  : 1.237
// Simulink Coder version         : 8.7 (R2014b) 08-Sep-2014
// C/C++ source code generated on : Tue Dec 09 10:37:33 2014
//
// Target selection: ert.tlc
// Embedded hardware selection: 32-bit Generic
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_Controller_types_h_
#define RTW_HEADER_Controller_types_h_
#include "rtwtypes.h"
#ifndef _DEFINED_TYPEDEF_FOR_CompensatorState_
#define _DEFINED_TYPEDEF_FOR_CompensatorState_

typedef enum {
  Off = 0,                             // Default value
  On,
  Auto
} CompensatorState;

#endif

// Parameters for system: '<S1>/Compensator'
typedef struct P_Compensator_T_ P_Compensator_T;

// Parameters for system: '<S1>/Filter'
typedef struct P_Filter_T_ P_Filter_T;

// Parameters for system: '<S1>/Reference Plant'
typedef struct P_ReferencePlant_T_ P_ReferencePlant_T;

// Parameters (auto storage)
typedef struct P_Controller_T_ P_Controller_T;

// Forward declaration for rtModel
typedef struct tag_RTM_Controller_T RT_MODEL_Controller_T;

#endif                                 // RTW_HEADER_Controller_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
