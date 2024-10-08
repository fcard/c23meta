#ifndef C23META_LIST_SPLIT_AT
#define C23META_LIST_SPLIT_AT

#define LIST_SPLIT_AT(X,N) _LIST_SPLIT_AT_C(X,N)
#define _LIST_SPLIT_AT_C(X,N) _LIST_SPLIT_AT_EVAL(_LIST_SPLIT_AT(LIST_NIL,LIST_IS_NIL(X),X,N))
#define _LIST_SPLIT_AT_EVAL(X)  _LIST_SPLIT_AT_EVAL1(_LIST_SPLIT_AT_EVAL1(_LIST_SPLIT_AT_EVAL1(_LIST_SPLIT_AT_EVAL1(X))))
#define _LIST_SPLIT_AT_EVAL1(X) _LIST_SPLIT_AT_EVAL2(_LIST_SPLIT_AT_EVAL2(_LIST_SPLIT_AT_EVAL2(_LIST_SPLIT_AT_EVAL2(X))))
#define _LIST_SPLIT_AT_EVAL2(X) _LIST_SPLIT_AT_EVAL3(_LIST_SPLIT_AT_EVAL3(_LIST_SPLIT_AT_EVAL3(_LIST_SPLIT_AT_EVAL3(X))))
#define _LIST_SPLIT_AT_EVAL3(X) X

#define _LIST_SPLIT_AT(R,NX,X,N) CAT(_LIST_SPLIT_AT_X, NX)(R,X,N)
#define _LIST_SPLIT_AT_X1(R,X,N) LIST(LIST_REVERSE(R),LIST_NIL)
#define _LIST_SPLIT_AT_X0(R,X,N) CAT(_LIST_SPLIT_AT_Y,U32H_EQ(N,U32H_0))(R,X,N)
#define _LIST_SPLIT_AT_Y1(R,X,N) LIST(LIST_REVERSE(R),LIST_REST(X))
#define _LIST_SPLIT_AT_Y0(R,X,N) _LIST_SPLIT_AT_Z((LIST_FIRST(X),R),LIST_REST(X),U32H_SUB(N,U32H_1))
#define _LIST_SPLIT_AT_Z(R,X,N) DEFER(_LIST_SPLIT_AT_I)()(R,LIST_IS_NIL(X),X,N)
#define _LIST_SPLIT_AT_I() _LIST_SPLIT_AT

#endif