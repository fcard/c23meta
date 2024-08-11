#ifndef C23META_FP32_LT
#define C23META_FP32_LT

#define FP32_LT(X,Y) _FP32_LT_C(X,Y)
#define _FP32_LT_C(X,Y) CAT_ALL(_FP32_LT_CHECK_, FP32_CLASSIFY(X), _, FP32_CLASSIFY(Y))(X,Y)

#define _FP32_LT_CHECK_nan_nan(X,Y) 0
#define _FP32_LT_CHECK_other_nan(X,Y) 0
#define _FP32_LT_CHECK_zero_nan(X,Y) 0
#define _FP32_LT_CHECK_infinity_nan(X,Y) 0
#define _FP32_LT_CHECK_nan_other(X,Y) 0
#define _FP32_LT_CHECK_nan_zero(X,Y) 0
#define _FP32_LT_CHECK_nan_infinity(X,Y) 0

#define _FP32_LT_CHECK_infinity_infinity(X,Y) 0
#define _FP32_LT_CHECK_infinity_other(X,Y) 0
#define _FP32_LT_CHECK_infinity_zero(X,Y) 0
#define _FP32_LT_CHECK_other_infinity(X,Y) 1
#define _FP32_LT_CHECK_zero_infinity(X,Y) 1

#define _FP32_LT_CHECK_other_other(X,Y) FP32_LT_UNCHECKED(X,Y)
#define _FP32_LT_CHECK_other_zero(X,Y) FP32_LT_UNCHECKED(X,Y)
#define _FP32_LT_CHECK_zero_other(X,Y) FP32_LT_UNCHECKED(X,Y)

#define _FP32_LT_CHECK_zero_zero(X,Y) 0

#define FP32_LT_UNCHECKED(X,Y) FP32_LT_EVAL(_FP32_LT(FP32_CMP_SIGN(X,Y),X,Y))
#define FP32_LT_EVAL(X) FP32_LT_EVAL1(FP32_LT_EVAL1(X))
#define FP32_LT_EVAL1(X) X

#define _FP32_LT(S,X,Y) CAT(_FP32_LT_X_,S)(X,Y)
#define _FP32_LT_X_POS_POS(X,Y) _FP32_LT_X(FP32_EXPONENT(X), FP32_EXPONENT(Y), X, Y)
#define _FP32_LT_X_NEG_NEG(X,Y) _FP32_LT_X(FP32_EXPONENT(Y), FP32_EXPONENT(X), X, Y)
#define _FP32_LT_X_POS_NEG(X,Y) 1
#define _FP32_LT_X_NEG_POS(X,Y) 0

#define _FP32_LT_X(EX,EY,X,Y) CAT(CAT(_FP32_LT_Y,U32_LT(EX,EY)),U32_LT(EY,EX))(X,Y)
#define _FP32_LT_Y00(X,Y) U32_LT(FP32_MANTISSA(X), FP32_MANTISSA(Y))
#define _FP32_LT_Y10(X,Y) 1
#define _FP32_LT_Y01(X,Y) 0

#endif