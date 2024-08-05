#ifndef C23META_FP32_ADD
#define C23META_FP32_ADD
#include "../bits/sign.h"
#include "../bits/normalize.h"

#define FP32_STICKY_MASK1 (1,1,1,1,1,1,1,1, 1,1,1,1,1,1,1,1, 1,1,1,1,1,0,0,0, 0,0,0,0,0,0,0,0)
#define FP32_STICKY_MASK2 (0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,1,1,0, 0,0,0,0,0,0,0,0)

#define FP32_ADD(X,Y) _FP32_ADD_C(X,Y)
#define _FP32_ADD_C(X,Y) CAT_ALL(_FP32_ADD_CHECK_, FP32_CLASSIFY(X), _, FP32_CLASSIFY(Y))(X,Y)

#define _FP32_ADD_CHECK_NAN_NAN(X,Y) FP32_NAN
#define _FP32_ADD_CHECK_OTHER_NAN(X,Y) FP32_NAN
#define _FP32_ADD_CHECK_ZERO_NAN(X,Y) FP32_NAN
#define _FP32_ADD_CHECK_INFINITY_NAN(X,Y) FP32_NAN
#define _FP32_ADD_CHECK_NAN_OTHER(X,Y) FP32_NAN
#define _FP32_ADD_CHECK_NAN_ZERO(X,Y) FP32_NAN
#define _FP32_ADD_CHECK_NAN_INFINITY(X,Y) FP32_NAN

#define _FP32_ADD_CHECK_INFINITY_INFINITY(X,Y) FP32_INF
#define _FP32_ADD_CHECK_INFINITY_OTHER(X,Y) FP32_INF
#define _FP32_ADD_CHECK_INFINITY_ZERO(X,Y) FP32_INF
#define _FP32_ADD_CHECK_OTHER_INFINITY(X,Y) FP32_INF
#define _FP32_ADD_CHECK_ZERO_INFINITY(X,Y) FP32_INF

#define _FP32_ADD_CHECK_OTHER_OTHER(X,Y) FP32_ADD_UNCHECKED(X,Y)
#define _FP32_ADD_CHECK_OTHER_ZERO(X,Y) X
#define _FP32_ADD_CHECK_ZERO_OTHER(X,Y) Y

#define _FP32_ADD_CHECK_ZERO_ZERO(X,Y) FP32_0

#define FP32_ADD_UNCHECKED(X,Y) FP32_ADD_EVAL(_FP32_ADD(FP32_EXPONENT(X), FP32_EXPONENT(Y), X, Y))
#define FP32_ADD_EVAL(X) FP32_ADD_EVAL1(FP32_ADD_EVAL1(FP32_ADD_EVAL1(FP32_ADD_EVAL1(X))))
#define FP32_ADD_EVAL1(X) FP32_ADD_EVAL2(FP32_ADD_EVAL2(FP32_ADD_EVAL2(FP32_ADD_EVAL2(X))))
#define FP32_ADD_EVAL2(X) X

#define _FP32_ADD(EX,EY,X,Y) _FP32_ADD_CMP_EXPS(I32_GEQ(EX,EY),EX,EY,X,Y)
#define _FP32_ADD_CMP_EXPS(G,EX,EY,X,Y) CAT(_FP32_ADD_CMP_EXPS_X,G)(EX,EY,X,Y)
#define _FP32_ADD_CMP_EXPS_X0(EX,EY,X,Y) _FP32_ADD_CMP_SIGNS(FP32_CMP_SIGN(X,Y),EX,EY,X,Y)
#define _FP32_ADD_CMP_EXPS_X1(EX,EY,X,Y) _FP32_ADD_CMP_SIGNS(FP32_CMP_SIGN(X,Y),EY,EX,Y,X)

#define _FP32_ADD_CMP_SIGNS(S,EX,EY,X,Y) CAT(CAT(_FP32_ADD_CMP_SIGNS_,S),FP32_GT_UNCHECKED(X,Y))(EY,EX,Y,X)
#define _FP32_ADD_CMP_SIGNS_POS_POS0(EX,EY,X,Y) _FP32_ADD_EQ_EXPS(ADD,EX,EY,X,Y)
#define _FP32_ADD_CMP_SIGNS_POS_POS1(EX,EY,X,Y) _FP32_ADD_EQ_EXPS(ADD,EX,EY,X,Y)
#define _FP32_ADD_CMP_SIGNS_POS_NEG0(EX,EY,X,Y) _FP32_ADD_EQ_EXPS(SUB,EX,EY,X,Y)
#define _FP32_ADD_CMP_SIGNS_POS_NEG1(EX,EY,X,Y) FP32_NEG(_FP32_ADD_EQ_EXPS(SUB,EX,EY,X,Y))
#define _FP32_ADD_CMP_SIGNS_NEG_POS0(EX,EY,X,Y) FP32_NEG(_FP32_ADD_EQ_EXPS(SUB,EX,EY,X,Y))
#define _FP32_ADD_CMP_SIGNS_NEG_POS1(EX,EY,X,Y) _FP32_ADD_EQ_EXPS(SUB,EX,EY,X,Y)
#define _FP32_ADD_CMP_SIGNS_NEG_NEG0(EX,EY,X,Y) FP32_NEG(_FP32_ADD_EQ_EXPS(ADD,EX,EY,X,Y))
#define _FP32_ADD_CMP_SIGNS_NEG_NEG1(EX,EY,X,Y) FP32_NEG(_FP32_ADD_EQ_EXPS(ADD,EX,EY,X,Y))

#define _FP32_ADD_EQ_EXPS(A,EX,EY,X,Y) _FP32_ADD_EQ_EXPS_X(A,U32_SUB(EX,EY),EX,FP32_MANTISSA(X),FP32_MANTISSA(Y))
#define _FP32_ADD_EQ_EXPS_X(A,EZ,EX,MX,MY) _FP32_ADD_EQ_EXPS_Y(A,U32_GT(EZ,U32_23),EZ,EX,MX,MY)
#define _FP32_ADD_EQ_EXPS_Y(A,G,EZ,EX,MX,MY) CAT(_FP32_ADD_EQ_EXPS_Z,G)(A,EZ,EX,MX,MY)
#define _FP32_ADD_EQ_EXPS_Z0(A,EZ,EX,MX,MY) _FP32_ADD_EQ_EXPS_W(A,EX,MX,U32_RSH(MY,EZ))
#define _FP32_ADD_EQ_EXPS_Z1(A,EZ,EX,MX,MY) _FP32_ADD_EQ_EXPS_W(A,EX,MX,U32_RSH(MY,EZ))
#define _FP32_ADD_EQ_EXPS_W(A,EX,MX,MY) CAT(_FP32_ADD_MAIN_,A)(EX,MX,MY)

#define _FP32_ADD_MAIN_ADD(E,MX,MY) FP32_NORMALIZE(E,U32_ADD(MX,MY))
#define _FP32_ADD_MAIN_SUB(E,MX,MY) _FP32_ADD_MAIN_SUB_X(E,U32_GT(MX,MY),MX,MY)
#define _FP32_ADD_MAIN_SUB_X(E,G,MX,MY) CAT(_FP32_ADD_MAIN_SUB_Y,G)(E,MX,MY)
#define _FP32_ADD_MAIN_SUB_Y1(E,MX,MY) FP32_NORMALIZE(E,U32_SUB(MX,MY))
#define _FP32_ADD_MAIN_SUB_Y0(E,MX,MY) FP32_NEG(FP32_NORMALIZE(E,U32_SUB(MY,MX)))

#define _FP32_ADD_EQ_EXPS_Z2(A,EZ,EX,MX,MY) _FP32_ADD_EQ_EXPS_A(A,U32_SUB(EZ,U32_23),EZ,EX,MX,MY)

#define _FP32_ADD_EQ_EXPS_A(A,SH,EZ,EX,MX,MY) _FP32_ADD_EQ_EXPS_B(A,U32_NEQ(U32_AND(MY,FP32_STICKY_MASK1)),SH,EZ,EX,MX,MY)
#define _FP32_ADD_EQ_EXPS_B(A,ST,SH,EZ,EX,MX,MY) _FP32_ADD_EQ_EXPS_C(A,U32_RSH(U32_AND(MY,FP32_STICKY_MASK2),SH),SH,EZ,EX,MX,MY)

#define _FP32_ADD_SET_STICKY(SH,ST) DEFER(_FP32_ADD_SET_STICKY_X)(UNWRAP SH,ST)
#define _FP32_ADD_SET_STICKY_X(A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,\
                               A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,\
                               A23,A24,A25,A26,A27,A28,A29,A30,A31,ST)\
  (A1,A2,A3,A4,A5,A6,A7, A8,A9,A10,A11,A12,A13,A14,A15, A16,A17,A18,)
#define _FP32_RSHR(X,N)

#endif