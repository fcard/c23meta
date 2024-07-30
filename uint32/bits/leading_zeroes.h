#ifndef C23META_U32_CLZ
#define C23META_U32_CLZ
#include "../../util.h"

#define U32_CLZ(X) _U32_CLZ(X)
#define _U32_CLZ(X) _U32_CLZ_EVAL(DEFER(_U32_CLZ_X) X)
#define _U32_CLZ_EVAL(X) _U32_CLZ_EVAL1(_U32_CLZ_EVAL1(_U32_CLZ_EVAL1(_U32_CLZ_EVAL1(X))))
#define _U32_CLZ_EVAL1(X) _U32_CLZ_EVAL2(_U32_CLZ_EVAL2(_U32_CLZ_EVAL2(_U32_CLZ_EVAL2(X))))
#define _U32_CLZ_EVAL2(X) _U32_CLZ_EVAL3(_U32_CLZ_EVAL3(_U32_CLZ_EVAL3(_U32_CLZ_EVAL3(X))))
#define _U32_CLZ_EVAL3(X) X

#define _U32_CLZ_X(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,\
                    A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,\
                    A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
                      BITCLZ(0,\
                             A31,A30,A29,A28,A27,A26,A25,\
                             A24,A23,A22,A21,A20,A19,A18,\
                             A17,A16,A15,A14,A13,A12,A11,\
                             A10,A9,A8,A7,A6,A5,A4,A3,A2,\
                             A1,A0)\

#define BITCLZ(N,...) BITCLZX_ ## __VA_OPT__(X(N,__VA_ARGS__) IGNORE) (N)
#define BITCLZX_(N) CAT(U32_, N)
#define BITCLZX_X(N,A,...) DEFER(BITCLZY_ ## A)(N,__VA_ARGS__)
#define BITCLZY_0(N,...) BITCLZZ_ ## __VA_OPT__(Z(OBSTRUCT(BITCLZ_I)()(BITCLZ_INC(N),__VA_ARGS__)) IGNORE) (0)
#define BITCLZY_1(N,...) CAT(U32_, N)
#define BITCLZZ_Z(X) X
#define BITCLZZ_(X) X
#define BITCLZ_I() BITCLZ

#define BITCLZ_INC(N) BITCLZ_INC ## N
#define BITCLZ_INC0 1
#define BITCLZ_INC1 2
#define BITCLZ_INC2 3
#define BITCLZ_INC3 4
#define BITCLZ_INC4 5
#define BITCLZ_INC5 6
#define BITCLZ_INC6 7
#define BITCLZ_INC7 8
#define BITCLZ_INC8 9
#define BITCLZ_INC9 10
#define BITCLZ_INC10 11
#define BITCLZ_INC11 12
#define BITCLZ_INC12 13
#define BITCLZ_INC13 14
#define BITCLZ_INC14 15
#define BITCLZ_INC15 16
#define BITCLZ_INC16 17
#define BITCLZ_INC17 18
#define BITCLZ_INC18 19
#define BITCLZ_INC19 20
#define BITCLZ_INC20 21
#define BITCLZ_INC21 22
#define BITCLZ_INC22 23
#define BITCLZ_INC23 24
#define BITCLZ_INC24 25
#define BITCLZ_INC25 26
#define BITCLZ_INC26 27
#define BITCLZ_INC27 28
#define BITCLZ_INC28 29
#define BITCLZ_INC29 30
#define BITCLZ_INC30 31

#endif