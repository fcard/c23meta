#ifndef C23META_LIST_REMOVE
#define C23META_LIST_REMOVE

#define LIST_REMOVE(P,X) _LIST_REMOVE_C(P,X)
#define _LIST_REMOVE_C(P,X) _LIST_REMOVE_EVAL(_LIST_REMOVE(P,LIST_IS_NIL(X),X))
#define _LIST_REMOVE_EVAL(X)  _LIST_REMOVE_EVAL1(_LIST_REMOVE_EVAL1(_LIST_REMOVE_EVAL1(_LIST_REMOVE_EVAL1(X))))
#define _LIST_REMOVE_EVAL1(X) _LIST_REMOVE_EVAL2(_LIST_REMOVE_EVAL2(_LIST_REMOVE_EVAL2(_LIST_REMOVE_EVAL2(X))))
#define _LIST_REMOVE_EVAL2(X) _LIST_REMOVE_EVAL3(_LIST_REMOVE_EVAL3(_LIST_REMOVE_EVAL3(_LIST_REMOVE_EVAL3(X))))
#define _LIST_REMOVE_EVAL3(X) X

#define _LIST_REMOVE(P,N,X) CAT(_LIST_REMOVE_X, N)(P,X)
#define _LIST_REMOVE_X1(P,X) LIST_NIL
#define _LIST_REMOVE_X0(P,X) CAT(_LIST_REMOVE_Y,P(LIST_FIRST(X)))(P,X)
#define _LIST_REMOVE_Y0(P,X) (LIST_FIRST(X), _LIST_REMOVE_Z(P,LIST_REST(X)))
#define _LIST_REMOVE_Y1(P,X) _LIST_REMOVE_Z(P,LIST_REST(X))
#define _LIST_REMOVE_Z(P,X) DEFER(_LIST_REMOVE_I)()(P,LIST_IS_NIL(X),X)
#define _LIST_REMOVE_I() _LIST_REMOVE

#endif