#ifndef C23META_LIST_EQ
#define C23META_LIST_EQ

#define LIST_EQ(P,X,Y) _LIST_EQ_C(P,X,Y)
#define _LIST_EQ_C(P,X,Y) _LIST_EQ_EVAL(_LIST_EQ(P,LIST_IS_NIL(X),LIST_IS_NIL(Y),X,Y))
#define _LIST_EQ_EVAL(X)  _LIST_EQ_EVAL1(_LIST_EQ_EVAL1(_LIST_EQ_EVAL1(_LIST_EQ_EVAL1(X))))
#define _LIST_EQ_EVAL1(X) _LIST_EQ_EVAL2(_LIST_EQ_EVAL2(_LIST_EQ_EVAL2(_LIST_EQ_EVAL2(X))))
#define _LIST_EQ_EVAL2(X) _LIST_EQ_EVAL3(_LIST_EQ_EVAL3(_LIST_EQ_EVAL3(_LIST_EQ_EVAL3(X))))
#define _LIST_EQ_EVAL3(X) X

#define _LIST_EQ(P,NX,NY,X,Y) CAT(CAT(_LIST_EQ_X, NX), NY)(P,X,Y)
#define _LIST_EQ_X11(P,X,Y) 1
#define _LIST_EQ_X10(P,X,Y) 0
#define _LIST_EQ_X01(P,X,Y) 0
#define _LIST_EQ_X00(P,X,Y) CAT(_LIST_EQ_Y,P(LIST_FIRST(X),LIST_FIRST(Y)))(P,X,Y)
#define _LIST_EQ_Y1(P,X,Y) _LIST_EQ_Z(P,LIST_REST(X),LIST_REST(Y))
#define _LIST_EQ_Y0(P,X,Y) 0
#define _LIST_EQ_Z(P,X,Y) DEFER(_LIST_EQ_I)()(P,LIST_IS_NIL(X),LIST_IS_NIL(Y),X,Y)
#define _LIST_EQ_I() _LIST_EQ

#endif