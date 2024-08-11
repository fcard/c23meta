#ifndef C23META_I32_MIN
#define C23META_I32_MIN

#define I32_MIN(X,Y) _I32_MIN_C(X,Y)
#define _I32_MIN_C(X,Y) _I32_MIN_W(I32_LT(X,Y),X,Y)
#define _I32_MIN_W(G,X,Y) _I32_MIN_X(G,X,Y)
#define _I32_MIN_X(G,X,Y) _I32_MIN_EVAL(DEFER(_I32_MIN_Y ## G)(X,Y))
#define _I32_MIN_Y0(X,Y) Y
#define _I32_MIN_Y1(X,Y) X
#define _I32_MIN_EVAL(X) X

#endif