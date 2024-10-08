#ifndef C23META_TUPLE_MAP
#define C23META_TUPLE_MAP

#define TUPLE_MAP(F,X) _TUPLE_MAP_C(F,X)
#define _TUPLE_MAP_C(F,X) _TUPLE_MAP_EVAL((DEFER(_TUPLE_MAP)(F COMMA_IF X UNWRAP X)))
#define _TUPLE_MAP_EVAL(X) _TUPLE_MAP_EVAL1(_TUPLE_MAP_EVAL1(_TUPLE_MAP_EVAL1(_TUPLE_MAP_EVAL1(X))))
#define _TUPLE_MAP_EVAL1(X) _TUPLE_MAP_EVAL2(_TUPLE_MAP_EVAL2(_TUPLE_MAP_EVAL2(_TUPLE_MAP_EVAL2(X))))
#define _TUPLE_MAP_EVAL2(X) _TUPLE_MAP_EVAL3(_TUPLE_MAP_EVAL3(_TUPLE_MAP_EVAL3(_TUPLE_MAP_EVAL3(X))))
#define _TUPLE_MAP_EVAL3(X) X

#define _TUPLE_MAP(F,...) _TUPLE_MAP_X ## __VA_OPT__(1(F,__VA_ARGS__))
#define _TUPLE_MAP_X1(F,X,...) F(X)__VA_OPT__(,)DEFER(_TUPLE_MAP_I)()(F __VA_OPT__(,) __VA_ARGS__)
#define _TUPLE_MAP_X
#define _TUPLE_MAP_I() _TUPLE_MAP

#endif