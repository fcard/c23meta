#ifndef C23META_FP32H_GT
#define C23META_FP32H_GT

#define FP32H_GT(X,Y) _FP32H_GT_C(X,Y)
#define _FP32H_GT_C(X,Y) CAT_ALL(_FP32H_GT_CHECK_, FP32H_CLASSIFY(X), _, FP32H_CLASSIFY(Y))(X,Y)

#define _FP32H_GT_CHECK_NAN_NAN(X,Y) 0
#define _FP32H_GT_CHECK_OTHER_NAN(X,Y) 0
#define _FP32H_GT_CHECK_ZERO_NAN(X,Y) 0
#define _FP32H_GT_CHECK_INFINITY_NAN(X,Y) 0
#define _FP32H_GT_CHECK_NAN_OTHER(X,Y) 0
#define _FP32H_GT_CHECK_NAN_ZERO(X,Y) 0
#define _FP32H_GT_CHECK_NAN_INFINITY(X,Y) 0

#define _FP32H_GT_CHECK_INFINITY_INFINITY(X,Y) 0
#define _FP32H_GT_CHECK_INFINITY_OTHER(X,Y) 1
#define _FP32H_GT_CHECK_INFINITY_ZERO(X,Y) 1
#define _FP32H_GT_CHECK_OTHER_INFINITY(X,Y) 0
#define _FP32H_GT_CHECK_ZERO_INFINITY(X,Y) 0

#define _FP32H_GT_CHECK_OTHER_OTHER(X,Y) FP32H_GT_UNCHECKED(X,Y)
#define _FP32H_GT_CHECK_OTHER_ZERO(X,Y) FP32H_GT_UNCHECKED(X,Y)
#define _FP32H_GT_CHECK_ZERO_OTHER(X,Y) FP32H_GT_UNCHECKED(X,Y)

#define _FP32H_GT_CHECK_ZERO_ZERO(X,Y) 0

#define FP32H_GT_UNCHECKED(X,Y) FP32H_GT_EVAL(_FP32H_GT(FP32H_CMP_SIGN(X,Y),X,Y))
#define FP32H_GT_EVAL(X) FP32H_GT_EVAL1(FP32H_GT_EVAL1(X))
#define FP32H_GT_EVAL1(X) X

#define _FP32H_GT(S,X,Y) CAT(_FP32H_GT_X_,S)(X,Y)
#define _FP32H_GT_X_POS_POS(X,Y) _FP32H_GT_X(FP32H_EXPONENT(X), FP32H_EXPONENT(Y), X, Y)
#define _FP32H_GT_X_NEG_NEG(X,Y) _FP32H_GT_X(FP32H_EXPONENT(Y), FP32H_EXPONENT(X), X, Y)
#define _FP32H_GT_X_POS_NEG(X,Y) 1
#define _FP32H_GT_X_NEG_POS(X,Y) 0

#define _FP32H_GT_X(EX,EY,X,Y) CAT(CAT(_FP32H_GT_Y,U32H_GT(EX,EY)),U32H_GT(EY,EX))(X,Y)
#define _FP32H_GT_Y00(X,Y) U32H_GT(FP32H_MANTISSA(X), FP32H_MANTISSA(Y))
#define _FP32H_GT_Y10(X,Y) 1
#define _FP32H_GT_Y01(X,Y) 0

#endif