#ifndef C23META_I32_MAX
#define C23META_I32_MAX

#define I32_MAX(X,Y) _I32_MAX_W(I32_LT(X,Y),X,Y)
#define _I32_MAX_W(G,X,Y) _I32_MAX_X(G,X,Y)
#define _I32_MAX_X(G,X,Y) _I32_MAX_EVAL(DEFER(_I32_MAX_Y ## G)(X,Y))
#define _I32_MAX_Y0(X,Y) X
#define _I32_MAX_Y1(X,Y) Y
#define _I32_MAX_EVAL(X) X

#endif