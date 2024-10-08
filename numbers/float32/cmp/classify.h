#ifndef C23META_FP32_CLASSIFY
#define C23META_FP32_CLASSIFY

#define FP32_CLASSIFY(X) _FP32_CLASSIFY(X)
#define _FP32_CLASSIFY(X) CAT_ALL(_FP32_CLASSIFY, FP32_IS_NAN(X), FP32_IS_INF(X), FP32_IS_ZERO(X))
#define _FP32_CLASSIFY000 other
#define _FP32_CLASSIFY001 zero
#define _FP32_CLASSIFY010 infinity
#define _FP32_CLASSIFY100 nan

#endif