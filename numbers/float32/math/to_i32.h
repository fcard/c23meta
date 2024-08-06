#ifndef C23META_FP32_TO_I32
#define C23META_FP32_TO_I32

#define FP32_TO_I32(X) _FP32_TO_I32_C(X)
#define _FP32_TO_I32_C(X) CAT(_FP32_TO_I32_, F32_SIGN_BIT(X))(X)
#define _FP32_TO_I32_0(X) FP32_TO_U32(X)
#define _FP32_TO_I32_1(X) I32_NEG(FP32_TO_U32(F32_ABS(X)))

#endif