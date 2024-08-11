#ifndef C23META_FP32H_LOG
#define C23META_FP32H_LOG

#define FP32H_LOG(X,Y) _FP32H_LOG_C(X,Y)
#define _FP32H_LOG_C(X,Y) CAT(_FP32H_LOG_CHECK_, FP32H_CMP_SIGN(X,Y))(X,Y)

#define _FP32H_LOG_CHECK_nan_nan(X,Y) FP32H_NAN
#define _FP32H_LOG_CHECK_other_nan(X,Y) FP32H_NAN
#define _FP32H_LOG_CHECK_zero_nan(X,Y) FP32H_NAN
#define _FP32H_LOG_CHECK_infinity_nan(X,Y) FP32H_NAN
#define _FP32H_LOG_CHECK_nan_other(X,Y) FP32H_NAN
#define _FP32H_LOG_CHECK_nan_zero(X,Y) FP32H_NAN
#define _FP32H_LOG_CHECK_nan_infinity(X,Y) FP32H_NAN

#define _FP32H_LOG_CHECK_infinity_infinity(X,Y) FP32H_NAN
#define _FP32H_LOG_CHECK_infinity_other(X,Y) FP32H_0
#define _FP32H_LOG_CHECK_infinity_zero(X,Y) FP32H_NAN
#define _FP32H_LOG_CHECK_other_infinity(X,Y) FP32H_INF
#define _FP32H_LOG_CHECK_zero_infinity(X,Y) FP32H_NAN

#define _FP32H_LOG_CHECK_other_other(X,Y) FP32H_LOG_UNCHECKED(X,Y)
#define _FP32H_LOG_CHECK_other_zero(X,Y) FP32H_NINF
#define _FP32H_LOG_CHECK_zero_other(X,Y) FP32H_N0

#define _FP32H_LOG_CHECK_zero_zero(X,Y) FP32H_NAN

#define _FP32H_LOG_CHECK_POS_POS(X,Y) CAT_ALL(_FP32H_LOG_CHECK_, FP32H_CLASSIFY(X), _, FP32H_CLASSIFY(Y))(X,Y)
#define _FP32H_LOG_CHECK_POS_NEG(X) FP32H_NAN
#define _FP32H_LOG_CHECK_NEG_POS(X) FP32H_NAN
#define _FP32H_LOG_CHECK_NEG_NEG(X) FP32H_NAN

#define FP32H_LOG_UNCHECKED(X,B) FP32H_DIV_UNCHECKED(FP32H_LOG2_UNCHECKED(X), FP32H_LOG2_UNCHECKED(B))

#endif