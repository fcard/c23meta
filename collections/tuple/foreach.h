#ifndef C23META_TUPLE_FOREACH
#define C23META_TUPLE_FOREACH

#define TUPLE_FOREACH(F,X) _TUPLE_FOREACH_C(F,X)
#define _TUPLE_FOREACH_C(F,X) _TUPLE_FOREACH_EVAL(DEFER(_TUPLE_FOREACH)(F COMMA_IF X UNWRAP X))
#define _TUPLE_FOREACH_EVAL(...) _TUPLE_FOREACH_EVAL1(_TUPLE_FOREACH_EVAL1(_TUPLE_FOREACH_EVAL1(_TUPLE_FOREACH_EVAL1(__VA_ARGS__))))
#define _TUPLE_FOREACH_EVAL1(...) _TUPLE_FOREACH_EVAL2(_TUPLE_FOREACH_EVAL2(_TUPLE_FOREACH_EVAL2(_TUPLE_FOREACH_EVAL2(__VA_ARGS__))))
#define _TUPLE_FOREACH_EVAL2(...) _TUPLE_FOREACH_EVAL3(_TUPLE_FOREACH_EVAL3(_TUPLE_FOREACH_EVAL3(_TUPLE_FOREACH_EVAL3(__VA_ARGS__))))
#define _TUPLE_FOREACH_EVAL3(...) __VA_ARGS__

#define _TUPLE_FOREACH(F,...) _TUPLE_FOREACH_X ## __VA_OPT__(1(F,__VA_ARGS__))
#define _TUPLE_FOREACH_X1(F,X,...) F(X) DEFER(_TUPLE_FOREACH_I)()(F __VA_OPT__(,) __VA_ARGS__)
#define _TUPLE_FOREACH_X
#define _TUPLE_FOREACH_I() _TUPLE_FOREACH

#endif