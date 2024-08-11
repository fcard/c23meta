#ifndef C23META_FP32H_MAX
#define C23META_FP32H_MAX

#define FP32H_MAX(X,Y) _FP32H_MAX_C(X,Y)
#define _FP32H_MAX_C(X,Y) CAT_ALL(_FP32H_MAX_CHECK_, FP32H_CLASSIFY(X), _, FP32H_CLASSIFY(Y))(X,Y)

#define _FP32H_MAX_CHECK_nan_nan(X,Y) FP32H_NAN
#define _FP32H_MAX_CHECK_other_nan(X,Y) FP32H_NAN
#define _FP32H_MAX_CHECK_zero_nan(X,Y) FP32H_NAN
#define _FP32H_MAX_CHECK_infinity_nan(X,Y) FP32H_NAN
#define _FP32H_MAX_CHECK_nan_other(X,Y) FP32H_NAN
#define _FP32H_MAX_CHECK_nan_zero(X,Y) FP32H_NAN
#define _FP32H_MAX_CHECK_nan_infinity(X,Y) FP32H_NAN

#define _FP32H_MAX_CHECK_infinity_infinity(X,Y) FP32H_MAX_UNCHECKED(X,Y)
#define _FP32H_MAX_CHECK_infinity_other(X,Y) FP32H_MAX_UNCHECKED(X,Y)
#define _FP32H_MAX_CHECK_infinity_zero(X,Y) FP32H_MAX_UNCHECKED(X,Y)
#define _FP32H_MAX_CHECK_other_infinity(X,Y) FP32H_MAX_UNCHECKED(X,Y)
#define _FP32H_MAX_CHECK_zero_infinity(X,Y) FP32H_MAX_UNCHECKED(X,Y)

#define _FP32H_MAX_CHECK_other_other(X,Y) FP32H_MAX_UNCHECKED(X,Y)
#define _FP32H_MAX_CHECK_other_zero(X,Y) FP32H_MAX_UNCHECKED(X,Y)
#define _FP32H_MAX_CHECK_zero_other(X,Y) FP32H_MAX_UNCHECKED(X,Y)

#define _FP32H_MAX_CHECK_zero_zero(X,Y) FP32H_0

#define FP32H_MAX_UNCHECKED(X,Y) _FP32H_MAX(FP32H_LT_UNCHECKED(X,Y),X,Y)
#define _FP32H_MAX(G,X,Y) _FP32H_MAX_X(G,X,Y)
#define _FP32H_MAX_X(G,X,Y) _FP32H_MAX_EVAL(DEFER(_FP32H_MAX_Y ## G)(X,Y))
#define _FP32H_MAX_Y0(X,Y) X
#define _FP32H_MAX_Y1(X,Y) Y
#define _FP32H_MAX_EVAL(X) X

#endif