#ifndef C23META_FP32_POW
#define C23META_FP32_POW

#define FP32_POW_I(X,Y) _FP32_POW_I_C(X,Y)
#define _FP32_POW_I_C(X,Y) CAT_ALL(_FP32_POW_I_CHECK_, FP32_CLASSIFY(X))(X,Y)

#define _FP32_POW_I_CHECK_NAN(X,Y) FP32_NAN
#define _FP32_POW_I_CHECK_ZERO(X,Y) X
#define _FP32_POW_I_CHECK_INFINITY(X,Y) X
#define _FP32_POW_I_CHECK_OTHER(X,Y) FP32_POW_I_UNCHECKED(X,Y)

#define FP32_POW_I_UNCHECKED(X,Y) FP32_POW_EVAL(_FP32_POW_I_PREAMBLE(U32_EQ(Y,U32_0),X,Y))
#define FP32_POW_EVAL(X) FP32_POW_EVAL1(FP32_POW_EVAL1(FP32_POW_EVAL1(FP32_POW_EVAL1(X))))
#define FP32_POW_EVAL1(X) FP32_POW_EVAL2(FP32_POW_EVAL2(FP32_POW_EVAL2(FP32_POW_EVAL2(X))))
#define FP32_POW_EVAL2(X) X

#define FP32_POW_M_EVAL(X) FP32_POW_EVAL1(FP32_POW_EVAL1(FP32_POW_EVAL1(FP32_POW_EVAL1(X))))
#define FP32_POW_M_EVAL1(X) FP32_POW_EVAL2(FP32_POW_EVAL2(FP32_POW_EVAL2(FP32_POW_EVAL2(X))))
#define FP32_POW_M_EVAL2(X) X

#define _FP32_POW_I_PREAMBLE(G,X,Y) CAT(_FP32_POW_I,G)(FP32_EXPONENT(X),FP32_MANTISSA(X),FP32_SIGN_BIT(X),Y)
#define _FP32_POW_I1(E,M,S,Y) FP32_1
#define _FP32_POW_I0(E,M,S,Y) _FP32_POW_I_X(I32_MUL(E,Y),_FP32_POW_I_M(M,U32_8388608,Y),S,I32_IS_EVEN(Y))
#define _FP32_POW_I_X(E,K,S,G) CAT(CAT(_FP32_POW_I_Y_,S),G)(U32_ADD(E,FP32_EXPONENT(K)),FP32_MANTISSA(K))
#define _FP32_POW_I_Y_00(E,M) FP32_FROM_PARTS(0,E,M)
#define _FP32_POW_I_Y_01(E,M) FP32_FROM_PARTS(0,E,M)
#define _FP32_POW_I_Y_10(E,M) FP32_FROM_PARTS(1,E,M)
#define _FP32_POW_I_Y_11(E,M) FP32_FROM_PARTS(0,E,M)

#define _FP32_POW_I_M(X,ODD,N) FP32_POW_M_EVAL(_FP32_POW_I_MANTISSA(X,ODD,N))
#define _FP32_POW_I_MANTISSA(X,ODD,N) CAT(_FP32_POW_I_MANTISSA_X, U32_EQ(N, U32_1))(X,ODD,N)
#define _FP32_POW_I_MANTISSA_X1(X,ODD,N) FP32_NORMALIZE(I32_0, U64_MULSHIFT32(X,ODD))
#define _FP32_POW_I_MANTISSA_X0(X,ODD,N) CAT(_FP32_POW_I_MANTISSA_Y, U32_IS_EVEN(N))(X,ODD,N)
#define _FP32_POW_I_MANTISSA_Y1(X,ODD,N) DEFER(_FP32_POW_I_MANTISSA_I)()(U64_MULSHIFT32(X,X),ODD,U32_RSH1(N))
#define _FP32_POW_I_MANTISSA_Y0(X,ODD,N) DEFER(_FP32_POW_I_MANTISSA_I)()(X,U64_MULSHIFT32(X,ODD),U32_SUB(N, U32_1))
#define _FP32_POW_I_MANTISSA_I() _FP32_POW_I_MANTISSA

#endif