#ifndef C23META_LIST_CONCAT
#define C23META_LIST_CONCAT

#define LIST_CONCAT(X,Y) _LIST_CONCAT_C(X,Y)
#define _LIST_CONCAT_C(X,Y) _LIST_CONCAT_EVAL(_LIST_CONCAT(LIST_IS_NIL(X),X,Y))
#define _LIST_CONCAT_EVAL(X)  _LIST_CONCAT_EVAL1(_LIST_CONCAT_EVAL1(_LIST_CONCAT_EVAL1(_LIST_CONCAT_EVAL1(X))))
#define _LIST_CONCAT_EVAL1(X) _LIST_CONCAT_EVAL2(_LIST_CONCAT_EVAL2(_LIST_CONCAT_EVAL2(_LIST_CONCAT_EVAL2(X))))
#define _LIST_CONCAT_EVAL2(X) _LIST_CONCAT_EVAL3(_LIST_CONCAT_EVAL3(_LIST_CONCAT_EVAL3(_LIST_CONCAT_EVAL3(X))))
#define _LIST_CONCAT_EVAL3(X) X

#define _LIST_CONCAT(N,X,Y) CAT(_LIST_CONCAT_X, N)(X,Y)
#define _LIST_CONCAT_X1(X,Y) Y
#define _LIST_CONCAT_X0(X,Y) (LIST_FIRST(X), _LIST_CONCAT_Y(LIST_REST(X),Y))
#define _LIST_CONCAT_Y(X,Y) DEFER(_LIST_CONCAT_I)()(LIST_IS_NIL(X),X,Y)
#define _LIST_CONCAT_I() _LIST_CONCAT

#endif