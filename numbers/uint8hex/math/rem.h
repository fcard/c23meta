#ifndef C23META_U8H_REM
#define C23META_U8H_REM
#include "../cmp/geq.h"
#include "../cmp/eq.h"

#define U8H_REM(X,Y) _U8H_REM(X,Y)
#define _U8H_REM(X,Y) _U8H_REM_EVAL(DEFER(_U8H_REM_X)(UNWRAP X, Y))
#define _U8H_REM_EVAL(X) _U8H_REM_EVAL1(_U8H_REM_EVAL1(_U8H_REM_EVAL1(_U8H_REM_EVAL1(X))))
#define _U8H_REM_EVAL1(X) _U8H_REM_EVAL2(_U8H_REM_EVAL2(_U8H_REM_EVAL2(_U8H_REM_EVAL2(X))))
#define _U8H_REM_EVAL2(X) _U8H_REM_EVAL3(_U8H_REM_EVAL3(_U8H_REM_EVAL3(_U8H_REM_EVAL3(X))))
#define _U8H_REM_EVAL3(X) _U8H_REM_EVAL4(_U8H_REM_EVAL4(_U8H_REM_EVAL4(_U8H_REM_EVAL4(X))))
#define _U8H_REM_EVAL4(X) X

#define _U8H_REM_X(A0,A1,B)\
  HEXREM8_PREAMBLE(U8H_EQ(B,U8H_0),B,A1,A0)

#define HEXREM8_PREAMBLE(EQ0,D,...) CAT(HEXREM8_P,EQ0)(U8H_0, D __VA_OPT__(,) __VA_ARGS__)
#define HEXREM8_P0(...) HEXREM8(__VA_ARGS__)
#define HEXREM8_P1(...)  U8H_0 _Pragma("GCC error \"Division by Zero\"")

#define HEXREM8(R,D,A,...) HEXREM8X(U8H_LSHIFTREP1(A,R), D __VA_OPT__(,) __VA_ARGS__)
#define HEXREM8X(R,D,...) HEXREM8Y(U8H_GEQ(R,D), R, D __VA_OPT__(,) __VA_ARGS__)
#define HEXREM8Y(G,R,...) CAT(HEXREM8Z_,G)(R,__VA_ARGS__)
#define HEXREM8Z_0(R,D,...) HEXREM8U_ ## __VA_OPT__(U(R,D,__VA_ARGS__) IGNORE) (R,D)
#define HEXREM8Z_1(R,D,...) DEFER(HEXREM8_I2)()(U8H_SUB(R,D), D __VA_OPT__(,) __VA_ARGS__)
#define HEXREM8U_U(R,D,...) DEFER(HEXREM8_I)()(R,D,__VA_ARGS__)
#define HEXREM8U_(R,D) HEXREM8V(U8H_GEQ(R,D),R,D)
#define HEXREM8V(G,R,D) CAT(HEXREM8W_,G)(R,D)
#define HEXREM8W_0(R,D) R
#define HEXREM8W_1(R,D) DEFER(HEXREM8_I3)()(U8H_SUB(R,D),D)
#define HEXREM8_I() HEXREM8
#define HEXREM8_I2() HEXREM8X
#define HEXREM8_I3() HEXREM8U_

#endif