#ifndef C23META_TUPLE_TAKE
#define C23META_TUPLE_TAKE

#define TUPLE_TAKE(X,N) _TUPLE_TAKE_C(X,N)
#define _TUPLE_TAKE_C(X,N) TUPLE_REST(_TUPLE_TAKE_EVAL((_TUPLE_TAKE(TUPLE_IS_EMPTY(X),X,N))))
#define _TUPLE_TAKE_EVAL(X)  _TUPLE_TAKE_EVAL1(_TUPLE_TAKE_EVAL1(_TUPLE_TAKE_EVAL1(_TUPLE_TAKE_EVAL1(X))))
#define _TUPLE_TAKE_EVAL1(X) _TUPLE_TAKE_EVAL2(_TUPLE_TAKE_EVAL2(_TUPLE_TAKE_EVAL2(_TUPLE_TAKE_EVAL2(X))))
#define _TUPLE_TAKE_EVAL2(X) _TUPLE_TAKE_EVAL3(_TUPLE_TAKE_EVAL3(_TUPLE_TAKE_EVAL3(_TUPLE_TAKE_EVAL3(X))))
#define _TUPLE_TAKE_EVAL3(X) X

#define _TUPLE_TAKE(NX,X,N) CAT(_TUPLE_TAKE_X, NX)(X,N)
#define _TUPLE_TAKE_X1(X,N) 
#define _TUPLE_TAKE_X0(X,N) CAT(_TUPLE_TAKE_Y,U32_EQ(N,U32_0))(X,N)
#define _TUPLE_TAKE_Y1(X,N) 
#define _TUPLE_TAKE_Y0(X,N) ,TUPLE_FIRST(X)_TUPLE_TAKE_Z(TUPLE_REST(X),U32_SUB(N,U32_1))
#define _TUPLE_TAKE_Z(X,N) DEFER(_TUPLE_TAKE_I)()(TUPLE_IS_EMPTY(X),X,N)
#define _TUPLE_TAKE_I() _TUPLE_TAKE

#define _TUPLE_TAKE_COMMA(N)
#endif