#ifndef C23META_U32H_DIV
#define C23META_U32H_DIV
#include "../cmp/geq.h"
#include "../cmp/eq.h"

#define U32H_DIV(X,Y) _U32H_DIV(X,Y)
#define _U32H_DIV(X,Y) _U32H_DIV_EVAL(DEFER(_U32H_DIV_X)(UNWRAP X, Y))
#define _U32H_DIV_EVAL(X) _U32H_DIV_EVAL1(_U32H_DIV_EVAL1(_U32H_DIV_EVAL1(_U32H_DIV_EVAL1(X))))
#define _U32H_DIV_EVAL1(X) _U32H_DIV_EVAL2(_U32H_DIV_EVAL2(_U32H_DIV_EVAL2(_U32H_DIV_EVAL2(X))))
#define _U32H_DIV_EVAL2(X) _U32H_DIV_EVAL3(_U32H_DIV_EVAL3(_U32H_DIV_EVAL3(_U32H_DIV_EVAL3(X))))
#define _U32H_DIV_EVAL3(X) _U32H_DIV_EVAL4(_U32H_DIV_EVAL4(_U32H_DIV_EVAL4(_U32H_DIV_EVAL4(X))))
#define _U32H_DIV_EVAL4(X) X

#define _U32H_DIV_X(A0,A1,A2,A3,A4,A5,A6,A7,B)\
  HEXDIV_PREAMBLE(U32H_EQ(B,U32H_0),B,A7,A6,A5,A4,A3,A2,A1,A0)

#define HEXDIV_PREAMBLE(EQ0,D,...) (CAT(HEXDIV_P,EQ0)(U32H_0, D __VA_OPT__(,) __VA_ARGS__))
#define HEXDIV_P0(...) HEXDIV(__VA_ARGS__)
#define HEXDIV_P1(...) U32H_0 _Pragma("GCC error \"Division by Zero\"")

#define HEXDIV(R,D,A,...) HEXDIVX(U32H_LSHIFTREP1(A,R), 0, D __VA_OPT__(,) __VA_ARGS__)
#define HEXDIVX(R,N,D,...) HEXDIVY(U32H_GEQ(R,D), R, N, D __VA_OPT__(,) __VA_ARGS__)
#define HEXDIVY(G,R,N,...) CAT(HEXDIVZ_,G)(R,N,__VA_ARGS__)
#define HEXDIVZ_0(R,N,D,...) __VA_OPT__(DEFER(HEXDIV_I)()(R,D,__VA_ARGS__),) N
#define HEXDIVZ_1(R,N,D,...) DEFER(HEXDIV_I2)()(U32H_SUB(R,D), _HEXDIV_INC(N), D __VA_OPT__(,) __VA_ARGS__)
#define HEXDIV_I() HEXDIV
#define HEXDIV_I2() HEXDIVX

#define _HEXDIV_INC(N) _HEXDIV_INC ## N
#define _HEXDIV_INC0 1
#define _HEXDIV_INC1 2
#define _HEXDIV_INC2 3
#define _HEXDIV_INC3 4
#define _HEXDIV_INC4 5
#define _HEXDIV_INC5 6
#define _HEXDIV_INC6 7
#define _HEXDIV_INC7 8
#define _HEXDIV_INC8 9
#define _HEXDIV_INC9 a
#define _HEXDIV_INCa b
#define _HEXDIV_INCb c
#define _HEXDIV_INCc d
#define _HEXDIV_INCd e
#define _HEXDIV_INCe f

#define U32H_LSHIFTREP1(R,X)\
  U32H_LSHIFTREP1_EVAL(DEFER(_U32H_LSHIFTREP1)(R, UNWRAP X))
#define _U32H_LSHIFTREP1(R,A0,A1,A2,A3,A4,A5,A6,A7)\
  (R,A0,A1,A2,A3,A4,A5,A6)
#define U32H_LSHIFTREP1_EVAL(X) X


#endif