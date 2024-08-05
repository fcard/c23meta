#ifndef C23META_U32H_MUL
#define C23META_U32H_MUL
#include "add.h"
#include "../bits/bits.h"

#define U32H_MUL(X,Y) _U32H_MUL(X,Y)
#define _U32H_MUL(X,Y) _U32H_MUL_EVAL(DEFER(_U32H_MUL_X)(UNWRAP X, UNWRAP Y))
#define _U32H_MUL_EVAL(X) X

#define _U32H_MUL_X(A0,A1,A2,A3,A4,A5,A6,A7,\
                   B0,B1,B2,B3,B4,B5,B6,B7)\
                    _U32H_MUL_Y(\
                      _U32H_MUL_DIGIT(A0,B0,B1,B2,B3,B4,B5,B6,B7),\
                      _U32H_MUL_DIGIT(A1,B0,B1,B2,B3,B4,B5,B6,B7),\
                      _U32H_MUL_DIGIT(A2,B0,B1,B2,B3,B4,B5,B6,B7),\
                      _U32H_MUL_DIGIT(A3,B0,B1,B2,B3,B4,B5,B6,B7),\
                      _U32H_MUL_DIGIT(A4,B0,B1,B2,B3,B4,B5,B6,B7),\
                      _U32H_MUL_DIGIT(A5,B0,B1,B2,B3,B4,B5,B6,B7),\
                      _U32H_MUL_DIGIT(A6,B0,B1,B2,B3,B4,B5,B6,B7),\
                      _U32H_MUL_DIGIT(A7,B0,B1,B2,B3,B4,B5,B6,B7)\
                    )

#define _U32H_MUL_Y(P0,P1,P2,P3,P4,P5,P6,P7)\
                      U32H_ADD(P0,\
                        U32H_ADD(_U32H_LSHIFTN(P1,1),\
                          U32H_ADD(_U32H_LSHIFTN(P2,2),\
                            U32H_ADD(_U32H_LSHIFTN(P3,3),\
                              U32H_ADD(_U32H_LSHIFTN(P4,4),\
                                U32H_ADD(_U32H_LSHIFTN(P5,5),\
                                  U32H_ADD(_U32H_LSHIFTN(P6,6),\
                                    _U32H_LSHIFTN(P7,7))))))))

#define _U32H_LSHIFTN(X,N) _U32H_LSHIFTN_EVAL(DEFER(_U32H_LSHIFTN ## N) X)
#define _U32H_LSHIFTN_EVAL(X) X
#define _U32H_LSHIFTN1(A0,A1,A2,A3,A4,A5,A6,A7)\
  (0,A0,A1,A2,A3,A4,A5,A6)
#define _U32H_LSHIFTN2(A0,A1,A2,A3,A4,A5,A6,A7)\
  (0,0,A0,A1,A2,A3,A4,A5)
#define _U32H_LSHIFTN3(A0,A1,A2,A3,A4,A5,A6,A7)\
  (0,0,0,A0,A1,A2,A3,A4)
#define _U32H_LSHIFTN4(A0,A1,A2,A3,A4,A5,A6,A7)\
  (0,0,0,0,A0,A1,A2,A3)
#define _U32H_LSHIFTN5(A0,A1,A2,A3,A4,A5,A6,A7)\
  (0,0,0,0,0,A0,A1,A2)
#define _U32H_LSHIFTN6(A0,A1,A2,A3,A4,A5,A6,A7)\
  (0,0,0,0,0,0,A0,A1)
#define _U32H_LSHIFTN7(A0,A1,A2,A3,A4,A5,A6,A7)\
  (0,0,0,0,0,0,0,A0)

#define _U32H_MUL_DIGIT(...) _U32H_MUL_DIGIT_EVAL(DEFER(_U32H_MUL_DIGIT_X)(__VA_ARGS__))
#define _U32H_MUL_DIGIT_EVAL(X) _U32H_MUL_DIGIT_EVAL1(_U32H_MUL_DIGIT_EVAL1(_U32H_MUL_DIGIT_EVAL1(_U32H_MUL_DIGIT_EVAL1(X))))
#define _U32H_MUL_DIGIT_EVAL1(X) _U32H_MUL_DIGIT_EVAL2(_U32H_MUL_DIGIT_EVAL2(X))
#define _U32H_MUL_DIGIT_EVAL2(X) X

#define _U32H_MUL_DIGIT_X(A,B0,B1,B2,B3,B4,B5,B6,B7)\
  (HEXMUL(0,A,B0,B1,B2,B3,B4,B5,B6,B7))

#endif