#ifndef C23META_U64H_MUL32
#define C23META_U64H_MUL32
#include "add.h"
#include "../../uint32/math/bits.h"

#define U64H_MUL32(X,Y) _U64H_MUL32(X,Y)
#define _U64H_MUL32(X,Y) _U64H_MUL32_EVAL(DEFER(_U64H_MUL32_X)(UNWRAP X, UNWRAP Y))
#define _U64H_MUL32_EVAL(X) X

#define _U64H_MUL32_X(A0,A1,A2,A3,A4,A5,A6,A7,\
                      B0,B1,B2,B3,B4,B5,B6,B7)\
                    _U64H_MUL32_Y(\
                      _U32H_MUL_DIGIT(A0,B0,B1,B2,B3,B4,B5,B6,B7),\
                      _U32H_MUL_DIGIT(A1,B0,B1,B2,B3,B4,B5,B6,B7),\
                      _U32H_MUL_DIGIT(A2,B0,B1,B2,B3,B4,B5,B6,B7),\
                      _U32H_MUL_DIGIT(A3,B0,B1,B2,B3,B4,B5,B6,B7),\
                      _U32H_MUL_DIGIT(A4,B0,B1,B2,B3,B4,B5,B6,B7),\
                      _U32H_MUL_DIGIT(A5,B0,B1,B2,B3,B4,B5,B6,B7),\
                      _U32H_MUL_DIGIT(A6,B0,B1,B2,B3,B4,B5,B6,B7),\
                      _U32H_MUL_DIGIT(A7,B0,B1,B2,B3,B4,B5,B6,B7)\
                    )

#define _U64H_MUL32_Y(P0,P1,P2,P3,P4,P5,P6,P7)\
                      U64H_ADD(_U64H_LSHIFTN32(P0,0),\
                        U64H_ADD(_U64H_LSHIFTN32(P1,1),\
                          U64H_ADD(_U64H_LSHIFTN32(P2,2),\
                            U64H_ADD(_U64H_LSHIFTN32(P3,3),\
                              U64H_ADD(_U64H_LSHIFTN32(P4,4),\
                                U64H_ADD(_U64H_LSHIFTN32(P5,5),\
                                  U64H_ADD(_U64H_LSHIFTN32(P6,6),\
                                    _U64H_LSHIFTN32(P7,7))))))))

#define _U64H_LSHIFTN32(X,N) _U64H_LSHIFTN32_EVAL(DEFER(_U64H_LSHIFTN32_ ## N) X)
#define _U64H_LSHIFTN32_EVAL(X) X
#define _U64H_LSHIFTN32_0(A0,A1,A2,A3,A4,A5,A6,A7)\
  (A0,A1,A2,A3,A4,A5,A6,A7,0,0,0,0,0,0,0,0)
#define _U64H_LSHIFTN32_1(A0,A1,A2,A3,A4,A5,A6,A7)\
  (0,A0,A1,A2,A3,A4,A5,A6,A7,0,0,0,0,0,0,0)
#define _U64H_LSHIFTN32_2(A0,A1,A2,A3,A4,A5,A6,A7)\
  (0,0,A0,A1,A2,A3,A4,A5,A6,A7,0,0,0,0,0,0)
#define _U64H_LSHIFTN32_3(A0,A1,A2,A3,A4,A5,A6,A7)\
  (0,0,0,A0,A1,A2,A3,A4,A5,A6,A7,0,0,0,0,0)
#define _U64H_LSHIFTN32_4(A0,A1,A2,A3,A4,A5,A6,A7)\
  (0,0,0,0,A0,A1,A2,A3,A4,A5,A6,A7,0,0,0,0)
#define _U64H_LSHIFTN32_5(A0,A1,A2,A3,A4,A5,A6,A7)\
  (0,0,0,0,0,A0,A1,A2,A3,A4,A5,A6,A7,0,0,0)
#define _U64H_LSHIFTN32_6(A0,A1,A2,A3,A4,A5,A6,A7)\
  (0,0,0,0,0,0,A0,A1,A2,A3,A4,A5,A6,A7,0,0)
#define _U64H_LSHIFTN32_7(A0,A1,A2,A3,A4,A5,A6,A7)\
  (0,0,0,0,0,0,0,A0,A1,A2,A3,A4,A5,A6,A7,0)

#endif