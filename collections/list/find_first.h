#ifndef C23META_LIST_FIND_FIRST
#define C23META_LIST_FIND_FIRST

#define LIST_FIND_FIRST(P,X) _LIST_FIND_FIRST_C(P,X)
#define _LIST_FIND_FIRST_C(P,X) _LIST_FIND_FIRST_EVAL(_LIST_FIND_FIRST(P,LIST_IS_NIL(X),X))
#define _LIST_FIND_FIRST_EVAL(X)  _LIST_FIND_FIRST_EVAL1(_LIST_FIND_FIRST_EVAL1(_LIST_FIND_FIRST_EVAL1(_LIST_FIND_FIRST_EVAL1(X))))
#define _LIST_FIND_FIRST_EVAL1(X) _LIST_FIND_FIRST_EVAL2(_LIST_FIND_FIRST_EVAL2(_LIST_FIND_FIRST_EVAL2(_LIST_FIND_FIRST_EVAL2(X))))
#define _LIST_FIND_FIRST_EVAL2(X) _LIST_FIND_FIRST_EVAL3(_LIST_FIND_FIRST_EVAL3(_LIST_FIND_FIRST_EVAL3(_LIST_FIND_FIRST_EVAL3(X))))
#define _LIST_FIND_FIRST_EVAL3(X) X

#define _LIST_FIND_FIRST(P,N,X) CAT(_LIST_FIND_FIRST_X, N)(P,X)
#define _LIST_FIND_FIRST_X1(P,X) LIST_NIL
#define _LIST_FIND_FIRST_X0(P,X) CAT(_LIST_FIND_FIRST_Y,P(LIST_FIRST(X)))(P,X)
#define _LIST_FIND_FIRST_Y1(P,X) LIST_FIRST(X)
#define _LIST_FIND_FIRST_Y0(P,X) _LIST_FIND_FIRST_Z(P,LIST_REST(X))
#define _LIST_FIND_FIRST_Z(P,X) DEFER(_LIST_FIND_FIRST_I)()(P,LIST_IS_NIL(X),X)
#define _LIST_FIND_FIRST_I() _LIST_FIND_FIRST

#endif