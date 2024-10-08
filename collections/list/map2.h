#ifndef C23META_LIST_MAP2
#define C23META_LIST_MAP2

#define LIST_MAP2(F,X,Y) _LIST_MAP2_C(F,X,Y)
#define _LIST_MAP2_C(F,X,Y) _LIST_MAP2_EVAL(_LIST_MAP2(F,LIST_IS_NIL(X),LIST_IS_NIL(Y),X,Y))
#define _LIST_MAP2_EVAL(X)  _LIST_MAP2_EVAL1(_LIST_MAP2_EVAL1(_LIST_MAP2_EVAL1(_LIST_MAP2_EVAL1(X))))
#define _LIST_MAP2_EVAL1(X) _LIST_MAP2_EVAL2(_LIST_MAP2_EVAL2(_LIST_MAP2_EVAL2(_LIST_MAP2_EVAL2(X))))
#define _LIST_MAP2_EVAL2(X) _LIST_MAP2_EVAL3(_LIST_MAP2_EVAL3(_LIST_MAP2_EVAL3(_LIST_MAP2_EVAL3(X))))
#define _LIST_MAP2_EVAL3(X) X

#define _LIST_MAP2(F,NX,NY,X,Y) CAT(CAT(_LIST_MAP2_X,NX),NY)(F,X,Y)
#define _LIST_MAP2_X10(F,X,Y) LIST_NIL
#define _LIST_MAP2_X01(F,X,Y) LIST_NIL
#define _LIST_MAP2_X11(F,X,Y) LIST_NIL
#define _LIST_MAP2_X00(F,X,Y) (F(LIST_FIRST(X),LIST_FIRST(Y)),_LIST_MAP2_Y(F,LIST_REST(X),LIST_REST(Y)))
#define _LIST_MAP2_Y(F,X,Y) DEFER(_LIST_MAP2_I)()(F,LIST_IS_NIL(X),LIST_IS_NIL(Y),X,Y)
#define _LIST_MAP2_I() _LIST_MAP2

#endif