#ifndef C23META_FP32_CMP
#define C23META_FP32_CMP

#include "eq.h"
#include "neq.h"
#include "geq.h"
#include "gt.h"
#include "leq.h"
#include "lt.h"

#define FP32_CMP(X,Y) _FP32_CMP(FP32_LT(X,Y), FP32_LT(Y,X))
#define _FP32_CMP(LXY,LYX) _FP32_CMP_X(LXY,LYX)
#define _FP32_CMP_X(LXY,LYX) _FP32_CMP_Y ## LXY ## LYX
#define _FP32_CMP_Y00 EQUAL
#define _FP32_CMP_Y10 LESS
#define _FP32_CMP_Y01 GREATER

#endif