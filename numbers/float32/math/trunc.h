#ifndef C23META_FP32_TRUNC
#define C23META_FP32_TRUNC

#define FP32_TRUNC(X) FP32_SUB(X, FP32_FRACT(X))

#endif