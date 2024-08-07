#ifndef C23META_I32H_MIN
#define C23META_I32H_MIN

#define I32H_MIN(X,Y) _I32H_MAX_C(X,Y)
#define _I32H_MIN_C(X,Y) _I32H_MIN_W(I32H_LT(X,Y),X,Y)
#define _I32H_MIN_W(G,X,Y) _I32H_MIN_X(G,X,Y)
#define _I32H_MIN_X(G,X,Y) _I32H_MIN_EVAL(DEFER(_I32H_MIN_Y ## G)(X,Y))
#define _I32H_MIN_Y0(X,Y) Y
#define _I32H_MIN_Y1(X,Y) X
#define _I32H_MIN_EVAL(X) X

#endif