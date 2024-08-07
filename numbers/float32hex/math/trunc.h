#ifndef C23META_FP32H_TRUNC
#define C23META_FP32H_TRUNC

#define FP32H_TRUNC(X) _FP32H_TRUNC(X)
#define _FP32H_TRUNC(X) FP32H_WITH_SIGN(FP32H_SUB(FP32H_ABS(X), FP32H_FRACT(X)), FP32H_SIGN_BIT(X))
#define FP32H_TRUNC_UNCHECKED(X) FP32H_SUB_UNCHECKED(X, FP32H_FRACT_UNCHECKED(X))

#endif