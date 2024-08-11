#ifndef C23META_U8H_MIN
#define C23META_U8H_MIN

#define U8H_MIN(X,Y) _U8H_MIN_C(X,Y)
#define _U8H_MIN_C(X,Y) _U8H_MIN(U8H_LT(X,Y),X,Y)
#define _U8H_MIN(G,X,Y) _U8H_MIN_X(G,X,Y)
#define _U8H_MIN_X(G,X,Y) _U8H_MIN_EVAL(DEFER(_U8H_MIN_Y ## G)(X,Y))
#define _U8H_MIN_Y0(X,Y) Y
#define _U8H_MIN_Y1(X,Y) X
#define _U8H_MIN_EVAL(X) X

#endif