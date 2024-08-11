#ifndef C23META_LIST_FLATTEN
#define C23META_LIST_FLATTEN

#define LIST_FLATTEN(X) _LIST_FLATTEN_EVAL(_LIST_FLATTEN(X,LIST_NIL))
#define _LIST_FLATTEN_EVAL(X)  _LIST_FLATTEN_EVAL1(_LIST_FLATTEN_EVAL1(_LIST_FLATTEN_EVAL1(_LIST_FLATTEN_EVAL1(X))))
#define _LIST_FLATTEN_EVAL1(X) _LIST_FLATTEN_EVAL2(_LIST_FLATTEN_EVAL2(_LIST_FLATTEN_EVAL2(_LIST_FLATTEN_EVAL2(X))))
#define _LIST_FLATTEN_EVAL2(X) _LIST_FLATTEN_EVAL3(_LIST_FLATTEN_EVAL3(_LIST_FLATTEN_EVAL3(_LIST_FLATTEN_EVAL3(X))))
#define _LIST_FLATTEN_EVAL3(X) X

#define _LIST_FLATTEN(X,L) DEFER(CAT(_LIST_FLATTEN_X,LIST_IS_NIL(X)))(X,L)
#define _LIST_FLATTEN_X1(X,L) CAT(_LIST_FLATTEN_Z,LIST_IS_NIL(L))(L)
#define _LIST_FLATTEN_X0(X,L) CAT(_LIST_FLATTEN_Y,IS_LIST(LIST_FIRST(X)))(X,L)

#define _LIST_FLATTEN_Y1(X,L) DEFER(_LIST_FLATTEN_I())(LIST_FIRST(X),(LIST_REST(X),L))
#define _LIST_FLATTEN_Y0(X,L) (LIST_FIRST(X),DEFER(_LIST_FLATTEN_I)()(LIST_REST(X),L))

#define _LIST_FLATTEN_Z1(L) LIST_NIL
#define _LIST_FLATTEN_Z0(L) DEFER(_LIST_FLATTEN_I)()(LIST_FIRST(L),LIST_REST(L))

#define _LIST_FLATTEN_I() _LIST_FLATTEN


#endif