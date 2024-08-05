#ifndef C23META_TUPLE_SPLIT_AT
#define C23META_TUPLE_SPLIT_AT

#define TUPLE_SPLIT_AT(X,N) _TUPLE_SPLIT_AT_C(X,N)
#define _TUPLE_SPLIT_AT_C(X,N) _TUPLE_SPLIT_AT_EVAL(_TUPLE_SPLIT_AT((),TUPLE_IS_EMPTY(X),X,N))
#define _TUPLE_SPLIT_AT_EVAL(X)  _TUPLE_SPLIT_AT_EVAL1(_TUPLE_SPLIT_AT_EVAL1(_TUPLE_SPLIT_AT_EVAL1(_TUPLE_SPLIT_AT_EVAL1(X))))
#define _TUPLE_SPLIT_AT_EVAL1(X) _TUPLE_SPLIT_AT_EVAL2(_TUPLE_SPLIT_AT_EVAL2(_TUPLE_SPLIT_AT_EVAL2(_TUPLE_SPLIT_AT_EVAL2(X))))
#define _TUPLE_SPLIT_AT_EVAL2(X) _TUPLE_SPLIT_AT_EVAL3(_TUPLE_SPLIT_AT_EVAL3(_TUPLE_SPLIT_AT_EVAL3(_TUPLE_SPLIT_AT_EVAL3(X))))
#define _TUPLE_SPLIT_AT_EVAL3(X) X

#define _TUPLE_SPLIT_AT(R,NX,X,N) CAT(_TUPLE_SPLIT_AT_X, NX)(R,X,N)
#define _TUPLE_SPLIT_AT_X1(R,X,N) (R,())
#define _TUPLE_SPLIT_AT_X0(R,X,N) CAT(_TUPLE_SPLIT_AT_Y,U32_EQ(N,U32_0))(R,X,N)
#define _TUPLE_SPLIT_AT_Y1(R,X,N) (R,TUPLE_REST(X))
#define _TUPLE_SPLIT_AT_Y0(R,X,N) _TUPLE_SPLIT_AT_Z(TUPLE_PUSH(R,TUPLE_FIRST(X)),TUPLE_REST(X),U32_SUB(N,U32_1))
#define _TUPLE_SPLIT_AT_Z(R,X,N) DEFER(_TUPLE_SPLIT_AT_I)()(R,TUPLE_IS_EMPTY(X),X,N)
#define _TUPLE_SPLIT_AT_I() _TUPLE_SPLIT_AT

#endif