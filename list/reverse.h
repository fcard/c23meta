#ifndef C23META_LIST_REVERSE
#define C23META_LIST_REVERSE

#define LIST_REVERSE(X) _LIST_REVERSE_EVAL(_LIST_REVERSE(LIST_NIL,LIST_IS_NIL(X),X))
#define _LIST_REVERSE_EVAL(X)  _LIST_REVERSE_EVAL1(_LIST_REVERSE_EVAL1(_LIST_REVERSE_EVAL1(_LIST_REVERSE_EVAL1(X))))
#define _LIST_REVERSE_EVAL1(X) _LIST_REVERSE_EVAL2(_LIST_REVERSE_EVAL2(_LIST_REVERSE_EVAL2(_LIST_REVERSE_EVAL2(X))))
#define _LIST_REVERSE_EVAL2(X) _LIST_REVERSE_EVAL3(_LIST_REVERSE_EVAL3(_LIST_REVERSE_EVAL3(_LIST_REVERSE_EVAL3(X))))
#define _LIST_REVERSE_EVAL3(X) X

#define _LIST_REVERSE(R,N,X) DEFER(CAT(_LIST_REVERSE_X, N))(R,X)
#define _LIST_REVERSE_X1(R,X) R
#define _LIST_REVERSE_X0(R,X) _LIST_REVERSE_Y((LIST_FIRST(X),R),LIST_REST(X))
#define _LIST_REVERSE_Y(R,X) DEFER(_LIST_REVERSE_I)()(R,LIST_IS_NIL(X),X)
#define _LIST_REVERSE_I() _LIST_REVERSE

#endif