#ifndef C23META_FP32_GT
#define C23META_FP32_GT

#define FP32_GT(X,Y) _FP32_GT_C(X,Y)
#define _FP32_GT_C(X,Y) CAT_ALL(_FP32_GT_CHECK_, FP32_CLASSIFY(X), _, FP32_CLASSIFY(Y))(X,Y)

#define _FP32_GT_CHECK_NAN_NAN(X,Y) 0
#define _FP32_GT_CHECK_OTHER_NAN(X,Y) 0
#define _FP32_GT_CHECK_ZERO_NAN(X,Y) 0
#define _FP32_GT_CHECK_INFINITY_NAN(X,Y) 0
#define _FP32_GT_CHECK_NAN_OTHER(X,Y) 0
#define _FP32_GT_CHECK_NAN_ZERO(X,Y) 0
#define _FP32_GT_CHECK_NAN_INFINITY(X,Y) 0

#define _FP32_GT_CHECK_INFINITY_INFINITY(X,Y) 0
#define _FP32_GT_CHECK_INFINITY_OTHER(X,Y) 1
#define _FP32_GT_CHECK_INFINITY_ZERO(X,Y) 1
#define _FP32_GT_CHECK_OTHER_INFINITY(X,Y) 0
#define _FP32_GT_CHECK_ZERO_INFINITY(X,Y) 0

#define _FP32_GT_CHECK_OTHER_OTHER(X,Y) FP32_GT_UNCHECKED(X,Y)
#define _FP32_GT_CHECK_OTHER_ZERO(X,Y) FP32_GT_UNCHECKED(X,Y)
#define _FP32_GT_CHECK_ZERO_OTHER(X,Y) FP32_GT_UNCHECKED(X,Y)

#define _FP32_GT_CHECK_ZERO_ZERO(X,Y) 0

#define FP32_GT_UNCHECKED(X,Y) FP32_GT_EVAL(_FP32_GT(FP32_CMP_SIGN(X,Y),X,Y))
#define FP32_GT_EVAL(X) FP32_GT_EVAL1(FP32_GT_EVAL1(X))
#define FP32_GT_EVAL1(X) X

#define _FP32_GT(S,X,Y) CAT(_FP32_GT_X_,S)(X,Y)
#define _FP32_GT_X_POS_POS(X,Y) _FP32_GT_X(FP32_EXPONENT(X), FP32_EXPONENT(Y), X, Y)
#define _FP32_GT_X_NEG_NEG(X,Y) _FP32_GT_X(FP32_EXPONENT(Y), FP32_EXPONENT(X), X, Y)
#define _FP32_GT_X_POS_NEG(X,Y) 1
#define _FP32_GT_X_NEG_POS(X,Y) 0

#define _FP32_GT_X(EX,EY,X,Y) CAT(CAT(_FP32_GT_Y,U32_GT(EX,EY)),U32_GT(EY,EX))(X,Y)
#define _FP32_GT_Y00(X,Y) U32_GT(FP32_MANTISSA(X), FP32_MANTISSA(Y))
#define _FP32_GT_Y10(X,Y) 1
#define _FP32_GT_Y01(X,Y) 0

#endif