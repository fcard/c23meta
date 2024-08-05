#ifndef C23META_LIST_SPLIT_ALL
#define C23META_LIST_SPLIT_ALL

#define LIST_SPLIT_ALL(P,X) _LIST_SPLIT_ALL_C(P,X)
#define _LIST_SPLIT_ALL_C(P,X) _LIST_SPLIT_ALL_EVAL(_LIST_SPLIT_ALL(P,LIST_NIL,LIST_NIL,LIST_IS_NIL(X),X))
#define _LIST_SPLIT_ALL_EVAL(X)  _LIST_SPLIT_ALL_EVAL1(_LIST_SPLIT_ALL_EVAL1(_LIST_SPLIT_ALL_EVAL1(_LIST_SPLIT_ALL_EVAL1(X))))
#define _LIST_SPLIT_ALL_EVAL1(X) _LIST_SPLIT_ALL_EVAL2(_LIST_SPLIT_ALL_EVAL2(_LIST_SPLIT_ALL_EVAL2(_LIST_SPLIT_ALL_EVAL2(X))))
#define _LIST_SPLIT_ALL_EVAL2(X) _LIST_SPLIT_ALL_EVAL3(_LIST_SPLIT_ALL_EVAL3(_LIST_SPLIT_ALL_EVAL3(_LIST_SPLIT_ALL_EVAL3(X))))
#define _LIST_SPLIT_ALL_EVAL3(X) X

#define _LIST_SPLIT_ALL(P,R,RF,N,X) CAT(_LIST_SPLIT_ALL_X, N)(P,R,RF,X)
#define _LIST_SPLIT_ALL_X1(P,R,RF,X) LIST_REVERSE((LIST_REVERSE(R),RF))
#define _LIST_SPLIT_ALL_X0(P,R,RF,X) CAT(_LIST_SPLIT_ALL_Y,P(LIST_FIRST(X)))(P,R,RF,X)
#define _LIST_SPLIT_ALL_Y1(P,R,RF,X) _LIST_SPLIT_ALL_Z(P,LIST_NIL,(LIST_REVERSE(R),RF),LIST_REST(X))
#define _LIST_SPLIT_ALL_Y0(P,R,RF,X) _LIST_SPLIT_ALL_Z(P,(LIST_FIRST(X),R),RF,LIST_REST(X))
#define _LIST_SPLIT_ALL_Z(P,R,RF,X) DEFER(_LIST_SPLIT_ALL_I)()(P,R,RF,LIST_IS_NIL(X),X)
#define _LIST_SPLIT_ALL_I() _LIST_SPLIT_ALL

#endif