#ifndef C23META_U32_LOG2
#define C23META_U32_LOG2
#include "../../util.h"

#define U32_LOG2(X) _U32_LOG2(X)
#define _U32_LOG2(X) _U32_LOG2_EVAL(DEFER(_U32_LOG2_X) X)
#define _U32_LOG2_EVAL(X) _U32_LOG2_EVAL1(_U32_LOG2_EVAL1(_U32_LOG2_EVAL1(_U32_LOG2_EVAL1(X))))
#define _U32_LOG2_EVAL1(X) _U32_LOG2_EVAL2(_U32_LOG2_EVAL2(_U32_LOG2_EVAL2(_U32_LOG2_EVAL2(X))))
#define _U32_LOG2_EVAL2(X) _U32_LOG2_EVAL3(_U32_LOG2_EVAL3(_U32_LOG2_EVAL3(_U32_LOG2_EVAL3(X))))
#define _U32_LOG2_EVAL3(X) X

#define _U32_LOG2_X(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,\
                    A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,\
                    A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
                      BITLOG2(31,\
                             A31,A30,A29,A28,A27,A26,A25,\
                             A24,A23,A22,A21,A20,A19,A18,\
                             A17,A16,A15,A14,A13,A12,A11,\
                             A10,A9,A8,A7,A6,A5,A4,A3,A2,\
                             A1,A0)\

#define BITLOG2(N,...) BITLOG2X_ ## __VA_OPT__(X(N,__VA_ARGS__) IGNORE) (N)
#define BITLOG2X_(N) CAT(U32_, N)
#define BITLOG2X_X(N,A,...) DEFER(BITLOG2Y_ ## A)(N,__VA_ARGS__)
#define BITLOG2Y_0(N,...) BITLOG2Z_ ## __VA_OPT__(Z(OBSTRUCT(BITLOG2_I)()(BITLOG2_DEC(N),__VA_ARGS__)) IGNORE) (0)
#define BITLOG2Y_1(N,...) CAT(U32_, N)
#define BITLOG2Z_Z(X) X
#define BITLOG2Z_(X) X
#define BITLOG2_I() BITLOG2

#define BITLOG2_DEC(N) BITLOG2_DEC ## N
#define BITLOG2_DEC1 0
#define BITLOG2_DEC2 1
#define BITLOG2_DEC3 2
#define BITLOG2_DEC4 3
#define BITLOG2_DEC5 4
#define BITLOG2_DEC6 5
#define BITLOG2_DEC7 6
#define BITLOG2_DEC8 7
#define BITLOG2_DEC9 8
#define BITLOG2_DEC10 9
#define BITLOG2_DEC11 10
#define BITLOG2_DEC12 11
#define BITLOG2_DEC13 12
#define BITLOG2_DEC14 13
#define BITLOG2_DEC15 14
#define BITLOG2_DEC16 15
#define BITLOG2_DEC17 16
#define BITLOG2_DEC18 17
#define BITLOG2_DEC19 18
#define BITLOG2_DEC20 19
#define BITLOG2_DEC21 20
#define BITLOG2_DEC22 21
#define BITLOG2_DEC23 22
#define BITLOG2_DEC24 23
#define BITLOG2_DEC25 24
#define BITLOG2_DEC26 25
#define BITLOG2_DEC27 26
#define BITLOG2_DEC28 27
#define BITLOG2_DEC29 28
#define BITLOG2_DEC30 29
#define BITLOG2_DEC31 30

#endif