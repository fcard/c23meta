#ifndef C23META_FP32H_NORMALIZE
#define C23META_FP32H_NORMALIZE

#define FP32H_MANTISSA_MAX (0,0,0,0,0,0,1,0)
#define FP32H_MANTISSA_MIN (0,0,0,0,0,8,0,0)

#define FP32H_NORMALIZE(E,M) _FP32H_NORMALIZE_EQZ(U32H_EQ(M,U32H_0),E,M)
#define _FP32H_NORMALIZE_EQZ(G,E,M) CAT(_FP32H_NORMALIZE_EQZ_X,G)(E,M)
#define _FP32H_NORMALIZE_EQZ_X1(E,M) FP32H_0
#define _FP32H_NORMALIZE_EQZ_X0(E,M) _FP32H_NORMALIZE_MLARGE(U32H_GEQ(M,FP32H_MANTISSA_MAX),E,M)

#define _FP32H_NORMALIZE_MLARGE(G,E,M) CAT(_FP32H_NORMALIZE_MLARGE_X,G)(E,M)
#define _FP32H_NORMALIZE_MLARGE_X1(E,M) _FP32H_NORMALIZE_MLARGE_Y(I32H_ADD(E,U32H_1), U32H_RSH1(M))
#define _FP32H_NORMALIZE_MLARGE_X0(E,M) _FP32H_NORMALIZE_MSMALL(U32H_LT(M,FP32H_MANTISSA_MIN),E,M)
#define _FP32H_NORMALIZE_MLARGE_Y(E,M) DEFER(_FP32H_NORMALIZE_MLARGE_I)()(U32H_GEQ(M,FP32H_MANTISSA_MAX),E,M)
#define _FP32H_NORMALIZE_MLARGE_I() _FP32H_NORMALIZE_MLARGE

#define _FP32H_NORMALIZE_MSMALL(G,E,M) CAT(_FP32H_NORMALIZE_MSMALL_X,G)(E,M)
#define _FP32H_NORMALIZE_MSMALL_X1(E,M) _FP32H_NORMALIZE_MSMALL_Y(I32H_SUB(E,I32H_1), U32H_LSH1(M))
#define _FP32H_NORMALIZE_MSMALL_X0(E,M) _FP32H_NORMALIZE_FINISH(E,M)
#define _FP32H_NORMALIZE_MSMALL_Y(E,M) DEFER(_FP32H_NORMALIZE_MSMALL_I)()(U32H_LT(M,FP32H_MANTISSA_MIN),E,M)
#define _FP32H_NORMALIZE_MSMALL_I() _FP32H_NORMALIZE_MSMALL

#define _FP32H_NORMALIZE_FINISH(E,M) FP32H_FROM_PARTS(0,E,M)
#endif