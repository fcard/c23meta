#ifndef C23META_FP32_MUL
#define C23META_FP32_MUL

#define FP32_MUL(X,Y) _FP32_MUL_C(X,Y)
#define _FP32_MUL_C(X,Y) CAT_ALL(_FP32_MUL_CHECK_, FP32_CLASSIFY(X), _, FP32_CLASSIFY(Y))(X,Y)

#define _FP32_MUL_CHECK_nan_nan(X,Y) FP32_NAN
#define _FP32_MUL_CHECK_other_nan(X,Y) FP32_NAN
#define _FP32_MUL_CHECK_zero_nan(X,Y) FP32_NAN
#define _FP32_MUL_CHECK_infinity_nan(X,Y) FP32_NAN
#define _FP32_MUL_CHECK_nan_other(X,Y) FP32_NAN
#define _FP32_MUL_CHECK_nan_zero(X,Y) FP32_NAN
#define _FP32_MUL_CHECK_nan_infinity(X,Y) FP32_NAN

#define _FP32_MUL_CHECK_infinity_infinity(X,Y) CAT(_FP32_MUL_CHECK_, FP32_CMP_SIGN(X,Y))(FP32_INF)
#define _FP32_MUL_CHECK_infinity_other(X,Y) CAT(_FP32_MUL_CHECK_, FP32_CMP_SIGN(X,Y))(FP32_INF)
#define _FP32_MUL_CHECK_infinity_zero(X,Y) CAT(_FP32_MUL_CHECK_, FP32_CMP_SIGN(X,Y))(FP32_INF)
#define _FP32_MUL_CHECK_other_infinity(X,Y) CAT(_FP32_MUL_CHECK_, FP32_CMP_SIGN(X,Y))(FP32_INF)
#define _FP32_MUL_CHECK_zero_infinity(X,Y) CAT(_FP32_MUL_CHECK_, FP32_CMP_SIGN(X,Y))(FP32_INF)

#define _FP32_MUL_CHECK_other_other(X,Y) FP32_MUL_UNCHECKED(X,Y)
#define _FP32_MUL_CHECK_other_zero(X,Y) CAT(_FP32_MUL_CHECK_, FP32_CMP_SIGN(X,Y))(FP32_0)
#define _FP32_MUL_CHECK_zero_other(X,Y) CAT(_FP32_MUL_CHECK_, FP32_CMP_SIGN(X,Y))(FP32_0)

#define _FP32_MUL_CHECK_zero_zero(X,Y) CAT(_FP32_MUL_CHECK_, FP32_CMP_SIGN(X,Y))(FP32_0)

#define _FP32_MUL_CHECK_POS_POS(X) X
#define _FP32_MUL_CHECK_POS_NEG(X) FP32_NEG(X)
#define _FP32_MUL_CHECK_NEG_POS(X) FP32_NEG(X)
#define _FP32_MUL_CHECK_NEG_NEG(X) X

#define FP32_MUL_UNCHECKED(X,Y) FP32_MUL_EVAL(_FP32_MUL(FP32_EXPONENT(X),FP32_EXPONENT(Y),FP32_MANTISSA(X),FP32_MANTISSA(Y), FP32_CMP_SIGN(X,Y)))
#define FP32_MUL_EVAL(X) FP32_MUL_EVAL1(FP32_MUL_EVAL1(FP32_MUL_EVAL1(FP32_MUL_EVAL1(X))))
#define FP32_MUL_EVAL1(X) FP32_MUL_EVAL2(FP32_MUL_EVAL2(FP32_MUL_EVAL2(FP32_MUL_EVAL2(X))))
#define FP32_MUL_EVAL2(X) X

#define _FP32_MUL(EX,EY,MX,MY,S) _FP32_MUL_X(I32_ADD(EX,EY),U64_MULSHIFT32(MX,MY),S)
#define _FP32_MUL_X(E,M,S) CAT(_FP32_MUL_Y_,S)(E,M)
#define _FP32_MUL_Y_POS_POS(E,M) FP32_NORMALIZE(E,M)
#define _FP32_MUL_Y_POS_NEG(E,M) FP32_NEG(FP32_NORMALIZE(E,M))
#define _FP32_MUL_Y_NEG_POS(E,M) FP32_NEG(FP32_NORMALIZE(E,M))
#define _FP32_MUL_Y_NEG_NEG(E,M) FP32_NORMALIZE(E,M)

#define FP32_MUL2(X) FP32_MUL_2PN(X,I32_1)
#define FP32_MUL4(X) FP32_MUL_2PN(X,I32_2)
#define FP32_MUL8(X) FP32_MUL_2PN(X,I32_3)
#define FP32_MUL16(X) FP32_MUL_2PN(X,I32_4)
#define FP32_MUL32(X) FP32_MUL_2PN(X,I32_5)
#define FP32_MUL64(X) FP32_MUL_2PN(X,I32_6)
#define FP32_MUL128(X) FP32_MUL_2PN(X,I32_7)
#define FP32_MUL256(X) FP32_MUL_2PN(X,I32_8)

#define FP32_MUL_2PN(X,N) _FP32_MUL_2PN_C(X,N)
#define _FP32_MUL_2PN_C(X,N) FP32_FROM_PARTS(FP32_SIGN_BIT(X), I32_ADD(FP32_EXPONENT(X), N), FP32_MANTISSA(X))

#endif