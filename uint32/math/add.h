#ifndef C23META_U32_ADD
#define C23META_U32_ADD
#include "../../util.h"

#define U32_ADD(X,Y) _U32_ADD(X,Y)
#define _U32_ADD(X,Y) _U32_ADD_EVAL(DEFER(_U32_ADD_X)(UNWRAP X, UNWRAP Y))
#define _U32_ADD_EVAL(X) _U32_ADD_EVAL1(_U32_ADD_EVAL1(_U32_ADD_EVAL1(_U32_ADD_EVAL1(X))))
#define _U32_ADD_EVAL1(X) _U32_ADD_EVAL2(_U32_ADD_EVAL2(_U32_ADD_EVAL2(_U32_ADD_EVAL2(X))))
#define _U32_ADD_EVAL2(X) _U32_ADD_EVAL3(_U32_ADD_EVAL3(_U32_ADD_EVAL3(_U32_ADD_EVAL3(X))))
#define _U32_ADD_EVAL3(X) X

#define _U32_ADD_X(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,\
                    A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,\
                    A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31,\
                    B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,\
                    B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,\
                    B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31)\
                    (\
                      BITADD(0,A0,B0,A1,B1,A2,B2,A3,B3,A4,B4,A5,B5,A6,B6,A7,B7,A8,B8,A9,B9,\
                             A10,B10,A11,B11,A12,B12,A13,B13,A14,B14,A15,B15,A16,B16,\
                             A17,B17,A18,B18,A19,B19,A20,B20,A21,B21,A22,B22,A23,B23,\
                             A24,B24,A25,B25,A26,B26,A27,B27,A28,B28,A29,B29,A30,B30,A31,B31)\
                    )

#define BITADD(CARRY,A,B,...) BITADD1(CARRY,A,B) __VA_OPT__(,OBSTRUCT(BITADD_I)()(BITCARRY(CARRY,A,B),__VA_ARGS__))
#define BITADD_I() BITADD
#define BITADD1(C,A,B) BITADD1_ ## C ## A ## B
#define BITADD1_000 0
#define BITADD1_001 1
#define BITADD1_010 1
#define BITADD1_011 0
#define BITADD1_100 1
#define BITADD1_101 0
#define BITADD1_110 0
#define BITADD1_111 1

#define BITCARRY(C,A,B) BITCARRY_ ## C ## A ## B
#define BITCARRY_000 0
#define BITCARRY_001 0
#define BITCARRY_010 0
#define BITCARRY_011 1
#define BITCARRY_100 0
#define BITCARRY_101 1
#define BITCARRY_110 1
#define BITCARRY_111 1

#endif