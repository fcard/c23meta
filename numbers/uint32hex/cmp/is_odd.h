#ifndef C23META_U32H_IS_ODD
#define C23META_U32H_IS_ODD

#define U32H_IS_ODD(X) _U32H_IS_ODD(X)
#define _U32H_IS_ODD(X) _U32H_IS_ODD_EVAL(DEFER(_U32H_IS_ODD_X) X)
#define _U32H_IS_ODD_EVAL(X) X

#define _U32H_IS_ODD_X(A0,A1,A2,A3,A4,A5,A6,A7)\
  _U32H_IS_ODD_Y ## A0

#define _U32H_IS_ODD_Y0 0
#define _U32H_IS_ODD_Y1 1
#define _U32H_IS_ODD_Y2 0
#define _U32H_IS_ODD_Y3 1
#define _U32H_IS_ODD_Y4 0
#define _U32H_IS_ODD_Y5 1
#define _U32H_IS_ODD_Y6 0
#define _U32H_IS_ODD_Y7 1
#define _U32H_IS_ODD_Y8 0
#define _U32H_IS_ODD_Y9 1
#define _U32H_IS_ODD_Ya 0
#define _U32H_IS_ODD_Yb 1
#define _U32H_IS_ODD_Yc 0
#define _U32H_IS_ODD_Yd 1
#define _U32H_IS_ODD_Ye 0
#define _U32H_IS_ODD_Yf 1

#endif