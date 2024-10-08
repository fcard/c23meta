#ifndef C23META_TUPLE_CONTAINS
#define C23META_TUPLE_CONTAINS

#define TUPLE_CONTAINS(P,X) _TUPLE_CONTAINS_C(P,X)
#define _TUPLE_CONTAINS_C(P,X) _TUPLE_CONTAINS_EVAL(_TUPLE_CONTAINS(P,TUPLE_IS_EMPTY(X),X))
#define _TUPLE_CONTAINS_EVAL(X)  _TUPLE_CONTAINS_EVAL1(_TUPLE_CONTAINS_EVAL1(_TUPLE_CONTAINS_EVAL1(_TUPLE_CONTAINS_EVAL1(X))))
#define _TUPLE_CONTAINS_EVAL1(X) _TUPLE_CONTAINS_EVAL2(_TUPLE_CONTAINS_EVAL2(_TUPLE_CONTAINS_EVAL2(_TUPLE_CONTAINS_EVAL2(X))))
#define _TUPLE_CONTAINS_EVAL2(X) _TUPLE_CONTAINS_EVAL3(_TUPLE_CONTAINS_EVAL3(_TUPLE_CONTAINS_EVAL3(_TUPLE_CONTAINS_EVAL3(X))))
#define _TUPLE_CONTAINS_EVAL3(X) X

#define _TUPLE_CONTAINS(P,N,X) CAT(_TUPLE_CONTAINS_X, N)(P,X)
#define _TUPLE_CONTAINS_X1(P,X) 0
#define _TUPLE_CONTAINS_X0(P,X) CAT(_TUPLE_CONTAINS_Y,P(TUPLE_FIRST(X)))(P,X)
#define _TUPLE_CONTAINS_Y1(P,X) 1
#define _TUPLE_CONTAINS_Y0(P,X) _TUPLE_CONTAINS_Z(P,TUPLE_REST(X))
#define _TUPLE_CONTAINS_Z(P,X) DEFER(_TUPLE_CONTAINS_I)()(P,TUPLE_IS_EMPTY(X),X)
#define _TUPLE_CONTAINS_I() _TUPLE_CONTAINS

#endif