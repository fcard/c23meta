#ifndef C23META_FP32_MIN
#define C23META_FP32_MIN

#define FP32_MIN(X,Y) _FP32_MIN_C(X,Y)
#define _FP32_MIN_C(X,Y) CAT_ALL(_FP32_MIN_CHECK_, FP32_CLASSIFY(X), _, FP32_CLASSIFY(Y))(X,Y)

#define _FP32_MIN_CHECK_nan_nan(X,Y) FP32_NAN
#define _FP32_MIN_CHECK_other_nan(X,Y) FP32_NAN
#define _FP32_MIN_CHECK_zero_nan(X,Y) FP32_NAN
#define _FP32_MIN_CHECK_infinity_nan(X,Y) FP32_NAN
#define _FP32_MIN_CHECK_nan_other(X,Y) FP32_NAN
#define _FP32_MIN_CHECK_nan_zero(X,Y) FP32_NAN
#define _FP32_MIN_CHECK_nan_infinity(X,Y) FP32_NAN

#define _FP32_MIN_CHECK_infinity_infinity(X,Y) FP32_MIN_UNCHECKED(X,Y)
#define _FP32_MIN_CHECK_infinity_other(X,Y) FP32_MIN_UNCHECKED(X,Y)
#define _FP32_MIN_CHECK_infinity_zero(X,Y) FP32_MIN_UNCHECKED(X,Y)
#define _FP32_MIN_CHECK_other_infinity(X,Y) FP32_MIN_UNCHECKED(X,Y)
#define _FP32_MIN_CHECK_zero_infinity(X,Y) FP32_MIN_UNCHECKED(X,Y)

#define _FP32_MIN_CHECK_other_other(X,Y) FP32_MIN_UNCHECKED(X,Y)
#define _FP32_MIN_CHECK_other_zero(X,Y) FP32_MIN_UNCHECKED(X,Y)
#define _FP32_MIN_CHECK_zero_other(X,Y) FP32_MIN_UNCHECKED(X,Y)

#define _FP32_MIN_CHECK_zero_zero(X,Y) FP32_0

#define FP32_MIN_UNCHECKED(X,Y) _FP32_MIN(FP32_LT(X,Y),X,Y)
#define _FP32_MIN(G,X,Y) _FP32_MIN_X(G,X,Y)
#define _FP32_MIN_X(G,X,Y) _FP32_MIN_EVAL(DEFER(_FP32_MIN_Y ## G)(X,Y))
#define _FP32_MIN_Y0(X,Y) Y
#define _FP32_MIN_Y1(X,Y) X
#define _FP32_MIN_EVAL(X) X

#endif