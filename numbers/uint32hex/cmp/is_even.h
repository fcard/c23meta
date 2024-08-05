#ifndef C23META_U32H_IS_EVEN
#define C23META_U32H_IS_EVEN

#define U32H_IS_EVEN(X) _U32H_IS_EVEN(X)
#define _U32H_IS_EVEN(X) _U32H_IS_EVEN_EVAL(DEFER(_U32H_IS_EVEN_X) X)
#define _U32H_IS_EVEN_EVAL(X) X

#define _U32H_IS_EVEN_X(A0,A1,A2,A3,A4,A5,A6,A7)\
  _U32H_IS_EVEN_Y ## A0

#define _U32H_IS_EVEN_Y0 1
#define _U32H_IS_EVEN_Y1 0
#define _U32H_IS_EVEN_Y2 1
#define _U32H_IS_EVEN_Y3 0
#define _U32H_IS_EVEN_Y4 1
#define _U32H_IS_EVEN_Y5 0
#define _U32H_IS_EVEN_Y6 1
#define _U32H_IS_EVEN_Y7 0
#define _U32H_IS_EVEN_Y8 1
#define _U32H_IS_EVEN_Y9 0
#define _U32H_IS_EVEN_Ya 1
#define _U32H_IS_EVEN_Yb 0
#define _U32H_IS_EVEN_Yc 1
#define _U32H_IS_EVEN_Yd 0
#define _U32H_IS_EVEN_Ye 1
#define _U32H_IS_EVEN_Yf 0

#endif