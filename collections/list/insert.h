#ifndef C23META_LIST_INSERT
#define C23META_LIST_INSERT

#define LIST_INSERT(X,E,N) _LIST_INSERT_C(X,E,N)
#define _LIST_INSERT_C(X,E,N) _LIST_INSERT_EVAL(_LIST_INSERT(LIST_IS_NIL(X),X,E,N))
#define _LIST_INSERT_EVAL(X)  _LIST_INSERT_EVAL1(_LIST_INSERT_EVAL1(_LIST_INSERT_EVAL1(_LIST_INSERT_EVAL1(X))))
#define _LIST_INSERT_EVAL1(X) _LIST_INSERT_EVAL2(_LIST_INSERT_EVAL2(_LIST_INSERT_EVAL2(_LIST_INSERT_EVAL2(X))))
#define _LIST_INSERT_EVAL2(X) _LIST_INSERT_EVAL3(_LIST_INSERT_EVAL3(_LIST_INSERT_EVAL3(_LIST_INSERT_EVAL3(X))))
#define _LIST_INSERT_EVAL3(X) X

#define _LIST_INSERT(NX,X,E,N) CAT(_LIST_INSERT_X, NX)(X,E,N)
#define _LIST_INSERT_X1(X,E,N) LIST_NIL
#define _LIST_INSERT_X0(X,E,N) CAT(_LIST_INSERT_Y,U32_EQ(N,U32_0))(X,E,N)
#define _LIST_INSERT_Y1(X,E,N) (E, X)
#define _LIST_INSERT_Y0(X,E,N) (LIST_FIRST(X), _LIST_INSERT_Z(LIST_REST(X),E,U32_SUB(N,U32_1)))
#define _LIST_INSERT_Z(X,E,N) DEFER(_LIST_INSERT_I)()(LIST_IS_NIL(X),X,E,N)
#define _LIST_INSERT_I() _LIST_INSERT

#endif