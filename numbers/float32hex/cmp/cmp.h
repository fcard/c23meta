#ifndef C23META_FP32H_CMP
#define C23META_FP32H_CMP

#include "eq.h"
#include "neq.h"
#include "geq.h"
#include "gt.h"
#include "leq.h"
#include "lt.h"

#include "classify.h"
#include "is_nan.h"
#include "is_inf.h"
#include "is_zero.h"

#define FP32H_CMP(X,Y) _FP32H_CMP(FP32H_LT(X,Y), FP32H_LT(Y,X))
#define _FP32H_CMP(LXY,LYX) _FP32H_CMP_X(LXY,LYX)
#define _FP32H_CMP_X(LXY,LYX) _FP32H_CMP_Y ## LXY ## LYX
#define _FP32H_CMP_Y00 EQUAL
#define _FP32H_CMP_Y10 LESS
#define _FP32H_CMP_Y01 GREATER

#endif