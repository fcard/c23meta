#ifndef C23META_U8H_BITS_BITS
#define C23META_U8H_BITS_BITS

#include "leading_zeroes.h"
#include "trailing_zeroes.h"

#define U8H_BITS(X) _U8H_BITS X
#define _U8H_BITS(A0,A1)\
  (_U8H_BITS1(A0),_U8H_BITS1(A1))
#define _U8H_BITS1(HEX) _U8H_BITS1_X ## HEX
#define _U8H_BITS1_X0 0,0,0,0
#define _U8H_BITS1_X1 1,0,0,0
#define _U8H_BITS1_X2 0,1,0,0
#define _U8H_BITS1_X3 1,1,0,0
#define _U8H_BITS1_X4 0,0,1,0
#define _U8H_BITS1_X5 1,0,1,0
#define _U8H_BITS1_X6 0,1,1,0
#define _U8H_BITS1_X7 1,1,1,0
#define _U8H_BITS1_X8 0,0,0,1
#define _U8H_BITS1_X9 1,0,0,1
#define _U8H_BITS1_Xa 0,1,0,1
#define _U8H_BITS1_Xb 1,1,0,1
#define _U8H_BITS1_Xc 0,0,1,1
#define _U8H_BITS1_Xd 1,0,1,1
#define _U8H_BITS1_Xe 0,1,1,1
#define _U8H_BITS1_Xf 1,1,1,1

#define U8H_FROM_BITS(X) U8H_FROM_BITS_EVAL(_U8H_FROM_BITS X)
#define _U8H_FROM_BITS(A0,A1,A2,A3,A4,A5,A6,A7)\
  (BITS_TO_HEX(A0,A1,A2,A3),BITS_TO_HEX(A4,A5,A6,A7))
#define U8H_FROM_BITS_EVAL(X) X

#define U8H_BIT(X,N) _U8H_BIT_EVAL(_U8H_BIT ## N U8H_BITS(X))
#define _U8H_BIT_EVAL(X) X
#define _U8H_BIT1(A0,A1,A2,A3,A4,A5,A6,A7) A0
#define _U8H_BIT2(A0,A1,A2,A3,A4,A5,A6,A7) A1
#define _U8H_BIT3(A0,A1,A2,A3,A4,A5,A6,A7) A2
#define _U8H_BIT4(A0,A1,A2,A3,A4,A5,A6,A7) A3
#define _U8H_BIT5(A0,A1,A2,A3,A4,A5,A6,A7) A4
#define _U8H_BIT6(A0,A1,A2,A3,A4,A5,A6,A7) A5
#define _U8H_BIT7(A0,A1,A2,A3,A4,A5,A6,A7) A6
#define _U8H_BIT8(A0,A1,A2,A3,A4,A5,A6,A7) A7

#endif