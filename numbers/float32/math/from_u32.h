#ifndef C23META_FP32_FROM_U32
#define C23META_FP32_FROM_U32

#define FP32_FROM_U32(X) _FP32_FROM_U32_C(X)
#define _FP32_FROM_U32_C(X) _FP32_FROM_U32_EVAL(_FP32_FROM_U32(U32_EQ(X,U32_0),X))
#define _FP32_FROM_U32_EVAL(X)  _FP32_FROM_U32_EVAL1(_FP32_FROM_U32_EVAL1(_FP32_FROM_U32_EVAL1(_FP32_FROM_U32_EVAL1(X))))
#define _FP32_FROM_U32_EVAL1(X) _FP32_FROM_U32_EVAL2(_FP32_FROM_U32_EVAL2(_FP32_FROM_U32_EVAL2(_FP32_FROM_U32_EVAL2(X))))
#define _FP32_FROM_U32_EVAL2(X) _FP32_FROM_U32_EVAL3(_FP32_FROM_U32_EVAL3(_FP32_FROM_U32_EVAL3(_FP32_FROM_U32_EVAL3(X))))
#define _FP32_FROM_U32_EVAL3(X) X

#define _FP32_FROM_U32(G,X) CAT(_FP32_FROM_U32_X,G)(I32_0,X)
#define _FP32_FROM_U32_X1(E,X) FP32_0
#define _FP32_FROM_U32_X0(E,X) CAT(_FP32_FROM_U32_Y,U32_LT(X,U32_8388608))(E,X)
#define _FP32_FROM_U32_Y1(E,X) DEFER(_FP32_FROM_U32_I)()(I32_ADD(E,I32_1),U32_LSH1(X))
#define _FP32_FROM_U32_Y0(E,X) FP32_FROM_PARTS(0, I32_SUB(I32_23,E), X)
#define _FP32_FROM_U32_I() _FP32_FROM_U32_X0

#endif