#ifndef C23META_TUPLE_FILTER
#define C23META_TUPLE_FILTER

#define TUPLE_FILTER(P,X) _TUPLE_FILTER_C(P,X)
#define _TUPLE_FILTER_C(P,X) TUPLE_REST(_TUPLE_FILTER_EVAL((_TUPLE_FILTER(P,TUPLE_IS_EMPTY(X),X))))
#define _TUPLE_FILTER_EVAL(X)  _TUPLE_FILTER_EVAL1(_TUPLE_FILTER_EVAL1(_TUPLE_FILTER_EVAL1(_TUPLE_FILTER_EVAL1(X))))
#define _TUPLE_FILTER_EVAL1(X) _TUPLE_FILTER_EVAL2(_TUPLE_FILTER_EVAL2(_TUPLE_FILTER_EVAL2(_TUPLE_FILTER_EVAL2(X))))
#define _TUPLE_FILTER_EVAL2(X) _TUPLE_FILTER_EVAL3(_TUPLE_FILTER_EVAL3(_TUPLE_FILTER_EVAL3(_TUPLE_FILTER_EVAL3(X))))
#define _TUPLE_FILTER_EVAL3(X) X

#define _TUPLE_FILTER(P,N,X) CAT(_TUPLE_FILTER_X, N)(P,X)
#define _TUPLE_FILTER_X1(P,X)
#define _TUPLE_FILTER_X0(P,X) CAT(_TUPLE_FILTER_Y,P(TUPLE_FIRST(X)))(P,X)
#define _TUPLE_FILTER_Y1(P,X) ,TUPLE_FIRST(X)_TUPLE_FILTER_Z(P,TUPLE_REST(X))
#define _TUPLE_FILTER_Y0(P,X) _TUPLE_FILTER_Z(P,TUPLE_REST(X))
#define _TUPLE_FILTER_Z(P,X) DEFER(_TUPLE_FILTER_I)()(P,TUPLE_IS_EMPTY(X),X)
#define _TUPLE_FILTER_I() _TUPLE_FILTER

#endif