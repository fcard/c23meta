#ifndef C23META_U8H_MUL
#define C23META_U8H_MUL
#include "add.h"
#include "../bits/bits.h"

#define U8H_MUL(X,Y) _U8H_MUL(X,Y)
#define _U8H_MUL(X,Y) _U8H_MUL_EVAL(DEFER(_U8H_MUL_X)(UNWRAP X, UNWRAP Y))
#define _U8H_MUL_EVAL(X) X

#define _U8H_MUL_X(A0,A1,B0,B1)\
                    _U8H_MUL_Y(\
                      _U8H_MUL_DIGIT(A0,B0,B1),\
                      _U8H_MUL_DIGIT(A1,B0,B1)\
                    )

#define _U8H_MUL_Y(P0,P1) U8H_ADD(P0,_U8H_LSHIFTN(P1,1))

#define _U8H_LSHIFTN(X,N) _U8H_LSHIFTN_EVAL(DEFER(_U8H_LSHIFTN ## N) X)
#define _U8H_LSHIFTN_EVAL(X) X
#define _U8H_LSHIFTN1(A0,A1)\
  (0,A0)
#define _U8H_LSHIFTN2(A0,A1)\
  (0,0)

#define _U8H_MUL_DIGIT(...) _U8H_MUL_DIGIT_EVAL(DEFER(_U8H_MUL_DIGIT_X)(__VA_ARGS__))
#define _U8H_MUL_DIGIT_EVAL(X) _U8H_MUL_DIGIT_EVAL1(_U8H_MUL_DIGIT_EVAL1(_U8H_MUL_DIGIT_EVAL1(_U8H_MUL_DIGIT_EVAL1(X))))
#define _U8H_MUL_DIGIT_EVAL1(X) _U8H_MUL_DIGIT_EVAL2(_U8H_MUL_DIGIT_EVAL2(X))
#define _U8H_MUL_DIGIT_EVAL2(X) X

#define _U8H_MUL_DIGIT_X(A,B0,B1)\
  (HEXMUL(0,A,B0,B1))

#endif