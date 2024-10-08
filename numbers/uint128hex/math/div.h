#ifndef C23META_U128H_DIV
#define C23META_U128H_DIV
#include "../cmp/geq.h"
#include "../cmp/eq.h"

#define U128H_DIV(X,Y) _U128H_DIV(X,Y)
#define _U128H_DIV(X,Y) _U128H_DIV_EVAL(DEFER(_U128H_DIV_X)(UNWRAP X, Y))
#define _U128H_DIV_EVAL(X) _U128H_DIV_EVAL1(_U128H_DIV_EVAL1(_U128H_DIV_EVAL1(_U128H_DIV_EVAL1(X))))
#define _U128H_DIV_EVAL1(X) _U128H_DIV_EVAL2(_U128H_DIV_EVAL2(_U128H_DIV_EVAL2(_U128H_DIV_EVAL2(X))))
#define _U128H_DIV_EVAL2(X) _U128H_DIV_EVAL3(_U128H_DIV_EVAL3(_U128H_DIV_EVAL3(_U128H_DIV_EVAL3(X))))
#define _U128H_DIV_EVAL3(X) _U128H_DIV_EVAL4(_U128H_DIV_EVAL4(_U128H_DIV_EVAL4(_U128H_DIV_EVAL4(X))))
#define _U128H_DIV_EVAL4(X) X

#define _U128H_DIV_X(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31,B)\
  HEXDIV128_PREAMBLE(U128H_EQ(B,U128H_0),B,A31,A30,A29,A28,A27,A26,A25,A24,A23,A22,A21,A20,A19,A18,A17,A16,A15,A14,A13,A12,A11,A10,A9,A8,A7,A6,A5,A4,A3,A2,A1,A0)

#define HEXDIV128_PREAMBLE(EQ0,D,...) (CAT(HEXDIV128_P,EQ0)(U128H_0, D __VA_OPT__(,) __VA_ARGS__))
#define HEXDIV128_P0(...) HEXDIV128(__VA_ARGS__)
#define HEXDIV128_P1(...) U128H_0 _Pragma("GCC error \"Division by Zero\"")

#define HEXDIV128(R,D,A,...) HEXDIV128X(U128H_LSHIFTREP1(A,R), 0, D __VA_OPT__(,) __VA_ARGS__)
#define HEXDIV128X(R,N,D,...) HEXDIV128Y(U128H_GEQ(R,D), R, N, D __VA_OPT__(,) __VA_ARGS__)
#define HEXDIV128Y(G,R,N,...) CAT(HEXDIV128Z_,G)(R,N,__VA_ARGS__)
#define HEXDIV128Z_0(R,N,D,...) __VA_OPT__(DEFER(HEXDIV128_I)()(R,D,__VA_ARGS__),) N
#define HEXDIV128Z_1(R,N,D,...) DEFER(HEXDIV128_I2)()(U128H_SUB(R,D), _HEXDIV128_INC(N), D __VA_OPT__(,) __VA_ARGS__)
#define HEXDIV128_I() HEXDIV128
#define HEXDIV128_I2() HEXDIV128X

#define _HEXDIV128_INC(N) _HEXDIV128_INC ## N
#define _HEXDIV128_INC0 1
#define _HEXDIV128_INC1 2
#define _HEXDIV128_INC2 3
#define _HEXDIV128_INC3 4
#define _HEXDIV128_INC4 5
#define _HEXDIV128_INC5 6
#define _HEXDIV128_INC6 7
#define _HEXDIV128_INC7 8
#define _HEXDIV128_INC8 9
#define _HEXDIV128_INC9 a
#define _HEXDIV128_INCa b
#define _HEXDIV128_INCb c
#define _HEXDIV128_INCc d
#define _HEXDIV128_INCd e
#define _HEXDIV128_INCe f

#define U128H_LSHIFTREP1(R,X)\
  U128H_LSHIFTREP1_EVAL(DEFER(_U128H_LSHIFTREP1)(R, UNWRAP X))
#define _U128H_LSHIFTREP1(R,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (R,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30)
#define U128H_LSHIFTREP1_EVAL(X) X


#endif