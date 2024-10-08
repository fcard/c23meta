#ifndef C23META_U8H_DIV
#define C23META_U8H_DIV
#include "../cmp/geq.h"
#include "../cmp/eq.h"

#define U8H_DIV(X,Y) _U8H_DIV(X,Y)
#define _U8H_DIV(X,Y) _U8H_DIV_EVAL(DEFER(_U8H_DIV_X)(UNWRAP X, Y))
#define _U8H_DIV_EVAL(X) _U8H_DIV_EVAL1(_U8H_DIV_EVAL1(_U8H_DIV_EVAL1(_U8H_DIV_EVAL1(X))))
#define _U8H_DIV_EVAL1(X) _U8H_DIV_EVAL2(_U8H_DIV_EVAL2(_U8H_DIV_EVAL2(_U8H_DIV_EVAL2(X))))
#define _U8H_DIV_EVAL2(X) _U8H_DIV_EVAL3(_U8H_DIV_EVAL3(_U8H_DIV_EVAL3(_U8H_DIV_EVAL3(X))))
#define _U8H_DIV_EVAL3(X) _U8H_DIV_EVAL4(_U8H_DIV_EVAL4(_U8H_DIV_EVAL4(_U8H_DIV_EVAL4(X))))
#define _U8H_DIV_EVAL4(X) X

#define _U8H_DIV_X(A0,A1,B)\
  HEXDIV8_PREAMBLE(U8H_EQ(B,U8H_0),B,A1,A0)

#define HEXDIV8_PREAMBLE(EQ0,D,...) (CAT(HEXDIV8_P,EQ0)(U8H_0, D __VA_OPT__(,) __VA_ARGS__))
#define HEXDIV8_P0(...) HEXDIV8(__VA_ARGS__)
#define HEXDIV8_P1(...) U8H_0 _Pragma("GCC error \"Division by Zero\"")

#define HEXDIV8(R,D,A,...) HEXDIV8X(U8H_LSHIFTREP1(A,R), 0, D __VA_OPT__(,) __VA_ARGS__)
#define HEXDIV8X(R,N,D,...) HEXDIV8Y(U8H_GEQ(R,D), R, N, D __VA_OPT__(,) __VA_ARGS__)
#define HEXDIV8Y(G,R,N,...) CAT(HEXDIV8Z_,G)(R,N,__VA_ARGS__)
#define HEXDIV8Z_0(R,N,D,...) __VA_OPT__(DEFER(HEXDIV8_I)()(R,D,__VA_ARGS__),) N
#define HEXDIV8Z_1(R,N,D,...) DEFER(HEXDIV8_I2)()(U8H_SUB(R,D), _HEXDIV8_INC(N), D __VA_OPT__(,) __VA_ARGS__)
#define HEXDIV8_I() HEXDIV8
#define HEXDIV8_I2() HEXDIV8X

#define _HEXDIV8_INC(N) _HEXDIV8_INC ## N
#define _HEXDIV8_INC0 1
#define _HEXDIV8_INC1 2
#define _HEXDIV8_INC2 3
#define _HEXDIV8_INC3 4
#define _HEXDIV8_INC4 5
#define _HEXDIV8_INC5 6
#define _HEXDIV8_INC6 7
#define _HEXDIV8_INC7 8
#define _HEXDIV8_INC8 9
#define _HEXDIV8_INC9 a
#define _HEXDIV8_INCa b
#define _HEXDIV8_INCb c
#define _HEXDIV8_INCc d
#define _HEXDIV8_INCd e
#define _HEXDIV8_INCe f

#define U8H_LSHIFTREP1(R,X)\
  U8H_LSHIFTREP1_EVAL(DEFER(_U8H_LSHIFTREP1)(R, UNWRAP X))
#define _U8H_LSHIFTREP1(R,A0,A1)\
  (R,A0)
#define U8H_LSHIFTREP1_EVAL(X) X


#endif