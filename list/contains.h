#ifndef C23META_LIST_CONTAINS
#define C23META_LIST_CONTAINS

#define LIST_CONTAINS(P,X) _LIST_CONTAINS_EVAL(_LIST_CONTAINS(P,LIST_IS_NIL(X),X))
#define _LIST_CONTAINS_EVAL(X)  _LIST_CONTAINS_EVAL1(_LIST_CONTAINS_EVAL1(_LIST_CONTAINS_EVAL1(_LIST_CONTAINS_EVAL1(X))))
#define _LIST_CONTAINS_EVAL1(X) _LIST_CONTAINS_EVAL2(_LIST_CONTAINS_EVAL2(_LIST_CONTAINS_EVAL2(_LIST_CONTAINS_EVAL2(X))))
#define _LIST_CONTAINS_EVAL2(X) _LIST_CONTAINS_EVAL3(_LIST_CONTAINS_EVAL3(_LIST_CONTAINS_EVAL3(_LIST_CONTAINS_EVAL3(X))))
#define _LIST_CONTAINS_EVAL3(X) X

#define _LIST_CONTAINS(P,N,X) DEFER(CAT(_LIST_CONTAINS_X, N))(P,X)
#define _LIST_CONTAINS_X1(P,X) 0
#define _LIST_CONTAINS_X0(P,X) DEFER(CAT(_LIST_CONTAINS_Y,P(LIST_FIRST(X))))(P,X)
#define _LIST_CONTAINS_Y1(P,X) 1
#define _LIST_CONTAINS_Y0(P,X) _LIST_CONTAINS_Z(P,LIST_REST(X))
#define _LIST_CONTAINS_Z(P,X) DEFER(_LIST_CONTAINS_I)()(P,LIST_IS_NIL(X),X)
#define _LIST_CONTAINS_I() _LIST_CONTAINS

#endif