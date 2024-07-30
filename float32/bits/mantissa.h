#ifndef C23META_FP32_MANTISSA
#define C23META_FP32_MANTISSA
#include "../../util.h"

#define FP32_MANTISSA(X) _FP32_MANTISSA_EVAL(_FP32_MANTISSA X)
#define _FP32_MANTISSA_EVAL(X) X
#define _FP32_MANTISSA(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,\
                       A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,\
                       A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (A0,A1,A2,A3,A4,A5,A6,A7 ,A8,A9,A10,A11,A12,A13,A14,A15 ,A16,A17,A18,A19,A20,A21,A22,1 ,0,0,0,0,0,0,0,0)

#endif