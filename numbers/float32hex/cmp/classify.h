#ifndef C23META_FP32H_CLASSIFY
#define C23META_FP32H_CLASSIFY

#define FP32H_CLASSIFY(X) _FP32H_CLASSIFY(X)
#define _FP32H_CLASSIFY(X) CAT_ALL(_FP32H_CLASSIFY, FP32H_IS_NAN(X), FP32H_IS_INF(X), FP32H_IS_ZERO(X))
#define _FP32H_CLASSIFY000 OTHER
#define _FP32H_CLASSIFY001 ZERO
#define _FP32H_CLASSIFY010 INFINITY
#define _FP32H_CLASSIFY100 NAN

#endif