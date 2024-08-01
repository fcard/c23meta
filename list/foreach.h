#ifndef C23META_LIST_FOREACH
#define C23META_LIST_FOREACH

#define LIST_FOREACH(F,X) _LIST_FOREACH_EVAL(_LIST_FOREACH(F,LIST_IS_NIL(X),X))
#define _LIST_FOREACH_EVAL(X)  _LIST_FOREACH_EVAL1(_LIST_FOREACH_EVAL1(_LIST_FOREACH_EVAL1(_LIST_FOREACH_EVAL1(X))))
#define _LIST_FOREACH_EVAL1(X) _LIST_FOREACH_EVAL2(_LIST_FOREACH_EVAL2(_LIST_FOREACH_EVAL2(_LIST_FOREACH_EVAL2(X))))
#define _LIST_FOREACH_EVAL2(X) _LIST_FOREACH_EVAL3(_LIST_FOREACH_EVAL3(_LIST_FOREACH_EVAL3(_LIST_FOREACH_EVAL3(X))))
#define _LIST_FOREACH_EVAL3(X) X
#define _LIST_FOREACH(F,N,X) DEFER(CAT(_LIST_FOREACH_X, N))(F,X)
#define _LIST_FOREACH_X1(F,X)
#define _LIST_FOREACH_X0(F,X) F(LIST_FIRST(X)) _LIST_FOREACH_Y(F,LIST_REST(X))
#define _LIST_FOREACH_Y(F,X) DEFER(_LIST_FOREACH_I)()(F,LIST_IS_NIL(X),X)
#define _LIST_FOREACH_I() _LIST_FOREACH

#endif