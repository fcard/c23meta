#ifndef C23META_FP32_SQRT
#define C23META_FP32_SQRT


#define FP32_SQRT(X) _FP32_SQRT_C(X)
#define _FP32_SQRT_C(X) CAT_ALL(_FP32_SQRT_CHECK_, FP32_CLASSIFY(X), FP32_SIGN_BIT(X))(X)

#define _FP32_SQRT_CHECK_NAN0(X) FP32_NAN
#define _FP32_SQRT_CHECK_NAN1(X) FP32_NAN
#define _FP32_SQRT_CHECK_ZERO0(X) X
#define _FP32_SQRT_CHECK_ZERO1(X) X
#define _FP32_SQRT_CHECK_INFINITY0(X) FP32_INF
#define _FP32_SQRT_CHECK_INFINITY1(X) FP32_NAN
#define _FP32_SQRT_CHECK_OTHER0(X) FP32_SQRT_UNCHECKED(X)
#define _FP32_SQRT_CHECK_OTHER1(X) FP32_NAN

#define FP32_SQRT_UNCHECKED(X) FP32_SQRT_EVAL(_FP32_SQRT(FP32_EXPONENT(X),FP32_MANTISSA(X),FP32_SIGN_BIT(X)))
#define FP32_SQRT_EVAL(X) FP32_SQRT_EVAL1(FP32_SQRT_EVAL1(FP32_SQRT_EVAL1(FP32_SQRT_EVAL1(X))))
#define FP32_SQRT_EVAL1(X) FP32_SQRT_EVAL2(FP32_SQRT_EVAL2(FP32_SQRT_EVAL2(FP32_SQRT_EVAL2(X))))
#define FP32_SQRT_EVAL2(X) X

#define _FP32_SQRT(E,M,S) CAT(_FP32_SQRT_X,I32_IS_ODD(E))(E,M,S)
#define _FP32_SQRT_X1(E,M,S) _FP32_SQRT_Y(I32_RSH1(E),U128H_SQRTSHIFT32(U32_LSH1(M)),S)
#define _FP32_SQRT_X0(E,M,S) _FP32_SQRT_Y(I32_RSH1(E),U128H_SQRTSHIFT32(M),S)
#define _FP32_SQRT_Y(E,M,S) CAT(_FP32_SQRT_Z_,S)(E,M)
#define _FP32_SQRT_Z_0(E,M) FP32_NORMALIZE(E,M)
#define _FP32_SQRT_Z_1(E,M) _Pragma("GCC error \"Square root of negative number.\"")

#endif