#ifndef C23META_U8H_IS_EVEN
#define C23META_U8H_IS_EVEN

#define U8H_IS_EVEN(X) _U8H_IS_EVEN(X)
#define _U8H_IS_EVEN(X) _U8H_IS_EVEN_EVAL(DEFER(_U8H_IS_EVEN_X) X)
#define _U8H_IS_EVEN_EVAL(X) X

#define _U8H_IS_EVEN_X(A0,A1)\
  _U8H_IS_EVEN_Y ## A0

#define _U8H_IS_EVEN_Y0 1
#define _U8H_IS_EVEN_Y1 0
#define _U8H_IS_EVEN_Y2 1
#define _U8H_IS_EVEN_Y3 0
#define _U8H_IS_EVEN_Y4 1
#define _U8H_IS_EVEN_Y5 0
#define _U8H_IS_EVEN_Y6 1
#define _U8H_IS_EVEN_Y7 0
#define _U8H_IS_EVEN_Y8 1
#define _U8H_IS_EVEN_Y9 0
#define _U8H_IS_EVEN_Ya 1
#define _U8H_IS_EVEN_Yb 0
#define _U8H_IS_EVEN_Yc 1
#define _U8H_IS_EVEN_Yd 0
#define _U8H_IS_EVEN_Ye 1
#define _U8H_IS_EVEN_Yf 0

#endif