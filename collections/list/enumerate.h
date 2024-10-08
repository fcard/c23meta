#ifndef C23META_LIST_ENUMERATE
#define C23META_LIST_ENUMERATE

#define LIST_ENUMERATE(X) _LIST_ENUMERATE_C(X)
#define _LIST_ENUMERATE_C(X) _LIST_ENUMERATE_EVAL(_LIST_ENUMERATE(LIST_IS_NIL(X),X,U32H_0))
#define _LIST_ENUMERATE_EVAL(X)  _LIST_ENUMERATE_EVAL1(_LIST_ENUMERATE_EVAL1(_LIST_ENUMERATE_EVAL1(_LIST_ENUMERATE_EVAL1(X))))
#define _LIST_ENUMERATE_EVAL1(X) _LIST_ENUMERATE_EVAL2(_LIST_ENUMERATE_EVAL2(_LIST_ENUMERATE_EVAL2(_LIST_ENUMERATE_EVAL2(X))))
#define _LIST_ENUMERATE_EVAL2(X) _LIST_ENUMERATE_EVAL3(_LIST_ENUMERATE_EVAL3(_LIST_ENUMERATE_EVAL3(_LIST_ENUMERATE_EVAL3(X))))
#define _LIST_ENUMERATE_EVAL3(X) X

#define _LIST_ENUMERATE(NX,X,N) CAT(_LIST_ENUMERATE_X, NX)(X,N)
#define _LIST_ENUMERATE_X1(X,N) LIST_NIL
#define _LIST_ENUMERATE_X0(X,N) ((N,LIST_FIRST(X)),_LIST_ENUMERATE_Y(LIST_REST(X),U32H_ADD(N,U32H_1)))
#define _LIST_ENUMERATE_Y(X,N) DEFER(_LIST_ENUMERATE_I)()(LIST_IS_NIL(X),X,N)
#define _LIST_ENUMERATE_I() _LIST_ENUMERATE

#endif