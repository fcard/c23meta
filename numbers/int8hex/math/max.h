#ifndef C23META_I8H_MAX
#define C23META_I8H_MAX

#define I8H_MAX(X,Y) _I8H_MAX_C(X,Y)
#define _I8H_MAX_C(X,Y) _I8H_MAX_W(I8H_LT(X,Y),X,Y)
#define _I8H_MAX_W(G,X,Y) _I8H_MAX_X(G,X,Y)
#define _I8H_MAX_X(G,X,Y) _I8H_MAX_EVAL(DEFER(_I8H_MAX_Y ## G)(X,Y))
#define _I8H_MAX_Y0(X,Y) X
#define _I8H_MAX_Y1(X,Y) Y
#define _I8H_MAX_EVAL(X) X

#endif