#ifndef C23META_LIST_DROP_NTH
#define C23META_LIST_DROP_NTH
#include "../uint32/uint32.h"
#include "../uint32/cmp/eq.h"
#include "../uint32/math/sub.h"

#define LIST_DROP_NTH(X,N) _LIST_DROP_NTH_EVAL(_LIST_DROP_NTH_PREAMBLE(U32_EQ(N,U32_0),X,N))
#define _LIST_DROP_NTH_EVAL(X)  _LIST_DROP_NTH_EVAL1(_LIST_DROP_NTH_EVAL1(_LIST_DROP_NTH_EVAL1(_LIST_DROP_NTH_EVAL1(X))))
#define _LIST_DROP_NTH_EVAL1(X) _LIST_DROP_NTH_EVAL2(_LIST_DROP_NTH_EVAL2(_LIST_DROP_NTH_EVAL2(_LIST_DROP_NTH_EVAL2(X))))
#define _LIST_DROP_NTH_EVAL2(X) _LIST_DROP_NTH_EVAL3(_LIST_DROP_NTH_EVAL3(_LIST_DROP_NTH_EVAL3(_LIST_DROP_NTH_EVAL3(X))))
#define _LIST_DROP_NTH_EVAL3(X) X

#define _LIST_DROP_NTH_PREAMBLE(G,X,N) DEFER(CAT(_LIST_DROP_NTH_P, G))(X,N)
#define _LIST_DROP_NTH_P0(X,N)  _LIST_DROP_NTH(LIST_IS_NIL(X),X,N,N)
#define _LIST_DROP_NTH_P1(X,N)  LIST_NIL

#define _LIST_DROP_NTH(NX,X,N0,N) DEFER(CAT(_LIST_DROP_NTH_X, NX))(X,N0,N)
#define _LIST_DROP_NTH_X1(X,N0,N) LIST_NIL
#define _LIST_DROP_NTH_X0(X,N0,N) DEFER(CAT(_LIST_DROP_NTH_Y,U32_EQ(N,U32_1)))(X,N0,N)
#define _LIST_DROP_NTH_Y1(X,N0,N) _LIST_DROP_NTH_Z(LIST_REST(X),N0,N0)
#define _LIST_DROP_NTH_Y0(X,N0,N) (LIST_FIRST(X),_LIST_DROP_NTH_Z(LIST_REST(X),N0,U32_SUB(N,U32_1)))
#define _LIST_DROP_NTH_Z(X,N0,N) DEFER(_LIST_DROP_NTH_I)()(LIST_IS_NIL(X),X,N0,N)
#define _LIST_DROP_NTH_I() _LIST_DROP_NTH

#endif