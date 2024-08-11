#ifndef C23META_FP32H_POW
#define C23META_FP32H_POW

#define FP32H_POW(X,N) _FP32H_POW_C(X,N)
#define _FP32H_POW_C(X,N) _FP32H_POW(X, FP32H_TRUNC(N), FP32H_FRACT(N))
#define _FP32H_POW(X,NI,NF) CAT(_FP32H_POW_X, FP32H_GEQ(NF, FP32H_1L2))(X,NI,NF)
#define _FP32H_POW_X0(X,NI,NF) CAT(_FP32H_POW_W, FP32H_GEQ(NF, FP32H_1L4))(X,NI,NF)
#define _FP32H_POW_X1(X,NI,NF) _FP32H_POW_Y(X, NI, FP32H_SUB(NF, FP32H_1L2))
#define _FP32H_POW_Y(X,NI,NF) CAT(_FP32H_POW_Z, FP32H_GEQ(NF, FP32H_1L4))(FP32H_SQRT(X),X,NI,NF)

#define _FP32H_POW_W0(X,NI,NF) FP32H_MUL(FP32H_POW_I(X, FP32H_TO_U32(NI)), FP32H_EXP2(FP32H_MUL(NF, FP32H_LOG2(X))))
#define _FP32H_POW_W1(X,NI,NF)\
  FP32H_MUL(\
    FP32H_SQRT(FP32H_SQRT(X)),\
    FP32H_MUL(\
      FP32H_POW_I(X, FP32H_TO_U32(NI)),\
      FP32H_EXP2(FP32H_MUL(FP32H_SUB(NF, FP32H_1L4), FP32H_LOG2(X)))))

#define _FP32H_POW_Z0(SQX,X,NI,NF)\
  FP32H_MUL(\
    SQX,\
    FP32H_MUL(\
      FP32H_POW_I(X, FP32H_TO_U32(NI)),\
      FP32H_EXP2(FP32H_MUL(NF, FP32H_LOG2(X)))))

#define _FP32H_POW_Z1(SQX,X,NI,NF)\
  FP32H_MUL(\
    SQX,\
    FP32H_MUL(\
      FP32H_SQRT(SQX),\
      FP32H_MUL(\
        FP32H_POW_I(X, FP32H_TO_U32(NI)),\
        FP32H_EXP2(FP32H_MUL(FP32H_SUB(NF, FP32H_1L4), FP32H_LOG2(X))))))

#define FP32H_POW_I(X,Y) _FP32H_POW_I_C(X,Y)
#define _FP32H_POW_I_C(X,Y) CAT_ALL(_FP32H_POW_I_CHECK_, FP32H_CLASSIFY(X))(X,Y)

#define _FP32H_POW_I_CHECK_nan(X,Y) FP32H_NAN
#define _FP32H_POW_I_CHECK_zero(X,Y) X
#define _FP32H_POW_I_CHECK_infinity(X,Y) X
#define _FP32H_POW_I_CHECK_other(X,Y) FP32H_POW_I_UNCHECKED(X,Y)

#define FP32H_POW_I_UNCHECKED(X,Y) FP32H_POW_EVAL(_FP32H_POW_I_PREAMBLE(U32H_EQ(Y,U32H_0),X,Y))
#define FP32H_POW_EVAL(X) FP32H_POW_EVAL1(FP32H_POW_EVAL1(FP32H_POW_EVAL1(FP32H_POW_EVAL1(X))))
#define FP32H_POW_EVAL1(X) FP32H_POW_EVAL2(FP32H_POW_EVAL2(FP32H_POW_EVAL2(FP32H_POW_EVAL2(X))))
#define FP32H_POW_EVAL2(X) X

#define FP32H_POW_M_EVAL(X) FP32H_POW_EVAL1(FP32H_POW_EVAL1(FP32H_POW_EVAL1(FP32H_POW_EVAL1(X))))
#define FP32H_POW_M_EVAL1(X) FP32H_POW_EVAL2(FP32H_POW_EVAL2(FP32H_POW_EVAL2(FP32H_POW_EVAL2(X))))
#define FP32H_POW_M_EVAL2(X) X

#define _FP32H_POW_I_PREAMBLE(G,X,Y) CAT(_FP32H_POW_I,G)(FP32H_EXPONENT(X),FP32H_MANTISSA(X),FP32H_SIGN_BIT(X),Y)
#define _FP32H_POW_I1(E,M,S,Y) FP32H_1
#define _FP32H_POW_I0(E,M,S,Y) _FP32H_POW_I_X(I32H_MUL(E,Y),_FP32H_POW_I_M(M,U32H_8388608,Y),S,I32H_IS_EVEN(Y))
#define _FP32H_POW_I_X(E,K,S,G) CAT(CAT(_FP32H_POW_I_Y_,S),G)(U32H_ADD(E,FP32H_EXPONENT(K)),FP32H_MANTISSA(K))
#define _FP32H_POW_I_Y_00(E,M) FP32H_FROM_PARTS(0,E,M)
#define _FP32H_POW_I_Y_01(E,M) FP32H_FROM_PARTS(0,E,M)
#define _FP32H_POW_I_Y_10(E,M) FP32H_FROM_PARTS(1,E,M)
#define _FP32H_POW_I_Y_11(E,M) FP32H_FROM_PARTS(0,E,M)

#define _FP32H_POW_I_M(X,ODD,N) FP32H_POW_M_EVAL(_FP32H_POW_I_MANTISSA(X,ODD,N))
#define _FP32H_POW_I_MANTISSA(X,ODD,N) CAT(_FP32H_POW_I_MANTISSA_X, U32H_EQ(N, U32H_1))(X,ODD,N)
#define _FP32H_POW_I_MANTISSA_X1(X,ODD,N) FP32H_NORMALIZE(I32H_0, U64H_MULSHIFT32(X,ODD))
#define _FP32H_POW_I_MANTISSA_X0(X,ODD,N) CAT(_FP32H_POW_I_MANTISSA_Y, U32H_IS_EVEN(N))(X,ODD,N)
#define _FP32H_POW_I_MANTISSA_Y1(X,ODD,N) DEFER(_FP32H_POW_I_MANTISSA_I)()(U64H_MULSHIFT32(X,X),ODD,U32H_RSH1(N))
#define _FP32H_POW_I_MANTISSA_Y0(X,ODD,N) DEFER(_FP32H_POW_I_MANTISSA_I)()(X,U64H_MULSHIFT32(X,ODD),U32H_SUB(N, U32H_1))
#define _FP32H_POW_I_MANTISSA_I() _FP32H_POW_I_MANTISSA

#endif