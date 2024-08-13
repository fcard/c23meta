#ifndef C23META_I8H_MIN
#define C23META_I8H_MIN

#define I8H_MIN(X,Y) _I8H_MIN_C(X,Y)
#define _I8H_MIN_C(X,Y) _I8H_MIN_W(I8H_LT(X,Y),X,Y)
#define _I8H_MIN_W(G,X,Y) _I8H_MIN_X(G,X,Y)
#define _I8H_MIN_X(G,X,Y) _I8H_MIN_EVAL(DEFER(_I8H_MIN_Y ## G)(X,Y))
#define _I8H_MIN_Y0(X,Y) Y
#define _I8H_MIN_Y1(X,Y) X
#define _I8H_MIN_EVAL(X) X

#endif