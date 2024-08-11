#ifndef C23META_U8H_MAX
#define C23META_U8H_MAX

#define U8H_MAX(X,Y) _U8H_MAX_C(X,Y)
#define _U8H_MAX_C(X,Y) _U8H_MAX(U8H_LT(X,Y),X,Y)
#define _U8H_MAX(G,X,Y) _U8H_MAX_X(G,X,Y)
#define _U8H_MAX_X(G,X,Y) _U8H_MAX_EVAL(DEFER(_U8H_MAX_Y ## G)(X,Y))
#define _U8H_MAX_Y0(X,Y) X
#define _U8H_MAX_Y1(X,Y) Y
#define _U8H_MAX_EVAL(X) X

#endif