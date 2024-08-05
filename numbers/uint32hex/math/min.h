#ifndef C23META_U32H_MAX
#define C23META_U32H_MAX

#define U32H_MAX(X,Y) _U32H_MAX(U32H_LT(X,Y),X,Y)
#define _U32H_MAX(G,X,Y) _U32H_MAX_X(G,X,Y)
#define _U32H_MAX_X(G,X,Y) _U32H_MAX_EVAL(DEFER(_U32H_MAX_Y ## G)(X,Y))
#define _U32H_MAX_Y0(X,Y) Y
#define _U32H_MAX_Y1(X,Y) X
#define _U32H_MAX_EVAL(X) X

#endif