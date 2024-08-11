#ifndef C23META_FP32H_LEQ
#define C23META_FP32H_LEQ

#define FP32H_LEQ(X,Y) _FP32H_LEQ_C(X,Y)
#define _FP32H_LEQ_C(X,Y) CAT_ALL(_FP32H_LEQ_CHECK_, FP32H_CLASSIFY(X), _, FP32H_CLASSIFY(Y))(X,Y)

#define _FP32H_LEQ_CHECK_nan_nan(X,Y) 0
#define _FP32H_LEQ_CHECK_other_nan(X,Y) 0
#define _FP32H_LEQ_CHECK_zero_nan(X,Y) 0
#define _FP32H_LEQ_CHECK_infinity_nan(X,Y) 0
#define _FP32H_LEQ_CHECK_nan_other(X,Y) 0
#define _FP32H_LEQ_CHECK_nan_zero(X,Y) 0
#define _FP32H_LEQ_CHECK_nan_infinity(X,Y) 0

#define _FP32H_LEQ_CHECK_infinity_infinity(X,Y) 1
#define _FP32H_LEQ_CHECK_infinity_other(X,Y) 0
#define _FP32H_LEQ_CHECK_infinity_zero(X,Y) 0
#define _FP32H_LEQ_CHECK_other_infinity(X,Y) 1
#define _FP32H_LEQ_CHECK_zero_infinity(X,Y) 1

#define _FP32H_LEQ_CHECK_other_other(X,Y) FP32H_LEQ_UNCHECKED(X,Y)
#define _FP32H_LEQ_CHECK_other_zero(X,Y) FP32H_LEQ_UNCHECKED(X,Y)
#define _FP32H_LEQ_CHECK_zero_other(X,Y) FP32H_LEQ_UNCHECKED(X,Y)

#define _FP32H_LEQ_CHECK_zero_zero(X,Y) 1

#define FP32H_LEQ_UNCHECKED(X,Y) FP32H_LEQ_EVAL(_FP32H_LEQ(FP32H_CMP_SIGN(X,Y),X,Y))
#define FP32H_LEQ_EVAL(X) FP32H_LEQ_EVAL1(FP32H_LEQ_EVAL1(X))
#define FP32H_LEQ_EVAL1(X) X

#define _FP32H_LEQ(S,X,Y) CAT(_FP32H_LEQ_X_,S)(X,Y)
#define _FP32H_LEQ_X_POS_POS(X,Y) _FP32H_LEQ_X(FP32H_EXPONENT(X), FP32H_EXPONENT(Y), X, Y)
#define _FP32H_LEQ_X_NEG_NEG(X,Y) _FP32H_LEQ_X(FP32H_EXPONENT(Y), FP32H_EXPONENT(X), X, Y)
#define _FP32H_LEQ_X_POS_NEG(X,Y) 1
#define _FP32H_LEQ_X_NEG_POS(X,Y) 0

#define _FP32H_LEQ_X(EX,EY,X,Y) CAT(CAT(_FP32H_LEQ_Y,U32H_LT(EX,EY)),U32H_LT(EY,EX))(X,Y)
#define _FP32H_LEQ_Y00(X,Y) U32H_LEQ(FP32H_MANTISSA(X), FP32H_MANTISSA(Y))
#define _FP32H_LEQ_Y10(X,Y) 1
#define _FP32H_LEQ_Y01(X,Y) 0

#endif