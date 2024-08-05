#ifndef C23META_U32_MIN
#define C23META_U32_MIN

#define U32_MIN(X,Y) _U32_MIN_C(X,Y)
#define _U32_MIN_C(X,Y) _U32_MIN(U32_LT(X,Y),X,Y)
#define _U32_MIN(G,X,Y) _U32_MIN_X(G,X,Y)
#define _U32_MIN_X(G,X,Y) _U32_MIN_EVAL(DEFER(_U32_MIN_Y ## G)(X,Y))
#define _U32_MIN_Y0(X,Y) Y
#define _U32_MIN_Y1(X,Y) X
#define _U32_MIN_EVAL(X) X

#endif