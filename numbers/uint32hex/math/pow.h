#ifndef C23META_U32H_POW
#define C23META_U32H_POW

#define U32H_POW(X,Y) _U32H_POW(X,Y)
#define _U32H_POW(X,Y) _U32H_POW_EVAL(_U32H_POW_PREAMBLE(U32H_EQ(Y, U32H_0), X, Y))
#define _U32H_POW_EVAL(X) _U32H_POW_EVAL1(_U32H_POW_EVAL1(_U32H_POW_EVAL1(_U32H_POW_EVAL1(X))))
#define _U32H_POW_EVAL1(X) _U32H_POW_EVAL2(_U32H_POW_EVAL2(_U32H_POW_EVAL2(_U32H_POW_EVAL2(X))))
#define _U32H_POW_EVAL2(X) _U32H_POW_EVAL3(_U32H_POW_EVAL3(_U32H_POW_EVAL3(_U32H_POW_EVAL3(X))))
#define _U32H_POW_EVAL3(X) _U32H_POW_EVAL4(_U32H_POW_EVAL4(_U32H_POW_EVAL4(_U32H_POW_EVAL4(X))))
#define _U32H_POW_EVAL4(X) X

#define _U32H_POW_PREAMBLE(G,X,N) CAT(_U32H_POW_P,G)(X,N)
#define _U32H_POW_P0(X,N) _U32H_POW_X(X,U32H_1,N)
#define _U32H_POW_P1(X,N) U32H_1

#define _U32H_POW_X(X,Y,N) _U32H_POW_Y(U32H_GT(N,U32H_1),X,Y,N)
#define _U32H_POW_Y(G,X,Y,N) CAT(_U32H_POW_Z,G)(X,Y,N)
#define _U32H_POW_Z0(X,Y,N) U32H_MUL(X,Y)
#define _U32H_POW_Z1(X,Y,N) _U32H_POW_V(U32H_IS_ODD(N),X,Y,N)
#define _U32H_POW_V(G,X,Y,N) CAT(_U32H_POW_W,G)(X,Y,N)
#define _U32H_POW_W0(X,Y,N) DEFER(_U32H_POW_I)()(U32H_MUL(X,X),Y,U32H_RSH1(N))
#define _U32H_POW_W1(X,Y,N) DEFER(_U32H_POW_I)()(U32H_MUL(X,X),U32H_MUL(X,Y),U32H_RSH1(U32H_SUB(N,U32H_1)))
#define _U32H_POW_I() _U32H_POW_X

#endif