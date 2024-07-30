#ifndef C23META_FP32_LEQ
#define C23META_FP32_LEQ
#include "../../util.h"
#include "../bits/sign.h"
#include "../../uint32/cmp/lt.h"
#include "../../uint32/cmp/leq.h"

#define FP32_LEQ(X,Y) FP32_LEQ_EVAL(_FP32_LEQ(FP32_CMP_SIGN(X,Y),X,Y))
#define FP32_LEQ_EVAL(X) FP32_LEQ_EVAL1(FP32_LEQ_EVAL1(X))
#define FP32_LEQ_EVAL1(X) X

#define _FP32_LEQ(S,X,Y) DEFER(CAT(_FP32_LEQ_X_,S))(X,Y)
#define _FP32_LEQ_X_POS_POS(X,Y) _FP32_LEQ_X(FP32_EXPONENT(X), FP32_EXPONENT(Y), X, Y)
#define _FP32_LEQ_X_NEG_NEG(X,Y) _FP32_LEQ_X(FP32_EXPONENT(Y), FP32_EXPONENT(X), X, Y)
#define _FP32_LEQ_X_POS_NEG(X,Y) 1
#define _FP32_LEQ_X_NEG_POS(X,Y) 0

#define _FP32_LEQ_X(EX,EY,X,Y) DEFER(CAT(CAT(_FP32_LEQ_Y,U32_LT(EX,EY)),U32_LT(EY,EX)))(X,Y)
#define _FP32_LEQ_Y00(X,Y) U32_LEQ(FP32_MANTISSA(X), FP32_MANTISSA(Y))
#define _FP32_LEQ_Y10(X,Y) 1
#define _FP32_LEQ_Y01(X,Y) 0

#endif