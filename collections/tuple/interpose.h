#ifndef C23META_TUPLE_INTERPOSE
#define C23META_TUPLE_INTERPOSE

#define TUPLE_INTERPOSE(X,S) _TUPLE_INTERPOSE_C(X,S)
#define _TUPLE_INTERPOSE_C(X,S) _TUPLE_INTERPOSE_EVAL((_TUPLE_INTERPOSE(TUPLE_IS_EMPTY(X),X,S)))
#define _TUPLE_INTERPOSE_EVAL(X)  _TUPLE_INTERPOSE_EVAL1(_TUPLE_INTERPOSE_EVAL1(_TUPLE_INTERPOSE_EVAL1(_TUPLE_INTERPOSE_EVAL1(X))))
#define _TUPLE_INTERPOSE_EVAL1(X) _TUPLE_INTERPOSE_EVAL2(_TUPLE_INTERPOSE_EVAL2(_TUPLE_INTERPOSE_EVAL2(_TUPLE_INTERPOSE_EVAL2(X))))
#define _TUPLE_INTERPOSE_EVAL2(X) _TUPLE_INTERPOSE_EVAL3(_TUPLE_INTERPOSE_EVAL3(_TUPLE_INTERPOSE_EVAL3(_TUPLE_INTERPOSE_EVAL3(X))))
#define _TUPLE_INTERPOSE_EVAL3(X) X

#define _TUPLE_INTERPOSE(N,X,S) CAT(_TUPLE_INTERPOSE_X, N)(X,S)
#define _TUPLE_INTERPOSE_X1(X,S)
#define _TUPLE_INTERPOSE_X0(X,S) CAT(_TUPLE_INTERPOSE_Y,TUPLE_IS_EMPTY(TUPLE_REST(X)))(X,S)
#define _TUPLE_INTERPOSE_Y1(X,S) TUPLE_FIRST(X)
#define _TUPLE_INTERPOSE_Y0(X,S) TUPLE_FIRST(X),S,_TUPLE_INTERPOSE_Z(TUPLE_REST(X),S)
#define _TUPLE_INTERPOSE_Z(X,S) DEFER(_TUPLE_INTERPOSE_I)()(TUPLE_IS_EMPTY(X),X,S)
#define _TUPLE_INTERPOSE_I() _TUPLE_INTERPOSE

#endif