#ifndef C23META_LIST_TAKE_LAST
#define C23META_LIST_TAKE_LAST
#include "../uint32/uint32.h"
#include "../uint32/math/sub.h"
#include "../uint32/cmp/geq.h"

#define LIST_TAKE_LAST(X,N) _LIST_TAKE_LAST_EVAL(_LIST_TAKE_LAST(X, LIST_LENGTH(X), N))
#define _LIST_TAKE_LAST_EVAL(X) X
#define _LIST_TAKE_LAST(X,LEN,N) DEFER(CAT(_LIST_TAKE_LAST_X,U32_GEQ(LEN,N)))(X,LEN,N)
#define _LIST_TAKE_LAST_X1(X,LEN,N) LIST_DROP(X,U32_SUB(LEN,N))
#define _LIST_TAKE_LAST_X0(X,LEN,N) LIST_NIL

#endif