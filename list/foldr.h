#ifndef C23META_LIST_FOLDR
#define C23META_LIST_FOLDR

#define LIST_FOLDR(F,X,...) _LIST_FOLDR_EVAL(_LIST_FOLDR(F,LIST_IS_NIL(X),_LIST_FOLDR_P ## __VA_OPT__(1)(X),_LIST_FOLDR_INIT ## __VA_OPT__(1(__VA_ARGS__) IGNORE) (X)))
#define _LIST_FOLDR_EVAL(X)  _LIST_FOLDR_EVAL1(_LIST_FOLDR_EVAL1(_LIST_FOLDR_EVAL1(_LIST_FOLDR_EVAL1(X))))
#define _LIST_FOLDR_EVAL1(X) _LIST_FOLDR_EVAL2(_LIST_FOLDR_EVAL2(_LIST_FOLDR_EVAL2(_LIST_FOLDR_EVAL2(X))))
#define _LIST_FOLDR_EVAL2(X) _LIST_FOLDR_EVAL3(_LIST_FOLDR_EVAL3(_LIST_FOLDR_EVAL3(_LIST_FOLDR_EVAL3(X))))
#define _LIST_FOLDR_EVAL3(X) X

#define _LIST_FOLDR_P(X) LIST_REST(X)
#define _LIST_FOLDR_P1(X) X

#define _LIST_FOLDR_INIT(X) LIST_FIRST(X)
#define _LIST_FOLDR_INIT1(I) I

#define _LIST_FOLDR(F,N,X,R) DEFER(CAT(_LIST_FOLDR_X, N))(F,X,R)
#define _LIST_FOLDR_X1(F,X,R) R
#define _LIST_FOLDR_X0(F,X,R) _LIST_FOLDR_Y(F,LIST_REST(X),F(LIST_FIRST(X),R))
#define _LIST_FOLDR_Y(F,X,R) DEFER(_LIST_FOLDR_I)()(F,LIST_IS_NIL(X),X,R)
#define _LIST_FOLDR_I() _LIST_FOLDR

#endif