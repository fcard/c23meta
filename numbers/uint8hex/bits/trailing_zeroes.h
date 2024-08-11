#ifndef C23META_U8H_CTZ
#define C23META_U8H_CTZ

#define U8H_CTZ(X) _U8H_CTZ(U8H_BITS(X))
#define _U8H_CTZ(X) _U8H_CTZ_EVAL(DEFER(_U8H_CTZ_X) X)
#define _U8H_CTZ_EVAL(X) _U8H_CTZ_EVAL1(_U8H_CTZ_EVAL1(_U8H_CTZ_EVAL1(_U8H_CTZ_EVAL1(X))))
#define _U8H_CTZ_EVAL1(X) _U8H_CTZ_EVAL2(_U8H_CTZ_EVAL2(_U8H_CTZ_EVAL2(_U8H_CTZ_EVAL2(X))))
#define _U8H_CTZ_EVAL2(X) _U8H_CTZ_EVAL3(_U8H_CTZ_EVAL3(_U8H_CTZ_EVAL3(_U8H_CTZ_EVAL3(X))))
#define _U8H_CTZ_EVAL3(X) X

#define _U8H_CTZ_X(A0,A1,A2,A3,A4,A5,A6,A7)\
  BITH8CTZ(0,A0,A1,A2,A3,A4,A5,A6,A7)

#define BITH8CTZ(N,...) BITH8CTZX_ ## __VA_OPT__(X(N,__VA_ARGS__) IGNORE) (N)
#define BITH8CTZX_(N) CAT(U8H_, N)
#define BITH8CTZX_X(N,A,...) DEFER(BITH8CTZY_ ## A)(N,__VA_ARGS__)
#define BITH8CTZY_0(N,...) BITH8CTZZ_ ## __VA_OPT__(Z(OBSTRUCT(BITH8CTZ_I)()(BITH8CTZ_INC(N),__VA_ARGS__)) IGNORE) (0)
#define BITH8CTZY_1(N,...) CAT(U8H_, N)
#define BITH8CTZZ_Z(X) X
#define BITH8CTZZ_(X) X
#define BITH8CTZ_I() BITH8CTZ

#define BITH8CTZ_INC(N) BITH8CTZ_INC ## N
#define BITH8CTZ_INC0 1
#define BITH8CTZ_INC1 2
#define BITH8CTZ_INC2 3
#define BITH8CTZ_INC3 4
#define BITH8CTZ_INC4 5
#define BITH8CTZ_INC5 6
#define BITH8CTZ_INC6 7

#endif