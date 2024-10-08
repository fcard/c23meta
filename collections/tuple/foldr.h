#ifndef C23META_TUPLE_FOLDR
#define C23META_TUPLE_FOLDR

#define TUPLE_FOLDR(F,X,...) _TUPLE_FOLDR_C(F,X __VA_OPT__(,) __VA_ARGS__)
#define _TUPLE_FOLDR_C(F,X,...) _TUPLE_FOLDR_EVAL(_TUPLE_FOLDR(F,TUPLE_IS_EMPTY(X),_TUPLE_FOLDR_P ## __VA_OPT__(1)(X),_TUPLE_FOLDR_INIT ## __VA_OPT__(1(__VA_ARGS__) IGNORE) (X)))
#define _TUPLE_FOLDR_EVAL(X)  _TUPLE_FOLDR_EVAL1(_TUPLE_FOLDR_EVAL1(_TUPLE_FOLDR_EVAL1(_TUPLE_FOLDR_EVAL1(X))))
#define _TUPLE_FOLDR_EVAL1(X) _TUPLE_FOLDR_EVAL2(_TUPLE_FOLDR_EVAL2(_TUPLE_FOLDR_EVAL2(_TUPLE_FOLDR_EVAL2(X))))
#define _TUPLE_FOLDR_EVAL2(X) _TUPLE_FOLDR_EVAL3(_TUPLE_FOLDR_EVAL3(_TUPLE_FOLDR_EVAL3(_TUPLE_FOLDR_EVAL3(X))))
#define _TUPLE_FOLDR_EVAL3(X) X

#define _TUPLE_FOLDR_P(X) TUPLE_REST(X)
#define _TUPLE_FOLDR_P1(X) X

#define _TUPLE_FOLDR_INIT(X) TUPLE_FIRST(X)
#define _TUPLE_FOLDR_INIT1(I) I

#define _TUPLE_FOLDR(F,N,X,R) CAT(_TUPLE_FOLDR_X, N)(F,X,R)
#define _TUPLE_FOLDR_X1(F,X,R) R
#define _TUPLE_FOLDR_X0(F,X,R) _TUPLE_FOLDR_Y(F,TUPLE_REST(X),F(TUPLE_FIRST(X),R))
#define _TUPLE_FOLDR_Y(F,X,R) DEFER(_TUPLE_FOLDR_I)()(F,TUPLE_IS_EMPTY(X),X,R)
#define _TUPLE_FOLDR_I() _TUPLE_FOLDR

#endif