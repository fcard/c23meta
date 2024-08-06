#ifndef C23META_U128H_MAX
#define C23META_U128H_MAX

#define U128H_MAX(X,Y) _U128H_MAX_C(X,Y)
#define _U128H_MAX_C(X,Y) _U128H_MAX(U128H_LT(X,Y),X,Y)
#define _U128H_MAX(G,X,Y) _U128H_MAX_X(G,X,Y)
#define _U128H_MAX_X(G,X,Y) _U128H_MAX_EVAL(DEFER(_U128H_MAX_Y ## G)(X,Y))
#define _U128H_MAX_Y0(X,Y) X
#define _U128H_MAX_Y1(X,Y) Y
#define _U128H_MAX_EVAL(X) X

#endif