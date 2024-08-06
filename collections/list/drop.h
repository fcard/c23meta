#ifndef C23META_LIST_DROP
#define C23META_LIST_DROP

#define LIST_DROP(X,N) _LIST_DROP_C(X,N)
#define _LIST_DROP_C(X,N) _LIST_DROP_EVAL(_LIST_DROP(LIST_IS_EMPTY(X),X,N))
#define _LIST_DROP_EVAL(X)  _LIST_DROP_EVAL1(_LIST_DROP_EVAL1(_LIST_DROP_EVAL1(_LIST_DROP_EVAL1(X))))
#define _LIST_DROP_EVAL1(X) _LIST_DROP_EVAL2(_LIST_DROP_EVAL2(_LIST_DROP_EVAL2(_LIST_DROP_EVAL2(X))))
#define _LIST_DROP_EVAL2(X) _LIST_DROP_EVAL3(_LIST_DROP_EVAL3(_LIST_DROP_EVAL3(_LIST_DROP_EVAL3(X))))
#define _LIST_DROP_EVAL3(X) X

#define _LIST_DROP(NX,X,N) CAT(_LIST_DROP_X, NX)(X,N)
#define _LIST_DROP_X1(X,N) LIST_NIL
#define _LIST_DROP_X0(X,N) CAT(_LIST_DROP_Y,U32_EQ(N,U32_0))(X,N)
#define _LIST_DROP_Y1(X,N) X
#define _LIST_DROP_Y0(X,N) _LIST_DROP_Z(LIST_REST(X),U32_SUB(N,U32_1))
#define _LIST_DROP_Z(X,N) DEFER(_LIST_DROP_I)()(LIST_IS_EMPTY(X),X,N)
#define _LIST_DROP_I() _LIST_DROP

#endif