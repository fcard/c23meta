#ifndef C23META_LIST_INTERPOSE
#define C23META_LIST_INTERPOSE

#define LIST_INTERPOSE(X,S) _LIST_INTERPOSE_EVAL(_LIST_INTERPOSE(LIST_IS_NIL(X),X,S))
#define _LIST_INTERPOSE_EVAL(X)  _LIST_INTERPOSE_EVAL1(_LIST_INTERPOSE_EVAL1(_LIST_INTERPOSE_EVAL1(_LIST_INTERPOSE_EVAL1(X))))
#define _LIST_INTERPOSE_EVAL1(X) _LIST_INTERPOSE_EVAL2(_LIST_INTERPOSE_EVAL2(_LIST_INTERPOSE_EVAL2(_LIST_INTERPOSE_EVAL2(X))))
#define _LIST_INTERPOSE_EVAL2(X) _LIST_INTERPOSE_EVAL3(_LIST_INTERPOSE_EVAL3(_LIST_INTERPOSE_EVAL3(_LIST_INTERPOSE_EVAL3(X))))
#define _LIST_INTERPOSE_EVAL3(X) X

#define _LIST_INTERPOSE(N,X,S) DEFER(CAT(_LIST_INTERPOSE_X, N))(X,S)
#define _LIST_INTERPOSE_X1(X,S) LIST_NIL
#define _LIST_INTERPOSE_X0(X,S) DEFER(CAT(_LIST_INTERPOSE_Y,LIST_IS_NIL(LIST_REST(X))))(X,S)
#define _LIST_INTERPOSE_Y1(X,S) X
#define _LIST_INTERPOSE_Y0(X,S) (LIST_FIRST(X), (S, _LIST_INTERPOSE_Z(LIST_REST(X),S)))
#define _LIST_INTERPOSE_Z(X,S) DEFER(_LIST_INTERPOSE_I)()(LIST_IS_NIL(X),X,S)
#define _LIST_INTERPOSE_I() _LIST_INTERPOSE

#endif