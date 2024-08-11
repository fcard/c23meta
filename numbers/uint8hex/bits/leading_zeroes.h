#ifndef C23META_U8H_CLZ
#define C23META_U8H_CLZ

#define U8H_CLZ(X) _U8H_CLZ(U8H_BITS(X))
#define _U8H_CLZ(X) _U8H_CLZ_EVAL(DEFER(_U8H_CLZ_X) X)
#define _U8H_CLZ_EVAL(X) _U8H_CLZ_EVAL1(_U8H_CLZ_EVAL1(_U8H_CLZ_EVAL1(_U8H_CLZ_EVAL1(X))))
#define _U8H_CLZ_EVAL1(X) _U8H_CLZ_EVAL2(_U8H_CLZ_EVAL2(_U8H_CLZ_EVAL2(_U8H_CLZ_EVAL2(X))))
#define _U8H_CLZ_EVAL2(X) _U8H_CLZ_EVAL3(_U8H_CLZ_EVAL3(_U8H_CLZ_EVAL3(_U8H_CLZ_EVAL3(X))))
#define _U8H_CLZ_EVAL3(X) X

#define _U8H_CLZ_X(A0,A1,A2,A3,A4,A5,A6,A7)\
  BITH8CLZ(0,A7,A6,A5,A4,A3,A2,A1,A0)

#define BITH8CLZ(N,...) BITH8CLZX_ ## __VA_OPT__(X(N,__VA_ARGS__) IGNORE) (N)
#define BITH8CLZX_(N) CAT(U8H_, N)
#define BITH8CLZX_X(N,A,...) DEFER(BITH8CLZY_ ## A)(N,__VA_ARGS__)
#define BITH8CLZY_0(N,...) BITH8CLZZ_ ## __VA_OPT__(Z(OBSTRUCT(BITH8CLZ_I)()(BITH8CLZ_INC(N),__VA_ARGS__)) IGNORE) (0)
#define BITH8CLZY_1(N,...) CAT(U8H_, N)
#define BITH8CLZZ_Z(X) X
#define BITH8CLZZ_(X) X
#define BITH8CLZ_I() BITH8CLZ

#define BITH8CLZ_INC(N) BITH8CLZ_INC ## N
#define BITH8CLZ_INC0 1
#define BITH8CLZ_INC1 2
#define BITH8CLZ_INC2 3
#define BITH8CLZ_INC3 4
#define BITH8CLZ_INC4 5
#define BITH8CLZ_INC5 6
#define BITH8CLZ_INC6 7
#define BITH8CLZ_INC7 8
#define BITH8CLZ_INC8 9
#define BITH8CLZ_INC9 10
#define BITH8CLZ_INC10 11
#define BITH8CLZ_INC11 12
#define BITH8CLZ_INC12 13
#define BITH8CLZ_INC13 14
#define BITH8CLZ_INC14 15
#define BITH8CLZ_INC15 16
#define BITH8CLZ_INC16 17
#define BITH8CLZ_INC17 18
#define BITH8CLZ_INC18 19
#define BITH8CLZ_INC19 20
#define BITH8CLZ_INC20 21
#define BITH8CLZ_INC21 22
#define BITH8CLZ_INC22 23
#define BITH8CLZ_INC23 24
#define BITH8CLZ_INC24 25
#define BITH8CLZ_INC25 26
#define BITH8CLZ_INC26 27
#define BITH8CLZ_INC27 28
#define BITH8CLZ_INC28 29
#define BITH8CLZ_INC29 30
#define BITH8CLZ_INC30 31

#endif