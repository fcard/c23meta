#ifndef C23META_LIST_NTH
#define C23META_LIST_NTH

#define LIST_NTH(X,N) _LIST_NTH_C(X,N)
#define _LIST_NTH_C(X,N) _LIST_NTH_EVAL(_LIST_NTH(LIST_IS_NIL(X),X,N))
#define _LIST_NTH_EVAL(X)  _LIST_NTH_EVAL1(_LIST_NTH_EVAL1(_LIST_NTH_EVAL1(_LIST_NTH_EVAL1(X))))
#define _LIST_NTH_EVAL1(X) _LIST_NTH_EVAL2(_LIST_NTH_EVAL2(_LIST_NTH_EVAL2(_LIST_NTH_EVAL2(X))))
#define _LIST_NTH_EVAL2(X) _LIST_NTH_EVAL3(_LIST_NTH_EVAL3(_LIST_NTH_EVAL3(_LIST_NTH_EVAL3(X))))
#define _LIST_NTH_EVAL3(X) X

#define _LIST_NTH(NX,X,N) CAT(_LIST_NTH_X, NX)(X,N)
#define _LIST_NTH_X1(X,N) LIST_NIL
#define _LIST_NTH_X0(X,N) CAT(_LIST_NTH_Y,U32H_EQ(N,U32H_0))(X,N)
#define _LIST_NTH_Y1(X,N) LIST_FIRST(X)
#define _LIST_NTH_Y0(X,N) _LIST_NTH_Z(LIST_REST(X),U32H_SUB(N,U32H_1))
#define _LIST_NTH_Z(X,N) DEFER(_LIST_NTH_I)()(LIST_IS_NIL(X),X,N)
#define _LIST_NTH_I() _LIST_NTH

#endif