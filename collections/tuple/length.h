#ifndef C23META_TUPLE_LENGTH
#define C23META_TUPLE_LENGTH

#define TUPLE_LENGTH(X) _TUPLE_LENGTH_C(X)
#define _TUPLE_LENGTH_C(X) _TUPLE_LENGTH_EVAL(DEFER(_TUPLE_LENGTH) (U32_0 COMMA_IF X UNWRAP X))
#define _TUPLE_LENGTH_EVAL(X) _TUPLE_LENGTH_EVAL1(_TUPLE_LENGTH_EVAL1(_TUPLE_LENGTH_EVAL1(_TUPLE_LENGTH_EVAL1(X))))
#define _TUPLE_LENGTH_EVAL1(X) _TUPLE_LENGTH_EVAL2(_TUPLE_LENGTH_EVAL2(_TUPLE_LENGTH_EVAL2(_TUPLE_LENGTH_EVAL2(X))))
#define _TUPLE_LENGTH_EVAL2(X) _TUPLE_LENGTH_EVAL3(_TUPLE_LENGTH_EVAL3(_TUPLE_LENGTH_EVAL3(_TUPLE_LENGTH_EVAL3(X))))
#define _TUPLE_LENGTH_EVAL3(X) X

#define _TUPLE_LENGTH(N,...) _TUPLE_LENGTH_X ## __VA_OPT__(1(N,__VA_ARGS__) IGNORE) (N)
#define _TUPLE_LENGTH_X1(N,X,...) DEFER(_TUPLE_LENGTH_I)()(U32_ADD(N,U32_1) __VA_OPT__(,) __VA_ARGS__)
#define _TUPLE_LENGTH_X(N) N
#define _TUPLE_LENGTH_I() _TUPLE_LENGTH

#endif