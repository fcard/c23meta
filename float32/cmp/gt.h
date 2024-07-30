#ifndef C23META_FP32_GT
#define C23META_FP32_GT
#include "../../util.h"
#include "../bits/sign.h"
#include "../../uint32/cmp/gt.h"

#define FP32_GT(X,Y) FP32_GT_EVAL(_FP32_GT(FP32_CMP_SIGN(X,Y),X,Y))
#define FP32_GT_EVAL(X) FP32_GT_EVAL1(FP32_GT_EVAL1(X))
#define FP32_GT_EVAL1(X) X

#define _FP32_GT(S,X,Y) DEFER(CAT(_FP32_GT_X_,S))(X,Y)
#define _FP32_GT_X_POS_POS(X,Y) _FP32_GT_X(FP32_EXPONENT(X), FP32_EXPONENT(Y), X, Y)
#define _FP32_GT_X_NEG_NEG(X,Y) _FP32_GT_X(FP32_EXPONENT(Y), FP32_EXPONENT(X), X, Y)
#define _FP32_GT_X_POS_NEG(X,Y) 1
#define _FP32_GT_X_NEG_POS(X,Y) 0

#define _FP32_GT_X(EX,EY,X,Y) DEFER(CAT(CAT(_FP32_GT_Y,U32_GT(EX,EY)),U32_GT(EY,EX)))(X,Y)
#define _FP32_GT_Y00(X,Y) U32_GT(FP32_MANTISSA(X), FP32_MANTISSA(Y))
#define _FP32_GT_Y10(X,Y) 1
#define _FP32_GT_Y01(X,Y) 0

#endif