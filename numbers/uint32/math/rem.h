#ifndef C23META_U32_REM
#define C23META_U32_REM
#include "../cmp/geq.h"
#include "../cmp/eq.h"

#define U32_REM(X,Y) _U32_REM(X,Y)
#define _U32_REM(X,Y) _U32_REM_EVAL(DEFER(_U32_REM_X)(UNWRAP X, Y))
#define _U32_REM_EVAL(X) _U32_REM_EVAL1(_U32_REM_EVAL1(_U32_REM_EVAL1(_U32_REM_EVAL1(X))))
#define _U32_REM_EVAL1(X) _U32_REM_EVAL2(_U32_REM_EVAL2(_U32_REM_EVAL2(_U32_REM_EVAL2(X))))
#define _U32_REM_EVAL2(X) _U32_REM_EVAL3(_U32_REM_EVAL3(_U32_REM_EVAL3(_U32_REM_EVAL3(X))))
#define _U32_REM_EVAL3(X) _U32_REM_EVAL4(_U32_REM_EVAL4(_U32_REM_EVAL4(_U32_REM_EVAL4(X))))
#define _U32_REM_EVAL4(X) X

#define _U32_REM_X(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,\
                    A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,\
                    A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31,B)\
                      BITREM_PREAMBLE(U32_EQ(B,U32_0),B,\
                             A31,A30,A29,A28,A27,A26,A25,A24,A23,A22,A21,\
                             A20,A19,A18,A17,A16,A15,A14,A13,A12,A11,A10,\
                             A9,A8,A7,A6,A5,A4,A3,A2,A1,A0)\

#define BITREM_PREAMBLE(EQ0,D,...) CAT(BITREM_P,EQ0)(U32_0, D __VA_OPT__(,) __VA_ARGS__)
#define BITREM_P0(...) BITREM(__VA_ARGS__)
#define BITREM_P1(...)  U32_0 _Pragma("GCC error \"Division by Zero\"")

#define BITREM(R,D,A,...) BITREMX(U32_LSHIFTREP1(A,R), D __VA_OPT__(,) __VA_ARGS__)
#define BITREMX(R,D,...) BITREMY(U32_GEQ(R,D), R, D __VA_OPT__(,) __VA_ARGS__)
#define BITREMY(G,R,...) CAT(BITREMZ_,G)(R,__VA_ARGS__)
#define BITREMZ_0(R,D,...) BITREMU_ ## __VA_OPT__(U(R,D,__VA_ARGS__) IGNORE) (R,D)
#define BITREMZ_1(R,D,...) BITREMU_ ## __VA_OPT__(U(U32_SUB(R,D), D, __VA_ARGS__) IGNORE) (R,D)
#define BITREMU_U(R,D,...) DEFER(BITREM_I)()(R,D,__VA_ARGS__)
#define BITREMU_(R,D) BITREMV(U32_GEQ(R,D),R,D)
#define BITREMV(G,R,D) CAT(BITREMW_,G)(R,D)
#define BITREMW_0(R,D) R
#define BITREMW_1(R,D) U32_SUB(R,D)
#define BITREM_I() BITREM

#define U32_LSHIFTREP1(R,X)\
  U32_LSHIFTREP1_EVAL(DEFER(_U32_LSHIFTREP1)(R, UNWRAP X))
#define _U32_LSHIFTREP1(R,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (R,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30)
#define U32_LSHIFTREP1_EVAL(X) X


#endif