#ifndef C23META_TUPLE_NONE
#define C23META_TUPLE_NONE

#define TUPLE_NONE(P,X) _TUPLE_NONE_EVAL(_TUPLE_NONE(P,TUPLE_IS_EMPTY(X),X))
#define _TUPLE_NONE_EVAL(X)  _TUPLE_NONE_EVAL1(_TUPLE_NONE_EVAL1(_TUPLE_NONE_EVAL1(_TUPLE_NONE_EVAL1(X))))
#define _TUPLE_NONE_EVAL1(X) _TUPLE_NONE_EVAL2(_TUPLE_NONE_EVAL2(_TUPLE_NONE_EVAL2(_TUPLE_NONE_EVAL2(X))))
#define _TUPLE_NONE_EVAL2(X) _TUPLE_NONE_EVAL3(_TUPLE_NONE_EVAL3(_TUPLE_NONE_EVAL3(_TUPLE_NONE_EVAL3(X))))
#define _TUPLE_NONE_EVAL3(X) X

#define _TUPLE_NONE(P,N,X) DEFER(CAT(_TUPLE_NONE_X, N))(P,X)
#define _TUPLE_NONE_X1(P,X) 1
#define _TUPLE_NONE_X0(P,X) DEFER(CAT(_TUPLE_NONE_Y,P(TUPLE_FIRST(X))))(P,X)
#define _TUPLE_NONE_Y1(P,X) 0
#define _TUPLE_NONE_Y0(P,X) _TUPLE_NONE_Z(P,TUPLE_REST(X))
#define _TUPLE_NONE_Z(P,X) DEFER(_TUPLE_NONE_I)()(P,TUPLE_IS_EMPTY(X),X)
#define _TUPLE_NONE_I() _TUPLE_NONE

#endif