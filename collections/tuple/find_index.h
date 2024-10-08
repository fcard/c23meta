#ifndef C23META_TUPLE_FIND_INDEX
#define C23META_TUPLE_FIND_INDEX

#define TUPLE_FIND_INDEX(P,X) _TUPLE_FIND_INDEX_C(P,X)
#define _TUPLE_FIND_INDEX_C(P,X) _TUPLE_FIND_INDEX_EVAL(_TUPLE_FIND_INDEX(P,U32H_0,TUPLE_IS_EMPTY(X),X))
#define _TUPLE_FIND_INDEX_EVAL(X)  _TUPLE_FIND_INDEX_EVAL1(_TUPLE_FIND_INDEX_EVAL1(_TUPLE_FIND_INDEX_EVAL1(_TUPLE_FIND_INDEX_EVAL1(X))))
#define _TUPLE_FIND_INDEX_EVAL1(X) _TUPLE_FIND_INDEX_EVAL2(_TUPLE_FIND_INDEX_EVAL2(_TUPLE_FIND_INDEX_EVAL2(_TUPLE_FIND_INDEX_EVAL2(X))))
#define _TUPLE_FIND_INDEX_EVAL2(X) _TUPLE_FIND_INDEX_EVAL3(_TUPLE_FIND_INDEX_EVAL3(_TUPLE_FIND_INDEX_EVAL3(_TUPLE_FIND_INDEX_EVAL3(X))))
#define _TUPLE_FIND_INDEX_EVAL3(X) X

#define _TUPLE_FIND_INDEX(P,R,N,X) CAT(_TUPLE_FIND_INDEX_X, N)(P,R,X)
#define _TUPLE_FIND_INDEX_X1(P,R,X) U32H_MAX
#define _TUPLE_FIND_INDEX_X0(P,R,X) CAT(_TUPLE_FIND_INDEX_Y,P(TUPLE_FIRST(X)))(P,R,X)
#define _TUPLE_FIND_INDEX_Y1(P,R,X) R
#define _TUPLE_FIND_INDEX_Y0(P,R,X) _TUPLE_FIND_INDEX_Z(P,U32H_ADD(R,U32H_1),TUPLE_REST(X))
#define _TUPLE_FIND_INDEX_Z(P,R,X) DEFER(_TUPLE_FIND_INDEX_I)()(P,R,TUPLE_IS_EMPTY(X),X)
#define _TUPLE_FIND_INDEX_I() _TUPLE_FIND_INDEX

#endif