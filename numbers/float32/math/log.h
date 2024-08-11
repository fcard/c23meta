#ifndef C23META_FP32_LOG
#define C23META_FP32_LOG

#define FP32_LOG(X,Y) _FP32_LOG_C(X,Y)
#define _FP32_LOG_C(X,Y) CAT(_FP32_LOG_CHECK_, FP32_CMP_SIGN(X,Y))(X,Y)

#define _FP32_LOG_CHECK_nan_nan(X,Y) FP32_NAN
#define _FP32_LOG_CHECK_other_nan(X,Y) FP32_NAN
#define _FP32_LOG_CHECK_zero_nan(X,Y) FP32_NAN
#define _FP32_LOG_CHECK_infinity_nan(X,Y) FP32_NAN
#define _FP32_LOG_CHECK_nan_other(X,Y) FP32_NAN
#define _FP32_LOG_CHECK_nan_zero(X,Y) FP32_NAN
#define _FP32_LOG_CHECK_nan_infinity(X,Y) FP32_NAN

#define _FP32_LOG_CHECK_infinity_infinity(X,Y) FP32_NAN
#define _FP32_LOG_CHECK_infinity_other(X,Y) FP32_0
#define _FP32_LOG_CHECK_infinity_zero(X,Y) FP32_NAN
#define _FP32_LOG_CHECK_other_infinity(X,Y) FP32_INF
#define _FP32_LOG_CHECK_zero_infinity(X,Y) FP32_NAN

#define _FP32_LOG_CHECK_other_other(X,Y) FP32_LOG_UNCHECKED(X,Y)
#define _FP32_LOG_CHECK_other_zero(X,Y) FP32_NINF
#define _FP32_LOG_CHECK_zero_other(X,Y) FP32_N0

#define _FP32_LOG_CHECK_zero_zero(X,Y) FP32_NAN

#define _FP32_LOG_CHECK_POS_POS(X,Y) CAT_ALL(_FP32_LOG_CHECK_, FP32_CLASSIFY(X), _, FP32_CLASSIFY(Y))(X,Y)
#define _FP32_LOG_CHECK_POS_NEG(X) FP32_NAN
#define _FP32_LOG_CHECK_NEG_POS(X) FP32_NAN
#define _FP32_LOG_CHECK_NEG_NEG(X) FP32_NAN

#define FP32_LOG_UNCHECKED(X,B) FP32_DIV_UNCHECKED(FP32_LOG2_UNCHECKED(X), FP32_LOG2_UNCHECKED(B))

#endif